/* Generated from optimizer.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: optimizer.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -extend private-namespace.scm -no-trace -output-file optimizer.c
   unit: optimizer
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[229];
static double C_possibly_force_alignment;


C_noret_decl(f_13202)
static void C_ccall f_13202(C_word c,C_word *av) C_noret;
C_noret_decl(f_13208)
static void C_ccall f_13208(C_word c,C_word *av) C_noret;
C_noret_decl(f_8483)
static void C_ccall f_8483(C_word c,C_word *av) C_noret;
C_noret_decl(f_10321)
static void C_ccall f_10321(C_word c,C_word *av) C_noret;
C_noret_decl(f_7127)
static void C_ccall f_7127(C_word c,C_word *av) C_noret;
C_noret_decl(f_6215)
static void C_ccall f_6215(C_word c,C_word *av) C_noret;
C_noret_decl(f_6217)
static void C_fcall f_6217(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5867)
static void C_ccall f_5867(C_word c,C_word *av) C_noret;
C_noret_decl(f_3913)
static void C_fcall f_3913(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3916)
static void C_ccall f_3916(C_word c,C_word *av) C_noret;
C_noret_decl(f_13232)
static void C_ccall f_13232(C_word c,C_word *av) C_noret;
C_noret_decl(f_4115)
static void C_ccall f_4115(C_word c,C_word *av) C_noret;
C_noret_decl(f_13238)
static void C_ccall f_13238(C_word c,C_word *av) C_noret;
C_noret_decl(f_9468)
static void C_ccall f_9468(C_word c,C_word *av) C_noret;
C_noret_decl(f_9982)
static void C_ccall f_9982(C_word c,C_word *av) C_noret;
C_noret_decl(f_9985)
static void C_fcall f_9985(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4105)
static void C_fcall f_4105(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7157)
static void C_ccall f_7157(C_word c,C_word *av) C_noret;
C_noret_decl(f_7159)
static void C_ccall f_7159(C_word c,C_word *av) C_noret;
C_noret_decl(f_5852)
static void C_ccall f_5852(C_word c,C_word *av) C_noret;
C_noret_decl(f_10287)
static void C_ccall f_10287(C_word c,C_word *av) C_noret;
C_noret_decl(f_9480)
static void C_ccall f_9480(C_word c,C_word *av) C_noret;
C_noret_decl(f_9470)
static void C_ccall f_9470(C_word c,C_word *av) C_noret;
C_noret_decl(f_11194)
static void C_ccall f_11194(C_word c,C_word *av) C_noret;
C_noret_decl(f_11166)
static void C_ccall f_11166(C_word c,C_word *av) C_noret;
C_noret_decl(f_11163)
static void C_ccall f_11163(C_word c,C_word *av) C_noret;
C_noret_decl(f_11160)
static void C_ccall f_11160(C_word c,C_word *av) C_noret;
C_noret_decl(f_8987)
static void C_ccall f_8987(C_word c,C_word *av) C_noret;
C_noret_decl(f_11157)
static void C_ccall f_11157(C_word c,C_word *av) C_noret;
C_noret_decl(f_7020)
static void C_ccall f_7020(C_word c,C_word *av) C_noret;
C_noret_decl(f_8964)
static void C_ccall f_8964(C_word c,C_word *av) C_noret;
C_noret_decl(f_3875)
static void C_ccall f_3875(C_word c,C_word *av) C_noret;
C_noret_decl(f_3873)
static void C_ccall f_3873(C_word c,C_word *av) C_noret;
C_noret_decl(f_4310)
static void C_ccall f_4310(C_word c,C_word *av) C_noret;
C_noret_decl(f_4312)
static void C_fcall f_4312(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3869)
static void C_fcall f_3869(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8479)
static void C_ccall f_8479(C_word c,C_word *av) C_noret;
C_noret_decl(f_8471)
static void C_ccall f_8471(C_word c,C_word *av) C_noret;
C_noret_decl(f_9492)
static void C_ccall f_9492(C_word c,C_word *av) C_noret;
C_noret_decl(f_8706)
static void C_ccall f_8706(C_word c,C_word *av) C_noret;
C_noret_decl(f_3832)
static void C_fcall f_3832(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6368)
static void C_ccall f_6368(C_word c,C_word *av) C_noret;
C_noret_decl(f_7990)
static void C_ccall f_7990(C_word c,C_word *av) C_noret;
C_noret_decl(f_6396)
static void C_fcall f_6396(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3819)
static void C_ccall f_3819(C_word c,C_word *av) C_noret;
C_noret_decl(f_12354)
static void C_ccall f_12354(C_word c,C_word *av) C_noret;
C_noret_decl(f_12350)
static void C_ccall f_12350(C_word c,C_word *av) C_noret;
C_noret_decl(f_6383)
static void C_ccall f_6383(C_word c,C_word *av) C_noret;
C_noret_decl(f_6389)
static void C_ccall f_6389(C_word c,C_word *av) C_noret;
C_noret_decl(f_8442)
static void C_ccall f_8442(C_word c,C_word *av) C_noret;
C_noret_decl(f_3809)
static void C_fcall f_3809(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10444)
static void C_ccall f_10444(C_word c,C_word *av) C_noret;
C_noret_decl(f_5630)
static void C_ccall f_5630(C_word c,C_word *av) C_noret;
C_noret_decl(f_10055)
static void C_ccall f_10055(C_word c,C_word *av) C_noret;
C_noret_decl(f_8451)
static void C_ccall f_8451(C_word c,C_word *av) C_noret;
C_noret_decl(f_5649)
static void C_ccall f_5649(C_word c,C_word *av) C_noret;
C_noret_decl(f_10433)
static void C_ccall f_10433(C_word c,C_word *av) C_noret;
C_noret_decl(f_5641)
static void C_ccall f_5641(C_word c,C_word *av) C_noret;
C_noret_decl(f_10439)
static void C_fcall f_10439(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7750)
static void C_ccall f_7750(C_word c,C_word *av) C_noret;
C_noret_decl(f_6893)
static void C_fcall f_6893(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12861)
static void C_ccall f_12861(C_word c,C_word *av) C_noret;
C_noret_decl(f_8721)
static void C_fcall f_8721(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4449)
static void C_ccall f_4449(C_word c,C_word *av) C_noret;
C_noret_decl(f_9026)
static void C_ccall f_9026(C_word c,C_word *av) C_noret;
C_noret_decl(f_8725)
static void C_ccall f_8725(C_word c,C_word *av) C_noret;
C_noret_decl(f_9022)
static void C_fcall f_9022(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5546)
static void C_fcall f_5546(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5549)
static void C_ccall f_5549(C_word c,C_word *av) C_noret;
C_noret_decl(f_5177)
static void C_fcall f_5177(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10067)
static void C_ccall f_10067(C_word c,C_word *av) C_noret;
C_noret_decl(f_10061)
static void C_ccall f_10061(C_word c,C_word *av) C_noret;
C_noret_decl(f_5180)
static void C_ccall f_5180(C_word c,C_word *av) C_noret;
C_noret_decl(f_10403)
static void C_ccall f_10403(C_word c,C_word *av) C_noret;
C_noret_decl(f_12282)
static void C_ccall f_12282(C_word c,C_word *av) C_noret;
C_noret_decl(f_12255)
static void C_ccall f_12255(C_word c,C_word *av) C_noret;
C_noret_decl(f_7715)
static void C_ccall f_7715(C_word c,C_word *av) C_noret;
C_noret_decl(f_12270)
static void C_ccall f_12270(C_word c,C_word *av) C_noret;
C_noret_decl(f_5160)
static void C_ccall f_5160(C_word c,C_word *av) C_noret;
C_noret_decl(f_12288)
static void C_fcall f_12288(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7724)
static void C_fcall f_7724(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6887)
static void C_fcall f_6887(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6885)
static void C_ccall f_6885(C_word c,C_word *av) C_noret;
C_noret_decl(f_12278)
static void C_ccall f_12278(C_word c,C_word *av) C_noret;
C_noret_decl(f_8561)
static void C_ccall f_8561(C_word c,C_word *av) C_noret;
C_noret_decl(f_8565)
static void C_ccall f_8565(C_word c,C_word *av) C_noret;
C_noret_decl(f_7729)
static void C_ccall f_7729(C_word c,C_word *av) C_noret;
C_noret_decl(f_6870)
static void C_ccall f_6870(C_word c,C_word *av) C_noret;
C_noret_decl(f_6872)
static void C_ccall f_6872(C_word c,C_word *av) C_noret;
C_noret_decl(f_5759)
static void C_ccall f_5759(C_word c,C_word *av) C_noret;
C_noret_decl(f_8535)
static void C_ccall f_8535(C_word c,C_word *av) C_noret;
C_noret_decl(f_5753)
static void C_ccall f_5753(C_word c,C_word *av) C_noret;
C_noret_decl(f_9243)
static void C_ccall f_9243(C_word c,C_word *av) C_noret;
C_noret_decl(f_6335)
static void C_ccall f_6335(C_word c,C_word *av) C_noret;
C_noret_decl(f_6331)
static void C_ccall f_6331(C_word c,C_word *av) C_noret;
C_noret_decl(f_12814)
static void C_ccall f_12814(C_word c,C_word *av) C_noret;
C_noret_decl(f_8545)
static void C_fcall f_8545(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6324)
static void C_ccall f_6324(C_word c,C_word *av) C_noret;
C_noret_decl(f_6320)
static void C_ccall f_6320(C_word c,C_word *av) C_noret;
C_noret_decl(f_12406)
static void C_ccall f_12406(C_word c,C_word *av) C_noret;
C_noret_decl(f_7771)
static void C_ccall f_7771(C_word c,C_word *av) C_noret;
C_noret_decl(f_12408)
static void C_fcall f_12408(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6352)
static void C_fcall f_6352(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_6358)
static void C_fcall f_6358(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10491)
static void C_ccall f_10491(C_word c,C_word *av) C_noret;
C_noret_decl(f_9219)
static void C_ccall f_9219(C_word c,C_word *av) C_noret;
C_noret_decl(f_12179)
static void C_ccall f_12179(C_word c,C_word *av) C_noret;
C_noret_decl(f_5291)
static void C_ccall f_5291(C_word c,C_word *av) C_noret;
C_noret_decl(f_10486)
static void C_fcall f_10486(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12473)
static void C_ccall f_12473(C_word c,C_word *av) C_noret;
C_noret_decl(f_12475)
static void C_fcall f_12475(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5603)
static void C_ccall f_5603(C_word c,C_word *av) C_noret;
C_noret_decl(f_5605)
static void C_fcall f_5605(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5762)
static void C_ccall f_5762(C_word c,C_word *av) C_noret;
C_noret_decl(f_12201)
static void C_ccall f_12201(C_word c,C_word *av) C_noret;
C_noret_decl(f_9252)
static void C_ccall f_9252(C_word c,C_word *av) C_noret;
C_noret_decl(f_12183)
static void C_ccall f_12183(C_word c,C_word *av) C_noret;
C_noret_decl(f_12187)
static void C_ccall f_12187(C_word c,C_word *av) C_noret;
C_noret_decl(f_5744)
static void C_ccall f_5744(C_word c,C_word *av) C_noret;
C_noret_decl(f_5740)
static void C_ccall f_5740(C_word c,C_word *av) C_noret;
C_noret_decl(f_11619)
static void C_fcall f_11619(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11632)
static void C_fcall f_11632(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11640)
static void C_ccall f_11640(C_word c,C_word *av) C_noret;
C_noret_decl(f_5034)
static void C_ccall f_5034(C_word c,C_word *av) C_noret;
C_noret_decl(f_12247)
static void C_ccall f_12247(C_word c,C_word *av) C_noret;
C_noret_decl(f_9149)
static void C_fcall f_9149(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6844)
static void C_ccall f_6844(C_word c,C_word *av) C_noret;
C_noret_decl(f_7287)
static void C_ccall f_7287(C_word c,C_word *av) C_noret;
C_noret_decl(f_11647)
static void C_ccall f_11647(C_word c,C_word *av) C_noret;
C_noret_decl(f_7264)
static void C_ccall f_7264(C_word c,C_word *av) C_noret;
C_noret_decl(f_6834)
static void C_fcall f_6834(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7277)
static void C_fcall f_7277(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5718)
static void C_ccall f_5718(C_word c,C_word *av) C_noret;
C_noret_decl(f_9116)
static void C_ccall f_9116(C_word c,C_word *av) C_noret;
C_noret_decl(f_10223)
static void C_fcall f_10223(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_10220)
static void C_fcall f_10220(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_12444)
static void C_ccall f_12444(C_word c,C_word *av) C_noret;
C_noret_decl(f_10902)
static void C_ccall f_10902(C_word c,C_word *av) C_noret;
C_noret_decl(f_11014)
static void C_ccall f_11014(C_word c,C_word *av) C_noret;
C_noret_decl(f_12450)
static void C_ccall f_12450(C_word c,C_word *av) C_noret;
C_noret_decl(f_10201)
static void C_ccall f_10201(C_word c,C_word *av) C_noret;
C_noret_decl(f_6823)
static void C_ccall f_6823(C_word c,C_word *av) C_noret;
C_noret_decl(f_11032)
static void C_ccall f_11032(C_word c,C_word *av) C_noret;
C_noret_decl(f_5150)
static void C_fcall f_5150(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11001)
static void C_ccall f_11001(C_word c,C_word *av) C_noret;
C_noret_decl(f_5135)
static void C_ccall f_5135(C_word c,C_word *av) C_noret;
C_noret_decl(f_3749)
static void C_ccall f_3749(C_word c,C_word *av) C_noret;
C_noret_decl(f_6867)
static void C_ccall f_6867(C_word c,C_word *av) C_noret;
C_noret_decl(f_6864)
static void C_ccall f_6864(C_word c,C_word *av) C_noret;
C_noret_decl(f_10398)
static void C_fcall f_10398(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10392)
static void C_ccall f_10392(C_word c,C_word *av) C_noret;
C_noret_decl(f_3767)
static void C_fcall f_3767(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3760)
static void C_fcall f_3760(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6857)
static void C_ccall f_6857(C_word c,C_word *av) C_noret;
C_noret_decl(f_7844)
static void C_ccall f_7844(C_word c,C_word *av) C_noret;
C_noret_decl(f_3757)
static void C_ccall f_3757(C_word c,C_word *av) C_noret;
C_noret_decl(f_3755)
static void C_ccall f_3755(C_word c,C_word *av) C_noret;
C_noret_decl(f_3752)
static void C_ccall f_3752(C_word c,C_word *av) C_noret;
C_noret_decl(f_5128)
static void C_ccall f_5128(C_word c,C_word *av) C_noret;
C_noret_decl(f_6807)
static void C_ccall f_6807(C_word c,C_word *av) C_noret;
C_noret_decl(f_11418)
static void C_ccall f_11418(C_word c,C_word *av) C_noret;
C_noret_decl(f_7836)
static void C_ccall f_7836(C_word c,C_word *av) C_noret;
C_noret_decl(f_12191)
static void C_ccall f_12191(C_word c,C_word *av) C_noret;
C_noret_decl(f_13118)
static void C_ccall f_13118(C_word c,C_word *av) C_noret;
C_noret_decl(f_12199)
static void C_ccall f_12199(C_word c,C_word *av) C_noret;
C_noret_decl(f_11426)
static void C_fcall f_11426(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13128)
static void C_ccall f_13128(C_word c,C_word *av) C_noret;
C_noret_decl(f_11420)
static void C_ccall f_11420(C_word c,C_word *av) C_noret;
C_noret_decl(f_4636)
static void C_ccall f_4636(C_word c,C_word *av) C_noret;
C_noret_decl(f_13126)
static void C_ccall f_13126(C_word c,C_word *av) C_noret;
C_noret_decl(f_5888)
static void C_ccall f_5888(C_word c,C_word *av) C_noret;
C_noret_decl(f_11437)
static void C_ccall f_11437(C_word c,C_word *av) C_noret;
C_noret_decl(f_5891)
static void C_fcall f_5891(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5898)
static void C_ccall f_5898(C_word c,C_word *av) C_noret;
C_noret_decl(f_4659)
static void C_fcall f_4659(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4672)
static void C_ccall f_4672(C_word c,C_word *av) C_noret;
C_noret_decl(f_5277)
static void C_ccall f_5277(C_word c,C_word *av) C_noret;
C_noret_decl(f_5274)
static void C_ccall f_5274(C_word c,C_word *av) C_noret;
C_noret_decl(f_5288)
static void C_ccall f_5288(C_word c,C_word *av) C_noret;
C_noret_decl(f_6312)
static void C_ccall f_6312(C_word c,C_word *av) C_noret;
C_noret_decl(f_5281)
static void C_ccall f_5281(C_word c,C_word *av) C_noret;
C_noret_decl(f_12045)
static void C_fcall f_12045(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7816)
static void C_ccall f_7816(C_word c,C_word *av) C_noret;
C_noret_decl(f_4669)
static void C_fcall f_4669(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10025)
static void C_ccall f_10025(C_word c,C_word *av) C_noret;
C_noret_decl(f_5252)
static void C_ccall f_5252(C_word c,C_word *av) C_noret;
C_noret_decl(f_5253)
static void C_fcall f_5253(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4694)
static void C_ccall f_4694(C_word c,C_word *av) C_noret;
C_noret_decl(f_5269)
static void C_ccall f_5269(C_word c,C_word *av) C_noret;
C_noret_decl(f_5266)
static void C_ccall f_5266(C_word c,C_word *av) C_noret;
C_noret_decl(f_5263)
static void C_ccall f_5263(C_word c,C_word *av) C_noret;
C_noret_decl(f_12020)
static void C_ccall f_12020(C_word c,C_word *av) C_noret;
C_noret_decl(f_12002)
static void C_ccall f_12002(C_word c,C_word *av) C_noret;
C_noret_decl(f_5014)
static void C_ccall f_5014(C_word c,C_word *av) C_noret;
C_noret_decl(f_11443)
static void C_ccall f_11443(C_word c,C_word *av) C_noret;
C_noret_decl(f_11448)
static void C_ccall f_11448(C_word c,C_word *av) C_noret;
C_noret_decl(f_12010)
static void C_ccall f_12010(C_word c,C_word *av) C_noret;
C_noret_decl(f_11446)
static void C_ccall f_11446(C_word c,C_word *av) C_noret;
C_noret_decl(f_11451)
static C_word C_fcall f_11451(C_word *a,C_word t0);
C_noret_decl(f_4610)
static void C_ccall f_4610(C_word c,C_word *av) C_noret;
C_noret_decl(f_11344)
static void C_fcall f_11344(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8284)
static void C_ccall f_8284(C_word c,C_word *av) C_noret;
C_noret_decl(f_8286)
static void C_ccall f_8286(C_word c,C_word *av) C_noret;
C_noret_decl(f_6590)
static void C_ccall f_6590(C_word c,C_word *av) C_noret;
C_noret_decl(f_6599)
static void C_fcall f_6599(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4604)
static void C_ccall f_4604(C_word c,C_word *av) C_noret;
C_noret_decl(f_6593)
static void C_ccall f_6593(C_word c,C_word *av) C_noret;
C_noret_decl(f_11315)
static void C_fcall f_11315(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4616)
static void C_ccall f_4616(C_word c,C_word *av) C_noret;
C_noret_decl(f_11325)
static void C_ccall f_11325(C_word c,C_word *av) C_noret;
C_noret_decl(f_11303)
static void C_ccall f_11303(C_word c,C_word *av) C_noret;
C_noret_decl(f_8871)
static void C_ccall f_8871(C_word c,C_word *av) C_noret;
C_noret_decl(f_5114)
static void C_ccall f_5114(C_word c,C_word *av) C_noret;
C_noret_decl(f_5118)
static void C_fcall f_5118(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4200)
static C_word C_fcall f_4200(C_word t0);
C_noret_decl(f_6572)
static void C_fcall f_6572(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6571)
static void C_ccall f_6571(C_word c,C_word *av) C_noret;
C_noret_decl(f_5111)
static void C_ccall f_5111(C_word c,C_word *av) C_noret;
C_noret_decl(f_8897)
static void C_ccall f_8897(C_word c,C_word *av) C_noret;
C_noret_decl(f_8893)
static void C_ccall f_8893(C_word c,C_word *av) C_noret;
C_noret_decl(f_8215)
static void C_fcall f_8215(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8209)
static void C_ccall f_8209(C_word c,C_word *av) C_noret;
C_noret_decl(f_8218)
static void C_fcall f_8218(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9885)
static void C_ccall f_9885(C_word c,C_word *av) C_noret;
C_noret_decl(f_9889)
static void C_ccall f_9889(C_word c,C_word *av) C_noret;
C_noret_decl(f_8229)
static void C_ccall f_8229(C_word c,C_word *av) C_noret;
C_noret_decl(f_11994)
static void C_ccall f_11994(C_word c,C_word *av) C_noret;
C_noret_decl(f_11998)
static void C_ccall f_11998(C_word c,C_word *av) C_noret;
C_noret_decl(f_11990)
static void C_ccall f_11990(C_word c,C_word *av) C_noret;
C_noret_decl(f_8243)
static void C_ccall f_8243(C_word c,C_word *av) C_noret;
C_noret_decl(f_8238)
static void C_ccall f_8238(C_word c,C_word *av) C_noret;
C_noret_decl(f_5698)
static void C_ccall f_5698(C_word c,C_word *av) C_noret;
C_noret_decl(f_4230)
static void C_ccall f_4230(C_word c,C_word *av) C_noret;
C_noret_decl(f_10887)
static void C_ccall f_10887(C_word c,C_word *av) C_noret;
C_noret_decl(f_4248)
static void C_ccall f_4248(C_word c,C_word *av) C_noret;
C_noret_decl(f_6167)
static void C_ccall f_6167(C_word c,C_word *av) C_noret;
C_noret_decl(f_4238)
static void C_ccall f_4238(C_word c,C_word *av) C_noret;
C_noret_decl(f_6190)
static void C_ccall f_6190(C_word c,C_word *av) C_noret;
C_noret_decl(f_6184)
static void C_fcall f_6184(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10892)
static void C_fcall f_10892(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4075)
static void C_ccall f_4075(C_word c,C_word *av) C_noret;
C_noret_decl(f_4072)
static void C_ccall f_4072(C_word c,C_word *av) C_noret;
C_noret_decl(f_4078)
static void C_ccall f_4078(C_word c,C_word *av) C_noret;
C_noret_decl(f_10847)
static void C_ccall f_10847(C_word c,C_word *av) C_noret;
C_noret_decl(f_10844)
static void C_ccall f_10844(C_word c,C_word *av) C_noret;
C_noret_decl(f_4223)
static void C_fcall f_4223(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4227)
static void C_ccall f_4227(C_word c,C_word *av) C_noret;
C_noret_decl(f_11906)
static void C_ccall f_11906(C_word c,C_word *av) C_noret;
C_noret_decl(f_10650)
static void C_ccall f_10650(C_word c,C_word *av) C_noret;
C_noret_decl(f_5919)
static void C_ccall f_5919(C_word c,C_word *av) C_noret;
C_noret_decl(f_9774)
static void C_ccall f_9774(C_word c,C_word *av) C_noret;
C_noret_decl(f_7573)
static void C_ccall f_7573(C_word c,C_word *av) C_noret;
C_noret_decl(f_5925)
static void C_ccall f_5925(C_word c,C_word *av) C_noret;
C_noret_decl(f_5087)
static void C_ccall f_5087(C_word c,C_word *av) C_noret;
C_noret_decl(f_5231)
static void C_ccall f_5231(C_word c,C_word *av) C_noret;
C_noret_decl(f_7942)
static void C_ccall f_7942(C_word c,C_word *av) C_noret;
C_noret_decl(f_10637)
static void C_ccall f_10637(C_word c,C_word *av) C_noret;
C_noret_decl(f_5097)
static void C_fcall f_5097(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5249)
static void C_fcall f_5249(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5090)
static void C_ccall f_5090(C_word c,C_word *av) C_noret;
C_noret_decl(f_5493)
static void C_ccall f_5493(C_word c,C_word *av) C_noret;
C_noret_decl(f_10626)
static void C_ccall f_10626(C_word c,C_word *av) C_noret;
C_noret_decl(f_5215)
static void C_fcall f_5215(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5900)
static void C_ccall f_5900(C_word c,C_word *av) C_noret;
C_noret_decl(f_6557)
static void C_ccall f_6557(C_word c,C_word *av) C_noret;
C_noret_decl(f_6551)
static void C_ccall f_6551(C_word c,C_word *av) C_noret;
C_noret_decl(f_10915)
static void C_ccall f_10915(C_word c,C_word *av) C_noret;
C_noret_decl(f_6554)
static void C_ccall f_6554(C_word c,C_word *av) C_noret;
C_noret_decl(f_5959)
static void C_ccall f_5959(C_word c,C_word *av) C_noret;
C_noret_decl(f_5479)
static void C_ccall f_5479(C_word c,C_word *av) C_noret;
C_noret_decl(f_5475)
static void C_ccall f_5475(C_word c,C_word *av) C_noret;
C_noret_decl(f_6540)
static C_word C_fcall f_6540(C_word t0);
C_noret_decl(f_6544)
static void C_fcall f_6544(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5685)
static void C_ccall f_5685(C_word c,C_word *av) C_noret;
C_noret_decl(f_10683)
static void C_ccall f_10683(C_word c,C_word *av) C_noret;
C_noret_decl(f_12913)
static void C_fcall f_12913(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9333)
static void C_ccall f_9333(C_word c,C_word *av) C_noret;
C_noret_decl(f_9331)
static void C_ccall f_9331(C_word c,C_word *av) C_noret;
C_noret_decl(f_6518)
static void C_ccall f_6518(C_word c,C_word *av) C_noret;
C_noret_decl(f_10827)
static void C_ccall f_10827(C_word c,C_word *av) C_noret;
C_noret_decl(f_10824)
static void C_ccall f_10824(C_word c,C_word *av) C_noret;
C_noret_decl(f_12903)
static void C_ccall f_12903(C_word c,C_word *av) C_noret;
C_noret_decl(f_6508)
static void C_fcall f_6508(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9278)
static void C_ccall f_9278(C_word c,C_word *av) C_noret;
C_noret_decl(f_7044)
static void C_ccall f_7044(C_word c,C_word *av) C_noret;
C_noret_decl(f_6537)
static void C_ccall f_6537(C_word c,C_word *av) C_noret;
C_noret_decl(f_11847)
static void C_ccall f_11847(C_word c,C_word *av) C_noret;
C_noret_decl(f_11842)
static void C_ccall f_11842(C_word c,C_word *av) C_noret;
C_noret_decl(f_7010)
static void C_ccall f_7010(C_word c,C_word *av) C_noret;
C_noret_decl(f_7018)
static void C_ccall f_7018(C_word c,C_word *av) C_noret;
C_noret_decl(f_5391)
static void C_ccall f_5391(C_word c,C_word *av) C_noret;
C_noret_decl(f_7033)
static void C_ccall f_7033(C_word c,C_word *av) C_noret;
C_noret_decl(f_10991)
static void C_fcall f_10991(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11354)
static void C_ccall f_11354(C_word c,C_word *av) C_noret;
C_noret_decl(f_10696)
static void C_ccall f_10696(C_word c,C_word *av) C_noret;
C_noret_decl(f_10692)
static void C_fcall f_10692(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_11949)
static void C_ccall f_11949(C_word c,C_word *av) C_noret;
C_noret_decl(f_10690)
static void C_ccall f_10690(C_word c,C_word *av) C_noret;
C_noret_decl(f_11946)
static void C_ccall f_11946(C_word c,C_word *av) C_noret;
C_noret_decl(f_11943)
static void C_ccall f_11943(C_word c,C_word *av) C_noret;
C_noret_decl(f_11940)
static void C_ccall f_11940(C_word c,C_word *av) C_noret;
C_noret_decl(f_9912)
static void C_ccall f_9912(C_word c,C_word *av) C_noret;
C_noret_decl(f_7002)
static void C_ccall f_7002(C_word c,C_word *av) C_noret;
C_noret_decl(f_7003)
static void C_fcall f_7003(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9359)
static void C_ccall f_9359(C_word c,C_word *av) C_noret;
C_noret_decl(f_7883)
static void C_ccall f_7883(C_word c,C_word *av) C_noret;
C_noret_decl(f_11958)
static void C_fcall f_11958(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11957)
static void C_ccall f_11957(C_word c,C_word *av) C_noret;
C_noret_decl(f_11952)
static void C_ccall f_11952(C_word c,C_word *av) C_noret;
C_noret_decl(f_11953)
static void C_fcall f_11953(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9435)
static void C_ccall f_9435(C_word c,C_word *av) C_noret;
C_noret_decl(f_8818)
static void C_fcall f_8818(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11937)
static void C_ccall f_11937(C_word c,C_word *av) C_noret;
C_noret_decl(f_6158)
static void C_ccall f_6158(C_word c,C_word *av) C_noret;
C_noret_decl(f_10593)
static void C_ccall f_10593(C_word c,C_word *av) C_noret;
C_noret_decl(f_12509)
static void C_fcall f_12509(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4888)
static void C_ccall f_4888(C_word c,C_word *av) C_noret;
C_noret_decl(f_4883)
static void C_ccall f_4883(C_word c,C_word *av) C_noret;
C_noret_decl(f_6141)
static void C_ccall f_6141(C_word c,C_word *av) C_noret;
C_noret_decl(f_6147)
static void C_ccall f_6147(C_word c,C_word *av) C_noret;
C_noret_decl(f_12342)
static void C_ccall f_12342(C_word c,C_word *av) C_noret;
C_noret_decl(f_12566)
static void C_ccall f_12566(C_word c,C_word *av) C_noret;
C_noret_decl(f_12318)
static void C_ccall f_12318(C_word c,C_word *av) C_noret;
C_noret_decl(f_8373)
static void C_ccall f_8373(C_word c,C_word *av) C_noret;
C_noret_decl(f_12322)
static void C_ccall f_12322(C_word c,C_word *av) C_noret;
C_noret_decl(f_4894)
static void C_ccall f_4894(C_word c,C_word *av) C_noret;
C_noret_decl(f_6110)
static void C_ccall f_6110(C_word c,C_word *av) C_noret;
C_noret_decl(f_7370)
static void C_ccall f_7370(C_word c,C_word *av) C_noret;
C_noret_decl(f_7364)
static void C_ccall f_7364(C_word c,C_word *av) C_noret;
C_noret_decl(f_7366)
static void C_ccall f_7366(C_word c,C_word *av) C_noret;
C_noret_decl(f_12534)
static void C_ccall f_12534(C_word c,C_word *av) C_noret;
C_noret_decl(f_7643)
static void C_ccall f_7643(C_word c,C_word *av) C_noret;
C_noret_decl(f_9654)
static void C_ccall f_9654(C_word c,C_word *av) C_noret;
C_noret_decl(f_9609)
static void C_ccall f_9609(C_word c,C_word *av) C_noret;
C_noret_decl(f_9607)
static void C_ccall f_9607(C_word c,C_word *av) C_noret;
C_noret_decl(f_4802)
static void C_ccall f_4802(C_word c,C_word *av) C_noret;
C_noret_decl(f_12595)
static void C_ccall f_12595(C_word c,C_word *av) C_noret;
C_noret_decl(f_4792)
static void C_ccall f_4792(C_word c,C_word *av) C_noret;
C_noret_decl(f_12547)
static void C_ccall f_12547(C_word c,C_word *av) C_noret;
C_noret_decl(f_4468)
static void C_fcall f_4468(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12556)
static void C_fcall f_12556(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4458)
static void C_ccall f_4458(C_word c,C_word *av) C_noret;
C_noret_decl(f_9534)
static void C_fcall f_9534(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9537)
static void C_ccall f_9537(C_word c,C_word *av) C_noret;
C_noret_decl(f_13392)
static void C_ccall f_13392(C_word c,C_word *av) C_noret;
C_noret_decl(f_11742)
static void C_ccall f_11742(C_word c,C_word *av) C_noret;
C_noret_decl(f_3993)
static void C_ccall f_3993(C_word c,C_word *av) C_noret;
C_noret_decl(f_3996)
static void C_ccall f_3996(C_word c,C_word *av) C_noret;
C_noret_decl(f_3999)
static void C_ccall f_3999(C_word c,C_word *av) C_noret;
C_noret_decl(f_4867)
static void C_ccall f_4867(C_word c,C_word *av) C_noret;
C_noret_decl(f_11751)
static void C_fcall f_11751(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7399)
static void C_fcall f_7399(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5455)
static void C_ccall f_5455(C_word c,C_word *av) C_noret;
C_noret_decl(f_4860)
static void C_ccall f_4860(C_word c,C_word *av) C_noret;
C_noret_decl(f_4479)
static void C_ccall f_4479(C_word c,C_word *av) C_noret;
C_noret_decl(f_4472)
static void C_ccall f_4472(C_word c,C_word *av) C_noret;
C_noret_decl(f_7380)
static void C_ccall f_7380(C_word c,C_word *av) C_noret;
C_noret_decl(f_11725)
static void C_ccall f_11725(C_word c,C_word *av) C_noret;
C_noret_decl(f_7389)
static void C_fcall f_7389(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7386)
static void C_ccall f_7386(C_word c,C_word *av) C_noret;
C_noret_decl(f_8082)
static void C_ccall f_8082(C_word c,C_word *av) C_noret;
C_noret_decl(f_11732)
static void C_ccall f_11732(C_word c,C_word *av) C_noret;
C_noret_decl(f_4725)
static void C_ccall f_4725(C_word c,C_word *av) C_noret;
C_noret_decl(f_4728)
static void C_fcall f_4728(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7449)
static void C_fcall f_7449(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11719)
static void C_ccall f_11719(C_word c,C_word *av) C_noret;
C_noret_decl(f_9563)
static void C_ccall f_9563(C_word c,C_word *av) C_noret;
C_noret_decl(f_4745)
static void C_fcall f_4745(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13305)
static void C_ccall f_13305(C_word c,C_word *av) C_noret;
C_noret_decl(f_13301)
static void C_ccall f_13301(C_word c,C_word *av) C_noret;
C_noret_decl(f_4565)
static void C_ccall f_4565(C_word c,C_word *av) C_noret;
C_noret_decl(f_4562)
static void C_ccall f_4562(C_word c,C_word *av) C_noret;
C_noret_decl(f_13318)
static void C_ccall f_13318(C_word c,C_word *av) C_noret;
C_noret_decl(f_4558)
static void C_fcall f_4558(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4554)
static void C_ccall f_4554(C_word c,C_word *av) C_noret;
C_noret_decl(f_4767)
static void C_fcall f_4767(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4765)
static void C_ccall f_4765(C_word c,C_word *av) C_noret;
C_noret_decl(f_4550)
static void C_fcall f_4550(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4002)
static void C_ccall f_4002(C_word c,C_word *av) C_noret;
C_noret_decl(f_5378)
static void C_fcall f_5378(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4758)
static void C_fcall f_4758(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9528)
static void C_ccall f_9528(C_word c,C_word *av) C_noret;
C_noret_decl(f_9522)
static void C_ccall f_9522(C_word c,C_word *av) C_noret;
C_noret_decl(f_5388)
static void C_ccall f_5388(C_word c,C_word *av) C_noret;
C_noret_decl(f_7414)
static void C_ccall f_7414(C_word c,C_word *av) C_noret;
C_noret_decl(f_4570)
static void C_fcall f_4570(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4014)
static void C_fcall f_4014(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4017)
static void C_ccall f_4017(C_word c,C_word *av) C_noret;
C_noret_decl(f_5361)
static void C_fcall f_5361(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_10163)
static void C_ccall f_10163(C_word c,C_word *av) C_noret;
C_noret_decl(f_11799)
static void C_ccall f_11799(C_word c,C_word *av) C_noret;
C_noret_decl(f_11796)
static void C_ccall f_11796(C_word c,C_word *av) C_noret;
C_noret_decl(f_11763)
static void C_fcall f_11763(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12108)
static void C_fcall f_12108(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10179)
static void C_fcall f_10179(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11773)
static void C_ccall f_11773(C_word c,C_word *av) C_noret;
C_noret_decl(f_8691)
static void C_ccall f_8691(C_word c,C_word *av) C_noret;
C_noret_decl(f_10191)
static void C_fcall f_10191(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8339)
static void C_ccall f_8339(C_word c,C_word *av) C_noret;
C_noret_decl(C_optimizer_toplevel)
C_externexport void C_ccall C_optimizer_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_8348)
static void C_fcall f_8348(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11511)
static void C_fcall f_11511(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8183)
static void C_ccall f_8183(C_word c,C_word *av) C_noret;
C_noret_decl(f_11571)
static void C_fcall f_11571(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7065)
static void C_ccall f_7065(C_word c,C_word *av) C_noret;
C_noret_decl(f_7068)
static void C_ccall f_7068(C_word c,C_word *av) C_noret;
C_noret_decl(f_7062)
static void C_ccall f_7062(C_word c,C_word *av) C_noret;
C_noret_decl(f_13439)
static void C_ccall f_13439(C_word c,C_word *av) C_noret;
C_noret_decl(f_7098)
static void C_fcall f_7098(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13405)
static void C_ccall f_13405(C_word c,C_word *av) C_noret;
C_noret_decl(f_13411)
static void C_ccall f_13411(C_word c,C_word *av) C_noret;
C_noret_decl(f_7077)
static void C_ccall f_7077(C_word c,C_word *av) C_noret;
C_noret_decl(f_5401)
static void C_fcall f_5401(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6067)
static void C_ccall f_6067(C_word c,C_word *av) C_noret;
C_noret_decl(f_8157)
static void C_ccall f_8157(C_word c,C_word *av) C_noret;
C_noret_decl(f_6480)
static void C_ccall f_6480(C_word c,C_word *av) C_noret;
C_noret_decl(f_4507)
static void C_ccall f_4507(C_word c,C_word *av) C_noret;
C_noret_decl(f_11588)
static void C_ccall f_11588(C_word c,C_word *av) C_noret;
C_noret_decl(f_8123)
static void C_ccall f_8123(C_word c,C_word *av) C_noret;
C_noret_decl(f_6475)
static void C_ccall f_6475(C_word c,C_word *av) C_noret;
C_noret_decl(f_6471)
static void C_ccall f_6471(C_word c,C_word *av) C_noret;
C_noret_decl(f_7050)
static void C_ccall f_7050(C_word c,C_word *av) C_noret;
C_noret_decl(f_6085)
static void C_fcall f_6085(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6083)
static void C_ccall f_6083(C_word c,C_word *av) C_noret;
C_noret_decl(f_7085)
static void C_ccall f_7085(C_word c,C_word *av) C_noret;
C_noret_decl(f_10763)
static void C_ccall f_10763(C_word c,C_word *av) C_noret;
C_noret_decl(f_11881)
static void C_fcall f_11881(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8314)
static void C_fcall f_8314(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6076)
static void C_fcall f_6076(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4513)
static void C_ccall f_4513(C_word c,C_word *av) C_noret;
C_noret_decl(f_10711)
static void C_ccall f_10711(C_word c,C_word *av) C_noret;
C_noret_decl(f_5443)
static void C_ccall f_5443(C_word c,C_word *av) C_noret;
C_noret_decl(f_11858)
static void C_ccall f_11858(C_word c,C_word *av) C_noret;
C_noret_decl(f_4296)
static C_word C_fcall f_4296(C_word t0,C_word t1);
C_noret_decl(f_5437)
static void C_ccall f_5437(C_word c,C_word *av) C_noret;
C_noret_decl(f_8115)
static void C_ccall f_8115(C_word c,C_word *av) C_noret;
C_noret_decl(f_10376)
static void C_ccall f_10376(C_word c,C_word *av) C_noret;
C_noret_decl(f_7205)
static void C_ccall f_7205(C_word c,C_word *av) C_noret;
C_noret_decl(f_5449)
static void C_ccall f_5449(C_word c,C_word *av) C_noret;
C_noret_decl(f_10733)
static void C_ccall f_10733(C_word c,C_word *av) C_noret;
C_noret_decl(f_10736)
static void C_ccall f_10736(C_word c,C_word *av) C_noret;
C_noret_decl(f_10737)
static void C_fcall f_10737(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11557)
static void C_fcall f_11557(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10724)
static void C_ccall f_10724(C_word c,C_word *av) C_noret;
C_noret_decl(f_10720)
static void C_fcall f_10720(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10727)
static void C_ccall f_10727(C_word c,C_word *av) C_noret;
C_noret_decl(f_5426)
static void C_ccall f_5426(C_word c,C_word *av) C_noret;
C_noret_decl(f_11815)
static void C_fcall f_11815(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13465)
static void C_ccall f_13465(C_word c,C_word *av) C_noret;
C_noret_decl(f_11811)
static void C_ccall f_11811(C_word c,C_word *av) C_noret;
C_noret_decl(f_4182)
static C_word C_fcall f_4182(C_word t0);
C_noret_decl(f_4186)
static void C_fcall f_4186(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6988)
static void C_ccall f_6988(C_word c,C_word *av) C_noret;
C_noret_decl(f_13447)
static void C_ccall f_13447(C_word c,C_word *av) C_noret;
C_noret_decl(f_13443)
static void C_ccall f_13443(C_word c,C_word *av) C_noret;
C_noret_decl(f_6423)
static void C_ccall f_6423(C_word c,C_word *av) C_noret;
C_noret_decl(f_6427)
static void C_ccall f_6427(C_word c,C_word *av) C_noret;
C_noret_decl(f_11808)
static void C_ccall f_11808(C_word c,C_word *av) C_noret;
C_noret_decl(f_13456)
static void C_ccall f_13456(C_word c,C_word *av) C_noret;
C_noret_decl(f_11800)
static void C_fcall f_11800(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6417)
static void C_ccall f_6417(C_word c,C_word *av) C_noret;
C_noret_decl(f_6442)
static void C_ccall f_6442(C_word c,C_word *av) C_noret;
C_noret_decl(f_4390)
static void C_ccall f_4390(C_word c,C_word *av) C_noret;
C_noret_decl(f_8661)
static void C_ccall f_8661(C_word c,C_word *av) C_noret;
C_noret_decl(f_5347)
static void C_ccall f_5347(C_word c,C_word *av) C_noret;
C_noret_decl(f_8657)
static void C_ccall f_8657(C_word c,C_word *av) C_noret;
C_noret_decl(f_6433)
static void C_ccall f_6433(C_word c,C_word *av) C_noret;
C_noret_decl(f_6436)
static void C_ccall f_6436(C_word c,C_word *av) C_noret;
C_noret_decl(f_6430)
static void C_ccall f_6430(C_word c,C_word *av) C_noret;
C_noret_decl(f_12075)
static void C_fcall f_12075(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6439)
static void C_ccall f_6439(C_word c,C_word *av) C_noret;
C_noret_decl(f_5593)
static void C_fcall f_5593(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5312)
static void C_fcall f_5312(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8601)
static void C_ccall f_8601(C_word c,C_word *av) C_noret;
C_noret_decl(f_12098)
static void C_fcall f_12098(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5322)
static void C_ccall f_5322(C_word c,C_word *av) C_noret;
C_noret_decl(f_13017)
static void C_ccall f_13017(C_word c,C_word *av) C_noret;
C_noret_decl(f_9199)
static void C_ccall f_9199(C_word c,C_word *av) C_noret;
C_noret_decl(f_12085)
static void C_ccall f_12085(C_word c,C_word *av) C_noret;
C_noret_decl(f_10120)
static void C_ccall f_10120(C_word c,C_word *av) C_noret;
C_noret_decl(f_9865)
static void C_fcall f_9865(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3783)
static void C_fcall f_3783(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3788)
static void C_ccall f_3788(C_word c,C_word *av) C_noret;
C_noret_decl(f_9859)
static void C_ccall f_9859(C_word c,C_word *av) C_noret;
C_noret_decl(f_6939)
static void C_ccall f_6939(C_word c,C_word *av) C_noret;
C_noret_decl(f_9851)
static void C_ccall f_9851(C_word c,C_word *av) C_noret;
C_noret_decl(f_6930)
static void C_fcall f_6930(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12055)
static void C_ccall f_12055(C_word c,C_word *av) C_noret;
C_noret_decl(f_3790)
static C_word C_fcall f_3790(C_word t0);
C_noret_decl(f_10137)
static void C_ccall f_10137(C_word c,C_word *av) C_noret;
C_noret_decl(f_3797)
static void C_fcall f_3797(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3795)
static void C_fcall f_3795(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10858)
static void C_ccall f_10858(C_word c,C_word *av) C_noret;
C_noret_decl(f_10850)
static void C_ccall f_10850(C_word c,C_word *av) C_noret;
C_noret_decl(f_4152)
static void C_ccall f_4152(C_word c,C_word *av) C_noret;
C_noret_decl(f_4143)
static void C_ccall f_4143(C_word c,C_word *av) C_noret;
C_noret_decl(f_4146)
static void C_fcall f_4146(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4140)
static void C_ccall f_4140(C_word c,C_word *av) C_noret;
C_noret_decl(f_12751)
static void C_ccall f_12751(C_word c,C_word *av) C_noret;
C_noret_decl(f_6293)
static void C_fcall f_6293(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11147)
static void C_fcall f_11147(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6283)
static void C_ccall f_6283(C_word c,C_word *av) C_noret;
C_noret_decl(f_11255)
static void C_ccall f_11255(C_word c,C_word *av) C_noret;
C_noret_decl(f_12731)
static void C_ccall f_12731(C_word c,C_word *av) C_noret;
C_noret_decl(f_11252)
static void C_ccall f_11252(C_word c,C_word *av) C_noret;
C_noret_decl(f_13297)
static void C_ccall f_13297(C_word c,C_word *av) C_noret;
C_noret_decl(f_4136)
static void C_ccall f_4136(C_word c,C_word *av) C_noret;
C_noret_decl(f_4994)
static void C_ccall f_4994(C_word c,C_word *av) C_noret;
C_noret_decl(f_6022)
static void C_ccall f_6022(C_word c,C_word *av) C_noret;
C_noret_decl(f_12617)
static void C_ccall f_12617(C_word c,C_word *av) C_noret;
C_noret_decl(f_4987)
static void C_ccall f_4987(C_word c,C_word *av) C_noret;
C_noret_decl(f_11113)
static void C_ccall f_11113(C_word c,C_word *av) C_noret;
C_noret_decl(f_6953)
static void C_ccall f_6953(C_word c,C_word *av) C_noret;
C_noret_decl(f_11110)
static void C_ccall f_11110(C_word c,C_word *av) C_noret;
C_noret_decl(f_11116)
static void C_ccall f_11116(C_word c,C_word *av) C_noret;
C_noret_decl(f_4982)
static void C_ccall f_4982(C_word c,C_word *av) C_noret;
C_noret_decl(f_6016)
static void C_ccall f_6016(C_word c,C_word *av) C_noret;
C_noret_decl(f_6943)
static void C_fcall f_6943(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6942)
static void C_ccall f_6942(C_word c,C_word *av) C_noret;
C_noret_decl(f_13563)
static void C_ccall f_13563(C_word c,C_word *av) C_noret;
C_noret_decl(f_6975)
static void C_ccall f_6975(C_word c,C_word *av) C_noret;
C_noret_decl(f_9810)
static void C_ccall f_9810(C_word c,C_word *av) C_noret;
C_noret_decl(f_13571)
static void C_ccall f_13571(C_word c,C_word *av) C_noret;
C_noret_decl(f_13576)
static void C_fcall f_13576(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6032)
static void C_ccall f_6032(C_word c,C_word *av) C_noret;
C_noret_decl(f_6631)
static void C_fcall f_6631(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9845)
static void C_ccall f_9845(C_word c,C_word *av) C_noret;
C_noret_decl(f_9843)
static void C_ccall f_9843(C_word c,C_word *av) C_noret;
C_noret_decl(f_6969)
static void C_ccall f_6969(C_word c,C_word *av) C_noret;
C_noret_decl(f_6961)
static void C_ccall f_6961(C_word c,C_word *av) C_noret;
C_noret_decl(f_13586)
static void C_ccall f_13586(C_word c,C_word *av) C_noret;
C_noret_decl(f_4254)
static void C_ccall f_4254(C_word c,C_word *av) C_noret;
C_noret_decl(f_12653)
static void C_ccall f_12653(C_word c,C_word *av) C_noret;
C_noret_decl(f_12655)
static void C_ccall f_12655(C_word c,C_word *av) C_noret;
C_noret_decl(f_6668)
static void C_ccall f_6668(C_word c,C_word *av) C_noret;
C_noret_decl(f_7314)
static void C_fcall f_7314(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9835)
static void C_ccall f_9835(C_word c,C_word *av) C_noret;
C_noret_decl(f_9839)
static void C_ccall f_9839(C_word c,C_word *av) C_noret;
C_noret_decl(f_6917)
static void C_ccall f_6917(C_word c,C_word *av) C_noret;
C_noret_decl(f_13590)
static C_word C_fcall f_13590(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_6650)
static void C_ccall f_6650(C_word c,C_word *av) C_noret;
C_noret_decl(f_6653)
static void C_ccall f_6653(C_word c,C_word *av) C_noret;
C_noret_decl(f_4963)
static void C_ccall f_4963(C_word c,C_word *av) C_noret;
C_noret_decl(f_4960)
static void C_ccall f_4960(C_word c,C_word *av) C_noret;
C_noret_decl(f_3922)
static void C_ccall f_3922(C_word c,C_word *av) C_noret;
C_noret_decl(f_12681)
static void C_ccall f_12681(C_word c,C_word *av) C_noret;
C_noret_decl(f_12689)
static void C_ccall f_12689(C_word c,C_word *av) C_noret;
C_noret_decl(f_5999)
static void C_ccall f_5999(C_word c,C_word *av) C_noret;
C_noret_decl(f_4913)
static void C_ccall f_4913(C_word c,C_word *av) C_noret;
C_noret_decl(f_3956)
static void C_ccall f_3956(C_word c,C_word *av) C_noret;
C_noret_decl(f_12693)
static void C_ccall f_12693(C_word c,C_word *av) C_noret;
C_noret_decl(f_3952)
static void C_ccall f_3952(C_word c,C_word *av) C_noret;
C_noret_decl(f_6625)
static void C_ccall f_6625(C_word c,C_word *av) C_noret;
C_noret_decl(f_12697)
static void C_ccall f_12697(C_word c,C_word *av) C_noret;
C_noret_decl(f_13275)
static void C_ccall f_13275(C_word c,C_word *av) C_noret;
C_noret_decl(f_4900)
static void C_ccall f_4900(C_word c,C_word *av) C_noret;
C_noret_decl(f_3945)
static void C_ccall f_3945(C_word c,C_word *av) C_noret;
C_noret_decl(f_4906)
static void C_ccall f_4906(C_word c,C_word *av) C_noret;
C_noret_decl(f_9726)
static void C_ccall f_9726(C_word c,C_word *av) C_noret;
C_noret_decl(f_6619)
static void C_fcall f_6619(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8774)
static void C_ccall f_8774(C_word c,C_word *av) C_noret;
C_noret_decl(f_4933)
static void C_ccall f_4933(C_word c,C_word *av) C_noret;
C_noret_decl(f_6647)
static void C_ccall f_6647(C_word c,C_word *av) C_noret;
C_noret_decl(f_6640)
static void C_fcall f_6640(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5986)
static void C_ccall f_5986(C_word c,C_word *av) C_noret;
C_noret_decl(f_3960)
static void C_ccall f_3960(C_word c,C_word *av) C_noret;
C_noret_decl(f_13262)
static void C_ccall f_13262(C_word c,C_word *av) C_noret;
C_noret_decl(f_5572)
static void C_ccall f_5572(C_word c,C_word *av) C_noret;
C_noret_decl(f_4953)
static void C_ccall f_4953(C_word c,C_word *av) C_noret;
C_noret_decl(f_10342)
static void C_ccall f_10342(C_word c,C_word *av) C_noret;
C_noret_decl(f_7231)
static void C_fcall f_7231(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3886)
static void C_fcall f_3886(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4357)
static void C_fcall f_4357(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5588)
static void C_ccall f_5588(C_word c,C_word *av) C_noret;
C_noret_decl(f_7241)
static void C_ccall f_7241(C_word c,C_word *av) C_noret;
C_noret_decl(f_13075)
static void C_fcall f_13075(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4371)
static void C_ccall f_4371(C_word c,C_word *av) C_noret;
C_noret_decl(f_7254)
static void C_fcall f_7254(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13044)
static void C_fcall f_13044(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6227)
static void C_ccall f_6227(C_word c,C_word *av) C_noret;
C_noret_decl(f_5566)
static void C_ccall f_5566(C_word c,C_word *av) C_noret;
C_noret_decl(f_5561)
static void C_ccall f_5561(C_word c,C_word *av) C_noret;
C_noret_decl(f_6259)
static void C_ccall f_6259(C_word c,C_word *av) C_noret;
C_noret_decl(f_10305)
static void C_ccall f_10305(C_word c,C_word *av) C_noret;
C_noret_decl(f_7487)
static void C_fcall f_7487(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6241)
static void C_ccall f_6241(C_word c,C_word *av) C_noret;
C_noret_decl(f_6242)
static void C_ccall f_6242(C_word c,C_word *av) C_noret;
C_noret_decl(f_7484)
static void C_ccall f_7484(C_word c,C_word *av) C_noret;

C_noret_decl(trf_6217)
static void C_ccall trf_6217(C_word c,C_word *av) C_noret;
static void C_ccall trf_6217(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6217(t0,t1,t2);}

C_noret_decl(trf_3913)
static void C_ccall trf_3913(C_word c,C_word *av) C_noret;
static void C_ccall trf_3913(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3913(t0,t1);}

C_noret_decl(trf_9985)
static void C_ccall trf_9985(C_word c,C_word *av) C_noret;
static void C_ccall trf_9985(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9985(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4105)
static void C_ccall trf_4105(C_word c,C_word *av) C_noret;
static void C_ccall trf_4105(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4105(t0,t1,t2);}

C_noret_decl(trf_4312)
static void C_ccall trf_4312(C_word c,C_word *av) C_noret;
static void C_ccall trf_4312(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4312(t0,t1,t2);}

C_noret_decl(trf_3869)
static void C_ccall trf_3869(C_word c,C_word *av) C_noret;
static void C_ccall trf_3869(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3869(t0,t1);}

C_noret_decl(trf_3832)
static void C_ccall trf_3832(C_word c,C_word *av) C_noret;
static void C_ccall trf_3832(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3832(t0,t1,t2,t3);}

C_noret_decl(trf_6396)
static void C_ccall trf_6396(C_word c,C_word *av) C_noret;
static void C_ccall trf_6396(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6396(t0,t1);}

C_noret_decl(trf_3809)
static void C_ccall trf_3809(C_word c,C_word *av) C_noret;
static void C_ccall trf_3809(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3809(t0,t1,t2);}

C_noret_decl(trf_10439)
static void C_ccall trf_10439(C_word c,C_word *av) C_noret;
static void C_ccall trf_10439(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10439(t0,t1);}

C_noret_decl(trf_6893)
static void C_ccall trf_6893(C_word c,C_word *av) C_noret;
static void C_ccall trf_6893(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6893(t0,t1,t2,t3);}

C_noret_decl(trf_8721)
static void C_ccall trf_8721(C_word c,C_word *av) C_noret;
static void C_ccall trf_8721(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8721(t0,t1);}

C_noret_decl(trf_9022)
static void C_ccall trf_9022(C_word c,C_word *av) C_noret;
static void C_ccall trf_9022(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9022(t0,t1);}

C_noret_decl(trf_5546)
static void C_ccall trf_5546(C_word c,C_word *av) C_noret;
static void C_ccall trf_5546(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5546(t0,t1);}

C_noret_decl(trf_5177)
static void C_ccall trf_5177(C_word c,C_word *av) C_noret;
static void C_ccall trf_5177(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5177(t0,t1);}

C_noret_decl(trf_12288)
static void C_ccall trf_12288(C_word c,C_word *av) C_noret;
static void C_ccall trf_12288(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12288(t0,t1,t2,t3);}

C_noret_decl(trf_7724)
static void C_ccall trf_7724(C_word c,C_word *av) C_noret;
static void C_ccall trf_7724(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7724(t0,t1);}

C_noret_decl(trf_6887)
static void C_ccall trf_6887(C_word c,C_word *av) C_noret;
static void C_ccall trf_6887(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6887(t0,t1,t2,t3);}

C_noret_decl(trf_8545)
static void C_ccall trf_8545(C_word c,C_word *av) C_noret;
static void C_ccall trf_8545(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8545(t0,t1);}

C_noret_decl(trf_12408)
static void C_ccall trf_12408(C_word c,C_word *av) C_noret;
static void C_ccall trf_12408(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12408(t0,t1,t2);}

C_noret_decl(trf_6352)
static void C_ccall trf_6352(C_word c,C_word *av) C_noret;
static void C_ccall trf_6352(C_word c,C_word *av){
C_word t0=av[8];
C_word t1=av[7];
C_word t2=av[6];
C_word t3=av[5];
C_word t4=av[4];
C_word t5=av[3];
C_word t6=av[2];
C_word t7=av[1];
C_word t8=av[0];
f_6352(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_6358)
static void C_ccall trf_6358(C_word c,C_word *av) C_noret;
static void C_ccall trf_6358(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6358(t0,t1,t2,t3,t4);}

C_noret_decl(trf_10486)
static void C_ccall trf_10486(C_word c,C_word *av) C_noret;
static void C_ccall trf_10486(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10486(t0,t1);}

C_noret_decl(trf_12475)
static void C_ccall trf_12475(C_word c,C_word *av) C_noret;
static void C_ccall trf_12475(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12475(t0,t1,t2);}

C_noret_decl(trf_5605)
static void C_ccall trf_5605(C_word c,C_word *av) C_noret;
static void C_ccall trf_5605(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5605(t0,t1,t2);}

C_noret_decl(trf_11619)
static void C_ccall trf_11619(C_word c,C_word *av) C_noret;
static void C_ccall trf_11619(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11619(t0,t1);}

C_noret_decl(trf_11632)
static void C_ccall trf_11632(C_word c,C_word *av) C_noret;
static void C_ccall trf_11632(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11632(t0,t1);}

C_noret_decl(trf_9149)
static void C_ccall trf_9149(C_word c,C_word *av) C_noret;
static void C_ccall trf_9149(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9149(t0,t1);}

C_noret_decl(trf_6834)
static void C_ccall trf_6834(C_word c,C_word *av) C_noret;
static void C_ccall trf_6834(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6834(t0,t1,t2);}

C_noret_decl(trf_7277)
static void C_ccall trf_7277(C_word c,C_word *av) C_noret;
static void C_ccall trf_7277(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7277(t0,t1,t2,t3);}

C_noret_decl(trf_10223)
static void C_ccall trf_10223(C_word c,C_word *av) C_noret;
static void C_ccall trf_10223(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_10223(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_10220)
static void C_ccall trf_10220(C_word c,C_word *av) C_noret;
static void C_ccall trf_10220(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_10220(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_5150)
static void C_ccall trf_5150(C_word c,C_word *av) C_noret;
static void C_ccall trf_5150(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5150(t0,t1,t2);}

C_noret_decl(trf_10398)
static void C_ccall trf_10398(C_word c,C_word *av) C_noret;
static void C_ccall trf_10398(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10398(t0,t1);}

C_noret_decl(trf_3767)
static void C_ccall trf_3767(C_word c,C_word *av) C_noret;
static void C_ccall trf_3767(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3767(t0,t1);}

C_noret_decl(trf_3760)
static void C_ccall trf_3760(C_word c,C_word *av) C_noret;
static void C_ccall trf_3760(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3760(t0,t1,t2);}

C_noret_decl(trf_11426)
static void C_ccall trf_11426(C_word c,C_word *av) C_noret;
static void C_ccall trf_11426(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11426(t0,t1);}

C_noret_decl(trf_5891)
static void C_ccall trf_5891(C_word c,C_word *av) C_noret;
static void C_ccall trf_5891(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5891(t0,t1);}

C_noret_decl(trf_4659)
static void C_ccall trf_4659(C_word c,C_word *av) C_noret;
static void C_ccall trf_4659(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4659(t0,t1,t2);}

C_noret_decl(trf_12045)
static void C_ccall trf_12045(C_word c,C_word *av) C_noret;
static void C_ccall trf_12045(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12045(t0,t1,t2);}

C_noret_decl(trf_4669)
static void C_ccall trf_4669(C_word c,C_word *av) C_noret;
static void C_ccall trf_4669(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4669(t0,t1);}

C_noret_decl(trf_5253)
static void C_ccall trf_5253(C_word c,C_word *av) C_noret;
static void C_ccall trf_5253(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5253(t0,t1,t2);}

C_noret_decl(trf_11344)
static void C_ccall trf_11344(C_word c,C_word *av) C_noret;
static void C_ccall trf_11344(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11344(t0,t1,t2);}

C_noret_decl(trf_6599)
static void C_ccall trf_6599(C_word c,C_word *av) C_noret;
static void C_ccall trf_6599(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6599(t0,t1);}

C_noret_decl(trf_11315)
static void C_ccall trf_11315(C_word c,C_word *av) C_noret;
static void C_ccall trf_11315(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11315(t0,t1,t2);}

C_noret_decl(trf_5118)
static void C_ccall trf_5118(C_word c,C_word *av) C_noret;
static void C_ccall trf_5118(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5118(t0,t1,t2);}

C_noret_decl(trf_6572)
static void C_ccall trf_6572(C_word c,C_word *av) C_noret;
static void C_ccall trf_6572(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6572(t0,t1,t2);}

C_noret_decl(trf_8215)
static void C_ccall trf_8215(C_word c,C_word *av) C_noret;
static void C_ccall trf_8215(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8215(t0,t1);}

C_noret_decl(trf_8218)
static void C_ccall trf_8218(C_word c,C_word *av) C_noret;
static void C_ccall trf_8218(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8218(t0,t1);}

C_noret_decl(trf_6184)
static void C_ccall trf_6184(C_word c,C_word *av) C_noret;
static void C_ccall trf_6184(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6184(t0,t1);}

C_noret_decl(trf_10892)
static void C_ccall trf_10892(C_word c,C_word *av) C_noret;
static void C_ccall trf_10892(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10892(t0,t1,t2);}

C_noret_decl(trf_4223)
static void C_ccall trf_4223(C_word c,C_word *av) C_noret;
static void C_ccall trf_4223(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4223(t0,t1,t2);}

C_noret_decl(trf_5097)
static void C_ccall trf_5097(C_word c,C_word *av) C_noret;
static void C_ccall trf_5097(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5097(t0,t1);}

C_noret_decl(trf_5249)
static void C_ccall trf_5249(C_word c,C_word *av) C_noret;
static void C_ccall trf_5249(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5249(t0,t1);}

C_noret_decl(trf_5215)
static void C_ccall trf_5215(C_word c,C_word *av) C_noret;
static void C_ccall trf_5215(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5215(t0,t1);}

C_noret_decl(trf_6544)
static void C_ccall trf_6544(C_word c,C_word *av) C_noret;
static void C_ccall trf_6544(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6544(t0,t1,t2,t3);}

C_noret_decl(trf_12913)
static void C_ccall trf_12913(C_word c,C_word *av) C_noret;
static void C_ccall trf_12913(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12913(t0,t1,t2,t3);}

C_noret_decl(trf_6508)
static void C_ccall trf_6508(C_word c,C_word *av) C_noret;
static void C_ccall trf_6508(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6508(t0,t1,t2);}

C_noret_decl(trf_10991)
static void C_ccall trf_10991(C_word c,C_word *av) C_noret;
static void C_ccall trf_10991(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10991(t0,t1,t2);}

C_noret_decl(trf_10692)
static void C_ccall trf_10692(C_word c,C_word *av) C_noret;
static void C_ccall trf_10692(C_word c,C_word *av){
C_word t0=av[7];
C_word t1=av[6];
C_word t2=av[5];
C_word t3=av[4];
C_word t4=av[3];
C_word t5=av[2];
C_word t6=av[1];
C_word t7=av[0];
f_10692(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_7003)
static void C_ccall trf_7003(C_word c,C_word *av) C_noret;
static void C_ccall trf_7003(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7003(t0,t1,t2);}

C_noret_decl(trf_11958)
static void C_ccall trf_11958(C_word c,C_word *av) C_noret;
static void C_ccall trf_11958(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11958(t0,t1,t2);}

C_noret_decl(trf_11953)
static void C_ccall trf_11953(C_word c,C_word *av) C_noret;
static void C_ccall trf_11953(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11953(t0,t1,t2);}

C_noret_decl(trf_8818)
static void C_ccall trf_8818(C_word c,C_word *av) C_noret;
static void C_ccall trf_8818(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8818(t0,t1);}

C_noret_decl(trf_12509)
static void C_ccall trf_12509(C_word c,C_word *av) C_noret;
static void C_ccall trf_12509(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12509(t0,t1,t2);}

C_noret_decl(trf_4468)
static void C_ccall trf_4468(C_word c,C_word *av) C_noret;
static void C_ccall trf_4468(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4468(t0,t1);}

C_noret_decl(trf_12556)
static void C_ccall trf_12556(C_word c,C_word *av) C_noret;
static void C_ccall trf_12556(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12556(t0,t1,t2);}

C_noret_decl(trf_9534)
static void C_ccall trf_9534(C_word c,C_word *av) C_noret;
static void C_ccall trf_9534(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9534(t0,t1);}

C_noret_decl(trf_11751)
static void C_ccall trf_11751(C_word c,C_word *av) C_noret;
static void C_ccall trf_11751(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11751(t0,t1,t2);}

C_noret_decl(trf_7399)
static void C_ccall trf_7399(C_word c,C_word *av) C_noret;
static void C_ccall trf_7399(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7399(t0,t1);}

C_noret_decl(trf_7389)
static void C_ccall trf_7389(C_word c,C_word *av) C_noret;
static void C_ccall trf_7389(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7389(t0,t1,t2);}

C_noret_decl(trf_4728)
static void C_ccall trf_4728(C_word c,C_word *av) C_noret;
static void C_ccall trf_4728(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4728(t0,t1);}

C_noret_decl(trf_7449)
static void C_ccall trf_7449(C_word c,C_word *av) C_noret;
static void C_ccall trf_7449(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7449(t0,t1);}

C_noret_decl(trf_4745)
static void C_ccall trf_4745(C_word c,C_word *av) C_noret;
static void C_ccall trf_4745(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4745(t0,t1);}

C_noret_decl(trf_4558)
static void C_ccall trf_4558(C_word c,C_word *av) C_noret;
static void C_ccall trf_4558(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4558(t0,t1,t2);}

C_noret_decl(trf_4767)
static void C_ccall trf_4767(C_word c,C_word *av) C_noret;
static void C_ccall trf_4767(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4767(t0,t1,t2);}

C_noret_decl(trf_4550)
static void C_ccall trf_4550(C_word c,C_word *av) C_noret;
static void C_ccall trf_4550(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4550(t0,t1,t2);}

C_noret_decl(trf_5378)
static void C_ccall trf_5378(C_word c,C_word *av) C_noret;
static void C_ccall trf_5378(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5378(t0,t1,t2);}

C_noret_decl(trf_4758)
static void C_ccall trf_4758(C_word c,C_word *av) C_noret;
static void C_ccall trf_4758(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4758(t0,t1,t2);}

C_noret_decl(trf_4570)
static void C_ccall trf_4570(C_word c,C_word *av) C_noret;
static void C_ccall trf_4570(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4570(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4014)
static void C_ccall trf_4014(C_word c,C_word *av) C_noret;
static void C_ccall trf_4014(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4014(t0,t1);}

C_noret_decl(trf_5361)
static void C_ccall trf_5361(C_word c,C_word *av) C_noret;
static void C_ccall trf_5361(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_5361(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_11763)
static void C_ccall trf_11763(C_word c,C_word *av) C_noret;
static void C_ccall trf_11763(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11763(t0,t1,t2);}

C_noret_decl(trf_12108)
static void C_ccall trf_12108(C_word c,C_word *av) C_noret;
static void C_ccall trf_12108(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12108(t0,t1);}

C_noret_decl(trf_10179)
static void C_ccall trf_10179(C_word c,C_word *av) C_noret;
static void C_ccall trf_10179(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10179(t0,t1,t2);}

C_noret_decl(trf_10191)
static void C_ccall trf_10191(C_word c,C_word *av) C_noret;
static void C_ccall trf_10191(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10191(t0,t1,t2);}

C_noret_decl(trf_8348)
static void C_ccall trf_8348(C_word c,C_word *av) C_noret;
static void C_ccall trf_8348(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8348(t0,t1,t2);}

C_noret_decl(trf_11511)
static void C_ccall trf_11511(C_word c,C_word *av) C_noret;
static void C_ccall trf_11511(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11511(t0,t1,t2,t3);}

C_noret_decl(trf_11571)
static void C_ccall trf_11571(C_word c,C_word *av) C_noret;
static void C_ccall trf_11571(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11571(t0,t1);}

C_noret_decl(trf_7098)
static void C_ccall trf_7098(C_word c,C_word *av) C_noret;
static void C_ccall trf_7098(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7098(t0,t1);}

C_noret_decl(trf_5401)
static void C_ccall trf_5401(C_word c,C_word *av) C_noret;
static void C_ccall trf_5401(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5401(t0,t1,t2);}

C_noret_decl(trf_6085)
static void C_ccall trf_6085(C_word c,C_word *av) C_noret;
static void C_ccall trf_6085(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6085(t0,t1,t2);}

C_noret_decl(trf_11881)
static void C_ccall trf_11881(C_word c,C_word *av) C_noret;
static void C_ccall trf_11881(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11881(t0,t1,t2);}

C_noret_decl(trf_8314)
static void C_ccall trf_8314(C_word c,C_word *av) C_noret;
static void C_ccall trf_8314(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8314(t0,t1,t2);}

C_noret_decl(trf_6076)
static void C_ccall trf_6076(C_word c,C_word *av) C_noret;
static void C_ccall trf_6076(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6076(t0,t1,t2);}

C_noret_decl(trf_10737)
static void C_ccall trf_10737(C_word c,C_word *av) C_noret;
static void C_ccall trf_10737(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10737(t0,t1,t2);}

C_noret_decl(trf_11557)
static void C_ccall trf_11557(C_word c,C_word *av) C_noret;
static void C_ccall trf_11557(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11557(t0,t1);}

C_noret_decl(trf_10720)
static void C_ccall trf_10720(C_word c,C_word *av) C_noret;
static void C_ccall trf_10720(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10720(t0,t1);}

C_noret_decl(trf_11815)
static void C_ccall trf_11815(C_word c,C_word *av) C_noret;
static void C_ccall trf_11815(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11815(t0,t1,t2);}

C_noret_decl(trf_4186)
static void C_ccall trf_4186(C_word c,C_word *av) C_noret;
static void C_ccall trf_4186(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4186(t0,t1);}

C_noret_decl(trf_11800)
static void C_ccall trf_11800(C_word c,C_word *av) C_noret;
static void C_ccall trf_11800(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11800(t0,t1,t2);}

C_noret_decl(trf_12075)
static void C_ccall trf_12075(C_word c,C_word *av) C_noret;
static void C_ccall trf_12075(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12075(t0,t1,t2);}

C_noret_decl(trf_5593)
static void C_ccall trf_5593(C_word c,C_word *av) C_noret;
static void C_ccall trf_5593(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5593(t0,t1,t2);}

C_noret_decl(trf_5312)
static void C_ccall trf_5312(C_word c,C_word *av) C_noret;
static void C_ccall trf_5312(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5312(t0,t1,t2);}

C_noret_decl(trf_12098)
static void C_ccall trf_12098(C_word c,C_word *av) C_noret;
static void C_ccall trf_12098(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12098(t0,t1,t2);}

C_noret_decl(trf_9865)
static void C_ccall trf_9865(C_word c,C_word *av) C_noret;
static void C_ccall trf_9865(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9865(t0,t1,t2,t3);}

C_noret_decl(trf_3783)
static void C_ccall trf_3783(C_word c,C_word *av) C_noret;
static void C_ccall trf_3783(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3783(t0,t1,t2,t3);}

C_noret_decl(trf_6930)
static void C_ccall trf_6930(C_word c,C_word *av) C_noret;
static void C_ccall trf_6930(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6930(t0,t1,t2,t3);}

C_noret_decl(trf_3797)
static void C_ccall trf_3797(C_word c,C_word *av) C_noret;
static void C_ccall trf_3797(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3797(t0,t1,t2);}

C_noret_decl(trf_3795)
static void C_ccall trf_3795(C_word c,C_word *av) C_noret;
static void C_ccall trf_3795(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3795(t0,t1,t2,t3);}

C_noret_decl(trf_4146)
static void C_ccall trf_4146(C_word c,C_word *av) C_noret;
static void C_ccall trf_4146(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4146(t0,t1,t2,t3);}

C_noret_decl(trf_6293)
static void C_ccall trf_6293(C_word c,C_word *av) C_noret;
static void C_ccall trf_6293(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6293(t0,t1);}

C_noret_decl(trf_11147)
static void C_ccall trf_11147(C_word c,C_word *av) C_noret;
static void C_ccall trf_11147(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11147(t0,t1,t2);}

C_noret_decl(trf_6943)
static void C_ccall trf_6943(C_word c,C_word *av) C_noret;
static void C_ccall trf_6943(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6943(t0,t1,t2);}

C_noret_decl(trf_13576)
static void C_ccall trf_13576(C_word c,C_word *av) C_noret;
static void C_ccall trf_13576(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13576(t0,t1,t2);}

C_noret_decl(trf_6631)
static void C_ccall trf_6631(C_word c,C_word *av) C_noret;
static void C_ccall trf_6631(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6631(t0,t1);}

C_noret_decl(trf_7314)
static void C_ccall trf_7314(C_word c,C_word *av) C_noret;
static void C_ccall trf_7314(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7314(t0,t1,t2,t3);}

C_noret_decl(trf_6619)
static void C_ccall trf_6619(C_word c,C_word *av) C_noret;
static void C_ccall trf_6619(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6619(t0,t1);}

C_noret_decl(trf_6640)
static void C_ccall trf_6640(C_word c,C_word *av) C_noret;
static void C_ccall trf_6640(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6640(t0,t1);}

C_noret_decl(trf_7231)
static void C_ccall trf_7231(C_word c,C_word *av) C_noret;
static void C_ccall trf_7231(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7231(t0,t1,t2);}

C_noret_decl(trf_3886)
static void C_ccall trf_3886(C_word c,C_word *av) C_noret;
static void C_ccall trf_3886(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3886(t0,t1);}

C_noret_decl(trf_4357)
static void C_ccall trf_4357(C_word c,C_word *av) C_noret;
static void C_ccall trf_4357(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4357(t0,t1,t2,t3,t4);}

C_noret_decl(trf_13075)
static void C_ccall trf_13075(C_word c,C_word *av) C_noret;
static void C_ccall trf_13075(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_13075(t0,t1);}

C_noret_decl(trf_7254)
static void C_ccall trf_7254(C_word c,C_word *av) C_noret;
static void C_ccall trf_7254(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7254(t0,t1,t2);}

C_noret_decl(trf_13044)
static void C_ccall trf_13044(C_word c,C_word *av) C_noret;
static void C_ccall trf_13044(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_13044(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7487)
static void C_ccall trf_7487(C_word c,C_word *av) C_noret;
static void C_ccall trf_7487(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7487(t0,t1);}

/* k13200 in k13206 in loop2 in k13015 in k13230 in k13236 in loop1 in a12902 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_13202(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_13202,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_13075(t2,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=C_i_car(((C_word*)t0)[4]);
t3=C_slot(t2,C_fix(1));
t4=C_eqp(lf[13],t3);
if(C_truep(t4)){
t5=((C_word*)t0)[3];
t6=C_u_i_car(t5);
t7=C_u_i_car(((C_word*)t0)[4]);
t8=C_slot(t7,C_fix(2));
t9=C_i_car(t8);
t10=((C_word*)t0)[2];
f_13075(t10,C_eqp(t6,t9));}
else{
t5=((C_word*)t0)[2];
f_13075(t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
f_13075(t2,C_SCHEME_FALSE);}}}

/* k13206 in loop2 in k13015 in k13230 in k13236 in loop1 in a12902 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_13208(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_13208,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_13075(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13202,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_u_i_car(((C_word*)t0)[5]);
/* optimizer.scm:721: get */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=t3;
av2[4]=lf[98];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k8481 in k8477 in k8469 in k8449 in k8440 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,1)))){
C_save_and_reclaim((void *)f_8483,2,av);}
a=C_alloc(20);
t2=C_a_i_list5(&a,5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);
t3=((C_word*)t0)[6];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[7],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10319 in a10304 in rec in scan in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10321,2,av);}
/* optimizer.scm:1396: rec */
t2=((C_word*)((C_word*)t0)[2])[1];
f_10223(t2,((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,C_SCHEME_FALSE,t1);}

/* a7126 in k7096 in a7084 in k7063 in k7060 in k7000 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,1)))){
C_save_and_reclaim((void *)f_7127,4,av);}
a=C_alloc(19);
t4=C_a_i_list1(&a,1,t2);
t5=C_a_i_record4(&a,4,lf[14],lf[15],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t6=C_a_i_list2(&a,2,t5,t3);
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[6],t4,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k6213 in k6239 in k6281 in k6182 in k6165 in k6139 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6215,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop875 in k6239 in k6281 in k6182 in k6165 in k6139 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_6217(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6217,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6227,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:490: g876 */
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

/* k5865 in k5850 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5867(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5867,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=C_slot(t1,C_fix(1));
t3=C_eqp(lf[11],t2);
if(C_truep(t3)){
t4=C_slot(t1,C_fix(2));
t5=C_i_caddr(t4);
t6=t5;
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5888,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t8=C_i_car(t6);
/* optimizer.scm:339: test */
t9=((C_word*)((C_word*)t0)[5])[1];
f_4146(t9,t7,t8,lf[60]);}
else{
t7=((C_word*)t0)[2];
f_5177(t7,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[2];
f_5177(t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
f_5177(t2,C_SCHEME_FALSE);}}

/* k3911 in scan in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_fcall f_3913(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_3913,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3916,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* optimizer.scm:75: scan */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3832(t4,t2,t3,((C_word*)t0)[7]);}
else{
t2=C_eqp(((C_word*)t0)[8],lf[6]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3945,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3960,a[2]=((C_word*)t0)[10],a[3]=t3,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:82: butlast */
t5=*((C_word*)lf[9]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=C_eqp(((C_word*)t0)[8],lf[10]);
t4=(C_truep(t3)?t3:C_eqp(((C_word*)t0)[8],lf[11]));
if(C_truep(t4)){
t5=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eqp(((C_word*)t0)[8],lf[12]);
if(C_truep(t5)){
/* optimizer.scm:87: touch */
t6=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t6;
av2[1]=(
  /* optimizer.scm:87: touch */
  f_3790(((C_word*)((C_word*)t0)[2])[1])
);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(((C_word*)t0)[8],lf[13]);
if(C_truep(t6)){
t7=C_i_car(((C_word*)t0)[9]);
t8=t7;
t9=C_i_car(((C_word*)t0)[4]);
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3993,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[6],a[4]=t8,a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[14],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:92: scan */
t11=((C_word*)((C_word*)t0)[5])[1];
f_3832(t11,t10,t9,((C_word*)t0)[7]);}
else{
/* optimizer.scm:106: scan-each */
t7=((C_word*)((C_word*)t0)[10])[1];
f_3795(t7,((C_word*)t0)[6],((C_word*)t0)[4],((C_word*)t0)[7]);}}}}}}

/* k3914 in k3911 in scan in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_ccall f_3916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3916,2,av);}
a=C_alloc(7);
t2=(
  /* optimizer.scm:76: touch */
  f_3790(((C_word*)((C_word*)t0)[2])[1])
);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3922,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t4=C_u_i_car(((C_word*)t0)[4]);
/* optimizer.scm:77: scan */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3832(t5,t3,t4,((C_word*)t0)[7]);}

/* k13230 in k13236 in loop1 in a12902 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_13232(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_13232,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_car(((C_word*)t0)[3]);
t3=C_slot(t2,C_fix(2));
t4=t3;
t5=C_slot(t2,C_fix(3));
t6=t5;
t7=C_slot(t2,C_fix(1));
t8=C_eqp(t7,lf[15]);
if(C_truep(t8)){
t9=C_u_i_car(((C_word*)t0)[4]);
t10=C_a_i_cons(&a,2,t9,((C_word*)t0)[5]);
t11=C_i_cadr(((C_word*)t0)[3]);
/* optimizer.scm:707: loop1 */
t12=((C_word*)((C_word*)t0)[6])[1];
f_12913(t12,((C_word*)t0)[2],t10,t11);}
else{
t9=C_eqp(t7,lf[13]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13017,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:709: reverse */
t11=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t10=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}}}

/* k4113 in for-each-loop110 in k4076 in k4073 in k4070 in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_ccall f_4115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4115,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4105(t3,((C_word*)t0)[4],t2);}

/* k13236 in loop1 in a12902 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_13238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_13238,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13232,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_u_i_car(((C_word*)t0)[4]);
/* optimizer.scm:702: get */
t4=*((C_word*)lf[33]+1);{
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
av2[4]=lf[98];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k9466 in k9433 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,1)))){
C_save_and_reclaim((void *)f_9468,2,av);}
a=C_alloc(16);
t2=C_a_i_record4(&a,4,lf[14],lf[144],((C_word*)t0)[2],t1);
t3=C_a_i_list2(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* ##compiler#transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9982(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(39,c,8)))){
C_save_and_reclaim((void *)f_9982,4,av);}
a=C_alloc(39);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_fix(0);
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9985,a[2]=t17,a[3]=t7,a[4]=t9,a[5]=t11,a[6]=t13,a[7]=t15,a[8]=t3,tmp=(C_word)a,a+=9,tmp));
t19=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10220,a[2]=t11,a[3]=t3,a[4]=t9,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t20=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10692,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11443,a[2]=t1,a[3]=t5,a[4]=t13,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1570: debugging */
t22=*((C_word*)lf[17]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t22;
av2[1]=t21;
av2[2]=lf[28];
av2[3]=lf[185];
((C_proc)(void*)(*((C_word*)t22+1)))(4,av2);}}

/* walk in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_9985(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(22,0,4)))){
C_save_and_reclaim_args((void *)trf_9985,5,t0,t1,t2,t3,t4);}
a=C_alloc(22);
t5=t3;
t6=C_slot(t5,C_fix(2));
t7=t3;
t8=C_slot(t7,C_fix(3));
t9=t8;
t10=t3;
t11=C_slot(t10,C_fix(1));
t12=C_eqp(t11,lf[11]);
if(C_truep(t12)){
t13=C_i_caddr(t6);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10025,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t4,a[9]=((C_word*)t0)[5],a[10]=t9,a[11]=((C_word*)t0)[6],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t2)){
t16=C_u_i_cdr(t6);
if(C_truep(C_u_i_car(t16))){
t17=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10137,a[2]=t15,a[3]=t14,a[4]=t3,a[5]=t9,a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=t4,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:1355: get */
t18=*((C_word*)lf[33]+1);{
C_word av2[5];
av2[0]=t18;
av2[1]=t17;
av2[2]=((C_word*)t0)[8];
av2[3]=t2;
av2[4]=lf[99];
((C_proc)(void*)(*((C_word*)t18+1)))(5,av2);}}
else{
t17=t15;{
C_word av2[2];
av2[0]=t17;
av2[1]=C_SCHEME_FALSE;
f_10025(2,av2);}}}
else{
t16=t15;{
C_word av2[2];
av2[0]=t16;
av2[1]=C_SCHEME_FALSE;
f_10025(2,av2);}}}
else{
t13=C_eqp(t11,lf[13]);
if(C_truep(t13)){
t14=C_i_car(t6);
t15=C_i_car(t9);
/* optimizer.scm:1369: walk */
t21=t1;
t22=t14;
t23=t15;
t24=C_SCHEME_FALSE;
t1=t21;
t2=t22;
t3=t23;
t4=t24;
goto loop;}
else{
t14=C_eqp(t11,lf[6]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10163,a[2]=t9,a[3]=((C_word*)t0)[6],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t16=C_i_car(t6);
t17=C_i_car(t9);
/* optimizer.scm:1371: walk */
t21=t15;
t22=t16;
t23=t17;
t24=t3;
t1=t21;
t2=t22;
t3=t23;
t4=t24;
goto loop;}
else{
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10179,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t16=C_i_check_list_2(t9,lf[2]);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10191,a[2]=t18,a[3]=t15,tmp=(C_word)a,a+=4,tmp));
t20=((C_word*)t18)[1];
f_10191(t20,t1,t9);}}}}

/* for-each-loop110 in k4076 in k4073 in k4070 in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_fcall f_4105(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_4105,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4115,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_SCHEME_END_OF_LIST;
if(C_truep(C_i_nullp(t5))){
/* tweaks.scm:54: ##sys#put! */
t6=*((C_word*)lf[23]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[24];
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t6=C_i_car(t5);
/* tweaks.scm:54: ##sys#put! */
t7=*((C_word*)lf[23]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[24];
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7155 in k7096 in a7084 in k7063 in k7060 in k7000 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7157,2,av);}
/* optimizer.scm:888: fold-right */
t2=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7158 in k7096 in a7084 in k7063 in k7060 in k7000 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7159,4,av);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7205,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:896: gensym */
t5=*((C_word*)lf[83]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k5850 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5852(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5852,2,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_slot(t2,C_fix(1));
t4=C_eqp(lf[3],t3);
if(C_truep(t4)){
t5=C_u_i_car(((C_word*)t0)[2]);
t6=C_slot(t5,C_fix(2));
t7=C_i_car(t6);
t8=t7;
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5867,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5959,a[2]=t9,a[3]=((C_word*)t0)[5],a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:335: test */
t11=((C_word*)((C_word*)t0)[5])[1];
f_4146(t11,t10,t8,lf[99]);}
else{
t9=((C_word*)t0)[3];
f_5177(t9,C_SCHEME_FALSE);}}
else{
t5=((C_word*)t0)[3];
f_5177(t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
f_5177(t2,C_SCHEME_FALSE);}}

/* k10285 in rec in scan in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10287(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_10287,2,av);}
a=C_alloc(4);
t2=C_i_not(t1);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_memq(((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_i_not(t3);
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=((C_word*)((C_word*)t0)[5])[1];
if(C_truep(t5)){
t6=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[6])[1],C_fix(2));
t7=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t6);
t8=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}}}

/* a9479 in k9433 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9480(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_9480,4,av);}
a=C_alloc(5);
t4=t2;
t5=t3;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9492,a[2]=t1,a[3]=t4,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_i_caddr(((C_word*)t0)[2]);
/* optimizer.scm:1244: qnode */
t8=*((C_word*)lf[40]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* a9469 in k9433 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9470(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_9470,2,av);}
a=C_alloc(4);
t2=C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
/* optimizer.scm:1242: split-at */
t3=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k11192 in k11158 in k11155 in g2379 in rec in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11194,2,av);}
/* optimizer.scm:1504: node-parameters-set! */
t2=*((C_word*)lf[122]+1);{
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

/* k11164 in k11161 in k11158 in k11155 in g2379 in rec in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 in ... */
static void C_ccall f_11166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11166,2,av);}
/* optimizer.scm:1508: rec */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
f_11032(3,av2);}}

/* k11161 in k11158 in k11155 in g2379 in rec in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11163(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_11163,2,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11166,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list2(&a,2,C_SCHEME_FALSE,((C_word*)t0)[5]);
t4=C_i_cddr(((C_word*)t0)[6]);
t5=C_a_i_record4(&a,4,lf[14],lf[171],t3,t4);
t6=C_a_i_list2(&a,2,t5,((C_word*)t0)[4]);
/* optimizer.scm:1505: node-subexpressions-set! */
t7=*((C_word*)lf[121]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k11158 in k11155 in g2379 in rec in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_11160,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11163,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11194,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[8],C_fix(2));
t5=C_i_caddr(t4);
/* optimizer.scm:1504: take */
t6=*((C_word*)lf[173]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k8985 in k8962 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8987(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8987,2,av);}
a=C_alloc(14);
if(C_truep(t1)){
t2=*((C_word*)lf[145]+1);
t3=(C_truep(*((C_word*)lf[145]+1))?*((C_word*)lf[145]+1):((C_word*)t0)[2]);
if(C_truep(t3)){
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9022,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9026,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(C_truep(((C_word*)t0)[8])?(C_truep(C_fixnum_greaterp(((C_word*)t0)[7],C_fix(0)))?C_fixnum_less_or_equal_p(((C_word*)t0)[7],C_fix(8)):C_SCHEME_FALSE):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_i_cadr(((C_word*)t0)[9]);
/* optimizer.scm:1171: conc */
t10=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=t9;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
t9=t7;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_i_cadr(((C_word*)t0)[9]);
f_9026(2,av2);}}}
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

/* k11155 in g2379 in rec in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_11157,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11160,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:1503: node-class-set! */
t3=*((C_word*)lf[170]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=lf[6];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a7019 in k7008 in g1390 in k7000 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_7020,3,av);}
a=C_alloc(4);
t3=C_eqp(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7033,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cdr(t2);
/* optimizer.scm:868: lset<= */
t6=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=*((C_word*)lf[27]+1);
av2[3]=t5;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* k8962 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8964(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8964,2,av);}
a=C_alloc(10);
t2=t1;
if(C_truep(*((C_word*)lf[143]+1))){
t3=C_i_not(((C_word*)t0)[2]);
t4=(C_truep(t3)?t3:C_i_nequalp(((C_word*)t0)[3],((C_word*)t0)[2]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8987,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[3],a[8]=t2,a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t6=((C_word*)t0)[10];
/* tweaks.scm:51: ##sys#get */
t7=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t5=((C_word*)t0)[7];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[7];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a3874 in k3867 in scan in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_ccall f_3875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3875,3,av);}
t3=C_i_car(t2);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_eqp(t3,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3871 in k3867 in scan in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_ccall f_3873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3873,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4308 in k4246 in a4237 in k4225 in simplify in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4310,2,av);}{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
C_apply(5,av2);}}

/* map-loop224 in k4246 in a4237 in k4225 in simplify in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_4312(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_4312,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* optimizer.scm:156: g230 */
  f_4296(((C_word*)t0)[2],t3)
);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t5);
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

/* k3867 in scan in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_fcall f_3869(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_3869,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3873,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3875,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:72: remove */
t4=*((C_word*)lf[4]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k8477 in k8469 in k8449 in k8440 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8479(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8479,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8483,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=((C_word*)t0)[7];
t5=C_u_i_cdr(t4);
if(C_truep(C_i_nullp(t5))){
t6=C_i_caddr(((C_word*)t0)[8]);
/* optimizer.scm:1074: varnode */
t7=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_i_cadr(((C_word*)t0)[7]);
f_8483(2,av2);}}}

/* k8469 in k8449 in k8440 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8471(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8471,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_i_car(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8479,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t6=C_i_cadr(((C_word*)t0)[6]);
/* optimizer.scm:1072: qnode */
t7=*((C_word*)lf[40]+1);{
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

/* k9490 in a9479 in k9433 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_9492,2,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:1243: append */
t3=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8704 in k8689 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8706(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8706,2,av);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8721,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[6]))){
t5=((C_word*)t0)[6];
t6=C_u_i_cdr(t5);
t7=t4;
f_8721(t7,C_a_i_cons(&a,2,C_SCHEME_TRUE,t6));}
else{
t5=t4;
f_8721(t5,((C_word*)t0)[6]);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* scan in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_fcall f_3832(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_3832,4,t0,t1,t2,t3);}
a=C_alloc(15);
t4=t2;
t5=C_slot(t4,C_fix(2));
t6=t5;
t7=t2;
t8=C_slot(t7,C_fix(3));
t9=t8;
t10=t2;
t11=C_slot(t10,C_fix(1));
t12=t11;
t13=C_eqp(t12,lf[3]);
if(C_truep(t13)){
t14=C_i_car(t6);
t15=t14;
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3869,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t15,tmp=(C_word)a,a+=5,tmp);
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3886,a[2]=t15,a[3]=((C_word*)t0)[3],a[4]=t16,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_memq(t15,t3))){
t18=t17;
f_3886(t18,C_SCHEME_FALSE);}
else{
t18=C_i_memq(t15,((C_word*)((C_word*)t0)[3])[1]);
t19=t17;
f_3886(t19,C_i_not(t18));}}
else{
t14=C_eqp(t12,lf[5]);
t15=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3913,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t9,a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=t3,a[8]=t12,a[9]=t6,a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=t2,a[13]=((C_word*)t0)[8],a[14]=((C_word*)t0)[3],tmp=(C_word)a,a+=15,tmp);
if(C_truep(t14)){
t16=t15;
f_3913(t16,t14);}
else{
t16=C_eqp(t12,lf[21]);
t17=t15;
f_3913(t17,(C_truep(t16)?t16:C_eqp(t12,lf[22])));}}}

/* k6366 in lp in walk-generic in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6368,2,av);}
a=C_alloc(5);
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6383,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:511: reverse */
t3=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k7988 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7990(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,1)))){
C_save_and_reclaim((void *)f_7990,2,av);}
a=C_alloc(33);
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
t5=C_a_i_list1(&a,1,t4);
t6=C_i_cadr(((C_word*)t0)[2]);
t7=C_a_i_list1(&a,1,t6);
t8=((C_word*)t0)[3];
t9=C_a_i_record4(&a,4,lf[14],lf[144],t7,t8);
t10=C_a_i_list1(&a,1,t9);
t11=C_a_i_record4(&a,4,lf[14],lf[144],t5,t10);
t12=C_a_i_list2(&a,2,((C_word*)t0)[4],t11);
t13=((C_word*)t0)[5];
t14=t13;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],t2,t12);
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k6394 in k6387 in lp in walk-generic in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_6396(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_6396,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
/* optimizer.scm:514: lp */
t5=((C_word*)((C_word*)t0)[5])[1];
f_6358(t5,((C_word*)t0)[6],t1,t3,t4);}

/* k3817 in for-each-loop42 in scan-each in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_ccall f_3819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3819,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3809(t3,((C_word*)t0)[4],t2);}

/* k12352 in k12106 in descend in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 in ... */
static void C_ccall f_12354(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12354,2,av);}
a=C_alloc(20);
t2=C_a_i_list1(&a,1,t1);
t3=t2;
t4=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_12350,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[2],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
/* optimizer.scm:1721: gensym */
t7=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[190];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k12348 in k12352 in k12106 in descend in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in ... */
static void C_ccall f_12350(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(37,c,2)))){
C_save_and_reclaim((void *)f_12350,2,av);}
a=C_alloc(37);
t2=C_a_i_list4(&a,4,t1,C_SCHEME_TRUE,((C_word*)t0)[2],C_fix(0));
t3=t2;
t4=C_a_i_minus(&a,2,((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t5=C_a_i_list1(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_12247,a[2]=t6,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12342,a[2]=((C_word*)t0)[9],a[3]=t7,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[12],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1728: varnode */
t9=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[13];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k6381 in k6366 in lp in walk-generic in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_6383,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_record4(&a,4,lf[14],t3,t4,t1);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k6387 in lp in walk-generic in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6389(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6389,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6396,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
t6=t3;
f_6396(t6,C_eqp(t2,t5));}
else{
t4=t3;
f_6396(t4,C_SCHEME_FALSE);}}

/* k8440 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8442,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_length(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8451,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1067: < */{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t3;
av2[2]=C_fix(0);
av2[3]=t2;
av2[4]=C_fix(3);
C_lessp(5,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* for-each-loop42 in scan-each in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_fcall f_3809(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3809,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3819,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:41: g43 */
t5=((C_word*)t0)[3];
f_3797(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a10443 in k10437 in k10431 in rec in scan in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10444,3,av);}
/* optimizer.scm:1423: rec */
t3=((C_word*)((C_word*)t0)[2])[1];
f_10223(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k5628 in map-loop735 in k5639 in a5571 in k5559 in k5547 in k5544 in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 in ... */
static void C_ccall f_5630(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5630,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5605(t6,((C_word*)t0)[5],t5);}

/* k10053 in k10135 in walk in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_10055,2,av);}
a=C_alloc(11);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10061,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:1358: get-list */
t4=*((C_word*)lf[124]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
av2[3]=((C_word*)t0)[6];
av2[4]=lf[98];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_10025(2,av2);}}}

/* k8449 in k8440 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8451(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_8451,2,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=C_a_i_list2(&a,2,C_SCHEME_FALSE,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8471,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t5,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t7=((C_word*)t0)[2];
t8=C_u_i_car(t7);
/* optimizer.scm:1069: varnode */
t9=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t6;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5647 in a5571 in k5559 in k5547 in k5544 in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5649,2,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:436: append */
t3=*((C_word*)lf[7]+1);{
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

/* k10431 in rec in scan in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10433(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10433,2,av);}
a=C_alloc(10);
t2=C_i_zerop(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10439,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_10439(t4,t2);}
else{
t4=((C_word*)((C_word*)t0)[6])[1];
if(C_truep(t4)){
t5=t3;
f_10439(t5,C_SCHEME_FALSE);}
else{
t5=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[7])[1],t1);
t6=C_mutate2(((C_word *)((C_word*)t0)[7])+1,t5);
t7=t3;
f_10439(t7,C_SCHEME_TRUE);}}}

/* k5639 in a5571 in k5559 in k5547 in k5544 in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5641(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_5641,2,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5603,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5605,a[2]=((C_word*)t0)[8],a[3]=t5,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5605(t7,t3,t2);}

/* k10437 in k10431 in rec in scan in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_10439(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_10439,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10444,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1423: every */
t3=*((C_word*)lf[43]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k7748 in a7728 in k7722 in k7713 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7750(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,1)))){
C_save_and_reclaim((void *)f_7750,2,av);}
a=C_alloc(14);
t2=C_a_i_list1(&a,1,t1);
t3=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=((C_word*)t0)[4];
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[6],t2,t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* find in find-path in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_6893(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_6893,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_i_memq(t2,t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_assq(t2,((C_word*)((C_word*)t0)[2])[1]);
t5=C_i_cdr(t4);
t6=C_i_memq(((C_word*)t0)[3],t5);
if(C_truep(t6)){
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_a_i_cons(&a,2,t2,t3);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6917,a[2]=((C_word*)t0)[4],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:835: any */
t10=*((C_word*)lf[37]+1);{
C_word av2[4];
av2[0]=t10;
av2[1]=t1;
av2[2]=t9;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}}

/* k12859 in a12813 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_12861(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,1)))){
C_save_and_reclaim((void *)f_12861,2,av);}
a=C_alloc(22);
t2=C_i_length(t1);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t5=((C_word*)t0)[3];
t6=C_a_i_record4(&a,4,lf[14],lf[144],t4,t5);
t7=C_a_i_list3(&a,3,t6,((C_word*)t0)[4],((C_word*)t0)[5]);
t8=((C_word*)t0)[6];
t9=((C_word*)t0)[7];
t10=t8;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[5],t9,t7);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t4=((C_word*)t0)[6];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8719 in k8704 in k8689 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_8721(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_8721,2,t0,t1);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8725,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_list2(&a,2,((C_word*)t0)[3],C_SCHEME_TRUE);
t5=C_a_i_record4(&a,4,lf[14],lf[152],t4,C_SCHEME_END_OF_LIST);
/* optimizer.scm:1114: cons* */
t6=*((C_word*)lf[151]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4447 in k4369 in walk in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,6)))){
C_save_and_reclaim((void *)f_4449,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=C_i_cddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4458,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:192: constant-form-eval */
t4=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[7];
av2[2]=((C_word*)t0)[8];
av2[3]=t2;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
/* optimizer.scm:170: simplify */
t2=((C_word*)((C_word*)t0)[9])[1];
f_4223(t2,((C_word*)t0)[10],((C_word*)t0)[4]);}}

/* k9024 in k8985 in k8962 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9026(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,1)))){
C_save_and_reclaim((void *)f_9026,2,av);}
a=C_alloc(14);
t2=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[2]);
if(C_truep(t2)){
t3=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t4=((C_word*)t0)[4];
f_9022(t4,C_a_i_list2(&a,2,t1,t3));}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_a_i_times(&a,2,((C_word*)t0)[3],t4);
t6=C_a_i_plus(&a,2,t3,t5);
t7=((C_word*)t0)[4];
f_9022(t7,C_a_i_list2(&a,2,t1,t6));}
else{
t3=((C_word*)t0)[4];
f_9022(t3,C_a_i_list2(&a,2,t1,((C_word*)t0)[2]));}}}

/* k8723 in k8719 in k8704 in k8689 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_8725,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k9020 in k8985 in k8962 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_9022(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,1)))){
C_save_and_reclaim_args((void *)trf_9022,2,t0,t1);}
a=C_alloc(16);
t2=((C_word*)t0)[2];
t3=C_a_i_record4(&a,4,lf[14],lf[89],t1,t2);
t4=C_a_i_list2(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k5544 in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_5546(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,8)))){
C_save_and_reclaim_args((void *)trf_5546,2,t0,t1);}
a=C_alloc(15);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_5549,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* optimizer.scm:425: llist-length */
t3=*((C_word*)lf[91]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[15];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* optimizer.scm:448: walk-generic */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6352(t2,((C_word*)t0)[4],((C_word*)t0)[16],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_TRUE);}}

/* k5547 in k5544 in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,8)))){
C_save_and_reclaim((void *)f_5549,2,av);}
a=C_alloc(12);
t2=t1;
t3=C_i_length(((C_word*)t0)[2]);
if(C_truep(C_i_lessp(t3,t2))){
/* optimizer.scm:427: walk-generic */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6352(t4,((C_word*)t0)[4],t2,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_TRUE);}
else{
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5561,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[4],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:429: debugging */
t5=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[18];
av2[3]=lf[90];
av2[4]=((C_word*)t0)[14];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}}

/* k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_5177(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,4)))){
C_save_and_reclaim_args((void *)trf_5177,2,t0,t1);}
a=C_alloc(21);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5180,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:345: debugging */
t3=*((C_word*)lf[17]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[18];
av2[3]=lf[75];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_5215,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[4],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[2],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[3],tmp=(C_word)a,a+=21,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=t2;
f_5215(t4,C_eqp(lf[11],t3));}
else{
t3=t2;
f_5215(t3,C_SCHEME_FALSE);}}}

/* k10065 in k10059 in k10053 in k10135 in walk in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10067(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10067,2,av);}
a=C_alloc(10);
t2=t1;
if(C_truep(t2)){
t3=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10120,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t5=C_slot(((C_word*)t0)[3],C_fix(2));
t6=C_i_car(t5);
/* tweaks.scm:57: ##sys#get */
t7=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t4;
av2[2]=t6;
av2[3]=lf[159];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_10025(2,av2);}}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_10025(2,av2);}}}

/* k10059 in k10053 in k10135 in walk in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10061(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_10061,2,av);}
a=C_alloc(11);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10067,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:1359: get-list */
t4=*((C_word*)lf[124]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
av2[3]=((C_word*)t0)[7];
av2[4]=lf[126];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_10025(2,av2);}}}

/* k5178 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5180(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,1)))){
C_save_and_reclaim((void *)f_5180,2,av);}
a=C_alloc(19);
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=C_i_car(((C_word*)t0)[2]);
t4=C_a_i_record4(&a,4,lf[14],lf[15],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t5=C_a_i_list2(&a,2,t3,t4);
t6=((C_word*)t0)[3];
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],t2,t5);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* a10402 in k10396 in k10390 in rec in scan in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10403(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10403,3,av);}
/* optimizer.scm:1415: rec */
t3=((C_word*)((C_word*)t0)[2])[1];
f_10223(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k12280 in k12276 in a12269 in k12340 in k12348 in k12352 in k12106 in descend in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in ... */
static void C_ccall f_12282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_12282,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k12253 in k12340 in k12348 in k12352 in k12106 in descend in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in ... */
static void C_ccall f_12255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12255,2,av);}
t2=((C_word*)t0)[2];
t3=C_slot(t2,C_fix(3));
t4=C_i_cdr(t3);
/* optimizer.scm:1727: append */
t5=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k7713 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7715(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7715,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_not(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7724,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;
f_7724(t5,t3);}
else{
t5=C_i_length(((C_word*)t0)[5]);
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_car(t7);
t9=t4;
f_7724(t9,C_i_nequalp(t5,t8));}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a12269 in k12340 in k12348 in k12352 in k12106 in descend in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in ... */
static void C_ccall f_12270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_12270,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12278,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_cadr(t2);
/* optimizer.scm:1731: qnode */
t5=*((C_word*)lf[40]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5158 in for-each-loop501 in k5112 in k5109 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5160,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5150(t3,((C_word*)t0)[4],t2);}

/* loop in k12276 in a12269 in k12340 in k12348 in k12352 in k12106 in descend in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in ... */
static void C_fcall f_12288(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_12288,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_i_cadddr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t3);
t5=C_a_i_list1(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12318,a[2]=t1,a[3]=t6,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t8=C_i_car(t2);
/* optimizer.scm:1738: varnode */
t9=*((C_word*)lf[51]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}

/* k7722 in k7713 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_7724(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_7724,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7729,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7771,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t6=((C_word*)t0)[5];
t7=C_u_i_car(t6);
/* optimizer.scm:974: varnode */
t8=*((C_word*)lf[51]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t5;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* find-path in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_6887(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_6887,4,t0,t1,t2,t3);}
a=C_alloc(7);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6893,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_6893(t7,t1,t2,C_SCHEME_END_OF_LIST);}

/* k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6885(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_6885,2,av);}
a=C_alloc(21);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6887,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6930,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[3];
t6=((C_word*)t0)[4];
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6942,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7277,a[2]=t9,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_7277(t11,t7,t5,t6);}

/* k12276 in a12269 in k12340 in k12348 in k12352 in k12106 in descend in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in ... */
static void C_ccall f_12278(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_12278,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12282,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_caddr(((C_word*)t0)[3]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12288,a[2]=((C_word*)t0)[3],a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_12288(t8,t3,((C_word*)t0)[4],t4);}

/* k8559 in k8543 in k8533 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_8561,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8563 in k8543 in k8533 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8565,2,av);}
/* optimizer.scm:1087: cons* */
t2=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7728 in k7722 in k7713 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7729,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7750,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:973: gensym */
t5=*((C_word*)lf[83]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_6870,2,av);}
a=C_alloc(5);
t2=C_mutate2((C_word*)lf[130]+1 /* (set! ##compiler#reorganize-recursive-bindings ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6872,tmp=(C_word)a,a+=2,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7364,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:912: make-vector */
t4=*((C_word*)lf[198]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fix(301);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* ##compiler#reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6872(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_6872,5,av);}
a=C_alloc(21);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=t2;
t12=t3;
t13=C_i_check_list_2(t11,lf[35]);
t14=C_i_check_list_2(t12,lf[35]);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6885,a[2]=t6,a[3]=t2,a[4]=t3,a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7314,a[2]=t9,a[3]=t17,a[4]=t10,tmp=(C_word)a,a+=5,tmp));
t19=((C_word*)t17)[1];
f_7314(t19,t15,t11,t12);}

/* k5757 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5759(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,8)))){
C_save_and_reclaim((void *)f_5759,2,av);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5762,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(2));
t4=C_i_car(t3);
/* optimizer.scm:453: debugging */
t5=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=lf[76];
av2[3]=lf[96];
av2[4]=((C_word*)t0)[9];
av2[5]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
/* optimizer.scm:461: walk-generic */
t2=((C_word*)((C_word*)t0)[10])[1];
f_6352(t2,((C_word*)t0)[6],((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_TRUE);}}

/* k8533 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8535(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8535,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=C_i_not(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8545,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_8545(t6,t4);}
else{
t6=C_i_length(((C_word*)t0)[5]);
t7=((C_word*)t0)[2];
t8=C_u_i_car(t7);
t9=t5;
f_8545(t9,C_i_nequalp(t6,t8));}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(35,c,3)))){
C_save_and_reclaim((void *)f_5753,2,av);}
a=C_alloc(35);
t2=C_i_structurep(t1,lf[14]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5249,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=t3,a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],a[26]=((C_word*)t0)[25],tmp=(C_word)a,a+=27,tmp);
if(C_truep(*((C_word*)lf[92]+1))){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5698,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[18],a[5]=((C_word*)t0)[17],a[6]=((C_word*)t0)[23],a[7]=((C_word*)t0)[19],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:364: test */
t6=((C_word*)((C_word*)t0)[23])[1];
f_4146(t6,t5,((C_word*)t0)[17],lf[94]);}
else{
t5=t4;
f_5249(t5,C_SCHEME_FALSE);}}

/* k9241 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9243(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9243,2,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=(C_truep(*((C_word*)lf[145]+1))?C_i_caddr(((C_word*)t0)[2]):C_i_cadr(((C_word*)t0)[2]));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9252,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9359,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1211: remove */
t8=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k6333 in k6165 in k6139 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6335,2,av);}
a=C_alloc(10);
t2=C_i_not(t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6293,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_6293(t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6331,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:482: variable-visible? */
t5=*((C_word*)lf[106]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k6329 in k6333 in k6165 in k6139 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6331,2,av);}
t2=((C_word*)t0)[2];
f_6293(t2,C_i_not(t1));}

/* a12813 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_12814(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_12814,9,av);}
a=C_alloc(8);
if(C_truep(C_i_equalp(t4,*((C_word*)lf[217]+1)))){
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12861,a[2]=t4,a[3]=t5,a[4]=t7,a[5]=t8,a[6]=t1,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:762: get-list */
t10=*((C_word*)lf[124]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t9;
av2[2]=t2;
av2[3]=t3;
av2[4]=lf[98];
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}}

/* k8543 in k8533 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_8545(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_8545,2,t0,t1);}
a=C_alloc(15);
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list2(&a,2,C_SCHEME_TRUE,t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8561,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8565,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t7=((C_word*)t0)[2];
t8=C_u_i_cdr(t7);
t9=C_u_i_car(t8);
/* optimizer.scm:1087: varnode */
t10=*((C_word*)lf[51]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t6;
av2[2]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k6322 in k6291 in k6333 in k6165 in k6139 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6324,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_6184(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:484: test */
t3=((C_word*)((C_word*)t0)[5])[1];
f_4146(t3,t2,((C_word*)t0)[6],lf[98]);}}

/* k6318 in k6322 in k6291 in k6333 in k6165 in k6139 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6320,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_6184(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6312,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* optimizer.scm:485: expression-has-side-effects? */
t4=*((C_word*)lf[85]+1);{
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
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k12404 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_12406(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12406,2,av);}
/* optimizer.scm:1694: debugging */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[191];
av2[3]=lf[192];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7769 in k7722 in k7713 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_7771,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[3],t2);
/* optimizer.scm:971: fold-right */
t4=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=t3;
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* map-loop2826 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_12408(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_12408,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
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

/* walk-generic in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_6352(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,5)))){
C_save_and_reclaim_args((void *)trf_6352,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
a=C_alloc(13);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6358,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t8,a[6]=((C_word*)t0)[2],a[7]=t7,a[8]=t10,a[9]=((C_word*)t0)[3],a[10]=t6,tmp=(C_word)a,a+=11,tmp));
t12=((C_word*)t10)[1];
f_6358(t12,t1,C_SCHEME_TRUE,t5,C_SCHEME_END_OF_LIST);}

/* lp in walk-generic in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_6358(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_6358,5,t0,t1,t2,t3,t4);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t3))){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6368,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
/* optimizer.scm:509: invalidate-gae! */
f_4186(t5,((C_word*)t0)[7]);}
else{
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_6368(2,av2);}}}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6389,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[8],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t6=C_i_car(t3);
/* optimizer.scm:513: walk */
t7=((C_word*)((C_word*)t0)[9])[1];
f_4357(t7,t5,t6,((C_word*)t0)[10],((C_word*)t0)[7]);}}

/* a10490 in k10484 in rec in scan in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10491(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10491,3,av);}
/* optimizer.scm:1436: rec */
t3=((C_word*)((C_word*)t0)[2])[1];
f_10223(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k9217 in k9197 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_9219,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k12177 in k12245 in k12348 in k12352 in k12106 in descend in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in ... */
static void C_ccall f_12179(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_12179,2,av);}
a=C_alloc(27);
t2=C_a_i_record4(&a,4,lf[14],lf[12],lf[189],t1);
t3=C_a_i_list2(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_record4(&a,4,lf[14],lf[6],((C_word*)t0)[3],t3);
t5=C_a_i_list2(&a,2,((C_word*)t0)[4],t4);
t6=C_a_i_record4(&a,4,lf[14],lf[6],((C_word*)t0)[5],t5);
/* optimizer.scm:1707: copy-node! */
t7=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=((C_word*)t0)[6];
av2[2]=t6;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k5289 in a5273 in k5267 in k5264 in k5261 in k5250 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5291,2,av);}
t2=(
  /* optimizer.scm:392: touch */
  f_4182(((C_word*)((C_word*)t0)[2])[1])
);
/* optimizer.scm:393: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4357(t3,((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k10484 in rec in scan in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_10486(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_10486,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10491,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_u_i_cdr(((C_word*)t0)[4]);
/* optimizer.scm:1436: every */
t4=*((C_word*)lf[43]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=((C_word*)t0)[5];
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k12471 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_12473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12473,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[194]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* map-loop2795 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_12475(C_word t0,C_word t1,C_word t2){
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
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_12475,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_caddr(t3);
t5=C_i_length(t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t6);
t8=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t6);
t9=C_slot(t2,C_fix(1));
t11=t1;
t12=t9;
t1=t11;
t2=t12;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5601 in k5639 in a5571 in k5559 in k5547 in k5544 in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5603(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_5603,2,av);}
a=C_alloc(12);
t2=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[2],t1);
t3=t2;
t4=C_a_i_cons(&a,2,t3,((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5588,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:446: invalidate-gae! */
f_4186(t6,((C_word*)t0)[6]);}

/* map-loop735 in k5639 in a5571 in k5559 in k5547 in k5544 in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_5605(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5605,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5630,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:434: g741 */
t5=((C_word*)t0)[4];
f_5593(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5760 in k5757 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5762(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_5762,2,av);}
a=C_alloc(8);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[4],t3);
/* optimizer.scm:455: walk */
t5=((C_word*)((C_word*)t0)[5])[1];
f_4357(t5,((C_word*)t0)[6],t4,((C_word*)t0)[7],((C_word*)t0)[8]);}

/* a12200 in k12181 in k12245 in k12348 in k12352 in k12106 in descend in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in ... */
static void C_ccall f_12201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_12201,2,av);}
/* optimizer.scm:1749: qnode */
t2=*((C_word*)lf[40]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k9250 in k9241 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9252(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_9252,2,av);}
a=C_alloc(14);
if(C_truep(C_i_nullp(t1))){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9278,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1216: qnode */
t5=*((C_word*)lf[40]+1);{
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
t2=C_i_cdr(t1);
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=C_u_i_car(t1);
t5=C_a_i_list2(&a,2,((C_word*)t0)[2],t4);
t6=((C_word*)t0)[3];
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],t3,t5);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t3=C_i_cadddr(((C_word*)t0)[5]);
t4=(C_truep(t3)?t3:C_eqp(*((C_word*)lf[146]+1),lf[147]));
if(C_truep(t4)){
t5=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9331,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9333,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1224: fold-inner */
t9=*((C_word*)lf[155]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t5=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}}}

/* k12181 in k12245 in k12348 in k12352 in k12106 in descend in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in ... */
static void C_ccall f_12183(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12183,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12187,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12191,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12201,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:1749: list-tabulate */
t6=*((C_word*)lf[188]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k12185 in k12181 in k12245 in k12348 in k12352 in k12106 in descend in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in ... */
static void C_ccall f_12187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12187,2,av);}
/* optimizer.scm:1747: cons* */
t2=*((C_word*)lf[151]+1);{
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

/* k5742 in k5696 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5744,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_5249(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:366: test */
t3=((C_word*)((C_word*)t0)[6])[1];
f_4146(t3,t2,((C_word*)t0)[7],lf[64]);}}

/* k5738 in k5742 in k5696 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5740,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_5249(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5718,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* tweaks.scm:57: ##sys#get */
t3=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[54];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k11617 in k11555 in walk in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_11619(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_11619,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_i_memq(((C_word*)t0)[2],((C_word*)t0)[3]))){
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=C_eqp(lf[11],t2);
if(C_truep(t3)){
t4=C_slot(((C_word*)t0)[4],C_fix(2));
t5=C_i_caddr(t4);
t6=((C_word*)t0)[5];
f_11571(t6,C_i_listp(t5));}
else{
t4=((C_word*)t0)[5];
f_11571(t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
f_11571(t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
f_11571(t2,C_SCHEME_FALSE);}}

/* k11630 in k11555 in walk in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_11632(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_11632,2,t0,t1);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11640,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1631: get */
t4=*((C_word*)lf[33]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[126];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k11638 in k11630 in k11555 in walk in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11640(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11640,2,av);}
if(C_truep(t1)){
t2=t1;
t3=C_i_length(t2);
t4=((C_word*)t0)[2];
f_11619(t4,C_eqp(((C_word*)t0)[3],t3));}
else{
t2=((C_word*)t0)[2];
f_11619(t2,C_eqp(((C_word*)t0)[3],C_fix(0)));}}

/* k5032 in k4992 in a4986 in k4980 in k4881 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5034(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_5034,2,av);}
a=C_alloc(19);
t2=C_i_cadddr(((C_word*)t0)[2]);
t3=C_a_i_list4(&a,4,((C_word*)t0)[3],((C_word*)t0)[4],t1,t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5014,a[2]=((C_word*)t0)[5],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_car(((C_word*)t0)[6]);
t7=C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)t0)[8]);
/* optimizer.scm:298: walk */
t8=((C_word*)((C_word*)t0)[9])[1];
f_4357(t8,t5,t6,t7,C_SCHEME_END_OF_LIST);}

/* k12245 in k12348 in k12352 in k12106 in descend in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in ... */
static void C_ccall f_12247(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,2)))){
C_save_and_reclaim((void *)f_12247,2,av);}
a=C_alloc(33);
t2=C_a_i_record4(&a,4,lf[14],lf[22],((C_word*)t0)[2],t1);
t3=C_a_i_list1(&a,1,t2);
t4=C_a_i_record4(&a,4,lf[14],lf[11],((C_word*)t0)[3],t3);
t5=C_a_i_list1(&a,1,t4);
t6=C_a_i_record4(&a,4,lf[14],lf[13],((C_word*)t0)[4],t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12179,a[2]=t7,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12183,a[2]=t8,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1747: varnode */
t10=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=((C_word*)t0)[11];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k9147 in k9114 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_9149(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,1)))){
C_save_and_reclaim_args((void *)trf_9149,2,t0,t1);}
a=C_alloc(19);
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[2];
t4=C_a_i_record4(&a,4,lf[14],lf[144],t2,t3);
t5=C_a_i_list2(&a,2,((C_word*)t0)[3],t4);
t6=((C_word*)t0)[4];
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[5],t5);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k6842 in for-each-loop970 in k6821 in k6569 in k6549 in perform-pre-optimization! in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6844,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6834(t3,((C_word*)t0)[4],t2);}

/* k7285 in for-each-loop1325 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7287,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_7277(t4,((C_word*)t0)[5],t2,t3);}

/* k11645 in k11555 in walk in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11647,2,av);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_11632(t3,C_i_length(t2));}
else{
t2=((C_word*)t0)[2];
f_11632(t2,C_fix(0));}}

/* k7262 in for-each-loop1365 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7264,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7254(t3,((C_word*)t0)[4],t2);}

/* for-each-loop970 in k6821 in k6569 in k6549 in perform-pre-optimization! in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_6834(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6834,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6844,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:559: g971 */
t5=((C_word*)t0)[3];
f_6572(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* for-each-loop1325 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_7277(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7277,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7287,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* optimizer.scm:825: g1326 */
t9=((C_word*)t0)[3];
f_6930(t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k5716 in k5738 in k5742 in k5696 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5718,2,av);}
t2=C_eqp(t1,lf[53]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_5249(t3,C_SCHEME_FALSE);}
else{
if(C_truep(((C_word*)t0)[3])){
t3=((C_word*)t0)[2];
f_5249(t3,((C_word*)t0)[3]);}
else{
t3=C_i_cadddr(((C_word*)t0)[4]);
t4=((C_word*)t0)[2];
f_5249(t4,C_i_lessp(t3,*((C_word*)lf[93]+1)));}}}

/* k9114 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9116(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_9116,2,av);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(*((C_word*)lf[145]+1))){
t5=C_i_cddr(((C_word*)t0)[5]);
t6=C_i_pairp(t5);
t7=t4;
f_9149(t7,(C_truep(t6)?C_i_caddr(((C_word*)t0)[5]):C_i_cadr(((C_word*)t0)[5])));}
else{
t5=t4;
f_9149(t5,C_i_cadr(((C_word*)t0)[5]));}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* rec in scan in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_10223(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_10223,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(9);
t6=t2;
t7=C_slot(t6,C_fix(2));
t8=t7;
t9=t2;
t10=C_slot(t9,C_fix(3));
t11=t10;
t12=t2;
t13=C_slot(t12,C_fix(1));
t14=C_eqp(t13,lf[3]);
if(C_truep(t14)){
t15=C_i_car(t8);
t16=t15;
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10287,a[2]=t1,a[3]=t16,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1384: get */
t18=*((C_word*)lf[33]+1);{
C_word av2[5];
av2[0]=t18;
av2[1]=t17;
av2[2]=((C_word*)t0)[5];
av2[3]=t16;
av2[4]=lf[160];
((C_proc)(void*)(*((C_word*)t18+1)))(5,av2);}}
else{
t15=C_eqp(t13,lf[11]);
if(C_truep(t15)){
if(C_truep(t3)){
t16=C_i_caddr(t8);
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10305,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=t11,a[5]=((C_word*)t0)[7],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1392: decompose-lambda-list */
t18=*((C_word*)lf[66]+1);{
C_word av2[4];
av2[0]=t18;
av2[1]=t1;
av2[2]=t16;
av2[3]=t17;
((C_proc)(void*)(*((C_word*)t18+1)))(4,av2);}}
else{
t16=t1;{
C_word av2[2];
av2[0]=t16;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}}
else{
t16=C_eqp(t13,lf[89]);
if(C_truep(t16)){
t17=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t17)){
t18=t1;{
C_word av2[2];
av2[0]=t18;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}
else{
t18=C_i_cadr(t8);
t19=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[4])[1],t18);
t20=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t19);
t21=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10342,a[2]=((C_word*)t0)[7],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1401: every */
t22=*((C_word*)lf[43]+1);{
C_word av2[4];
av2[0]=t22;
av2[1]=t1;
av2[2]=t21;
av2[3]=t11;
((C_proc)(void*)(*((C_word*)t22+1)))(4,av2);}}}
else{
t17=C_eqp(t13,lf[69]);
if(C_truep(t17)){
if(C_truep(t4)){
if(C_truep(((C_word*)t0)[8])){
t18=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10376,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[9],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t19=C_i_car(t11);
/* optimizer.scm:1404: scan-used-variables */
t20=*((C_word*)lf[131]+1);{
C_word av2[4];
av2[0]=t20;
av2[1]=t18;
av2[2]=t19;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t20+1)))(4,av2);}}
else{
t18=t1;{
C_word av2[2];
av2[0]=t18;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}}
else{
t18=t1;{
C_word av2[2];
av2[0]=t18;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}}
else{
t18=C_eqp(t13,lf[161]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10392,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=t1,a[5]=t11,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t20=C_i_cadr(t8);
/* optimizer.scm:1409: estimate-foreign-result-size */
t21=*((C_word*)lf[162]+1);{
C_word av2[3];
av2[0]=t21;
av2[1]=t19;
av2[2]=t20;
((C_proc)(void*)(*((C_word*)t21+1)))(3,av2);}}
else{
t19=C_eqp(t13,lf[163]);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10433,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=t1,a[5]=t11,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t21=C_i_car(t8);
/* optimizer.scm:1417: estimate-foreign-result-size */
t22=*((C_word*)lf[162]+1);{
C_word av2[3];
av2[0]=t22;
av2[1]=t20;
av2[2]=t21;
((C_proc)(void*)(*((C_word*)t22+1)))(3,av2);}}
else{
t20=C_eqp(t13,lf[12]);
if(C_truep(t20)){
t21=C_i_car(t11);
t22=C_slot(t21,C_fix(1));
t23=C_eqp(lf[3],t22);
if(C_truep(t23)){
t24=C_slot(t21,C_fix(2));
t25=C_i_car(t24);
t26=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10486,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=t11,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t27=C_eqp(t25,((C_word*)t0)[10]);
if(C_truep(t27)){
if(C_truep(C_i_zerop(((C_word*)((C_word*)t0)[4])[1]))){
t28=C_i_cadr(t11);
t29=C_slot(t28,C_fix(1));
t30=C_eqp(lf[3],t29);
if(C_truep(t30)){
t31=C_slot(t28,C_fix(2));
t32=C_i_car(t31);
t33=C_a_i_cons(&a,2,t32,((C_word*)((C_word*)t0)[11])[1]);
t34=C_mutate2(((C_word *)((C_word*)t0)[11])+1,t33);
t35=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t36=t26;
f_10486(t36,C_SCHEME_TRUE);}
else{
t31=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t32=t26;
f_10486(t32,C_SCHEME_TRUE);}}
else{
t28=t26;
f_10486(t28,C_SCHEME_FALSE);}}
else{
t28=t26;
f_10486(t28,C_eqp(t25,((C_word*)t0)[12]));}}
else{
t24=t1;{
C_word av2[2];
av2[0]=t24;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t24+1)))(2,av2);}}}
else{
t21=C_eqp(t13,lf[164]);
if(C_truep(t21)){
t22=C_i_cadddr(t8);
t23=C_i_zerop(t22);
if(C_truep(t23)){
t24=t1;{
C_word av2[2];
av2[0]=t24;
av2[1]=t23;
((C_proc)(void*)(*((C_word*)t24+1)))(2,av2);}}
else{
t24=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t24)){
t25=t1;{
C_word av2[2];
av2[0]=t25;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t25+1)))(2,av2);}}
else{
t25=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[4])[1],t22);
t26=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t25);
t27=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10593,a[2]=((C_word*)t0)[7],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1443: every */
t28=*((C_word*)lf[43]+1);{
C_word av2[4];
av2[0]=t28;
av2[1]=t1;
av2[2]=t27;
av2[3]=t11;
((C_proc)(void*)(*((C_word*)t28+1)))(4,av2);}}}}
else{
t22=C_eqp(t13,lf[13]);
if(C_truep(t22)){
t23=C_i_car(t11);
t24=C_i_car(t8);
/* optimizer.scm:1444: rec */
t37=t1;
t38=t23;
t39=t24;
t40=C_SCHEME_FALSE;
t41=t5;
t1=t37;
t2=t38;
t3=t39;
t4=t40;
t5=t41;
goto loop;}
else{
t23=C_eqp(t13,lf[6]);
if(C_truep(t23)){
t24=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10626,a[2]=t11,a[3]=((C_word*)t0)[7],a[4]=t1,a[5]=t8,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t25=C_i_car(t11);
t26=C_i_car(t8);
/* optimizer.scm:1446: rec */
t37=t24;
t38=t25;
t39=t26;
t40=t2;
t41=t5;
t1=t37;
t2=t38;
t3=t39;
t4=t40;
t5=t41;
goto loop;}
else{
t24=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10650,a[2]=((C_word*)t0)[7],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1448: every */
t25=*((C_word*)lf[43]+1);{
C_word av2[4];
av2[0]=t25;
av2[1]=t1;
av2[2]=t24;
av2[3]=t11;
((C_proc)(void*)(*((C_word*)t25+1)))(4,av2);}}}}}}}}}}}}

/* scan in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_10220(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(25,0,6)))){
C_save_and_reclaim_args((void *)trf_10220,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(25);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_10223,a[2]=t6,a[3]=t10,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t8,a[7]=t12,a[8]=t5,a[9]=((C_word*)t0)[4],a[10]=t4,a[11]=((C_word*)t0)[5],a[12]=t3,tmp=(C_word)a,a+=13,tmp));
t14=C_set_block_item(((C_word*)t0)[5],0,C_SCHEME_END_OF_LIST);
t15=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_END_OF_LIST);
t16=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10683,a[2]=t1,a[3]=t8,a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1452: rec */
t18=((C_word*)t12)[1];
f_10223(t18,t17,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,t6);}

/* k12442 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_12444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_12444,2,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* optimizer.scm:1690: append */
t3=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k10900 in for-each-loop2520 in k10848 in k10845 in k10842 in k10825 in k10822 in k10734 in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in ... */
static void C_ccall f_10902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10902,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10892(t3,((C_word*)t0)[4],t2);}

/* a11013 in k10734 in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11014(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11014,4,av);}
t4=C_i_cdr(t2);
t5=C_i_cdr(t3);
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_eqp(t4,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* a12449 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_12450(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_12450,2,av);}
/* optimizer.scm:1691: gensym */
t2=*((C_word*)lf[83]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[193];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k10199 in for-each-loop2190 in walk in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10201,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10191(t3,((C_word*)t0)[4],t2);}

/* k6821 in k6569 in k6549 in perform-pre-optimization! in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6823(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6823,2,av);}
a=C_alloc(6);
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_i_check_list_2(t2,lf[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6834,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_6834(t7,((C_word*)t0)[3],t2);}

/* rec in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11032(C_word c,C_word *av){
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
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_11032,3,av);}
a=C_alloc(14);
t3=t2;
t4=C_slot(t3,C_fix(2));
t5=t2;
t6=C_slot(t5,C_fix(3));
t7=t6;
t8=t2;
t9=C_slot(t8,C_fix(1));
t10=C_eqp(t9,lf[12]);
if(C_truep(t10)){
t11=C_i_car(t7);
t12=C_i_cadr(t7);
t13=C_slot(t11,C_fix(2));
t14=C_slot(t12,C_fix(2));
t15=C_slot(t11,C_fix(1));
t16=C_eqp(lf[3],t15);
if(C_truep(t16)){
t17=C_i_car(t13);
t18=C_eqp(((C_word*)t0)[2],t17);
if(C_truep(t18)){
t19=C_a_i_cons(&a,2,C_a_i_cons(&a,2,C_SCHEME_FALSE,t2),((C_word*)((C_word*)t0)[3])[1]);
t20=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t19);
t21=C_i_car(t14);
t22=C_eqp(((C_word*)t0)[4],t21);
if(C_truep(t22)){
t23=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11110,a[2]=t7,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t24=C_u_i_cdr(t7);
t25=C_i_length(t24);
t26=C_eqp(((C_word*)t0)[6],t25);
if(C_truep(t26)){
t27=t23;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t27;
av2[1]=C_SCHEME_UNDEFINED;
f_11110(2,av2);}}
else{
/* optimizer.scm:1489: quit */
t27=*((C_word*)lf[167]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t27;
av2[1]=t23;
av2[2]=lf[172];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t27+1)))(4,av2);}}}
else{
t23=C_u_i_car(t14);
t24=C_i_assq(t23,((C_word*)((C_word*)t0)[7])[1]);
if(C_truep(t24)){
t25=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11147,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=t7,a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:1487: g2379 */
t26=t25;
f_11147(t26,t1,t24);}
else{
/* optimizer.scm:1509: bomb */
t25=*((C_word*)lf[156]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t25;
av2[1]=t1;
av2[2]=lf[175];
av2[3]=t14;
((C_proc)(void*)(*((C_word*)t25+1)))(4,av2);}}}}
else{
t19=C_u_i_car(t13);
t20=C_eqp(((C_word*)t0)[4],t19);
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11252,a[2]=t7,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1511: node-class-set! */
t22=*((C_word*)lf[170]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t22;
av2[1]=t21;
av2[2]=t2;
av2[3]=lf[176];
((C_proc)(void*)(*((C_word*)t22+1)))(4,av2);}}
else{
/* optimizer.scm:1514: bomb */
t21=*((C_word*)lf[156]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t21;
av2[1]=t1;
av2[2]=lf[177];
((C_proc)(void*)(*((C_word*)t21+1)))(3,av2);}}}}
else{
t17=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t17;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t17+1)))(2,av2);}}}
else{
t11=C_eqp(t9,lf[6]);
if(C_truep(t11)){
t12=C_i_car(t4);
t13=C_i_car(t7);
if(C_truep(C_i_memq(t12,((C_word*)t0)[9]))){
t14=C_a_i_cons(&a,2,C_a_i_cons(&a,2,t12,t13),((C_word*)((C_word*)t0)[7])[1]);
t15=C_mutate2(((C_word *)((C_word*)t0)[7])+1,t14);
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11303,a[2]=((C_word*)t0)[8],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t17=C_i_cadr(t7);
/* optimizer.scm:1520: copy-node! */
t18=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t18;
av2[1]=t16;
av2[2]=t17;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t18+1)))(4,av2);}}
else{
t14=((C_word*)((C_word*)t0)[8])[1];
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11315,a[2]=t16,a[3]=t14,tmp=(C_word)a,a+=4,tmp));
t18=((C_word*)t16)[1];
f_11315(t18,t1,t7);}}
else{
t12=((C_word*)((C_word*)t0)[8])[1];
t13=C_i_check_list_2(t7,lf[2]);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11344,a[2]=t15,a[3]=t12,tmp=(C_word)a,a+=4,tmp));
t17=((C_word*)t15)[1];
f_11344(t17,t1,t7);}}}

/* for-each-loop501 in k5112 in k5109 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_5150(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5150,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5160,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:326: g502 */
t5=((C_word*)t0)[3];
f_5118(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10999 in for-each-loop2450 in k10822 in k10734 in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11001,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10991(t3,((C_word*)t0)[4],t2);}

/* k5133 in k5126 in k5112 in k5109 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5135,2,av);}
/* optimizer.scm:327: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4357(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3747 */
static void C_ccall f_3749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3749,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3752,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6867(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(160,c,10)))){
C_save_and_reclaim((void *)f_6867,2,av);}
a=C_alloc(160);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6870,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list(&a,1,lf[199]);
t4=C_a_i_list(&a,2,lf[3],t3);
t5=C_a_i_list(&a,4,lf[12],lf[200],t4,lf[201]);
t6=C_a_i_list(&a,1,lf[199]);
t7=C_a_i_list(&a,2,lf[3],t6);
t8=C_a_i_list(&a,4,lf[12],lf[202],t7,lf[203]);
t9=C_a_i_list(&a,5,lf[5],lf[204],lf[191],t5,t8);
t10=C_a_i_list(&a,7,lf[204],lf[200],lf[202],lf[191],lf[201],lf[203],lf[199]);
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12731,tmp=(C_word)a,a+=2,tmp);
t12=C_a_i_list(&a,3,t9,t10,t11);
t13=C_a_i_list(&a,1,lf[205]);
t14=C_a_i_list(&a,1,lf[206]);
t15=C_a_i_list(&a,2,lf[34],t14);
t16=C_a_i_list(&a,4,lf[144],t13,lf[191],t15);
t17=C_a_i_list(&a,5,lf[5],lf[204],t16,lf[201],lf[203]);
t18=C_a_i_list(&a,6,lf[204],lf[205],lf[191],lf[206],lf[201],lf[203]);
t19=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12595,tmp=(C_word)a,a+=2,tmp);
t20=C_a_i_list(&a,3,t17,t18,t19);
/* optimizer.scm:769: register-simplifications */
t21=*((C_word*)lf[128]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t21;
av2[1]=t2;
av2[2]=lf[5];
av2[3]=t12;
av2[4]=t20;
((C_proc)(void*)(*((C_word*)t21+1)))(5,av2);}}

/* k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6864(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(434,c,14)))){
C_save_and_reclaim((void *)f_6864,2,av);}
a=C_alloc(434);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6867,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list(&a,1,lf[209]);
t4=C_a_i_list(&a,1,lf[205]);
t5=C_a_i_list(&a,1,lf[210]);
t6=C_a_i_list(&a,2,lf[3],t5);
t7=C_a_i_list(&a,1,lf[211]);
t8=C_a_i_list(&a,2,lf[34],t7);
t9=C_a_i_list(&a,4,lf[144],t4,t6,t8);
t10=C_a_i_list(&a,1,lf[209]);
t11=C_a_i_list(&a,2,lf[3],t10);
t12=C_a_i_list(&a,1,lf[212]);
t13=C_a_i_list(&a,1,lf[205]);
t14=C_a_i_list(&a,1,lf[210]);
t15=C_a_i_list(&a,2,lf[3],t14);
t16=C_a_i_list(&a,1,lf[213]);
t17=C_a_i_list(&a,2,lf[34],t16);
t18=C_a_i_list(&a,4,lf[144],t13,t15,t17);
t19=C_a_i_list(&a,1,lf[212]);
t20=C_a_i_list(&a,2,lf[3],t19);
t21=C_a_i_list(&a,5,lf[5],lf[200],t20,lf[214],lf[215]);
t22=C_a_i_list(&a,4,lf[6],t12,t18,t21);
t23=C_a_i_list(&a,5,lf[5],lf[204],t11,lf[216],t22);
t24=C_a_i_list(&a,4,lf[6],t3,t9,t23);
t25=C_a_i_list(&a,11,lf[210],lf[209],lf[212],lf[205],lf[211],lf[213],lf[216],lf[214],lf[204],lf[200],lf[215]);
t26=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13392,tmp=(C_word)a,a+=2,tmp);
t27=C_a_i_list(&a,3,t24,t25,t26);
t28=C_a_i_list(&a,1,lf[199]);
t29=C_a_i_list(&a,1,lf[205]);
t30=C_a_i_list(&a,1,lf[210]);
t31=C_a_i_list(&a,2,lf[3],t30);
t32=C_a_i_list(&a,1,lf[220]);
t33=C_a_i_list(&a,2,lf[34],t32);
t34=C_a_i_list(&a,4,lf[144],t29,t31,t33);
t35=C_a_i_list(&a,1,lf[199]);
t36=C_a_i_list(&a,2,lf[3],t35);
t37=C_a_i_list(&a,1,lf[221]);
t38=C_a_i_list(&a,1,lf[210]);
t39=C_a_i_list(&a,2,lf[3],t38);
t40=C_a_i_cons(&a,2,t39,lf[222]);
t41=C_a_i_cons(&a,2,t37,t40);
t42=C_a_i_cons(&a,2,lf[22],t41);
t43=C_a_i_list(&a,5,lf[5],lf[223],t36,lf[224],t42);
t44=C_a_i_list(&a,4,lf[6],t28,t34,t43);
t45=C_a_i_list(&a,8,lf[199],lf[205],lf[210],lf[220],lf[223],lf[224],lf[221],lf[222]);
t46=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13262,tmp=(C_word)a,a+=2,tmp);
t47=C_a_i_list(&a,3,t44,t45,t46);
t48=C_a_i_list(&a,1,lf[209]);
t49=C_a_i_list(&a,2,lf[15],C_SCHEME_END_OF_LIST);
t50=C_a_i_list(&a,4,lf[6],t48,t49,lf[225]);
t51=C_a_i_list(&a,2,lf[209],lf[225]);
t52=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12903,tmp=(C_word)a,a+=2,tmp);
t53=C_a_i_list(&a,3,t50,t51,t52);
t54=C_a_i_list(&a,1,lf[199]);
t55=C_a_i_list(&a,1,lf[205]);
t56=C_a_i_cons(&a,2,t55,lf[226]);
t57=C_a_i_cons(&a,2,lf[144],t56);
t58=C_a_i_list(&a,1,lf[199]);
t59=C_a_i_list(&a,2,lf[3],t58);
t60=C_a_i_list(&a,5,lf[5],lf[223],t59,lf[191],lf[201]);
t61=C_a_i_list(&a,4,lf[6],t54,t57,t60);
t62=C_a_i_list(&a,6,lf[199],lf[205],lf[226],lf[223],lf[191],lf[201]);
t63=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12814,tmp=(C_word)a,a+=2,tmp);
t64=C_a_i_list(&a,3,t61,t62,t63);
/* optimizer.scm:624: register-simplifications */
t65=*((C_word*)lf[128]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t65;
av2[1]=t2;
av2[2]=lf[6];
av2[3]=t27;
av2[4]=t47;
av2[5]=t53;
av2[6]=t64;
((C_proc)(void*)(*((C_word*)t65+1)))(7,av2);}}

/* k10396 in k10390 in rec in scan in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_10398(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_10398,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10403,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1415: every */
t3=*((C_word*)lf[43]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k10390 in rec in scan in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10392(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10392,2,av);}
a=C_alloc(10);
t2=C_i_zerop(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10398,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_10398(t4,t2);}
else{
t4=((C_word*)((C_word*)t0)[6])[1];
if(C_truep(t4)){
t5=t3;
f_10398(t5,C_SCHEME_FALSE);}
else{
t5=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[7])[1],t1);
t6=C_mutate2(((C_word *)((C_word*)t0)[7])+1,t5);
t7=t3;
f_10398(t7,C_SCHEME_TRUE);}}}

/* k3765 in mark in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_fcall f_3767(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,1)))){
C_save_and_reclaim_args((void *)trf_3767,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* mark in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_fcall f_3760(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3760,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3767,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t4)){
t5=t3;
f_3767(t5,C_SCHEME_FALSE);}
else{
t5=C_i_memq(t2,((C_word*)((C_word*)t0)[4])[1]);
t6=t3;
f_3767(t6,C_i_not(t5));}}

/* register-simplifications in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_6857,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
/* optimizer.scm:603: ##sys#hash-table-set! */
t4=*((C_word*)lf[129]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=*((C_word*)lf[30]+1);
av2[3]=t2;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k7842 in k7834 in k7814 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,1)))){
C_save_and_reclaim((void *)f_7844,2,av);}
a=C_alloc(20);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list5(&a,5,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,t2);
t4=((C_word*)t0)[6];
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[7],t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* ##compiler#scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_ccall f_3757(C_word c,C_word *av){
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
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(48,c,4)))){
C_save_and_reclaim((void *)f_3757,3,av);}
a=C_alloc(48);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3760,a[2]=t4,a[3]=t8,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t22=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3783,a[2]=t10,tmp=(C_word)a,a+=3,tmp));
t23=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3790,a[2]=t8,a[3]=t10,tmp=(C_word)a,a+=4,tmp));
t24=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3795,a[2]=t20,tmp=(C_word)a,a+=3,tmp));
t25=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3832,a[2]=t10,a[3]=t6,a[4]=t16,a[5]=t20,a[6]=t18,a[7]=t14,a[8]=t12,tmp=(C_word)a,a+=9,tmp));
t26=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4072,a[2]=t4,a[3]=t1,a[4]=t20,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:108: debugging */
t27=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t27;
av2[1]=t26;
av2[2]=lf[28];
av2[3]=lf[29];
((C_proc)(void*)(*((C_word*)t27+1)))(4,av2);}}

/* k3753 in k3750 in k3747 */
static void C_ccall f_3755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3755,2,av);}
a=C_alloc(5);
t2=C_mutate2((C_word*)lf[0]+1 /* (set! ##compiler#scan-toplevel-assignments ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3757,tmp=(C_word)a,a+=2,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4140,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:131: make-vector */
t4=*((C_word*)lf[198]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fix(301);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3750 in k3747 */
static void C_ccall f_3752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3752,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3755,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

/* k5126 in k5112 in k5109 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,7)))){
C_save_and_reclaim((void *)f_5128,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5135,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[6],C_fix(3));
t4=C_i_car(t3);
/* optimizer.scm:328: inline-lambda-bindings */
t5=*((C_word*)lf[71]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[8];
av2[4]=t4;
av2[5]=C_SCHEME_FALSE;
av2[6]=((C_word*)t0)[9];
av2[7]=*((C_word*)lf[72]+1);
((C_proc)(void*)(*((C_word*)t5+1)))(8,av2);}}

/* k6805 in g971 in k6569 in k6549 in perform-pre-optimization! in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6807,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_6590(2,av2);}}
else{
/* optimizer.scm:564: test */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6544(t2,((C_word*)t0)[2],((C_word*)t0)[4],lf[49]);}}

/* k11416 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_11418,2,av);}
/* optimizer.scm:1457: debugging */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[18];
av2[3]=lf[181];
av2[4]=((C_word*)t0)[3];
av2[5]=t1;
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k7834 in k7814 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7836(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7836,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_i_car(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7844,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t6=C_i_cadr(((C_word*)t0)[6]);
/* optimizer.scm:987: qnode */
t7=*((C_word*)lf[40]+1);{
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

/* k12189 in k12181 in k12245 in k12348 in k12352 in k12106 in descend in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in ... */
static void C_ccall f_12191(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12191,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12199,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1750: qnode */
t4=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a13117 in k13073 in loop2 in k13015 in k13230 in k13236 in loop1 in a12902 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_13118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_13118,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13126,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:730: reverse */
t3=*((C_word*)lf[107]+1);{
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

/* k12197 in k12189 in k12181 in k12245 in k12348 in k12352 in k12106 in descend in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in ... */
static void C_ccall f_12199(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_12199,2,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:1748: append */
t3=*((C_word*)lf[7]+1);{
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

/* tmp13632 in a11419 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_11426(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_11426,2,t0,t1);}
/* optimizer.scm:1457: unzip1 */
t2=*((C_word*)lf[182]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a13127 in k13073 in loop2 in k13015 in k13230 in k13236 in loop1 in a12902 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_13128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_13128,4,av);}
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(C_truep(t3)?t2:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a11419 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11420,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11426,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11437,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* tmp13632 */
t4=t2;
f_11426(t4,t3);}

/* k4634 in k4614 in k4608 in k4602 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4636,2,av);}
t2=C_slot(t1,C_fix(2));
t3=C_i_car(t2);
/* optimizer.scm:234: qnode */
t4=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k13124 in a13117 in k13073 in loop2 in k13015 in k13230 in k13236 in loop1 in a12902 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_13126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13126,2,av);}
/* optimizer.scm:730: reorganize-recursive-bindings */
t2=*((C_word*)lf[130]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5886 in k5865 in k5850 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5888,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5891,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_5891(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5925,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t4=C_u_i_car(((C_word*)t0)[5]);
/* optimizer.scm:340: test */
t5=((C_word*)((C_word*)t0)[6])[1];
f_4146(t5,t3,t4,lf[98]);}}

/* k11435 in a11419 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11437(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11437,2,av);}
a=C_alloc(3);
t2=C_a_i_list(&a,1,t1);
/* optimizer.scm:1457: ##sys#make-promise */
t3=*((C_word*)lf[183]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5889 in k5886 in k5865 in k5850 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_5891(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5891,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5898,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5900,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=C_u_i_cdr(((C_word*)t0)[4]);
/* optimizer.scm:343: any */
t5=*((C_word*)lf[37]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t2;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t2=((C_word*)t0)[2];
f_5177(t2,C_SCHEME_FALSE);}}

/* k5896 in k5889 in k5886 in k5865 in k5850 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5898,2,av);}
t2=((C_word*)t0)[2];
f_5177(t2,C_i_not(t1));}

/* g353 in k4608 in k4602 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_4659(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_4659,3,t0,t1,t2);}
a=C_alloc(8);
t3=C_i_cdr(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4669,a[2]=t1,a[3]=t4,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4694,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* tweaks.scm:57: ##sys#get */
t7=*((C_word*)lf[45]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
av2[3]=lf[54];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t6=t5;
f_4669(t6,C_SCHEME_FALSE);}}

/* k4670 in k4667 in g353 in k4608 in k4602 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4672,2,av);}
/* optimizer.scm:245: varnode */
t2=*((C_word*)lf[51]+1);{
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

/* cfk in a5273 in k5267 in k5264 in k5261 in k5250 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_5277,3,av);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5281,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:383: debugging */
t4=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[76];
av2[3]=lf[77];
av2[4]=((C_word*)t0)[10];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}

/* a5273 in k5267 in k5264 in k5261 in k5250 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5274(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,7)))){
C_save_and_reclaim((void *)f_5274,3,av);}
a=C_alloc(18);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5277,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5291,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=t1,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(((C_word*)t0)[12],C_fix(3));
t6=C_i_car(t5);
/* optimizer.scm:389: inline-lambda-bindings */
t7=*((C_word*)lf[71]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t7;
av2[1]=t4;
av2[2]=((C_word*)t0)[13];
av2[3]=((C_word*)t0)[14];
av2[4]=t6;
av2[5]=C_SCHEME_TRUE;
av2[6]=((C_word*)t0)[15];
av2[7]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(8,av2);}}

/* k5286 in k5279 in cfk in a5273 in k5267 in k5264 in k5261 in k5250 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 in ... */
static void C_ccall f_5288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5288,2,av);}
/* optimizer.scm:387: return */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6310 in k6318 in k6322 in k6291 in k6333 in k6165 in k6139 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6312(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6312,2,av);}
t2=((C_word*)t0)[2];
f_6184(t2,C_i_not(t1));}

/* k5279 in cfk in a5273 in k5267 in k5264 in k5261 in k5250 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,8)))){
C_save_and_reclaim((void *)f_5281,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5288,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:388: walk-generic */
t3=((C_word*)((C_word*)t0)[4])[1];
f_6352(t3,t2,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],((C_word*)t0)[10],C_SCHEME_TRUE);}

/* for-each-loop2933 in k11955 in g2920 in k11950 in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in ... */
static void C_fcall f_12045(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_12045,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12055,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1755: g2934 */
t5=((C_word*)t0)[3];
f_11958(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7814 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7816(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7816,2,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list2(&a,2,C_SCHEME_FALSE,t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7836,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t6=((C_word*)t0)[2];
t7=C_u_i_car(t6);
/* optimizer.scm:984: varnode */
t8=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t5;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4667 in g353 in k4608 in k4602 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_4669(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_4669,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4672,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:244: debugging */
t3=*((C_word*)lf[17]+1);{
C_word av2[6];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[18];
av2[3]=lf[52];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
/* optimizer.scm:246: varnode */
t2=*((C_word*)lf[51]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k10023 in walk in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_10025,2,av);}
if(C_truep(t1)){
/* optimizer.scm:1367: transform */
t2=((C_word*)((C_word*)t0)[2])[1];
f_10692(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1],((C_word*)t0)[8],((C_word*)((C_word*)t0)[9])[1]);}
else{
t2=C_i_car(((C_word*)t0)[10]);
/* optimizer.scm:1368: walk */
t3=((C_word*)((C_word*)t0)[11])[1];
f_9985(t3,((C_word*)t0)[3],C_SCHEME_FALSE,t2,C_SCHEME_FALSE);}}

/* k5250 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5252(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_5252,2,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5253,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];
t4=C_i_check_list_2(t3,lf[2]);
t5=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5263,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[2],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5312,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_5312(t9,t5,t3);}

/* g619 in k5250 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_5253(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_5253,3,t0,t1,t2);}
t3=*((C_word*)lf[47]+1);
/* optimizer.scm:377: g634 */
t4=*((C_word*)lf[47]+1);{
C_word av2[6];
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=lf[70];
av2[5]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}

/* k4692 in g353 in k4608 in k4602 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4694,2,av);}
t2=C_eqp(lf[53],t1);
t3=((C_word*)t0)[2];
f_4669(t3,C_i_not(t2));}

/* k5267 in k5264 in k5261 in k5250 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_5269,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_5274,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* optimizer.scm:380: call/cc */
t3=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[16];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5264 in k5261 in k5250 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_5266,2,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5269,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* optimizer.scm:379: debugging */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[18];
av2[3]=lf[79];
av2[4]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5261 in k5250 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_5263,2,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5266,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* optimizer.scm:378: check-signature */
t3=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[17];
av2[3]=((C_word*)t0)[14];
av2[4]=((C_word*)t0)[13];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* a12019 in k11992 in g2934 in k11955 in g2920 in k11950 in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in ... */
static void C_ccall f_12020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_12020,2,av);}
/* optimizer.scm:1769: qnode */
t2=*((C_word*)lf[40]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k12000 in k11992 in g2934 in k11955 in g2920 in k11950 in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in ... */
static void C_ccall f_12002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_12002,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12010,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_i_cadr(((C_word*)t0)[4]);
/* optimizer.scm:1770: qnode */
t5=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5012 in k5032 in k4992 in a4986 in k4980 in k4881 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void *)f_5014,2,av);}
a=C_alloc(8);
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[2];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[11],((C_word*)t0)[3],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11441 in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11443(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11443,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11446,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1571: walk */
t3=((C_word*)((C_word*)t0)[4])[1];
f_9985(t3,t2,C_SCHEME_FALSE,((C_word*)t0)[5],C_SCHEME_FALSE);}

/* ##compiler#determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11448(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_11448,4,av);}
a=C_alloc(29);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11451,a[2]=t9,a[3]=t7,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t15=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11511,a[2]=t7,a[3]=t13,a[4]=t9,a[5]=t11,a[6]=t3,tmp=(C_word)a,a+=7,tmp));
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11796,a[2]=t3,a[3]=t5,a[4]=t1,a[5]=t2,a[6]=t13,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1655: debugging */
t17=*((C_word*)lf[17]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t17;
av2[1]=t16;
av2[2]=lf[28];
av2[3]=lf[197];
((C_proc)(void*)(*((C_word*)t17+1)))(4,av2);}}

/* k12008 in k12000 in k11992 in g2934 in k11955 in g2920 in k11950 in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in ... */
static void C_ccall f_12010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_12010,2,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:1765: append */
t3=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11444 in k11441 in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11446(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11446,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* close in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static C_word C_fcall f_11451(C_word *a,C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;{}
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t1=C_i_length(((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_fixnum_greaterp(t1,C_fix(1)))){
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]),((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t2);
t4=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_END_OF_LIST);
t5=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_FALSE);
return(t5);}
else{
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_END_OF_LIST);
t3=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_FALSE);
return(t3);}}
else{
t1=C_SCHEME_UNDEFINED;
return(t1);}}

/* k4608 in k4602 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4610(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4610,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(
  /* optimizer.scm:232: touch */
  f_4182(((C_word*)((C_word*)t0)[2])[1])
);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4616,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:233: debugging */
t4=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[18];
av2[3]=lf[50];
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t2=C_u_i_car(((C_word*)t0)[6]);
t3=C_eqp(((C_word*)t0)[5],t2);
if(C_truep(t3)){
t4=C_i_assq(((C_word*)t0)[5],((C_word*)t0)[7]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4659,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:230: g353 */
t6=t5;
f_4659(t6,((C_word*)t0)[3],t4);}
else{
/* optimizer.scm:247: varnode */
t5=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}
else{
t4=(
  /* optimizer.scm:236: touch */
  f_4182(((C_word*)((C_word*)t0)[2])[1])
);
t5=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[8])[1],C_fix(1));
t6=C_mutate2(((C_word *)((C_word*)t0)[8])+1,t5);
/* optimizer.scm:238: varnode */
t7=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}}

/* for-each-loop2429 in rec in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_11344(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_11344,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11354,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1524: g2430 */
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

/* k8282 in k8236 in k8227 in k8216 in k8213 in k8181 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_8284,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[3],t2);
/* optimizer.scm:1046: fold-right */
t4=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=t3;
av2[4]=((C_word*)t0)[6];
av2[5]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}

/* a8285 in k8236 in k8227 in k8216 in k8213 in k8181 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_8286,4,av);}
a=C_alloc(11);
t4=C_a_i_list2(&a,2,t2,t3);
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[144],((C_word*)t0)[2],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k6588 in g971 in k6569 in k6549 in perform-pre-optimization! in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_6590,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6593,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:565: get-list */
t4=*((C_word*)lf[124]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[8];
av2[4]=lf[98];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k6597 in k6591 in k6588 in g971 in k6569 in k6549 in perform-pre-optimization! in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_6599(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_6599,2,t0,t1);}
a=C_alloc(11);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_i_caddr(t2);
t4=t3;
t5=C_slot(((C_word*)t0)[2],C_fix(3));
t6=C_i_car(t5);
t7=t6;
t8=C_slot(t7,C_fix(3));
t9=t8;
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6619,a[2]=t4,a[3]=t7,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t9,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_listp(t4))){
t11=C_i_cdr(t4);
t12=t10;
f_6619(t12,C_i_nullp(t11));}
else{
t11=t10;
f_6619(t11,C_SCHEME_FALSE);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4602 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4604,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4610,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:231: test */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4146(t4,t3,t2,lf[55]);}

/* k6591 in k6588 in g971 in k6569 in k6549 in perform-pre-optimization! in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6593(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6593,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6599,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[2])){
if(C_truep(t1)){
t3=C_i_length(t1);
t4=C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=C_i_length(((C_word*)t0)[6]);
t6=C_eqp(C_fix(3),t5);
if(C_truep(t6)){
t7=C_slot(((C_word*)t0)[2],C_fix(1));
t8=t2;
f_6599(t8,C_eqp(lf[11],t7));}
else{
t7=t2;
f_6599(t7,C_SCHEME_FALSE);}}
else{
t5=t2;
f_6599(t5,C_SCHEME_FALSE);}}
else{
t3=t2;
f_6599(t3,C_SCHEME_FALSE);}}
else{
t3=t2;
f_6599(t3,C_SCHEME_FALSE);}}

/* for-each-loop2412 in rec in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_11315(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_11315,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11325,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1522: g2413 */
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

/* k4614 in k4608 in k4602 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4616,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4636,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:234: test */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4146(t3,t2,((C_word*)t0)[4],lf[49]);}

/* k11323 in for-each-loop2412 in rec in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11325(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11325,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11315(t3,((C_word*)t0)[4],t2);}

/* k11301 in rec in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11303,2,av);}
/* optimizer.scm:1521: rec */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
f_11032(3,av2);}}

/* k8869 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8871(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_8871,2,av);}
a=C_alloc(15);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_eqp(*((C_word*)lf[146]+1),t2);
if(C_truep(t3)){
t4=C_i_caddr(((C_word*)t0)[2]);
t5=C_a_i_list2(&a,2,C_SCHEME_TRUE,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8893,a[2]=((C_word*)t0)[3],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8897,a[2]=t7,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t9=((C_word*)t0)[2];
t10=C_u_i_cdr(t9);
t11=C_u_i_cdr(t10);
t12=C_u_i_car(t11);
/* optimizer.scm:1141: varnode */
t13=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t13;
av2[1]=t8;
av2[2]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(3,av2);}}
else{
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_eqp(*((C_word*)lf[146]+1),t4);
if(C_truep(t5)){
t6=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t7=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
t8=((C_word*)t0)[3];
t9=t8;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],t6,t7);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t6=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5112 in k5109 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5114(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_5114,2,av);}
a=C_alloc(19);
t2=(
  /* optimizer.scm:325: touch */
  f_4182(((C_word*)((C_word*)t0)[2])[1])
);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5118,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=((C_word*)t0)[4];
t5=C_i_check_list_2(t4,lf[2]);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5128,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5150,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_5150(t10,t6,t4);}

/* g502 in k5112 in k5109 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_5118(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_5118,3,t0,t1,t2);}
t3=*((C_word*)lf[47]+1);
/* optimizer.scm:326: g517 */
t4=*((C_word*)lf[47]+1);{
C_word av2[6];
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=lf[70];
av2[5]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}

/* for-each-loop187 in invalidate-gae! in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static C_word C_fcall f_4200(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=C_i_set_cdr(t2,C_SCHEME_FALSE);
t4=C_slot(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* g971 in k6569 in k6549 in perform-pre-optimization! in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_6572(C_word t0,C_word t1,C_word t2){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,3)))){
C_save_and_reclaim_args((void *)trf_6572,3,t0,t1,t2);}
a=C_alloc(14);
t3=C_i_cdr(t2);
t4=t3;
t5=C_slot(t4,C_fix(3));
t6=t5;
t7=C_i_cadr(t6);
t8=C_slot(t7,C_fix(2));
t9=C_i_car(t8);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6590,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t6,a[6]=t4,a[7]=((C_word*)t0)[4],a[8]=t10,tmp=(C_word)a,a+=9,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6807,a[2]=t11,a[3]=((C_word*)t0)[5],a[4]=t10,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:564: test */
t13=((C_word*)((C_word*)t0)[5])[1];
f_6544(t13,t12,t10,lf[99]);}

/* k6569 in k6549 in perform-pre-optimization! in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_6571,2,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6572,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6823,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:594: test */
t4=((C_word*)((C_word*)t0)[5])[1];
f_6544(t4,t3,lf[125],lf[126]);}
else{
t2=((C_word*)t0)[6];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_6554(2,av2);}}}

/* k5109 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_5111,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5114,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:324: debugging */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[18];
av2[3]=lf[73];
av2[4]=((C_word*)t0)[11];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8895 in k8869 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8897,2,av);}
/* optimizer.scm:1141: cons* */
t2=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8891 in k8869 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_8893,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8213 in k8181 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_8215(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8215,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8218,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_8218(t3,t1);}
else{
t3=C_eqp(*((C_word*)lf[146]+1),lf[147]);
t4=(C_truep(t3)?C_i_caddr(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=t2;
f_8218(t5,t4);}
else{
t5=C_eqp(*((C_word*)lf[146]+1),lf[149]);
t6=t2;
f_8218(t6,(C_truep(t5)?C_i_cadddr(((C_word*)t0)[3]):C_SCHEME_FALSE));}}}

/* k8207 in k8181 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_8209,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k8216 in k8213 in k8181 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_8218(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,0,3)))){
C_save_and_reclaim_args((void *)trf_8218,2,t0,t1);}
a=C_alloc(18);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=((C_word*)t0)[2];
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8229,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8348,a[2]=t4,a[3]=t9,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_8348(t11,t7,t6);}
else{
t2=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k9883 in loop in a9850 in k9837 in k9808 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_9885,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9889,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* optimizer.scm:1325: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9865(t6,t3,C_SCHEME_END_OF_LIST,t5);}

/* k9887 in k9883 in loop in a9850 in k9837 in k9808 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9889(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9889,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8227 in k8216 in k8213 in k8181 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8229(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_8229,2,av);}
a=C_alloc(20);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=*((C_word*)lf[51]+1);
t8=C_i_check_list_2(t2,lf[35]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8238,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8314,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_8314(t13,t9,t2);}

/* k11992 in g2934 in k11955 in g2920 in k11950 in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in ... */
static void C_ccall f_11994(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_11994,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11998,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12002,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_i_length(((C_word*)t0)[3]);
t6=C_a_i_minus(&a,2,((C_word*)t0)[5],t5);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12020,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:1767: list-tabulate */
t8=*((C_word*)lf[188]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t4;
av2[2]=t6;
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k11996 in k11992 in g2934 in k11955 in g2920 in k11950 in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in ... */
static void C_ccall f_11998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11998,2,av);}
/* optimizer.scm:1764: cons* */
t2=*((C_word*)lf[151]+1);{
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

/* k11988 in g2934 in k11955 in g2920 in k11950 in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in ... */
static void C_ccall f_11990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11990,2,av);}
a=C_alloc(5);
t2=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[2],t1);
/* optimizer.scm:1761: copy-node! */
t3=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a8242 in k8236 in k8227 in k8216 in k8213 in k8181 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8243(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,1)))){
C_save_and_reclaim((void *)f_8243,5,av);}
a=C_alloc(14);
t5=C_a_i_list1(&a,1,t3);
t6=C_a_i_list2(&a,2,t2,t4);
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[6],t5,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k8236 in k8227 in k8216 in k8213 in k8181 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8238(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,5)))){
C_save_and_reclaim((void *)f_8238,2,av);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8243,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=t3;
t5=C_eqp(*((C_word*)lf[146]+1),lf[147]);
t6=(C_truep(t5)?C_i_car(((C_word*)t0)[2]):C_i_cadr(((C_word*)t0)[2]));
t7=C_a_i_list1(&a,1,t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8284,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8286,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1056: fold-boolean */
t11=*((C_word*)lf[148]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t11;
av2[1]=t9;
av2[2]=t10;
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}

/* k5696 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5698,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5744,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:365: test */
t3=((C_word*)((C_word*)t0)[6])[1];
f_4146(t3,t2,((C_word*)t0)[7],lf[70]);}
else{
t2=((C_word*)t0)[2];
f_5249(t2,C_SCHEME_FALSE);}}

/* k4228 in k4225 in simplify in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4230,2,av);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10885 in for-each-loop2520 in k10848 in k10845 in k10842 in k10825 in k10822 in k10734 in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in ... */
static void C_ccall f_10887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_10887,2,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:1565: node-parameters-set! */
t3=*((C_word*)lf[122]+1);{
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

/* k4246 in a4237 in k4225 in simplify in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4248(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_4248,2,av);}
a=C_alloc(28);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4254,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t4;
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4296,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t11=C_i_check_list_2(((C_word*)t0)[7],lf[35]);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4310,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4312,a[2]=t10,a[3]=t8,a[4]=t14,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_4312(t16,t12,((C_word*)t0)[7]);}
else{
t3=((C_word*)t0)[6];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6165 in k6139 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_6167,2,av);}
a=C_alloc(18);
if(C_truep(t1)){
t2=(
  /* optimizer.scm:479: touch */
  f_4182(((C_word*)((C_word*)t0)[2])[1])
);
t3=((C_word*)t0)[3];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[15],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6184,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6335,a[2]=t2,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:481: test */
t4=((C_word*)((C_word*)t0)[7])[1];
f_4146(t4,t3,((C_word*)t0)[4],lf[56]);}}

/* a4237 in k4225 in simplify in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4238(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_4238,3,av);}
a=C_alloc(9);
t3=C_i_cadr(t2);
t4=t3;
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4248,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t4,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t6=t2;
t7=C_u_i_car(t6);
/* optimizer.scm:154: match-node */
t8=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t5;
av2[2]=((C_word*)t0)[6];
av2[3]=t7;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k6188 in k6182 in k6165 in k6139 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6190(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_6190,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[15],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6182 in k6165 in k6139 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_6184(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_6184,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(
  /* optimizer.scm:486: touch */
  f_4182(((C_word*)((C_word*)t0)[2])[1])
);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6190,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:487: debugging */
t4=*((C_word*)lf[17]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[18];
av2[3]=lf[104];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6283,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[8]);
/* optimizer.scm:490: walk */
t4=((C_word*)((C_word*)t0)[9])[1];
f_4357(t4,t2,t3,((C_word*)t0)[10],((C_word*)t0)[6]);}}

/* for-each-loop2520 in k10848 in k10845 in k10842 in k10825 in k10822 in k10734 in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in ... */
static void C_fcall f_10892(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_10892,3,t0,t1,t2);}
a=C_alloc(13);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10902,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=C_i_cdr(t4);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10858,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10887,a[2]=t8,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1565: gensym */
t10=*((C_word*)lf[83]+1);{
C_word av2[2];
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4073 in k4070 in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_ccall f_4075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4075,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4078,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4136,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:111: delete-duplicates */
t4=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=*((C_word*)lf[27]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4078(2,av2);}}}

/* k4070 in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_ccall f_4072(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4072,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4075,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:109: scan */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3832(t3,t2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k4076 in k4073 in k4070 in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_ccall f_4078(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4078,2,av);}
a=C_alloc(5);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_i_check_list_2(t2,lf[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4105,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_4105(t7,((C_word*)t0)[3],t2);}

/* k10845 in k10842 in k10825 in k10822 in k10734 in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_10847,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10850,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1561: copy-node! */
t3=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k10842 in k10825 in k10822 in k10734 in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_10844,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10847,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10915,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:1552: fold-right */
t4=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* simplify in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_4223(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_4223,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4227,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=t2;
t5=C_slot(t4,C_fix(1));
/* optimizer.scm:151: ##sys#hash-table-ref */
t6=*((C_word*)lf[38]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=*((C_word*)lf[30]+1);
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k4225 in simplify in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_4227,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4230,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4238,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:152: any */
t4=*((C_word*)lf[37]+1);{
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
else{
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11904 in map-loop2745 in g2717 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11906(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11906,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_11881(t6,((C_word*)t0)[5],t5);}

/* a10649 in rec in scan in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10650,3,av);}
/* optimizer.scm:1448: rec */
t3=((C_word*)((C_word*)t0)[2])[1];
f_10223(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k5917 in k5923 in k5886 in k5865 in k5850 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5919,2,av);}
t2=((C_word*)t0)[2];
f_5891(t2,C_i_not(t1));}

/* k9772 in k9724 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9774(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,1)))){
C_save_and_reclaim((void *)f_9774,2,av);}
a=C_alloc(19);
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[2];
t4=C_a_i_record4(&a,4,lf[14],lf[144],t2,t3);
t5=C_a_i_list2(&a,2,((C_word*)t0)[3],t4);
t6=((C_word*)t0)[4];
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[5],t5);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k7571 in k7482 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7573(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_7573,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
f_7487(t3,C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[4],t2));}

/* k5923 in k5886 in k5865 in k5850 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5925(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5925,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_5891(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5919,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_u_i_car(((C_word*)t0)[3]);
/* optimizer.scm:341: test */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4146(t4,t2,t3,lf[97]);}}

/* k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5087(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_5087,2,av);}
a=C_alloc(24);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_5090,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],tmp=(C_word)a,a+=19,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6032,a[2]=t3,a[3]=((C_word*)t0)[16],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:312: test */
t5=((C_word*)((C_word*)t0)[16])[1];
f_4146(t5,t4,((C_word*)t0)[9],lf[99]);}

/* a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5231(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_5231,5,av);}
a=C_alloc(26);
t5=C_i_car(((C_word*)t0)[2]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_5753,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=t1,a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[2],a[19]=t6,a[20]=t3,a[21]=((C_word*)t0)[18],a[22]=((C_word*)t0)[19],a[23]=((C_word*)t0)[20],a[24]=t2,a[25]=((C_word*)t0)[21],tmp=(C_word)a,a+=26,tmp);
/* tweaks.scm:57: ##sys#get */
t8=*((C_word*)lf[45]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[17];
av2[3]=lf[95];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k7940 in k7881 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7942(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7942,2,av);}
a=C_alloc(22);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_record4(&a,4,lf[14],lf[144],((C_word*)t0)[3],t2);
t4=C_a_i_list2(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];
t6=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[6],t4);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k10635 in k10624 in rec in scan in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10637,2,av);}
/* optimizer.scm:1447: rec */
t2=((C_word*)((C_word*)t0)[2])[1];
f_10223(t2,((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,C_SCHEME_FALSE,t1);}

/* k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_5097(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,0,4)))){
C_save_and_reclaim_args((void *)trf_5097,2,t0,t1);}
a=C_alloc(27);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_i_caddr(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5111,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],a[9]=t4,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:323: check-signature */
t6=*((C_word*)lf[74]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[11];
av2[3]=((C_word*)t0)[9];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_5177,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[14],a[11]=((C_word*)t0)[15],a[12]=((C_word*)t0)[16],a[13]=((C_word*)t0)[8],a[14]=((C_word*)t0)[3],a[15]=((C_word*)t0)[6],a[16]=((C_word*)t0)[11],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5852,a[2]=((C_word*)t0)[9],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[19],tmp=(C_word)a,a+=6,tmp);
/* tweaks.scm:57: ##sys#get */
t4=*((C_word*)lf[45]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[11];
av2[3]=lf[100];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_5249(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,0,6)))){
C_save_and_reclaim_args((void *)trf_5249,2,t0,t1);}
a=C_alloc(23);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5252,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
t3=(C_truep(((C_word*)t0)[18])?lf[80]:lf[81]);
t4=C_i_cadddr(((C_word*)t0)[19]);
/* optimizer.scm:371: debugging */
t5=*((C_word*)lf[17]+1);{
C_word av2[7];
av2[0]=t5;
av2[1]=t2;
av2[2]=lf[76];
av2[3]=t3;
av2[4]=((C_word*)t0)[10];
av2[5]=((C_word*)t0)[20];
av2[6]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(7,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5347,a[2]=((C_word*)t0)[15],a[3]=((C_word*)t0)[21],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[16],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[3],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[22],a[15]=((C_word*)t0)[23],a[16]=((C_word*)t0)[2],a[17]=((C_word*)t0)[10],a[18]=((C_word*)t0)[24],a[19]=((C_word*)t0)[25],a[20]=((C_word*)t0)[26],a[21]=((C_word*)t0)[14],a[22]=((C_word*)t0)[20],tmp=(C_word)a,a+=23,tmp);
/* optimizer.scm:394: test */
t3=((C_word*)((C_word*)t0)[24])[1];
f_4146(t3,t2,((C_word*)t0)[20],lf[68]);}}

/* k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_5090,2,av);}
a=C_alloc(27);
t2=t1;
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_5097,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[2],a[17]=((C_word*)t0)[15],a[18]=((C_word*)t0)[16],a[19]=((C_word*)t0)[17],a[20]=((C_word*)t0)[18],tmp=(C_word)a,a+=21,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5986,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[17],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:316: test */
t6=((C_word*)((C_word*)t0)[17])[1];
f_4146(t6,t5,((C_word*)t0)[10],lf[58]);}

/* k5491 in k5453 in k5447 in k5441 in loop in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5493(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_5493,2,av);}
a=C_alloc(12);
t2=C_a_i_list1(&a,1,t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5475,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t5=((C_word*)t0)[5];
t6=C_u_i_car(t5);
/* optimizer.scm:416: walk */
t7=((C_word*)((C_word*)t0)[8])[1];
f_4357(t7,t4,t6,((C_word*)t0)[9],((C_word*)t0)[10]);}

/* k10624 in rec in scan in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_10626,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10637,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1447: append */
t5=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_5215(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,0,5)))){
C_save_and_reclaim_args((void *)trf_5215,2,t0,t1);}
a=C_alloc(22);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=t2;
t4=C_i_caddr(t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_5231,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[2],a[15]=t5,a[16]=((C_word*)t0)[14],a[17]=((C_word*)t0)[15],a[18]=((C_word*)t0)[16],a[19]=((C_word*)t0)[17],a[20]=((C_word*)t0)[18],a[21]=((C_word*)t0)[19],tmp=(C_word)a,a+=22,tmp);
/* optimizer.scm:358: decompose-lambda-list */
t7=*((C_word*)lf[66]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=((C_word*)t0)[20];
av2[2]=t5;
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5759,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[20],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=C_eqp(lf[3],t3);
if(C_truep(t4)){
t5=C_slot(((C_word*)t0)[2],C_fix(2));
t6=C_i_car(t5);
/* tweaks.scm:51: ##sys#get */
t7=*((C_word*)lf[45]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t2;
av2[2]=t6;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t5=t2;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_5759(2,av2);}}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_5759(2,av2);}}}}

/* a5899 in k5889 in k5886 in k5865 in k5850 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5900,3,av);}
t3=*((C_word*)lf[85]+1);
/* optimizer.scm:343: g561 */
t4=*((C_word*)lf[85]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6555 in k6552 in k6549 in perform-pre-optimization! in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6557,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6549 in perform-pre-optimization! in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_6551,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6554,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6571,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* tweaks.scm:51: ##sys#get */
t4=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[125];
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* a10914 in k10842 in k10825 in k10822 in k10734 in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10915(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,1)))){
C_save_and_reclaim((void *)f_10915,4,av);}
a=C_alloc(19);
t4=C_i_car(t2);
t5=C_a_i_list1(&a,1,t4);
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_slot(t7,C_fix(3));
t9=C_i_car(t8);
t10=C_slot(t9,C_fix(1));
t11=C_slot(t9,C_fix(2));
t12=C_slot(t9,C_fix(3));
t13=C_a_i_record4(&a,4,lf[14],t10,t11,t12);
t14=C_a_i_list2(&a,2,t13,t3);
t15=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[6],t5,t14);
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}

/* k6552 in k6549 in perform-pre-optimization! in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6554,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[4])[1],C_fix(0)))){
/* optimizer.scm:596: debugging */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[18];
av2[3]=lf[120];
av2[4]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5957 in k5850 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5959(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5959,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_5867(2,av2);}}
else{
/* optimizer.scm:336: test */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4146(t2,((C_word*)t0)[2],((C_word*)t0)[4],lf[49]);}}

/* k5477 in k5473 in k5491 in k5453 in k5447 in k5441 in loop in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 in ... */
static void C_ccall f_5479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_5479,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[6],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5473 in k5491 in k5453 in k5447 in k5441 in loop in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5475(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5475,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5479,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
t5=C_u_i_cdr(t4);
t6=C_a_i_minus(&a,2,((C_word*)t0)[5],C_fix(1));
t7=((C_word*)t0)[6];
t8=C_u_i_cdr(t7);
/* optimizer.scm:417: loop */
t9=((C_word*)((C_word*)t0)[7])[1];
f_5361(t9,t3,t5,t6,t8,((C_word*)t0)[8]);}

/* touch in perform-pre-optimization! in k4138 in k3753 in k3750 in k3747 */
static C_word C_fcall f_6540(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_stack_overflow_check;{}
t1=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
return(C_SCHEME_TRUE);}

/* test in perform-pre-optimization! in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_6544(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_6544,4,t0,t1,t2,t3);}
/* optimizer.scm:553: get */
t4=*((C_word*)lf[33]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k5683 in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5685(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5685,2,av);}
if(C_truep(t1)){
t2=C_i_memq(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=((C_word*)t0)[4];
f_5546(t3,C_i_not(t2));}
else{
t2=((C_word*)t0)[4];
f_5546(t2,C_SCHEME_FALSE);}}

/* k10681 in scan in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_10683,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10690,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1453: delete */
t3=*((C_word*)lf[166]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)((C_word*)t0)[5])[1];
av2[4]=*((C_word*)lf[27]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* loop1 in a12902 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_12913(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_12913,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=t3;
t5=C_slot(t4,C_fix(1));
t6=t3;
t7=C_slot(t6,C_fix(2));
t8=t7;
t9=t3;
t10=C_slot(t9,C_fix(3));
t11=t10;
t12=C_eqp(t5,lf[6]);
if(C_truep(t12)){
t13=C_i_cdr(t8);
if(C_truep(C_i_nullp(t13))){
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13238,a[2]=t1,a[3]=t11,a[4]=t8,a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t15=C_u_i_car(t8);
/* optimizer.scm:701: get */
t16=*((C_word*)lf[33]+1);{
C_word av2[5];
av2[0]=t16;
av2[1]=t14;
av2[2]=((C_word*)t0)[3];
av2[3]=t15;
av2[4]=lf[105];
((C_proc)(void*)(*((C_word*)t16+1)))(5,av2);}}
else{
t14=t1;{
C_word av2[2];
av2[0]=t14;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}}
else{
t13=t1;{
C_word av2[2];
av2[0]=t13;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}}

/* a9332 in k9250 in k9241 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,1)))){
C_save_and_reclaim((void *)f_9333,4,av);}
a=C_alloc(14);
t4=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t5=C_a_i_list2(&a,2,t2,t3);
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[144],t4,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k9329 in k9250 in k9241 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_9331,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6516 in for-each-loop920 in k6473 in a6470 in k6428 in k6425 in k6421 in k6415 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6518,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6508(t3,((C_word*)t0)[4],t2);}

/* k10825 in k10822 in k10734 in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10827(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10827,2,av);}
a=C_alloc(11);
t2=(C_truep(((C_word*)t0)[2])?C_i_pairp(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=C_a_i_record4(&a,4,lf[14],C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10844,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1550: copy-node! */
t6=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10822 in k10734 in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10824(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10824,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10827,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10991,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_10991(t6,t2,t1);}

/* a12902 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_12903(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_12903,5,av);}
a=C_alloc(9);
t5=C_a_i_list1(&a,1,t3);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12913,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_12913(t9,t1,t5,t4);}

/* for-each-loop920 in k6473 in a6470 in k6428 in k6425 in k6421 in k6415 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_6508(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_6508,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6518,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6480,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t8=C_i_car(t6);
/* optimizer.scm:531: print* */
t9=*((C_word*)lf[113]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t7;
av2[2]=lf[114];
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9276 in k9250 in k9241 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_9278,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a7043 in g1390 in k7000 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7044,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7050,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:862: filter */
t4=*((C_word*)lf[132]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* ##compiler#perform-pre-optimization! in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6537(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_6537,4,av);}
a=C_alloc(22);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6540,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t13=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6544,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6551,a[2]=t1,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=t3,a[7]=t11,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:555: debugging */
t15=*((C_word*)lf[17]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=t14;
av2[2]=lf[28];
av2[3]=lf[127];
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}

/* a11846 in k11840 in g2717 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11847(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_11847,5,av);}
a=C_alloc(16);
t5=C_slot(((C_word*)t0)[2],C_fix(3));
t6=C_i_car(t5);
t7=t6;
t8=((C_word*)((C_word*)t0)[3])[1];
t9=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t10=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t9);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11858,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t8,a[5]=((C_word*)t0)[5],a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t12=C_a_i_record4(&a,4,lf[14],lf[15],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
/* optimizer.scm:1683: copy-node! */
t13=*((C_word*)lf[16]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=t11;
av2[2]=t12;
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t13+1)))(4,av2);}}

/* k11840 in g2717 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_11842,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11847,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1677: decompose-lambda-list */
t3=*((C_word*)lf[66]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[7];
av2[2]=((C_word*)t0)[5];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k7008 in g1390 in k7000 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_7010,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7018,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7020,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:867: filter-map */
t5=*((C_word*)lf[134]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=((C_word*)((C_word*)t0)[6])[1];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k7016 in k7008 in g1390 in k7000 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_7018,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1),((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5389 in k5386 in k5435 in loop in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_5391,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7031 in a7019 in k7008 in g1390 in k7000 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7033,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_u_i_car(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* for-each-loop2450 in k10822 in k10734 in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_10991(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10991,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11001,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1527: g2451 */
t5=((C_word*)t0)[3];
f_10737(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11352 in for-each-loop2429 in rec in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11354,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11344(t3,((C_word*)t0)[4],t2);}

/* k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10696(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_10696,2,av);}
a=C_alloc(14);
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=((C_word*)t0)[3];
t4=C_slot(t3,C_fix(2));
t5=t4;
t6=C_i_caddr(t5);
t7=C_i_length(t6);
t8=t7;
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10711,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=t8,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],a[10]=t10,a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:1463: get */
t12=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t11;
av2[2]=((C_word*)t0)[10];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[126];
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}

/* transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_10692(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,5)))){
C_save_and_reclaim_args((void *)trf_10692,8,t0,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(19);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10696,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t7,a[5]=t3,a[6]=t6,a[7]=t5,a[8]=t1,a[9]=t4,a[10]=((C_word*)t0)[3],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_pairp(t5))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11418,a[2]=t8,a[3]=t3,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11420,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1457: ##sys#make-promise */
t11=*((C_word*)lf[183]+1);{
C_word av2[3];
av2[0]=t11;
av2[1]=t9;
av2[2]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
/* optimizer.scm:1458: debugging */
t9=*((C_word*)lf[17]+1);{
C_word av2[6];
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[18];
av2[3]=lf[184];
av2[4]=t3;
av2[5]=t7;
((C_proc)(void*)(*((C_word*)t9+1)))(6,av2);}}}

/* k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_11949,2,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11952,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12098,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_12098(t6,t2,((C_word*)t0)[10]);}

/* k10688 in k10681 in scan in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10690,2,av);}
/* optimizer.scm:1453: lset= */
t2=*((C_word*)lf[165]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[27]+1);
av2[3]=((C_word*)((C_word*)t0)[3])[1];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11946(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11946,2,av);}
a=C_alloc(26);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11949,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12406,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12408,a[2]=t6,a[3]=t10,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_12408(t12,t8,((C_word*)t0)[6]);}

/* k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_11943,2,av);}
a=C_alloc(16);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11946,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12444,a[2]=((C_word*)t0)[7],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12450,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:1691: list-tabulate */
t6=*((C_word*)lf[188]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t2;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11940(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_11940,2,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11943,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[5],lf[35]);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12473,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12475,a[2]=t5,a[3]=t10,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_12475(t12,t8,((C_word*)t0)[5]);}

/* k9910 in loop in a9850 in k9837 in k9808 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9912,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7000 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7002(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_7002,2,av);}
a=C_alloc(22);
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7003,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)((C_word*)t0)[2])[1];
t6=C_i_check_list_2(t5,lf[2]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7062,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7231,a[2]=t9,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_7231(t11,t7,t5);}

/* g1390 in k7000 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_7003(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_7003,3,t0,t1,t2);}
a=C_alloc(11);
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7010,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7044,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t7=t2;
t8=C_u_i_cdr(t7);
/* optimizer.scm:861: append-map */
t9=*((C_word*)lf[135]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t5;
av2[2]=t6;
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* a9358 in k9241 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9359(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9359,3,av);}
t3=t2;
t4=C_slot(t3,C_fix(1));
t5=C_eqp(lf[34],t4);
if(C_truep(t5)){
t6=t2;
t7=C_slot(t6,C_fix(2));
t8=C_i_car(t7);
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_eqp(((C_word*)t0)[2],t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k7881 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7883(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7883,2,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=C_i_length(((C_word*)t0)[2]);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=C_i_caddr(((C_word*)t0)[3]);
t5=C_i_not(t4);
t6=(C_truep(t5)?t5:C_eqp(t4,*((C_word*)lf[146]+1)));
if(C_truep(t6)){
t7=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t8=t7;
t9=((C_word*)t0)[3];
t10=C_u_i_car(t9);
t11=C_a_i_list1(&a,1,t10);
t12=t11;
t13=C_i_car(((C_word*)t0)[2]);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7942,a[2]=t14,a[3]=t12,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t8,tmp=(C_word)a,a+=7,tmp);
t16=((C_word*)t0)[3];
t17=C_u_i_cdr(t16);
t18=C_u_i_car(t17);
/* optimizer.scm:1002: qnode */
t19=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t19;
av2[1]=t15;
av2[2]=t18;
((C_proc)(void*)(*((C_word*)t19+1)))(3,av2);}}
else{
t7=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
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

/* g2934 in k11955 in g2920 in k11950 in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in ... */
static void C_fcall f_11958(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_11958,3,t0,t1,t2);}
a=C_alloc(11);
t3=C_i_cdr(t2);
t4=t3;
t5=C_slot(t4,C_fix(3));
t6=C_i_cdr(t5);
t7=t6;
t8=C_slot(t4,C_fix(2));
t9=t8;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11990,a[2]=t9,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11994,a[2]=t10,a[3]=t7,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1764: varnode */
t12=*((C_word*)lf[51]+1);{
C_word av2[3];
av2[0]=t12;
av2[1]=t11;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}

/* k11955 in g2920 in k11950 in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 in ... */
static void C_ccall f_11957(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_11957,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11958,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_check_list_2(t1,lf[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12045,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_12045(t7,((C_word*)t0)[5],t1);}

/* k11950 in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11952(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11952,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11953,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12075,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_12075(t6,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* g2920 in k11950 in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_11953(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_11953,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11957,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(t2);
/* optimizer.scm:1756: get */
t5=*((C_word*)lf[33]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=t4;
av2[4]=lf[126];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k9433 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9435(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_9435,2,av);}
a=C_alloc(19);
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_a_i_list1(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9468,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9470,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9480,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1242: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t7;
av2[2]=t8;
av2[3]=t9;
C_call_with_values(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k8816 in k8772 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_8818(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,1)))){
C_save_and_reclaim_args((void *)trf_8818,2,t0,t1);}
a=C_alloc(16);
t2=((C_word*)t0)[2];
t3=C_a_i_record4(&a,4,lf[14],lf[144],t1,t2);
t4=C_a_i_list2(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_11937,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11940,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:1688: gensym */
t4=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[195];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6156 in k6139 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6158,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
/* optimizer.scm:476: debugging */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[76];
av2[3]=lf[103];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[4];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[15],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a10592 in rec in scan in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10593,3,av);}
/* optimizer.scm:1443: rec */
t3=((C_word*)((C_word*)t0)[2])[1];
f_10223(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* map-loop2711 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_12509(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_12509,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12534,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1669: g2717 */
t5=((C_word*)t0)[4];
f_11815(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a4887 in k4881 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4888(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_4888,5,av);}
a=C_alloc(15);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4894,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4906,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t3,a[9]=t4,a[10]=((C_word*)t0)[2],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:272: ##sys#call-with-values */{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t6;
C_call_with_values(4,av2);}}

/* k4881 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_4883,2,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4888,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:270: decompose-lambda-list */
t3=*((C_word*)lf[66]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[9];
av2[2]=((C_word*)t0)[10];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4982,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
/* optimizer.scm:286: test */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4146(t3,t2,((C_word*)t0)[6],lf[64]);}}

/* k6139 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_6141,2,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(
  /* optimizer.scm:474: touch */
  f_4182(((C_word*)((C_word*)t0)[2])[1])
);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6147,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6158,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:475: test */
t5=((C_word*)((C_word*)t0)[5])[1];
f_4146(t5,t4,((C_word*)t0)[4],lf[56]);}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6167,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:478: test */
t3=((C_word*)((C_word*)t0)[5])[1];
f_4146(t3,t2,((C_word*)t0)[4],lf[48]);}}

/* k6145 in k6139 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_6147,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[15],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k12340 in k12348 in k12352 in k12106 in descend in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in ... */
static void C_ccall f_12342(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12342,2,av);}
a=C_alloc(11);
t2=C_a_i_list1(&a,1,t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12255,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12270,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1729: append-map */
t6=*((C_word*)lf[135]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k12564 in for-each-loop2692 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_12566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_12566,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12556(t3,((C_word*)t0)[4],t2);}

/* k12316 in loop in k12276 in a12269 in k12340 in k12348 in k12352 in k12106 in descend in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in ... */
static void C_ccall f_12318(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_12318,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12322,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
t5=C_u_i_cdr(t4);
t6=((C_word*)t0)[5];
t7=C_u_i_cdr(t6);
/* optimizer.scm:1739: loop */
t8=((C_word*)((C_word*)t0)[6])[1];
f_12288(t8,t3,t5,t7);}

/* k8371 in map-loop1694 in k8216 in k8213 in k8181 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8373(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8373,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8348(t6,((C_word*)t0)[5],t5);}

/* k12320 in k12316 in loop in k12276 in a12269 in k12340 in k12348 in k12352 in k12106 in descend in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in ... */
static void C_ccall f_12322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_12322,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[6],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4893 in a4887 in k4881 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4894,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4900,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:273: partition */
t3=*((C_word*)lf[61]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6108 in map-loop803 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6110(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6110,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6085(t6,((C_word*)t0)[5],t5);}

/* k7368 in rewrite in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7370(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_7370,2,av);}
a=C_alloc(7);
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7380,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[4]);
/* optimizer.scm:916: append */
t5=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t2;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7364(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,9)))){
C_save_and_reclaim((void *)f_7364,2,av);}
a=C_alloc(8);
t2=C_mutate2((C_word*)lf[140]+1 /* (set! ##compiler#substitution-table ...) */,t1);
t3=C_mutate2((C_word*)lf[141]+1 /* (set! ##compiler#rewrite ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7366,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate2((C_word*)lf[142]+1 /* (set! ##compiler#simplify-named-call ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7386,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate2((C_word*)lf[158]+1 /* (set! ##compiler#transform-direct-lambdas! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9982,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate2((C_word*)lf[186]+1 /* (set! ##compiler#determine-loop-and-dispatch ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11448,tmp=(C_word)a,a+=2,tmp));
t7=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* ##compiler#rewrite in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_7366,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7370,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:915: ##sys#hash-table-ref */
t5=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=*((C_word*)lf[140]+1);
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k12532 in map-loop2711 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_12534(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12534,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_12509(t6,((C_word*)t0)[5],t5);}

/* k7641 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7643(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,1)))){
C_save_and_reclaim((void *)f_7643,2,av);}
a=C_alloc(22);
if(C_truep(t1)){
t2=C_i_caddr(((C_word*)t0)[2]);
t3=(C_truep(t2)?t2:*((C_word*)lf[145]+1));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[3]);
t5=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_car(t7);
t9=C_a_i_list1(&a,1,t8);
t10=((C_word*)t0)[3];
t11=C_a_i_record4(&a,4,lf[14],lf[144],t9,t10);
t12=C_a_i_list2(&a,2,((C_word*)t0)[4],t11);
t13=((C_word*)t0)[5];
t14=t13;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],t5,t12);
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
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

/* a9653 in k9532 in k9526 in k9520 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9654(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9654,3,av);}
t3=t2;
t4=C_slot(t3,C_fix(1));
t5=C_eqp(lf[34],t4);
if(C_truep(t5)){
t6=t2;
t7=C_slot(t6,C_fix(2));
t8=C_i_car(t7);
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_eqp(((C_word*)t0)[2],t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* a9608 in k9535 in k9532 in k9526 in k9520 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9609(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,1)))){
C_save_and_reclaim((void *)f_9609,4,av);}
a=C_alloc(17);
t4=C_eqp(*((C_word*)lf[146]+1),lf[147]);
if(C_truep(t4)){
t5=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t6=C_a_i_list2(&a,2,t2,t3);
t7=t1;
t8=t7;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[144],t5,t6);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t5=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t6=C_a_i_list2(&a,2,t2,t3);
t7=t1;
t8=t7;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[89],t5,t6);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k9605 in k9535 in k9532 in k9526 in k9520 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_9607,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4800 in k4726 in k4723 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4802,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_slot(t2,C_fix(2));
t4=C_i_car(t3);
t5=((C_word*)t0)[3];
f_4745(t5,C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[4],t4),((C_word*)t0)[5]));}
else{
t2=((C_word*)t0)[3];
f_4745(t2,((C_word*)t0)[5]);}}

/* a12594 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_12595(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_12595,9,av);}
a=C_alloc(9);
t9=C_i_assoc(t4,*((C_word*)lf[207]+1));
t10=t9;
if(C_truep(t10)){
if(C_truep(C_i_listp(t6))){
t11=C_i_length(t6);
if(C_truep(C_i_lessp(t11,*((C_word*)lf[208]+1)))){
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12617,a[2]=t10,a[3]=t7,a[4]=t8,a[5]=t3,a[6]=t5,a[7]=t1,a[8]=t6,tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:800: gensym */
t13=*((C_word*)lf[83]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}}
else{
t11=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}
else{
t11=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}

/* k4790 in map-loop396 in k4743 in k4726 in k4723 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4792(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4792,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4767(t6,((C_word*)t0)[5],t5);}

/* k12545 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_12547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12547,2,av);}
t2=C_i_pairp(((C_word*)((C_word*)t0)[2])[1]);
/* optimizer.scm:1776: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
C_values(4,av2);}}

/* k4466 in a4457 in k4447 in k4369 in walk in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_4468(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_4468,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4472,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:199: lset-adjoin */
t3=*((C_word*)lf[41]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=*((C_word*)lf[27]+1);
av2[3]=*((C_word*)lf[39]+1);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* for-each-loop2692 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_12556(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_12556,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12566,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1661: g2693 */
t5=((C_word*)t0)[3];
f_11800(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a4457 in k4447 in k4369 in walk in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4458,6,av);}
a=C_alloc(4);
if(C_truep(t2)){
t6=(
  /* optimizer.scm:202: touch */
  f_4182(((C_word*)((C_word*)t0)[2])[1])
);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4479,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:204: qnode */
t8=*((C_word*)lf[40]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4468,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[5])){
t7=t6;
f_4468(t7,C_SCHEME_UNDEFINED);}
else{
t7=C_set_block_item(((C_word*)t0)[6],0,C_SCHEME_FALSE);
t8=t6;
f_4468(t8,t7);}}}

/* k9532 in k9526 in k9520 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_9534(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_9534,2,t0,t1);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9537,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9654,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1260: remove */
t5=*((C_word*)lf[4]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k9535 in k9532 in k9526 in k9520 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9537(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_9537,2,av);}
a=C_alloc(14);
if(C_truep(C_i_nullp(t1))){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9563,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1265: qnode */
t5=*((C_word*)lf[40]+1);{
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
t2=C_i_cdr(t1);
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=C_u_i_car(t1);
t5=C_a_i_list2(&a,2,((C_word*)t0)[2],t4);
t6=((C_word*)t0)[3];
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],t3,t5);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9607,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9609,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1273: fold-inner */
t7=*((C_word*)lf[155]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}}

/* a13391 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_13392(C_word c,C_word *av){
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
C_word t10=av[10];
C_word t11=av[11];
C_word t12=av[12];
C_word t13=av[13];
C_word t14;
C_word t15;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_13392,14,av);}
a=C_alloc(12);
if(C_truep(C_i_equalp(t6,*((C_word*)lf[217]+1)))){
t14=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_13405,a[2]=t9,a[3]=t10,a[4]=t13,a[5]=t1,a[6]=t8,a[7]=t7,a[8]=t3,a[9]=t2,a[10]=t5,a[11]=t4,tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:644: immediate? */
t15=*((C_word*)lf[219]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=t14;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t15+1)))(3,av2);}}
else{
t14=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}}

/* a11741 in a11718 in walk in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11742,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[5])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[6])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[5])+1,((C_word*)((C_word*)t0)[7])[1]);
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k3991 in k3911 in scan in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_ccall f_3993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3993,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3996,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:93: alist-ref */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)((C_word*)t0)[9])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3994 in k3991 in k3911 in scan in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_ccall f_3996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_3996,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3999,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4014,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t5=C_i_memq(((C_word*)t0)[4],((C_word*)((C_word*)t0)[8])[1]);
t6=t4;
f_4014(t6,C_i_not(t5));}
else{
t5=t4;
f_4014(t5,C_SCHEME_FALSE);}}

/* k3997 in k3994 in k3991 in k3911 in scan in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_ccall f_3999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3999,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4002,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_memq(((C_word*)t0)[4],((C_word*)t0)[6]))){
/* optimizer.scm:104: remember */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3783(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
/* optimizer.scm:103: mark */
t3=((C_word*)((C_word*)t0)[7])[1];
f_3760(t3,t2,((C_word*)t0)[4]);}}

/* k4865 in k4858 in k4723 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4867,2,av);}
t2=((C_word*)t0)[2];
f_4728(t2,C_i_not(t1));}

/* g2667 in walk in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_11751(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_11751,3,t0,t1,t2);}
/* optimizer.scm:1653: g2682 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_11511(t3,t1,t2,((C_word*)t0)[3]);}

/* k7397 in argc-ok? in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_7399(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7399,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7414,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
/* optimizer.scm:925: argc-ok? */
t5=((C_word*)((C_word*)t0)[4])[1];
f_7389(t5,t2,t4);}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* k5453 in k5447 in k5441 in loop in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5455(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_5455,2,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5493,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:415: gensym */
t3=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[84];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
t4=C_a_i_minus(&a,2,((C_word*)t0)[4],C_fix(1));
t5=((C_word*)t0)[5];
t6=C_u_i_cdr(t5);
/* optimizer.scm:418: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_5361(t7,((C_word*)t0)[2],t3,t4,t6,((C_word*)t0)[7]);}}

/* k4858 in k4723 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4860,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4867,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:253: test */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4146(t3,t2,((C_word*)t0)[4],lf[57]);}
else{
t2=((C_word*)t0)[2];
f_4728(t2,C_SCHEME_FALSE);}}

/* k4477 in a4457 in k4447 in k4369 in walk in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,1)))){
C_save_and_reclaim((void *)f_4479,2,av);}
a=C_alloc(14);
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_a_i_list2(&a,2,t3,t1);
t5=((C_word*)t0)[3];
t6=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],t2,t4);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k4470 in k4466 in a4457 in k4447 in k4369 in walk in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4472,2,av);}
t2=C_mutate2((C_word*)lf[39]+1 /* (set! ##compiler#broken-constant-nodes ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7378 in k7368 in rewrite in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7380,2,av);}
/* optimizer.scm:916: ##sys#hash-table-set! */
t2=*((C_word*)lf[129]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[140]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11724 in a11718 in walk in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11725,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[5])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[6])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[5])+1,((C_word*)((C_word*)t0)[7])[1]);
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* argc-ok? in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_7389(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7389,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_not(t2);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7399,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnump(t2))){
t5=C_i_length(((C_word*)t0)[3]);
t6=t4;
f_7399(t6,C_eqp(t2,t5));}
else{
t5=t4;
f_7399(t5,C_SCHEME_FALSE);}}}

/* ##compiler#simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7386(C_word c,C_word *av){
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
C_word t84;
C_word t85;
C_word t86;
C_word t87;
C_word t88;
C_word t89;
C_word t90;
C_word t91;
C_word t92;
C_word t93;
C_word t94;
C_word t95;
C_word t96;
C_word t97;
C_word t98;
C_word t99;
C_word t100;
C_word t101;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_7386,9,av);}
a=C_alloc(17);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7389,a[2]=t10,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
switch(t6){
case C_fix(1):
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7484,a[2]=t1,a[3]=t7,a[4]=t8,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t13=t4;
/* tweaks.scm:51: ##sys#get */
t14=*((C_word*)lf[45]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=t12;
av2[2]=t13;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t14+1)))(4,av2);}
case C_fix(2):
if(C_truep(*((C_word*)lf[143]+1))){
t12=C_i_length(t8);
t13=C_i_car(t7);
if(C_truep(C_i_nequalp(t12,t13))){
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7643,a[2]=t7,a[3]=t8,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t15=t4;
/* tweaks.scm:51: ##sys#get */
t16=*((C_word*)lf[45]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t16;
av2[1]=t14;
av2[2]=t15;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t16+1)))(4,av2);}}
else{
t14=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}}
else{
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
case C_fix(3):
if(C_truep(*((C_word*)lf[143]+1))){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7715,a[2]=t7,a[3]=t5,a[4]=t1,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t13=t4;
/* tweaks.scm:51: ##sys#get */
t14=*((C_word*)lf[45]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=t12;
av2[2]=t13;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t14+1)))(4,av2);}}
else{
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
case C_fix(4):
if(C_truep(*((C_word*)lf[143]+1))){
if(C_truep(*((C_word*)lf[145]+1))){
t12=C_i_length(t8);
t13=C_eqp(C_fix(2),t12);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7816,a[2]=t7,a[3]=t8,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t15=t4;
/* tweaks.scm:51: ##sys#get */
t16=*((C_word*)lf[45]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t16;
av2[1]=t14;
av2[2]=t15;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t16+1)))(4,av2);}}
else{
t14=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}}
else{
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}}
else{
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
case C_fix(5):
if(C_truep(*((C_word*)lf[143]+1))){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7883,a[2]=t8,a[3]=t7,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t13=t4;
/* tweaks.scm:51: ##sys#get */
t14=*((C_word*)lf[45]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=t12;
av2[2]=t13;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t14+1)))(4,av2);}}
else{
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
case C_fix(6):
t12=C_i_caddr(t7);
t13=(C_truep(t12)?t12:*((C_word*)lf[145]+1));
if(C_truep(t13)){
if(C_truep(*((C_word*)lf[143]+1))){
t14=C_i_length(t8);
t15=C_eqp(C_fix(1),t14);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7990,a[2]=t7,a[3]=t8,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t17=t4;
/* tweaks.scm:51: ##sys#get */
t18=*((C_word*)lf[45]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t18;
av2[1]=t16;
av2[2]=t17;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t18+1)))(4,av2);}}
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
t14=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
case C_fix(7):
t12=C_i_cadddr(t7);
t13=(C_truep(t12)?t12:*((C_word*)lf[145]+1));
if(C_truep(t13)){
if(C_truep(*((C_word*)lf[143]+1))){
t14=C_i_length(t8);
t15=t7;
t16=C_u_i_car(t15);
if(C_truep(C_i_nequalp(t14,t16))){
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8082,a[2]=t7,a[3]=t5,a[4]=t1,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t18=t4;
/* tweaks.scm:51: ##sys#get */
t19=*((C_word*)lf[45]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t19;
av2[1]=t17;
av2[2]=t18;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t19+1)))(4,av2);}}
else{
t17=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t17;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t17+1)))(2,av2);}}}
else{
t14=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}}
else{
t14=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
case C_fix(8):
if(C_truep(*((C_word*)lf[143]+1))){
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8157,a[2]=t7,a[3]=t1,a[4]=t2,a[5]=t5,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
t13=t4;
/* tweaks.scm:51: ##sys#get */
t14=*((C_word*)lf[45]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=t12;
av2[2]=t13;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t14+1)))(4,av2);}}
else{
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
case C_fix(9):
if(C_truep(*((C_word*)lf[143]+1))){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8183,a[2]=t8,a[3]=t5,a[4]=t1,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t13=t4;
/* tweaks.scm:51: ##sys#get */
t14=*((C_word*)lf[45]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=t12;
av2[2]=t13;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t14+1)))(4,av2);}}
else{
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
case C_fix(10):
if(C_truep(*((C_word*)lf[143]+1))){
t12=C_i_cadddr(t7);
t13=(C_truep(t12)?t12:*((C_word*)lf[145]+1));
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8442,a[2]=t8,a[3]=t7,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t15=t4;
/* tweaks.scm:51: ##sys#get */
t16=*((C_word*)lf[45]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t16;
av2[1]=t14;
av2[2]=t15;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t16+1)))(4,av2);}}
else{
t14=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}}
else{
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
case C_fix(11):
if(C_truep(*((C_word*)lf[143]+1))){
t12=C_i_caddr(t7);
t13=(C_truep(t12)?t12:*((C_word*)lf[145]+1));
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8535,a[2]=t7,a[3]=t1,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t15=t4;
/* tweaks.scm:51: ##sys#get */
t16=*((C_word*)lf[45]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t16;
av2[1]=t14;
av2[2]=t15;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t16+1)))(4,av2);}}
else{
t14=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}}
else{
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
case C_fix(12):
if(C_truep(*((C_word*)lf[143]+1))){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8601,a[2]=t7,a[3]=t8,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t13=t4;
/* tweaks.scm:51: ##sys#get */
t14=*((C_word*)lf[45]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=t12;
av2[2]=t13;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t14+1)))(4,av2);}}
else{
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
case C_fix(13):
if(C_truep(*((C_word*)lf[143]+1))){
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8691,a[2]=t7,a[3]=t1,a[4]=t5,a[5]=t8,a[6]=t3,a[7]=t10,tmp=(C_word)a,a+=8,tmp);
t13=t4;
/* tweaks.scm:51: ##sys#get */
t14=*((C_word*)lf[45]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=t12;
av2[2]=t13;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t14+1)))(4,av2);}}
else{
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
case C_fix(14):
if(C_truep(*((C_word*)lf[143]+1))){
t12=C_i_cadr(t7);
t13=C_i_length(t8);
if(C_truep(C_i_nequalp(t12,t13))){
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8774,a[2]=t7,a[3]=t8,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t15=t4;
/* tweaks.scm:51: ##sys#get */
t16=*((C_word*)lf[45]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t16;
av2[1]=t14;
av2[2]=t15;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t16+1)))(4,av2);}}
else{
t14=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}}
else{
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
case C_fix(15):
if(C_truep(*((C_word*)lf[143]+1))){
t12=C_i_length(t8);
t13=C_eqp(C_fix(1),t12);
if(C_truep(t13)){
t14=*((C_word*)lf[145]+1);
t15=(C_truep(*((C_word*)lf[145]+1))?*((C_word*)lf[145]+1):C_i_cadddr(t7));
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8871,a[2]=t7,a[3]=t1,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t17=t4;
/* tweaks.scm:51: ##sys#get */
t18=*((C_word*)lf[45]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t18;
av2[1]=t16;
av2[2]=t17;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t18+1)))(4,av2);}}
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
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
case C_fix(16):
t12=C_i_car(t7);
t13=t12;
t14=C_i_length(t8);
t15=t14;
t16=C_i_caddr(t7);
t17=t16;
t18=C_i_cadddr(t7);
t19=t18;
t20=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8964,a[2]=t13,a[3]=t15,a[4]=t17,a[5]=t8,a[6]=t5,a[7]=t1,a[8]=t19,a[9]=t7,a[10]=t4,tmp=(C_word)a,a+=11,tmp);
t21=C_i_cddddr(t7);
if(C_truep(C_i_pairp(t21))){
/* optimizer.scm:1160: fifth */
t22=*((C_word*)lf[154]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t22;
av2[1]=t20;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t22+1)))(3,av2);}}
else{
t22=t20;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t22;
av2[1]=C_SCHEME_FALSE;
f_8964(2,av2);}}
case C_fix(17):
if(C_truep(*((C_word*)lf[143]+1))){
t12=C_i_length(t8);
t13=C_i_car(t7);
if(C_truep(C_i_nequalp(t12,t13))){
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9116,a[2]=t8,a[3]=t5,a[4]=t1,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t15=t4;
/* tweaks.scm:51: ##sys#get */
t16=*((C_word*)lf[45]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t16;
av2[1]=t14;
av2[2]=t15;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t16+1)))(4,av2);}}
else{
t14=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}}
else{
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
case C_fix(18):
if(C_truep(*((C_word*)lf[143]+1))){
if(C_truep(C_i_nullp(t8))){
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9199,a[2]=t5,a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t13=t4;
/* tweaks.scm:51: ##sys#get */
t14=*((C_word*)lf[45]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=t12;
av2[2]=t13;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t14+1)))(4,av2);}}
else{
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}}
else{
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
case C_fix(19):
if(C_truep(*((C_word*)lf[143]+1))){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9243,a[2]=t7,a[3]=t5,a[4]=t1,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t13=t4;
/* tweaks.scm:51: ##sys#get */
t14=*((C_word*)lf[45]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=t12;
av2[2]=t13;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t14+1)))(4,av2);}}
else{
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
case C_fix(20):
t12=C_i_length(t8);
t13=t12;
t14=C_i_cadddr(t7);
t15=(C_truep(t14)?t14:*((C_word*)lf[145]+1));
if(C_truep(t15)){
if(C_truep(*((C_word*)lf[143]+1))){
t16=t7;
t17=C_u_i_car(t16);
if(C_truep(C_i_nequalp(t13,t17))){
t18=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9435,a[2]=t7,a[3]=t5,a[4]=t1,a[5]=t13,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
t19=t4;
/* tweaks.scm:51: ##sys#get */
t20=*((C_word*)lf[45]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t20;
av2[1]=t18;
av2[2]=t19;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t20+1)))(4,av2);}}
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
t16=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t16;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}
case C_fix(21):
if(C_truep(*((C_word*)lf[143]+1))){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9522,a[2]=t7,a[3]=t5,a[4]=t1,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t13=t4;
/* tweaks.scm:51: ##sys#get */
t14=*((C_word*)lf[45]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=t12;
av2[2]=t13;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t14+1)))(4,av2);}}
else{
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
case C_fix(22):
t12=C_i_car(t7);
t13=C_i_length(t8);
t14=C_i_cadddr(t7);
t15=t14;
if(C_truep(*((C_word*)lf[143]+1))){
if(C_truep(C_i_nequalp(t13,t12))){
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9726,a[2]=t7,a[3]=t8,a[4]=t5,a[5]=t1,a[6]=t15,tmp=(C_word)a,a+=7,tmp);
t17=t4;
/* tweaks.scm:51: ##sys#get */
t18=*((C_word*)lf[45]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t18;
av2[1]=t16;
av2[2]=t17;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t18+1)))(4,av2);}}
else{
t16=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t16;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}}
else{
t16=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t16;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}
case C_fix(23):
if(C_truep(*((C_word*)lf[143]+1))){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9810,a[2]=t7,a[3]=t8,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t13=t4;
/* tweaks.scm:51: ##sys#get */
t14=*((C_word*)lf[45]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=t12;
av2[2]=t13;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t14+1)))(4,av2);}}
else{
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
default:
/* optimizer.scm:1329: bomb */
t12=*((C_word*)lf[156]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=t1;
av2[2]=lf[157];
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}}

/* k8080 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8082(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_8082,2,av);}
a=C_alloc(16);
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_a_i_list1(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8115,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8123,a[2]=t7,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t9=C_i_caddr(((C_word*)t0)[2]);
/* optimizer.scm:1026: qnode */
t10=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t8;
av2[2]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a11731 in a11718 in walk in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11732,2,av);}
t2=C_i_car(((C_word*)t0)[2]);
/* optimizer.scm:1649: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_11511(t3,t1,t2,((C_word*)t0)[4]);}

/* k4723 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_4725,2,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4728,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t1)){
t3=t2;
f_4728(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4860,a[2]=t2,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:252: test */
t4=((C_word*)((C_word*)t0)[11])[1];
f_4146(t4,t3,((C_word*)t0)[10],lf[58]);}}

/* k4726 in k4723 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_4728(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,0,4)))){
C_save_and_reclaim_args((void *)trf_4728,2,t0,t1);}
a=C_alloc(13);
if(C_truep(t1)){
t2=(
  /* optimizer.scm:254: touch */
  f_4182(((C_word*)((C_word*)t0)[2])[1])
);
t3=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t4=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t3);
t5=C_i_cadr(((C_word*)t0)[4]);
/* optimizer.scm:256: walk */
t6=((C_word*)((C_word*)t0)[5])[1];
f_4357(t6,((C_word*)t0)[6],t5,((C_word*)t0)[7],((C_word*)t0)[8]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4745,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4802,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(((C_word*)t0)[4]);
t5=C_slot(t4,C_fix(1));
t6=C_eqp(lf[3],t5);
if(C_truep(t6)){
t7=C_u_i_car(((C_word*)t0)[4]);
t8=C_slot(t7,C_fix(2));
t9=C_i_car(t8);
/* optimizer.scm:259: test */
t10=((C_word*)((C_word*)t0)[11])[1];
f_4146(t10,t3,t9,lf[56]);}
else{
t7=t3;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_4802(2,av2);}}}}

/* k7447 in loop in a9850 in k9837 in k9808 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_7449(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_7449,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
/* optimizer.scm:930: qnode */
t3=*((C_word*)lf[40]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* optimizer.scm:931: qnode */
t2=*((C_word*)lf[40]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* a11718 in walk in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11719(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_11719,5,av);}
a=C_alloc(29);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11725,a[2]=t10,a[3]=((C_word*)t0)[2],a[4]=t12,a[5]=((C_word*)t0)[3],a[6]=t6,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11732,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11742,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t8,a[5]=((C_word*)t0)[3],a[6]=t10,a[7]=t12,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:1645: ##sys#dynamic-wind */
t16=*((C_word*)lf[187]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t16;
av2[1]=t1;
av2[2]=t13;
av2[3]=t14;
av2[4]=t15;
((C_proc)(void*)(*((C_word*)t16+1)))(5,av2);}}

/* k9561 in k9535 in k9532 in k9526 in k9520 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_9563,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4743 in k4726 in k4723 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_4745(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,0,3)))){
C_save_and_reclaim_args((void *)trf_4745,2,t0,t1);}
a=C_alloc(22);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4758,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4765,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4767,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_4767(t12,t8,((C_word*)t0)[6]);}

/* k13303 in k13299 in k13316 in k13273 in a13261 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_13305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_13305,2,av);}
/* optimizer.scm:676: cons* */
t2=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k13299 in k13316 in k13273 in a13261 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_13301(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_13301,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13305,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:677: qnode */
t4=*((C_word*)lf[40]+1);{
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

/* k4563 in k4560 in g313 in k4552 in replace-var in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4565,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4560 in g313 in k4552 in replace-var in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_4562,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4565,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:219: put! */
t4=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[48];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}

/* k13316 in k13273 in a13261 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_13318(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_13318,2,av);}
a=C_alloc(17);
t2=C_i_length(t1);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t5=C_a_i_list1(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13297,a[2]=((C_word*)t0)[3],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13301,a[2]=t7,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:676: varnode */
t9=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* g313 in k4552 in replace-var in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_4558(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4558,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4562,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:217: replace-var */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4550(t4,t3,t2);}

/* k4552 in replace-var in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4554,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4558,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:134: g313 */
t3=t2;
f_4558(t3,((C_word*)t0)[5],t1);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop396 in k4743 in k4726 in k4723 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_4767(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4767,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4792,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:264: g402 */
t5=((C_word*)t0)[4];
f_4758(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4763 in k4743 in k4726 in k4723 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_4765,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[6],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* replace-var in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_4550(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4550,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4554,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:215: test */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4146(t4,t3,t2,lf[48]);}

/* k4000 in k3997 in k3994 in k3991 in k3911 in scan in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_ccall f_4002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4002,2,av);}
/* optimizer.scm:104: remember */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3783(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* g676 in loop in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_5378(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5378,3,t0,t1,t2);}
/* optimizer.scm:401: g693 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4357(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* g402 in k4743 in k4726 in k4723 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_4758(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_4758,3,t0,t1,t2);}
/* optimizer.scm:264: g419 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4357(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k9526 in k9520 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9528(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_9528,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_i_cadddr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9534,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(*((C_word*)lf[145]+1))){
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=t5;
f_9534(t9,C_u_i_car(t8));}
else{
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=t5;
f_9534(t8,C_u_i_car(t7));}}

/* k9520 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_9522,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9528,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1256: fifth */
t5=*((C_word*)lf[154]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5386 in k5435 in loop in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5388(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5388,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5391,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:405: invalidate-gae! */
f_4186(t3,((C_word*)t0)[5]);}

/* k7412 in k7397 in argc-ok? in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7414,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* optimizer.scm:926: argc-ok? */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7389(t4,((C_word*)t0)[4],t3);}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_4570(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,0,8)))){
C_save_and_reclaim_args((void *)trf_4570,5,t0,t1,t2,t3,t4);}
a=C_alloc(27);
t5=t2;
t6=C_slot(t5,C_fix(3));
t7=t6;
t8=t2;
t9=C_slot(t8,C_fix(2));
t10=t9;
t11=t2;
t12=C_slot(t11,C_fix(1));
t13=t12;
t14=C_eqp(t13,lf[3]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4604,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t10,a[6]=t4,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t16=C_i_car(t10);
/* optimizer.scm:230: replace-var */
t17=((C_word*)((C_word*)t0)[5])[1];
f_4550(t17,t15,t16);}
else{
t15=C_eqp(t13,lf[6]);
if(C_truep(t15)){
t16=C_i_car(t10);
t17=t16;
t18=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4725,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=t7,a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=t3,a[8]=t4,a[9]=t10,a[10]=t17,a[11]=((C_word*)t0)[3],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:251: test */
t19=((C_word*)((C_word*)t0)[3])[1];
f_4146(t19,t18,t17,lf[59]);}
else{
t16=C_eqp(t13,lf[11]);
if(C_truep(t16)){
t17=C_i_caddr(t10);
t18=t17;
t19=C_u_i_car(t10);
t20=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4883,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t10,a[5]=t7,a[6]=t19,a[7]=t3,a[8]=((C_word*)t0)[7],a[9]=t1,a[10]=t18,a[11]=((C_word*)t0)[8],a[12]=t2,a[13]=t13,tmp=(C_word)a,a+=14,tmp);
/* optimizer.scm:269: test */
t21=((C_word*)((C_word*)t0)[3])[1];
f_4146(t21,t20,t19,lf[68]);}
else{
t17=C_eqp(t13,lf[69]);
if(C_truep(t17)){
/* optimizer.scm:302: walk-generic */
t18=((C_word*)((C_word*)t0)[8])[1];
f_6352(t18,t1,t2,t13,t10,t7,t3,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}
else{
t18=C_eqp(t13,lf[12]);
if(C_truep(t18)){
t19=C_i_car(t7);
t20=t19;
t21=C_slot(t20,C_fix(1));
t22=C_eqp(t21,lf[3]);
if(C_truep(t22)){
t23=C_slot(t20,C_fix(2));
t24=C_i_car(t23);
t25=t24;
t26=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5087,a[2]=t7,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[9],a[5]=t3,a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=t4,a[9]=t25,a[10]=((C_word*)t0)[8],a[11]=t2,a[12]=t13,a[13]=t10,a[14]=t20,a[15]=((C_word*)t0)[10],a[16]=((C_word*)t0)[3],a[17]=((C_word*)t0)[11],tmp=(C_word)a,a+=18,tmp);
/* optimizer.scm:311: call-info */
t27=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t27;
av2[1]=t26;
av2[2]=t10;
av2[3]=t25;
((C_proc)(void*)(*((C_word*)t27+1)))(4,av2);}}
else{
t23=C_eqp(t21,lf[11]);
if(C_truep(t23)){
if(C_truep(C_i_car(t10))){
/* optimizer.scm:464: walk-generic */
t24=((C_word*)((C_word*)t0)[8])[1];
f_6352(t24,t1,t2,t13,t10,t7,t3,t4,C_SCHEME_FALSE);}
else{
t24=C_u_i_cdr(t10);
t25=C_a_i_cons(&a,2,C_SCHEME_TRUE,t24);
t26=t25;
t27=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t28=t27;
t29=(*a=C_VECTOR_TYPE|1,a[1]=t28,tmp=(C_word)a,a+=2,tmp);
t30=((C_word*)t29)[1];
t31=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6076,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t32=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6083,a[2]=t26,a[3]=t1,a[4]=((C_word*)t0)[10],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t33=C_SCHEME_UNDEFINED;
t34=(*a=C_VECTOR_TYPE|1,a[1]=t33,tmp=(C_word)a,a+=2,tmp);
t35=C_set_block_item(t34,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6085,a[2]=t29,a[3]=t34,a[4]=t31,a[5]=t30,tmp=(C_word)a,a+=6,tmp));
t36=((C_word*)t34)[1];
f_6085(t36,t32,t7);}}
else{
/* optimizer.scm:469: walk-generic */
t24=((C_word*)((C_word*)t0)[8])[1];
f_6352(t24,t1,t2,t13,t10,t7,t3,t4,C_SCHEME_TRUE);}}}
else{
t19=C_eqp(t13,lf[13]);
if(C_truep(t19)){
t20=C_i_car(t10);
t21=t20;
t22=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6141,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t21,a[5]=((C_word*)t0)[3],a[6]=t10,a[7]=t4,a[8]=t7,a[9]=((C_word*)t0)[7],a[10]=t3,a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:473: test */
t23=((C_word*)((C_word*)t0)[3])[1];
f_4146(t23,t22,t21,lf[58]);}
else{
/* optimizer.scm:502: walk-generic */
t20=((C_word*)((C_word*)t0)[8])[1];
f_6352(t20,t1,t2,t13,t10,t7,t3,t4,C_SCHEME_FALSE);}}}}}}}

/* k4012 in k3994 in k3991 in k3911 in scan in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_fcall f_4014(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_4014,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4017,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:99: debugging */
t3=*((C_word*)lf[17]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[18];
av2[3]=lf[19];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_3999(2,av2);}}}

/* k4015 in k4012 in k3994 in k3991 in k3911 in scan in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_ccall f_4017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4017,2,av);}
a=C_alloc(5);
t2=C_a_i_record4(&a,4,lf[14],lf[15],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
/* optimizer.scm:100: copy-node! */
t3=*((C_word*)lf[16]+1);{
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

/* loop in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_5361(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(20,0,3)))){
C_save_and_reclaim_args((void *)trf_5361,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(20);
t6=C_i_nullp(t2);
t7=(C_truep(t6)?t6:C_i_zerop(t3));
if(C_truep(t7)){
t8=(
  /* optimizer.scm:399: touch */
  f_4182(((C_word*)((C_word*)t0)[2])[1])
);
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5378,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t14=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5437,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[5],a[7]=t11,a[8]=t13,a[9]=t12,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:404: append-reverse */
t15=*((C_word*)lf[82]+1);{
C_word av2[4];
av2[0]=t15;
av2[1]=t14;
av2[2]=t5;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5443,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[9],a[8]=t5,a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
t9=C_i_car(t2);
/* optimizer.scm:407: test */
t10=((C_word*)((C_word*)t0)[12])[1];
f_4146(t10,t8,t9,lf[60]);}}

/* k10161 in walk in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10163,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
/* optimizer.scm:1372: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9985(t3,((C_word*)t0)[4],C_SCHEME_FALSE,t2,C_SCHEME_FALSE);}

/* k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11799(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_11799,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11800,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)((C_word*)t0)[3])[1];
t4=C_i_check_list_2(t3,lf[2]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12547,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12556,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_12556(t9,t5,t3);}

/* k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11796,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11799,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1658: walk */
t3=((C_word*)((C_word*)t0)[6])[1];
f_11511(t3,t2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* for-each-loop2666 in walk in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_11763(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_11763,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11773,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1653: g2667 */
t5=((C_word*)t0)[3];
f_11751(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k12106 in descend in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_12108(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,0,2)))){
C_save_and_reclaim_args((void *)trf_12108,2,t0,t1);}
a=C_alloc(20);
if(C_truep(t1)){
/* optimizer.scm:1705: descend */
t2=((C_word*)((C_word*)t0)[2])[1];
f_12098(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=C_a_i_list1(&a,1,((C_word*)t0)[5]);
t3=t2;
t4=C_a_i_record4(&a,4,lf[14],lf[15],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_12354,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t5,a[6]=t3,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:1714: gensym */
t7=*((C_word*)lf[83]+1);{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* g2191 in walk in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_10179(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_10179,3,t0,t1,t2);}
/* optimizer.scm:1373: walk */
t3=((C_word*)((C_word*)t0)[2])[1];
f_9985(t3,t1,C_SCHEME_FALSE,t2,C_SCHEME_FALSE);}

/* k11771 in for-each-loop2666 in walk in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11773,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11763(t3,((C_word*)t0)[4],t2);}

/* k8689 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8691(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_8691,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=C_i_caddr(((C_word*)t0)[2]);
t3=(C_truep(t2)?t2:*((C_word*)lf[145]+1));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8706,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_car(t5);
/* optimizer.scm:1111: argc-ok? */
t7=((C_word*)((C_word*)t0)[7])[1];
f_7389(t7,t4,t6);}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* for-each-loop2190 in walk in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_10191(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10191,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10201,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1373: g2191 */
t5=((C_word*)t0)[3];
f_10179(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8337 in map-loop1722 in k8227 in k8216 in k8213 in k8181 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8339(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8339,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8314(t6,((C_word*)t0)[5],t5);}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_optimizer_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("optimizer_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_optimizer_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(1297))){
C_save(t1);
C_rereclaim2(1297*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,229);
lf[0]=C_h_intern(&lf[0],34,"\010compilerscan-toplevel-assignments");
lf[1]=C_h_intern(&lf[1],13,"alist-update!");
lf[2]=C_h_intern(&lf[2],8,"for-each");
lf[3]=C_h_intern(&lf[3],13,"\004corevariable");
lf[4]=C_h_intern(&lf[4],6,"remove");
lf[5]=C_h_intern(&lf[5],2,"if");
lf[6]=C_h_intern(&lf[6],3,"let");
lf[7]=C_h_intern(&lf[7],6,"append");
lf[8]=C_h_intern(&lf[8],4,"last");
lf[9]=C_h_intern(&lf[9],7,"butlast");
lf[10]=C_h_intern(&lf[10],6,"lambda");
lf[11]=C_h_intern(&lf[11],11,"\004corelambda");
lf[12]=C_h_intern(&lf[12],9,"\004corecall");
lf[13]=C_h_intern(&lf[13],4,"set!");
lf[14]=C_h_intern(&lf[14],4,"node");
lf[15]=C_h_intern(&lf[15],14,"\004coreundefined");
lf[16]=C_h_intern(&lf[16],19,"\010compilercopy-node!");
lf[17]=C_h_intern(&lf[17],18,"\010compilerdebugging");
lf[18]=C_h_intern(&lf[18],1,"o");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000&dropping redundant toplevel assignment");
lf[20]=C_h_intern(&lf[20],9,"alist-ref");
lf[21]=C_h_intern(&lf[21],9,"\004corecond");
lf[22]=C_h_intern(&lf[22],11,"\004coreswitch");
lf[23]=C_h_intern(&lf[23],8,"\003sysput!");
lf[24]=C_h_intern(&lf[24],21,"\010compileralways-bound");
lf[25]=C_decode_literal(C_heaptop,"\376B\000\000\014safe globals");
lf[26]=C_h_intern(&lf[26],17,"delete-duplicates");
lf[27]=C_h_intern(&lf[27],3,"eq\077");
lf[28]=C_h_intern(&lf[28],1,"p");
lf[29]=C_decode_literal(C_heaptop,"\376B\000\000 scanning toplevel assignments...");
lf[30]=C_h_intern(&lf[30],24,"\010compilersimplifications");
lf[31]=C_h_intern(&lf[31],23,"\010compilersimplified-ops");
lf[32]=C_h_intern(&lf[32],41,"\010compilerperform-high-level-optimizations");
lf[33]=C_h_intern(&lf[33],12,"\010compilerget");
lf[34]=C_h_intern(&lf[34],5,"quote");
lf[35]=C_h_intern(&lf[35],3,"map");
lf[36]=C_h_intern(&lf[36],19,"\010compilermatch-node");
lf[37]=C_h_intern(&lf[37],3,"any");
lf[38]=C_h_intern(&lf[38],18,"\003syshash-table-ref");
lf[39]=C_h_intern(&lf[39],30,"\010compilerbroken-constant-nodes");
lf[40]=C_h_intern(&lf[40],14,"\010compilerqnode");
lf[41]=C_h_intern(&lf[41],11,"lset-adjoin");
lf[42]=C_h_intern(&lf[42],27,"\010compilerconstant-form-eval");
lf[43]=C_h_intern(&lf[43],5,"every");
lf[44]=C_h_intern(&lf[44],9,"foldable\077");
lf[45]=C_h_intern(&lf[45],7,"\003sysget");
lf[46]=C_h_intern(&lf[46],18,"\010compilerintrinsic");
lf[47]=C_h_intern(&lf[47],13,"\010compilerput!");
lf[48]=C_h_intern(&lf[48],10,"replacable");
lf[49]=C_h_intern(&lf[49],5,"value");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\035substituted constant variable");
lf[51]=C_h_intern(&lf[51],16,"\010compilervarnode");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\032propagated global variable");
lf[53]=C_h_intern(&lf[53],2,"no");
lf[54]=C_h_intern(&lf[54],15,"\010compilerinline");
lf[55]=C_h_intern(&lf[55],11,"collapsable");
lf[56]=C_h_intern(&lf[56],6,"global");
lf[57]=C_h_intern(&lf[57],9,"replacing");
lf[58]=C_h_intern(&lf[58],12,"contractable");
lf[59]=C_h_intern(&lf[59],9,"removable");
lf[60]=C_h_intern(&lf[60],6,"unused");
lf[61]=C_h_intern(&lf[61],9,"partition");
lf[62]=C_h_intern(&lf[62],26,"\010compilerbuild-lambda-list");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\047merged explicitly consed rest parameter");
lf[64]=C_h_intern(&lf[64],13,"explicit-rest");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000 removed unused formal parameters");
lf[66]=C_h_intern(&lf[66],30,"\010compilerdecompose-lambda-list");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\047merged explicitly consed rest parameter");
lf[68]=C_h_intern(&lf[68],21,"has-unused-parameters");
lf[69]=C_h_intern(&lf[69],18,"\004coredirect_lambda");
lf[70]=C_h_intern(&lf[70],13,"inline-target");
lf[71]=C_h_intern(&lf[71],31,"\010compilerinline-lambda-bindings");
lf[72]=C_h_intern(&lf[72],4,"void");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\024contracted procedure");
lf[74]=C_h_intern(&lf[74],24,"\010compilercheck-signature");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\0001removed call to pure procedure with unused result");
lf[76]=C_h_intern(&lf[76],1,"i");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\0008not inlining procedure because it refers to contractable");
lf[78]=C_h_intern(&lf[78],7,"call/cc");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\022inlining procedure");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\017global inlining");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\010inlining");
lf[82]=C_h_intern(&lf[82],14,"append-reverse");
lf[83]=C_h_intern(&lf[83],6,"gensym");
lf[84]=C_h_intern(&lf[84],1,"t");
lf[85]=C_h_intern(&lf[85],37,"\010compilerexpression-has-side-effects\077");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000+removed unused parameter to known procedure");
lf[87]=C_h_intern(&lf[87],8,"split-at");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_list");
lf[89]=C_h_intern(&lf[89],20,"\004coreinline_allocate");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\042consed rest parameter at call site");
lf[91]=C_h_intern(&lf[91],21,"\010compilerllist-length");
lf[92]=C_h_intern(&lf[92],23,"\010compilerinline-locally");
lf[93]=C_h_intern(&lf[93],24,"\010compilerinline-max-size");
lf[94]=C_h_intern(&lf[94],9,"inlinable");
lf[95]=C_h_intern(&lf[95],22,"\010compilerinline-global");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000 inlining call to intrinsic alias");
lf[97]=C_h_intern(&lf[97],8,"assigned");
lf[98]=C_h_intern(&lf[98],10,"references");
lf[99]=C_h_intern(&lf[99],7,"unknown");
lf[100]=C_h_intern(&lf[100],13,"\010compilerpure");
lf[101]=C_h_intern(&lf[101],11,"local-value");
lf[102]=C_h_intern(&lf[102],18,"\010compilercall-info");
lf[103]=C_decode_literal(C_heaptop,"\376B\000\000\034removing global contractable");
lf[104]=C_decode_literal(C_heaptop,"\376B\000\0006removed side-effect free assignment to unused variable");
lf[105]=C_h_intern(&lf[105],16,"inline-transient");
lf[106]=C_h_intern(&lf[106],26,"\010compilervariable-visible\077");
lf[107]=C_h_intern(&lf[107],7,"reverse");
lf[108]=C_decode_literal(C_heaptop,"\376B\000\000\031removed conditional forms");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\025removed binding forms");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\022replaced variables");
lf[111]=C_h_intern(&lf[111],5,"print");
lf[112]=C_h_intern(&lf[112],7,"newline");
lf[113]=C_h_intern(&lf[113],6,"print\052");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000\004    ");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000\027  call simplifications:");
lf[116]=C_h_intern(&lf[116],30,"\010compilerwith-debugging-output");
lf[117]=C_decode_literal(C_heaptop,"\376B\000\000\017simplifications");
lf[118]=C_decode_literal(C_heaptop,"\376B\000\000\022traversal phase...");
lf[119]=C_h_intern(&lf[119],34,"\010compilerperform-pre-optimization!");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000\023Removed `not\047 forms");
lf[121]=C_h_intern(&lf[121],24,"node-subexpressions-set!");
lf[122]=C_h_intern(&lf[122],20,"node-parameters-set!");
lf[123]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[124]=C_h_intern(&lf[124],17,"\010compilerget-list");
lf[125]=C_h_intern(&lf[125],3,"not");
lf[126]=C_h_intern(&lf[126],10,"call-sites");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\031pre-optimization phase...");
lf[128]=C_h_intern(&lf[128],24,"register-simplifications");
lf[129]=C_h_intern(&lf[129],19,"\003syshash-table-set!");
lf[130]=C_h_intern(&lf[130],38,"\010compilerreorganize-recursive-bindings");
lf[131]=C_h_intern(&lf[131],28,"\010compilerscan-used-variables");
lf[132]=C_h_intern(&lf[132],6,"filter");
lf[133]=C_h_intern(&lf[133],6,"lset<=");
lf[134]=C_h_intern(&lf[134],10,"filter-map");
lf[135]=C_h_intern(&lf[135],10,"append-map");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000!converted assignments to bindings");
lf[137]=C_h_intern(&lf[137],10,"fold-right");
lf[138]=C_h_intern(&lf[138],4,"fold");
lf[139]=C_h_intern(&lf[139],16,"topological-sort");
lf[140]=C_h_intern(&lf[140],27,"\010compilersubstitution-table");
lf[141]=C_h_intern(&lf[141],16,"\010compilerrewrite");
lf[142]=C_h_intern(&lf[142],28,"\010compilersimplify-named-call");
lf[143]=C_h_intern(&lf[143],37,"\010compilerinline-substitutions-enabled");
lf[144]=C_h_intern(&lf[144],11,"\004coreinline");
lf[145]=C_h_intern(&lf[145],6,"unsafe");
lf[146]=C_h_intern(&lf[146],11,"number-type");
lf[147]=C_h_intern(&lf[147],6,"fixnum");
lf[148]=C_h_intern(&lf[148],21,"\010compilerfold-boolean");
lf[149]=C_h_intern(&lf[149],6,"flonum");
lf[150]=C_h_intern(&lf[150],7,"generic");
lf[151]=C_h_intern(&lf[151],5,"cons\052");
lf[152]=C_h_intern(&lf[152],9,"\004coreproc");
lf[153]=C_h_intern(&lf[153],4,"conc");
lf[154]=C_h_intern(&lf[154],5,"fifth");
lf[155]=C_h_intern(&lf[155],19,"\010compilerfold-inner");
lf[156]=C_h_intern(&lf[156],13,"\010compilerbomb");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000\023bad type (optimize)");
lf[158]=C_h_intern(&lf[158],34,"\010compilertransform-direct-lambdas!");
lf[159]=C_h_intern(&lf[159],24,"\010compilercallback-lambda");
lf[160]=C_h_intern(&lf[160],5,"boxed");
lf[161]=C_h_intern(&lf[161],15,"\004coreinline_ref");
lf[162]=C_h_intern(&lf[162],37,"\010compilerestimate-foreign-result-size");
lf[163]=C_h_intern(&lf[163],19,"\004coreinline_loc_ref");
lf[164]=C_h_intern(&lf[164],16,"\004coredirect_call");
lf[165]=C_h_intern(&lf[165],5,"lset=");
lf[166]=C_h_intern(&lf[166],6,"delete");
lf[167]=C_h_intern(&lf[167],13,"\010compilerquit");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000;known procedure called with wrong number of arguments: `~A\047");
lf[169]=C_h_intern(&lf[169],15,"lset-difference");
lf[170]=C_h_intern(&lf[170],15,"node-class-set!");
lf[171]=C_h_intern(&lf[171],12,"\004corerecurse");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000Gknown procedure called recursively with wrong number of arguments: `~A\047");
lf[173]=C_h_intern(&lf[173],4,"take");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000Gknown procedure called recursively with wrong number of arguments: `~A\047");
lf[175]=C_decode_literal(C_heaptop,"\376B\000\000\014missing kvar");
lf[176]=C_h_intern(&lf[176],11,"\004corereturn");
lf[177]=C_decode_literal(C_heaptop,"\376B\000\000\017bad call (leaf)");
lf[178]=C_h_intern(&lf[178],6,"cdaddr");
lf[179]=C_h_intern(&lf[179],6,"caaddr");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\026invalid parameter list");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\0006direct leaf routine with hoistable closures/allocation");
lf[182]=C_h_intern(&lf[182],6,"unzip1");
lf[183]=C_h_intern(&lf[183],16,"\003sysmake-promise");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\036direct leaf routine/allocation");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000(direct leaf routine optimization pass...");
lf[186]=C_h_intern(&lf[186],36,"\010compilerdetermine-loop-and-dispatch");
lf[187]=C_h_intern(&lf[187],16,"\003sysdynamic-wind");
lf[188]=C_h_intern(&lf[188],13,"list-tabulate");
lf[189]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[190]=C_h_intern(&lf[190],2,"f_");
lf[191]=C_h_intern(&lf[191],1,"x");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\012clustering");
lf[193]=C_h_intern(&lf[193],1,"a");
lf[194]=C_h_intern(&lf[194],3,"max");
lf[195]=C_h_intern(&lf[195],1,"k");
lf[196]=C_h_intern(&lf[196],8,"dispatch");
lf[197]=C_decode_literal(C_heaptop,"\376B\000\000\027collecting clusters ...");
lf[198]=C_h_intern(&lf[198],11,"make-vector");
lf[199]=C_h_intern(&lf[199],3,"var");
lf[200]=C_h_intern(&lf[200],2,"d2");
lf[201]=C_h_intern(&lf[201],1,"y");
lf[202]=C_h_intern(&lf[202],2,"d3");
lf[203]=C_h_intern(&lf[203],1,"z");
lf[204]=C_h_intern(&lf[204],2,"d1");
lf[205]=C_h_intern(&lf[205],2,"op");
lf[206]=C_h_intern(&lf[206],5,"clist");
lf[207]=C_h_intern(&lf[207],34,"\010compilermembership-test-operators");
lf[208]=C_h_intern(&lf[208],32,"\010compilermembership-unfold-limit");
lf[209]=C_h_intern(&lf[209],4,"var1");
lf[210]=C_h_intern(&lf[210],4,"var0");
lf[211]=C_h_intern(&lf[211],6,"const1");
lf[212]=C_h_intern(&lf[212],4,"var2");
lf[213]=C_h_intern(&lf[213],6,"const2");
lf[214]=C_h_intern(&lf[214],5,"body2");
lf[215]=C_h_intern(&lf[215],4,"rest");
lf[216]=C_h_intern(&lf[216],5,"body1");
lf[217]=C_h_intern(&lf[217],27,"\010compilereq-inline-operator");
lf[218]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\002\376\377\016");
lf[219]=C_h_intern(&lf[219],19,"\010compilerimmediate\077");
lf[220]=C_h_intern(&lf[220],5,"const");
lf[221]=C_h_intern(&lf[221],1,"n");
lf[222]=C_h_intern(&lf[222],7,"clauses");
lf[223]=C_h_intern(&lf[223],1,"d");
lf[224]=C_h_intern(&lf[224],4,"body");
lf[225]=C_h_intern(&lf[225],4,"more");
lf[226]=C_h_intern(&lf[226],4,"args");
lf[227]=C_h_intern(&lf[227],1,"b");
lf[228]=C_h_intern(&lf[228],1,"c");
C_register_lf2(lf,229,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3749,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* map-loop1694 in k8216 in k8213 in k8181 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_8348(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8348,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8373,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1044: gensym */
t4=*((C_word*)lf[83]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* walk in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_11511(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,5)))){
C_save_and_reclaim_args((void *)trf_11511,4,t0,t1,t2,t3);}
a=C_alloc(16);
t4=t2;
t5=C_slot(t4,C_fix(3));
t6=t5;
t7=t2;
t8=C_slot(t7,C_fix(2));
t9=t2;
t10=C_slot(t9,C_fix(1));
t11=C_eqp(t10,lf[6]);
if(C_truep(t11)){
t12=C_i_car(t8);
t13=t12;
t14=C_i_car(t6);
t15=t14;
t16=C_i_cadr(t6);
t17=t16;
t18=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_11557,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t13,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,a[8]=t17,a[9]=t15,a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],a[12]=((C_word*)t0)[6],tmp=(C_word)a,a+=13,tmp);
t19=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t19)){
t20=t18;
f_11557(t20,C_SCHEME_FALSE);}
else{
t20=C_slot(t15,C_fix(1));
t21=t18;
f_11557(t21,C_eqp(lf[15],t20));}}
else{
t12=C_eqp(t10,lf[11]);
t13=(C_truep(t12)?t12:C_eqp(t10,lf[69]));
if(C_truep(t13)){
t14=C_i_caddr(t8);
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11719,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1643: decompose-lambda-list */
t16=*((C_word*)lf[66]+1);{
C_word av2[4];
av2[0]=t16;
av2[1]=t1;
av2[2]=t14;
av2[3]=t15;
((C_proc)(void*)(*((C_word*)t16+1)))(4,av2);}}
else{
t14=(
  /* optimizer.scm:1652: close */
  f_11451(C_a_i(&a,6),((C_word*)((C_word*)t0)[5])[1])
);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11751,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t16=C_i_check_list_2(t6,lf[2]);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11763,a[2]=t18,a[3]=t15,tmp=(C_word)a,a+=4,tmp));
t20=((C_word*)t18)[1];
f_11763(t20,t1,t6);}}}

/* k8181 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8183(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8183,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_i_length(((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(2)))){
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8209,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1040: qnode */
t6=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8215,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(*((C_word*)lf[145]+1))){
t4=C_eqp(*((C_word*)lf[146]+1),lf[150]);
t5=t3;
f_8215(t5,C_i_not(t4));}
else{
t4=t3;
f_8215(t4,C_SCHEME_FALSE);}}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k11569 in k11555 in walk in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_11571(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_11571,2,t0,t1);}
a=C_alloc(13);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
/* optimizer.scm:1636: walk */
t5=((C_word*)((C_word*)t0)[6])[1];
f_11511(t5,((C_word*)t0)[7],((C_word*)t0)[8],t4);}
else{
t2=(
  /* optimizer.scm:1639: close */
  f_11451(C_a_i(&a,6),((C_word*)((C_word*)t0)[9])[1])
);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11588,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1640: walk */
t4=((C_word*)((C_word*)t0)[6])[1];
f_11511(t4,t3,((C_word*)t0)[2],((C_word*)t0)[5]);}}

/* k7063 in k7060 in k7000 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7065(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7065,2,av);}
a=C_alloc(12);
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7068,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7085,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:879: fold */
t6=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
av2[3]=((C_word*)t0)[6];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7066 in k7063 in k7060 in k7000 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_7068,2,av);}
a=C_alloc(4);
t2=t1;
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7077,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:905: debugging */
t4=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[18];
av2[3]=lf[136];
av2[4]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
/* optimizer.scm:907: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}

/* k7060 in k7000 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_7062,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7065,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:874: topological-sort */
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[7])[1];
av2[3]=*((C_word*)lf[27]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k13437 in k13454 in k13463 in k13409 in k13403 in a13391 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_13439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_13439,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13443,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:652: qnode */
t4=*((C_word*)lf[40]+1);{
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

/* k7096 in a7084 in k7063 in k7060 in k7000 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_7098(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_7098,2,t0,t1);}
a=C_alloc(14);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t4=C_i_assq(((C_word*)t0)[2],((C_word*)t0)[4]);
t5=C_i_cdr(t4);
t6=C_a_i_list2(&a,2,t5,((C_word*)t0)[5]);
t7=((C_word*)t0)[6];
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[6],((C_word*)t0)[7],t6);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7127,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7157,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7159,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:893: fold-right */
t5=*((C_word*)lf[137]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* k13403 in a13391 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_13405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_13405,2,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_13411,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:645: immediate? */
t3=*((C_word*)lf[219]+1);{
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
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k13409 in k13403 in a13391 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_13411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_13411,2,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_13465,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:646: get-list */
t3=*((C_word*)lf[124]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
av2[3]=((C_word*)t0)[11];
av2[4]=lf[98];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k7075 in k7066 in k7063 in k7060 in k7000 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7077,2,av);}
/* optimizer.scm:906: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_TRUE;
C_values(4,av2);}}

/* map-loop670 in k5435 in loop in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_5401(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5401,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5426,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:401: g676 */
t5=((C_word*)t0)[4];
f_5378(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6065 in k6081 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6067,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8155 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8157,2,av);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
/* optimizer.scm:1030: g1669 */
t3=t2;{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[2];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k6478 in for-each-loop920 in k6473 in a6470 in k6428 in k6425 in k6421 in k6415 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6480,2,av);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_greaterp(t2,C_fix(1)))){
t3=C_u_i_cdr(((C_word*)t0)[2]);
/* optimizer.scm:533: print */
t4=*((C_word*)lf[111]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=C_make_character(9);
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
/* optimizer.scm:534: newline */
t3=*((C_word*)lf[112]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4505 in k4369 in walk in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4507,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4513,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:190: foldable? */
t3=*((C_word*)lf[44]+1);{
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
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_4449(2,av2);}}}

/* k11586 in k11569 in k11555 in walk in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_11588,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
/* optimizer.scm:1641: walk */
t3=((C_word*)((C_word*)t0)[4])[1];
f_11511(t3,((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k8121 in k8080 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8123,2,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:1025: append */
t3=*((C_word*)lf[7]+1);{
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

/* k6473 in a6470 in k6428 in k6425 in k6421 in k6415 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6475(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6475,2,av);}
a=C_alloc(5);
t2=*((C_word*)lf[31]+1);
t3=C_i_check_list_2(*((C_word*)lf[31]+1),lf[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6508,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_6508(t7,((C_word*)t0)[2],*((C_word*)lf[31]+1));}

/* a6470 in k6428 in k6425 in k6421 in k6415 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6471,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6475,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:528: print */
t3=*((C_word*)lf[111]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[115];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a7049 in a7043 in g1390 in k7000 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7050,3,av);}
/* optimizer.scm:862: find-path */
t3=((C_word*)t0)[2];
f_6887(t3,t1,((C_word*)t0)[3],t2);}

/* map-loop803 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_6085(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6085,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6110,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:466: g809 */
t5=((C_word*)t0)[4];
f_6076(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6081 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6083,2,av);}
a=C_alloc(9);
t2=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6067,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:467: invalidate-gae! */
f_4186(t4,((C_word*)t0)[5]);}

/* a7084 in k7063 in k7060 in k7000 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7085(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7085,4,av);}
a=C_alloc(8);
t4=C_i_assq(t2,((C_word*)((C_word*)t0)[2])[1]);
t5=C_i_cdr(t4);
t6=t5;
t7=C_i_car(t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7098,a[2]=t8,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t1,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t10=C_u_i_cdr(t6);
if(C_truep(C_i_nullp(t10))){
t11=C_i_assq(t8,((C_word*)((C_word*)t0)[5])[1]);
t12=C_i_cdr(t11);
t13=C_i_memq(t8,t12);
t14=t9;
f_7098(t14,C_i_not(t13));}
else{
t11=t9;
f_7098(t11,C_SCHEME_FALSE);}}

/* k10761 in g2451 in k10734 in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10763(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10763,2,av);}
a=C_alloc(26);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list4(&a,4,C_SCHEME_TRUE,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);
t4=C_u_i_car(((C_word*)t0)[2]);
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,t4,t6);
t8=C_a_i_record4(&a,4,lf[14],lf[164],t3,t7);
t9=C_a_i_list2(&a,2,t2,t8);
/* optimizer.scm:1538: node-subexpressions-set! */
t10=*((C_word*)lf[121]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)t0)[7];
av2[3]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}

/* map-loop2745 in g2717 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_11881(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11881,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11906,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1676: g2751 */
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

/* map-loop1722 in k8227 in k8216 in k8213 in k8181 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_8314(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8314,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8339,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1045: g1728 */
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

/* g809 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_6076(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_6076,3,t0,t1,t2);}
/* optimizer.scm:466: g826 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4357(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k4511 in k4505 in k4369 in walk in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4513,2,av);}
if(C_truep(t1)){
t2=C_i_cddr(((C_word*)t0)[2]);
/* optimizer.scm:191: every */
t3=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_4449(2,av2);}}}

/* k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10711(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_10711,2,av);}
a=C_alloc(16);
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=t2;
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_10720,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,a[10]=t5,a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
t7=C_u_i_length(((C_word*)t0)[2]);
t8=C_eqp(t7,C_fix(4));
if(C_truep(t8)){
t9=C_i_caddr(((C_word*)t0)[2]);
t10=t6;
f_10720(t10,C_i_listp(t9));}
else{
t9=t6;
f_10720(t9,C_SCHEME_FALSE);}}
else{
t7=t6;
f_10720(t7,C_SCHEME_FALSE);}}

/* k5441 in loop in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5443(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_5443,2,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(
  /* optimizer.scm:408: touch */
  f_4182(((C_word*)((C_word*)t0)[2])[1])
);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5449,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
t4=((C_word*)t0)[4];
t5=C_u_i_car(t4);
/* optimizer.scm:409: debugging */
t6=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=lf[18];
av2[3]=lf[86];
av2[4]=t5;
av2[5]=((C_word*)t0)[13];
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}
else{
t2=((C_word*)t0)[4];
t3=C_u_i_cdr(t2);
t4=C_a_i_minus(&a,2,((C_word*)t0)[5],C_fix(1));
t5=C_i_cdr(((C_word*)t0)[6]);
t6=((C_word*)t0)[6];
t7=C_u_i_car(t6);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[8]);
/* optimizer.scm:419: loop */
t9=((C_word*)((C_word*)t0)[7])[1];
f_5361(t9,((C_word*)t0)[3],t3,t4,t5,t8);}}

/* k11856 in a11846 in k11840 in g2717 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_11858,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list4(&a,4,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* g230 in k4246 in a4237 in k4225 in simplify in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static C_word C_fcall f_4296(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_assq(t1,((C_word*)t0)[2]);
return(C_i_cdr(t2));}

/* k5435 in loop in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5437(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_5437,2,av);}
a=C_alloc(17);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5388,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5401,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5401(t7,t3,t2);}

/* k8113 in k8080 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,1)))){
C_save_and_reclaim((void *)f_8115,2,av);}
a=C_alloc(16);
t2=C_a_i_record4(&a,4,lf[14],lf[144],((C_word*)t0)[2],t1);
t3=C_a_i_list2(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k10374 in rec in scan in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_10376,2,av);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t1))){
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]),((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t2);
t4=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k7203 in a7158 in k7096 in a7084 in k7063 in k7060 in k7000 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7205(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,1)))){
C_save_and_reclaim((void *)f_7205,2,av);}
a=C_alloc(25);
t2=C_a_i_list1(&a,1,t1);
t3=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t4=C_i_assq(((C_word*)t0)[2],((C_word*)t0)[3]);
t5=C_i_cdr(t4);
t6=C_a_i_list1(&a,1,t5);
t7=C_a_i_record4(&a,4,lf[14],lf[13],t3,t6);
t8=C_a_i_list2(&a,2,t7,((C_word*)t0)[4]);
t9=((C_word*)t0)[5];
t10=t9;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[6],t2,t8);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}

/* k5447 in k5441 in loop in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_5449,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5455,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=C_i_car(((C_word*)t0)[5]);
/* optimizer.scm:412: expression-has-side-effects? */
t4=*((C_word*)lf[85]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=((C_word*)t0)[11];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10733(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10733,2,av);}
a=C_alloc(23);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10736,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=((C_word*)t0)[11];
t4=C_slot(t3,C_fix(3));
t5=C_i_car(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11032,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[13],a[8]=t7,a[9]=((C_word*)t0)[14],tmp=(C_word)a,a+=10,tmp));
t9=((C_word*)t7)[1];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t2;
av2[2]=t5;
f_11032(3,av2);}}

/* k10734 in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_10736,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10737,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10824,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11014,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:1545: lset-difference */
t5=*((C_word*)lf[169]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=((C_word*)t0)[9];
av2[4]=((C_word*)((C_word*)t0)[10])[1];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* g2451 in k10734 in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_10737(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_10737,3,t0,t1,t2);}
a=C_alloc(8);
t3=C_i_cdr(t2);
t4=t3;
t5=C_slot(t4,C_fix(3));
t6=t5;
t7=C_slot(t4,C_fix(2));
t8=C_i_cdr(t7);
t9=C_i_pairp(t8);
t10=(C_truep(t9)?C_i_cadr(t7):C_SCHEME_FALSE);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10763,a[2]=t6,a[3]=t11,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
t13=C_i_cdr(t6);
t14=C_i_length(t13);
t15=C_eqp(((C_word*)t0)[4],t14);
if(C_truep(t15)){
t16=t12;{
C_word av2[2];
av2[0]=t16;
av2[1]=C_SCHEME_UNDEFINED;
f_10763(2,av2);}}
else{
/* optimizer.scm:1535: quit */
t16=*((C_word*)lf[167]+1);{
C_word av2[4];
av2[0]=t16;
av2[1]=t12;
av2[2]=lf[168];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t16+1)))(4,av2);}}}

/* k11555 in walk in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_11557(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,0,4)))){
C_save_and_reclaim_args((void *)trf_11557,2,t0,t1);}
a=C_alloc(24);
if(C_truep(t1)){
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
/* optimizer.scm:1623: walk */
t4=((C_word*)((C_word*)t0)[6])[1];
f_11511(t4,((C_word*)t0)[7],((C_word*)t0)[8],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11571,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_slot(((C_word*)t0)[9],C_fix(1));
t4=C_eqp(lf[13],t3);
if(C_truep(t4)){
t5=C_slot(((C_word*)t0)[9],C_fix(3));
t6=C_i_car(t5);
t7=t6;
t8=C_slot(((C_word*)t0)[9],C_fix(2));
t9=C_i_car(t8);
t10=t9;
t11=C_slot(t7,C_fix(1));
t12=C_eqp(lf[11],t11);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11619,a[2]=t10,a[3]=((C_word*)t0)[5],a[4]=t7,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11632,a[2]=t13,a[3]=((C_word*)t0)[12],a[4]=t10,tmp=(C_word)a,a+=5,tmp);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11647,a[2]=t14,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1630: get */
t16=*((C_word*)lf[33]+1);{
C_word av2[5];
av2[0]=t16;
av2[1]=t15;
av2[2]=((C_word*)t0)[12];
av2[3]=t10;
av2[4]=lf[98];
((C_proc)(void*)(*((C_word*)t16+1)))(5,av2);}}
else{
t13=t2;
f_11571(t13,C_SCHEME_FALSE);}}
else{
t5=t2;
f_11571(t5,C_SCHEME_FALSE);}}
else{
t3=t2;
f_11571(t3,C_SCHEME_FALSE);}}}

/* k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_10724,2,av);}
a=C_alloc(16);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_10727,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t2,a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* optimizer.scm:1468: cdaddr */
t4=*((C_word*)lf[178]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_10720(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_10720,2,t0,t1);}
a=C_alloc(15);
if(C_truep(t1)){
t2=C_u_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_10724,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* optimizer.scm:1467: caaddr */
t4=*((C_word*)lf[179]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* optimizer.scm:1568: bomb */
t2=*((C_word*)lf[156]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[8];
av2[2]=lf[180];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_10727,2,av);}
a=C_alloc(15);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_cdr(t2);
t4=C_i_setslot(t3,C_fix(0),t1);
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_10733,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],tmp=(C_word)a,a+=15,tmp);
/* optimizer.scm:1472: node-class-set! */
t6=*((C_word*)lf[170]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[12];
av2[3]=lf[69];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k5424 in map-loop670 in k5435 in loop in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5426(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5426,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5401(t6,((C_word*)t0)[5],t5);}

/* g2717 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_11815(C_word t0,C_word t1,C_word t2){
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
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,3)))){
C_save_and_reclaim_args((void *)trf_11815,3,t0,t1,t2);}
a=C_alloc(21);
t3=t2;
t4=C_slot(t3,C_fix(2));
t5=C_i_car(t4);
t6=t5;
t7=t2;
t8=C_slot(t7,C_fix(3));
t9=C_i_car(t8);
t10=t9;
t11=C_slot(t10,C_fix(2));
t12=C_i_caddr(t11);
t13=t12;
t14=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t15=t14;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=((C_word*)t16)[1];
t18=*((C_word*)lf[83]+1);
t19=C_i_check_list_2(t13,lf[35]);
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11842,a[2]=t10,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=t13,a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11881,a[2]=t16,a[3]=t22,a[4]=t18,a[5]=t17,tmp=(C_word)a,a+=6,tmp));
t24=((C_word*)t22)[1];
f_11881(t24,t20,t13);}

/* k13463 in k13409 in k13403 in a13391 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_13465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_13465,2,av);}
a=C_alloc(9);
t2=C_i_length(t1);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13456,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:647: get-list */
t5=*((C_word*)lf[124]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
av2[3]=((C_word*)t0)[10];
av2[4]=lf[98];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t4=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11811(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_11811,2,av);}
a=C_alloc(26);
t2=t1;
t3=C_fix(1);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11815,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t10=C_i_check_list_2(((C_word*)t0)[2],lf[35]);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11937,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12509,a[2]=t7,a[3]=t13,a[4]=t9,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_12509(t15,t11,((C_word*)t0)[2]);}

/* touch in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static C_word C_fcall f_4182(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_stack_overflow_check;{}
t1=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
return(t1);}

/* invalidate-gae! in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_4186(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,0,2)))){
C_save_and_reclaim_args((void *)trf_4186,2,t1,t2);}
a=C_alloc(2);
t3=C_i_check_list_2(t2,lf[2]);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4200,tmp=(C_word)a,a+=2,tmp);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=(
  f_4200(t2)
);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k6986 in a6974 in g1366 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6988,2,av);}
if(C_truep(t1)){
/* optimizer.scm:849: find-path */
t2=((C_word*)t0)[2];
f_6887(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k13445 in k13441 in k13437 in k13454 in k13463 in k13409 in k13403 in a13391 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_13447(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,1)))){
C_save_and_reclaim((void *)f_13447,2,av);}
a=C_alloc(23);
t2=C_a_i_list6(&a,6,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);
t3=((C_word*)t0)[7];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[22],lf[218],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k13441 in k13437 in k13454 in k13463 in k13409 in k13403 in a13391 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_13443(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_13443,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13447,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:654: qnode */
t4=*((C_word*)lf[40]+1);{
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

/* k6421 in k6415 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_6423,2,av);}
a=C_alloc(8);
t2=C_set_block_item(lf[31] /* ##compiler#simplified-ops */,0,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6427,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:522: walk */
t4=((C_word*)((C_word*)t0)[8])[1];
f_4357(t4,t3,((C_word*)t0)[9],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* k6425 in k6421 in k6415 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_6427,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6430,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[7])[1]))){
/* optimizer.scm:523: debugging */
t4=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[18];
av2[3]=lf[117];
av2[4]=((C_word*)((C_word*)t0)[7])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6430(2,av2);}}}

/* k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11808,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11811,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1666: gensym */
t4=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[76];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k13454 in k13463 in k13409 in k13403 in a13391 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_13456(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_13456,2,av);}
a=C_alloc(8);
t2=C_i_length(t1);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13439,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:651: varnode */
t5=*((C_word*)lf[51]+1);{
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
else{
t4=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_11800(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11800,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_car(t2);
t4=t3;
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11808,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1665: gensym */
t8=*((C_word*)lf[83]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[196];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k6415 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_6417,2,av);}
a=C_alloc(10);
if(C_truep(t1)){
/* optimizer.scm:518: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_TRUE;
C_values(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6423,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:520: debugging */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[28];
av2[3]=lf[118];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k6440 in k6437 in k6434 in k6431 in k6428 in k6425 in k6421 in k6415 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6442,2,av);}
/* optimizer.scm:539: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)((C_word*)t0)[4])[1];
C_values(4,av2);}}

/* k4388 in k4369 in walk in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4390,2,av);}
/* optimizer.scm:170: simplify */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4223(t2,((C_word*)t0)[3],t1);}

/* k8659 in k8599 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8661,2,av);}
/* optimizer.scm:1102: cons* */
t2=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5347(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,8)))){
C_save_and_reclaim((void *)f_5347,2,av);}
a=C_alloc(22);
if(C_truep(t1)){
t2=C_i_length(((C_word*)t0)[2]);
if(C_truep(C_i_lessp(t2,((C_word*)t0)[3]))){
/* optimizer.scm:396: walk-generic */
t3=((C_word*)((C_word*)t0)[4])[1];
f_6352(t3,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],((C_word*)t0)[10],((C_word*)t0)[11],C_SCHEME_TRUE);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5361,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[15],a[9]=t4,a[10]=((C_word*)t0)[16],a[11]=((C_word*)t0)[17],a[12]=((C_word*)t0)[18],tmp=(C_word)a,a+=13,tmp));
t6=((C_word*)t4)[1];
f_5361(t6,((C_word*)t0)[5],((C_word*)t0)[19],((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}}
else{
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5546,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[20],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[21],a[16]=((C_word*)t0)[6],tmp=(C_word)a,a+=17,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5685,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[20],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:423: test */
t4=((C_word*)((C_word*)t0)[18])[1];
f_4146(t4,t3,((C_word*)t0)[22],lf[64]);}}

/* k8655 in k8599 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_8657,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6431 in k6428 in k6425 in k6421 in k6415 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6433(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_6433,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6436,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[7])[1],C_fix(0)))){
/* optimizer.scm:536: debugging */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[18];
av2[3]=lf[110];
av2[4]=((C_word*)((C_word*)t0)[7])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6436(2,av2);}}}

/* k6434 in k6431 in k6428 in k6425 in k6421 in k6415 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6436,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6439,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[6])[1],C_fix(0)))){
/* optimizer.scm:537: debugging */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[18];
av2[3]=lf[109];
av2[4]=((C_word*)((C_word*)t0)[6])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6439(2,av2);}}}

/* k6428 in k6425 in k6421 in k6415 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_6430,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6433,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(*((C_word*)lf[31]+1)))){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6471,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:525: with-debugging-output */
t4=*((C_word*)lf[116]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[18];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6433(2,av2);}}}

/* for-each-loop2919 in k11950 in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_12075(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_12075,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12085,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1754: g2920 */
t5=((C_word*)t0)[3];
f_11953(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6437 in k6434 in k6431 in k6428 in k6425 in k6421 in k6415 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6439,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6442,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[5])[1],C_fix(0)))){
/* optimizer.scm:538: debugging */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[18];
av2[3]=lf[108];
av2[4]=((C_word*)((C_word*)t0)[5])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
/* optimizer.scm:539: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)((C_word*)t0)[4])[1];
C_values(4,av2);}}}

/* g741 in a5571 in k5559 in k5547 in k5544 in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_5593(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5593,3,t0,t1,t2);}
/* optimizer.scm:434: g758 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4357(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* for-each-loop618 in k5250 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_5312(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5312,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5322,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:377: g619 */
t5=((C_word*)t0)[3];
f_5253(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8599 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8601(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_8601,2,av);}
a=C_alloc(15);
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(C_truep(t2)?t2:*((C_word*)lf[145]+1));
if(C_truep(t3)){
t4=C_i_length(((C_word*)t0)[3]);
t5=C_i_caddr(((C_word*)t0)[2]);
if(C_truep(C_i_less_or_equalp(t4,t5))){
t6=C_eqp(t4,C_fix(1));
if(C_truep(t6)){
t7=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t8=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
t9=((C_word*)t0)[5];
t10=t9;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],t7,t8);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t7=((C_word*)t0)[2];
t8=C_u_i_car(t7);
t9=C_a_i_list2(&a,2,C_SCHEME_TRUE,t8);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8657,a[2]=((C_word*)t0)[5],a[3]=t10,tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8661,a[2]=t11,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t13=((C_word*)t0)[2];
t14=C_u_i_car(t13);
/* optimizer.scm:1102: varnode */
t15=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t15;
av2[1]=t12;
av2[2]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(3,av2);}}}
else{
t6=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
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

/* descend in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_12098(C_word t0,C_word t1,C_word t2){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_12098,3,t0,t1,t2);}
a=C_alloc(12);
t3=t2;
t4=C_slot(t3,C_fix(3));
t5=C_i_cadr(t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_12108,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t6,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t2,a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
t8=C_slot(t6,C_fix(1));
t9=C_eqp(lf[6],t8);
if(C_truep(t9)){
t10=C_slot(t6,C_fix(3));
t11=C_i_car(t10);
t12=C_slot(t11,C_fix(1));
t13=t7;
f_12108(t13,C_eqp(lf[15],t12));}
else{
t10=t7;
f_12108(t10,C_SCHEME_FALSE);}}

/* k5320 in for-each-loop618 in k5250 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5322,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5312(t3,((C_word*)t0)[4],t2);}

/* k13015 in k13230 in k13236 in loop1 in a12902 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_13017(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_13017,2,av);}
a=C_alloc(10);
t2=t1;
if(C_truep(C_i_pairp(t2))){
t3=C_i_car(((C_word*)t0)[2]);
t4=C_u_i_car(t2);
t5=C_eqp(t3,t4);
if(C_truep(t5)){
t6=C_i_car(((C_word*)t0)[3]);
t7=C_a_i_list1(&a,1,t6);
t8=C_u_i_cdr(t2);
t9=C_i_cadr(((C_word*)t0)[4]);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13044,a[2]=t11,a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_13044(t13,((C_word*)t0)[6],t7,t8,t9);}
else{
t6=((C_word*)t0)[6];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[6];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9197 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9199(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9199,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9219,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=C_i_car(((C_word*)t0)[4]);
/* optimizer.scm:1198: qnode */
t6=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k12083 in for-each-loop2919 in k11950 in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 in ... */
static void C_ccall f_12085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_12085,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12075(t3,((C_word*)t0)[4],t2);}

/* k10118 in k10065 in k10059 in k10053 in k10135 in walk in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10120(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_10120,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_10025(2,av2);}}
else{
t2=C_i_length(((C_word*)t0)[3]);
t3=C_i_length(((C_word*)t0)[4]);
t4=C_eqp(t2,t3);
if(C_truep(t4)){
t5=C_i_car(((C_word*)t0)[5]);
t6=C_i_car(((C_word*)t0)[6]);
t7=C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)t0)[6]);
/* optimizer.scm:1366: scan */
t8=((C_word*)((C_word*)t0)[8])[1];
f_10220(t8,((C_word*)t0)[2],t5,t6,((C_word*)t0)[7],((C_word*)t0)[9],t7);}
else{
t5=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_10025(2,av2);}}}}

/* loop in a9850 in k9837 in k9808 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_9865(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_9865,4,t0,t1,t2,t3);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9885,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_i_car(t3);
t6=t4;
t7=t5;
if(C_truep(C_i_symbolp(t7))){
/* optimizer.scm:929: varnode */
t8=*((C_word*)lf[51]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7449,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t7))){
t9=C_u_i_car(t7);
t10=t8;
f_7449(t10,C_eqp(lf[34],t9));}
else{
t9=t8;
f_7449(t9,C_SCHEME_FALSE);}}}}
else{
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9912,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=t2;
t8=C_u_i_cdr(t7);
t9=C_i_cdr(t3);
/* optimizer.scm:1327: loop */
t11=t6;
t12=t8;
t13=t9;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}}

/* remember in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_fcall f_3783(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_3783,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3788,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:53: alist-update! */
t5=*((C_word*)lf[1]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=t3;
av2[4]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k3786 in remember in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_ccall f_3788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3788,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k9857 in a9850 in k9837 in k9808 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9859,2,av);}
/* optimizer.scm:1318: append */
t2=*((C_word*)lf[7]+1);{
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

/* k6937 in g1326 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_6939,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1),((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a9850 in k9837 in k9808 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9851(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_9851,4,av);}
a=C_alloc(9);
t4=t2;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9859,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cddr(((C_word*)t0)[2]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9865,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=((C_word*)t8)[1];
f_9865(t10,t5,t3,t6);}

/* g1326 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_6930(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_6930,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6939,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:839: scan-used-variables */
t5=*((C_word*)lf[131]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k12053 in for-each-loop2933 in k11955 in g2920 in k11950 in k11947 in k11944 in k11941 in k11938 in k11935 in k11809 in k11806 in g2693 in k11797 in k11794 in determine-loop-and-dispatch in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in ... */
static void C_ccall f_12055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_12055,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12045(t3,((C_word*)t0)[4],t2);}

/* touch in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static C_word C_fcall f_3790(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t1=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t2=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_END_OF_LIST);
return(t2);}

/* k10135 in walk in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_10137,2,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_10025(2,av2);}}
else{
if(C_truep(C_i_listp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10055,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:1357: get */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
av2[3]=((C_word*)t0)[6];
av2[4]=lf[49];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_10025(2,av2);}}}}

/* g43 in scan-each in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_fcall f_3797(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_3797,3,t0,t1,t2);}
/* optimizer.scm:60: scan */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3832(t3,t1,t2,((C_word*)t0)[3]);}

/* scan-each in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_fcall f_3795(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_3795,4,t0,t1,t2,t3);}
a=C_alloc(10);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3797,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_check_list_2(t2,lf[2]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3809,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3809(t9,t1,t2);}

/* k10856 in for-each-loop2520 in k10848 in k10845 in k10842 in k10825 in k10822 in k10734 in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in ... */
static void C_ccall f_10858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_10858,2,av);}
a=C_alloc(5);
t2=C_slot(((C_word*)t0)[2],C_fix(3));
t3=C_a_i_record4(&a,4,lf[14],lf[15],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_i_set_car(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10848 in k10845 in k10842 in k10825 in k10822 in k10734 in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 in ... */
static void C_ccall f_10850(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10850,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10892,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_10892(t6,((C_word*)t0)[3],t2);}

/* constant-node? in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4152,3,av);}
t3=C_slot(t2,C_fix(1));
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_eqp(lf[34],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* ##compiler#perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4143(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(86,c,9)))){
C_save_and_reclaim((void *)f_4143,4,av);}
a=C_alloc(86);
t4=C_fix(0);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_fix(0);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_END_OF_LIST;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_FALSE;
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
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_SCHEME_UNDEFINED;
t29=(*a=C_VECTOR_TYPE|1,a[1]=t28,tmp=(C_word)a,a+=2,tmp);
t30=C_SCHEME_UNDEFINED;
t31=(*a=C_VECTOR_TYPE|1,a[1]=t30,tmp=(C_word)a,a+=2,tmp);
t32=C_SCHEME_UNDEFINED;
t33=(*a=C_VECTOR_TYPE|1,a[1]=t32,tmp=(C_word)a,a+=2,tmp);
t34=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4146,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t35=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4152,tmp=(C_word)a,a+=2,tmp));
t36=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4182,a[2]=t15,tmp=(C_word)a,a+=3,tmp));
t37=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4186,tmp=(C_word)a,a+=2,tmp));
t38=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4223,a[2]=t13,a[3]=t21,a[4]=t25,a[5]=t3,tmp=(C_word)a,a+=6,tmp));
t39=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4357,a[2]=t15,a[3]=t25,a[4]=t7,a[5]=t21,a[6]=t27,a[7]=t19,a[8]=t31,tmp=(C_word)a,a+=9,tmp));
t40=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4550,a[2]=t3,a[3]=t29,a[4]=t17,tmp=(C_word)a,a+=5,tmp));
t41=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4570,a[2]=t21,a[3]=t17,a[4]=t9,a[5]=t29,a[6]=t5,a[7]=t27,a[8]=t33,a[9]=t3,a[10]=t23,a[11]=t11,tmp=(C_word)a,a+=12,tmp));
t42=C_set_block_item(t33,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6352,a[2]=t23,a[3]=t27,tmp=(C_word)a,a+=4,tmp));
t43=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6417,a[2]=t1,a[3]=t2,a[4]=t15,a[5]=t7,a[6]=t5,a[7]=t9,a[8]=t13,a[9]=t27,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:517: perform-pre-optimization! */
t44=*((C_word*)lf[119]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t44;
av2[1]=t43;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t44+1)))(4,av2);}}

/* test in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_4146(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_4146,4,t0,t1,t2,t3);}
/* optimizer.scm:142: get */
t4=*((C_word*)lf[33]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4140(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(53,c,7)))){
C_save_and_reclaim((void *)f_4140,2,av);}
a=C_alloc(53);
t2=C_mutate2((C_word*)lf[30]+1 /* (set! ##compiler#simplifications ...) */,t1);
t3=C_set_block_item(lf[31] /* ##compiler#simplified-ops */,0,C_SCHEME_END_OF_LIST);
t4=C_mutate2((C_word*)lf[32]+1 /* (set! ##compiler#perform-high-level-optimizations ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4143,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate2((C_word*)lf[119]+1 /* (set! ##compiler#perform-pre-optimization! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6537,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate2((C_word*)lf[128]+1 /* (set! register-simplifications ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6857,tmp=(C_word)a,a+=2,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6864,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=C_a_i_list(&a,1,lf[193]);
t9=C_a_i_list(&a,2,lf[3],t8);
t10=C_a_i_cons(&a,2,lf[227],lf[228]);
t11=C_a_i_cons(&a,2,t9,t10);
t12=C_a_i_cons(&a,2,lf[223],t11);
t13=C_a_i_cons(&a,2,lf[12],t12);
t14=C_a_i_list(&a,4,lf[193],lf[227],lf[228],lf[223]);
t15=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13563,tmp=(C_word)a,a+=2,tmp);
t16=C_a_i_list(&a,3,t13,t14,t15);
/* optimizer.scm:606: register-simplifications */
t17=*((C_word*)lf[128]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t17;
av2[1]=t7;
av2[2]=lf[12];
av2[3]=t16;
((C_proc)(void*)(*((C_word*)t17+1)))(4,av2);}}

/* k12749 in a12730 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_12751(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,1)))){
C_save_and_reclaim((void *)f_12751,2,av);}
a=C_alloc(25);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_a_i_record4(&a,4,lf[14],lf[21],C_SCHEME_END_OF_LIST,t2);
t4=C_a_i_list2(&a,2,t1,t3);
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[6];
t7=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],t6,t4);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k6291 in k6333 in k6165 in k6139 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_6293(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_6293,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6324,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:483: test */
t3=((C_word*)((C_word*)t0)[5])[1];
f_4146(t3,t2,((C_word*)t0)[6],lf[105]);}
else{
t2=((C_word*)t0)[2];
f_6184(t2,C_SCHEME_FALSE);}}

/* g2379 in rec in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_11147(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_11147,3,t0,t1,t2);}
a=C_alloc(9);
t3=C_i_cdr(t2);
t4=t3;
t5=C_slot(t4,C_fix(3));
t6=C_i_car(t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11157,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t7,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t4,tmp=(C_word)a,a+=9,tmp);
t9=C_i_cdr(((C_word*)t0)[4]);
t10=C_i_length(t9);
t11=C_eqp(((C_word*)t0)[6],t10);
if(C_truep(t11)){
t12=t8;{
C_word av2[2];
av2[0]=t12;
av2[1]=C_SCHEME_UNDEFINED;
f_11157(2,av2);}}
else{
/* optimizer.scm:1500: quit */
t12=*((C_word*)lf[167]+1);{
C_word av2[4];
av2[0]=t12;
av2[1]=t8;
av2[2]=lf[174];
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t12+1)))(4,av2);}}}

/* k6281 in k6182 in k6165 in k6139 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6283(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6283,2,av);}
a=C_alloc(14);
t2=C_a_i_list1(&a,1,t1);
t3=C_a_i_record4(&a,4,lf[14],lf[13],((C_word*)t0)[2],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6241,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:492: test */
t6=((C_word*)((C_word*)t0)[6])[1];
f_4146(t6,t5,((C_word*)t0)[3],lf[56]);}

/* k11253 in k11250 in rec in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11255,2,av);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
/* optimizer.scm:1513: node-subexpressions-set! */
t3=*((C_word*)lf[121]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a12730 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_12731(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_12731,10,av);}
a=C_alloc(7);
if(C_truep(*((C_word*)lf[143]+1))){
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12751,a[2]=t6,a[3]=t7,a[4]=t8,a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:785: varnode */
t11=*((C_word*)lf[51]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=t10;
av2[2]=t9;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t10=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* k11250 in rec in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11252,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11255,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1512: node-parameters-set! */
t3=*((C_word*)lf[122]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k13295 in k13316 in k13273 in a13261 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_13297(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_13297,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[22],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4134 in k4073 in k4070 in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_ccall f_4136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4136,2,av);}
/* optimizer.scm:111: debugging */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[18];
av2[3]=lf[25];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4992 in a4986 in k4980 in k4881 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4994(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4994,2,av);}
a=C_alloc(14);
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=C_i_cadr(((C_word*)t0)[2]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5034,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t7=C_a_i_plus(&a,2,((C_word*)t0)[8],C_fix(1));
/* optimizer.scm:296: build-lambda-list */
t8=*((C_word*)lf[62]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=((C_word*)t0)[9];
av2[3]=t7;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}

/* k6020 in k6030 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6022,2,av);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_5090(2,av2);}}
else{
/* optimizer.scm:314: test */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4146(t2,((C_word*)t0)[2],((C_word*)t0)[4],lf[101]);}}

/* k12615 in a12594 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_12617(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_12617,2,av);}
a=C_alloc(23);
t2=t1;
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_list1(&a,1,t3);
t5=t4;
t6=C_a_i_list1(&a,1,t2);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12653,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t7,tmp=(C_word)a,a+=8,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12655,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12697,a[2]=t8,a[3]=t9,a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:817: qnode */
t11=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}

/* a4986 in k4980 in k4881 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4987(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_4987,5,av);}
a=C_alloc(10);
t5=(
  /* optimizer.scm:290: touch */
  f_4182(((C_word*)((C_word*)t0)[2])[1])
);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4994,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:291: debugging */
t7=*((C_word*)lf[17]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[18];
av2[3]=lf[67];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k11111 in k11108 in rec in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_11113,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11116,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list2(&a,2,C_SCHEME_TRUE,((C_word*)t0)[5]);
/* optimizer.scm:1493: node-parameters-set! */
t4=*((C_word*)lf[122]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6951 in g1366 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6953(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6953,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6969,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:851: gensym */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11108 in rec in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11110,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11113,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1492: node-class-set! */
t3=*((C_word*)lf[170]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[171];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k11114 in k11111 in k11108 in rec in k10731 in k10725 in k10722 in k10718 in k10709 in k10694 in transform in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_11116(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11116,2,av);}
t2=C_i_cddr(((C_word*)t0)[2]);
/* optimizer.scm:1494: node-subexpressions-set! */
t3=*((C_word*)lf[121]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4980 in k4881 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,8)))){
C_save_and_reclaim((void *)f_4982,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4987,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:287: decompose-lambda-list */
t3=*((C_word*)lf[66]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[8];
av2[2]=((C_word*)t0)[9];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
/* optimizer.scm:299: walk-generic */
t3=((C_word*)((C_word*)t0)[10])[1];
f_6352(t3,((C_word*)t0)[8],((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[3],((C_word*)t0)[4],t2,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}}

/* k6014 in k5984 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6016,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_5097(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5999,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(2));
t4=C_i_car(t3);
/* optimizer.scm:319: test */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4146(t5,t2,t4,lf[70]);}}

/* g1366 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_6943(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_6943,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_memq(t2,((C_word*)((C_word*)t0)[2])[1]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6953,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6975,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:848: filter */
t5=*((C_word*)lf[132]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6942(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_6942,2,av);}
a=C_alloc(25);
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6943,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t7=((C_word*)t0)[3];
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7002,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7254,a[2]=t10,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_7254(t12,t8,t7);}

/* a13562 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_13563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_13563,7,av);}
a=C_alloc(8);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13571,a[2]=t3,a[3]=t2,a[4]=t6,a[5]=t4,a[6]=t5,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:612: ##sys#hash-table-ref */
t8=*((C_word*)lf[38]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
av2[2]=*((C_word*)lf[140]+1);
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* a6974 in g1366 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6975,3,av);}
a=C_alloc(6);
t3=C_eqp(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6988,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:849: find-path */
t5=((C_word*)t0)[3];
f_6887(t5,t4,((C_word*)t0)[2],t2);}}

/* k9808 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9810(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_9810,2,av);}
a=C_alloc(17);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=C_i_length(((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
t6=C_u_i_car(t5);
if(C_truep(C_i_greater_or_equalp(t4,t6))){
t7=C_i_cadr(((C_word*)t0)[2]);
t8=C_a_i_list2(&a,2,C_SCHEME_TRUE,t7);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9835,a[2]=((C_word*)t0)[4],a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9839,a[2]=t10,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t12=((C_word*)t0)[2];
t13=C_u_i_cdr(t12);
t14=C_u_i_car(t13);
/* optimizer.scm:1315: varnode */
t15=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t15;
av2[1]=t11;
av2[2]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(3,av2);}}
else{
t7=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k13569 in a13562 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_13571(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_13571,2,av);}
a=C_alloc(10);
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13576,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_13576(t6,((C_word*)t0)[7],t2);}

/* loop in k13569 in a13562 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_13576(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,8)))){
C_save_and_reclaim_args((void *)trf_13576,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13586,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=C_i_caar(t2);
t5=t2;
t6=C_u_i_car(t5);
t7=C_u_i_cdr(t6);
/* optimizer.scm:614: simplify-named-call */
t8=*((C_word*)lf[142]+1);{
C_word av2[9];
av2[0]=t8;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)t0)[6];
av2[6]=t4;
av2[7]=t7;
av2[8]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t8+1)))(9,av2);}}}

/* k6030 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6032,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_5090(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6022,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:313: test */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4146(t3,t2,((C_word*)t0)[4],lf[49]);}}

/* k6629 in k6623 in k6617 in k6597 in k6591 in k6588 in g971 in k6569 in k6549 in perform-pre-optimization! in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_6631(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_6631,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(3));
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6640,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t5=C_slot(t3,C_fix(1));
t6=C_eqp(lf[3],t5);
if(C_truep(t6)){
t7=C_slot(t3,C_fix(2));
t8=C_i_car(t7);
t9=t4;
f_6640(t9,C_eqp(((C_word*)t0)[9],t8));}
else{
t7=t4;
f_6640(t7,C_SCHEME_FALSE);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a9844 in k9837 in k9808 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9845(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9845,2,av);}
/* optimizer.scm:1317: split-at */
t2=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k9841 in k9837 in k9808 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9843,2,av);}
/* optimizer.scm:1314: cons* */
t2=*((C_word*)lf[151]+1);{
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

/* k6967 in k6951 in g1366 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6969(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_6969,2,av);}
a=C_alloc(16);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,C_a_i_cons(&a,2,t1,t2),((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6961,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t6=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* optimizer.scm:852: append */
t7=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)((C_word*)t0)[5])[1];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k6959 in k6967 in k6951 in g1366 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6961,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k13584 in loop in k13569 in a13562 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_13586(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_13586,2,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13590,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:611: g1067 */
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(
  /* optimizer.scm:611: g1067 */
  f_13590(C_a_i(&a,10),t2,t1)
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[4];
t3=C_u_i_cdr(t2);
/* optimizer.scm:621: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_13576(t4,((C_word*)t0)[3],t3);}}

/* k4252 in k4246 in a4237 in k4225 in simplify in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4254(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4254,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_caar(((C_word*)t0)[2]);
t3=C_i_assq(t2,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t3)){
t4=C_i_cdr(t3);
t5=C_a_i_plus(&a,2,t4,C_fix(1));
t6=C_i_set_cdr(t3,t5);
t7=(
  /* optimizer.scm:162: touch */
  f_4182(((C_word*)((C_word*)t0)[4])[1])
);
/* optimizer.scm:163: simplify */
t8=((C_word*)((C_word*)t0)[5])[1];
f_4223(t8,((C_word*)t0)[6],t1);}
else{
t4=C_a_i_cons(&a,2,C_a_i_cons(&a,2,t2,C_fix(1)),((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t4);
t6=(
  /* optimizer.scm:162: touch */
  f_4182(((C_word*)((C_word*)t0)[4])[1])
);
/* optimizer.scm:163: simplify */
t7=((C_word*)((C_word*)t0)[5])[1];
f_4223(t7,((C_word*)t0)[6],t1);}}
else{
t2=((C_word*)t0)[6];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k12651 in k12615 in a12594 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_12653(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,1)))){
C_save_and_reclaim((void *)f_12653,2,av);}
a=C_alloc(25);
t2=C_a_i_list3(&a,3,t1,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];
t4=C_a_i_record4(&a,4,lf[14],lf[5],t3,t2);
t5=C_a_i_list2(&a,2,((C_word*)t0)[5],t4);
t6=((C_word*)t0)[6];
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[6],((C_word*)t0)[7],t5);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* a12654 in k12615 in a12594 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_12655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_12655,4,av);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12689,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:814: varnode */
t5=*((C_word*)lf[51]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k6666 in k6648 in k6645 in k6638 in k6629 in k6623 in k6617 in k6597 in k6591 in k6588 in g971 in k6569 in k6549 in perform-pre-optimization! in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6668,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:590: node-subexpressions-set! */
t3=*((C_word*)lf[121]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* map-loop1294 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_7314(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7314,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_cons(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t9);
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

/* k9833 in k9808 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_9835,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k9837 in k9808 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9839(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9839,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9843,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9845,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9851,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1317: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* a6916 in find in find-path in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6917,3,av);}
/* optimizer.scm:835: find */
t3=((C_word*)((C_word*)t0)[2])[1];
f_6893(t3,t1,t2,((C_word*)t0)[3]);}

/* g1067 in k13584 in loop in k13569 in a13562 in k4138 in k3753 in k3750 in k3747 */
static C_word C_fcall f_13590(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;{}
t2=C_i_assq(((C_word*)t0)[2],*((C_word*)lf[31]+1));
if(C_truep(t2)){
t3=C_i_cdr(t2);
t4=C_a_i_plus(&a,2,t3,C_fix(1));
t5=C_i_set_cdr(t2,t4);
return(t1);}
else{
t3=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],C_fix(1)),*((C_word*)lf[31]+1));
t4=C_mutate2((C_word*)lf[31]+1 /* (set! ##compiler#simplified-ops ...) */,t3);
return(t1);}}

/* k6648 in k6645 in k6638 in k6629 in k6623 in k6617 in k6597 in k6591 in k6588 in g971 in k6569 in k6549 in perform-pre-optimization! in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6650(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6650,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6653,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[4]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6668,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t6=C_u_i_cdr(((C_word*)t0)[4]);
/* optimizer.scm:592: reverse */
t7=*((C_word*)lf[107]+1);{
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

/* k6651 in k6648 in k6645 in k6638 in k6629 in k6623 in k6617 in k6597 in k6591 in k6588 in g971 in k6569 in k6549 in perform-pre-optimization! in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6653,2,av);}
/* optimizer.scm:593: touch */
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=(
  /* optimizer.scm:593: touch */
  f_6540(((C_word*)((C_word*)t0)[3])[1])
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4961 in k4958 in k4911 in a4905 in a4887 in k4881 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4963,2,av);}
a=C_alloc(4);
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* optimizer.scm:282: build-lambda-list */
t3=*((C_word*)lf[62]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4958 in k4911 in a4905 in a4887 in k4881 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4960(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4960,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4963,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:280: debugging */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[18];
av2[3]=lf[63];
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
/* optimizer.scm:283: build-lambda-list */
t2=*((C_word*)lf[62]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[2];
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k3920 in k3914 in k3911 in scan in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_ccall f_3922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3922,2,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_END_OF_LIST);
t3=C_i_cadr(((C_word*)t0)[3]);
/* optimizer.scm:79: scan */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3832(t4,((C_word*)t0)[5],t3,((C_word*)t0)[6]);}

/* k12679 in k12691 in k12687 in a12654 in k12615 in a12594 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_12681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,1)))){
C_save_and_reclaim((void *)f_12681,2,av);}
a=C_alloc(14);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],t1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[21],C_SCHEME_END_OF_LIST,t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k12687 in a12654 in k12615 in a12594 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_12689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_12689,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12693,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:814: qnode */
t4=*((C_word*)lf[40]+1);{
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

/* k5997 in k6014 in k5984 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5999,2,av);}
t2=((C_word*)t0)[2];
f_5097(t2,C_i_not(t1));}

/* k4911 in a4905 in a4887 in k4881 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4913(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_4913,2,av);}
a=C_alloc(16);
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=C_i_cadr(((C_word*)t0)[2]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4953,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4960,a[2]=((C_word*)t0)[8],a[3]=t6,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[10])){
/* optimizer.scm:279: test */
t8=((C_word*)((C_word*)t0)[11])[1];
f_4146(t8,t7,((C_word*)t0)[5],lf[64]);}
else{
t8=t7;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_4960(2,av2);}}}

/* k3954 in k3950 in k3943 in k3911 in scan in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_ccall f_3956(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3956,2,av);}
/* optimizer.scm:83: scan */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3832(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k12691 in k12687 in a12654 in k12615 in a12594 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_12693(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12693,2,av);}
a=C_alloc(16);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_record4(&a,4,lf[14],lf[144],((C_word*)t0)[3],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12681,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:815: qnode */
t6=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3950 in k3943 in k3911 in scan in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_ccall f_3952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3952,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3956,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:83: append */
t4=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6623 in k6617 in k6597 in k6591 in k6588 in g971 in k6569 in k6549 in perform-pre-optimization! in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6625,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6631,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t1)){
t3=C_i_length(t1);
t4=C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=C_slot(((C_word*)t0)[2],C_fix(1));
t6=t2;
f_6631(t6,C_eqp(lf[5],t5));}
else{
t5=t2;
f_6631(t5,C_SCHEME_FALSE);}}
else{
t3=t2;
f_6631(t3,C_SCHEME_FALSE);}}

/* k12695 in k12615 in a12594 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_12697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12697,2,av);}
/* optimizer.scm:809: fold-right */
t2=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k13273 in a13261 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_13275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_13275,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13318,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:672: get-list */
t3=*((C_word*)lf[124]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[9];
av2[4]=lf[98];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a4899 in a4893 in a4887 in k4881 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4900,3,av);}
/* optimizer.scm:273: test */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4146(t3,t1,t2,lf[60]);}

/* k3943 in k3911 in scan in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_ccall f_3945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3945,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3952,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:83: last */
t3=*((C_word*)lf[8]+1);{
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

/* a4905 in a4887 in k4881 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_4906,4,av);}
a=C_alloc(12);
t4=(
  /* optimizer.scm:274: touch */
  f_4182(((C_word*)((C_word*)t0)[2])[1])
);
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4913,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:275: debugging */
t6=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[18];
av2[3]=lf[65];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9724 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_9726(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,2)))){
C_save_and_reclaim((void *)f_9726,2,av);}
a=C_alloc(25);
if(C_truep(t1)){
t2=C_i_caddr(((C_word*)t0)[2]);
t3=(C_truep(t2)?t2:*((C_word*)lf[145]+1));
if(C_truep(t3)){
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=t4;
t6=C_eqp(*((C_word*)lf[146]+1),lf[147]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9774,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1296: fifth */
t8=*((C_word*)lf[154]+1);{
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
else{
t7=C_i_cadr(((C_word*)t0)[2]);
t8=C_a_i_list2(&a,2,t7,((C_word*)t0)[6]);
t9=((C_word*)t0)[3];
t10=C_a_i_record4(&a,4,lf[14],lf[89],t8,t9);
t11=C_a_i_list2(&a,2,((C_word*)t0)[4],t10);
t12=((C_word*)t0)[5];
t13=t12;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],t5,t11);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}}
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

/* k6617 in k6597 in k6591 in k6588 in g971 in k6569 in k6549 in perform-pre-optimization! in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_6619(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_6619,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6625,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:576: get-list */
t5=*((C_word*)lf[124]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[10];
av2[3]=t3;
av2[4]=lf[98];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k8772 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_8774(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_8774,2,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=C_eqp(*((C_word*)lf[146]+1),t3);
if(C_truep(t4)){
t5=C_i_cadddr(((C_word*)t0)[2]);
t6=(C_truep(t5)?t5:*((C_word*)lf[145]+1));
if(C_truep(t6)){
t7=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8818,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t8,tmp=(C_word)a,a+=6,tmp);
if(C_truep(*((C_word*)lf[145]+1))){
t10=((C_word*)t0)[2];
t11=C_u_i_cdr(t10);
t12=C_u_i_cdr(t11);
t13=C_u_i_cdr(t12);
t14=C_u_i_car(t13);
t15=t9;
f_8818(t15,C_a_i_list1(&a,1,t14));}
else{
t10=((C_word*)t0)[2];
t11=C_u_i_cdr(t10);
t12=C_u_i_cdr(t11);
t13=C_u_i_car(t12);
t14=t9;
f_8818(t14,C_a_i_list1(&a,1,t13));}}
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
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4931 in k4951 in k4911 in a4905 in a4887 in k4881 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void *)f_4933,2,av);}
a=C_alloc(8);
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[2];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[11],((C_word*)t0)[3],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6645 in k6638 in k6629 in k6623 in k6617 in k6597 in k6591 in k6588 in g971 in k6569 in k6549 in perform-pre-optimization! in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6647,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6650,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_u_i_cdr(((C_word*)t0)[6]);
/* optimizer.scm:589: node-subexpressions-set! */
t4=*((C_word*)lf[121]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6638 in k6629 in k6623 in k6617 in k6597 in k6591 in k6588 in g971 in k6569 in k6549 in perform-pre-optimization! in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_6640(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_6640,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6647,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:588: node-parameters-set! */
t5=*((C_word*)lf[122]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[8];
av2[3]=lf[123];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5984 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5986,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6016,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:317: test */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4146(t3,t2,((C_word*)t0)[5],lf[57]);}
else{
t2=((C_word*)t0)[2];
f_5097(t2,C_SCHEME_FALSE);}}

/* k3958 in k3911 in scan in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_ccall f_3960(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3960,2,av);}
/* optimizer.scm:82: scan-each */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3795(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* a13261 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_13262(C_word c,C_word *av){
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
C_word t10=av[10];
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_13262,11,av);}
a=C_alloc(10);
if(C_truep(C_i_equalp(t4,*((C_word*)lf[217]+1)))){
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_13275,a[2]=t9,a[3]=t1,a[4]=t8,a[5]=t10,a[6]=t6,a[7]=t5,a[8]=t2,a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:671: immediate? */
t12=*((C_word*)lf[219]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=t11;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}
else{
t11=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}

/* a5571 in k5559 in k5547 in k5544 in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5572(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(43,c,3)))){
C_save_and_reclaim((void *)f_5572,4,av);}
a=C_alloc(43);
t4=t2;
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5593,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5641,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t1,a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[4],a[8]=t7,a[9]=t9,a[10]=t8,tmp=(C_word)a,a+=11,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5649,a[2]=t10,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* optimizer.scm:440: qnode */
t12=*((C_word*)lf[40]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=t11;
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}
else{
t12=C_i_length(t3);
t13=C_a_i_times(&a,2,C_fix(3),t12);
t14=C_a_i_list2(&a,2,lf[88],t13);
t15=C_a_i_record4(&a,4,lf[14],lf[89],t14,t3);
t16=C_a_i_list1(&a,1,t15);
/* optimizer.scm:436: append */
t17=*((C_word*)lf[7]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t17;
av2[1]=t10;
av2[2]=t4;
av2[3]=t16;
((C_proc)(void*)(*((C_word*)t17+1)))(4,av2);}}}

/* k4951 in k4911 in a4905 in a4887 in k4881 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4953(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_4953,2,av);}
a=C_alloc(19);
t2=C_i_cadddr(((C_word*)t0)[2]);
t3=C_a_i_list4(&a,4,((C_word*)t0)[3],((C_word*)t0)[4],t1,t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4933,a[2]=((C_word*)t0)[5],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_car(((C_word*)t0)[6]);
t7=C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)t0)[8]);
/* optimizer.scm:285: walk */
t8=((C_word*)((C_word*)t0)[9])[1];
f_4357(t8,t5,t6,t7,C_SCHEME_END_OF_LIST);}

/* a10341 in rec in scan in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10342,3,av);}
/* optimizer.scm:1401: rec */
t3=((C_word*)((C_word*)t0)[2])[1];
f_10223(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* for-each-loop1389 in k7000 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_7231(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7231,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7241,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:856: g1390 */
t5=((C_word*)t0)[3];
f_7003(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3884 in scan in scan-toplevel-assignments in k3753 in k3750 in k3747 */
static void C_fcall f_3886(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,1)))){
C_save_and_reclaim_args((void *)trf_3886,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];
f_3869(t4,t3);}
else{
t2=((C_word*)t0)[4];
f_3869(t2,C_SCHEME_UNDEFINED);}}

/* walk in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_4357(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_4357,5,t0,t1,t2,t3,t4);}
a=C_alloc(12);
if(C_truep(C_i_memq(t2,*((C_word*)lf[39]+1)))){
t5=t2;
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=((C_word*)((C_word*)t0)[2])[1];
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4371,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=t4,a[9]=t5,a[10]=((C_word*)t0)[2],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:172: walk1 */
t7=((C_word*)((C_word*)t0)[8])[1];
f_4570(t7,t6,t2,t3,t4);}}

/* k5586 in k5601 in k5639 in a5571 in k5559 in k5547 in k5544 in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 in ... */
static void C_ccall f_5588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5588,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7239 in for-each-loop1389 in k7000 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7241(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7241,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7231(t3,((C_word*)t0)[4],t2);}

/* k13073 in loop2 in k13015 in k13230 in k13236 in loop1 in a12902 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_13075(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_13075,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_slot(t2,C_fix(3));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
t6=C_i_cdr(((C_word*)t0)[4]);
t7=C_i_cadr(((C_word*)t0)[2]);
/* optimizer.scm:725: loop2 */
t8=((C_word*)((C_word*)t0)[5])[1];
f_13044(t8,((C_word*)t0)[6],t5,t6,t7);}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13118,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13128,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:729: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}
else{
t2=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* k4369 in walk in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_4371(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_4371,2,av);}
a=C_alloc(21);
t2=t1;
t3=C_slot(t2,C_fix(3));
t4=t3;
t5=C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4390,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t7=C_eqp(t5,lf[5]);
if(C_truep(t7)){
t8=C_i_car(t4);
t9=C_slot(t8,C_fix(1));
t10=C_eqp(lf[34],t9);
if(C_truep(t10)){
t11=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[4])[1],C_fix(1));
t12=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t11);
t13=(
  /* optimizer.scm:179: touch */
  f_4182(((C_word*)((C_word*)t0)[5])[1])
);
t14=C_u_i_car(t4);
t15=C_slot(t14,C_fix(2));
t16=C_i_car(t15);
t17=(C_truep(t16)?C_i_cadr(t4):C_i_caddr(t4));
/* optimizer.scm:180: walk */
t18=((C_word*)((C_word*)t0)[6])[1];
f_4357(t18,t6,t17,((C_word*)t0)[7],((C_word*)t0)[8]);}
else{
/* optimizer.scm:170: simplify */
t11=((C_word*)((C_word*)t0)[2])[1];
f_4223(t11,((C_word*)t0)[3],t2);}}
else{
t8=C_eqp(t5,lf[12]);
if(C_truep(t8)){
t9=C_i_car(t4);
t10=C_slot(t9,C_fix(1));
t11=C_eqp(lf[3],t10);
if(C_truep(t11)){
t12=C_u_i_car(t4);
t13=C_slot(t12,C_fix(2));
t14=C_i_car(t13);
t15=t14;
t16=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4449,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=t6,a[8]=t15,a[9]=((C_word*)t0)[2],a[10]=((C_word*)t0)[3],tmp=(C_word)a,a+=11,tmp);
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4507,a[2]=t4,a[3]=t16,a[4]=((C_word*)t0)[11],a[5]=t15,tmp=(C_word)a,a+=6,tmp);
/* tweaks.scm:51: ##sys#get */
t18=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t18;
av2[1]=t17;
av2[2]=t15;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t18+1)))(4,av2);}}
else{
/* optimizer.scm:170: simplify */
t12=((C_word*)((C_word*)t0)[2])[1];
f_4223(t12,((C_word*)t0)[3],t2);}}
else{
/* optimizer.scm:170: simplify */
t9=((C_word*)((C_word*)t0)[2])[1];
f_4223(t9,((C_word*)t0)[3],t2);}}}

/* for-each-loop1365 in k6940 in k6883 in reorganize-recursive-bindings in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_7254(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7254,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7264,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:843: g1366 */
t5=((C_word*)t0)[3];
f_6943(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* loop2 in k13015 in k13230 in k13236 in loop1 in a12902 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_13044(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,4)))){
C_save_and_reclaim_args((void *)trf_13044,5,t0,t1,t2,t3,t4);}
a=C_alloc(16);
t5=t4;
t6=C_slot(t5,C_fix(1));
t7=t4;
t8=C_slot(t7,C_fix(2));
t9=t8;
t10=t4;
t11=C_slot(t10,C_fix(3));
t12=t11;
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13075,a[2]=t12,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=t4,tmp=(C_word)a,a+=9,tmp);
t14=C_eqp(t6,lf[6]);
if(C_truep(t14)){
t15=C_i_cdr(t9);
if(C_truep(C_i_nullp(t15))){
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13208,a[2]=t13,a[3]=t3,a[4]=t12,a[5]=t9,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t17=C_u_i_car(t9);
/* optimizer.scm:720: get */
t18=*((C_word*)lf[33]+1);{
C_word av2[5];
av2[0]=t18;
av2[1]=t16;
av2[2]=((C_word*)t0)[4];
av2[3]=t17;
av2[4]=lf[105];
((C_proc)(void*)(*((C_word*)t18+1)))(5,av2);}}
else{
t16=t13;
f_13075(t16,C_SCHEME_FALSE);}}
else{
t15=t13;
f_13075(t15,C_SCHEME_FALSE);}}

/* k6225 in for-each-loop875 in k6239 in k6281 in k6182 in k6165 in k6139 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6227,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6217(t3,((C_word*)t0)[4],t2);}

/* a5565 in k5559 in k5547 in k5544 in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5566,2,av);}
/* optimizer.scm:430: split-at */
t2=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5559 in k5547 in k5544 in k5345 in k5247 in k5751 in a5230 in k5213 in k5175 in k5095 in k5088 in k5085 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_5561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_5561,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5566,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5572,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:430: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[11];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* f_6259 in k6239 in k6281 in k6182 in k6165 in k6139 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6259,3,av);}
t3=C_i_car(t2);
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
t5=t2;
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_i_set_i_slot(t5,C_fix(1),C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* a10304 in rec in scan in transform-direct-lambdas! in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_10305(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_10305,5,av);}
a=C_alloc(8);
t5=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t6=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t5);
t7=C_i_car(((C_word*)t0)[4]);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10321,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1396: append */
t10=*((C_word*)lf[7]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t9;
av2[2]=t2;
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}

/* k7485 in k7482 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_fcall f_7487(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,0,1)))){
C_save_and_reclaim_args((void *)trf_7487,2,t0,t1);}
a=C_alloc(22);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(*((C_word*)lf[143]+1))){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=C_i_cadr(((C_word*)t0)[3]);
t4=C_a_i_list1(&a,1,t3);
t5=((C_word*)t0)[4];
t6=C_a_i_record4(&a,4,lf[14],lf[144],t4,t5);
t7=C_a_i_list2(&a,2,((C_word*)t0)[5],t6);
t8=((C_word*)t0)[2];
t9=t8;{
C_word av2[2];
av2[0]=t9;
av2[1]=C_a_i_record4(&a,4,lf[14],lf[12],t2,t7);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* k6239 in k6281 in k6182 in k6165 in k6139 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6241(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_6241,2,av);}
a=C_alloc(13);
t2=(C_truep(t1)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6242,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp):(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6259,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp));
t3=t2;
t4=((C_word*)t0)[3];
t5=C_i_check_list_2(t4,lf[2]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6215,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6217,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_6217(t10,t6,t4);}

/* f_6242 in k6239 in k6281 in k6182 in k6165 in k6139 in walk1 in perform-high-level-optimizations in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_6242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6242,3,av);}
t3=C_i_cdr(t2);
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
t5=t2;
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_i_set_i_slot(t5,C_fix(1),C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k7482 in simplify-named-call in k7362 in k6868 in k6865 in k6862 in k4138 in k3753 in k3750 in k3747 */
static void C_ccall f_7484(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_7484,2,av);}
a=C_alloc(14);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7487,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_length(((C_word*)t0)[4]);
t4=C_i_car(((C_word*)t0)[3]);
if(C_truep(C_i_nequalp(t3,t4))){
t5=C_i_car(((C_word*)t0)[4]);
t6=C_i_cadr(((C_word*)t0)[4]);
t7=C_slot(t5,C_fix(1));
t8=C_eqp(lf[3],t7);
if(C_truep(t8)){
t9=C_slot(t6,C_fix(1));
t10=C_eqp(lf[3],t9);
if(C_truep(t10)){
t11=C_slot(t5,C_fix(2));
t12=C_slot(t6,C_fix(2));
if(C_truep(C_i_equalp(t11,t12))){
t13=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7573,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=t14,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:945: qnode */
t16=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t16;
av2[1]=t15;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t16+1)))(3,av2);}}
else{
t13=t2;
f_7487(t13,C_SCHEME_FALSE);}}
else{
t11=t2;
f_7487(t11,C_SCHEME_FALSE);}}
else{
t9=t2;
f_7487(t9,C_SCHEME_FALSE);}}
else{
t5=t2;
f_7487(t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[589] = {
{"f_13202:optimizer_2escm",(void*)f_13202},
{"f_13208:optimizer_2escm",(void*)f_13208},
{"f_8483:optimizer_2escm",(void*)f_8483},
{"f_10321:optimizer_2escm",(void*)f_10321},
{"f_7127:optimizer_2escm",(void*)f_7127},
{"f_6215:optimizer_2escm",(void*)f_6215},
{"f_6217:optimizer_2escm",(void*)f_6217},
{"f_5867:optimizer_2escm",(void*)f_5867},
{"f_3913:optimizer_2escm",(void*)f_3913},
{"f_3916:optimizer_2escm",(void*)f_3916},
{"f_13232:optimizer_2escm",(void*)f_13232},
{"f_4115:optimizer_2escm",(void*)f_4115},
{"f_13238:optimizer_2escm",(void*)f_13238},
{"f_9468:optimizer_2escm",(void*)f_9468},
{"f_9982:optimizer_2escm",(void*)f_9982},
{"f_9985:optimizer_2escm",(void*)f_9985},
{"f_4105:optimizer_2escm",(void*)f_4105},
{"f_7157:optimizer_2escm",(void*)f_7157},
{"f_7159:optimizer_2escm",(void*)f_7159},
{"f_5852:optimizer_2escm",(void*)f_5852},
{"f_10287:optimizer_2escm",(void*)f_10287},
{"f_9480:optimizer_2escm",(void*)f_9480},
{"f_9470:optimizer_2escm",(void*)f_9470},
{"f_11194:optimizer_2escm",(void*)f_11194},
{"f_11166:optimizer_2escm",(void*)f_11166},
{"f_11163:optimizer_2escm",(void*)f_11163},
{"f_11160:optimizer_2escm",(void*)f_11160},
{"f_8987:optimizer_2escm",(void*)f_8987},
{"f_11157:optimizer_2escm",(void*)f_11157},
{"f_7020:optimizer_2escm",(void*)f_7020},
{"f_8964:optimizer_2escm",(void*)f_8964},
{"f_3875:optimizer_2escm",(void*)f_3875},
{"f_3873:optimizer_2escm",(void*)f_3873},
{"f_4310:optimizer_2escm",(void*)f_4310},
{"f_4312:optimizer_2escm",(void*)f_4312},
{"f_3869:optimizer_2escm",(void*)f_3869},
{"f_8479:optimizer_2escm",(void*)f_8479},
{"f_8471:optimizer_2escm",(void*)f_8471},
{"f_9492:optimizer_2escm",(void*)f_9492},
{"f_8706:optimizer_2escm",(void*)f_8706},
{"f_3832:optimizer_2escm",(void*)f_3832},
{"f_6368:optimizer_2escm",(void*)f_6368},
{"f_7990:optimizer_2escm",(void*)f_7990},
{"f_6396:optimizer_2escm",(void*)f_6396},
{"f_3819:optimizer_2escm",(void*)f_3819},
{"f_12354:optimizer_2escm",(void*)f_12354},
{"f_12350:optimizer_2escm",(void*)f_12350},
{"f_6383:optimizer_2escm",(void*)f_6383},
{"f_6389:optimizer_2escm",(void*)f_6389},
{"f_8442:optimizer_2escm",(void*)f_8442},
{"f_3809:optimizer_2escm",(void*)f_3809},
{"f_10444:optimizer_2escm",(void*)f_10444},
{"f_5630:optimizer_2escm",(void*)f_5630},
{"f_10055:optimizer_2escm",(void*)f_10055},
{"f_8451:optimizer_2escm",(void*)f_8451},
{"f_5649:optimizer_2escm",(void*)f_5649},
{"f_10433:optimizer_2escm",(void*)f_10433},
{"f_5641:optimizer_2escm",(void*)f_5641},
{"f_10439:optimizer_2escm",(void*)f_10439},
{"f_7750:optimizer_2escm",(void*)f_7750},
{"f_6893:optimizer_2escm",(void*)f_6893},
{"f_12861:optimizer_2escm",(void*)f_12861},
{"f_8721:optimizer_2escm",(void*)f_8721},
{"f_4449:optimizer_2escm",(void*)f_4449},
{"f_9026:optimizer_2escm",(void*)f_9026},
{"f_8725:optimizer_2escm",(void*)f_8725},
{"f_9022:optimizer_2escm",(void*)f_9022},
{"f_5546:optimizer_2escm",(void*)f_5546},
{"f_5549:optimizer_2escm",(void*)f_5549},
{"f_5177:optimizer_2escm",(void*)f_5177},
{"f_10067:optimizer_2escm",(void*)f_10067},
{"f_10061:optimizer_2escm",(void*)f_10061},
{"f_5180:optimizer_2escm",(void*)f_5180},
{"f_10403:optimizer_2escm",(void*)f_10403},
{"f_12282:optimizer_2escm",(void*)f_12282},
{"f_12255:optimizer_2escm",(void*)f_12255},
{"f_7715:optimizer_2escm",(void*)f_7715},
{"f_12270:optimizer_2escm",(void*)f_12270},
{"f_5160:optimizer_2escm",(void*)f_5160},
{"f_12288:optimizer_2escm",(void*)f_12288},
{"f_7724:optimizer_2escm",(void*)f_7724},
{"f_6887:optimizer_2escm",(void*)f_6887},
{"f_6885:optimizer_2escm",(void*)f_6885},
{"f_12278:optimizer_2escm",(void*)f_12278},
{"f_8561:optimizer_2escm",(void*)f_8561},
{"f_8565:optimizer_2escm",(void*)f_8565},
{"f_7729:optimizer_2escm",(void*)f_7729},
{"f_6870:optimizer_2escm",(void*)f_6870},
{"f_6872:optimizer_2escm",(void*)f_6872},
{"f_5759:optimizer_2escm",(void*)f_5759},
{"f_8535:optimizer_2escm",(void*)f_8535},
{"f_5753:optimizer_2escm",(void*)f_5753},
{"f_9243:optimizer_2escm",(void*)f_9243},
{"f_6335:optimizer_2escm",(void*)f_6335},
{"f_6331:optimizer_2escm",(void*)f_6331},
{"f_12814:optimizer_2escm",(void*)f_12814},
{"f_8545:optimizer_2escm",(void*)f_8545},
{"f_6324:optimizer_2escm",(void*)f_6324},
{"f_6320:optimizer_2escm",(void*)f_6320},
{"f_12406:optimizer_2escm",(void*)f_12406},
{"f_7771:optimizer_2escm",(void*)f_7771},
{"f_12408:optimizer_2escm",(void*)f_12408},
{"f_6352:optimizer_2escm",(void*)f_6352},
{"f_6358:optimizer_2escm",(void*)f_6358},
{"f_10491:optimizer_2escm",(void*)f_10491},
{"f_9219:optimizer_2escm",(void*)f_9219},
{"f_12179:optimizer_2escm",(void*)f_12179},
{"f_5291:optimizer_2escm",(void*)f_5291},
{"f_10486:optimizer_2escm",(void*)f_10486},
{"f_12473:optimizer_2escm",(void*)f_12473},
{"f_12475:optimizer_2escm",(void*)f_12475},
{"f_5603:optimizer_2escm",(void*)f_5603},
{"f_5605:optimizer_2escm",(void*)f_5605},
{"f_5762:optimizer_2escm",(void*)f_5762},
{"f_12201:optimizer_2escm",(void*)f_12201},
{"f_9252:optimizer_2escm",(void*)f_9252},
{"f_12183:optimizer_2escm",(void*)f_12183},
{"f_12187:optimizer_2escm",(void*)f_12187},
{"f_5744:optimizer_2escm",(void*)f_5744},
{"f_5740:optimizer_2escm",(void*)f_5740},
{"f_11619:optimizer_2escm",(void*)f_11619},
{"f_11632:optimizer_2escm",(void*)f_11632},
{"f_11640:optimizer_2escm",(void*)f_11640},
{"f_5034:optimizer_2escm",(void*)f_5034},
{"f_12247:optimizer_2escm",(void*)f_12247},
{"f_9149:optimizer_2escm",(void*)f_9149},
{"f_6844:optimizer_2escm",(void*)f_6844},
{"f_7287:optimizer_2escm",(void*)f_7287},
{"f_11647:optimizer_2escm",(void*)f_11647},
{"f_7264:optimizer_2escm",(void*)f_7264},
{"f_6834:optimizer_2escm",(void*)f_6834},
{"f_7277:optimizer_2escm",(void*)f_7277},
{"f_5718:optimizer_2escm",(void*)f_5718},
{"f_9116:optimizer_2escm",(void*)f_9116},
{"f_10223:optimizer_2escm",(void*)f_10223},
{"f_10220:optimizer_2escm",(void*)f_10220},
{"f_12444:optimizer_2escm",(void*)f_12444},
{"f_10902:optimizer_2escm",(void*)f_10902},
{"f_11014:optimizer_2escm",(void*)f_11014},
{"f_12450:optimizer_2escm",(void*)f_12450},
{"f_10201:optimizer_2escm",(void*)f_10201},
{"f_6823:optimizer_2escm",(void*)f_6823},
{"f_11032:optimizer_2escm",(void*)f_11032},
{"f_5150:optimizer_2escm",(void*)f_5150},
{"f_11001:optimizer_2escm",(void*)f_11001},
{"f_5135:optimizer_2escm",(void*)f_5135},
{"f_3749:optimizer_2escm",(void*)f_3749},
{"f_6867:optimizer_2escm",(void*)f_6867},
{"f_6864:optimizer_2escm",(void*)f_6864},
{"f_10398:optimizer_2escm",(void*)f_10398},
{"f_10392:optimizer_2escm",(void*)f_10392},
{"f_3767:optimizer_2escm",(void*)f_3767},
{"f_3760:optimizer_2escm",(void*)f_3760},
{"f_6857:optimizer_2escm",(void*)f_6857},
{"f_7844:optimizer_2escm",(void*)f_7844},
{"f_3757:optimizer_2escm",(void*)f_3757},
{"f_3755:optimizer_2escm",(void*)f_3755},
{"f_3752:optimizer_2escm",(void*)f_3752},
{"f_5128:optimizer_2escm",(void*)f_5128},
{"f_6807:optimizer_2escm",(void*)f_6807},
{"f_11418:optimizer_2escm",(void*)f_11418},
{"f_7836:optimizer_2escm",(void*)f_7836},
{"f_12191:optimizer_2escm",(void*)f_12191},
{"f_13118:optimizer_2escm",(void*)f_13118},
{"f_12199:optimizer_2escm",(void*)f_12199},
{"f_11426:optimizer_2escm",(void*)f_11426},
{"f_13128:optimizer_2escm",(void*)f_13128},
{"f_11420:optimizer_2escm",(void*)f_11420},
{"f_4636:optimizer_2escm",(void*)f_4636},
{"f_13126:optimizer_2escm",(void*)f_13126},
{"f_5888:optimizer_2escm",(void*)f_5888},
{"f_11437:optimizer_2escm",(void*)f_11437},
{"f_5891:optimizer_2escm",(void*)f_5891},
{"f_5898:optimizer_2escm",(void*)f_5898},
{"f_4659:optimizer_2escm",(void*)f_4659},
{"f_4672:optimizer_2escm",(void*)f_4672},
{"f_5277:optimizer_2escm",(void*)f_5277},
{"f_5274:optimizer_2escm",(void*)f_5274},
{"f_5288:optimizer_2escm",(void*)f_5288},
{"f_6312:optimizer_2escm",(void*)f_6312},
{"f_5281:optimizer_2escm",(void*)f_5281},
{"f_12045:optimizer_2escm",(void*)f_12045},
{"f_7816:optimizer_2escm",(void*)f_7816},
{"f_4669:optimizer_2escm",(void*)f_4669},
{"f_10025:optimizer_2escm",(void*)f_10025},
{"f_5252:optimizer_2escm",(void*)f_5252},
{"f_5253:optimizer_2escm",(void*)f_5253},
{"f_4694:optimizer_2escm",(void*)f_4694},
{"f_5269:optimizer_2escm",(void*)f_5269},
{"f_5266:optimizer_2escm",(void*)f_5266},
{"f_5263:optimizer_2escm",(void*)f_5263},
{"f_12020:optimizer_2escm",(void*)f_12020},
{"f_12002:optimizer_2escm",(void*)f_12002},
{"f_5014:optimizer_2escm",(void*)f_5014},
{"f_11443:optimizer_2escm",(void*)f_11443},
{"f_11448:optimizer_2escm",(void*)f_11448},
{"f_12010:optimizer_2escm",(void*)f_12010},
{"f_11446:optimizer_2escm",(void*)f_11446},
{"f_11451:optimizer_2escm",(void*)f_11451},
{"f_4610:optimizer_2escm",(void*)f_4610},
{"f_11344:optimizer_2escm",(void*)f_11344},
{"f_8284:optimizer_2escm",(void*)f_8284},
{"f_8286:optimizer_2escm",(void*)f_8286},
{"f_6590:optimizer_2escm",(void*)f_6590},
{"f_6599:optimizer_2escm",(void*)f_6599},
{"f_4604:optimizer_2escm",(void*)f_4604},
{"f_6593:optimizer_2escm",(void*)f_6593},
{"f_11315:optimizer_2escm",(void*)f_11315},
{"f_4616:optimizer_2escm",(void*)f_4616},
{"f_11325:optimizer_2escm",(void*)f_11325},
{"f_11303:optimizer_2escm",(void*)f_11303},
{"f_8871:optimizer_2escm",(void*)f_8871},
{"f_5114:optimizer_2escm",(void*)f_5114},
{"f_5118:optimizer_2escm",(void*)f_5118},
{"f_4200:optimizer_2escm",(void*)f_4200},
{"f_6572:optimizer_2escm",(void*)f_6572},
{"f_6571:optimizer_2escm",(void*)f_6571},
{"f_5111:optimizer_2escm",(void*)f_5111},
{"f_8897:optimizer_2escm",(void*)f_8897},
{"f_8893:optimizer_2escm",(void*)f_8893},
{"f_8215:optimizer_2escm",(void*)f_8215},
{"f_8209:optimizer_2escm",(void*)f_8209},
{"f_8218:optimizer_2escm",(void*)f_8218},
{"f_9885:optimizer_2escm",(void*)f_9885},
{"f_9889:optimizer_2escm",(void*)f_9889},
{"f_8229:optimizer_2escm",(void*)f_8229},
{"f_11994:optimizer_2escm",(void*)f_11994},
{"f_11998:optimizer_2escm",(void*)f_11998},
{"f_11990:optimizer_2escm",(void*)f_11990},
{"f_8243:optimizer_2escm",(void*)f_8243},
{"f_8238:optimizer_2escm",(void*)f_8238},
{"f_5698:optimizer_2escm",(void*)f_5698},
{"f_4230:optimizer_2escm",(void*)f_4230},
{"f_10887:optimizer_2escm",(void*)f_10887},
{"f_4248:optimizer_2escm",(void*)f_4248},
{"f_6167:optimizer_2escm",(void*)f_6167},
{"f_4238:optimizer_2escm",(void*)f_4238},
{"f_6190:optimizer_2escm",(void*)f_6190},
{"f_6184:optimizer_2escm",(void*)f_6184},
{"f_10892:optimizer_2escm",(void*)f_10892},
{"f_4075:optimizer_2escm",(void*)f_4075},
{"f_4072:optimizer_2escm",(void*)f_4072},
{"f_4078:optimizer_2escm",(void*)f_4078},
{"f_10847:optimizer_2escm",(void*)f_10847},
{"f_10844:optimizer_2escm",(void*)f_10844},
{"f_4223:optimizer_2escm",(void*)f_4223},
{"f_4227:optimizer_2escm",(void*)f_4227},
{"f_11906:optimizer_2escm",(void*)f_11906},
{"f_10650:optimizer_2escm",(void*)f_10650},
{"f_5919:optimizer_2escm",(void*)f_5919},
{"f_9774:optimizer_2escm",(void*)f_9774},
{"f_7573:optimizer_2escm",(void*)f_7573},
{"f_5925:optimizer_2escm",(void*)f_5925},
{"f_5087:optimizer_2escm",(void*)f_5087},
{"f_5231:optimizer_2escm",(void*)f_5231},
{"f_7942:optimizer_2escm",(void*)f_7942},
{"f_10637:optimizer_2escm",(void*)f_10637},
{"f_5097:optimizer_2escm",(void*)f_5097},
{"f_5249:optimizer_2escm",(void*)f_5249},
{"f_5090:optimizer_2escm",(void*)f_5090},
{"f_5493:optimizer_2escm",(void*)f_5493},
{"f_10626:optimizer_2escm",(void*)f_10626},
{"f_5215:optimizer_2escm",(void*)f_5215},
{"f_5900:optimizer_2escm",(void*)f_5900},
{"f_6557:optimizer_2escm",(void*)f_6557},
{"f_6551:optimizer_2escm",(void*)f_6551},
{"f_10915:optimizer_2escm",(void*)f_10915},
{"f_6554:optimizer_2escm",(void*)f_6554},
{"f_5959:optimizer_2escm",(void*)f_5959},
{"f_5479:optimizer_2escm",(void*)f_5479},
{"f_5475:optimizer_2escm",(void*)f_5475},
{"f_6540:optimizer_2escm",(void*)f_6540},
{"f_6544:optimizer_2escm",(void*)f_6544},
{"f_5685:optimizer_2escm",(void*)f_5685},
{"f_10683:optimizer_2escm",(void*)f_10683},
{"f_12913:optimizer_2escm",(void*)f_12913},
{"f_9333:optimizer_2escm",(void*)f_9333},
{"f_9331:optimizer_2escm",(void*)f_9331},
{"f_6518:optimizer_2escm",(void*)f_6518},
{"f_10827:optimizer_2escm",(void*)f_10827},
{"f_10824:optimizer_2escm",(void*)f_10824},
{"f_12903:optimizer_2escm",(void*)f_12903},
{"f_6508:optimizer_2escm",(void*)f_6508},
{"f_9278:optimizer_2escm",(void*)f_9278},
{"f_7044:optimizer_2escm",(void*)f_7044},
{"f_6537:optimizer_2escm",(void*)f_6537},
{"f_11847:optimizer_2escm",(void*)f_11847},
{"f_11842:optimizer_2escm",(void*)f_11842},
{"f_7010:optimizer_2escm",(void*)f_7010},
{"f_7018:optimizer_2escm",(void*)f_7018},
{"f_5391:optimizer_2escm",(void*)f_5391},
{"f_7033:optimizer_2escm",(void*)f_7033},
{"f_10991:optimizer_2escm",(void*)f_10991},
{"f_11354:optimizer_2escm",(void*)f_11354},
{"f_10696:optimizer_2escm",(void*)f_10696},
{"f_10692:optimizer_2escm",(void*)f_10692},
{"f_11949:optimizer_2escm",(void*)f_11949},
{"f_10690:optimizer_2escm",(void*)f_10690},
{"f_11946:optimizer_2escm",(void*)f_11946},
{"f_11943:optimizer_2escm",(void*)f_11943},
{"f_11940:optimizer_2escm",(void*)f_11940},
{"f_9912:optimizer_2escm",(void*)f_9912},
{"f_7002:optimizer_2escm",(void*)f_7002},
{"f_7003:optimizer_2escm",(void*)f_7003},
{"f_9359:optimizer_2escm",(void*)f_9359},
{"f_7883:optimizer_2escm",(void*)f_7883},
{"f_11958:optimizer_2escm",(void*)f_11958},
{"f_11957:optimizer_2escm",(void*)f_11957},
{"f_11952:optimizer_2escm",(void*)f_11952},
{"f_11953:optimizer_2escm",(void*)f_11953},
{"f_9435:optimizer_2escm",(void*)f_9435},
{"f_8818:optimizer_2escm",(void*)f_8818},
{"f_11937:optimizer_2escm",(void*)f_11937},
{"f_6158:optimizer_2escm",(void*)f_6158},
{"f_10593:optimizer_2escm",(void*)f_10593},
{"f_12509:optimizer_2escm",(void*)f_12509},
{"f_4888:optimizer_2escm",(void*)f_4888},
{"f_4883:optimizer_2escm",(void*)f_4883},
{"f_6141:optimizer_2escm",(void*)f_6141},
{"f_6147:optimizer_2escm",(void*)f_6147},
{"f_12342:optimizer_2escm",(void*)f_12342},
{"f_12566:optimizer_2escm",(void*)f_12566},
{"f_12318:optimizer_2escm",(void*)f_12318},
{"f_8373:optimizer_2escm",(void*)f_8373},
{"f_12322:optimizer_2escm",(void*)f_12322},
{"f_4894:optimizer_2escm",(void*)f_4894},
{"f_6110:optimizer_2escm",(void*)f_6110},
{"f_7370:optimizer_2escm",(void*)f_7370},
{"f_7364:optimizer_2escm",(void*)f_7364},
{"f_7366:optimizer_2escm",(void*)f_7366},
{"f_12534:optimizer_2escm",(void*)f_12534},
{"f_7643:optimizer_2escm",(void*)f_7643},
{"f_9654:optimizer_2escm",(void*)f_9654},
{"f_9609:optimizer_2escm",(void*)f_9609},
{"f_9607:optimizer_2escm",(void*)f_9607},
{"f_4802:optimizer_2escm",(void*)f_4802},
{"f_12595:optimizer_2escm",(void*)f_12595},
{"f_4792:optimizer_2escm",(void*)f_4792},
{"f_12547:optimizer_2escm",(void*)f_12547},
{"f_4468:optimizer_2escm",(void*)f_4468},
{"f_12556:optimizer_2escm",(void*)f_12556},
{"f_4458:optimizer_2escm",(void*)f_4458},
{"f_9534:optimizer_2escm",(void*)f_9534},
{"f_9537:optimizer_2escm",(void*)f_9537},
{"f_13392:optimizer_2escm",(void*)f_13392},
{"f_11742:optimizer_2escm",(void*)f_11742},
{"f_3993:optimizer_2escm",(void*)f_3993},
{"f_3996:optimizer_2escm",(void*)f_3996},
{"f_3999:optimizer_2escm",(void*)f_3999},
{"f_4867:optimizer_2escm",(void*)f_4867},
{"f_11751:optimizer_2escm",(void*)f_11751},
{"f_7399:optimizer_2escm",(void*)f_7399},
{"f_5455:optimizer_2escm",(void*)f_5455},
{"f_4860:optimizer_2escm",(void*)f_4860},
{"f_4479:optimizer_2escm",(void*)f_4479},
{"f_4472:optimizer_2escm",(void*)f_4472},
{"f_7380:optimizer_2escm",(void*)f_7380},
{"f_11725:optimizer_2escm",(void*)f_11725},
{"f_7389:optimizer_2escm",(void*)f_7389},
{"f_7386:optimizer_2escm",(void*)f_7386},
{"f_8082:optimizer_2escm",(void*)f_8082},
{"f_11732:optimizer_2escm",(void*)f_11732},
{"f_4725:optimizer_2escm",(void*)f_4725},
{"f_4728:optimizer_2escm",(void*)f_4728},
{"f_7449:optimizer_2escm",(void*)f_7449},
{"f_11719:optimizer_2escm",(void*)f_11719},
{"f_9563:optimizer_2escm",(void*)f_9563},
{"f_4745:optimizer_2escm",(void*)f_4745},
{"f_13305:optimizer_2escm",(void*)f_13305},
{"f_13301:optimizer_2escm",(void*)f_13301},
{"f_4565:optimizer_2escm",(void*)f_4565},
{"f_4562:optimizer_2escm",(void*)f_4562},
{"f_13318:optimizer_2escm",(void*)f_13318},
{"f_4558:optimizer_2escm",(void*)f_4558},
{"f_4554:optimizer_2escm",(void*)f_4554},
{"f_4767:optimizer_2escm",(void*)f_4767},
{"f_4765:optimizer_2escm",(void*)f_4765},
{"f_4550:optimizer_2escm",(void*)f_4550},
{"f_4002:optimizer_2escm",(void*)f_4002},
{"f_5378:optimizer_2escm",(void*)f_5378},
{"f_4758:optimizer_2escm",(void*)f_4758},
{"f_9528:optimizer_2escm",(void*)f_9528},
{"f_9522:optimizer_2escm",(void*)f_9522},
{"f_5388:optimizer_2escm",(void*)f_5388},
{"f_7414:optimizer_2escm",(void*)f_7414},
{"f_4570:optimizer_2escm",(void*)f_4570},
{"f_4014:optimizer_2escm",(void*)f_4014},
{"f_4017:optimizer_2escm",(void*)f_4017},
{"f_5361:optimizer_2escm",(void*)f_5361},
{"f_10163:optimizer_2escm",(void*)f_10163},
{"f_11799:optimizer_2escm",(void*)f_11799},
{"f_11796:optimizer_2escm",(void*)f_11796},
{"f_11763:optimizer_2escm",(void*)f_11763},
{"f_12108:optimizer_2escm",(void*)f_12108},
{"f_10179:optimizer_2escm",(void*)f_10179},
{"f_11773:optimizer_2escm",(void*)f_11773},
{"f_8691:optimizer_2escm",(void*)f_8691},
{"f_10191:optimizer_2escm",(void*)f_10191},
{"f_8339:optimizer_2escm",(void*)f_8339},
{"toplevel:optimizer_2escm",(void*)C_optimizer_toplevel},
{"f_8348:optimizer_2escm",(void*)f_8348},
{"f_11511:optimizer_2escm",(void*)f_11511},
{"f_8183:optimizer_2escm",(void*)f_8183},
{"f_11571:optimizer_2escm",(void*)f_11571},
{"f_7065:optimizer_2escm",(void*)f_7065},
{"f_7068:optimizer_2escm",(void*)f_7068},
{"f_7062:optimizer_2escm",(void*)f_7062},
{"f_13439:optimizer_2escm",(void*)f_13439},
{"f_7098:optimizer_2escm",(void*)f_7098},
{"f_13405:optimizer_2escm",(void*)f_13405},
{"f_13411:optimizer_2escm",(void*)f_13411},
{"f_7077:optimizer_2escm",(void*)f_7077},
{"f_5401:optimizer_2escm",(void*)f_5401},
{"f_6067:optimizer_2escm",(void*)f_6067},
{"f_8157:optimizer_2escm",(void*)f_8157},
{"f_6480:optimizer_2escm",(void*)f_6480},
{"f_4507:optimizer_2escm",(void*)f_4507},
{"f_11588:optimizer_2escm",(void*)f_11588},
{"f_8123:optimizer_2escm",(void*)f_8123},
{"f_6475:optimizer_2escm",(void*)f_6475},
{"f_6471:optimizer_2escm",(void*)f_6471},
{"f_7050:optimizer_2escm",(void*)f_7050},
{"f_6085:optimizer_2escm",(void*)f_6085},
{"f_6083:optimizer_2escm",(void*)f_6083},
{"f_7085:optimizer_2escm",(void*)f_7085},
{"f_10763:optimizer_2escm",(void*)f_10763},
{"f_11881:optimizer_2escm",(void*)f_11881},
{"f_8314:optimizer_2escm",(void*)f_8314},
{"f_6076:optimizer_2escm",(void*)f_6076},
{"f_4513:optimizer_2escm",(void*)f_4513},
{"f_10711:optimizer_2escm",(void*)f_10711},
{"f_5443:optimizer_2escm",(void*)f_5443},
{"f_11858:optimizer_2escm",(void*)f_11858},
{"f_4296:optimizer_2escm",(void*)f_4296},
{"f_5437:optimizer_2escm",(void*)f_5437},
{"f_8115:optimizer_2escm",(void*)f_8115},
{"f_10376:optimizer_2escm",(void*)f_10376},
{"f_7205:optimizer_2escm",(void*)f_7205},
{"f_5449:optimizer_2escm",(void*)f_5449},
{"f_10733:optimizer_2escm",(void*)f_10733},
{"f_10736:optimizer_2escm",(void*)f_10736},
{"f_10737:optimizer_2escm",(void*)f_10737},
{"f_11557:optimizer_2escm",(void*)f_11557},
{"f_10724:optimizer_2escm",(void*)f_10724},
{"f_10720:optimizer_2escm",(void*)f_10720},
{"f_10727:optimizer_2escm",(void*)f_10727},
{"f_5426:optimizer_2escm",(void*)f_5426},
{"f_11815:optimizer_2escm",(void*)f_11815},
{"f_13465:optimizer_2escm",(void*)f_13465},
{"f_11811:optimizer_2escm",(void*)f_11811},
{"f_4182:optimizer_2escm",(void*)f_4182},
{"f_4186:optimizer_2escm",(void*)f_4186},
{"f_6988:optimizer_2escm",(void*)f_6988},
{"f_13447:optimizer_2escm",(void*)f_13447},
{"f_13443:optimizer_2escm",(void*)f_13443},
{"f_6423:optimizer_2escm",(void*)f_6423},
{"f_6427:optimizer_2escm",(void*)f_6427},
{"f_11808:optimizer_2escm",(void*)f_11808},
{"f_13456:optimizer_2escm",(void*)f_13456},
{"f_11800:optimizer_2escm",(void*)f_11800},
{"f_6417:optimizer_2escm",(void*)f_6417},
{"f_6442:optimizer_2escm",(void*)f_6442},
{"f_4390:optimizer_2escm",(void*)f_4390},
{"f_8661:optimizer_2escm",(void*)f_8661},
{"f_5347:optimizer_2escm",(void*)f_5347},
{"f_8657:optimizer_2escm",(void*)f_8657},
{"f_6433:optimizer_2escm",(void*)f_6433},
{"f_6436:optimizer_2escm",(void*)f_6436},
{"f_6430:optimizer_2escm",(void*)f_6430},
{"f_12075:optimizer_2escm",(void*)f_12075},
{"f_6439:optimizer_2escm",(void*)f_6439},
{"f_5593:optimizer_2escm",(void*)f_5593},
{"f_5312:optimizer_2escm",(void*)f_5312},
{"f_8601:optimizer_2escm",(void*)f_8601},
{"f_12098:optimizer_2escm",(void*)f_12098},
{"f_5322:optimizer_2escm",(void*)f_5322},
{"f_13017:optimizer_2escm",(void*)f_13017},
{"f_9199:optimizer_2escm",(void*)f_9199},
{"f_12085:optimizer_2escm",(void*)f_12085},
{"f_10120:optimizer_2escm",(void*)f_10120},
{"f_9865:optimizer_2escm",(void*)f_9865},
{"f_3783:optimizer_2escm",(void*)f_3783},
{"f_3788:optimizer_2escm",(void*)f_3788},
{"f_9859:optimizer_2escm",(void*)f_9859},
{"f_6939:optimizer_2escm",(void*)f_6939},
{"f_9851:optimizer_2escm",(void*)f_9851},
{"f_6930:optimizer_2escm",(void*)f_6930},
{"f_12055:optimizer_2escm",(void*)f_12055},
{"f_3790:optimizer_2escm",(void*)f_3790},
{"f_10137:optimizer_2escm",(void*)f_10137},
{"f_3797:optimizer_2escm",(void*)f_3797},
{"f_3795:optimizer_2escm",(void*)f_3795},
{"f_10858:optimizer_2escm",(void*)f_10858},
{"f_10850:optimizer_2escm",(void*)f_10850},
{"f_4152:optimizer_2escm",(void*)f_4152},
{"f_4143:optimizer_2escm",(void*)f_4143},
{"f_4146:optimizer_2escm",(void*)f_4146},
{"f_4140:optimizer_2escm",(void*)f_4140},
{"f_12751:optimizer_2escm",(void*)f_12751},
{"f_6293:optimizer_2escm",(void*)f_6293},
{"f_11147:optimizer_2escm",(void*)f_11147},
{"f_6283:optimizer_2escm",(void*)f_6283},
{"f_11255:optimizer_2escm",(void*)f_11255},
{"f_12731:optimizer_2escm",(void*)f_12731},
{"f_11252:optimizer_2escm",(void*)f_11252},
{"f_13297:optimizer_2escm",(void*)f_13297},
{"f_4136:optimizer_2escm",(void*)f_4136},
{"f_4994:optimizer_2escm",(void*)f_4994},
{"f_6022:optimizer_2escm",(void*)f_6022},
{"f_12617:optimizer_2escm",(void*)f_12617},
{"f_4987:optimizer_2escm",(void*)f_4987},
{"f_11113:optimizer_2escm",(void*)f_11113},
{"f_6953:optimizer_2escm",(void*)f_6953},
{"f_11110:optimizer_2escm",(void*)f_11110},
{"f_11116:optimizer_2escm",(void*)f_11116},
{"f_4982:optimizer_2escm",(void*)f_4982},
{"f_6016:optimizer_2escm",(void*)f_6016},
{"f_6943:optimizer_2escm",(void*)f_6943},
{"f_6942:optimizer_2escm",(void*)f_6942},
{"f_13563:optimizer_2escm",(void*)f_13563},
{"f_6975:optimizer_2escm",(void*)f_6975},
{"f_9810:optimizer_2escm",(void*)f_9810},
{"f_13571:optimizer_2escm",(void*)f_13571},
{"f_13576:optimizer_2escm",(void*)f_13576},
{"f_6032:optimizer_2escm",(void*)f_6032},
{"f_6631:optimizer_2escm",(void*)f_6631},
{"f_9845:optimizer_2escm",(void*)f_9845},
{"f_9843:optimizer_2escm",(void*)f_9843},
{"f_6969:optimizer_2escm",(void*)f_6969},
{"f_6961:optimizer_2escm",(void*)f_6961},
{"f_13586:optimizer_2escm",(void*)f_13586},
{"f_4254:optimizer_2escm",(void*)f_4254},
{"f_12653:optimizer_2escm",(void*)f_12653},
{"f_12655:optimizer_2escm",(void*)f_12655},
{"f_6668:optimizer_2escm",(void*)f_6668},
{"f_7314:optimizer_2escm",(void*)f_7314},
{"f_9835:optimizer_2escm",(void*)f_9835},
{"f_9839:optimizer_2escm",(void*)f_9839},
{"f_6917:optimizer_2escm",(void*)f_6917},
{"f_13590:optimizer_2escm",(void*)f_13590},
{"f_6650:optimizer_2escm",(void*)f_6650},
{"f_6653:optimizer_2escm",(void*)f_6653},
{"f_4963:optimizer_2escm",(void*)f_4963},
{"f_4960:optimizer_2escm",(void*)f_4960},
{"f_3922:optimizer_2escm",(void*)f_3922},
{"f_12681:optimizer_2escm",(void*)f_12681},
{"f_12689:optimizer_2escm",(void*)f_12689},
{"f_5999:optimizer_2escm",(void*)f_5999},
{"f_4913:optimizer_2escm",(void*)f_4913},
{"f_3956:optimizer_2escm",(void*)f_3956},
{"f_12693:optimizer_2escm",(void*)f_12693},
{"f_3952:optimizer_2escm",(void*)f_3952},
{"f_6625:optimizer_2escm",(void*)f_6625},
{"f_12697:optimizer_2escm",(void*)f_12697},
{"f_13275:optimizer_2escm",(void*)f_13275},
{"f_4900:optimizer_2escm",(void*)f_4900},
{"f_3945:optimizer_2escm",(void*)f_3945},
{"f_4906:optimizer_2escm",(void*)f_4906},
{"f_9726:optimizer_2escm",(void*)f_9726},
{"f_6619:optimizer_2escm",(void*)f_6619},
{"f_8774:optimizer_2escm",(void*)f_8774},
{"f_4933:optimizer_2escm",(void*)f_4933},
{"f_6647:optimizer_2escm",(void*)f_6647},
{"f_6640:optimizer_2escm",(void*)f_6640},
{"f_5986:optimizer_2escm",(void*)f_5986},
{"f_3960:optimizer_2escm",(void*)f_3960},
{"f_13262:optimizer_2escm",(void*)f_13262},
{"f_5572:optimizer_2escm",(void*)f_5572},
{"f_4953:optimizer_2escm",(void*)f_4953},
{"f_10342:optimizer_2escm",(void*)f_10342},
{"f_7231:optimizer_2escm",(void*)f_7231},
{"f_3886:optimizer_2escm",(void*)f_3886},
{"f_4357:optimizer_2escm",(void*)f_4357},
{"f_5588:optimizer_2escm",(void*)f_5588},
{"f_7241:optimizer_2escm",(void*)f_7241},
{"f_13075:optimizer_2escm",(void*)f_13075},
{"f_4371:optimizer_2escm",(void*)f_4371},
{"f_7254:optimizer_2escm",(void*)f_7254},
{"f_13044:optimizer_2escm",(void*)f_13044},
{"f_6227:optimizer_2escm",(void*)f_6227},
{"f_5566:optimizer_2escm",(void*)f_5566},
{"f_5561:optimizer_2escm",(void*)f_5561},
{"f_6259:optimizer_2escm",(void*)f_6259},
{"f_10305:optimizer_2escm",(void*)f_10305},
{"f_7487:optimizer_2escm",(void*)f_7487},
{"f_6241:optimizer_2escm",(void*)f_6241},
{"f_6242:optimizer_2escm",(void*)f_6242},
{"f_7484:optimizer_2escm",(void*)f_7484},
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
S|  o		1
S|  map		12
S|  for-each		20
o|eliminated procedure checks: 295 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|specializations:
o|  1 (> fixnum fixnum)
o|  1 (set-car! pair *)
o|  2 (cddr (pair * pair))
o|  1 (length list)
o|  1 (##sys#call-with-values (procedure () *) *)
o|  1 (<= fixnum fixnum)
o|  1 (positive? fixnum)
o|  3 (third (pair * (pair * pair)))
o|  1 (fourth (pair * (pair * (pair * pair))))
o|  1 (eqv? (not float) *)
o|  1 (< fixnum fixnum)
o|  7 (second (pair * pair))
o|  1 (cdar (pair pair *))
o|  17 (= fixnum fixnum)
o|  2 (set-cdr! pair *)
o|  30 (cdr pair)
o|  13 (##sys#check-list (or pair list) *)
o|  16 (car pair)
o|  32 (first pair)
o|  63 (eqv? * (not float))
(o e)|safe calls: 1368 
(o e)|assignments to immediate values: 8 
o|safe globals: (##compiler#scan-toplevel-assignments) 
o|Removed `not' forms: 30 
o|inlining procedure: k3762 
o|inlining procedure: k3762 
o|contracted procedure: k3772 
o|inlining procedure: k3811 
o|inlining procedure: k3811 
o|inlining procedure: k3858 
o|contracted procedure: k3891 
o|inlining procedure: k3858 
o|inlining procedure: k3937 
o|inlining procedure: k3937 
o|inlining procedure: k3970 
o|inlining procedure: k3970 
o|inlining procedure: k4000 
o|inlining procedure: k4000 
o|contracted procedure: "(optimizer.scm:101) g99100" 
o|substituted constant variable: a4041 
o|substituted constant variable: a4043 
o|substituted constant variable: a4048 
o|substituted constant variable: a4050 
o|substituted constant variable: a4052 
o|inlining procedure: k4056 
o|inlining procedure: k4056 
o|substituted constant variable: a4063 
o|substituted constant variable: a4065 
o|substituted constant variable: a4067 
o|substituted constant variable: a4069 
o|contracted procedure: "(optimizer.scm:65) g7475" 
o|contracted procedure: "(optimizer.scm:64) g6566" 
o|contracted procedure: "(optimizer.scm:63) g6263" 
o|inlining procedure: k4107 
o|contracted procedure: "(optimizer.scm:112) g111118" 
o|contracted procedure: "(optimizer.scm:112) g126127" 
o|inlining procedure: k4107 
o|contracted procedure: "(optimizer.scm:143) g177178" 
o|inlining procedure: k4202 
o|contracted procedure: "(optimizer.scm:134) g188195" 
o|inlining procedure: k4202 
o|inlining procedure: k4231 
o|inlining procedure: k4231 
o|inlining procedure: k4243 
o|inlining procedure: k4255 
o|inlining procedure: k4255 
o|inlining procedure: k4314 
o|inlining procedure: k4314 
o|inlining procedure: k4243 
o|contracted procedure: "(optimizer.scm:151) g215216" 
o|inlining procedure: k4359 
o|inlining procedure: k4359 
o|inlining procedure: k4388 
o|inlining procedure: k4411 
o|inlining procedure: k4411 
o|contracted procedure: "(optimizer.scm:180) node-value166" 
o|contracted procedure: "(optimizer.scm:144) g181182" 
o|inlining procedure: k4388 
o|inlining procedure: k4435 
o|contracted procedure: k4463 
o|inlining procedure: k4460 
o|contracted procedure: "(optimizer.scm:205) g300301" 
o|inlining procedure: k4460 
o|inlining procedure: k4508 
o|inlining procedure: k4508 
o|contracted procedure: "(optimizer.scm:189) g285286" 
o|contracted procedure: "(optimizer.scm:188) g281282" 
o|inlining procedure: k4435 
o|contracted procedure: "(optimizer.scm:187) g277278" 
o|substituted constant variable: a4546 
o|substituted constant variable: a4548 
o|contracted procedure: "(optimizer.scm:174) g268269" 
o|contracted procedure: "(optimizer.scm:173) g259260" 
o|inlining procedure: k4555 
o|inlining procedure: k4555 
o|inlining procedure: k4596 
o|contracted procedure: "(optimizer.scm:234) g345346" 
o|contracted procedure: k4640 
o|inlining procedure: k4637 
o|inlining procedure: k4664 
o|inlining procedure: k4664 
o|contracted procedure: "(optimizer.scm:243) g362363" 
o|inlining procedure: k4637 
o|inlining procedure: k4596 
o|inlining procedure: k4720 
o|inlining procedure: k4720 
o|contracted procedure: "(optimizer.scm:264) g389390" 
o|inlining procedure: k4769 
o|inlining procedure: k4769 
o|contracted procedure: "(optimizer.scm:261) g386387" 
o|contracted procedure: "(optimizer.scm:259) g383384" 
o|contracted procedure: "(optimizer.scm:258) g380381" 
o|inlining procedure: k4855 
o|inlining procedure: k4855 
o|inlining procedure: k4868 
o|contracted procedure: "(optimizer.scm:276) g440441" 
o|inlining procedure: k4977 
o|contracted procedure: "(optimizer.scm:292) g456457" 
o|inlining procedure: k4977 
o|inlining procedure: k4868 
o|inlining procedure: k5059 
o|propagated global variable: g517518 ##compiler#put! 
o|inlining procedure: k5092 
o|contracted procedure: "(optimizer.scm:329) g524525" 
o|inlining procedure: k5152 
o|inlining procedure: k5152 
o|contracted procedure: "(optimizer.scm:321) g495496" 
o|inlining procedure: k5092 
o|contracted procedure: "(optimizer.scm:349) g563564" 
o|contracted procedure: "(optimizer.scm:352) g568569" 
o|inlining procedure: k5210 
o|propagated global variable: g634635 ##compiler#put! 
o|inlining procedure: k5244 
o|contracted procedure: "(optimizer.scm:390) g646647" 
o|inlining procedure: k5314 
o|inlining procedure: k5314 
o|inlining procedure: k5244 
o|inlining procedure: k5348 
o|inlining procedure: k5348 
o|inlining procedure: k5363 
o|contracted procedure: "(optimizer.scm:406) g702703" 
o|inlining procedure: k5403 
o|inlining procedure: k5403 
o|inlining procedure: k5363 
o|inlining procedure: k5450 
o|contracted procedure: "(optimizer.scm:413) g709710" 
o|inlining procedure: k5450 
o|inlining procedure: k5541 
o|contracted procedure: "(optimizer.scm:431) g728729" 
o|inlining procedure: k5607 
o|inlining procedure: k5607 
o|inlining procedure: k5647 
o|inlining procedure: k5647 
o|contracted procedure: "(optimizer.scm:441) g760761" 
o|inlining procedure: k5541 
o|inlining procedure: k5693 
o|contracted procedure: k5702 
o|contracted procedure: k5708 
o|inlining procedure: k5705 
o|inlining procedure: k5705 
o|inlining procedure: k5725 
o|inlining procedure: k5725 
o|substituted constant variable: a5736 
o|contracted procedure: "(optimizer.scm:367) g609610" 
o|inlining procedure: k5693 
o|contracted procedure: "(optimizer.scm:362) g588589" 
o|contracted procedure: "(optimizer.scm:362) g591592" 
o|contracted procedure: "(optimizer.scm:356) g579580" 
o|inlining procedure: k5210 
o|contracted procedure: "(optimizer.scm:456) g789790" 
o|contracted procedure: "(optimizer.scm:454) g786787" 
o|inlining procedure: k5797 
o|contracted procedure: "(optimizer.scm:451) g780781" 
o|contracted procedure: "(optimizer.scm:451) g783784" 
o|inlining procedure: k5797 
o|contracted procedure: "(optimizer.scm:450) g777778" 
o|contracted procedure: "(optimizer.scm:354) g575576" 
o|inlining procedure: k5853 
o|inlining procedure: k5868 
o|inlining procedure: k5880 
o|propagated global variable: g561562 ##compiler#expression-has-side-effects? 
o|contracted procedure: k5910 
o|inlining procedure: k5907 
o|inlining procedure: k5907 
o|inlining procedure: k5880 
o|contracted procedure: "(optimizer.scm:338) g548549" 
o|contracted procedure: "(optimizer.scm:337) g544545" 
o|inlining procedure: k5868 
o|contracted procedure: k5950 
o|contracted procedure: "(optimizer.scm:334) g539540" 
o|inlining procedure: k5853 
o|contracted procedure: "(optimizer.scm:333) g535536" 
o|contracted procedure: "(optimizer.scm:332) g531532" 
o|contracted procedure: k5990 
o|inlining procedure: k5987 
o|inlining procedure: k5987 
o|contracted procedure: "(optimizer.scm:319) g491492" 
o|contracted procedure: k6017 
o|inlining procedure: k6023 
o|inlining procedure: k6023 
o|contracted procedure: "(optimizer.scm:310) g475476" 
o|inlining procedure: k6042 
o|contracted procedure: "(optimizer.scm:465) g796797" 
o|inlining procedure: k6087 
o|inlining procedure: k6087 
o|inlining procedure: k6042 
o|substituted constant variable: a6124 
o|substituted constant variable: a6126 
o|contracted procedure: "(optimizer.scm:306) g465466" 
o|inlining procedure: k5059 
o|inlining procedure: k6136 
o|contracted procedure: "(optimizer.scm:477) g841842" 
o|inlining procedure: k6136 
o|contracted procedure: "(optimizer.scm:480) g848849" 
o|inlining procedure: k6179 
o|contracted procedure: "(optimizer.scm:488) g860861" 
o|inlining procedure: k6179 
o|inlining procedure: k6219 
o|inlining procedure: k6219 
o|inlining procedure: k6244 
o|substituted constant variable: a6254 
o|inlining procedure: k6244 
o|inlining procedure: k6261 
o|substituted constant variable: a6271 
o|inlining procedure: k6261 
o|contracted procedure: "(optimizer.scm:490) g868869" 
o|contracted procedure: k6297 
o|inlining procedure: k6294 
o|inlining procedure: k6294 
o|contracted procedure: k6303 
o|substituted constant variable: a6340 
o|substituted constant variable: a6342 
o|substituted constant variable: a6344 
o|substituted constant variable: a6346 
o|substituted constant variable: a6348 
o|substituted constant variable: a6350 
o|contracted procedure: "(optimizer.scm:226) g330331" 
o|contracted procedure: "(optimizer.scm:225) g327328" 
o|contracted procedure: "(optimizer.scm:224) g324325" 
o|inlining procedure: k6360 
o|contracted procedure: "(optimizer.scm:511) g908909" 
o|inlining procedure: k6360 
o|inlining procedure: k6412 
o|inlining procedure: k6412 
o|inlining procedure: k6510 
o|contracted procedure: "(optimizer.scm:529) g921928" 
o|inlining procedure: k6481 
o|inlining procedure: k6481 
o|inlining procedure: k6510 
o|propagated global variable: g927929 ##compiler#simplified-ops 
o|inlining procedure: k6555 
o|inlining procedure: k6555 
o|inlining procedure: k6594 
o|inlining procedure: k6626 
o|contracted procedure: "(optimizer.scm:583) g10281029" 
o|contracted procedure: "(optimizer.scm:582) g10251026" 
o|contracted procedure: "(optimizer.scm:580) g10211022" 
o|inlining procedure: k6626 
o|inlining procedure: k6710 
o|contracted procedure: "(optimizer.scm:578) g10171018" 
o|inlining procedure: k6710 
o|substituted constant variable: a6728 
o|contracted procedure: "(optimizer.scm:572) g10091010" 
o|contracted procedure: "(optimizer.scm:571) g10051006" 
o|contracted procedure: "(optimizer.scm:570) g10011002" 
o|inlining procedure: k6594 
o|inlining procedure: k6761 
o|inlining procedure: k6770 
o|contracted procedure: "(optimizer.scm:569) g997998" 
o|inlining procedure: k6770 
o|substituted constant variable: a6788 
o|substituted constant variable: a6793 
o|inlining procedure: k6761 
o|contracted procedure: k6798 
o|contracted procedure: "(optimizer.scm:563) g987988" 
o|contracted procedure: "(optimizer.scm:562) g983984" 
o|inlining procedure: k6836 
o|inlining procedure: k6836 
o|contracted procedure: "(optimizer.scm:558) g965966" 
o|contracted procedure: k6898 
o|inlining procedure: k6895 
o|inlining procedure: k6895 
o|contracted procedure: k6948 
o|inlining procedure: k6945 
o|inlining procedure: k6945 
o|contracted procedure: k6980 
o|inlining procedure: k6977 
o|inlining procedure: k6977 
o|contracted procedure: k7025 
o|inlining procedure: k7022 
o|inlining procedure: k7022 
o|inlining procedure: k7069 
o|inlining procedure: k7069 
o|inlining procedure: k7093 
o|contracted procedure: "(optimizer.scm:886) g14241425" 
o|inlining procedure: k7093 
o|contracted procedure: "(optimizer.scm:890) g14321433" 
o|contracted procedure: "(optimizer.scm:892) g14371438" 
o|contracted procedure: "(optimizer.scm:895) g14441445" 
o|contracted procedure: "(optimizer.scm:897) g14491450" 
o|inlining procedure: k7233 
o|inlining procedure: k7233 
o|inlining procedure: k7256 
o|inlining procedure: k7256 
o|inlining procedure: k7279 
o|inlining procedure: k7279 
o|inlining procedure: k7316 
o|inlining procedure: k7316 
o|inlining procedure: k7394 
o|inlining procedure: k7394 
o|inlining procedure: k7403 
o|inlining procedure: k7403 
o|inlining procedure: k7468 
o|inlining procedure: k7488 
o|inlining procedure: k7488 
o|contracted procedure: "(optimizer.scm:947) g15341535" 
o|contracted procedure: "(optimizer.scm:949) g15391540" 
o|inlining procedure: k7536 
o|inlining procedure: k7548 
o|contracted procedure: "(optimizer.scm:945) g15281529" 
o|inlining procedure: k7548 
o|contracted procedure: "(optimizer.scm:944) g15251526" 
o|contracted procedure: "(optimizer.scm:944) g15221523" 
o|contracted procedure: "(optimizer.scm:943) g15181519" 
o|inlining procedure: k7536 
o|contracted procedure: "(optimizer.scm:942) g15141515" 
o|contracted procedure: "(optimizer.scm:938) g15041505" 
o|inlining procedure: k7468 
o|inlining procedure: k7624 
o|inlining procedure: k7633 
o|contracted procedure: "(optimizer.scm:959) g15551556" 
o|contracted procedure: "(optimizer.scm:963) g15601561" 
o|inlining procedure: k7633 
o|contracted procedure: "(optimizer.scm:956) g15471548" 
o|inlining procedure: k7624 
o|inlining procedure: k7696 
o|inlining procedure: k7705 
o|contracted procedure: "(optimizer.scm:973) g15761577" 
o|contracted procedure: "(optimizer.scm:974) g15811582" 
o|inlining procedure: k7705 
o|contracted procedure: "(optimizer.scm:969) g15671568" 
o|inlining procedure: k7696 
o|inlining procedure: k7794 
o|inlining procedure: k7800 
o|contracted procedure: "(optimizer.scm:983) g15931594" 
o|contracted procedure: "(optimizer.scm:982) g15901591" 
o|inlining procedure: k7800 
o|substituted constant variable: a7859 
o|inlining procedure: k7794 
o|inlining procedure: k7864 
o|inlining procedure: k7873 
o|inlining procedure: k7890 
o|contracted procedure: "(optimizer.scm:998) g16091610" 
o|contracted procedure: "(optimizer.scm:1000) g16141615" 
o|inlining procedure: k7890 
o|substituted constant variable: a7951 
o|inlining procedure: k7873 
o|contracted procedure: "(optimizer.scm:994) g16001601" 
o|inlining procedure: k7864 
o|inlining procedure: k7962 
o|inlining procedure: k7974 
o|contracted procedure: "(optimizer.scm:1010) g16291630" 
o|contracted procedure: "(optimizer.scm:1012) g16341635" 
o|contracted procedure: "(optimizer.scm:1013) g16391640" 
o|contracted procedure: "(optimizer.scm:1009) g16261627" 
o|inlining procedure: k7974 
o|substituted constant variable: a8043 
o|inlining procedure: k7962 
o|inlining procedure: k8048 
o|inlining procedure: k8063 
o|inlining procedure: k8072 
o|contracted procedure: "(optimizer.scm:1022) g16541655" 
o|contracted procedure: "(optimizer.scm:1024) g16591660" 
o|inlining procedure: k8072 
o|contracted procedure: "(optimizer.scm:1021) g16511652" 
o|inlining procedure: k8063 
o|inlining procedure: k8048 
o|inlining procedure: k8144 
o|contracted procedure: "(optimizer.scm:1031) g16661667" 
o|inlining procedure: k8144 
o|inlining procedure: k8164 
o|inlining procedure: k8173 
o|contracted procedure: "(optimizer.scm:1040) g16761677" 
o|inlining procedure: k8210 
o|contracted procedure: "(optimizer.scm:1047) g17491750" 
o|contracted procedure: "(optimizer.scm:1048) g17541755" 
o|contracted procedure: "(optimizer.scm:1057) g17621763" 
o|inlining procedure: k8301 
o|inlining procedure: k8301 
o|inlining procedure: k8316 
o|inlining procedure: k8316 
o|inlining procedure: k8350 
o|contracted procedure: "(optimizer.scm:1044) g17001709" 
o|inlining procedure: k8350 
o|inlining procedure: k8210 
o|inlining procedure: k8384 
o|inlining procedure: k8384 
o|substituted constant variable: a8413 
o|inlining procedure: k8173 
o|contracted procedure: "(optimizer.scm:1038) g16731674" 
o|inlining procedure: k8164 
o|inlining procedure: k8420 
o|inlining procedure: k8432 
o|contracted procedure: "(optimizer.scm:1068) g17781779" 
o|inlining procedure: k8481 
o|inlining procedure: k8481 
o|inlining procedure: k8432 
o|contracted procedure: "(optimizer.scm:1065) g17731774" 
o|inlining procedure: k8420 
o|inlining procedure: k8507 
o|inlining procedure: k8516 
o|inlining procedure: k8537 
o|contracted procedure: "(optimizer.scm:1086) g17971798" 
o|inlining procedure: k8537 
o|contracted procedure: "(optimizer.scm:1082) g17891790" 
o|inlining procedure: k8516 
o|inlining procedure: k8507 
o|inlining procedure: k8588 
o|inlining procedure: k8602 
o|inlining procedure: k8620 
o|contracted procedure: "(optimizer.scm:1100) g18191820" 
o|inlining procedure: k8620 
o|contracted procedure: "(optimizer.scm:1101) g18241825" 
o|substituted constant variable: a8667 
o|inlining procedure: k8602 
o|contracted procedure: "(optimizer.scm:1095) g18041805" 
o|inlining procedure: k8588 
o|inlining procedure: k8672 
o|inlining procedure: k8681 
o|inlining procedure: k8701 
o|contracted procedure: "(optimizer.scm:1113) g18401841" 
o|contracted procedure: "(optimizer.scm:1114) g18451846" 
o|inlining procedure: k8701 
o|inlining procedure: k8681 
o|contracted procedure: "(optimizer.scm:1109) g18311832" 
o|inlining procedure: k8672 
o|inlining procedure: k8755 
o|inlining procedure: k8764 
o|inlining procedure: k8781 
o|contracted procedure: "(optimizer.scm:1124) g18611862" 
o|contracted procedure: "(optimizer.scm:1127) g18661867" 
o|inlining procedure: k8820 
o|inlining procedure: k8820 
o|inlining procedure: k8781 
o|inlining procedure: k8764 
o|contracted procedure: "(optimizer.scm:1121) g18531854" 
o|inlining procedure: k8755 
o|inlining procedure: k8840 
o|inlining procedure: k8849 
o|inlining procedure: k8861 
o|contracted procedure: "(optimizer.scm:1140) g18851886" 
o|inlining procedure: k8906 
o|contracted procedure: "(optimizer.scm:1143) g18901891" 
o|inlining procedure: k8906 
o|inlining procedure: k8861 
o|contracted procedure: "(optimizer.scm:1138) g18781879" 
o|propagated global variable: tmp18741876 unsafe 
o|propagated global variable: tmp18741876 unsafe 
o|inlining procedure: k8849 
o|substituted constant variable: a8939 
o|inlining procedure: k8840 
o|inlining procedure: k8965 
o|inlining procedure: k8977 
o|contracted procedure: "(optimizer.scm:1165) g19141915" 
o|contracted procedure: "(optimizer.scm:1168) g19191920" 
o|inlining procedure: k9028 
o|inlining procedure: k9028 
o|inlining procedure: k9069 
o|substituted constant variable: a9077 
o|inlining procedure: k9069 
o|propagated global variable: tmp19111913 unsafe 
o|propagated global variable: tmp19111913 unsafe 
o|inlining procedure: k8977 
o|contracted procedure: "(optimizer.scm:1163) g19071908" 
o|inlining procedure: k8965 
o|inlining procedure: k9091 
o|inlining procedure: k9100 
o|contracted procedure: "(optimizer.scm:1184) g19361937" 
o|contracted procedure: "(optimizer.scm:1187) g19411942" 
o|inlining procedure: k9147 
o|inlining procedure: k9147 
o|contracted procedure: "(optimizer.scm:1183) g19331934" 
o|inlining procedure: k9100 
o|inlining procedure: k9091 
o|inlining procedure: k9180 
o|inlining procedure: k9189 
o|contracted procedure: "(optimizer.scm:1198) g19531954" 
o|inlining procedure: k9189 
o|contracted procedure: "(optimizer.scm:1197) g19501951" 
o|inlining procedure: k9180 
o|inlining procedure: k9224 
o|inlining procedure: k9233 
o|contracted procedure: "(optimizer.scm:1216) g19781979" 
o|inlining procedure: k9279 
o|contracted procedure: "(optimizer.scm:1218) g19831984" 
o|inlining procedure: k9279 
o|contracted procedure: "(optimizer.scm:1220) g19911992" 
o|contracted procedure: "(optimizer.scm:1226) g19981999" 
o|inlining procedure: k9361 
o|contracted procedure: "(optimizer.scm:1214) g19711972" 
o|inlining procedure: k9361 
o|contracted procedure: "(optimizer.scm:1213) g19681969" 
o|inlining procedure: k9233 
o|contracted procedure: "(optimizer.scm:1207) g19601961" 
o|inlining procedure: k9224 
o|inlining procedure: k9407 
o|inlining procedure: k9419 
o|contracted procedure: "(optimizer.scm:1237) g20142015" 
o|contracted procedure: "(optimizer.scm:1240) g20192020" 
o|contracted procedure: "(optimizer.scm:1236) g20112012" 
o|inlining procedure: k9419 
o|inlining procedure: k9407 
o|inlining procedure: k9503 
o|inlining procedure: k9512 
o|contracted procedure: "(optimizer.scm:1265) g20542055" 
o|inlining procedure: k9564 
o|contracted procedure: "(optimizer.scm:1267) g20592060" 
o|inlining procedure: k9564 
o|contracted procedure: "(optimizer.scm:1269) g20642065" 
o|inlining procedure: k9611 
o|contracted procedure: "(optimizer.scm:1276) g20712072" 
o|inlining procedure: k9611 
o|contracted procedure: "(optimizer.scm:1277) g20762077" 
o|inlining procedure: k9656 
o|contracted procedure: "(optimizer.scm:1263) g20472048" 
o|inlining procedure: k9656 
o|contracted procedure: "(optimizer.scm:1262) g20442045" 
o|inlining procedure: k9512 
o|contracted procedure: "(optimizer.scm:1254) g20342035" 
o|inlining procedure: k9503 
o|inlining procedure: k9707 
o|inlining procedure: k9716 
o|contracted procedure: "(optimizer.scm:1290) g20942095" 
o|inlining procedure: k9753 
o|contracted procedure: "(optimizer.scm:1294) g20992100" 
o|inlining procedure: k9753 
o|contracted procedure: "(optimizer.scm:1298) g21042105" 
o|inlining procedure: k9716 
o|contracted procedure: "(optimizer.scm:1288) g20872088" 
o|inlining procedure: k9707 
o|inlining procedure: k9791 
o|inlining procedure: k9800 
o|contracted procedure: "(optimizer.scm:1312) g21162117" 
o|inlining procedure: k9867 
o|contracted procedure: "(optimizer.scm:1325) defarg1485" 
o|inlining procedure: k7435 
o|inlining procedure: k7435 
o|inlining procedure: k9867 
o|inlining procedure: k9800 
o|contracted procedure: "(optimizer.scm:1309) g21112112" 
o|inlining procedure: k9791 
o|substituted constant variable: a9936 
o|substituted constant variable: a9938 
o|substituted constant variable: a9940 
o|substituted constant variable: a9942 
o|substituted constant variable: a9944 
o|substituted constant variable: a9946 
o|substituted constant variable: a9948 
o|substituted constant variable: a9950 
o|substituted constant variable: a9952 
o|substituted constant variable: a9954 
o|substituted constant variable: a9956 
o|substituted constant variable: a9958 
o|substituted constant variable: a9960 
o|substituted constant variable: a9962 
o|substituted constant variable: a9964 
o|substituted constant variable: a9966 
o|substituted constant variable: a9968 
o|substituted constant variable: a9970 
o|substituted constant variable: a9972 
o|substituted constant variable: a9974 
o|substituted constant variable: a9976 
o|substituted constant variable: a9978 
o|substituted constant variable: a9980 
o|inlining procedure: k10011 
o|inlining procedure: k10036 
o|contracted procedure: k10044 
o|inlining procedure: k10047 
o|inlining procedure: k10062 
o|inlining procedure: k10071 
o|contracted procedure: k10080 
o|inlining procedure: k10083 
o|inlining procedure: k10083 
o|contracted procedure: "(optimizer.scm:1362) g21792180" 
o|contracted procedure: "(optimizer.scm:1363) g21832184" 
o|inlining procedure: k10071 
o|inlining procedure: k10062 
o|inlining procedure: k10047 
o|inlining procedure: k10036 
o|inlining procedure: k10011 
o|inlining procedure: k10155 
o|inlining procedure: k10155 
o|inlining procedure: k10193 
o|inlining procedure: k10193 
o|substituted constant variable: a10214 
o|substituted constant variable: a10216 
o|substituted constant variable: a10218 
o|contracted procedure: "(optimizer.scm:1350) g21662167" 
o|contracted procedure: "(optimizer.scm:1349) g21572158" 
o|contracted procedure: "(optimizer.scm:1348) g21542155" 
o|inlining procedure: k10249 
o|inlining procedure: k10267 
o|inlining procedure: k10267 
o|contracted procedure: k10273 
o|inlining procedure: k10249 
o|inlining procedure: k10294 
o|inlining procedure: k10294 
o|inlining procedure: k10322 
o|contracted procedure: k10331 
o|inlining procedure: k10322 
o|inlining procedure: k10357 
o|inlining procedure: k10363 
o|inlining procedure: k10363 
o|inlining procedure: k10357 
o|inlining procedure: k10381 
o|contracted procedure: k10411 
o|inlining procedure: k10408 
o|inlining procedure: k10408 
o|inlining procedure: k10381 
o|inlining procedure: k10428 
o|inlining procedure: k10428 
o|contracted procedure: k10452 
o|inlining procedure: k10449 
o|inlining procedure: k10449 
o|inlining procedure: k10463 
o|inlining procedure: k10478 
o|inlining procedure: k10478 
o|inlining procedure: k10501 
o|contracted procedure: "(optimizer.scm:1432) g22912292" 
o|contracted procedure: "(optimizer.scm:1431) g22882289" 
o|inlining procedure: k10501 
o|contracted procedure: "(optimizer.scm:1427) g22792280" 
o|contracted procedure: "(optimizer.scm:1426) g22742275" 
o|inlining procedure: k10463 
o|inlining procedure: k10576 
o|inlining procedure: k10576 
o|contracted procedure: k10582 
o|inlining procedure: k10598 
o|inlining procedure: k10598 
o|inlining procedure: k10621 
o|inlining procedure: k10621 
o|substituted constant variable: a10656 
o|substituted constant variable: a10658 
o|substituted constant variable: a10660 
o|substituted constant variable: a10662 
o|substituted constant variable: a10664 
o|substituted constant variable: a10666 
o|substituted constant variable: a10668 
o|substituted constant variable: a10670 
o|substituted constant variable: a10672 
o|substituted constant variable: a10674 
o|contracted procedure: "(optimizer.scm:1381) g22322233" 
o|contracted procedure: "(optimizer.scm:1380) g22232224" 
o|contracted procedure: "(optimizer.scm:1379) g22202221" 
o|inlining procedure: k10678 
o|inlining procedure: k10678 
o|contracted procedure: "(optimizer.scm:1541) g24722473" 
o|contracted procedure: "(optimizer.scm:1531) g24672468" 
o|contracted procedure: "(optimizer.scm:1530) g24632464" 
o|inlining procedure: k10715 
o|inlining procedure: k10894 
o|contracted procedure: "(optimizer.scm:1562) g25212528" 
o|contracted procedure: "(optimizer.scm:1566) g25352536" 
o|contracted procedure: "(optimizer.scm:1566) g25322533" 
o|inlining procedure: k10894 
o|contracted procedure: "(optimizer.scm:1554) g24952496" 
o|contracted procedure: "(optimizer.scm:1557) g25042505" 
o|contracted procedure: "(optimizer.scm:1557) g25152516" 
o|contracted procedure: "(optimizer.scm:1557) g25122513" 
o|contracted procedure: "(optimizer.scm:1557) g25092510" 
o|contracted procedure: "(optimizer.scm:1556) g25012502" 
o|contracted procedure: "(optimizer.scm:1549) g24872488" 
o|inlining procedure: k10993 
o|inlining procedure: k10993 
o|inlining procedure: k11058 
o|inlining procedure: k11092 
o|contracted procedure: "(optimizer.scm:1507) g23902391" 
o|contracted procedure: "(optimizer.scm:1504) g23872388" 
o|contracted procedure: "(optimizer.scm:1498) g23842385" 
o|inlining procedure: k11144 
o|inlining procedure: k11144 
o|inlining procedure: k11092 
o|contracted procedure: "(optimizer.scm:1484) g23632364" 
o|contracted procedure: "(optimizer.scm:1483) g23602361" 
o|contracted procedure: "(optimizer.scm:1482) g23562357" 
o|inlining procedure: k11058 
o|inlining procedure: k11291 
o|inlining procedure: k11291 
o|inlining procedure: k11317 
o|inlining procedure: k11317 
o|inlining procedure: k11346 
o|inlining procedure: k11346 
o|substituted constant variable: a11367 
o|substituted constant variable: a11369 
o|contracted procedure: "(optimizer.scm:1478) g23502351" 
o|contracted procedure: "(optimizer.scm:1477) g23412342" 
o|contracted procedure: "(optimizer.scm:1476) g23382339" 
o|contracted procedure: "(optimizer.scm:1475) g24452446" 
o|inlining procedure: k10715 
o|inlining procedure: k11389 
o|inlining procedure: k11389 
o|substituted constant variable: a11404 
o|contracted procedure: "(optimizer.scm:1460) g23192320" 
o|inlining procedure: k11453 
o|substituted constant variable: a11475 
o|inlining procedure: k11453 
o|inlining procedure: k11537 
o|inlining procedure: k11566 
o|inlining procedure: k11566 
o|inlining procedure: k11596 
o|inlining procedure: k11614 
o|contracted procedure: "(optimizer.scm:1633) user-lambda?2566" 
o|inlining procedure: k11479 
o|contracted procedure: "(optimizer.scm:1608) g25752576" 
o|inlining procedure: k11479 
o|contracted procedure: "(optimizer.scm:1607) g25722573" 
o|inlining procedure: k11614 
o|inlining procedure: k11641 
o|inlining procedure: k11641 
o|inlining procedure: k11648 
o|inlining procedure: k11648 
o|contracted procedure: "(optimizer.scm:1629) g26242625" 
o|contracted procedure: "(optimizer.scm:1627) g26202621" 
o|contracted procedure: "(optimizer.scm:1626) g26172618" 
o|inlining procedure: k11596 
o|contracted procedure: "(optimizer.scm:1625) g26122613" 
o|contracted procedure: k11687 
o|contracted procedure: "(optimizer.scm:1620) g26062607" 
o|inlining procedure: k11537 
o|inlining procedure: k11765 
o|inlining procedure: k11765 
o|substituted constant variable: a11789 
o|substituted constant variable: a11791 
o|substituted constant variable: a11793 
o|contracted procedure: "(optimizer.scm:1613) g25892590" 
o|contracted procedure: "(optimizer.scm:1612) g25862587" 
o|contracted procedure: "(optimizer.scm:1611) g25832584" 
o|contracted procedure: "(optimizer.scm:1684) g27772778" 
o|contracted procedure: "(optimizer.scm:1680) g27742775" 
o|inlining procedure: k11883 
o|inlining procedure: k11883 
o|contracted procedure: "(optimizer.scm:1674) g27382739" 
o|contracted procedure: "(optimizer.scm:1673) g27342735" 
o|contracted procedure: "(optimizer.scm:1672) g27302731" 
o|contracted procedure: "(optimizer.scm:1762) g29492950" 
o|contracted procedure: "(optimizer.scm:1763) g29542955" 
o|contracted procedure: "(optimizer.scm:1760) g29462947" 
o|inlining procedure: k12047 
o|inlining procedure: k12047 
o|inlining procedure: k12077 
o|inlining procedure: k12077 
o|inlining procedure: k12103 
o|inlining procedure: k12103 
o|contracted procedure: "(optimizer.scm:1708) g28672868" 
o|contracted procedure: "(optimizer.scm:1713) g28772878" 
o|contracted procedure: "(optimizer.scm:1745) g29102911" 
o|contracted procedure: "(optimizer.scm:1716) g28822883" 
o|contracted procedure: "(optimizer.scm:1719) g28872888" 
o|contracted procedure: "(optimizer.scm:1724) g28922893" 
o|contracted procedure: "(optimizer.scm:1741) g29072908" 
o|inlining procedure: k12290 
o|inlining procedure: k12290 
o|contracted procedure: "(optimizer.scm:1736) g29012902" 
o|contracted procedure: "(optimizer.scm:1712) g28722873" 
o|contracted procedure: "(optimizer.scm:1704) g28642865" 
o|contracted procedure: "(optimizer.scm:1703) g28612862" 
o|contracted procedure: "(optimizer.scm:1702) g28572858" 
o|contracted procedure: "(optimizer.scm:1701) g28532854" 
o|inlining procedure: k12410 
o|inlining procedure: k12410 
o|inlining procedure: k12477 
o|contracted procedure: "(optimizer.scm:1689) g28012810" 
o|inlining procedure: k12477 
o|inlining procedure: k12511 
o|inlining procedure: k12511 
o|inlining procedure: k12558 
o|inlining procedure: k12558 
o|inlining procedure: k12600 
o|inlining procedure: k12609 
o|contracted procedure: "(optimizer.scm:802) g12641265" 
o|contracted procedure: "(optimizer.scm:806) g12691270" 
o|contracted procedure: "(optimizer.scm:811) g12761277" 
o|contracted procedure: "(optimizer.scm:814) g12811282" 
o|inlining procedure: k12609 
o|inlining procedure: k12600 
o|inlining procedure: k12733 
o|contracted procedure: "(optimizer.scm:783) g12411242" 
o|contracted procedure: "(optimizer.scm:786) g12461247" 
o|inlining procedure: k12733 
o|contracted procedure: k12819 
o|inlining procedure: k12816 
o|inlining procedure: k12816 
o|contracted procedure: "(optimizer.scm:763) g12191220" 
o|contracted procedure: "(optimizer.scm:765) g12241225" 
o|substituted constant variable: a12853 
o|inlining procedure: k12939 
o|contracted procedure: k12954 
o|inlining procedure: k12951 
o|inlining procedure: k12951 
o|contracted procedure: k12960 
o|inlining procedure: k12990 
o|inlining procedure: k12990 
o|inlining procedure: k13018 
o|inlining procedure: k13070 
o|contracted procedure: "(optimizer.scm:725) g11991200" 
o|inlining procedure: k13070 
o|inlining procedure: k13130 
o|inlining procedure: k13130 
o|inlining procedure: k13136 
o|contracted procedure: k13145 
o|contracted procedure: k13151 
o|inlining procedure: k13148 
o|inlining procedure: k13148 
o|inlining procedure: k13160 
o|contracted procedure: "(optimizer.scm:724) g11961197" 
o|inlining procedure: k13160 
o|contracted procedure: "(optimizer.scm:723) g11931194" 
o|inlining procedure: k13136 
o|contracted procedure: "(optimizer.scm:717) g11801181" 
o|contracted procedure: "(optimizer.scm:716) g11771178" 
o|contracted procedure: "(optimizer.scm:715) g11741175" 
o|inlining procedure: k13018 
o|substituted constant variable: a13226 
o|substituted constant variable: a13228 
o|contracted procedure: "(optimizer.scm:706) g11611162" 
o|contracted procedure: "(optimizer.scm:705) g11521153" 
o|contracted procedure: "(optimizer.scm:704) g11481149" 
o|inlining procedure: k12939 
o|contracted procedure: "(optimizer.scm:698) g11391140" 
o|contracted procedure: "(optimizer.scm:697) g11361137" 
o|contracted procedure: "(optimizer.scm:696) g11331134" 
o|inlining procedure: k13264 
o|inlining procedure: k13276 
o|contracted procedure: "(optimizer.scm:673) g11161117" 
o|inlining procedure: k13276 
o|substituted constant variable: a13310 
o|inlining procedure: k13264 
o|inlining procedure: k13394 
o|inlining procedure: k13406 
o|inlining procedure: k13418 
o|contracted procedure: "(optimizer.scm:648) g10961097" 
o|inlining procedure: k13418 
o|substituted constant variable: a13448 
o|substituted constant variable: a13457 
o|inlining procedure: k13406 
o|inlining procedure: k13394 
o|inlining procedure: k13578 
o|inlining procedure: k13578 
o|inlining procedure: k13595 
o|inlining procedure: k13595 
o|replaced variables: 1983 
o|removed binding forms: 607 
o|substituted constant variable: c101 
o|substituted constant variable: p102 
o|substituted constant variable: s103 
o|substituted constant variable: tmp131134 
o|substituted constant variable: mark133 
o|substituted constant variable: r425613678 
o|substituted constant variable: r424413681 
o|inlining procedure: k4388 
o|substituted constant variable: c302 
o|inlining procedure: k4388 
o|substituted constant variable: r450913696 
o|inlining procedure: k4388 
o|inlining procedure: k4388 
o|substituted constant variable: mark365 
o|substituted constant variable: c391 
o|substituted constant variable: r485613711 
o|substituted constant variable: c442 
o|substituted constant variable: c458 
o|substituted constant variable: c565 
o|substituted constant variable: c570 
o|substituted constant variable: p571 
o|substituted constant variable: s572 
o|converted assignments to bindings: (cfk642) 
o|substituted constant variable: c704 
o|substituted constant variable: c711 
o|substituted constant variable: c730 
o|substituted constant variable: c762 
o|substituted constant variable: r570613743 
o|substituted constant variable: mark612 
o|substituted constant variable: r569413747 
o|substituted constant variable: mark594 
o|substituted constant variable: c791 
o|substituted constant variable: r579813750 
o|substituted constant variable: r590813754 
o|substituted constant variable: r588113756 
o|substituted constant variable: r586913757 
o|substituted constant variable: r585413758 
o|substituted constant variable: mark534 
o|substituted constant variable: r598813759 
o|substituted constant variable: c798 
o|substituted constant variable: c843 
o|substituted constant variable: p844 
o|substituted constant variable: s845 
o|substituted constant variable: c850 
o|substituted constant variable: p851 
o|substituted constant variable: s852 
o|substituted constant variable: c862 
o|substituted constant variable: p863 
o|substituted constant variable: s864 
o|substituted constant variable: c870 
o|substituted constant variable: r629513778 
o|substituted constant variable: r671113796 
o|substituted constant variable: r677113800 
o|substituted constant variable: r676213801 
o|substituted constant variable: sym967 
o|substituted constant variable: r689613804 
o|substituted constant variable: r697813808 
o|substituted constant variable: r702313810 
o|substituted constant variable: c1426 
o|substituted constant variable: c1434 
o|substituted constant variable: c1439 
o|substituted constant variable: p1440 
o|substituted constant variable: s1441 
o|substituted constant variable: c1446 
o|substituted constant variable: c1451 
o|converted assignments to bindings: (find-path1334) 
o|substituted constant variable: r740413827 
o|substituted constant variable: c1536 
o|substituted constant variable: c1541 
o|substituted constant variable: c1530 
o|substituted constant variable: r754913833 
o|substituted constant variable: r753713834 
o|substituted constant variable: c1557 
o|substituted constant variable: c1562 
o|substituted constant variable: r763413838 
o|substituted constant variable: r762513839 
o|substituted constant variable: c1578 
o|substituted constant variable: c1583 
o|substituted constant variable: r770613842 
o|substituted constant variable: c1595 
o|substituted constant variable: r780113846 
o|substituted constant variable: r779513847 
o|substituted constant variable: c1611 
o|substituted constant variable: c1616 
o|substituted constant variable: r789113851 
o|substituted constant variable: r787413852 
o|substituted constant variable: c1631 
o|substituted constant variable: c1636 
o|substituted constant variable: c1641 
o|substituted constant variable: r797513856 
o|substituted constant variable: r796313857 
o|substituted constant variable: c1656 
o|substituted constant variable: c1661 
o|substituted constant variable: r807313861 
o|substituted constant variable: r806413862 
o|substituted constant variable: r814513865 
o|substituted constant variable: c1678 
o|substituted constant variable: c1751 
o|substituted constant variable: c1756 
o|substituted constant variable: c1764 
o|substituted constant variable: r821113877 
o|substituted constant variable: r817413880 
o|substituted constant variable: c1780 
o|substituted constant variable: r843313888 
o|substituted constant variable: r842113889 
o|substituted constant variable: c1799 
o|substituted constant variable: r853813893 
o|substituted constant variable: r851713894 
o|substituted constant variable: c1821 
o|substituted constant variable: c1826 
o|substituted constant variable: r860313900 
o|substituted constant variable: r858913901 
o|substituted constant variable: c1842 
o|substituted constant variable: c1847 
o|substituted constant variable: s1849 
o|substituted constant variable: r870213905 
o|substituted constant variable: r868213906 
o|substituted constant variable: c1863 
o|substituted constant variable: c1868 
o|substituted constant variable: r878213915 
o|substituted constant variable: r876513916 
o|substituted constant variable: r875613917 
o|substituted constant variable: c1887 
o|substituted constant variable: c1892 
o|substituted constant variable: r890713922 
o|substituted constant variable: r886213923 
o|substituted constant variable: r885013924 
o|substituted constant variable: c1916 
o|substituted constant variable: c1921 
o|inlining procedure: k9028 
o|substituted constant variable: r907013933 
o|substituted constant variable: r897813934 
o|substituted constant variable: r896613935 
o|substituted constant variable: c1938 
o|substituted constant variable: c1943 
o|substituted constant variable: r910113942 
o|substituted constant variable: c1955 
o|substituted constant variable: r919013946 
o|substituted constant variable: r918113947 
o|substituted constant variable: c1980 
o|substituted constant variable: c1985 
o|substituted constant variable: c1993 
o|substituted constant variable: c2000 
o|substituted constant variable: r936213953 
o|substituted constant variable: r923413954 
o|substituted constant variable: c2016 
o|substituted constant variable: c2021 
o|substituted constant variable: r942013958 
o|substituted constant variable: r940813959 
o|substituted constant variable: c2056 
o|substituted constant variable: c2061 
o|substituted constant variable: c2066 
o|substituted constant variable: c2073 
o|substituted constant variable: c2078 
o|substituted constant variable: r965713967 
o|substituted constant variable: r951313968 
o|substituted constant variable: c2096 
o|substituted constant variable: c2101 
o|substituted constant variable: c2106 
o|substituted constant variable: r971713976 
o|substituted constant variable: r970813977 
o|substituted constant variable: c2118 
o|substituted constant variable: r980113984 
o|substituted constant variable: r1008413992 
o|substituted constant variable: mark2182 
o|substituted constant variable: r1007213993 
o|substituted constant variable: r1006313994 
o|substituted constant variable: r1004813995 
o|substituted constant variable: r1003713996 
o|substituted constant variable: r1029514007 
o|substituted constant variable: r1036414011 
o|substituted constant variable: r1036414012 
o|substituted constant variable: r1035814013 
o|substituted constant variable: r1040914015 
o|substituted constant variable: r1040914016 
o|substituted constant variable: r1042914019 
o|substituted constant variable: r1045014020 
o|substituted constant variable: r1045014021 
o|substituted constant variable: r1047914024 
o|substituted constant variable: r1050214025 
o|inlining procedure: k10510 
o|inlining procedure: k10510 
o|substituted constant variable: r1050214026 
o|substituted constant variable: r1062214033 
o|substituted constant variable: r1067914035 
o|substituted constant variable: c2474 
o|substituted constant variable: c2537 
o|substituted constant variable: p2538 
o|substituted constant variable: s2539 
o|substituted constant variable: c2497 
o|substituted constant variable: c2489 
o|substituted constant variable: p2490 
o|substituted constant variable: s2491 
o|substituted constant variable: c2392 
o|substituted constant variable: r1139014055 
o|inlining procedure: k11459 
o|inlining procedure: k11459 
o|substituted constant variable: r1148014064 
o|substituted constant variable: r1161514065 
o|substituted constant variable: r1164214068 
o|substituted constant variable: r1164214068 
o|folded constant expression: (length (quote ())) 
o|substituted constant variable: r1164914072 
o|substituted constant variable: r1164914072 
o|folded constant expression: (length (quote ())) 
o|substituted constant variable: r1159714074 
o|substituted constant variable: c2779 
o|substituted constant variable: p2780 
o|substituted constant variable: s2781 
o|substituted constant variable: c2951 
o|substituted constant variable: c2869 
o|substituted constant variable: c2879 
o|substituted constant variable: c2912 
o|substituted constant variable: p2913 
o|substituted constant variable: c2884 
o|substituted constant variable: c2889 
o|substituted constant variable: c2894 
o|substituted constant variable: c2903 
o|substituted constant variable: c2874 
o|substituted constant variable: p2875 
o|substituted constant variable: s2876 
o|substituted constant variable: c1266 
o|substituted constant variable: c1271 
o|substituted constant variable: c1278 
o|substituted constant variable: p1279 
o|substituted constant variable: c1283 
o|substituted constant variable: r1261014098 
o|substituted constant variable: r1260114099 
o|substituted constant variable: c1243 
o|substituted constant variable: c1248 
o|substituted constant variable: p1249 
o|substituted constant variable: r1273414101 
o|substituted constant variable: r1281714102 
o|substituted constant variable: c1221 
o|substituted constant variable: c1226 
o|substituted constant variable: r1295214105 
o|substituted constant variable: r1313114113 
o|substituted constant variable: r1314914115 
o|substituted constant variable: r1316114118 
o|substituted constant variable: r1313714119 
o|substituted constant variable: r1301914120 
o|substituted constant variable: r1294014121 
o|substituted constant variable: c1118 
o|substituted constant variable: r1327714124 
o|substituted constant variable: r1326514125 
o|substituted constant variable: c1098 
o|substituted constant variable: p1099 
o|substituted constant variable: r1341914129 
o|substituted constant variable: r1340714130 
o|substituted constant variable: r1339514131 
o|substituted constant variable: r1357914132 
o|simplifications: ((let . 2)) 
o|replaced variables: 164 
o|removed binding forms: 1872 
o|inlining procedure: k4083 
o|inlining procedure: k4264 
o|inlining procedure: k4228 
o|inlining procedure: k6145 
o|inlining procedure: k6440 
o|removed call to pure procedure with unused result: "(optimizer.scm:1044) slot" 
o|inlining procedure: k9150 
o|substituted constant variable: r105021402514222 
o|substituted constant variable: r105021402514225 
o|inlining procedure: k11634 
o|replaced variables: 320 
o|removed binding forms: 414 
o|substituted constant variable: r408414300 
o|substituted constant variable: r422914311 
o|substituted constant variable: r422914311 
o|substituted constant variable: r422914311 
o|contracted procedure: k8375 
o|substituted constant variable: r915114356 
o|substituted constant variable: r1163514375 
o|removed binding forms: 329 
o|removed conditional forms: 2 
o|inlining procedure: "(optimizer.scm:177) constant-node?165" 
o|removed binding forms: 5 
o|replaced variables: 1 
o|removed binding forms: 1 
o|simplifications: ((if . 37) (##core#call . 1264)) 
o|  call simplifications:
o|    ##sys#cons	9
o|    assoc
o|    -
o|    fx>
o|    ##sys#list	74
o|    list?	3
o|    set-car!
o|    >=
o|    symbol?
o|    cddddr
o|    fx<=
o|    <=
o|    fx<
o|    =	10
o|    equal?	4
o|    fixnum?
o|    fx=
o|    proper-list?	3
o|    >	5
o|    values	6
o|    ##sys#structure?
o|    *	2
o|    length	41
o|    <	5
o|    zero?	5
o|    sub1	5
o|    ##sys#call-with-values	5
o|    fourth	16
o|    +	8
o|    cddr	6
o|    list	144
o|    caddr	2
o|    cadr	4
o|    third	30
o|    ##sys#setslot	15
o|    apply	2
o|    caar	2
o|    assq	10
o|    alist-cons	10
o|    cdr	32
o|    add1	9
o|    set-cdr!	3
o|    null?	21
o|    ##sys#make-structure	99
o|    second	45
o|    first	94
o|    car	26
o|    eq?	142
o|    ##sys#check-list	21
o|    pair?	51
o|    ##sys#slot	191
o|    memq	14
o|    not	21
o|    cons	56
o|contracted procedure: k3769 
o|contracted procedure: k3779 
o|contracted procedure: k3802 
o|contracted procedure: k3814 
o|contracted procedure: k3824 
o|contracted procedure: k3828 
o|contracted procedure: k3839 
o|contracted procedure: k3847 
o|contracted procedure: k3855 
o|contracted procedure: k3861 
o|contracted procedure: k3864 
o|contracted procedure: k3881 
o|contracted procedure: k3888 
o|contracted procedure: k3902 
o|contracted procedure: k3898 
o|contracted procedure: k3908 
o|contracted procedure: k3928 
o|contracted procedure: k3934 
o|contracted procedure: k3940 
o|contracted procedure: k3964 
o|contracted procedure: k3967 
o|contracted procedure: k3973 
o|contracted procedure: k3982 
o|contracted procedure: k3985 
o|contracted procedure: k3988 
o|contracted procedure: k4006 
o|contracted procedure: k4027 
o|contracted procedure: k4034 
o|contracted procedure: k4053 
o|contracted procedure: k4098 
o|contracted procedure: k4110 
o|contracted procedure: k4120 
o|contracted procedure: k4124 
o|contracted procedure: k4089 
o|contracted procedure: k4083 
o|contracted procedure: k4127 
o|contracted procedure: k4163 
o|contracted procedure: k4193 
o|contracted procedure: k4205 
o|contracted procedure: k4219 
o|contracted procedure: k4208 
o|contracted procedure: k4215 
o|contracted procedure: k4240 
o|contracted procedure: k4258 
o|contracted procedure: k4261 
o|contracted procedure: k4281 
o|contracted procedure: k4277 
o|contracted procedure: k4264 
o|contracted procedure: k4285 
o|contracted procedure: k4289 
o|contracted procedure: k4293 
o|contracted procedure: k4302 
o|contracted procedure: k4305 
o|contracted procedure: k4317 
o|contracted procedure: k4320 
o|contracted procedure: k4323 
o|contracted procedure: k4331 
o|contracted procedure: k4339 
o|contracted procedure: k4353 
o|contracted procedure: k4362 
o|contracted procedure: k4377 
o|contracted procedure: k4385 
o|contracted procedure: k4391 
o|contracted procedure: k4401 
o|contracted procedure: k4411 
o|contracted procedure: k4178 
o|contracted procedure: k4426 
o|contracted procedure: k416314502 
o|contracted procedure: k4432 
o|contracted procedure: k4542 
o|contracted procedure: k4538 
o|contracted procedure: k4438 
o|contracted procedure: k4527 
o|contracted procedure: k4441 
o|contracted procedure: k4454 
o|contracted procedure: k4489 
o|contracted procedure: k4497 
o|contracted procedure: k4493 
o|contracted procedure: k4518 
o|contracted procedure: k4577 
o|contracted procedure: k4585 
o|contracted procedure: k4593 
o|contracted procedure: k4599 
o|contracted procedure: k4630 
o|contracted procedure: k4621 
o|contracted procedure: k4702 
o|contracted procedure: k4653 
o|contracted procedure: k4661 
o|contracted procedure: k4683 
o|contracted procedure: k4647 
o|contracted procedure: k4708 
o|contracted procedure: k4714 
o|contracted procedure: k4717 
o|contracted procedure: k4733 
o|contracted procedure: k4740 
o|contracted procedure: k4755 
o|contracted procedure: k4772 
o|contracted procedure: k4775 
o|contracted procedure: k4778 
o|contracted procedure: k4786 
o|contracted procedure: k4794 
o|contracted procedure: k4816 
o|contracted procedure: k4807 
o|contracted procedure: k4852 
o|contracted procedure: k4848 
o|contracted procedure: k4821 
o|contracted procedure: k4837 
o|contracted procedure: k4828 
o|contracted procedure: k4871 
o|contracted procedure: k4874 
o|contracted procedure: k4943 
o|contracted procedure: k4947 
o|contracted procedure: k4955 
o|contracted procedure: k4923 
o|contracted procedure: k4927 
o|contracted procedure: k4935 
o|contracted procedure: k4939 
o|contracted procedure: k4968 
o|contracted procedure: k5024 
o|contracted procedure: k5028 
o|contracted procedure: k5036 
o|contracted procedure: k5004 
o|contracted procedure: k5008 
o|contracted procedure: k5016 
o|contracted procedure: k5020 
o|contracted procedure: k5040 
o|contracted procedure: k5047 
o|contracted procedure: k5053 
o|contracted procedure: k5062 
o|contracted procedure: k5065 
o|contracted procedure: k5073 
o|contracted procedure: k5079 
o|contracted procedure: k6039 
o|contracted procedure: k5082 
o|contracted procedure: k5103 
o|contracted procedure: k5106 
o|contracted procedure: k5123 
o|contracted procedure: k5146 
o|contracted procedure: k5137 
o|contracted procedure: k5155 
o|contracted procedure: k5165 
o|contracted procedure: k5169 
o|contracted procedure: k5190 
o|contracted procedure: k5198 
o|contracted procedure: k5207 
o|contracted procedure: k5194 
o|contracted procedure: k5221 
o|contracted procedure: k5224 
o|contracted procedure: k5233 
o|contracted procedure: k5241 
o|contracted procedure: k5258 
o|contracted procedure: k5308 
o|contracted procedure: k5299 
o|contracted procedure: k5317 
o|contracted procedure: k5327 
o|contracted procedure: k5331 
o|contracted procedure: k5335 
o|contracted procedure: k5339 
o|contracted procedure: k5538 
o|contracted procedure: k5351 
o|contracted procedure: k5366 
o|contracted procedure: k5369 
o|contracted procedure: k5375 
o|contracted procedure: k5383 
o|contracted procedure: k5406 
o|contracted procedure: k5409 
o|contracted procedure: k5412 
o|contracted procedure: k5420 
o|contracted procedure: k5428 
o|contracted procedure: k5465 
o|contracted procedure: k5469 
o|contracted procedure: k5483 
o|contracted procedure: k5500 
o|contracted procedure: k5506 
o|contracted procedure: k5517 
o|contracted procedure: k5521 
o|contracted procedure: k5525 
o|contracted procedure: k5531 
o|contracted procedure: k5677 
o|contracted procedure: k5553 
o|contracted procedure: k5590 
o|contracted procedure: k5598 
o|contracted procedure: k5579 
o|contracted procedure: k5583 
o|contracted procedure: k5610 
o|contracted procedure: k5613 
o|contracted procedure: k5616 
o|contracted procedure: k5624 
o|contracted procedure: k5632 
o|contracted procedure: k5643 
o|contracted procedure: k5650 
o|contracted procedure: k5673 
o|contracted procedure: k5669 
o|contracted procedure: k5665 
o|contracted procedure: k5690 
o|contracted procedure: k5722 
o|contracted procedure: k5732 
o|contracted procedure: k5776 
o|contracted procedure: k5772 
o|contracted procedure: k5791 
o|contracted procedure: k5782 
o|contracted procedure: k5830 
o|contracted procedure: k5800 
o|contracted procedure: k5821 
o|contracted procedure: k5812 
o|contracted procedure: k5842 
o|contracted procedure: k5981 
o|contracted procedure: k5977 
o|contracted procedure: k5856 
o|contracted procedure: k5966 
o|contracted procedure: k5859 
o|contracted procedure: k5947 
o|contracted procedure: k5874 
o|contracted procedure: k5938 
o|contracted procedure: k5877 
o|contracted procedure: k5929 
o|contracted procedure: k6010 
o|contracted procedure: k6001 
o|contracted procedure: k6045 
o|contracted procedure: k6051 
o|contracted procedure: k6069 
o|contracted procedure: k6073 
o|contracted procedure: k6062 
o|contracted procedure: k6090 
o|contracted procedure: k6093 
o|contracted procedure: k6096 
o|contracted procedure: k6104 
o|contracted procedure: k6112 
o|contracted procedure: k6130 
o|contracted procedure: k6133 
o|contracted procedure: k6277 
o|contracted procedure: k6204 
o|contracted procedure: k6207 
o|contracted procedure: k6256 
o|contracted procedure: k6247 
o|contracted procedure: k6273 
o|contracted procedure: k6264 
o|contracted procedure: k6210 
o|contracted procedure: k6222 
o|contracted procedure: k6232 
o|contracted procedure: k6236 
o|contracted procedure: k6285 
o|contracted procedure: k6288 
o|contracted procedure: k6314 
o|contracted procedure: k6363 
o|contracted procedure: k6400 
o|contracted procedure: k6409 
o|contracted procedure: k6446 
o|contracted procedure: k6452 
o|contracted procedure: k6458 
o|contracted procedure: k6464 
o|contracted procedure: k6501 
o|contracted procedure: k6513 
o|contracted procedure: k6523 
o|contracted procedure: k6527 
o|contracted procedure: k6484 
o|contracted procedure: k6498 
o|propagated global variable: g927929 ##compiler#simplified-ops 
o|contracted procedure: k6530 
o|contracted procedure: k6558 
o|contracted procedure: k6574 
o|contracted procedure: k6582 
o|contracted procedure: k6818 
o|contracted procedure: k6814 
o|contracted procedure: k6585 
o|contracted procedure: k6758 
o|contracted procedure: k6600 
o|contracted procedure: k6749 
o|contracted procedure: k6603 
o|contracted procedure: k6611 
o|contracted procedure: k6620 
o|contracted procedure: k6707 
o|contracted procedure: k6632 
o|contracted procedure: k6642 
o|contracted procedure: k6662 
o|contracted procedure: k6658 
o|contracted procedure: k6698 
o|contracted procedure: k6673 
o|contracted procedure: k6689 
o|contracted procedure: k6680 
o|contracted procedure: k6730 
o|contracted procedure: k6713 
o|contracted procedure: k6725 
o|contracted procedure: k6733 
o|contracted procedure: k6740 
o|contracted procedure: k6795 
o|contracted procedure: k6767 
o|contracted procedure: k6790 
o|contracted procedure: k6773 
o|contracted procedure: k6785 
o|contracted procedure: k6824 
o|contracted procedure: k6827 
o|contracted procedure: k6839 
o|contracted procedure: k6849 
o|contracted procedure: k6853 
o|contracted procedure: k6874 
o|contracted procedure: k6877 
o|contracted procedure: k6880 
o|contracted procedure: k6927 
o|contracted procedure: k6923 
o|contracted procedure: k6901 
o|contracted procedure: k6904 
o|contracted procedure: k6910 
o|contracted procedure: k6933 
o|contracted procedure: k6997 
o|contracted procedure: k6971 
o|contracted procedure: k6955 
o|contracted procedure: k6963 
o|contracted procedure: k6993 
o|contracted procedure: k7005 
o|contracted procedure: k7012 
o|contracted procedure: k7040 
o|contracted procedure: k7036 
o|contracted procedure: k7057 
o|contracted procedure: k7072 
o|contracted procedure: k7227 
o|contracted procedure: k7087 
o|contracted procedure: k7090 
o|contracted procedure: k7100 
o|contracted procedure: k7120 
o|contracted procedure: k7116 
o|contracted procedure: k7112 
o|contracted procedure: k7138 
o|contracted procedure: k7151 
o|contracted procedure: k7142 
o|contracted procedure: k7170 
o|contracted procedure: k7187 
o|contracted procedure: k7199 
o|contracted procedure: k7195 
o|contracted procedure: k7191 
o|contracted procedure: k7183 
o|contracted procedure: k7174 
o|contracted procedure: k7206 
o|contracted procedure: k7221 
o|contracted procedure: k7217 
o|contracted procedure: k7213 
o|contracted procedure: k7236 
o|contracted procedure: k7246 
o|contracted procedure: k7250 
o|contracted procedure: k7259 
o|contracted procedure: k7269 
o|contracted procedure: k7273 
o|contracted procedure: k7307 
o|contracted procedure: k7282 
o|contracted procedure: k7292 
o|contracted procedure: k7296 
o|contracted procedure: k7300 
o|contracted procedure: k7304 
o|contracted procedure: k7355 
o|contracted procedure: k7319 
o|contracted procedure: k7345 
o|contracted procedure: k7349 
o|contracted procedure: k7341 
o|contracted procedure: k7322 
o|contracted procedure: k7325 
o|contracted procedure: k7333 
o|contracted procedure: k7337 
o|contracted procedure: k7371 
o|contracted procedure: k7382 
o|contracted procedure: k7391 
o|contracted procedure: k7406 
o|contracted procedure: k7422 
o|contracted procedure: k7429 
o|contracted procedure: k7471 
o|contracted procedure: k7503 
o|contracted procedure: k7524 
o|contracted procedure: k7520 
o|contracted procedure: k7516 
o|contracted procedure: k7507 
o|contracted procedure: k7611 
o|contracted procedure: k7615 
o|contracted procedure: k7527 
o|contracted procedure: k7530 
o|contracted procedure: k7533 
o|contracted procedure: k7607 
o|contracted procedure: k7539 
o|contracted procedure: k7598 
o|contracted procedure: k7545 
o|contracted procedure: k7580 
o|contracted procedure: k7589 
o|contracted procedure: k7551 
o|contracted procedure: k7563 
o|contracted procedure: k7567 
o|contracted procedure: k7621 
o|contracted procedure: k7689 
o|contracted procedure: k7693 
o|contracted procedure: k7630 
o|contracted procedure: k7647 
o|contracted procedure: k7650 
o|contracted procedure: k7653 
o|contracted procedure: k7665 
o|contracted procedure: k7682 
o|contracted procedure: k7678 
o|contracted procedure: k7669 
o|contracted procedure: k7699 
o|contracted procedure: k7785 
o|contracted procedure: k7719 
o|contracted procedure: k7740 
o|contracted procedure: k7744 
o|contracted procedure: k7761 
o|contracted procedure: k7765 
o|contracted procedure: k7757 
o|contracted procedure: k7778 
o|contracted procedure: k7791 
o|contracted procedure: k7861 
o|contracted procedure: k7803 
o|contracted procedure: k7856 
o|contracted procedure: k7826 
o|contracted procedure: k7838 
o|contracted procedure: k7846 
o|contracted procedure: k7830 
o|contracted procedure: k7850 
o|contracted procedure: k7867 
o|contracted procedure: k7953 
o|contracted procedure: k7887 
o|contracted procedure: k7893 
o|contracted procedure: k7896 
o|contracted procedure: k7899 
o|contracted procedure: k7911 
o|contracted procedure: k7928 
o|contracted procedure: k7936 
o|contracted procedure: k7932 
o|contracted procedure: k7924 
o|contracted procedure: k7915 
o|contracted procedure: k7959 
o|contracted procedure: k7965 
o|contracted procedure: k7968 
o|contracted procedure: k8045 
o|contracted procedure: k7977 
o|contracted procedure: k8000 
o|contracted procedure: k8017 
o|contracted procedure: k8038 
o|contracted procedure: k8034 
o|contracted procedure: k8030 
o|contracted procedure: k8021 
o|contracted procedure: k8013 
o|contracted procedure: k8004 
o|contracted procedure: k8051 
o|contracted procedure: k8057 
o|contracted procedure: k8060 
o|contracted procedure: k8133 
o|contracted procedure: k8069 
o|contracted procedure: k8092 
o|contracted procedure: k8129 
o|contracted procedure: k8109 
o|contracted procedure: k8105 
o|contracted procedure: k8096 
o|contracted procedure: k8117 
o|contracted procedure: k8125 
o|contracted procedure: k8141 
o|contracted procedure: k8158 
o|contracted procedure: k8167 
o|contracted procedure: k8410 
o|contracted procedure: k8187 
o|contracted procedure: k8199 
o|contracted procedure: k8203 
o|contracted procedure: k8219 
o|contracted procedure: k8230 
o|contracted procedure: k8233 
o|contracted procedure: k8254 
o|contracted procedure: k8258 
o|contracted procedure: k8271 
o|contracted procedure: k8304 
o|contracted procedure: k8301 
o|contracted procedure: k8279 
o|contracted procedure: k8275 
o|contracted procedure: k8267 
o|contracted procedure: k8297 
o|contracted procedure: k8319 
o|contracted procedure: k8322 
o|contracted procedure: k8325 
o|contracted procedure: k8333 
o|contracted procedure: k8341 
o|contracted procedure: k8353 
o|contracted procedure: k8356 
o|contracted procedure: k8359 
o|contracted procedure: k8367 
o|contracted procedure: k8396 
o|contracted procedure: k8381 
o|contracted procedure: k8390 
o|contracted procedure: k8406 
o|contracted procedure: k8417 
o|contracted procedure: k8426 
o|contracted procedure: k8429 
o|contracted procedure: k8443 
o|contracted procedure: k8461 
o|contracted procedure: k8473 
o|contracted procedure: k8465 
o|contracted procedure: k8484 
o|contracted procedure: k8491 
o|contracted procedure: k8500 
o|contracted procedure: k8510 
o|contracted procedure: k8519 
o|contracted procedure: k8522 
o|contracted procedure: k8540 
o|contracted procedure: k8570 
o|contracted procedure: k8555 
o|contracted procedure: k8577 
o|contracted procedure: k8585 
o|contracted procedure: k8605 
o|contracted procedure: k8608 
o|contracted procedure: k8611 
o|contracted procedure: k8669 
o|contracted procedure: k8617 
o|contracted procedure: k8623 
o|contracted procedure: k8635 
o|contracted procedure: k8639 
o|contracted procedure: k8651 
o|contracted procedure: k8675 
o|contracted procedure: k8695 
o|contracted procedure: k8698 
o|contracted procedure: k8707 
o|contracted procedure: k8736 
o|contracted procedure: k8732 
o|contracted procedure: k8739 
o|contracted procedure: k8752 
o|contracted procedure: k8833 
o|contracted procedure: k8837 
o|contracted procedure: k8761 
o|contracted procedure: k8778 
o|contracted procedure: k8784 
o|contracted procedure: k8787 
o|contracted procedure: k8799 
o|contracted procedure: k8812 
o|contracted procedure: k8803 
o|contracted procedure: k8843 
o|contracted procedure: k8941 
o|contracted procedure: k8852 
o|contracted procedure: k8858 
o|contracted procedure: k8933 
o|contracted procedure: k8875 
o|contracted procedure: k8903 
o|contracted procedure: k8887 
o|contracted procedure: k8929 
o|contracted procedure: k8909 
o|contracted procedure: k8921 
o|contracted procedure: k8925 
o|contracted procedure: k8947 
o|contracted procedure: k8950 
o|contracted procedure: k8953 
o|contracted procedure: k8956 
o|contracted procedure: k8959 
o|contracted procedure: k8971 
o|contracted procedure: k8974 
o|contracted procedure: k8991 
o|contracted procedure: k9003 
o|contracted procedure: k9016 
o|contracted procedure: k9007 
o|contracted procedure: k9031 
o|inlining procedure: k9028 
o|contracted procedure: k9040 
o|contracted procedure: k9053 
o|contracted procedure: k9049 
o|inlining procedure: k9028 
o|contracted procedure: k9056 
o|contracted procedure: k9063 
o|contracted procedure: k9088 
o|contracted procedure: k9081 
o|contracted procedure: k9094 
o|contracted procedure: k9167 
o|contracted procedure: k9171 
o|contracted procedure: k9103 
o|contracted procedure: k9126 
o|contracted procedure: k9143 
o|contracted procedure: k9139 
o|contracted procedure: k9130 
o|contracted procedure: k9163 
o|contracted procedure: k9150 
o|contracted procedure: k9177 
o|contracted procedure: k9186 
o|contracted procedure: k9209 
o|contracted procedure: k9213 
o|contracted procedure: k9221 
o|contracted procedure: k9227 
o|contracted procedure: k9244 
o|contracted procedure: k9247 
o|contracted procedure: k9256 
o|contracted procedure: k9268 
o|contracted procedure: k9272 
o|contracted procedure: k9355 
o|contracted procedure: k9282 
o|contracted procedure: k9294 
o|contracted procedure: k9298 
o|contracted procedure: k9306 
o|contracted procedure: k9309 
o|contracted procedure: k9321 
o|contracted procedure: k9325 
o|contracted procedure: k9344 
o|contracted procedure: k9348 
o|contracted procedure: k9389 
o|contracted procedure: k9364 
o|contracted procedure: k9380 
o|contracted procedure: k9371 
o|contracted procedure: k9401 
o|contracted procedure: k9404 
o|contracted procedure: k9410 
o|contracted procedure: k9413 
o|contracted procedure: k9422 
o|contracted procedure: k9445 
o|contracted procedure: k9498 
o|contracted procedure: k9462 
o|contracted procedure: k9458 
o|contracted procedure: k9449 
o|contracted procedure: k9476 
o|contracted procedure: k9486 
o|contracted procedure: k9494 
o|contracted procedure: k9506 
o|contracted procedure: k9523 
o|contracted procedure: k9529 
o|contracted procedure: k9541 
o|contracted procedure: k9553 
o|contracted procedure: k9557 
o|contracted procedure: k9650 
o|contracted procedure: k9567 
o|contracted procedure: k9579 
o|contracted procedure: k9583 
o|contracted procedure: k9597 
o|contracted procedure: k9601 
o|contracted procedure: k9614 
o|contracted procedure: k9626 
o|contracted procedure: k9630 
o|contracted procedure: k9642 
o|contracted procedure: k9646 
o|contracted procedure: k9684 
o|contracted procedure: k9659 
o|contracted procedure: k9675 
o|contracted procedure: k9666 
o|contracted procedure: k9695 
o|contracted procedure: k9698 
o|contracted procedure: k9701 
o|contracted procedure: k9704 
o|contracted procedure: k9713 
o|contracted procedure: k9730 
o|contracted procedure: k9733 
o|contracted procedure: k9745 
o|contracted procedure: k9749 
o|contracted procedure: k9756 
o|contracted procedure: k9768 
o|contracted procedure: k9788 
o|contracted procedure: k9784 
o|contracted procedure: k9794 
o|contracted procedure: k9811 
o|contracted procedure: k9927 
o|contracted procedure: k9817 
o|contracted procedure: k9923 
o|contracted procedure: k9829 
o|contracted procedure: k9861 
o|contracted procedure: k9870 
o|contracted procedure: k9876 
o|contracted procedure: k9893 
o|contracted procedure: k7438 
o|contracted procedure: k7454 
o|contracted procedure: k7460 
o|contracted procedure: k9899 
o|contracted procedure: k9906 
o|contracted procedure: k9916 
o|contracted procedure: k9992 
o|contracted procedure: k10000 
o|contracted procedure: k10008 
o|contracted procedure: k10014 
o|contracted procedure: k10017 
o|contracted procedure: k10033 
o|contracted procedure: k10050 
o|contracted procedure: k10074 
o|contracted procedure: k10105 
o|contracted procedure: k10109 
o|contracted procedure: k10086 
o|contracted procedure: k10093 
o|contracted procedure: k10097 
o|contracted procedure: k10101 
o|contracted procedure: k10131 
o|contracted procedure: k10122 
o|contracted procedure: k10141 
o|contracted procedure: k10148 
o|contracted procedure: k10152 
o|contracted procedure: k10158 
o|contracted procedure: k10168 
o|contracted procedure: k10172 
o|contracted procedure: k10176 
o|contracted procedure: k10184 
o|contracted procedure: k10196 
o|contracted procedure: k10206 
o|contracted procedure: k10210 
o|contracted procedure: k10230 
o|contracted procedure: k10238 
o|contracted procedure: k10246 
o|contracted procedure: k10252 
o|contracted procedure: k10255 
o|contracted procedure: k10258 
o|contracted procedure: k10281 
o|contracted procedure: k10264 
o|contracted procedure: k10277 
o|contracted procedure: k10291 
o|contracted procedure: k10301 
o|contracted procedure: k10308 
o|contracted procedure: k10315 
o|contracted procedure: k10325 
o|contracted procedure: k10348 
o|contracted procedure: k10335 
o|contracted procedure: k10354 
o|contracted procedure: k10366 
o|contracted procedure: k10370 
o|contracted procedure: k10378 
o|contracted procedure: k10384 
o|contracted procedure: k10393 
o|contracted procedure: k10415 
o|contracted procedure: k10419 
o|contracted procedure: k10425 
o|contracted procedure: k10434 
o|contracted procedure: k10456 
o|contracted procedure: k10460 
o|contracted procedure: k10466 
o|contracted procedure: k10469 
o|contracted procedure: k10561 
o|contracted procedure: k10475 
o|contracted procedure: k10552 
o|contracted procedure: k10481 
o|contracted procedure: k10498 
o|contracted procedure: k10504 
o|contracted procedure: k10507 
o|contracted procedure: k10540 
o|contracted procedure: k10514 
o|contracted procedure: k10531 
o|contracted procedure: k10522 
o|contracted procedure: k10518 
o|contracted procedure: k10567 
o|contracted procedure: k10570 
o|contracted procedure: k10573 
o|contracted procedure: k10586 
o|contracted procedure: k10601 
o|contracted procedure: k10608 
o|contracted procedure: k10612 
o|contracted procedure: k10618 
o|contracted procedure: k10631 
o|contracted procedure: k10639 
o|contracted procedure: k10643 
o|contracted procedure: k10703 
o|contracted procedure: k11406 
o|contracted procedure: k10706 
o|contracted procedure: k10712 
o|contracted procedure: k10728 
o|contracted procedure: k10739 
o|contracted procedure: k10747 
o|contracted procedure: k10755 
o|contracted procedure: k10819 
o|contracted procedure: k10812 
o|contracted procedure: k10758 
o|contracted procedure: k10772 
o|contracted procedure: k10785 
o|contracted procedure: k10789 
o|contracted procedure: k10781 
o|contracted procedure: k10768 
o|contracted procedure: k10809 
o|contracted procedure: k10805 
o|contracted procedure: k10797 
o|contracted procedure: k10831 
o|contracted procedure: k10839 
o|contracted procedure: k10897 
o|contracted procedure: k10907 
o|contracted procedure: k10911 
o|contracted procedure: k10853 
o|contracted procedure: k10868 
o|contracted procedure: k10877 
o|contracted procedure: k10881 
o|contracted procedure: k10984 
o|contracted procedure: k10926 
o|contracted procedure: k10978 
o|contracted procedure: k10930 
o|contracted procedure: k10951 
o|contracted procedure: k10960 
o|contracted procedure: k10969 
o|contracted procedure: k10942 
o|contracted procedure: k10933 
o|contracted procedure: k10996 
o|contracted procedure: k11006 
o|contracted procedure: k11010 
o|contracted procedure: k11020 
o|contracted procedure: k11024 
o|contracted procedure: k11376 
o|contracted procedure: k11028 
o|contracted procedure: k11039 
o|contracted procedure: k11047 
o|contracted procedure: k11055 
o|contracted procedure: k11061 
o|contracted procedure: k11064 
o|contracted procedure: k11067 
o|contracted procedure: k11075 
o|contracted procedure: k11083 
o|contracted procedure: k11276 
o|contracted procedure: k11089 
o|contracted procedure: k11267 
o|contracted procedure: k11095 
o|contracted procedure: k11099 
o|contracted procedure: k11241 
o|contracted procedure: k11105 
o|contracted procedure: k11121 
o|contracted procedure: k11125 
o|contracted procedure: k11136 
o|contracted procedure: k11128 
o|contracted procedure: k11141 
o|contracted procedure: k11149 
o|contracted procedure: k11229 
o|contracted procedure: k11152 
o|contracted procedure: k11184 
o|contracted procedure: k11188 
o|contracted procedure: k11180 
o|contracted procedure: k11171 
o|contracted procedure: k11205 
o|contracted procedure: k11196 
o|contracted procedure: k11220 
o|contracted procedure: k11216 
o|contracted procedure: k11208 
o|contracted procedure: k11247 
o|contracted procedure: k11282 
o|contracted procedure: k11285 
o|contracted procedure: k11288 
o|contracted procedure: k11294 
o|contracted procedure: k11298 
o|contracted procedure: k11308 
o|contracted procedure: k11320 
o|contracted procedure: k11330 
o|contracted procedure: k11334 
o|contracted procedure: k11337 
o|contracted procedure: k11349 
o|contracted procedure: k11359 
o|contracted procedure: k11363 
o|contracted procedure: k11386 
o|contracted procedure: k11392 
o|contracted procedure: k11399 
o|contracted procedure: k11409 
o|contracted procedure: k11431 
o|contracted procedure: k11456 
o|contracted procedure: k11472 
o|contracted procedure: k11464 
o|contracted procedure: k11468 
o|contracted procedure: k11518 
o|contracted procedure: k11526 
o|contracted procedure: k11534 
o|contracted procedure: k11540 
o|contracted procedure: k11543 
o|contracted procedure: k11546 
o|contracted procedure: k11549 
o|contracted procedure: k11563 
o|contracted procedure: k11573 
o|contracted procedure: k11580 
o|contracted procedure: k11593 
o|contracted procedure: k11684 
o|contracted procedure: k11599 
o|contracted procedure: k11675 
o|contracted procedure: k11602 
o|contracted procedure: k11666 
o|contracted procedure: k11605 
o|contracted procedure: k11657 
o|contracted procedure: k11611 
o|contracted procedure: k11623 
o|contracted procedure: k11507 
o|contracted procedure: k11482 
o|contracted procedure: k11498 
o|contracted procedure: k11489 
o|contracted procedure: k11634 
o|contracted procedure: k11699 
o|contracted procedure: k11705 
o|contracted procedure: k11708 
o|contracted procedure: k11715 
o|contracted procedure: k11738 
o|contracted procedure: k11756 
o|contracted procedure: k11768 
o|contracted procedure: k11778 
o|contracted procedure: k11782 
o|contracted procedure: k11802 
o|contracted procedure: k11812 
o|contracted procedure: k11929 
o|contracted procedure: k11817 
o|contracted procedure: k11920 
o|contracted procedure: k11820 
o|contracted procedure: k11828 
o|contracted procedure: k11831 
o|contracted procedure: k11834 
o|contracted procedure: k11837 
o|contracted procedure: k11877 
o|contracted procedure: k11849 
o|contracted procedure: k11853 
o|contracted procedure: k11868 
o|contracted procedure: k11886 
o|contracted procedure: k11889 
o|contracted procedure: k11892 
o|contracted procedure: k11900 
o|contracted procedure: k11908 
o|contracted procedure: k11932 
o|contracted procedure: k11960 
o|contracted procedure: k12035 
o|contracted procedure: k11963 
o|contracted procedure: k11984 
o|contracted procedure: k11975 
o|contracted procedure: k12004 
o|contracted procedure: k12012 
o|contracted procedure: k12026 
o|contracted procedure: k12016 
o|contracted procedure: k12038 
o|contracted procedure: k12050 
o|contracted procedure: k12060 
o|contracted procedure: k12064 
o|contracted procedure: k12068 
o|contracted procedure: k12080 
o|contracted procedure: k12090 
o|contracted procedure: k12094 
o|contracted procedure: k12397 
o|contracted procedure: k12100 
o|contracted procedure: k12125 
o|contracted procedure: k12138 
o|contracted procedure: k12151 
o|contracted procedure: k12207 
o|contracted procedure: k12224 
o|contracted procedure: k12344 
o|contracted procedure: k12241 
o|contracted procedure: k12237 
o|contracted procedure: k12228 
o|contracted procedure: k12220 
o|contracted procedure: k12211 
o|contracted procedure: k12164 
o|contracted procedure: k12173 
o|contracted procedure: k12155 
o|contracted procedure: k12147 
o|contracted procedure: k12129 
o|contracted procedure: k12121 
o|contracted procedure: k12193 
o|contracted procedure: k12249 
o|contracted procedure: k12266 
o|contracted procedure: k12257 
o|contracted procedure: k12284 
o|contracted procedure: k12293 
o|contracted procedure: k12332 
o|contracted procedure: k12308 
o|contracted procedure: k12312 
o|contracted procedure: k12328 
o|contracted procedure: k12336 
o|contracted procedure: k12388 
o|contracted procedure: k12355 
o|contracted procedure: k12379 
o|contracted procedure: k12358 
o|contracted procedure: k12370 
o|contracted procedure: k12401 
o|contracted procedure: k12413 
o|contracted procedure: k12435 
o|contracted procedure: k12431 
o|contracted procedure: k12416 
o|contracted procedure: k12419 
o|contracted procedure: k12427 
o|contracted procedure: k12446 
o|contracted procedure: k12456 
o|contracted procedure: k12468 
o|contracted procedure: k12480 
o|contracted procedure: k12483 
o|contracted procedure: k12486 
o|contracted procedure: k12494 
o|contracted procedure: k12502 
o|contracted procedure: k12465 
o|contracted procedure: k12514 
o|contracted procedure: k12517 
o|contracted procedure: k12520 
o|contracted procedure: k12528 
o|contracted procedure: k12536 
o|contracted procedure: k12542 
o|contracted procedure: k12552 
o|contracted procedure: k12561 
o|contracted procedure: k12571 
o|contracted procedure: k12575 
o|contracted procedure: k12786 
o|contracted procedure: k12782 
o|contracted procedure: k12766 
o|contracted procedure: k12778 
o|contracted procedure: k12774 
o|contracted procedure: k12770 
o|contracted procedure: k12723 
o|contracted procedure: k12727 
o|contracted procedure: k12762 
o|contracted procedure: k12758 
o|contracted procedure: k12745 
o|contracted procedure: k12579 
o|contracted procedure: k12711 
o|contracted procedure: k12719 
o|contracted procedure: k12715 
o|contracted procedure: k12707 
o|contracted procedure: k12587 
o|contracted procedure: k12591 
o|contracted procedure: k12597 
o|contracted procedure: k12606 
o|contracted procedure: k12703 
o|contracted procedure: k12612 
o|contracted procedure: k12699 
o|contracted procedure: k12618 
o|contracted procedure: k12630 
o|contracted procedure: k12647 
o|contracted procedure: k12643 
o|contracted procedure: k12634 
o|contracted procedure: k12683 
o|contracted procedure: k12675 
o|contracted procedure: k12666 
o|contracted procedure: k12583 
o|contracted procedure: k13467 
o|contracted procedure: k13531 
o|contracted procedure: k13547 
o|contracted procedure: k13535 
o|contracted procedure: k13543 
o|contracted procedure: k13539 
o|contracted procedure: k13471 
o|contracted procedure: k13527 
o|contracted procedure: k13479 
o|contracted procedure: k13487 
o|contracted procedure: k13507 
o|contracted procedure: k13523 
o|contracted procedure: k13511 
o|contracted procedure: k13519 
o|contracted procedure: k13515 
o|contracted procedure: k13491 
o|contracted procedure: k13503 
o|contracted procedure: k13499 
o|contracted procedure: k13495 
o|contracted procedure: k13483 
o|contracted procedure: k13475 
o|contracted procedure: k13384 
o|contracted procedure: k13388 
o|contracted procedure: k13397 
o|contracted procedure: k13459 
o|contracted procedure: k13415 
o|contracted procedure: k13450 
o|contracted procedure: k13421 
o|contracted procedure: k13433 
o|contracted procedure: k12790 
o|contracted procedure: k13320 
o|contracted procedure: k13364 
o|contracted procedure: k13380 
o|contracted procedure: k13368 
o|contracted procedure: k13376 
o|contracted procedure: k13372 
o|contracted procedure: k13324 
o|contracted procedure: k13360 
o|contracted procedure: k13332 
o|contracted procedure: k13344 
o|contracted procedure: k13356 
o|contracted procedure: k13352 
o|contracted procedure: k13348 
o|contracted procedure: k13340 
o|contracted procedure: k13336 
o|contracted procedure: k13328 
o|contracted procedure: k13254 
o|contracted procedure: k13258 
o|contracted procedure: k13267 
o|contracted procedure: k13312 
o|contracted procedure: k13279 
o|contracted procedure: k13307 
o|contracted procedure: k13291 
o|contracted procedure: k12794 
o|contracted procedure: k13246 
o|contracted procedure: k13250 
o|contracted procedure: k12895 
o|contracted procedure: k12899 
o|contracted procedure: k12909 
o|contracted procedure: k12920 
o|contracted procedure: k12928 
o|contracted procedure: k12936 
o|contracted procedure: k12942 
o|contracted procedure: k13242 
o|contracted procedure: k12948 
o|contracted procedure: k12963 
o|contracted procedure: k12971 
o|contracted procedure: k12979 
o|contracted procedure: k12987 
o|contracted procedure: k12993 
o|contracted procedure: k13000 
o|contracted procedure: k13004 
o|contracted procedure: k13012 
o|contracted procedure: k13021 
o|contracted procedure: k13220 
o|contracted procedure: k13027 
o|contracted procedure: k13216 
o|contracted procedure: k13034 
o|contracted procedure: k13040 
o|contracted procedure: k13051 
o|contracted procedure: k13059 
o|contracted procedure: k13067 
o|contracted procedure: k13105 
o|contracted procedure: k13101 
o|contracted procedure: k13092 
o|contracted procedure: k13080 
o|contracted procedure: k13084 
o|contracted procedure: k13088 
o|contracted procedure: k13111 
o|contracted procedure: k13133 
o|contracted procedure: k13212 
o|contracted procedure: k13139 
o|contracted procedure: k13157 
o|contracted procedure: k13196 
o|contracted procedure: k13192 
o|contracted procedure: k13163 
o|contracted procedure: k13181 
o|contracted procedure: k13172 
o|contracted procedure: k12798 
o|contracted procedure: k12867 
o|contracted procedure: k12891 
o|contracted procedure: k12887 
o|contracted procedure: k12871 
o|contracted procedure: k12883 
o|contracted procedure: k12879 
o|contracted procedure: k12875 
o|contracted procedure: k12806 
o|contracted procedure: k12810 
o|contracted procedure: k12863 
o|contracted procedure: k12855 
o|contracted procedure: k12825 
o|contracted procedure: k12850 
o|contracted procedure: k12846 
o|contracted procedure: k12837 
o|contracted procedure: k12802 
o|contracted procedure: k13645 
o|contracted procedure: k13637 
o|contracted procedure: k13641 
o|contracted procedure: k13633 
o|contracted procedure: k13629 
o|contracted procedure: k13555 
o|contracted procedure: k13559 
o|contracted procedure: k13572 
o|contracted procedure: k13581 
o|contracted procedure: k13592 
o|contracted procedure: k13606 
o|contracted procedure: k13602 
o|contracted procedure: k13595 
o|contracted procedure: k13610 
o|contracted procedure: k13622 
o|contracted procedure: k13551 
o|simplifications: ((let . 122)) 
o|removed binding forms: 1127 
o|inlining procedure: k5647 
o|inlining procedure: k9753 
o|inlining procedure: k9753 
o|replaced variables: 275 
o|removed binding forms: 1 
o|simplifications: ((if . 1)) 
o|replaced variables: 3 
o|removed binding forms: 185 
o|contracted procedure: k4397 
o|contracted procedure: k4414 
o|contracted procedure: k12498 
o|removed binding forms: 4 
o|direct leaf routine/allocation: touch30 0 
o|direct leaf routine/allocation: touch167 0 
o|direct leaf routine/allocation: for-each-loop187205 0 
o|direct leaf routine/allocation: g230239 0 
o|direct leaf routine/allocation: touch960 0 
o|direct leaf routine/allocation: close2565 6 
o|direct leaf routine/allocation: g10671068 10 
o|contracted procedure: "(optimizer.scm:76) k3917" 
o|converted assignments to bindings: (for-each-loop187205) 
o|contracted procedure: "(optimizer.scm:162) k4267" 
o|contracted procedure: "(optimizer.scm:162) k426714308" 
o|contracted procedure: "(optimizer.scm:156) k4335" 
o|contracted procedure: "(optimizer.scm:179) k4404" 
o|contracted procedure: "(optimizer.scm:202) k4474" 
o|contracted procedure: "(optimizer.scm:232) k4611" 
o|contracted procedure: "(optimizer.scm:236) k4643" 
o|contracted procedure: "(optimizer.scm:254) k4729" 
o|contracted procedure: "(optimizer.scm:274) k4908" 
o|contracted procedure: "(optimizer.scm:290) k4989" 
o|contracted procedure: "(optimizer.scm:325) k5115" 
o|contracted procedure: "(optimizer.scm:392) k5292" 
o|contracted procedure: "(optimizer.scm:399) k5372" 
o|contracted procedure: "(optimizer.scm:408) k5444" 
o|contracted procedure: "(optimizer.scm:474) k6142" 
o|contracted procedure: "(optimizer.scm:479) k6168" 
o|contracted procedure: "(optimizer.scm:486) k6185" 
o|contracted procedure: "(optimizer.scm:1639) k11583" 
o|contracted procedure: "(optimizer.scm:1652) k11748" 
o|simplifications: ((let . 1)) 
o|removed binding forms: 20 
o|replaced variables: 4 
o|removed binding forms: 2 
o|customizable procedures: (loop1059 k13073 loop21167 loop11127 g26932700 for-each-loop26922970 g27172726 map-loop27112784 map-loop27952815 map-loop28262843 k12106 loop2898 descend2850 g29202927 for-each-loop29192963 g29342941 for-each-loop29332958 map-loop27452762 g26672674 for-each-loop26662684 k11555 k11630 k11617 k11569 walk2567 tmp13632 k10718 for-each-loop24292439 for-each-loop24122422 g23792380 g24512458 for-each-loop24502480 for-each-loop25202541 k10484 k10437 k10396 rec2213 g21912198 for-each-loop21902201 scan2147 walk2146 transform2148 k7447 loop2129 k9532 k9147 k9020 k8816 k8719 k8543 k8213 k8216 map-loop16941712 map-loop17221739 k7722 k7485 k7397 argc-ok?1484 map-loop12941313 g13261348 for-each-loop13251353 g13661373 for-each-loop13651381 g13901397 for-each-loop13891407 k7096 find-path1334 find1337 g971978 for-each-loop9701038 test961 k6597 k6617 k6629 k6638 for-each-loop920932 k6394 lp900 k6291 k6182 for-each-loop875887 g809818 map-loop803828 k5095 k5889 k5175 k5213 k5247 k5544 g741750 map-loop735765 loop655 g676685 map-loop670695 invalidate-gae!168 g619626 for-each-loop618636 g502509 for-each-loop501519 walk-generic173 k4726 k4743 g402411 map-loop396421 g353354 k4667 test164 g313314 replace-var171 walk1172 k4466 walk170 map-loop224242 simplify169 for-each-loop110140 k3911 k4012 mark28 remember29 scan-each31 k3884 k3867 g4350 for-each-loop4253 scan32 k3765) 
o|calls to known targets: 393 
o|identified direct recursive calls: f_4200 1 
o|identified direct recursive calls: f_4312 1 
o|identified direct recursive calls: f_7314 1 
o|identified direct recursive calls: f_9865 1 
o|identified direct recursive calls: f_9985 2 
o|identified direct recursive calls: f_10223 2 
o|unused rest argument: _2957 f_12020 
o|unused rest argument: _2915 f_12201 
o|identified direct recursive calls: f_12408 1 
o|unused rest argument: _2823 f_12450 
o|identified direct recursive calls: f_12475 1 
o|fast box initializations: 64 
o|dropping unused closure argument: f_4200 
o|dropping unused closure argument: f_4186 
*/
/* end of file */

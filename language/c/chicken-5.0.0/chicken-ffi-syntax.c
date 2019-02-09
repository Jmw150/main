/* Generated from chicken-ffi-syntax.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: chicken-ffi-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file chicken-ffi-syntax.c
   unit: chicken-ffi-syntax
   uses: data-structures extras internal library expand
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[97];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,16),40,97,50,54,57,51,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,42),40,99,111,109,112,105,108,101,114,45,111,110,108,121,45,101,114,45,116,114,97,110,115,102,111,114,109,101,114,32,116,114,97,110,115,102,111,114,109,101,114,41,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,16),40,97,50,55,54,52,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,48,48,56,32,103,49,48,50,48,41,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,16),40,97,50,56,48,56,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,57,54,55,32,103,57,55,57,41,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,16),40,97,50,57,48,51,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,57,51,51,32,103,57,52,53,41,0,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,16),40,97,50,57,57,52,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,57,50,32,103,57,48,52,41,0,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,16),40,97,51,48,56,57,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,53,49,32,103,56,54,51,41,0,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,50,50,32,103,56,51,52,41,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,16),40,97,51,49,56,48,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,16),40,97,51,51,53,53,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,16),40,97,51,51,55,50,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,16),40,97,51,51,56,57,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,16),40,97,51,52,49,48,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,16),40,97,51,52,55,50,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,6),40,103,55,49,52,41,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,98,105,110,100,105,110,103,115,32,97,108,105,97,115,101,115,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,11),40,97,51,54,51,57,32,98,32,97,41,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,10),40,103,49,53,56,32,120,32,114,41,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,15),40,102,111,108,100,114,49,53,51,32,103,49,53,52,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,49,57,53,32,103,50,48,55,41,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,49,54,56,32,103,49,56,48,41,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,108,115,116,115,41,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,55,48,56,32,103,55,50,48,41,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,16),40,97,51,53,51,55,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,16),40,97,51,55,48,48,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,13),40,97,51,55,55,56,32,120,32,114,32,99,41,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,52,57,32,103,54,54,49,41,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,50,50,32,103,54,51,52,41,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,16),40,97,51,55,57,53,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1392)
static void C_ccall f_1392(C_word c,C_word *av) C_noret;
C_noret_decl(f_1395)
static void C_ccall f_1395(C_word c,C_word *av) C_noret;
C_noret_decl(f_1398)
static void C_ccall f_1398(C_word c,C_word *av) C_noret;
C_noret_decl(f_1401)
static void C_ccall f_1401(C_word c,C_word *av) C_noret;
C_noret_decl(f_1404)
static void C_ccall f_1404(C_word c,C_word *av) C_noret;
C_noret_decl(f_1620)
static void C_fcall f_1620(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1628)
static void C_fcall f_1628(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1636)
static void C_ccall f_1636(C_word c,C_word *av) C_noret;
C_noret_decl(f_1647)
static void C_ccall f_1647(C_word c,C_word *av) C_noret;
C_noret_decl(f_1660)
static void C_fcall f_1660(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1674)
static void C_ccall f_1674(C_word c,C_word *av) C_noret;
C_noret_decl(f_1678)
static void C_ccall f_1678(C_word c,C_word *av) C_noret;
C_noret_decl(f_1690)
static void C_ccall f_1690(C_word c,C_word *av) C_noret;
C_noret_decl(f_1692)
static void C_fcall f_1692(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1739)
static void C_ccall f_1739(C_word c,C_word *av) C_noret;
C_noret_decl(f_1741)
static void C_fcall f_1741(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1815)
static C_word C_fcall f_1815(C_word t0);
C_noret_decl(f_2686)
static void C_ccall f_2686(C_word c,C_word *av) C_noret;
C_noret_decl(f_2688)
static void C_fcall f_2688(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2694)
static void C_ccall f_2694(C_word c,C_word *av) C_noret;
C_noret_decl(f_2701)
static void C_ccall f_2701(C_word c,C_word *av) C_noret;
C_noret_decl(f_2714)
static void C_ccall f_2714(C_word c,C_word *av) C_noret;
C_noret_decl(f_2717)
static void C_ccall f_2717(C_word c,C_word *av) C_noret;
C_noret_decl(f_2720)
static void C_ccall f_2720(C_word c,C_word *av) C_noret;
C_noret_decl(f_2723)
static void C_ccall f_2723(C_word c,C_word *av) C_noret;
C_noret_decl(f_2726)
static void C_ccall f_2726(C_word c,C_word *av) C_noret;
C_noret_decl(f_2729)
static void C_ccall f_2729(C_word c,C_word *av) C_noret;
C_noret_decl(f_2732)
static void C_ccall f_2732(C_word c,C_word *av) C_noret;
C_noret_decl(f_2735)
static void C_ccall f_2735(C_word c,C_word *av) C_noret;
C_noret_decl(f_2738)
static void C_ccall f_2738(C_word c,C_word *av) C_noret;
C_noret_decl(f_2741)
static void C_ccall f_2741(C_word c,C_word *av) C_noret;
C_noret_decl(f_2744)
static void C_ccall f_2744(C_word c,C_word *av) C_noret;
C_noret_decl(f_2747)
static void C_ccall f_2747(C_word c,C_word *av) C_noret;
C_noret_decl(f_2750)
static void C_ccall f_2750(C_word c,C_word *av) C_noret;
C_noret_decl(f_2753)
static void C_ccall f_2753(C_word c,C_word *av) C_noret;
C_noret_decl(f_2756)
static void C_ccall f_2756(C_word c,C_word *av) C_noret;
C_noret_decl(f_2759)
static void C_ccall f_2759(C_word c,C_word *av) C_noret;
C_noret_decl(f_2763)
static void C_ccall f_2763(C_word c,C_word *av) C_noret;
C_noret_decl(f_2765)
static void C_ccall f_2765(C_word c,C_word *av) C_noret;
C_noret_decl(f_2769)
static void C_ccall f_2769(C_word c,C_word *av) C_noret;
C_noret_decl(f_2772)
static void C_ccall f_2772(C_word c,C_word *av) C_noret;
C_noret_decl(f_2775)
static void C_ccall f_2775(C_word c,C_word *av) C_noret;
C_noret_decl(f_2778)
static void C_ccall f_2778(C_word c,C_word *av) C_noret;
C_noret_decl(f_2793)
static void C_ccall f_2793(C_word c,C_word *av) C_noret;
C_noret_decl(f_2807)
static void C_ccall f_2807(C_word c,C_word *av) C_noret;
C_noret_decl(f_2809)
static void C_ccall f_2809(C_word c,C_word *av) C_noret;
C_noret_decl(f_2813)
static void C_ccall f_2813(C_word c,C_word *av) C_noret;
C_noret_decl(f_2842)
static void C_ccall f_2842(C_word c,C_word *av) C_noret;
C_noret_decl(f_2848)
static void C_ccall f_2848(C_word c,C_word *av) C_noret;
C_noret_decl(f_2852)
static void C_ccall f_2852(C_word c,C_word *av) C_noret;
C_noret_decl(f_2856)
static void C_ccall f_2856(C_word c,C_word *av) C_noret;
C_noret_decl(f_2862)
static void C_fcall f_2862(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2887)
static void C_ccall f_2887(C_word c,C_word *av) C_noret;
C_noret_decl(f_2902)
static void C_ccall f_2902(C_word c,C_word *av) C_noret;
C_noret_decl(f_2904)
static void C_ccall f_2904(C_word c,C_word *av) C_noret;
C_noret_decl(f_2908)
static void C_ccall f_2908(C_word c,C_word *av) C_noret;
C_noret_decl(f_2933)
static void C_ccall f_2933(C_word c,C_word *av) C_noret;
C_noret_decl(f_2939)
static void C_ccall f_2939(C_word c,C_word *av) C_noret;
C_noret_decl(f_2943)
static void C_ccall f_2943(C_word c,C_word *av) C_noret;
C_noret_decl(f_2947)
static void C_ccall f_2947(C_word c,C_word *av) C_noret;
C_noret_decl(f_2953)
static void C_fcall f_2953(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word *av) C_noret;
C_noret_decl(f_2993)
static void C_ccall f_2993(C_word c,C_word *av) C_noret;
C_noret_decl(f_2995)
static void C_ccall f_2995(C_word c,C_word *av) C_noret;
C_noret_decl(f_2999)
static void C_ccall f_2999(C_word c,C_word *av) C_noret;
C_noret_decl(f_3028)
static void C_ccall f_3028(C_word c,C_word *av) C_noret;
C_noret_decl(f_3034)
static void C_ccall f_3034(C_word c,C_word *av) C_noret;
C_noret_decl(f_3038)
static void C_ccall f_3038(C_word c,C_word *av) C_noret;
C_noret_decl(f_3042)
static void C_ccall f_3042(C_word c,C_word *av) C_noret;
C_noret_decl(f_3048)
static void C_fcall f_3048(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3073)
static void C_ccall f_3073(C_word c,C_word *av) C_noret;
C_noret_decl(f_3088)
static void C_ccall f_3088(C_word c,C_word *av) C_noret;
C_noret_decl(f_3090)
static void C_ccall f_3090(C_word c,C_word *av) C_noret;
C_noret_decl(f_3094)
static void C_ccall f_3094(C_word c,C_word *av) C_noret;
C_noret_decl(f_3119)
static void C_ccall f_3119(C_word c,C_word *av) C_noret;
C_noret_decl(f_3125)
static void C_ccall f_3125(C_word c,C_word *av) C_noret;
C_noret_decl(f_3129)
static void C_ccall f_3129(C_word c,C_word *av) C_noret;
C_noret_decl(f_3133)
static void C_ccall f_3133(C_word c,C_word *av) C_noret;
C_noret_decl(f_3139)
static void C_fcall f_3139(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3164)
static void C_ccall f_3164(C_word c,C_word *av) C_noret;
C_noret_decl(f_3179)
static void C_ccall f_3179(C_word c,C_word *av) C_noret;
C_noret_decl(f_3181)
static void C_ccall f_3181(C_word c,C_word *av) C_noret;
C_noret_decl(f_3185)
static void C_ccall f_3185(C_word c,C_word *av) C_noret;
C_noret_decl(f_3188)
static void C_fcall f_3188(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3191)
static void C_ccall f_3191(C_word c,C_word *av) C_noret;
C_noret_decl(f_3194)
static void C_ccall f_3194(C_word c,C_word *av) C_noret;
C_noret_decl(f_3203)
static void C_ccall f_3203(C_word c,C_word *av) C_noret;
C_noret_decl(f_3220)
static void C_fcall f_3220(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3235)
static void C_ccall f_3235(C_word c,C_word *av) C_noret;
C_noret_decl(f_3249)
static void C_ccall f_3249(C_word c,C_word *av) C_noret;
C_noret_decl(f_3251)
static void C_fcall f_3251(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3276)
static void C_ccall f_3276(C_word c,C_word *av) C_noret;
C_noret_decl(f_3285)
static void C_fcall f_3285(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3354)
static void C_ccall f_3354(C_word c,C_word *av) C_noret;
C_noret_decl(f_3356)
static void C_ccall f_3356(C_word c,C_word *av) C_noret;
C_noret_decl(f_3360)
static void C_ccall f_3360(C_word c,C_word *av) C_noret;
C_noret_decl(f_3371)
static void C_ccall f_3371(C_word c,C_word *av) C_noret;
C_noret_decl(f_3373)
static void C_ccall f_3373(C_word c,C_word *av) C_noret;
C_noret_decl(f_3377)
static void C_ccall f_3377(C_word c,C_word *av) C_noret;
C_noret_decl(f_3388)
static void C_ccall f_3388(C_word c,C_word *av) C_noret;
C_noret_decl(f_3390)
static void C_ccall f_3390(C_word c,C_word *av) C_noret;
C_noret_decl(f_3394)
static void C_ccall f_3394(C_word c,C_word *av) C_noret;
C_noret_decl(f_3409)
static void C_ccall f_3409(C_word c,C_word *av) C_noret;
C_noret_decl(f_3411)
static void C_ccall f_3411(C_word c,C_word *av) C_noret;
C_noret_decl(f_3415)
static void C_ccall f_3415(C_word c,C_word *av) C_noret;
C_noret_decl(f_3418)
static void C_ccall f_3418(C_word c,C_word *av) C_noret;
C_noret_decl(f_3428)
static void C_fcall f_3428(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3436)
static void C_ccall f_3436(C_word c,C_word *av) C_noret;
C_noret_decl(f_3440)
static void C_ccall f_3440(C_word c,C_word *av) C_noret;
C_noret_decl(f_3452)
static void C_ccall f_3452(C_word c,C_word *av) C_noret;
C_noret_decl(f_3471)
static void C_ccall f_3471(C_word c,C_word *av) C_noret;
C_noret_decl(f_3473)
static void C_ccall f_3473(C_word c,C_word *av) C_noret;
C_noret_decl(f_3477)
static void C_ccall f_3477(C_word c,C_word *av) C_noret;
C_noret_decl(f_3480)
static void C_ccall f_3480(C_word c,C_word *av) C_noret;
C_noret_decl(f_3495)
static void C_ccall f_3495(C_word c,C_word *av) C_noret;
C_noret_decl(f_3503)
static void C_ccall f_3503(C_word c,C_word *av) C_noret;
C_noret_decl(f_3509)
static void C_ccall f_3509(C_word c,C_word *av) C_noret;
C_noret_decl(f_3512)
static void C_ccall f_3512(C_word c,C_word *av) C_noret;
C_noret_decl(f_3515)
static void C_ccall f_3515(C_word c,C_word *av) C_noret;
C_noret_decl(f_3518)
static void C_ccall f_3518(C_word c,C_word *av) C_noret;
C_noret_decl(f_3521)
static void C_ccall f_3521(C_word c,C_word *av) C_noret;
C_noret_decl(f_3524)
static void C_ccall f_3524(C_word c,C_word *av) C_noret;
C_noret_decl(f_3528)
static void C_ccall f_3528(C_word c,C_word *av) C_noret;
C_noret_decl(f_3536)
static void C_ccall f_3536(C_word c,C_word *av) C_noret;
C_noret_decl(f_3538)
static void C_ccall f_3538(C_word c,C_word *av) C_noret;
C_noret_decl(f_3542)
static void C_ccall f_3542(C_word c,C_word *av) C_noret;
C_noret_decl(f_3551)
static void C_fcall f_3551(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3559)
static void C_ccall f_3559(C_word c,C_word *av) C_noret;
C_noret_decl(f_3565)
static void C_ccall f_3565(C_word c,C_word *av) C_noret;
C_noret_decl(f_3572)
static void C_ccall f_3572(C_word c,C_word *av) C_noret;
C_noret_decl(f_3576)
static void C_ccall f_3576(C_word c,C_word *av) C_noret;
C_noret_decl(f_3578)
static void C_fcall f_3578(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3601)
static void C_ccall f_3601(C_word c,C_word *av) C_noret;
C_noret_decl(f_3640)
static void C_ccall f_3640(C_word c,C_word *av) C_noret;
C_noret_decl(f_3663)
static void C_fcall f_3663(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3688)
static void C_ccall f_3688(C_word c,C_word *av) C_noret;
C_noret_decl(f_3699)
static void C_ccall f_3699(C_word c,C_word *av) C_noret;
C_noret_decl(f_3701)
static void C_ccall f_3701(C_word c,C_word *av) C_noret;
C_noret_decl(f_3705)
static void C_ccall f_3705(C_word c,C_word *av) C_noret;
C_noret_decl(f_3720)
static void C_ccall f_3720(C_word c,C_word *av) C_noret;
C_noret_decl(f_3727)
static void C_ccall f_3727(C_word c,C_word *av) C_noret;
C_noret_decl(f_3763)
static void C_ccall f_3763(C_word c,C_word *av) C_noret;
C_noret_decl(f_3767)
static void C_ccall f_3767(C_word c,C_word *av) C_noret;
C_noret_decl(f_3777)
static void C_ccall f_3777(C_word c,C_word *av) C_noret;
C_noret_decl(f_3779)
static void C_ccall f_3779(C_word c,C_word *av) C_noret;
C_noret_decl(f_3783)
static void C_ccall f_3783(C_word c,C_word *av) C_noret;
C_noret_decl(f_3794)
static void C_ccall f_3794(C_word c,C_word *av) C_noret;
C_noret_decl(f_3796)
static void C_ccall f_3796(C_word c,C_word *av) C_noret;
C_noret_decl(f_3803)
static void C_fcall f_3803(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3806)
static void C_fcall f_3806(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3812)
static void C_ccall f_3812(C_word c,C_word *av) C_noret;
C_noret_decl(f_3822)
static void C_ccall f_3822(C_word c,C_word *av) C_noret;
C_noret_decl(f_3869)
static void C_ccall f_3869(C_word c,C_word *av) C_noret;
C_noret_decl(f_3882)
static void C_ccall f_3882(C_word c,C_word *av) C_noret;
C_noret_decl(f_3912)
static void C_ccall f_3912(C_word c,C_word *av) C_noret;
C_noret_decl(f_3928)
static void C_ccall f_3928(C_word c,C_word *av) C_noret;
C_noret_decl(f_3940)
static void C_fcall f_3940(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3987)
static void C_ccall f_3987(C_word c,C_word *av) C_noret;
C_noret_decl(f_3989)
static void C_fcall f_3989(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(C_chicken_2dffi_2dsyntax_toplevel)
C_externexport void C_ccall C_chicken_2dffi_2dsyntax_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1620)
static void C_ccall trf_1620(C_word c,C_word *av) C_noret;
static void C_ccall trf_1620(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1620(t0,t1,t2);}

C_noret_decl(trf_1628)
static void C_ccall trf_1628(C_word c,C_word *av) C_noret;
static void C_ccall trf_1628(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1628(t0,t1,t2,t3);}

C_noret_decl(trf_1660)
static void C_ccall trf_1660(C_word c,C_word *av) C_noret;
static void C_ccall trf_1660(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1660(t0,t1,t2);}

C_noret_decl(trf_1692)
static void C_ccall trf_1692(C_word c,C_word *av) C_noret;
static void C_ccall trf_1692(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1692(t0,t1,t2);}

C_noret_decl(trf_1741)
static void C_ccall trf_1741(C_word c,C_word *av) C_noret;
static void C_ccall trf_1741(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1741(t0,t1,t2);}

C_noret_decl(trf_2688)
static void C_ccall trf_2688(C_word c,C_word *av) C_noret;
static void C_ccall trf_2688(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2688(t0,t1);}

C_noret_decl(trf_2862)
static void C_ccall trf_2862(C_word c,C_word *av) C_noret;
static void C_ccall trf_2862(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2862(t0,t1,t2);}

C_noret_decl(trf_2953)
static void C_ccall trf_2953(C_word c,C_word *av) C_noret;
static void C_ccall trf_2953(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2953(t0,t1,t2);}

C_noret_decl(trf_3048)
static void C_ccall trf_3048(C_word c,C_word *av) C_noret;
static void C_ccall trf_3048(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3048(t0,t1,t2);}

C_noret_decl(trf_3139)
static void C_ccall trf_3139(C_word c,C_word *av) C_noret;
static void C_ccall trf_3139(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3139(t0,t1,t2);}

C_noret_decl(trf_3188)
static void C_ccall trf_3188(C_word c,C_word *av) C_noret;
static void C_ccall trf_3188(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3188(t0,t1);}

C_noret_decl(trf_3220)
static void C_ccall trf_3220(C_word c,C_word *av) C_noret;
static void C_ccall trf_3220(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3220(t0,t1);}

C_noret_decl(trf_3251)
static void C_ccall trf_3251(C_word c,C_word *av) C_noret;
static void C_ccall trf_3251(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3251(t0,t1,t2);}

C_noret_decl(trf_3285)
static void C_ccall trf_3285(C_word c,C_word *av) C_noret;
static void C_ccall trf_3285(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3285(t0,t1,t2);}

C_noret_decl(trf_3428)
static void C_ccall trf_3428(C_word c,C_word *av) C_noret;
static void C_ccall trf_3428(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3428(t0,t1);}

C_noret_decl(trf_3551)
static void C_ccall trf_3551(C_word c,C_word *av) C_noret;
static void C_ccall trf_3551(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3551(t0,t1);}

C_noret_decl(trf_3578)
static void C_ccall trf_3578(C_word c,C_word *av) C_noret;
static void C_ccall trf_3578(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3578(t0,t1,t2,t3);}

C_noret_decl(trf_3663)
static void C_ccall trf_3663(C_word c,C_word *av) C_noret;
static void C_ccall trf_3663(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3663(t0,t1,t2);}

C_noret_decl(trf_3803)
static void C_ccall trf_3803(C_word c,C_word *av) C_noret;
static void C_ccall trf_3803(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3803(t0,t1);}

C_noret_decl(trf_3806)
static void C_ccall trf_3806(C_word c,C_word *av) C_noret;
static void C_ccall trf_3806(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3806(t0,t1);}

C_noret_decl(trf_3940)
static void C_ccall trf_3940(C_word c,C_word *av) C_noret;
static void C_ccall trf_3940(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3940(t0,t1,t2);}

C_noret_decl(trf_3989)
static void C_ccall trf_3989(C_word c,C_word *av) C_noret;
static void C_ccall trf_3989(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3989(t0,t1,t2);}

/* k1390 */
static void C_ccall f_1392(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1392,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1395,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k1393 in k1390 */
static void C_ccall f_1395(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1395,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1398,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k1396 in k1393 in k1390 */
static void C_ccall f_1398(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1398,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1401,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_1401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1401,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1404,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_1404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1404,2,av);}
a=C_alloc(11);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2686,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:51: ##sys#macro-environment */
t4=*((C_word*)lf[96]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* foldr153 in k3563 in k3540 in a3537 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_fcall f_1620(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_1620,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1628,a[2]=((C_word*)t0)[2],a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t4=C_slot(t2,C_fix(0));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1647,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
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

/* g158 in foldr153 in k3563 in k3540 in a3537 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_fcall f_1628(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1628,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1636,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:72: proc */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1634 in g158 in foldr153 in k3563 in k3540 in a3537 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_1636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1636,2,av);}
/* mini-srfi-1.scm:72: scheme#append */
t2=*((C_word*)lf[77]+1);{
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

/* k1645 in foldr153 in k3563 in k3540 in a3537 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_1647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1647,2,av);}
/* mini-srfi-1.scm:72: g158 */
t2=((C_word*)t0)[2];
f_1628(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop in k3563 in k3540 in a3537 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_fcall f_1660(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,0,3)))){
C_save_and_reclaim_args((void *)trf_1660,3,t0,t1,t2);}
a=C_alloc(25);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1815,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
t5=(
  f_1815(t3)
);
if(C_truep(t5)){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1674,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=t2;
t12=C_i_check_list_2(t11,lf[26]);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1739,a[2]=t6,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1741,a[2]=t9,a[3]=t15,a[4]=t10,a[5]=((C_word)li26),tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_1741(t17,t13,t11);}}

/* k1672 in loop in k3563 in k3540 in a3537 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_1674(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1674,2,av);}
a=C_alloc(21);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1678,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=((C_word*)t0)[3];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1690,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1692,a[2]=t6,a[3]=t11,a[4]=t7,a[5]=((C_word)li25),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_1692(t13,t9,t8);}

/* k1676 in k1672 in loop in k3563 in k3540 in a3537 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_1678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1678,2,av);}
/* mini-srfi-1.scm:76: scheme#append */
t2=*((C_word*)lf[77]+1);{
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

/* k1688 in k1672 in loop in k3563 in k3540 in a3537 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_1690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1690,2,av);}
/* mini-srfi-1.scm:77: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1660(t2,((C_word*)t0)[3],t1);}

/* map-loop195 in k1672 in loop in k3563 in k3540 in a3537 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_fcall f_1692(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1692,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
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

/* k1737 in loop in k3563 in k3540 in a3537 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_1739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1739,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
C_apply(4,av2);}}

/* map-loop168 in loop in k3563 in k3540 in a3537 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_fcall f_1741(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1741,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
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

/* loop in loop in k3563 in k3540 in a3537 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static C_word C_fcall f_1815(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t1))){
return(C_SCHEME_FALSE);}
else{
t2=C_i_car(t1);
t3=C_i_nullp(t2);
if(C_truep(t3)){
return(t3);}
else{
t4=t1;
t5=C_u_i_cdr(t4);
t7=t5;
t1=t7;
goto loop;}}}

/* k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2686(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,5)))){
C_save_and_reclaim((void *)f_2686,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2688,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2714,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3794,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3796,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:67: compiler-only-er-transformer */
f_2688(t5,t6);}

/* compiler-only-er-transformer in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_fcall f_2688(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_2688,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2694,a[2]=t2,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:57: ##sys#er-transformer */
t4=*((C_word*)lf[5]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a2693 in compiler-only-er-transformer in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2694,5,av);}
a=C_alloc(7);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2701,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* chicken-ffi-syntax.scm:59: chicken.platform#feature? */
t6=*((C_word*)lf[3]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[4];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k2699 in a2693 in compiler-only-er-transformer in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2701,2,av);}
if(C_truep(t1)){
/* chicken-ffi-syntax.scm:60: transformer */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=C_i_car(((C_word*)t0)[4]);
/* chicken-ffi-syntax.scm:61: chicken.syntax#syntax-error */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=lf[2];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_2714,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2717,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3777,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3779,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:104: compiler-only-er-transformer */
f_2688(t3,t4);}

/* k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_2717,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2720,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3699,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3701,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:112: compiler-only-er-transformer */
f_2688(t3,t4);}

/* k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_2720,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2723,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3536,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3538,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:129: compiler-only-er-transformer */
f_2688(t3,t4);}

/* k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_2723,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2726,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3471,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3473,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:165: compiler-only-er-transformer */
f_2688(t3,t4);}

/* k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_2726,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2729,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3409,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3411,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:180: compiler-only-er-transformer */
f_2688(t3,t4);}

/* k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_2729,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2732,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3388,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3390,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:206: compiler-only-er-transformer */
f_2688(t3,t4);}

/* k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_2732,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2735,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3371,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3373,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:217: compiler-only-er-transformer */
f_2688(t3,t4);}

/* k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_2735,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2738,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3354,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3356,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:225: compiler-only-er-transformer */
f_2688(t3,t4);}

/* k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_2738,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2741,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3179,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3181,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:233: compiler-only-er-transformer */
f_2688(t3,t4);}

/* k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_2741,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2744,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3088,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3090,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:252: compiler-only-er-transformer */
f_2688(t3,t4);}

/* k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_2744,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2747,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2993,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2995,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:266: compiler-only-er-transformer */
f_2688(t3,t4);}

/* k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_2747,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2750,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2902,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2904,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:283: compiler-only-er-transformer */
f_2688(t3,t4);}

/* k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2750(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_2750,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2753,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2807,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2809,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:297: compiler-only-er-transformer */
f_2688(t3,t4);}

/* k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_2753,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2756,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2763,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2765,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:312: compiler-only-er-transformer */
f_2688(t3,t4);}

/* k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2756(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2756,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2759,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:327: chicken.internal#macro-subset */
t3=*((C_word*)lf[7]+1);{
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

/* k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 in ... */
static void C_ccall f_2759(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2759,2,av);}
t2=C_mutate((C_word*)lf[6]+1 /* (set! ##sys#chicken-ffi-macro-environment ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2761 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2763,2,av);}
/* chicken-ffi-syntax.scm:309: ##sys#extend-macro-environment */
t2=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[9];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a2764 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2765,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2769,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:314: ##sys#check-syntax */
t6=*((C_word*)lf[23]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[9];
av2[3]=t2;
av2[4]=lf[24];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2767 in a2764 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 in ... */
static void C_ccall f_2769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2769,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2772,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* chicken-ffi-syntax.scm:315: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2770 in k2767 in a2764 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in ... */
static void C_ccall f_2772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2772,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2775,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:316: chicken.base#gensym */
t4=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[21];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2773 in k2770 in k2767 in a2764 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in ... */
static void C_ccall f_2775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2775,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2778,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
f_2778(2,av2);}}
else{
/* chicken-ffi-syntax.scm:321: chicken.compiler.c-backend#foreign-type-declaration */
t4=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[19];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k2776 in k2773 in k2770 in k2767 in a2764 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in ... */
static void C_ccall f_2778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2778,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2793,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:323: scheme#string-append */
t3=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[16];
av2[3]=t1;
av2[4]=lf[17];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2791 in k2776 in k2773 in k2770 in k2767 in a2764 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in ... */
static void C_ccall f_2793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,1)))){
C_save_and_reclaim((void *)f_2793,2,av);}
a=C_alloc(33);
t2=C_a_i_list(&a,4,lf[10],((C_word*)t0)[2],lf[11],t1);
t3=C_a_i_list(&a,4,lf[12],lf[13],C_SCHEME_FALSE,((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[14],t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2805 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2807,2,av);}
/* chicken-ffi-syntax.scm:294: ##sys#extend-macro-environment */
t2=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[25];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a2808 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2809(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2809,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2813,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:299: ##sys#check-syntax */
t6=*((C_word*)lf[23]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[25];
av2[3]=t2;
av2[4]=lf[32];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2811 in a2808 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2813(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_2813,2,av);}
a=C_alloc(11);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2842,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=C_i_caddr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:303: chicken.syntax#strip-syntax */
t8=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k2840 in k2811 in a2808 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 in ... */
static void C_ccall f_2842(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_2842,2,av);}
a=C_alloc(12);
t2=C_i_check_list_2(t1,lf[26]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2848,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2862,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word)li3),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2862(t7,t3,t1);}

/* k2846 in k2840 in k2811 in a2808 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in ... */
static void C_ccall f_2848(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2848,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2852,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2856,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:305: chicken.syntax#strip-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k2850 in k2846 in k2840 in k2811 in a2808 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in ... */
static void C_ccall f_2852(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_2852,2,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,3,lf[27],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,lf[28],t4);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,4,lf[12],t2,C_SCHEME_FALSE,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k2854 in k2846 in k2840 in k2811 in a2808 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in ... */
static void C_ccall f_2856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2856,2,av);}
/* chicken-ffi-syntax.scm:304: chicken.compiler.support#foreign-type->scrutiny-type */
t2=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[30];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop1008 in k2840 in k2811 in a2808 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in ... */
static void C_fcall f_2862(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2862,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2887,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
/* chicken-ffi-syntax.scm:302: chicken.compiler.support#foreign-type->scrutiny-type */
t6=*((C_word*)lf[29]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
av2[3]=lf[31];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2885 in map-loop1008 in k2840 in k2811 in a2808 in k2748 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in ... */
static void C_ccall f_2887(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2887,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2862(t6,((C_word*)t0)[5],t5);}

/* k2900 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2902,2,av);}
/* chicken-ffi-syntax.scm:280: ##sys#extend-macro-environment */
t2=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[33];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a2903 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2904,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2908,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:285: ##sys#check-syntax */
t6=*((C_word*)lf[23]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[33];
av2[3]=t2;
av2[4]=lf[35];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2906 in a2903 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2908(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_2908,2,av);}
a=C_alloc(11);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2933,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=C_i_cdddr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:288: chicken.syntax#strip-syntax */
t8=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k2931 in k2906 in a2903 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2933(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_2933,2,av);}
a=C_alloc(12);
t2=C_i_check_list_2(t1,lf[26]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2939,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2953,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word)li5),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2953(t7,t3,t1);}

/* k2937 in k2931 in k2906 in a2903 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 in ... */
static void C_ccall f_2939(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2939,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2943,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2947,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:290: chicken.syntax#strip-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k2941 in k2937 in k2931 in k2906 in a2903 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in ... */
static void C_ccall f_2943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_2943,2,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,3,lf[27],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,lf[34],t4);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,4,lf[12],t2,C_SCHEME_FALSE,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k2945 in k2937 in k2931 in k2906 in a2903 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in ... */
static void C_ccall f_2947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2947,2,av);}
/* chicken-ffi-syntax.scm:289: chicken.compiler.support#foreign-type->scrutiny-type */
t2=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[30];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop967 in k2931 in k2906 in a2903 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 in ... */
static void C_fcall f_2953(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2953,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2978,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[29]+1);
/* chicken-ffi-syntax.scm:287: g990 */
t6=*((C_word*)lf[29]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[31];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2976 in map-loop967 in k2931 in k2906 in a2903 in k2745 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in ... */
static void C_ccall f_2978(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2978,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2953(t6,((C_word*)t0)[5],t5);}

/* k2991 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2993,2,av);}
/* chicken-ffi-syntax.scm:263: ##sys#extend-macro-environment */
t2=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[36];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a2994 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2995,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2999,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:268: ##sys#check-syntax */
t6=*((C_word*)lf[23]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[36];
av2[3]=t2;
av2[4]=lf[38];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2997 in a2994 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_2999(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_2999,2,av);}
a=C_alloc(11);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3028,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=C_i_caddr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:274: chicken.syntax#strip-syntax */
t8=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k3026 in k2997 in a2994 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3028(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_3028,2,av);}
a=C_alloc(12);
t2=C_i_check_list_2(t1,lf[26]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3034,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3048,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word)li7),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3048(t7,t3,t1);}

/* k3032 in k3026 in k2997 in a2994 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3034(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3034,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3038,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3042,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:276: chicken.syntax#strip-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3036 in k3032 in k3026 in k2997 in a2994 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 in ... */
static void C_ccall f_3038(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_3038,2,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,3,lf[27],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,lf[37],t4);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,4,lf[12],t2,C_SCHEME_FALSE,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k3040 in k3032 in k3026 in k2997 in a2994 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 in ... */
static void C_ccall f_3042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3042,2,av);}
/* chicken-ffi-syntax.scm:275: chicken.compiler.support#foreign-type->scrutiny-type */
t2=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[30];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop933 in k3026 in k2997 in a2994 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_fcall f_3048(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3048,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3073,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
/* chicken-ffi-syntax.scm:271: chicken.compiler.support#foreign-type->scrutiny-type */
t6=*((C_word*)lf[29]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
av2[3]=lf[31];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3071 in map-loop933 in k3026 in k2997 in a2994 in k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 in ... */
static void C_ccall f_3073(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3073,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3048(t6,((C_word*)t0)[5],t5);}

/* k3086 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3088,2,av);}
/* chicken-ffi-syntax.scm:249: ##sys#extend-macro-environment */
t2=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[39];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3089 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3090,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3094,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:254: ##sys#check-syntax */
t6=*((C_word*)lf[23]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[39];
av2[3]=t2;
av2[4]=lf[41];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3092 in a3089 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3094(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3094,2,av);}
a=C_alloc(11);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3119,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=C_i_cdddr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:257: chicken.syntax#strip-syntax */
t8=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k3117 in k3092 in a3089 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3119(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_3119,2,av);}
a=C_alloc(12);
t2=C_i_check_list_2(t1,lf[26]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3125,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3139,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word)li9),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3139(t7,t3,t1);}

/* k3123 in k3117 in k3092 in a3089 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3125(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3125,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3129,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3133,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:259: chicken.syntax#strip-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3127 in k3123 in k3117 in k3092 in a3089 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_3129,2,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,3,lf[27],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,lf[40],t4);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,4,lf[12],t2,C_SCHEME_FALSE,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k3131 in k3123 in k3117 in k3092 in a3089 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3133,2,av);}
/* chicken-ffi-syntax.scm:258: chicken.compiler.support#foreign-type->scrutiny-type */
t2=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[30];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop892 in k3117 in k3092 in a3089 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_fcall f_3139(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3139,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3164,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[29]+1);
/* chicken-ffi-syntax.scm:256: g915 */
t6=*((C_word*)lf[29]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[31];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3162 in map-loop892 in k3117 in k3092 in a3089 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3164(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3164,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3139(t6,((C_word*)t0)[5],t5);}

/* k3177 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3179,2,av);}
/* chicken-ffi-syntax.scm:230: ##sys#extend-macro-environment */
t2=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[42];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3180 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3181,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3185,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:235: ##sys#check-syntax */
t6=*((C_word*)lf[23]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[42];
av2[3]=t2;
av2[4]=lf[45];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3183 in a3180 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3185(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3185,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3188,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cddr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t3))){
t4=C_i_caddr(((C_word*)t0)[2]);
t5=C_i_stringp(t4);
t6=t2;
f_3188(t6,C_i_not(t5));}
else{
t4=t2;
f_3188(t4,C_SCHEME_FALSE);}}

/* k3186 in k3183 in a3180 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_fcall f_3188(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3188,2,t0,t1);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3191,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_car(t5);
/* chicken-ffi-syntax.scm:237: chicken.syntax#strip-syntax */
t7=*((C_word*)lf[22]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t3;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_3191(2,av2);}}}

/* k3189 in k3186 in k3183 in a3180 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3191(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3191,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3194,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
t4=C_i_caddr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:238: chicken.syntax#strip-syntax */
t5=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_car(t5);
/* chicken-ffi-syntax.scm:238: chicken.syntax#strip-syntax */
t7=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k3192 in k3189 in k3186 in k3183 in a3180 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3194(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_3194,2,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(t1,lf[26]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3203,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3285,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li12),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_3285(t11,t7,t1);}

/* k3201 in k3192 in k3189 in k3186 in k3183 in a3180 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3203(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_3203,2,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3220,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(t1,lf[26]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3235,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3251,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li11),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_3251(t12,t8,t1);}

/* k3218 in k3201 in k3192 in k3189 in k3186 in k3183 in a3180 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 in ... */
static void C_fcall f_3220(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,1)))){
C_save_and_reclaim_args((void *)trf_3220,2,t0,t1);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,lf[27],t1);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,lf[43],t4);
t6=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t6;
av2[1]=C_a_i_list(&a,4,lf[12],t2,C_SCHEME_FALSE,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k3233 in k3201 in k3192 in k3189 in k3186 in k3183 in a3180 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 in ... */
static void C_ccall f_3235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3235,2,av);}
a=C_alloc(4);
t2=t1;
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t3=((C_word*)t0)[3];
f_3220(t3,C_a_i_cons(&a,2,t2,lf[44]));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3249,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:245: chicken.compiler.support#foreign-type->scrutiny-type */
t4=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[30];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k3247 in k3233 in k3201 in k3192 in k3189 in k3186 in k3183 in a3180 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in ... */
static void C_ccall f_3249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_3249,2,av);}
a=C_alloc(6);
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[2];
f_3220(t3,C_a_i_cons(&a,2,((C_word*)t0)[3],t2));}

/* map-loop851 in k3201 in k3192 in k3189 in k3186 in k3183 in a3180 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 in ... */
static void C_fcall f_3251(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3251,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3276,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[29]+1);
/* chicken-ffi-syntax.scm:241: g874 */
t6=*((C_word*)lf[29]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[31];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3274 in map-loop851 in k3201 in k3192 in k3189 in k3186 in k3183 in a3180 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in ... */
static void C_ccall f_3276(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3276,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3251(t6,((C_word*)t0)[5],t5);}

/* map-loop822 in k3192 in k3189 in k3186 in k3183 in a3180 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_fcall f_3285(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3285,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
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

/* k3352 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3354,2,av);}
/* chicken-ffi-syntax.scm:222: ##sys#extend-macro-environment */
t2=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[46];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3355 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3356,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3360,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:227: ##sys#check-syntax */
t6=*((C_word*)lf[23]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[46];
av2[3]=t2;
av2[4]=lf[47];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3358 in a3355 in k2733 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3360,2,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[10],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3369 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3371,2,av);}
/* chicken-ffi-syntax.scm:214: ##sys#extend-macro-environment */
t2=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[48];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3372 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3373(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3373,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3377,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:219: ##sys#check-syntax */
t6=*((C_word*)lf[23]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[48];
av2[3]=t2;
av2[4]=lf[50];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3375 in a3372 in k2730 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3377,2,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[49],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3386 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3388(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3388,2,av);}
/* chicken-ffi-syntax.scm:203: ##sys#extend-macro-environment */
t2=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[51];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3389 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3390,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3394,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:208: ##sys#check-syntax */
t6=*((C_word*)lf[23]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[51];
av2[3]=t2;
av2[4]=lf[53];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3392 in a3389 in k2727 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_3394,2,av);}
a=C_alloc(9);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[51],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[52],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3407 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3409,2,av);}
/* chicken-ffi-syntax.scm:177: ##sys#extend-macro-environment */
t2=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[54];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3410 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3411,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3415,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:182: ##sys#check-syntax */
t6=*((C_word*)lf[23]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[54];
av2[3]=t2;
av2[4]=lf[58];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3413 in a3410 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3415,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:183: chicken.base#gensym */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[57];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3416 in k3413 in a3410 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3418(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_3418,2,av);}
a=C_alloc(22);
t2=t1;
t3=C_i_cadr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3428,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_i_caddr(((C_word*)t0)[2]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3452,a[2]=t4,a[3]=t2,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_stringp(t3))){
t8=t4;
f_3428(t8,C_a_i_list(&a,4,lf[10],t2,t6,t3));}
else{
if(C_truep(C_i_symbolp(t3))){
/* chicken-ffi-syntax.scm:189: scheme#symbol->string */
t8=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
/* chicken-ffi-syntax.scm:191: chicken.syntax#syntax-error */
t8=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[54];
av2[3]=lf[56];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}}}

/* k3426 in k3416 in k3413 in a3410 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_fcall f_3428(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3428,2,t0,t1);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3436,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3440,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_caddr(((C_word*)t0)[4]);
/* chicken-ffi-syntax.scm:196: chicken.syntax#strip-syntax */
t6=*((C_word*)lf[22]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3434 in k3426 in k3416 in k3413 in a3410 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_3436,2,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[12],t1,C_SCHEME_FALSE,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[14],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3438 in k3426 in k3416 in k3413 in a3410 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3440,2,av);}
/* chicken-ffi-syntax.scm:195: chicken.compiler.support#foreign-type->scrutiny-type */
t2=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[30];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3450 in k3416 in k3413 in a3410 in k2724 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_3452,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
f_3428(t2,C_a_i_list(&a,4,lf[10],((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k3469 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3471,2,av);}
/* chicken-ffi-syntax.scm:162: ##sys#extend-macro-environment */
t2=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[59];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3472 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3473,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3477,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:167: ##sys#check-syntax */
t6=*((C_word*)lf[23]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[59];
av2[3]=t2;
av2[4]=lf[72];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3475 in a3472 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3477,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3480,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:168: chicken.base#gensym */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[71];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3478 in k3475 in a3472 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3480,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3495,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:170: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[70];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3493 in k3478 in k3475 in a3472 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3495,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3503,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-ffi-syntax.scm:172: chicken.base#open-output-string */
t4=*((C_word*)lf[69]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3501 in k3493 in k3478 in k3475 in a3472 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3503(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3503,2,av);}
a=C_alloc(8);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_fix(2),C_SCHEME_TRUE,lf[60]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3509,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t3,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:172: ##sys#print */
t6=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[68];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3507 in k3501 in k3493 in k3478 in k3475 in a3472 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3509,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3512,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:172: ##sys#print */
t3=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3510 in k3507 in k3501 in k3493 in k3478 in k3475 in a3472 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3512,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3515,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:172: ##sys#print */
t3=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[67];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3513 in k3510 in k3507 in k3501 in k3493 in k3478 in k3475 in a3472 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_3515,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3518,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3528,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[7]);
/* chicken-ffi-syntax.scm:174: chicken.string#string-intersperse */
t5=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[66];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k3516 in k3513 in k3510 in k3507 in k3501 in k3493 in k3478 in k3475 in a3472 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3518,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3521,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-ffi-syntax.scm:172: ##sys#print */
t3=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[64];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3519 in k3516 in k3513 in k3510 in k3507 in k3501 in k3493 in k3478 in k3475 in a3472 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3521,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3524,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:172: chicken.base#get-output-string */
t3=*((C_word*)lf[62]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3522 in k3519 in k3516 in k3513 in k3510 in k3507 in k3501 in k3493 in k3478 in k3475 in a3472 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_3524,2,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,lf[51],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,2,lf[61],((C_word*)t0)[3]);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[14],t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k3526 in k3513 in k3510 in k3507 in k3501 in k3493 in k3478 in k3475 in a3472 in k2721 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3528,2,av);}
/* chicken-ffi-syntax.scm:172: ##sys#print */
t2=*((C_word*)lf[63]+1);{
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

/* k3534 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3536,2,av);}
/* chicken-ffi-syntax.scm:126: ##sys#extend-macro-environment */
t2=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[73];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3537 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3538,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3542,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:131: ##sys#check-syntax */
t6=*((C_word*)lf[23]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[73];
av2[3]=t2;
av2[4]=lf[78];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3540 in a3537 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3542(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_3542,2,av);}
a=C_alloc(23);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3551,a[2]=((C_word*)t0)[3],a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
t12=C_i_check_list_2(t3,lf[26]);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3565,a[2]=((C_word*)t0)[4],a[3]=t6,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3663,a[2]=t9,a[3]=t15,a[4]=t11,a[5]=t10,a[6]=((C_word)li28),tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_3663(t17,t13,t3);}

/* g714 in k3540 in a3537 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_fcall f_3551(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3551,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3559,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:134: chicken.base#gensym */
t3=*((C_word*)lf[20]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3557 in g714 in k3540 in a3537 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3559,2,av);}
/* chicken-ffi-syntax.scm:134: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3563 in k3540 in a3537 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3565(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_3565,2,av);}
a=C_alloc(22);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3572,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3640,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=C_a_i_list(&a,1,t2);
if(C_truep(C_i_nullp(t6))){
t7=C_i_check_list_2(((C_word*)t0)[4],lf[76]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1620,a[2]=t5,a[3]=t9,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_1620(t11,t3,((C_word*)t0)[4]);}
else{
t7=C_a_i_cons(&a,2,((C_word*)t0)[4],t6);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1660,a[2]=t9,a[3]=t5,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_1660(t11,t3,t7);}}

/* k3570 in k3563 in k3540 in a3537 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3572(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_3572,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3576,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3578,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word)li20),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3578(t7,t3,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3574 in k3570 in k3563 in k3540 in a3537 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_3576,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[74],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k3570 in k3563 in k3540 in a3537 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_fcall f_3578(C_word t0,C_word t1,C_word t2,C_word t3){
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
loop:
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3578,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[74],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=t4;
t6=C_i_car(t3);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3601,a[2]=t5,a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t9=t2;
t10=C_u_i_cdr(t9);
t11=t3;
t12=C_u_i_cdr(t11);
/* chicken-ffi-syntax.scm:147: loop */
t14=t8;
t15=t10;
t16=t12;
t1=t14;
t2=t15;
t3=t16;
goto loop;}}

/* k3599 in loop in k3570 in k3563 in k3540 in a3537 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_3601,2,av);}
a=C_alloc(15);
t2=C_i_length(((C_word*)t0)[2]);
t3=C_eqp(C_fix(3),t2);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[2]);
t5=C_i_cadr(((C_word*)t0)[2]);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,5,lf[75],t4,t5,((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t4=C_i_car(((C_word*)t0)[2]);
t5=C_i_cadr(((C_word*)t0)[2]);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,4,lf[75],t4,t5,t1);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* a3639 in k3563 in k3540 in a3537 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3640(C_word c,C_word *av){
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
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_3640,4,av);}
a=C_alloc(6);
t4=C_i_cddr(t2);
if(C_truep(C_i_pairp(t4))){
t5=t2;
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=C_a_i_cons(&a,2,t3,t7);
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_a_i_list1(&a,1,t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* map-loop708 in k3540 in a3537 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_fcall f_3663(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3663,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3688,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-ffi-syntax.scm:134: g714 */
t4=((C_word*)t0)[4];
f_3551(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3686 in map-loop708 in k3540 in a3537 in k2718 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3688(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3688,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3663(t6,((C_word*)t0)[5],t5);}

/* k3697 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3699,2,av);}
/* chicken-ffi-syntax.scm:109: ##sys#extend-macro-environment */
t2=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[79];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3700 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3701,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3705,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:114: ##sys#check-syntax */
t6=*((C_word*)lf[23]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[79];
av2[3]=t2;
av2[4]=lf[83];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3703 in a3700 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3705(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3705,2,av);}
a=C_alloc(11);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t4;
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=C_u_i_cdr(t8);
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_i_car(t9));
t12=t11;
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3720,a[2]=t3,a[3]=t5,a[4]=t12,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3767,a[2]=((C_word*)t0)[4],a[3]=t13,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:118: chicken.base#gensym */
t15=*((C_word*)lf[20]+1);{
C_word *av2=av;
av2[0]=t15;
av2[1]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}

/* k3718 in k3703 in a3700 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3720,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3727,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-ffi-syntax.scm:119: r */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[82];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3725 in k3718 in k3703 in a3700 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3727,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3763,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:120: scheme#symbol->string */
t4=*((C_word*)lf[55]+1);{
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

/* k3761 in k3725 in k3718 in k3703 in a3700 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3763(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(48,c,1)))){
C_save_and_reclaim((void *)f_3763,2,av);}
a=C_alloc(48);
t2=C_a_i_list(&a,4,lf[10],((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_list(&a,5,lf[80],((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[4]);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t4=C_u_i_car(((C_word*)t0)[5]);
t5=C_a_i_list(&a,3,lf[81],((C_word*)t0)[2],t4);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_cons(&a,2,t3,t6);
t8=C_a_i_cons(&a,2,t2,t7);
t9=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[7],t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,t2,t4);
t6=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[7],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3765 in k3703 in a3700 in k2715 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3767,2,av);}
/* chicken-ffi-syntax.scm:118: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3775 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3777,2,av);}
/* chicken-ffi-syntax.scm:101: ##sys#extend-macro-environment */
t2=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[84];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3778 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3779,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3783,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:106: ##sys#check-syntax */
t6=*((C_word*)lf[23]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[84];
av2[3]=t2;
av2[4]=lf[86];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3781 in a3778 in k2712 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_3783,2,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,lf[85],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3792 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3794(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3794,2,av);}
/* chicken-ffi-syntax.scm:64: ##sys#extend-macro-environment */
t2=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[87];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3795 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3796(C_word c,C_word *av){
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
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3796,5,av);}
a=C_alloc(5);
t5=C_i_cdr(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3803,a[2]=t6,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t6))){
t8=C_u_i_car(t6);
t9=t7;
f_3803(t9,C_i_stringp(t8));}
else{
t8=t7;
f_3803(t8,C_SCHEME_FALSE);}}

/* k3801 in a3795 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_fcall f_3803(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3803,2,t0,t1);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3806,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_not(t2))){
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t4=C_u_i_car(((C_word*)t0)[2]);
t5=t3;
f_3806(t5,C_i_symbolp(t4));}
else{
t4=t3;
f_3806(t4,C_SCHEME_FALSE);}}
else{
t4=t3;
f_3806(t4,C_SCHEME_FALSE);}}

/* k3804 in k3801 in a3795 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_fcall f_3806(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3806,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3812,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:73: ##sys#check-syntax */
t3=*((C_word*)lf[23]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[87];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[88];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3869,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
/* chicken-ffi-syntax.scm:83: ##sys#check-syntax */
t3=*((C_word*)lf[23]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[87];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[94];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
/* chicken-ffi-syntax.scm:84: ##sys#check-syntax */
t3=*((C_word*)lf[23]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[87];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[95];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}}

/* k3810 in k3804 in k3801 in a3795 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3812(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3812,2,av);}
a=C_alloc(5);
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3822,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:75: r */
t5=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[82];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3820 in k3810 in k3804 in k3801 in a3795 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
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
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(42,c,1)))){
C_save_and_reclaim((void *)f_3822,2,av);}
a=C_alloc(42);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[10],((C_word*)t0)[3],t2);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_car(t4);
t6=C_a_i_list(&a,4,lf[80],((C_word*)t0)[3],t5,C_SCHEME_TRUE);
t7=C_u_i_cdr(((C_word*)t0)[2]);
t8=C_u_i_cdr(t7);
if(C_truep(C_i_pairp(t8))){
t9=C_i_caddr(((C_word*)t0)[2]);
t10=C_a_i_list(&a,3,lf[81],((C_word*)t0)[3],t9);
t11=C_a_i_list(&a,1,t10);
t12=C_a_i_cons(&a,2,t6,t11);
t13=C_a_i_cons(&a,2,t3,t12);
t14=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t14;
av2[1]=C_a_i_cons(&a,2,t1,t13);
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
t9=C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t10=C_a_i_cons(&a,2,t3,t9);
t11=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_a_i_cons(&a,2,t1,t10);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}

/* k3867 in k3804 in k3801 in a3795 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3869(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3869,2,av);}
a=C_alloc(8);
t2=(C_truep(((C_word*)t0)[2])?C_i_cadr(((C_word*)t0)[3]):C_i_car(((C_word*)t0)[3]));
t3=t2;
t4=C_i_cdr(t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3882,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:87: r */
t7=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[93];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k3880 in k3867 in k3804 in k3801 in a3795 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3882(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(37,c,3)))){
C_save_and_reclaim((void *)f_3882,2,av);}
a=C_alloc(37);
t2=t1;
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_u_i_car(((C_word*)t0)[2]);
t5=C_a_i_list(&a,2,lf[89],t4);
t6=t5;
t7=(C_truep(((C_word*)t0)[3])?C_i_car(((C_word*)t0)[4]):lf[90]);
t8=t7;
t9=(C_truep(((C_word*)t0)[3])?C_i_caddr(((C_word*)t0)[4]):C_i_cadr(((C_word*)t0)[4]));
t10=C_a_i_list(&a,2,lf[89],t9);
t11=t10;
t12=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t13=t12;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=((C_word*)t14)[1];
t16=C_i_check_list_2(((C_word*)t0)[5],lf[26]);
t17=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3987,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=t8,a[6]=t11,a[7]=((C_word*)t0)[6],a[8]=t2,a[9]=t3,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3989,a[2]=t14,a[3]=t19,a[4]=t15,a[5]=((C_word)li33),tmp=(C_word)a,a+=6,tmp));
t21=((C_word*)t19)[1];
f_3989(t21,t17,((C_word*)t0)[5]);}

/* k3910 in k3985 in k3880 in k3867 in k3804 in k3801 in a3795 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3912(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_3912,2,av);}
a=C_alloc(25);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3928,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3940,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li32),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_3940(t11,t7,((C_word*)t0)[11]);}

/* k3926 in k3910 in k3985 in k3880 in k3867 in k3804 in k3801 in a3795 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,1)))){
C_save_and_reclaim((void *)f_3928,2,av);}
a=C_alloc(33);
t2=(C_truep(((C_word*)t0)[2])?C_i_cdddr(((C_word*)t0)[3]):C_i_cddr(((C_word*)t0)[3]));
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,6,lf[91],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],t4);
t6=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[10],((C_word*)t0)[11],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* map-loop649 in k3910 in k3985 in k3880 in k3867 in k3804 in k3801 in a3795 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_fcall f_3940(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3940,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
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

/* k3985 in k3880 in k3867 in k3804 in k3801 in a3795 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_ccall f_3987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_3987,2,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,2,lf[89],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3912,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-ffi-syntax.scm:93: r */
t5=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[92];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* map-loop622 in k3880 in k3867 in k3804 in k3801 in a3795 in k2684 in k1402 in k1399 in k1396 in k1393 in k1390 */
static void C_fcall f_3989(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3989,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
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

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_chicken_2dffi_2dsyntax_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("chicken-ffi-syntax"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_chicken_2dffi_2dsyntax_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(1111))){
C_save(t1);
C_rereclaim2(1111*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,97);
lf[0]=C_h_intern(&lf[0],18, C_text("chicken-ffi-syntax"));
lf[1]=C_h_intern(&lf[1],27, C_text("chicken.syntax#syntax-error"));
lf[2]=C_decode_literal(C_heaptop,C_text("\376B\000\000,The FFI is not supported in interpreted mode"));
lf[3]=C_h_intern(&lf[3],25, C_text("chicken.platform#feature\077"));
lf[4]=C_h_intern(&lf[4],9, C_text("compiling"));
lf[5]=C_h_intern(&lf[5],18, C_text("\003syser-transformer"));
lf[6]=C_h_intern(&lf[6],33, C_text("\003syschicken-ffi-macro-environment"));
lf[7]=C_h_intern(&lf[7],29, C_text("chicken.internal#macro-subset"));
lf[8]=C_h_intern(&lf[8],28, C_text("\003sysextend-macro-environment"));
lf[9]=C_h_intern(&lf[9],17, C_text("foreign-type-size"));
lf[10]=C_h_intern(&lf[10],28, C_text("\004coredefine-foreign-variable"));
lf[11]=C_h_intern(&lf[11],6, C_text("size_t"));
lf[12]=C_h_intern(&lf[12],8, C_text("\004corethe"));
lf[13]=C_h_intern(&lf[13],6, C_text("fixnum"));
lf[14]=C_h_intern(&lf[14],10, C_text("\004corebegin"));
lf[15]=C_h_intern(&lf[15],20, C_text("scheme#string-append"));
lf[16]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007sizeof("));
lf[17]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001)"));
lf[18]=C_h_intern(&lf[18],51, C_text("chicken.compiler.c-backend#foreign-type-declaration"));
lf[19]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[20]=C_h_intern(&lf[20],19, C_text("chicken.base#gensym"));
lf[21]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005code_"));
lf[22]=C_h_intern(&lf[22],27, C_text("chicken.syntax#strip-syntax"));
lf[23]=C_h_intern(&lf[23],16, C_text("\003syscheck-syntax"));
lf[24]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016"));
lf[25]=C_h_intern(&lf[25],20, C_text("foreign-safe-lambda\052"));
lf[26]=C_h_intern(&lf[26],3, C_text("map"));
lf[27]=C_h_intern(&lf[27],9, C_text("procedure"));
lf[28]=C_h_intern(&lf[28],25, C_text("\004coreforeign-safe-lambda\052"));
lf[29]=C_h_intern(&lf[29],52, C_text("chicken.compiler.support#foreign-type->scrutiny-type"));
lf[30]=C_h_intern(&lf[30],6, C_text("result"));
lf[31]=C_h_intern(&lf[31],3, C_text("arg"));
lf[32]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_"));
lf[33]=C_h_intern(&lf[33],19, C_text("foreign-safe-lambda"));
lf[34]=C_h_intern(&lf[34],24, C_text("\004coreforeign-safe-lambda"));
lf[35]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_"));
lf[36]=C_h_intern(&lf[36],15, C_text("foreign-lambda\052"));
lf[37]=C_h_intern(&lf[37],20, C_text("\004coreforeign-lambda\052"));
lf[38]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_"));
lf[39]=C_h_intern(&lf[39],14, C_text("foreign-lambda"));
lf[40]=C_h_intern(&lf[40],19, C_text("\004coreforeign-lambda"));
lf[41]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_"));
lf[42]=C_h_intern(&lf[42],17, C_text("foreign-primitive"));
lf[43]=C_h_intern(&lf[43],22, C_text("\004coreforeign-primitive"));
lf[44]=C_h_intern(&lf[44],1, C_text("\052"));
lf[45]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_"));
lf[46]=C_h_intern(&lf[46],23, C_text("define-foreign-variable"));
lf[47]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\006string\376\377\001\000\000\000\000\376\377\001\000\000\000\001"));
lf[48]=C_h_intern(&lf[48],19, C_text("define-foreign-type"));
lf[49]=C_h_intern(&lf[49],24, C_text("\004coredefine-foreign-type"));
lf[50]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\002"));
lf[51]=C_h_intern(&lf[51],15, C_text("foreign-declare"));
lf[52]=C_h_intern(&lf[52],12, C_text("\004coredeclare"));
lf[53]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\006string\376\377\001\000\000\000\000"));
lf[54]=C_h_intern(&lf[54],13, C_text("foreign-value"));
lf[55]=C_h_intern(&lf[55],21, C_text("scheme#symbol->string"));
lf[56]=C_decode_literal(C_heaptop,C_text("\376B\000\000\052bad argument type - not a string or symbol"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005code_"));
lf[58]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016"));
lf[59]=C_h_intern(&lf[59],12, C_text("foreign-code"));
lf[60]=C_h_intern(&lf[60],6, C_text("format"));
lf[61]=C_h_intern(&lf[61],11, C_text("\004coreinline"));
lf[62]=C_h_intern(&lf[62],30, C_text("chicken.base#get-output-string"));
lf[63]=C_h_intern(&lf[63],9, C_text("\003sysprint"));
lf[64]=C_decode_literal(C_heaptop,C_text("\376B\000\000 \012; return C_SCHEME_UNDEFINED; }\012"));
lf[65]=C_h_intern(&lf[65],33, C_text("chicken.string#string-intersperse"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\012"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005() { "));
lf[68]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016static C_word "));
lf[69]=C_h_intern(&lf[69],31, C_text("chicken.base#open-output-string"));
lf[70]=C_h_intern(&lf[70],7, C_text("declare"));
lf[71]=C_h_intern(&lf[71],5, C_text("code_"));
lf[72]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\006string\376\377\001\000\000\000\000"));
lf[73]=C_h_intern(&lf[73],12, C_text("let-location"));
lf[74]=C_h_intern(&lf[74],8, C_text("\004corelet"));
lf[75]=C_h_intern(&lf[75],17, C_text("\004corelet-location"));
lf[76]=C_h_intern(&lf[76],5, C_text("foldr"));
lf[77]=C_h_intern(&lf[77],13, C_text("scheme#append"));
lf[78]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001\376\377\001\000\000"
"\000\000\376\001\000\000\001_"));
lf[79]=C_h_intern(&lf[79],15, C_text("define-location"));
lf[80]=C_h_intern(&lf[80],29, C_text("\004coredefine-external-variable"));
lf[81]=C_h_intern(&lf[81],9, C_text("\004coreset!"));
lf[82]=C_h_intern(&lf[82],5, C_text("begin"));
lf[83]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001"));
lf[84]=C_h_intern(&lf[84],8, C_text("location"));
lf[85]=C_h_intern(&lf[85],13, C_text("\004corelocation"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\010location\376\003\000\000\002\376\001\000\000\001_\376\377\016"));
lf[87]=C_h_intern(&lf[87],15, C_text("define-external"));
lf[88]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001"));
lf[89]=C_h_intern(&lf[89],5, C_text("quote"));
lf[90]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[91]=C_h_intern(&lf[91],29, C_text("\004coreforeign-callback-wrapper"));
lf[92]=C_h_intern(&lf[92],6, C_text("lambda"));
lf[93]=C_h_intern(&lf[93],6, C_text("define"));
lf[94]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\377\001\000\000\000\000\376"
"\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001"));
lf[95]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376"
"\001\000\000\001_\376\377\001\000\000\000\001"));
lf[96]=C_h_intern(&lf[96],21, C_text("\003sysmacro-environment"));
C_register_lf2(lf,97,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1392,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[161] = {
{C_text("f_1392:chicken_2dffi_2dsyntax_2escm"),(void*)f_1392},
{C_text("f_1395:chicken_2dffi_2dsyntax_2escm"),(void*)f_1395},
{C_text("f_1398:chicken_2dffi_2dsyntax_2escm"),(void*)f_1398},
{C_text("f_1401:chicken_2dffi_2dsyntax_2escm"),(void*)f_1401},
{C_text("f_1404:chicken_2dffi_2dsyntax_2escm"),(void*)f_1404},
{C_text("f_1620:chicken_2dffi_2dsyntax_2escm"),(void*)f_1620},
{C_text("f_1628:chicken_2dffi_2dsyntax_2escm"),(void*)f_1628},
{C_text("f_1636:chicken_2dffi_2dsyntax_2escm"),(void*)f_1636},
{C_text("f_1647:chicken_2dffi_2dsyntax_2escm"),(void*)f_1647},
{C_text("f_1660:chicken_2dffi_2dsyntax_2escm"),(void*)f_1660},
{C_text("f_1674:chicken_2dffi_2dsyntax_2escm"),(void*)f_1674},
{C_text("f_1678:chicken_2dffi_2dsyntax_2escm"),(void*)f_1678},
{C_text("f_1690:chicken_2dffi_2dsyntax_2escm"),(void*)f_1690},
{C_text("f_1692:chicken_2dffi_2dsyntax_2escm"),(void*)f_1692},
{C_text("f_1739:chicken_2dffi_2dsyntax_2escm"),(void*)f_1739},
{C_text("f_1741:chicken_2dffi_2dsyntax_2escm"),(void*)f_1741},
{C_text("f_1815:chicken_2dffi_2dsyntax_2escm"),(void*)f_1815},
{C_text("f_2686:chicken_2dffi_2dsyntax_2escm"),(void*)f_2686},
{C_text("f_2688:chicken_2dffi_2dsyntax_2escm"),(void*)f_2688},
{C_text("f_2694:chicken_2dffi_2dsyntax_2escm"),(void*)f_2694},
{C_text("f_2701:chicken_2dffi_2dsyntax_2escm"),(void*)f_2701},
{C_text("f_2714:chicken_2dffi_2dsyntax_2escm"),(void*)f_2714},
{C_text("f_2717:chicken_2dffi_2dsyntax_2escm"),(void*)f_2717},
{C_text("f_2720:chicken_2dffi_2dsyntax_2escm"),(void*)f_2720},
{C_text("f_2723:chicken_2dffi_2dsyntax_2escm"),(void*)f_2723},
{C_text("f_2726:chicken_2dffi_2dsyntax_2escm"),(void*)f_2726},
{C_text("f_2729:chicken_2dffi_2dsyntax_2escm"),(void*)f_2729},
{C_text("f_2732:chicken_2dffi_2dsyntax_2escm"),(void*)f_2732},
{C_text("f_2735:chicken_2dffi_2dsyntax_2escm"),(void*)f_2735},
{C_text("f_2738:chicken_2dffi_2dsyntax_2escm"),(void*)f_2738},
{C_text("f_2741:chicken_2dffi_2dsyntax_2escm"),(void*)f_2741},
{C_text("f_2744:chicken_2dffi_2dsyntax_2escm"),(void*)f_2744},
{C_text("f_2747:chicken_2dffi_2dsyntax_2escm"),(void*)f_2747},
{C_text("f_2750:chicken_2dffi_2dsyntax_2escm"),(void*)f_2750},
{C_text("f_2753:chicken_2dffi_2dsyntax_2escm"),(void*)f_2753},
{C_text("f_2756:chicken_2dffi_2dsyntax_2escm"),(void*)f_2756},
{C_text("f_2759:chicken_2dffi_2dsyntax_2escm"),(void*)f_2759},
{C_text("f_2763:chicken_2dffi_2dsyntax_2escm"),(void*)f_2763},
{C_text("f_2765:chicken_2dffi_2dsyntax_2escm"),(void*)f_2765},
{C_text("f_2769:chicken_2dffi_2dsyntax_2escm"),(void*)f_2769},
{C_text("f_2772:chicken_2dffi_2dsyntax_2escm"),(void*)f_2772},
{C_text("f_2775:chicken_2dffi_2dsyntax_2escm"),(void*)f_2775},
{C_text("f_2778:chicken_2dffi_2dsyntax_2escm"),(void*)f_2778},
{C_text("f_2793:chicken_2dffi_2dsyntax_2escm"),(void*)f_2793},
{C_text("f_2807:chicken_2dffi_2dsyntax_2escm"),(void*)f_2807},
{C_text("f_2809:chicken_2dffi_2dsyntax_2escm"),(void*)f_2809},
{C_text("f_2813:chicken_2dffi_2dsyntax_2escm"),(void*)f_2813},
{C_text("f_2842:chicken_2dffi_2dsyntax_2escm"),(void*)f_2842},
{C_text("f_2848:chicken_2dffi_2dsyntax_2escm"),(void*)f_2848},
{C_text("f_2852:chicken_2dffi_2dsyntax_2escm"),(void*)f_2852},
{C_text("f_2856:chicken_2dffi_2dsyntax_2escm"),(void*)f_2856},
{C_text("f_2862:chicken_2dffi_2dsyntax_2escm"),(void*)f_2862},
{C_text("f_2887:chicken_2dffi_2dsyntax_2escm"),(void*)f_2887},
{C_text("f_2902:chicken_2dffi_2dsyntax_2escm"),(void*)f_2902},
{C_text("f_2904:chicken_2dffi_2dsyntax_2escm"),(void*)f_2904},
{C_text("f_2908:chicken_2dffi_2dsyntax_2escm"),(void*)f_2908},
{C_text("f_2933:chicken_2dffi_2dsyntax_2escm"),(void*)f_2933},
{C_text("f_2939:chicken_2dffi_2dsyntax_2escm"),(void*)f_2939},
{C_text("f_2943:chicken_2dffi_2dsyntax_2escm"),(void*)f_2943},
{C_text("f_2947:chicken_2dffi_2dsyntax_2escm"),(void*)f_2947},
{C_text("f_2953:chicken_2dffi_2dsyntax_2escm"),(void*)f_2953},
{C_text("f_2978:chicken_2dffi_2dsyntax_2escm"),(void*)f_2978},
{C_text("f_2993:chicken_2dffi_2dsyntax_2escm"),(void*)f_2993},
{C_text("f_2995:chicken_2dffi_2dsyntax_2escm"),(void*)f_2995},
{C_text("f_2999:chicken_2dffi_2dsyntax_2escm"),(void*)f_2999},
{C_text("f_3028:chicken_2dffi_2dsyntax_2escm"),(void*)f_3028},
{C_text("f_3034:chicken_2dffi_2dsyntax_2escm"),(void*)f_3034},
{C_text("f_3038:chicken_2dffi_2dsyntax_2escm"),(void*)f_3038},
{C_text("f_3042:chicken_2dffi_2dsyntax_2escm"),(void*)f_3042},
{C_text("f_3048:chicken_2dffi_2dsyntax_2escm"),(void*)f_3048},
{C_text("f_3073:chicken_2dffi_2dsyntax_2escm"),(void*)f_3073},
{C_text("f_3088:chicken_2dffi_2dsyntax_2escm"),(void*)f_3088},
{C_text("f_3090:chicken_2dffi_2dsyntax_2escm"),(void*)f_3090},
{C_text("f_3094:chicken_2dffi_2dsyntax_2escm"),(void*)f_3094},
{C_text("f_3119:chicken_2dffi_2dsyntax_2escm"),(void*)f_3119},
{C_text("f_3125:chicken_2dffi_2dsyntax_2escm"),(void*)f_3125},
{C_text("f_3129:chicken_2dffi_2dsyntax_2escm"),(void*)f_3129},
{C_text("f_3133:chicken_2dffi_2dsyntax_2escm"),(void*)f_3133},
{C_text("f_3139:chicken_2dffi_2dsyntax_2escm"),(void*)f_3139},
{C_text("f_3164:chicken_2dffi_2dsyntax_2escm"),(void*)f_3164},
{C_text("f_3179:chicken_2dffi_2dsyntax_2escm"),(void*)f_3179},
{C_text("f_3181:chicken_2dffi_2dsyntax_2escm"),(void*)f_3181},
{C_text("f_3185:chicken_2dffi_2dsyntax_2escm"),(void*)f_3185},
{C_text("f_3188:chicken_2dffi_2dsyntax_2escm"),(void*)f_3188},
{C_text("f_3191:chicken_2dffi_2dsyntax_2escm"),(void*)f_3191},
{C_text("f_3194:chicken_2dffi_2dsyntax_2escm"),(void*)f_3194},
{C_text("f_3203:chicken_2dffi_2dsyntax_2escm"),(void*)f_3203},
{C_text("f_3220:chicken_2dffi_2dsyntax_2escm"),(void*)f_3220},
{C_text("f_3235:chicken_2dffi_2dsyntax_2escm"),(void*)f_3235},
{C_text("f_3249:chicken_2dffi_2dsyntax_2escm"),(void*)f_3249},
{C_text("f_3251:chicken_2dffi_2dsyntax_2escm"),(void*)f_3251},
{C_text("f_3276:chicken_2dffi_2dsyntax_2escm"),(void*)f_3276},
{C_text("f_3285:chicken_2dffi_2dsyntax_2escm"),(void*)f_3285},
{C_text("f_3354:chicken_2dffi_2dsyntax_2escm"),(void*)f_3354},
{C_text("f_3356:chicken_2dffi_2dsyntax_2escm"),(void*)f_3356},
{C_text("f_3360:chicken_2dffi_2dsyntax_2escm"),(void*)f_3360},
{C_text("f_3371:chicken_2dffi_2dsyntax_2escm"),(void*)f_3371},
{C_text("f_3373:chicken_2dffi_2dsyntax_2escm"),(void*)f_3373},
{C_text("f_3377:chicken_2dffi_2dsyntax_2escm"),(void*)f_3377},
{C_text("f_3388:chicken_2dffi_2dsyntax_2escm"),(void*)f_3388},
{C_text("f_3390:chicken_2dffi_2dsyntax_2escm"),(void*)f_3390},
{C_text("f_3394:chicken_2dffi_2dsyntax_2escm"),(void*)f_3394},
{C_text("f_3409:chicken_2dffi_2dsyntax_2escm"),(void*)f_3409},
{C_text("f_3411:chicken_2dffi_2dsyntax_2escm"),(void*)f_3411},
{C_text("f_3415:chicken_2dffi_2dsyntax_2escm"),(void*)f_3415},
{C_text("f_3418:chicken_2dffi_2dsyntax_2escm"),(void*)f_3418},
{C_text("f_3428:chicken_2dffi_2dsyntax_2escm"),(void*)f_3428},
{C_text("f_3436:chicken_2dffi_2dsyntax_2escm"),(void*)f_3436},
{C_text("f_3440:chicken_2dffi_2dsyntax_2escm"),(void*)f_3440},
{C_text("f_3452:chicken_2dffi_2dsyntax_2escm"),(void*)f_3452},
{C_text("f_3471:chicken_2dffi_2dsyntax_2escm"),(void*)f_3471},
{C_text("f_3473:chicken_2dffi_2dsyntax_2escm"),(void*)f_3473},
{C_text("f_3477:chicken_2dffi_2dsyntax_2escm"),(void*)f_3477},
{C_text("f_3480:chicken_2dffi_2dsyntax_2escm"),(void*)f_3480},
{C_text("f_3495:chicken_2dffi_2dsyntax_2escm"),(void*)f_3495},
{C_text("f_3503:chicken_2dffi_2dsyntax_2escm"),(void*)f_3503},
{C_text("f_3509:chicken_2dffi_2dsyntax_2escm"),(void*)f_3509},
{C_text("f_3512:chicken_2dffi_2dsyntax_2escm"),(void*)f_3512},
{C_text("f_3515:chicken_2dffi_2dsyntax_2escm"),(void*)f_3515},
{C_text("f_3518:chicken_2dffi_2dsyntax_2escm"),(void*)f_3518},
{C_text("f_3521:chicken_2dffi_2dsyntax_2escm"),(void*)f_3521},
{C_text("f_3524:chicken_2dffi_2dsyntax_2escm"),(void*)f_3524},
{C_text("f_3528:chicken_2dffi_2dsyntax_2escm"),(void*)f_3528},
{C_text("f_3536:chicken_2dffi_2dsyntax_2escm"),(void*)f_3536},
{C_text("f_3538:chicken_2dffi_2dsyntax_2escm"),(void*)f_3538},
{C_text("f_3542:chicken_2dffi_2dsyntax_2escm"),(void*)f_3542},
{C_text("f_3551:chicken_2dffi_2dsyntax_2escm"),(void*)f_3551},
{C_text("f_3559:chicken_2dffi_2dsyntax_2escm"),(void*)f_3559},
{C_text("f_3565:chicken_2dffi_2dsyntax_2escm"),(void*)f_3565},
{C_text("f_3572:chicken_2dffi_2dsyntax_2escm"),(void*)f_3572},
{C_text("f_3576:chicken_2dffi_2dsyntax_2escm"),(void*)f_3576},
{C_text("f_3578:chicken_2dffi_2dsyntax_2escm"),(void*)f_3578},
{C_text("f_3601:chicken_2dffi_2dsyntax_2escm"),(void*)f_3601},
{C_text("f_3640:chicken_2dffi_2dsyntax_2escm"),(void*)f_3640},
{C_text("f_3663:chicken_2dffi_2dsyntax_2escm"),(void*)f_3663},
{C_text("f_3688:chicken_2dffi_2dsyntax_2escm"),(void*)f_3688},
{C_text("f_3699:chicken_2dffi_2dsyntax_2escm"),(void*)f_3699},
{C_text("f_3701:chicken_2dffi_2dsyntax_2escm"),(void*)f_3701},
{C_text("f_3705:chicken_2dffi_2dsyntax_2escm"),(void*)f_3705},
{C_text("f_3720:chicken_2dffi_2dsyntax_2escm"),(void*)f_3720},
{C_text("f_3727:chicken_2dffi_2dsyntax_2escm"),(void*)f_3727},
{C_text("f_3763:chicken_2dffi_2dsyntax_2escm"),(void*)f_3763},
{C_text("f_3767:chicken_2dffi_2dsyntax_2escm"),(void*)f_3767},
{C_text("f_3777:chicken_2dffi_2dsyntax_2escm"),(void*)f_3777},
{C_text("f_3779:chicken_2dffi_2dsyntax_2escm"),(void*)f_3779},
{C_text("f_3783:chicken_2dffi_2dsyntax_2escm"),(void*)f_3783},
{C_text("f_3794:chicken_2dffi_2dsyntax_2escm"),(void*)f_3794},
{C_text("f_3796:chicken_2dffi_2dsyntax_2escm"),(void*)f_3796},
{C_text("f_3803:chicken_2dffi_2dsyntax_2escm"),(void*)f_3803},
{C_text("f_3806:chicken_2dffi_2dsyntax_2escm"),(void*)f_3806},
{C_text("f_3812:chicken_2dffi_2dsyntax_2escm"),(void*)f_3812},
{C_text("f_3822:chicken_2dffi_2dsyntax_2escm"),(void*)f_3822},
{C_text("f_3869:chicken_2dffi_2dsyntax_2escm"),(void*)f_3869},
{C_text("f_3882:chicken_2dffi_2dsyntax_2escm"),(void*)f_3882},
{C_text("f_3912:chicken_2dffi_2dsyntax_2escm"),(void*)f_3912},
{C_text("f_3928:chicken_2dffi_2dsyntax_2escm"),(void*)f_3928},
{C_text("f_3940:chicken_2dffi_2dsyntax_2escm"),(void*)f_3940},
{C_text("f_3987:chicken_2dffi_2dsyntax_2escm"),(void*)f_3987},
{C_text("f_3989:chicken_2dffi_2dsyntax_2escm"),(void*)f_3989},
{C_text("toplevel:chicken_2dffi_2dsyntax_2escm"),(void*)C_chicken_2dffi_2dsyntax_toplevel},
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
S|  sprintf		1
S|  foldl		3
S|  map		12
S|  foldr		3
o|eliminated procedure checks: 135 
o|specializations:
o|  1 (##sys#check-output-port * * *)
o|  1 (scheme#= fixnum fixnum)
o|  1 (scheme#cdddr (pair * (pair * pair)))
o|  3 (scheme#cddr (pair * pair))
o|  3 (scheme#cadr (pair * pair))
o|  1 (scheme#eqv? * *)
o|  4 (##sys#check-list (or pair list) *)
o|  29 (scheme#cdr pair)
o|  12 (scheme#car pair)
(o e)|safe calls: 407 
o|safe globals: (posv posq make-list iota find-tail find length+ lset=/eq? lset<=/eq? list-tabulate lset-intersection/eq? lset-union/eq? lset-difference/eq? lset-adjoin/eq? list-index last unzip1 remove filter-map filter alist-cons delete-duplicates fifth fourth third second first delete concatenate cons* any every append-map split-at drop take span partition) 
o|removed side-effect free assignment to unused variable: partition 
o|removed side-effect free assignment to unused variable: span 
o|removed side-effect free assignment to unused variable: drop 
o|removed side-effect free assignment to unused variable: split-at 
o|inlining procedure: k1786 
o|inlining procedure: k1786 
o|inlining procedure: k1817 
o|inlining procedure: k1817 
o|removed side-effect free assignment to unused variable: cons* 
o|removed side-effect free assignment to unused variable: concatenate 
o|removed side-effect free assignment to unused variable: first 
o|removed side-effect free assignment to unused variable: second 
o|removed side-effect free assignment to unused variable: third 
o|removed side-effect free assignment to unused variable: fourth 
o|removed side-effect free assignment to unused variable: fifth 
o|removed side-effect free assignment to unused variable: delete-duplicates 
o|removed side-effect free assignment to unused variable: alist-cons 
o|inlining procedure: k2034 
o|inlining procedure: k2034 
o|inlining procedure: k2026 
o|inlining procedure: k2026 
o|removed side-effect free assignment to unused variable: filter-map 
o|removed side-effect free assignment to unused variable: remove 
o|removed side-effect free assignment to unused variable: unzip1 
o|removed side-effect free assignment to unused variable: last 
o|removed side-effect free assignment to unused variable: list-index 
o|removed side-effect free assignment to unused variable: lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: lset-difference/eq? 
o|removed side-effect free assignment to unused variable: lset-union/eq? 
o|removed side-effect free assignment to unused variable: lset-intersection/eq? 
o|inlining procedure: k2425 
o|inlining procedure: k2425 
o|removed side-effect free assignment to unused variable: lset<=/eq? 
o|removed side-effect free assignment to unused variable: lset=/eq? 
o|removed side-effect free assignment to unused variable: length+ 
o|removed side-effect free assignment to unused variable: find 
o|removed side-effect free assignment to unused variable: find-tail 
o|removed side-effect free assignment to unused variable: iota 
o|removed side-effect free assignment to unused variable: make-list 
o|removed side-effect free assignment to unused variable: posq 
o|removed side-effect free assignment to unused variable: posv 
o|inlining procedure: k2696 
o|inlining procedure: k2696 
o|inlining procedure: k2864 
o|contracted procedure: "(chicken-ffi-syntax.scm:301) g10141023" 
o|inlining procedure: k2864 
o|inlining procedure: k2955 
o|contracted procedure: "(chicken-ffi-syntax.scm:287) g973982" 
o|propagated global variable: g990991 chicken.compiler.support#foreign-type->scrutiny-type 
o|inlining procedure: k2955 
o|inlining procedure: k3050 
o|contracted procedure: "(chicken-ffi-syntax.scm:270) g939948" 
o|inlining procedure: k3050 
o|inlining procedure: k3141 
o|contracted procedure: "(chicken-ffi-syntax.scm:256) g898907" 
o|propagated global variable: g915916 chicken.compiler.support#foreign-type->scrutiny-type 
o|inlining procedure: k3141 
o|inlining procedure: k3237 
o|inlining procedure: k3237 
o|inlining procedure: k3253 
o|contracted procedure: "(chicken-ffi-syntax.scm:241) g857866" 
o|propagated global variable: g874875 chicken.compiler.support#foreign-type->scrutiny-type 
o|inlining procedure: k3253 
o|inlining procedure: k3287 
o|inlining procedure: k3287 
o|inlining procedure: k3319 
o|inlining procedure: k3319 
o|inlining procedure: k3450 
o|inlining procedure: k3450 
o|substituted constant variable: a3505 
o|substituted constant variable: a3506 
o|removed unused formal parameters: (_725) 
o|inlining procedure: k3580 
o|inlining procedure: k3580 
o|substituted constant variable: a3630 
o|inlining procedure: k3642 
o|inlining procedure: k3642 
o|contracted procedure: "(chicken-ffi-syntax.scm:136) append-map" 
o|inlining procedure: k1607 
o|inlining procedure: k1622 
o|inlining procedure: k1622 
o|inlining procedure: k1607 
o|inlining procedure: k1662 
o|inlining procedure: k1662 
o|inlining procedure: k1694 
o|contracted procedure: "(mini-srfi-1.scm:77) g201210" 
o|inlining procedure: k1694 
o|inlining procedure: k1743 
o|contracted procedure: "(mini-srfi-1.scm:76) g174183" 
o|inlining procedure: k1743 
o|inlining procedure: k3665 
o|removed unused parameter to known procedure: _725 "(chicken-ffi-syntax.scm:134) g714723" 
o|inlining procedure: k3665 
o|inlining procedure: k3745 
o|inlining procedure: k3745 
o|inlining procedure: k3807 
o|inlining procedure: k3840 
o|inlining procedure: k3840 
o|inlining procedure: k3807 
o|inlining procedure: k3930 
o|inlining procedure: k3930 
o|inlining procedure: k3942 
o|contracted procedure: "(chicken-ffi-syntax.scm:94) g655664" 
o|inlining procedure: k3942 
o|inlining procedure: k3991 
o|contracted procedure: "(chicken-ffi-syntax.scm:92) g628637" 
o|inlining procedure: k3991 
o|inlining procedure: k4023 
o|inlining procedure: k4023 
o|inlining procedure: k4052 
o|inlining procedure: k4052 
o|replaced variables: 249 
o|removed binding forms: 145 
o|removed side-effect free assignment to unused variable: every 
o|removed side-effect free assignment to unused variable: filter 
o|removed side-effect free assignment to unused variable: list-tabulate 
o|substituted constant variable: r32384091 
o|substituted constant variable: r32384091 
o|substituted constant variable: r36434110 
o|substituted constant variable: r16234113 
o|substituted constant variable: r16634115 
o|contracted procedure: "(mini-srfi-1.scm:74) any" 
o|substituted constant variable: r18184073 
o|substituted constant variable: r37464125 
o|substituted constant variable: r37464125 
o|substituted constant variable: r38414130 
o|substituted constant variable: r38414130 
o|substituted constant variable: r40534146 
o|converted assignments to bindings: (compiler-only-er-transformer590) 
o|simplifications: ((let . 1)) 
o|replaced variables: 3 
o|removed binding forms: 287 
o|removed call to pure procedure with unused result: "(chicken-ffi-syntax.scm:134) slot" 
o|replaced variables: 17 
o|removed binding forms: 18 
o|contracted procedure: k3690 
o|removed binding forms: 19 
o|removed binding forms: 1 
o|simplifications: ((if . 5) (##core#call . 229)) 
o|  call simplifications:
o|    scheme#apply
o|    scheme#null?	5
o|    scheme#length
o|    scheme#eq?
o|    scheme#symbol?	2
o|    scheme#cdr	7
o|    scheme#cddr	3
o|    scheme#not	3
o|    scheme#list	2
o|    scheme#cdddr	3
o|    scheme#caddr	9
o|    ##sys#check-list	10
o|    scheme#pair?	18
o|    scheme#cons	24
o|    ##sys#setslot	11
o|    ##sys#slot	34
o|    ##sys#cons	23
o|    scheme#cadr	15
o|    scheme#string?	4
o|    ##sys#list	38
o|    scheme#car	15
o|contracted procedure: k2709 
o|contracted procedure: k2783 
o|contracted procedure: k2787 
o|contracted procedure: k2794 
o|contracted procedure: k2801 
o|contracted procedure: k2828 
o|contracted procedure: k2843 
o|contracted procedure: k2818 
o|contracted procedure: k2822 
o|contracted procedure: k2858 
o|contracted procedure: k2867 
o|contracted procedure: k2870 
o|contracted procedure: k2873 
o|contracted procedure: k2881 
o|contracted procedure: k2889 
o|contracted procedure: k2837 
o|contracted procedure: k2896 
o|contracted procedure: k2923 
o|contracted procedure: k2934 
o|contracted procedure: k2913 
o|contracted procedure: k2917 
o|contracted procedure: k2949 
o|contracted procedure: k2958 
o|contracted procedure: k2961 
o|contracted procedure: k2964 
o|contracted procedure: k2972 
o|contracted procedure: k2980 
o|contracted procedure: k2987 
o|contracted procedure: k3014 
o|contracted procedure: k3029 
o|contracted procedure: k3004 
o|contracted procedure: k3008 
o|contracted procedure: k3044 
o|contracted procedure: k3053 
o|contracted procedure: k3056 
o|contracted procedure: k3059 
o|contracted procedure: k3067 
o|contracted procedure: k3075 
o|contracted procedure: k3023 
o|contracted procedure: k3082 
o|contracted procedure: k3109 
o|contracted procedure: k3120 
o|contracted procedure: k3099 
o|contracted procedure: k3103 
o|contracted procedure: k3135 
o|contracted procedure: k3144 
o|contracted procedure: k3147 
o|contracted procedure: k3150 
o|contracted procedure: k3158 
o|contracted procedure: k3166 
o|contracted procedure: k3173 
o|contracted procedure: k3195 
o|contracted procedure: k3198 
o|contracted procedure: k3208 
o|contracted procedure: k3212 
o|contracted procedure: k3222 
o|contracted procedure: k3230 
o|contracted procedure: k3240 
o|contracted procedure: k3237 
o|contracted procedure: k3256 
o|contracted procedure: k3259 
o|contracted procedure: k3262 
o|contracted procedure: k3270 
o|contracted procedure: k3278 
o|contracted procedure: k3290 
o|contracted procedure: k3312 
o|contracted procedure: k3308 
o|contracted procedure: k3293 
o|contracted procedure: k3296 
o|contracted procedure: k3304 
o|contracted procedure: k3319 
o|contracted procedure: k3348 
o|contracted procedure: k3333 
o|contracted procedure: k3344 
o|contracted procedure: k3340 
o|contracted procedure: k3365 
o|contracted procedure: k3382 
o|contracted procedure: k3403 
o|contracted procedure: k3399 
o|contracted procedure: k3419 
o|contracted procedure: k3430 
o|contracted procedure: k3442 
o|contracted procedure: k3446 
o|contracted procedure: k3453 
o|contracted procedure: k3459 
o|contracted procedure: k3497 
o|contracted procedure: k3485 
o|contracted procedure: k3489 
o|contracted procedure: k3530 
o|contracted procedure: k3543 
o|contracted procedure: k3548 
o|contracted procedure: k3560 
o|contracted procedure: k3583 
o|contracted procedure: k3590 
o|contracted procedure: k3593 
o|contracted procedure: k3596 
o|contracted procedure: k3632 
o|contracted procedure: k3605 
o|contracted procedure: k3612 
o|contracted procedure: k3616 
o|contracted procedure: k3623 
o|contracted procedure: k3627 
o|contracted procedure: k3659 
o|contracted procedure: k3645 
o|contracted procedure: k3652 
o|contracted procedure: k1610 
o|contracted procedure: k1613 
o|contracted procedure: k1625 
o|contracted procedure: k1641 
o|contracted procedure: k1649 
o|contracted procedure: k1656 
o|contracted procedure: k1680 
o|contracted procedure: k1697 
o|contracted procedure: k1719 
o|contracted procedure: k1715 
o|contracted procedure: k1700 
o|contracted procedure: k1703 
o|contracted procedure: k1711 
o|contracted procedure: k1726 
o|contracted procedure: k1734 
o|contracted procedure: k1746 
o|contracted procedure: k1768 
o|contracted procedure: k1764 
o|contracted procedure: k1749 
o|contracted procedure: k1752 
o|contracted procedure: k1760 
o|contracted procedure: k1820 
o|contracted procedure: k1835 
o|contracted procedure: k1823 
o|contracted procedure: k3668 
o|contracted procedure: k3671 
o|contracted procedure: k3674 
o|contracted procedure: k3682 
o|contracted procedure: k3706 
o|contracted procedure: k3709 
o|contracted procedure: k3768 
o|contracted procedure: k3715 
o|contracted procedure: k3733 
o|contracted procedure: k3729 
o|contracted procedure: k3741 
o|contracted procedure: k3748 
o|contracted procedure: k3755 
o|contracted procedure: k3745 
o|contracted procedure: k3788 
o|contracted procedure: k3798 
o|contracted procedure: k3813 
o|contracted procedure: k3864 
o|contracted procedure: k3828 
o|contracted procedure: k3824 
o|contracted procedure: k3836 
o|contracted procedure: k3843 
o|contracted procedure: k3854 
o|contracted procedure: k3850 
o|contracted procedure: k3840 
o|contracted procedure: k3870 
o|contracted procedure: k3873 
o|contracted procedure: k3890 
o|contracted procedure: k3894 
o|contracted procedure: k4023 
o|contracted procedure: k3898 
o|contracted procedure: k3974 
o|contracted procedure: k3982 
o|contracted procedure: k3902 
o|contracted procedure: k3918 
o|contracted procedure: k3930 
o|contracted procedure: k3914 
o|contracted procedure: k3906 
o|contracted procedure: k3886 
o|contracted procedure: k3945 
o|contracted procedure: k3967 
o|contracted procedure: k3963 
o|contracted procedure: k3948 
o|contracted procedure: k3951 
o|contracted procedure: k3959 
o|contracted procedure: k3994 
o|contracted procedure: k4016 
o|contracted procedure: k4012 
o|contracted procedure: k3997 
o|contracted procedure: k4000 
o|contracted procedure: k4008 
o|contracted procedure: k4049 
o|contracted procedure: k4055 
o|contracted procedure: k4063 
o|simplifications: ((let . 26)) 
o|removed binding forms: 183 
o|inlining procedure: k3737 
o|inlining procedure: k3737 
o|inlining procedure: k3832 
o|inlining procedure: k3832 
o|replaced variables: 69 
o|removed binding forms: 42 
o|replaced variables: 6 
o|removed binding forms: 3 
o|direct leaf routine/allocation: loop237 0 
o|contracted procedure: k1665 
o|converted assignments to bindings: (loop237) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 1 
o|customizable procedures: (k3801 k3804 map-loop622640 map-loop649667 g714723 map-loop708726 map-loop168186 map-loop195213 loop164 foldr153156 g158159 loop738 k3426 k3186 map-loop822839 map-loop851876 k3218 map-loop892917 map-loop933951 map-loop967992 map-loop10081026 compiler-only-er-transformer590) 
o|calls to known targets: 58 
o|identified direct recursive calls: f_3285 1 
o|identified direct recursive calls: f_3578 1 
o|identified direct recursive calls: f_1620 1 
o|identified direct recursive calls: f_1815 1 
o|identified direct recursive calls: f_1692 1 
o|identified direct recursive calls: f_1741 1 
o|identified direct recursive calls: f_3940 1 
o|identified direct recursive calls: f_3989 1 
o|fast box initializations: 14 
o|dropping unused closure argument: f_1815 
o|dropping unused closure argument: f_2688 
*/
/* end of file */

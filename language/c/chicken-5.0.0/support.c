/* Generated from support.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: support.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -no-lambda-info -no-trace -emit-import-library chicken.compiler.support -output-file support.c
   unit: support
   uses: library eval expand data-structures extras file internal pathname port
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_file_toplevel)
C_externimport void C_ccall C_file_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_pathname_toplevel)
C_externimport void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_port_toplevel)
C_externimport void C_ccall C_port_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[529];
static double C_possibly_force_alignment;


#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub4077(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word lit=(C_word )(C_a0);
return(C_header_size(lit));
C_ret:
#undef return

return C_r;}

/* from k7197 */
C_regparm static C_word C_fcall stub947(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_wordstobytes(t0));
return C_r;}

/* from k7190 */
C_regparm static C_word C_fcall stub942(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_bytestowords(t0));
return C_r;}

C_noret_decl(f18811)
static void C_ccall f18811(C_word c,C_word *av) C_noret;
C_noret_decl(f_10011)
static void C_ccall f_10011(C_word c,C_word *av) C_noret;
C_noret_decl(f_10023)
static void C_ccall f_10023(C_word c,C_word *av) C_noret;
C_noret_decl(f_10048)
static void C_fcall f_10048(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10073)
static void C_ccall f_10073(C_word c,C_word *av) C_noret;
C_noret_decl(f_10103)
static void C_ccall f_10103(C_word c,C_word *av) C_noret;
C_noret_decl(f_10105)
static void C_fcall f_10105(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10130)
static void C_ccall f_10130(C_word c,C_word *av) C_noret;
C_noret_decl(f_10161)
static void C_fcall f_10161(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10173)
static void C_ccall f_10173(C_word c,C_word *av) C_noret;
C_noret_decl(f_10177)
static void C_ccall f_10177(C_word c,C_word *av) C_noret;
C_noret_decl(f_10199)
static void C_ccall f_10199(C_word c,C_word *av) C_noret;
C_noret_decl(f_10210)
static void C_fcall f_10210(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10217)
static void C_ccall f_10217(C_word c,C_word *av) C_noret;
C_noret_decl(f_10228)
static void C_ccall f_10228(C_word c,C_word *av) C_noret;
C_noret_decl(f_10230)
static void C_fcall f_10230(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10255)
static void C_ccall f_10255(C_word c,C_word *av) C_noret;
C_noret_decl(f_10288)
static void C_ccall f_10288(C_word c,C_word *av) C_noret;
C_noret_decl(f_10290)
static void C_fcall f_10290(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10315)
static void C_ccall f_10315(C_word c,C_word *av) C_noret;
C_noret_decl(f_10329)
static void C_ccall f_10329(C_word c,C_word *av) C_noret;
C_noret_decl(f_10339)
static void C_ccall f_10339(C_word c,C_word *av) C_noret;
C_noret_decl(f_10341)
static void C_fcall f_10341(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10366)
static void C_ccall f_10366(C_word c,C_word *av) C_noret;
C_noret_decl(f_10444)
static void C_ccall f_10444(C_word c,C_word *av) C_noret;
C_noret_decl(f_10450)
static void C_fcall f_10450(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10476)
static void C_ccall f_10476(C_word c,C_word *av) C_noret;
C_noret_decl(f_10480)
static void C_ccall f_10480(C_word c,C_word *av) C_noret;
C_noret_decl(f_10496)
static void C_ccall f_10496(C_word c,C_word *av) C_noret;
C_noret_decl(f_10502)
static void C_ccall f_10502(C_word c,C_word *av) C_noret;
C_noret_decl(f_10508)
static void C_ccall f_10508(C_word c,C_word *av) C_noret;
C_noret_decl(f_10514)
static void C_ccall f_10514(C_word c,C_word *av) C_noret;
C_noret_decl(f_10518)
static void C_ccall f_10518(C_word c,C_word *av) C_noret;
C_noret_decl(f_10521)
static void C_ccall f_10521(C_word c,C_word *av) C_noret;
C_noret_decl(f_10528)
static void C_ccall f_10528(C_word c,C_word *av) C_noret;
C_noret_decl(f_10530)
static void C_fcall f_10530(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10560)
static void C_ccall f_10560(C_word c,C_word *av) C_noret;
C_noret_decl(f_10588)
static void C_ccall f_10588(C_word c,C_word *av) C_noret;
C_noret_decl(f_10612)
static void C_ccall f_10612(C_word c,C_word *av) C_noret;
C_noret_decl(f_10634)
static void C_fcall f_10634(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10659)
static void C_ccall f_10659(C_word c,C_word *av) C_noret;
C_noret_decl(f_10681)
static void C_ccall f_10681(C_word c,C_word *av) C_noret;
C_noret_decl(f_10689)
static void C_fcall f_10689(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10740)
static void C_ccall f_10740(C_word c,C_word *av) C_noret;
C_noret_decl(f_10747)
static void C_ccall f_10747(C_word c,C_word *av) C_noret;
C_noret_decl(f_10750)
static void C_ccall f_10750(C_word c,C_word *av) C_noret;
C_noret_decl(f_10779)
static void C_ccall f_10779(C_word c,C_word *av) C_noret;
C_noret_decl(f_10787)
static void C_ccall f_10787(C_word c,C_word *av) C_noret;
C_noret_decl(f_10803)
static void C_ccall f_10803(C_word c,C_word *av) C_noret;
C_noret_decl(f_10806)
static void C_ccall f_10806(C_word c,C_word *av) C_noret;
C_noret_decl(f_10812)
static void C_ccall f_10812(C_word c,C_word *av) C_noret;
C_noret_decl(f_10832)
static void C_ccall f_10832(C_word c,C_word *av) C_noret;
C_noret_decl(f_10855)
static void C_ccall f_10855(C_word c,C_word *av) C_noret;
C_noret_decl(f_10860)
static void C_fcall f_10860(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10864)
static void C_ccall f_10864(C_word c,C_word *av) C_noret;
C_noret_decl(f_10867)
static void C_ccall f_10867(C_word c,C_word *av) C_noret;
C_noret_decl(f_10873)
static void C_ccall f_10873(C_word c,C_word *av) C_noret;
C_noret_decl(f_10876)
static void C_ccall f_10876(C_word c,C_word *av) C_noret;
C_noret_decl(f_10893)
static void C_fcall f_10893(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10903)
static void C_ccall f_10903(C_word c,C_word *av) C_noret;
C_noret_decl(f_10905)
static void C_fcall f_10905(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10930)
static void C_ccall f_10930(C_word c,C_word *av) C_noret;
C_noret_decl(f_10941)
static void C_ccall f_10941(C_word c,C_word *av) C_noret;
C_noret_decl(f_10949)
static void C_ccall f_10949(C_word c,C_word *av) C_noret;
C_noret_decl(f_10957)
static void C_ccall f_10957(C_word c,C_word *av) C_noret;
C_noret_decl(f_10970)
static void C_ccall f_10970(C_word c,C_word *av) C_noret;
C_noret_decl(f_10972)
static void C_fcall f_10972(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11020)
static void C_fcall f_11020(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11045)
static void C_ccall f_11045(C_word c,C_word *av) C_noret;
C_noret_decl(f_11064)
static void C_ccall f_11064(C_word c,C_word *av) C_noret;
C_noret_decl(f_11069)
static void C_fcall f_11069(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11079)
static void C_ccall f_11079(C_word c,C_word *av) C_noret;
C_noret_decl(f_11081)
static void C_fcall f_11081(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11106)
static void C_ccall f_11106(C_word c,C_word *av) C_noret;
C_noret_decl(f_11128)
static void C_fcall f_11128(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11176)
static void C_ccall f_11176(C_word c,C_word *av) C_noret;
C_noret_decl(f_11182)
static void C_fcall f_11182(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11196)
static void C_ccall f_11196(C_word c,C_word *av) C_noret;
C_noret_decl(f_11200)
static void C_ccall f_11200(C_word c,C_word *av) C_noret;
C_noret_decl(f_11206)
static void C_ccall f_11206(C_word c,C_word *av) C_noret;
C_noret_decl(f_11244)
static void C_ccall f_11244(C_word c,C_word *av) C_noret;
C_noret_decl(f_11248)
static void C_ccall f_11248(C_word c,C_word *av) C_noret;
C_noret_decl(f_11251)
static void C_ccall f_11251(C_word c,C_word *av) C_noret;
C_noret_decl(f_11254)
static void C_ccall f_11254(C_word c,C_word *av) C_noret;
C_noret_decl(f_11289)
static void C_ccall f_11289(C_word c,C_word *av) C_noret;
C_noret_decl(f_11333)
static void C_ccall f_11333(C_word c,C_word *av) C_noret;
C_noret_decl(f_11335)
static void C_fcall f_11335(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11360)
static void C_ccall f_11360(C_word c,C_word *av) C_noret;
C_noret_decl(f_11375)
static void C_ccall f_11375(C_word c,C_word *av) C_noret;
C_noret_decl(f_11404)
static void C_ccall f_11404(C_word c,C_word *av) C_noret;
C_noret_decl(f_11406)
static void C_fcall f_11406(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11431)
static void C_ccall f_11431(C_word c,C_word *av) C_noret;
C_noret_decl(f_11440)
static void C_ccall f_11440(C_word c,C_word *av) C_noret;
C_noret_decl(f_11444)
static void C_ccall f_11444(C_word c,C_word *av) C_noret;
C_noret_decl(f_11447)
static void C_ccall f_11447(C_word c,C_word *av) C_noret;
C_noret_decl(f_11453)
static void C_ccall f_11453(C_word c,C_word *av) C_noret;
C_noret_decl(f_11461)
static void C_ccall f_11461(C_word c,C_word *av) C_noret;
C_noret_decl(f_11469)
static void C_fcall f_11469(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11479)
static void C_ccall f_11479(C_word c,C_word *av) C_noret;
C_noret_decl(f_11507)
static void C_ccall f_11507(C_word c,C_word *av) C_noret;
C_noret_decl(f_11511)
static void C_ccall f_11511(C_word c,C_word *av) C_noret;
C_noret_decl(f_11516)
static void C_ccall f_11516(C_word c,C_word *av) C_noret;
C_noret_decl(f_11522)
static void C_ccall f_11522(C_word c,C_word *av) C_noret;
C_noret_decl(f_11525)
static void C_ccall f_11525(C_word c,C_word *av) C_noret;
C_noret_decl(f_11530)
static void C_fcall f_11530(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11540)
static void C_ccall f_11540(C_word c,C_word *av) C_noret;
C_noret_decl(f_11555)
static void C_ccall f_11555(C_word c,C_word *av) C_noret;
C_noret_decl(f_11557)
static void C_ccall f_11557(C_word c,C_word *av) C_noret;
C_noret_decl(f_11564)
static void C_ccall f_11564(C_word c,C_word *av) C_noret;
C_noret_decl(f_11585)
static void C_fcall f_11585(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11619)
static void C_ccall f_11619(C_word c,C_word *av) C_noret;
C_noret_decl(f_11622)
static void C_fcall f_11622(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11641)
static void C_ccall f_11641(C_word c,C_word *av) C_noret;
C_noret_decl(f_11665)
static void C_ccall f_11665(C_word c,C_word *av) C_noret;
C_noret_decl(f_11698)
static void C_ccall f_11698(C_word c,C_word *av) C_noret;
C_noret_decl(f_11700)
static void C_ccall f_11700(C_word c,C_word *av) C_noret;
C_noret_decl(f_11706)
static void C_ccall f_11706(C_word c,C_word *av) C_noret;
C_noret_decl(f_11712)
static void C_fcall f_11712(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11716)
static void C_ccall f_11716(C_word c,C_word *av) C_noret;
C_noret_decl(f_11739)
static void C_ccall f_11739(C_word c,C_word *av) C_noret;
C_noret_decl(f_11750)
static void C_ccall f_11750(C_word c,C_word *av) C_noret;
C_noret_decl(f_11756)
static void C_ccall f_11756(C_word c,C_word *av) C_noret;
C_noret_decl(f_11759)
static void C_fcall f_11759(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11767)
static C_word C_fcall f_11767(C_word t0,C_word t1);
C_noret_decl(f_11793)
static void C_fcall f_11793(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11815)
static void C_ccall f_11815(C_word c,C_word *av) C_noret;
C_noret_decl(f_11840)
static void C_fcall f_11840(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11862)
static void C_ccall f_11862(C_word c,C_word *av) C_noret;
C_noret_decl(f_11880)
static void C_fcall f_11880(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11911)
static void C_ccall f_11911(C_word c,C_word *av) C_noret;
C_noret_decl(f_11963)
static void C_ccall f_11963(C_word c,C_word *av) C_noret;
C_noret_decl(f_11969)
static void C_ccall f_11969(C_word c,C_word *av) C_noret;
C_noret_decl(f_11989)
static void C_ccall f_11989(C_word c,C_word *av) C_noret;
C_noret_decl(f_11995)
static void C_ccall f_11995(C_word c,C_word *av) C_noret;
C_noret_decl(f_12021)
static void C_fcall f_12021(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12035)
static void C_ccall f_12035(C_word c,C_word *av) C_noret;
C_noret_decl(f_12043)
static void C_ccall f_12043(C_word c,C_word *av) C_noret;
C_noret_decl(f_12098)
static void C_ccall f_12098(C_word c,C_word *av) C_noret;
C_noret_decl(f_12127)
static void C_ccall f_12127(C_word c,C_word *av) C_noret;
C_noret_decl(f_12224)
static void C_ccall f_12224(C_word c,C_word *av) C_noret;
C_noret_decl(f_12230)
static void C_ccall f_12230(C_word c,C_word *av) C_noret;
C_noret_decl(f_12237)
static void C_fcall f_12237(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12240)
static void C_ccall f_12240(C_word c,C_word *av) C_noret;
C_noret_decl(f_12263)
static void C_ccall f_12263(C_word c,C_word *av) C_noret;
C_noret_decl(f_12265)
static void C_ccall f_12265(C_word c,C_word *av) C_noret;
C_noret_decl(f_12271)
static void C_ccall f_12271(C_word c,C_word *av) C_noret;
C_noret_decl(f_12278)
static void C_fcall f_12278(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12281)
static void C_ccall f_12281(C_word c,C_word *av) C_noret;
C_noret_decl(f_12300)
static void C_ccall f_12300(C_word c,C_word *av) C_noret;
C_noret_decl(f_12302)
static void C_ccall f_12302(C_word c,C_word *av) C_noret;
C_noret_decl(f_12308)
static void C_ccall f_12308(C_word c,C_word *av) C_noret;
C_noret_decl(f_12321)
static void C_ccall f_12321(C_word c,C_word *av) C_noret;
C_noret_decl(f_12349)
static void C_ccall f_12349(C_word c,C_word *av) C_noret;
C_noret_decl(f_12351)
static void C_ccall f_12351(C_word c,C_word *av) C_noret;
C_noret_decl(f_12358)
static void C_ccall f_12358(C_word c,C_word *av) C_noret;
C_noret_decl(f_12361)
static void C_fcall f_12361(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12373)
static void C_ccall f_12373(C_word c,C_word *av) C_noret;
C_noret_decl(f_12385)
static void C_ccall f_12385(C_word c,C_word *av) C_noret;
C_noret_decl(f_12391)
static void C_ccall f_12391(C_word c,C_word *av) C_noret;
C_noret_decl(f_12397)
static void C_ccall f_12397(C_word c,C_word *av) C_noret;
C_noret_decl(f_12406)
static void C_ccall f_12406(C_word c,C_word *av) C_noret;
C_noret_decl(f_12415)
static void C_ccall f_12415(C_word c,C_word *av) C_noret;
C_noret_decl(f_12424)
static void C_ccall f_12424(C_word c,C_word *av) C_noret;
C_noret_decl(f_12433)
static void C_ccall f_12433(C_word c,C_word *av) C_noret;
C_noret_decl(f_12442)
static void C_ccall f_12442(C_word c,C_word *av) C_noret;
C_noret_decl(f_12468)
static void C_ccall f_12468(C_word c,C_word *av) C_noret;
C_noret_decl(f_12471)
static void C_ccall f_12471(C_word c,C_word *av) C_noret;
C_noret_decl(f_12482)
static void C_ccall f_12482(C_word c,C_word *av) C_noret;
C_noret_decl(f_12484)
static void C_ccall f_12484(C_word c,C_word *av) C_noret;
C_noret_decl(f_12538)
static void C_ccall f_12538(C_word c,C_word *av) C_noret;
C_noret_decl(f_12544)
static void C_ccall f_12544(C_word c,C_word *av) C_noret;
C_noret_decl(f_12550)
static void C_ccall f_12550(C_word c,C_word *av) C_noret;
C_noret_decl(f_12556)
static void C_fcall f_12556(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12581)
static void C_fcall f_12581(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12596)
static void C_fcall f_12596(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12614)
static void C_ccall f_12614(C_word c,C_word *av) C_noret;
C_noret_decl(f_12664)
static void C_ccall f_12664(C_word c,C_word *av) C_noret;
C_noret_decl(f_12679)
static void C_fcall f_12679(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12719)
static void C_fcall f_12719(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12722)
static void C_ccall f_12722(C_word c,C_word *av) C_noret;
C_noret_decl(f_12737)
static void C_fcall f_12737(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12761)
static void C_fcall f_12761(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12787)
static void C_fcall f_12787(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12793)
static void C_ccall f_12793(C_word c,C_word *av) C_noret;
C_noret_decl(f_12799)
static void C_ccall f_12799(C_word c,C_word *av) C_noret;
C_noret_decl(f_12802)
static void C_ccall f_12802(C_word c,C_word *av) C_noret;
C_noret_decl(f_12805)
static void C_ccall f_12805(C_word c,C_word *av) C_noret;
C_noret_decl(f_12808)
static void C_ccall f_12808(C_word c,C_word *av) C_noret;
C_noret_decl(f_12830)
static void C_fcall f_12830(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12836)
static void C_ccall f_12836(C_word c,C_word *av) C_noret;
C_noret_decl(f_12842)
static void C_ccall f_12842(C_word c,C_word *av) C_noret;
C_noret_decl(f_12845)
static void C_ccall f_12845(C_word c,C_word *av) C_noret;
C_noret_decl(f_12848)
static void C_ccall f_12848(C_word c,C_word *av) C_noret;
C_noret_decl(f_12851)
static void C_ccall f_12851(C_word c,C_word *av) C_noret;
C_noret_decl(f_12874)
static void C_fcall f_12874(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12877)
static void C_ccall f_12877(C_word c,C_word *av) C_noret;
C_noret_decl(f_12918)
static void C_fcall f_12918(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12921)
static void C_ccall f_12921(C_word c,C_word *av) C_noret;
C_noret_decl(f_12936)
static void C_fcall f_12936(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12963)
static void C_fcall f_12963(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13006)
static void C_ccall f_13006(C_word c,C_word *av) C_noret;
C_noret_decl(f_13010)
static void C_fcall f_13010(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13037)
static void C_fcall f_13037(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13040)
static void C_ccall f_13040(C_word c,C_word *av) C_noret;
C_noret_decl(f_13075)
static void C_ccall f_13075(C_word c,C_word *av) C_noret;
C_noret_decl(f_13111)
static void C_ccall f_13111(C_word c,C_word *av) C_noret;
C_noret_decl(f_13614)
static void C_ccall f_13614(C_word c,C_word *av) C_noret;
C_noret_decl(f_13620)
static void C_ccall f_13620(C_word c,C_word *av) C_noret;
C_noret_decl(f_13633)
static void C_ccall f_13633(C_word c,C_word *av) C_noret;
C_noret_decl(f_13647)
static void C_ccall f_13647(C_word c,C_word *av) C_noret;
C_noret_decl(f_13660)
static void C_ccall f_13660(C_word c,C_word *av) C_noret;
C_noret_decl(f_13674)
static void C_ccall f_13674(C_word c,C_word *av) C_noret;
C_noret_decl(f_13680)
static void C_ccall f_13680(C_word c,C_word *av) C_noret;
C_noret_decl(f_13684)
static void C_ccall f_13684(C_word c,C_word *av) C_noret;
C_noret_decl(f_13688)
static void C_fcall f_13688(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13707)
static void C_ccall f_13707(C_word c,C_word *av) C_noret;
C_noret_decl(f_13713)
static void C_ccall f_13713(C_word c,C_word *av) C_noret;
C_noret_decl(f_13716)
static void C_fcall f_13716(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13725)
static void C_ccall f_13725(C_word c,C_word *av) C_noret;
C_noret_decl(f_13735)
static void C_fcall f_13735(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13744)
static void C_fcall f_13744(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13756)
static void C_fcall f_13756(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13768)
static void C_fcall f_13768(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13780)
static void C_fcall f_13780(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13786)
static void C_ccall f_13786(C_word c,C_word *av) C_noret;
C_noret_decl(f_13790)
static void C_fcall f_13790(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13817)
static void C_fcall f_13817(C_word t0,C_word t1) C_noret;
C_noret_decl(f_14182)
static void C_ccall f_14182(C_word c,C_word *av) C_noret;
C_noret_decl(f_14188)
static void C_ccall f_14188(C_word c,C_word *av) C_noret;
C_noret_decl(f_14200)
static void C_ccall f_14200(C_word c,C_word *av) C_noret;
C_noret_decl(f_14210)
static void C_fcall f_14210(C_word t0,C_word t1) C_noret;
C_noret_decl(f_14222)
static void C_fcall f_14222(C_word t0,C_word t1) C_noret;
C_noret_decl(f_14228)
static void C_ccall f_14228(C_word c,C_word *av) C_noret;
C_noret_decl(f_14232)
static void C_fcall f_14232(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14259)
static void C_fcall f_14259(C_word t0,C_word t1) C_noret;
C_noret_decl(f_14632)
static void C_ccall f_14632(C_word c,C_word *av) C_noret;
C_noret_decl(f_14638)
static void C_ccall f_14638(C_word c,C_word *av) C_noret;
C_noret_decl(f_14642)
static void C_ccall f_14642(C_word c,C_word *av) C_noret;
C_noret_decl(f_14758)
static void C_fcall f_14758(C_word t0,C_word t1) C_noret;
C_noret_decl(f_14786)
static void C_ccall f_14786(C_word c,C_word *av) C_noret;
C_noret_decl(f_14906)
static void C_ccall f_14906(C_word c,C_word *av) C_noret;
C_noret_decl(f_14910)
static void C_ccall f_14910(C_word c,C_word *av) C_noret;
C_noret_decl(f_14934)
static void C_fcall f_14934(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15009)
static void C_fcall f_15009(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15096)
static void C_fcall f_15096(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15117)
static void C_fcall f_15117(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15135)
static void C_fcall f_15135(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15157)
static void C_fcall f_15157(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15512)
static void C_ccall f_15512(C_word c,C_word *av) C_noret;
C_noret_decl(f_15516)
static void C_ccall f_15516(C_word c,C_word *av) C_noret;
C_noret_decl(f_15518)
static void C_ccall f_15518(C_word c,C_word *av) C_noret;
C_noret_decl(f_15550)
static void C_fcall f_15550(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15558)
static void C_fcall f_15558(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_15568)
static void C_ccall f_15568(C_word c,C_word *av) C_noret;
C_noret_decl(f_15582)
static void C_fcall f_15582(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15614)
static void C_fcall f_15614(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15622)
static void C_fcall f_15622(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_15632)
static void C_ccall f_15632(C_word c,C_word *av) C_noret;
C_noret_decl(f_15667)
static void C_ccall f_15667(C_word c,C_word *av) C_noret;
C_noret_decl(f_15670)
static void C_fcall f_15670(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_15704)
static void C_fcall f_15704(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15723)
static void C_ccall f_15723(C_word c,C_word *av) C_noret;
C_noret_decl(f_15729)
static void C_ccall f_15729(C_word c,C_word *av) C_noret;
C_noret_decl(f_15733)
static void C_ccall f_15733(C_word c,C_word *av) C_noret;
C_noret_decl(f_15759)
static void C_ccall f_15759(C_word c,C_word *av) C_noret;
C_noret_decl(f_15768)
static void C_ccall f_15768(C_word c,C_word *av) C_noret;
C_noret_decl(f_15779)
static void C_ccall f_15779(C_word c,C_word *av) C_noret;
C_noret_decl(f_15798)
static void C_ccall f_15798(C_word c,C_word *av) C_noret;
C_noret_decl(f_15810)
static void C_ccall f_15810(C_word c,C_word *av) C_noret;
C_noret_decl(f_15854)
static void C_fcall f_15854(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_15856)
static void C_fcall f_15856(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_15868)
static void C_fcall f_15868(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_15878)
static void C_ccall f_15878(C_word c,C_word *av) C_noret;
C_noret_decl(f_15892)
static void C_ccall f_15892(C_word c,C_word *av) C_noret;
C_noret_decl(f_15897)
static void C_ccall f_15897(C_word c,C_word *av) C_noret;
C_noret_decl(f_15908)
static void C_fcall f_15908(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15921)
static void C_ccall f_15921(C_word c,C_word *av) C_noret;
C_noret_decl(f_15927)
static void C_ccall f_15927(C_word c,C_word *av) C_noret;
C_noret_decl(f_15933)
static void C_ccall f_15933(C_word c,C_word *av) C_noret;
C_noret_decl(f_15942)
static void C_ccall f_15942(C_word c,C_word *av) C_noret;
C_noret_decl(f_15950)
static void C_ccall f_15950(C_word c,C_word *av) C_noret;
C_noret_decl(f_15956)
static void C_ccall f_15956(C_word c,C_word *av) C_noret;
C_noret_decl(f_15959)
static void C_ccall f_15959(C_word c,C_word *av) C_noret;
C_noret_decl(f_15962)
static void C_ccall f_15962(C_word c,C_word *av) C_noret;
C_noret_decl(f_15965)
static void C_ccall f_15965(C_word c,C_word *av) C_noret;
C_noret_decl(f_15968)
static void C_ccall f_15968(C_word c,C_word *av) C_noret;
C_noret_decl(f_15973)
static void C_ccall f_15973(C_word c,C_word *av) C_noret;
C_noret_decl(f_15977)
static void C_ccall f_15977(C_word c,C_word *av) C_noret;
C_noret_decl(f_15989)
static void C_ccall f_15989(C_word c,C_word *av) C_noret;
C_noret_decl(f_15994)
static void C_ccall f_15994(C_word c,C_word *av) C_noret;
C_noret_decl(f_15996)
static void C_ccall f_15996(C_word c,C_word *av) C_noret;
C_noret_decl(f_16002)
static void C_ccall f_16002(C_word c,C_word *av) C_noret;
C_noret_decl(f_16009)
static void C_ccall f_16009(C_word c,C_word *av) C_noret;
C_noret_decl(f_16012)
static void C_fcall f_16012(C_word t0,C_word t1) C_noret;
C_noret_decl(f_16016)
static void C_ccall f_16016(C_word c,C_word *av) C_noret;
C_noret_decl(f_16022)
static void C_ccall f_16022(C_word c,C_word *av) C_noret;
C_noret_decl(f_16028)
static void C_ccall f_16028(C_word c,C_word *av) C_noret;
C_noret_decl(f_16055)
static void C_ccall f_16055(C_word c,C_word *av) C_noret;
C_noret_decl(f_16057)
static void C_fcall f_16057(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_16070)
static void C_ccall f_16070(C_word c,C_word *av) C_noret;
C_noret_decl(f_16080)
static void C_ccall f_16080(C_word c,C_word *av) C_noret;
C_noret_decl(f_16093)
static void C_ccall f_16093(C_word c,C_word *av) C_noret;
C_noret_decl(f_16108)
static void C_ccall f_16108(C_word c,C_word *av) C_noret;
C_noret_decl(f_16112)
static void C_ccall f_16112(C_word c,C_word *av) C_noret;
C_noret_decl(f_16119)
static void C_ccall f_16119(C_word c,C_word *av) C_noret;
C_noret_decl(f_16123)
static void C_ccall f_16123(C_word c,C_word *av) C_noret;
C_noret_decl(f_16128)
static void C_ccall f_16128(C_word c,C_word *av) C_noret;
C_noret_decl(f_16132)
static void C_ccall f_16132(C_word c,C_word *av) C_noret;
C_noret_decl(f_16140)
static void C_ccall f_16140(C_word c,C_word *av) C_noret;
C_noret_decl(f_16146)
static void C_ccall f_16146(C_word c,C_word *av) C_noret;
C_noret_decl(f_16153)
static void C_ccall f_16153(C_word c,C_word *av) C_noret;
C_noret_decl(f_16156)
static void C_ccall f_16156(C_word c,C_word *av) C_noret;
C_noret_decl(f_16159)
static void C_ccall f_16159(C_word c,C_word *av) C_noret;
C_noret_decl(f_16164)
static void C_ccall f_16164(C_word c,C_word *av) C_noret;
C_noret_decl(f_16184)
static void C_ccall f_16184(C_word c,C_word *av) C_noret;
C_noret_decl(f_16188)
static void C_ccall f_16188(C_word c,C_word *av) C_noret;
C_noret_decl(f_16196)
static void C_ccall f_16196(C_word c,C_word *av) C_noret;
C_noret_decl(f_16214)
static void C_ccall f_16214(C_word c,C_word *av) C_noret;
C_noret_decl(f_16218)
static void C_fcall f_16218(C_word t0,C_word t1) C_noret;
C_noret_decl(f_16221)
static void C_ccall f_16221(C_word c,C_word *av) C_noret;
C_noret_decl(f_16251)
static void C_ccall f_16251(C_word c,C_word *av) C_noret;
C_noret_decl(f_16275)
static void C_ccall f_16275(C_word c,C_word *av) C_noret;
C_noret_decl(f_16290)
static void C_ccall f_16290(C_word c,C_word *av) C_noret;
C_noret_decl(f_16293)
static void C_ccall f_16293(C_word c,C_word *av) C_noret;
C_noret_decl(f_16313)
static void C_ccall f_16313(C_word c,C_word *av) C_noret;
C_noret_decl(f_16316)
static void C_ccall f_16316(C_word c,C_word *av) C_noret;
C_noret_decl(f_16355)
static void C_ccall f_16355(C_word c,C_word *av) C_noret;
C_noret_decl(f_16361)
static void C_ccall f_16361(C_word c,C_word *av) C_noret;
C_noret_decl(f_16367)
static void C_ccall f_16367(C_word c,C_word *av) C_noret;
C_noret_decl(f_16375)
static void C_ccall f_16375(C_word c,C_word *av) C_noret;
C_noret_decl(f_16377)
static void C_ccall f_16377(C_word c,C_word *av) C_noret;
C_noret_decl(f_16383)
static void C_ccall f_16383(C_word c,C_word *av) C_noret;
C_noret_decl(f_16389)
static void C_ccall f_16389(C_word c,C_word *av) C_noret;
C_noret_decl(f_16395)
static void C_ccall f_16395(C_word c,C_word *av) C_noret;
C_noret_decl(f_16401)
static void C_ccall f_16401(C_word c,C_word *av) C_noret;
C_noret_decl(f_16423)
static void C_ccall f_16423(C_word c,C_word *av) C_noret;
C_noret_decl(f_16425)
static void C_fcall f_16425(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_16459)
static void C_fcall f_16459(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_16493)
static void C_ccall f_16493(C_word c,C_word *av) C_noret;
C_noret_decl(f_16508)
static void C_ccall f_16508(C_word c,C_word *av) C_noret;
C_noret_decl(f_16518)
static void C_ccall f_16518(C_word c,C_word *av) C_noret;
C_noret_decl(f_16521)
static void C_ccall f_16521(C_word c,C_word *av) C_noret;
C_noret_decl(f_16533)
static void C_ccall f_16533(C_word c,C_word *av) C_noret;
C_noret_decl(f_16539)
static void C_ccall f_16539(C_word c,C_word *av) C_noret;
C_noret_decl(f_16545)
static void C_ccall f_16545(C_word c,C_word *av) C_noret;
C_noret_decl(f_16548)
static void C_ccall f_16548(C_word c,C_word *av) C_noret;
C_noret_decl(f_16550)
static void C_fcall f_16550(C_word t0,C_word t1) C_noret;
C_noret_decl(f_16557)
static void C_fcall f_16557(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_16563)
static void C_ccall f_16563(C_word c,C_word *av) C_noret;
C_noret_decl(f_16574)
static void C_ccall f_16574(C_word c,C_word *av) C_noret;
C_noret_decl(f_16622)
static void C_ccall f_16622(C_word c,C_word *av) C_noret;
C_noret_decl(f_16624)
static void C_ccall f_16624(C_word c,C_word *av) C_noret;
C_noret_decl(f_16630)
static void C_ccall f_16630(C_word c,C_word *av) C_noret;
C_noret_decl(f_16634)
static void C_ccall f_16634(C_word c,C_word *av) C_noret;
C_noret_decl(f_16639)
static void C_fcall f_16639(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_16667)
static void C_ccall f_16667(C_word c,C_word *av) C_noret;
C_noret_decl(f_16675)
static void C_ccall f_16675(C_word c,C_word *av) C_noret;
C_noret_decl(f_16678)
static void C_ccall f_16678(C_word c,C_word *av) C_noret;
C_noret_decl(f_16681)
static void C_ccall f_16681(C_word c,C_word *av) C_noret;
C_noret_decl(f_16684)
static void C_ccall f_16684(C_word c,C_word *av) C_noret;
C_noret_decl(f_16687)
static void C_ccall f_16687(C_word c,C_word *av) C_noret;
C_noret_decl(f_16690)
static void C_ccall f_16690(C_word c,C_word *av) C_noret;
C_noret_decl(f_16691)
static void C_fcall f_16691(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_16701)
static void C_ccall f_16701(C_word c,C_word *av) C_noret;
C_noret_decl(f_16707)
static void C_ccall f_16707(C_word c,C_word *av) C_noret;
C_noret_decl(f_16719)
static void C_ccall f_16719(C_word c,C_word *av) C_noret;
C_noret_decl(f_16722)
static void C_ccall f_16722(C_word c,C_word *av) C_noret;
C_noret_decl(f_16725)
static void C_ccall f_16725(C_word c,C_word *av) C_noret;
C_noret_decl(f_16730)
static void C_fcall f_16730(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_16743)
static void C_ccall f_16743(C_word c,C_word *av) C_noret;
C_noret_decl(f_16746)
static void C_ccall f_16746(C_word c,C_word *av) C_noret;
C_noret_decl(f_16763)
static void C_fcall f_16763(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_16773)
static void C_ccall f_16773(C_word c,C_word *av) C_noret;
C_noret_decl(f_16786)
static void C_ccall f_16786(C_word c,C_word *av) C_noret;
C_noret_decl(f_16790)
static void C_ccall f_16790(C_word c,C_word *av) C_noret;
C_noret_decl(f_16793)
static void C_fcall f_16793(C_word t0,C_word t1) C_noret;
C_noret_decl(f_16808)
static void C_ccall f_16808(C_word c,C_word *av) C_noret;
C_noret_decl(f_16812)
static void C_ccall f_16812(C_word c,C_word *av) C_noret;
C_noret_decl(f_16829)
static void C_ccall f_16829(C_word c,C_word *av) C_noret;
C_noret_decl(f_16835)
static void C_ccall f_16835(C_word c,C_word *av) C_noret;
C_noret_decl(f_16845)
static void C_ccall f_16845(C_word c,C_word *av) C_noret;
C_noret_decl(f_16848)
static void C_ccall f_16848(C_word c,C_word *av) C_noret;
C_noret_decl(f_16864)
static void C_ccall f_16864(C_word c,C_word *av) C_noret;
C_noret_decl(f_16869)
static void C_fcall f_16869(C_word t0,C_word t1) C_noret;
C_noret_decl(f_16873)
static void C_ccall f_16873(C_word c,C_word *av) C_noret;
C_noret_decl(f_16890)
static void C_ccall f_16890(C_word c,C_word *av) C_noret;
C_noret_decl(f_16901)
static void C_ccall f_16901(C_word c,C_word *av) C_noret;
C_noret_decl(f_16913)
static void C_ccall f_16913(C_word c,C_word *av) C_noret;
C_noret_decl(f_16916)
static void C_ccall f_16916(C_word c,C_word *av) C_noret;
C_noret_decl(f_16924)
static void C_ccall f_16924(C_word c,C_word *av) C_noret;
C_noret_decl(f_16929)
static void C_ccall f_16929(C_word c,C_word *av) C_noret;
C_noret_decl(f_16942)
static void C_ccall f_16942(C_word c,C_word *av) C_noret;
C_noret_decl(f_16953)
static void C_ccall f_16953(C_word c,C_word *av) C_noret;
C_noret_decl(f_16975)
static void C_ccall f_16975(C_word c,C_word *av) C_noret;
C_noret_decl(f_16977)
static void C_ccall f_16977(C_word c,C_word *av) C_noret;
C_noret_decl(f_16997)
static void C_ccall f_16997(C_word c,C_word *av) C_noret;
C_noret_decl(f_17017)
static void C_ccall f_17017(C_word c,C_word *av) C_noret;
C_noret_decl(f_17025)
static void C_ccall f_17025(C_word c,C_word *av) C_noret;
C_noret_decl(f_17034)
static void C_ccall f_17034(C_word c,C_word *av) C_noret;
C_noret_decl(f_17039)
static void C_ccall f_17039(C_word c,C_word *av) C_noret;
C_noret_decl(f_17043)
static void C_ccall f_17043(C_word c,C_word *av) C_noret;
C_noret_decl(f_17064)
static void C_ccall f_17064(C_word c,C_word *av) C_noret;
C_noret_decl(f_17079)
static void C_ccall f_17079(C_word c,C_word *av) C_noret;
C_noret_decl(f_17085)
static void C_ccall f_17085(C_word c,C_word *av) C_noret;
C_noret_decl(f_17096)
static void C_ccall f_17096(C_word c,C_word *av) C_noret;
C_noret_decl(f_17107)
static void C_ccall f_17107(C_word c,C_word *av) C_noret;
C_noret_decl(f_17118)
static void C_ccall f_17118(C_word c,C_word *av) C_noret;
C_noret_decl(f_17122)
static void C_ccall f_17122(C_word c,C_word *av) C_noret;
C_noret_decl(f_17128)
static void C_ccall f_17128(C_word c,C_word *av) C_noret;
C_noret_decl(f_17140)
static void C_ccall f_17140(C_word c,C_word *av) C_noret;
C_noret_decl(f_17144)
static void C_ccall f_17144(C_word c,C_word *av) C_noret;
C_noret_decl(f_17156)
static void C_ccall f_17156(C_word c,C_word *av) C_noret;
C_noret_decl(f_17164)
static void C_fcall f_17164(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_17174)
static void C_ccall f_17174(C_word c,C_word *av) C_noret;
C_noret_decl(f_17189)
static void C_ccall f_17189(C_word c,C_word *av) C_noret;
C_noret_decl(f_17195)
static void C_ccall f_17195(C_word c,C_word *av) C_noret;
C_noret_decl(f_17198)
static void C_ccall f_17198(C_word c,C_word *av) C_noret;
C_noret_decl(f_17201)
static void C_ccall f_17201(C_word c,C_word *av) C_noret;
C_noret_decl(f_17204)
static void C_ccall f_17204(C_word c,C_word *av) C_noret;
C_noret_decl(f_17207)
static void C_ccall f_17207(C_word c,C_word *av) C_noret;
C_noret_decl(f_17211)
static void C_ccall f_17211(C_word c,C_word *av) C_noret;
C_noret_decl(f_17213)
static void C_ccall f_17213(C_word c,C_word *av) C_noret;
C_noret_decl(f_17220)
static void C_ccall f_17220(C_word c,C_word *av) C_noret;
C_noret_decl(f_17227)
static void C_ccall f_17227(C_word c,C_word *av) C_noret;
C_noret_decl(f_17238)
static void C_ccall f_17238(C_word c,C_word *av) C_noret;
C_noret_decl(f_17242)
static void C_ccall f_17242(C_word c,C_word *av) C_noret;
C_noret_decl(f_17245)
static void C_ccall f_17245(C_word c,C_word *av) C_noret;
C_noret_decl(f_17250)
static void C_ccall f_17250(C_word c,C_word *av) C_noret;
C_noret_decl(f_17256)
static void C_ccall f_17256(C_word c,C_word *av) C_noret;
C_noret_decl(f_17263)
static void C_ccall f_17263(C_word c,C_word *av) C_noret;
C_noret_decl(f_17266)
static void C_ccall f_17266(C_word c,C_word *av) C_noret;
C_noret_decl(f_17269)
static void C_ccall f_17269(C_word c,C_word *av) C_noret;
C_noret_decl(f_17272)
static void C_ccall f_17272(C_word c,C_word *av) C_noret;
C_noret_decl(f_5125)
static void C_ccall f_5125(C_word c,C_word *av) C_noret;
C_noret_decl(f_5128)
static void C_ccall f_5128(C_word c,C_word *av) C_noret;
C_noret_decl(f_5131)
static void C_ccall f_5131(C_word c,C_word *av) C_noret;
C_noret_decl(f_5134)
static void C_ccall f_5134(C_word c,C_word *av) C_noret;
C_noret_decl(f_5137)
static void C_ccall f_5137(C_word c,C_word *av) C_noret;
C_noret_decl(f_5140)
static void C_ccall f_5140(C_word c,C_word *av) C_noret;
C_noret_decl(f_5143)
static void C_ccall f_5143(C_word c,C_word *av) C_noret;
C_noret_decl(f_5146)
static void C_ccall f_5146(C_word c,C_word *av) C_noret;
C_noret_decl(f_5149)
static void C_ccall f_5149(C_word c,C_word *av) C_noret;
C_noret_decl(f_5259)
static void C_fcall f_5259(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5277)
static void C_ccall f_5277(C_word c,C_word *av) C_noret;
C_noret_decl(f_5317)
static void C_fcall f_5317(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5331)
static void C_ccall f_5331(C_word c,C_word *av) C_noret;
C_noret_decl(f_5520)
static void C_fcall f_5520(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5526)
static void C_fcall f_5526(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5548)
static void C_ccall f_5548(C_word c,C_word *av) C_noret;
C_noret_decl(f_5554)
static void C_fcall f_5554(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5560)
static void C_fcall f_5560(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5570)
static void C_ccall f_5570(C_word c,C_word *av) C_noret;
C_noret_decl(f_5584)
static void C_fcall f_5584(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5590)
static void C_fcall f_5590(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5604)
static void C_ccall f_5604(C_word c,C_word *av) C_noret;
C_noret_decl(f_5813)
static void C_fcall f_5813(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5821)
static void C_fcall f_5821(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5825)
static void C_ccall f_5825(C_word c,C_word *av) C_noret;
C_noret_decl(f_5829)
static C_word C_fcall f_5829(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_5847)
static void C_ccall f_5847(C_word c,C_word *av) C_noret;
C_noret_decl(f_5886)
static void C_fcall f_5886(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5920)
static void C_fcall f_5920(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5926)
static C_word C_fcall f_5926(C_word t0);
C_noret_decl(f_5979)
static void C_fcall f_5979(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5985)
static void C_fcall f_5985(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6168)
static void C_fcall f_6168(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6182)
static void C_ccall f_6182(C_word c,C_word *av) C_noret;
C_noret_decl(f_6186)
static void C_ccall f_6186(C_word c,C_word *av) C_noret;
C_noret_decl(f_6281)
static void C_fcall f_6281(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6294)
static void C_ccall f_6294(C_word c,C_word *av) C_noret;
C_noret_decl(f_6432)
static void C_ccall f_6432(C_word c,C_word *av) C_noret;
C_noret_decl(f_6436)
static void C_ccall f_6436(C_word c,C_word *av) C_noret;
C_noret_decl(f_6450)
static void C_ccall f_6450(C_word c,C_word *av) C_noret;
C_noret_decl(f_6461)
static void C_ccall f_6461(C_word c,C_word *av) C_noret;
C_noret_decl(f_6464)
static void C_fcall f_6464(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6479)
static void C_ccall f_6479(C_word c,C_word *av) C_noret;
C_noret_decl(f_6485)
static void C_ccall f_6485(C_word c,C_word *av) C_noret;
C_noret_decl(f_6488)
static void C_fcall f_6488(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6494)
static void C_ccall f_6494(C_word c,C_word *av) C_noret;
C_noret_decl(f_6498)
static void C_ccall f_6498(C_word c,C_word *av) C_noret;
C_noret_decl(f_6501)
static void C_ccall f_6501(C_word c,C_word *av) C_noret;
C_noret_decl(f_6510)
static void C_ccall f_6510(C_word c,C_word *av) C_noret;
C_noret_decl(f_6518)
static void C_ccall f_6518(C_word c,C_word *av) C_noret;
C_noret_decl(f_6525)
static void C_ccall f_6525(C_word c,C_word *av) C_noret;
C_noret_decl(f_6530)
static void C_fcall f_6530(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6540)
static void C_ccall f_6540(C_word c,C_word *av) C_noret;
C_noret_decl(f_6553)
static void C_fcall f_6553(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6560)
static void C_ccall f_6560(C_word c,C_word *av) C_noret;
C_noret_decl(f_6563)
static void C_ccall f_6563(C_word c,C_word *av) C_noret;
C_noret_decl(f_6572)
static void C_ccall f_6572(C_word c,C_word *av) C_noret;
C_noret_decl(f_6575)
static void C_ccall f_6575(C_word c,C_word *av) C_noret;
C_noret_decl(f_6578)
static void C_ccall f_6578(C_word c,C_word *av) C_noret;
C_noret_decl(f_6581)
static void C_ccall f_6581(C_word c,C_word *av) C_noret;
C_noret_decl(f_6584)
static void C_ccall f_6584(C_word c,C_word *av) C_noret;
C_noret_decl(f_6587)
static void C_ccall f_6587(C_word c,C_word *av) C_noret;
C_noret_decl(f_6593)
static void C_ccall f_6593(C_word c,C_word *av) C_noret;
C_noret_decl(f_6596)
static void C_ccall f_6596(C_word c,C_word *av) C_noret;
C_noret_decl(f_6603)
static void C_ccall f_6603(C_word c,C_word *av) C_noret;
C_noret_decl(f_6605)
static void C_ccall f_6605(C_word c,C_word *av) C_noret;
C_noret_decl(f_6608)
static void C_fcall f_6608(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6610)
static void C_fcall f_6610(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6617)
static void C_ccall f_6617(C_word c,C_word *av) C_noret;
C_noret_decl(f_6620)
static void C_ccall f_6620(C_word c,C_word *av) C_noret;
C_noret_decl(f_6623)
static void C_ccall f_6623(C_word c,C_word *av) C_noret;
C_noret_decl(f_6637)
static void C_ccall f_6637(C_word c,C_word *av) C_noret;
C_noret_decl(f_6642)
static void C_fcall f_6642(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6652)
static void C_ccall f_6652(C_word c,C_word *av) C_noret;
C_noret_decl(f_6669)
static void C_ccall f_6669(C_word c,C_word *av) C_noret;
C_noret_decl(f_6672)
static void C_ccall f_6672(C_word c,C_word *av) C_noret;
C_noret_decl(f_6675)
static void C_ccall f_6675(C_word c,C_word *av) C_noret;
C_noret_decl(f_6678)
static void C_ccall f_6678(C_word c,C_word *av) C_noret;
C_noret_decl(f_6684)
static void C_ccall f_6684(C_word c,C_word *av) C_noret;
C_noret_decl(f_6693)
static void C_ccall f_6693(C_word c,C_word *av) C_noret;
C_noret_decl(f_6700)
static void C_ccall f_6700(C_word c,C_word *av) C_noret;
C_noret_decl(f_6702)
static void C_ccall f_6702(C_word c,C_word *av) C_noret;
C_noret_decl(f_6706)
static void C_ccall f_6706(C_word c,C_word *av) C_noret;
C_noret_decl(f_6709)
static void C_ccall f_6709(C_word c,C_word *av) C_noret;
C_noret_decl(f_6716)
static void C_ccall f_6716(C_word c,C_word *av) C_noret;
C_noret_decl(f_6718)
static void C_ccall f_6718(C_word c,C_word *av) C_noret;
C_noret_decl(f_6722)
static void C_fcall f_6722(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6725)
static void C_ccall f_6725(C_word c,C_word *av) C_noret;
C_noret_decl(f_6726)
static void C_fcall f_6726(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6736)
static void C_ccall f_6736(C_word c,C_word *av) C_noret;
C_noret_decl(f_6739)
static void C_ccall f_6739(C_word c,C_word *av) C_noret;
C_noret_decl(f_6744)
static void C_fcall f_6744(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6754)
static void C_ccall f_6754(C_word c,C_word *av) C_noret;
C_noret_decl(f_6771)
static void C_ccall f_6771(C_word c,C_word *av) C_noret;
C_noret_decl(f_6774)
static void C_ccall f_6774(C_word c,C_word *av) C_noret;
C_noret_decl(f_6777)
static void C_ccall f_6777(C_word c,C_word *av) C_noret;
C_noret_decl(f_6780)
static void C_ccall f_6780(C_word c,C_word *av) C_noret;
C_noret_decl(f_6783)
static void C_ccall f_6783(C_word c,C_word *av) C_noret;
C_noret_decl(f_6792)
static void C_ccall f_6792(C_word c,C_word *av) C_noret;
C_noret_decl(f_6795)
static void C_ccall f_6795(C_word c,C_word *av) C_noret;
C_noret_decl(f_6798)
static void C_ccall f_6798(C_word c,C_word *av) C_noret;
C_noret_decl(f_6815)
static void C_ccall f_6815(C_word c,C_word *av) C_noret;
C_noret_decl(f_6834)
static void C_fcall f_6834(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6857)
static void C_ccall f_6857(C_word c,C_word *av) C_noret;
C_noret_decl(f_6861)
static void C_ccall f_6861(C_word c,C_word *av) C_noret;
C_noret_decl(f_6869)
static void C_ccall f_6869(C_word c,C_word *av) C_noret;
C_noret_decl(f_6872)
static void C_fcall f_6872(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6880)
static void C_ccall f_6880(C_word c,C_word *av) C_noret;
C_noret_decl(f_6884)
static void C_ccall f_6884(C_word c,C_word *av) C_noret;
C_noret_decl(f_6893)
static void C_fcall f_6893(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6937)
static void C_ccall f_6937(C_word c,C_word *av) C_noret;
C_noret_decl(f_6956)
static void C_ccall f_6956(C_word c,C_word *av) C_noret;
C_noret_decl(f_6962)
static void C_ccall f_6962(C_word c,C_word *av) C_noret;
C_noret_decl(f_6967)
static void C_ccall f_6967(C_word c,C_word *av) C_noret;
C_noret_decl(f_6990)
static void C_ccall f_6990(C_word c,C_word *av) C_noret;
C_noret_decl(f_6996)
static void C_ccall f_6996(C_word c,C_word *av) C_noret;
C_noret_decl(f_6999)
static void C_ccall f_6999(C_word c,C_word *av) C_noret;
C_noret_decl(f_7001)
static void C_ccall f_7001(C_word c,C_word *av) C_noret;
C_noret_decl(f_7007)
static void C_fcall f_7007(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7029)
static void C_ccall f_7029(C_word c,C_word *av) C_noret;
C_noret_decl(f_7038)
static void C_ccall f_7038(C_word c,C_word *av) C_noret;
C_noret_decl(f_7050)
static void C_ccall f_7050(C_word c,C_word *av) C_noret;
C_noret_decl(f_7054)
static void C_ccall f_7054(C_word c,C_word *av) C_noret;
C_noret_decl(f_7056)
static void C_fcall f_7056(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7078)
static void C_fcall f_7078(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7085)
static void C_fcall f_7085(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7089)
static void C_ccall f_7089(C_word c,C_word *av) C_noret;
C_noret_decl(f_7093)
static void C_ccall f_7093(C_word c,C_word *av) C_noret;
C_noret_decl(f_7099)
static void C_ccall f_7099(C_word c,C_word *av) C_noret;
C_noret_decl(f_7121)
static void C_ccall f_7121(C_word c,C_word *av) C_noret;
C_noret_decl(f_7137)
static void C_ccall f_7137(C_word c,C_word *av) C_noret;
C_noret_decl(f_7141)
static void C_ccall f_7141(C_word c,C_word *av) C_noret;
C_noret_decl(f_7162)
static void C_ccall f_7162(C_word c,C_word *av) C_noret;
C_noret_decl(f_7185)
static void C_ccall f_7185(C_word c,C_word *av) C_noret;
C_noret_decl(f_7187)
static void C_ccall f_7187(C_word c,C_word *av) C_noret;
C_noret_decl(f_7194)
static void C_ccall f_7194(C_word c,C_word *av) C_noret;
C_noret_decl(f_7201)
static void C_ccall f_7201(C_word c,C_word *av) C_noret;
C_noret_decl(f_7214)
static void C_ccall f_7214(C_word c,C_word *av) C_noret;
C_noret_decl(f_7226)
static void C_fcall f_7226(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7245)
static void C_ccall f_7245(C_word c,C_word *av) C_noret;
C_noret_decl(f_7257)
static void C_ccall f_7257(C_word c,C_word *av) C_noret;
C_noret_decl(f_7271)
static void C_ccall f_7271(C_word c,C_word *av) C_noret;
C_noret_decl(f_7273)
static void C_fcall f_7273(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7299)
static void C_ccall f_7299(C_word c,C_word *av) C_noret;
C_noret_decl(f_7313)
static void C_fcall f_7313(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7319)
static void C_fcall f_7319(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7334)
static void C_ccall f_7334(C_word c,C_word *av) C_noret;
C_noret_decl(f_7350)
static void C_ccall f_7350(C_word c,C_word *av) C_noret;
C_noret_decl(f_7358)
static void C_ccall f_7358(C_word c,C_word *av) C_noret;
C_noret_decl(f_7362)
static void C_ccall f_7362(C_word c,C_word *av) C_noret;
C_noret_decl(f_7364)
static void C_ccall f_7364(C_word c,C_word *av) C_noret;
C_noret_decl(f_7375)
static void C_ccall f_7375(C_word c,C_word *av) C_noret;
C_noret_decl(f_7377)
static void C_fcall f_7377(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7394)
static void C_ccall f_7394(C_word c,C_word *av) C_noret;
C_noret_decl(f_7408)
static void C_ccall f_7408(C_word c,C_word *av) C_noret;
C_noret_decl(f_7442)
static void C_ccall f_7442(C_word c,C_word *av) C_noret;
C_noret_decl(f_7454)
static void C_ccall f_7454(C_word c,C_word *av) C_noret;
C_noret_decl(f_7470)
static void C_ccall f_7470(C_word c,C_word *av) C_noret;
C_noret_decl(f_7500)
static void C_ccall f_7500(C_word c,C_word *av) C_noret;
C_noret_decl(f_7504)
static void C_fcall f_7504(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7544)
static void C_ccall f_7544(C_word c,C_word *av) C_noret;
C_noret_decl(f_7546)
static void C_ccall f_7546(C_word c,C_word *av) C_noret;
C_noret_decl(f_7562)
static void C_ccall f_7562(C_word c,C_word *av) C_noret;
C_noret_decl(f_7568)
static void C_ccall f_7568(C_word c,C_word *av) C_noret;
C_noret_decl(f_7583)
static void C_ccall f_7583(C_word c,C_word *av) C_noret;
C_noret_decl(f_7600)
static void C_ccall f_7600(C_word c,C_word *av) C_noret;
C_noret_decl(f_7602)
static void C_ccall f_7602(C_word c,C_word *av) C_noret;
C_noret_decl(f_7608)
static void C_fcall f_7608(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7632)
static void C_fcall f_7632(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7648)
static void C_ccall f_7648(C_word c,C_word *av) C_noret;
C_noret_decl(f_7658)
static void C_ccall f_7658(C_word c,C_word *av) C_noret;
C_noret_decl(f_7663)
static void C_ccall f_7663(C_word c,C_word *av) C_noret;
C_noret_decl(f_7677)
static void C_ccall f_7677(C_word c,C_word *av) C_noret;
C_noret_decl(f_7680)
static void C_ccall f_7680(C_word c,C_word *av) C_noret;
C_noret_decl(f_7681)
static void C_ccall f_7681(C_word c,C_word *av) C_noret;
C_noret_decl(f_7685)
static void C_ccall f_7685(C_word c,C_word *av) C_noret;
C_noret_decl(f_7690)
static void C_ccall f_7690(C_word c,C_word *av) C_noret;
C_noret_decl(f_7696)
static void C_ccall f_7696(C_word c,C_word *av) C_noret;
C_noret_decl(f_7702)
static void C_ccall f_7702(C_word c,C_word *av) C_noret;
C_noret_decl(f_7710)
static void C_ccall f_7710(C_word c,C_word *av) C_noret;
C_noret_decl(f_7713)
static void C_ccall f_7713(C_word c,C_word *av) C_noret;
C_noret_decl(f_7721)
static void C_ccall f_7721(C_word c,C_word *av) C_noret;
C_noret_decl(f_7723)
static void C_fcall f_7723(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7727)
static void C_ccall f_7727(C_word c,C_word *av) C_noret;
C_noret_decl(f_7749)
static void C_ccall f_7749(C_word c,C_word *av) C_noret;
C_noret_decl(f_7755)
static void C_fcall f_7755(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7759)
static void C_ccall f_7759(C_word c,C_word *av) C_noret;
C_noret_decl(f_7772)
static void C_ccall f_7772(C_word c,C_word *av) C_noret;
C_noret_decl(f_7780)
static void C_fcall f_7780(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7786)
static void C_ccall f_7786(C_word c,C_word *av) C_noret;
C_noret_decl(f_7797)
static void C_ccall f_7797(C_word c,C_word *av) C_noret;
C_noret_decl(f_7799)
static void C_ccall f_7799(C_word c,C_word *av) C_noret;
C_noret_decl(f_7802)
static void C_ccall f_7802(C_word c,C_word *av) C_noret;
C_noret_decl(f_7808)
static C_word C_fcall f_7808(C_word t0,C_word t1);
C_noret_decl(f_7847)
static void C_ccall f_7847(C_word c,C_word *av) C_noret;
C_noret_decl(f_7852)
static void C_ccall f_7852(C_word c,C_word *av) C_noret;
C_noret_decl(f_7856)
static void C_ccall f_7856(C_word c,C_word *av) C_noret;
C_noret_decl(f_7860)
static void C_ccall f_7860(C_word c,C_word *av) C_noret;
C_noret_decl(f_7911)
static void C_ccall f_7911(C_word c,C_word *av) C_noret;
C_noret_decl(f_7948)
static void C_ccall f_7948(C_word c,C_word *av) C_noret;
C_noret_decl(f_7950)
static void C_fcall f_7950(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8000)
static void C_ccall f_8000(C_word c,C_word *av) C_noret;
C_noret_decl(f_8004)
static void C_ccall f_8004(C_word c,C_word *av) C_noret;
C_noret_decl(f_8018)
static void C_ccall f_8018(C_word c,C_word *av) C_noret;
C_noret_decl(f_8022)
static void C_ccall f_8022(C_word c,C_word *av) C_noret;
C_noret_decl(f_8030)
static void C_ccall f_8030(C_word c,C_word *av) C_noret;
C_noret_decl(f_8036)
static void C_ccall f_8036(C_word c,C_word *av) C_noret;
C_noret_decl(f_8040)
static void C_ccall f_8040(C_word c,C_word *av) C_noret;
C_noret_decl(f_8082)
static void C_ccall f_8082(C_word c,C_word *av) C_noret;
C_noret_decl(f_8086)
static void C_ccall f_8086(C_word c,C_word *av) C_noret;
C_noret_decl(f_8134)
static void C_ccall f_8134(C_word c,C_word *av) C_noret;
C_noret_decl(f_8138)
static void C_ccall f_8138(C_word c,C_word *av) C_noret;
C_noret_decl(f_8143)
static void C_ccall f_8143(C_word c,C_word *av) C_noret;
C_noret_decl(f_8153)
static void C_ccall f_8153(C_word c,C_word *av) C_noret;
C_noret_decl(f_8160)
static void C_ccall f_8160(C_word c,C_word *av) C_noret;
C_noret_decl(f_8163)
static void C_fcall f_8163(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8167)
static void C_fcall f_8167(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8194)
static void C_ccall f_8194(C_word c,C_word *av) C_noret;
C_noret_decl(f_8200)
static void C_ccall f_8200(C_word c,C_word *av) C_noret;
C_noret_decl(f_8210)
static void C_ccall f_8210(C_word c,C_word *av) C_noret;
C_noret_decl(f_8213)
static void C_ccall f_8213(C_word c,C_word *av) C_noret;
C_noret_decl(f_8216)
static void C_ccall f_8216(C_word c,C_word *av) C_noret;
C_noret_decl(f_8229)
static void C_ccall f_8229(C_word c,C_word *av) C_noret;
C_noret_decl(f_8231)
static void C_fcall f_8231(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8266)
static void C_ccall f_8266(C_word c,C_word *av) C_noret;
C_noret_decl(f_8272)
static void C_ccall f_8272(C_word c,C_word *av) C_noret;
C_noret_decl(f_8278)
static void C_ccall f_8278(C_word c,C_word *av) C_noret;
C_noret_decl(f_8287)
static void C_ccall f_8287(C_word c,C_word *av) C_noret;
C_noret_decl(f_8296)
static void C_ccall f_8296(C_word c,C_word *av) C_noret;
C_noret_decl(f_8305)
static void C_ccall f_8305(C_word c,C_word *av) C_noret;
C_noret_decl(f_8314)
static void C_ccall f_8314(C_word c,C_word *av) C_noret;
C_noret_decl(f_8323)
static void C_ccall f_8323(C_word c,C_word *av) C_noret;
C_noret_decl(f_8333)
static void C_ccall f_8333(C_word c,C_word *av) C_noret;
C_noret_decl(f_8335)
static void C_ccall f_8335(C_word c,C_word *av) C_noret;
C_noret_decl(f_8341)
static void C_ccall f_8341(C_word c,C_word *av) C_noret;
C_noret_decl(f_8356)
static void C_ccall f_8356(C_word c,C_word *av) C_noret;
C_noret_decl(f_8371)
static void C_ccall f_8371(C_word c,C_word *av) C_noret;
C_noret_decl(f_8374)
static void C_ccall f_8374(C_word c,C_word *av) C_noret;
C_noret_decl(f_8441)
static void C_ccall f_8441(C_word c,C_word *av) C_noret;
C_noret_decl(f_8443)
static void C_fcall f_8443(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8468)
static void C_ccall f_8468(C_word c,C_word *av) C_noret;
C_noret_decl(f_8491)
static void C_ccall f_8491(C_word c,C_word *av) C_noret;
C_noret_decl(f_8494)
static void C_fcall f_8494(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8497)
static void C_ccall f_8497(C_word c,C_word *av) C_noret;
C_noret_decl(f_8504)
static void C_ccall f_8504(C_word c,C_word *av) C_noret;
C_noret_decl(f_8551)
static void C_ccall f_8551(C_word c,C_word *av) C_noret;
C_noret_decl(f_8555)
static void C_ccall f_8555(C_word c,C_word *av) C_noret;
C_noret_decl(f_8560)
static void C_fcall f_8560(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8577)
static void C_ccall f_8577(C_word c,C_word *av) C_noret;
C_noret_decl(f_8585)
static void C_ccall f_8585(C_word c,C_word *av) C_noret;
C_noret_decl(f_8587)
static void C_fcall f_8587(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8612)
static void C_ccall f_8612(C_word c,C_word *av) C_noret;
C_noret_decl(f_8648)
static void C_ccall f_8648(C_word c,C_word *av) C_noret;
C_noret_decl(f_8682)
static void C_ccall f_8682(C_word c,C_word *av) C_noret;
C_noret_decl(f_8713)
static void C_fcall f_8713(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8736)
static void C_ccall f_8736(C_word c,C_word *av) C_noret;
C_noret_decl(f_8757)
static void C_ccall f_8757(C_word c,C_word *av) C_noret;
C_noret_decl(f_8779)
static void C_ccall f_8779(C_word c,C_word *av) C_noret;
C_noret_decl(f_8787)
static void C_ccall f_8787(C_word c,C_word *av) C_noret;
C_noret_decl(f_8791)
static void C_ccall f_8791(C_word c,C_word *av) C_noret;
C_noret_decl(f_8799)
static void C_ccall f_8799(C_word c,C_word *av) C_noret;
C_noret_decl(f_8820)
static void C_ccall f_8820(C_word c,C_word *av) C_noret;
C_noret_decl(f_8824)
static void C_ccall f_8824(C_word c,C_word *av) C_noret;
C_noret_decl(f_8836)
static void C_ccall f_8836(C_word c,C_word *av) C_noret;
C_noret_decl(f_8863)
static void C_fcall f_8863(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8875)
static void C_ccall f_8875(C_word c,C_word *av) C_noret;
C_noret_decl(f_8877)
static void C_fcall f_8877(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8902)
static void C_ccall f_8902(C_word c,C_word *av) C_noret;
C_noret_decl(f_8936)
static void C_fcall f_8936(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8962)
static void C_ccall f_8962(C_word c,C_word *av) C_noret;
C_noret_decl(f_8964)
static void C_fcall f_8964(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8989)
static void C_ccall f_8989(C_word c,C_word *av) C_noret;
C_noret_decl(f_9073)
static void C_ccall f_9073(C_word c,C_word *av) C_noret;
C_noret_decl(f_9075)
static void C_fcall f_9075(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9100)
static void C_ccall f_9100(C_word c,C_word *av) C_noret;
C_noret_decl(f_9140)
static void C_ccall f_9140(C_word c,C_word *av) C_noret;
C_noret_decl(f_9181)
static void C_fcall f_9181(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9210)
static void C_ccall f_9210(C_word c,C_word *av) C_noret;
C_noret_decl(f_9212)
static void C_fcall f_9212(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9237)
static void C_ccall f_9237(C_word c,C_word *av) C_noret;
C_noret_decl(f_9273)
static void C_ccall f_9273(C_word c,C_word *av) C_noret;
C_noret_decl(f_9275)
static void C_fcall f_9275(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9300)
static void C_ccall f_9300(C_word c,C_word *av) C_noret;
C_noret_decl(f_9312)
static void C_ccall f_9312(C_word c,C_word *av) C_noret;
C_noret_decl(f_9318)
static void C_ccall f_9318(C_word c,C_word *av) C_noret;
C_noret_decl(f_9341)
static void C_ccall f_9341(C_word c,C_word *av) C_noret;
C_noret_decl(f_9343)
static void C_fcall f_9343(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9368)
static void C_ccall f_9368(C_word c,C_word *av) C_noret;
C_noret_decl(f_9379)
static void C_fcall f_9379(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9383)
static void C_ccall f_9383(C_word c,C_word *av) C_noret;
C_noret_decl(f_9386)
static void C_ccall f_9386(C_word c,C_word *av) C_noret;
C_noret_decl(f_9393)
static void C_ccall f_9393(C_word c,C_word *av) C_noret;
C_noret_decl(f_9407)
static void C_ccall f_9407(C_word c,C_word *av) C_noret;
C_noret_decl(f_9513)
static void C_ccall f_9513(C_word c,C_word *av) C_noret;
C_noret_decl(f_9515)
static void C_fcall f_9515(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9540)
static void C_ccall f_9540(C_word c,C_word *av) C_noret;
C_noret_decl(f_9558)
static void C_ccall f_9558(C_word c,C_word *av) C_noret;
C_noret_decl(f_9561)
static void C_ccall f_9561(C_word c,C_word *av) C_noret;
C_noret_decl(f_9567)
static void C_ccall f_9567(C_word c,C_word *av) C_noret;
C_noret_decl(f_9573)
static void C_ccall f_9573(C_word c,C_word *av) C_noret;
C_noret_decl(f_9607)
static void C_fcall f_9607(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9620)
static void C_ccall f_9620(C_word c,C_word *av) C_noret;
C_noret_decl(f_9622)
static void C_fcall f_9622(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9647)
static void C_ccall f_9647(C_word c,C_word *av) C_noret;
C_noret_decl(f_9677)
static void C_ccall f_9677(C_word c,C_word *av) C_noret;
C_noret_decl(f_9679)
static void C_fcall f_9679(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9704)
static void C_ccall f_9704(C_word c,C_word *av) C_noret;
C_noret_decl(f_9777)
static void C_ccall f_9777(C_word c,C_word *av) C_noret;
C_noret_decl(f_9780)
static void C_ccall f_9780(C_word c,C_word *av) C_noret;
C_noret_decl(f_9789)
static void C_ccall f_9789(C_word c,C_word *av) C_noret;
C_noret_decl(f_9793)
static void C_ccall f_9793(C_word c,C_word *av) C_noret;
C_noret_decl(f_9797)
static void C_ccall f_9797(C_word c,C_word *av) C_noret;
C_noret_decl(f_9799)
static void C_fcall f_9799(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9847)
static void C_fcall f_9847(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9872)
static void C_ccall f_9872(C_word c,C_word *av) C_noret;
C_noret_decl(f_9900)
static void C_ccall f_9900(C_word c,C_word *av) C_noret;
C_noret_decl(f_9924)
static void C_ccall f_9924(C_word c,C_word *av) C_noret;
C_noret_decl(f_9958)
static void C_ccall f_9958(C_word c,C_word *av) C_noret;
C_noret_decl(f_9962)
static void C_ccall f_9962(C_word c,C_word *av) C_noret;
C_noret_decl(f_9972)
static void C_fcall f_9972(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9996)
static void C_ccall f_9996(C_word c,C_word *av) C_noret;
C_noret_decl(C_support_toplevel)
C_externexport void C_ccall C_support_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_10048)
static void C_ccall trf_10048(C_word c,C_word *av) C_noret;
static void C_ccall trf_10048(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10048(t0,t1,t2);}

C_noret_decl(trf_10105)
static void C_ccall trf_10105(C_word c,C_word *av) C_noret;
static void C_ccall trf_10105(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10105(t0,t1,t2);}

C_noret_decl(trf_10161)
static void C_ccall trf_10161(C_word c,C_word *av) C_noret;
static void C_ccall trf_10161(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_10161(t0,t1,t2,t3,t4);}

C_noret_decl(trf_10210)
static void C_ccall trf_10210(C_word c,C_word *av) C_noret;
static void C_ccall trf_10210(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10210(t0,t1);}

C_noret_decl(trf_10230)
static void C_ccall trf_10230(C_word c,C_word *av) C_noret;
static void C_ccall trf_10230(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10230(t0,t1,t2);}

C_noret_decl(trf_10290)
static void C_ccall trf_10290(C_word c,C_word *av) C_noret;
static void C_ccall trf_10290(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10290(t0,t1,t2);}

C_noret_decl(trf_10341)
static void C_ccall trf_10341(C_word c,C_word *av) C_noret;
static void C_ccall trf_10341(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10341(t0,t1,t2);}

C_noret_decl(trf_10450)
static void C_ccall trf_10450(C_word c,C_word *av) C_noret;
static void C_ccall trf_10450(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10450(t0,t1,t2);}

C_noret_decl(trf_10530)
static void C_ccall trf_10530(C_word c,C_word *av) C_noret;
static void C_ccall trf_10530(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10530(t0,t1,t2,t3);}

C_noret_decl(trf_10634)
static void C_ccall trf_10634(C_word c,C_word *av) C_noret;
static void C_ccall trf_10634(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10634(t0,t1,t2);}

C_noret_decl(trf_10689)
static void C_ccall trf_10689(C_word c,C_word *av) C_noret;
static void C_ccall trf_10689(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10689(t0,t1,t2,t3);}

C_noret_decl(trf_10860)
static void C_ccall trf_10860(C_word c,C_word *av) C_noret;
static void C_ccall trf_10860(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10860(t0,t1,t2);}

C_noret_decl(trf_10893)
static void C_ccall trf_10893(C_word c,C_word *av) C_noret;
static void C_ccall trf_10893(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10893(t0,t1,t2);}

C_noret_decl(trf_10905)
static void C_ccall trf_10905(C_word c,C_word *av) C_noret;
static void C_ccall trf_10905(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10905(t0,t1,t2);}

C_noret_decl(trf_10972)
static void C_ccall trf_10972(C_word c,C_word *av) C_noret;
static void C_ccall trf_10972(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10972(t0,t1,t2,t3);}

C_noret_decl(trf_11020)
static void C_ccall trf_11020(C_word c,C_word *av) C_noret;
static void C_ccall trf_11020(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11020(t0,t1,t2);}

C_noret_decl(trf_11069)
static void C_ccall trf_11069(C_word c,C_word *av) C_noret;
static void C_ccall trf_11069(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11069(t0,t1,t2);}

C_noret_decl(trf_11081)
static void C_ccall trf_11081(C_word c,C_word *av) C_noret;
static void C_ccall trf_11081(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11081(t0,t1,t2);}

C_noret_decl(trf_11128)
static void C_ccall trf_11128(C_word c,C_word *av) C_noret;
static void C_ccall trf_11128(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11128(t0,t1,t2,t3);}

C_noret_decl(trf_11182)
static void C_ccall trf_11182(C_word c,C_word *av) C_noret;
static void C_ccall trf_11182(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11182(t0,t1,t2);}

C_noret_decl(trf_11335)
static void C_ccall trf_11335(C_word c,C_word *av) C_noret;
static void C_ccall trf_11335(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11335(t0,t1,t2);}

C_noret_decl(trf_11406)
static void C_ccall trf_11406(C_word c,C_word *av) C_noret;
static void C_ccall trf_11406(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11406(t0,t1,t2);}

C_noret_decl(trf_11469)
static void C_ccall trf_11469(C_word c,C_word *av) C_noret;
static void C_ccall trf_11469(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11469(t0,t1,t2);}

C_noret_decl(trf_11530)
static void C_ccall trf_11530(C_word c,C_word *av) C_noret;
static void C_ccall trf_11530(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11530(t0,t1,t2);}

C_noret_decl(trf_11585)
static void C_ccall trf_11585(C_word c,C_word *av) C_noret;
static void C_ccall trf_11585(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11585(t0,t1);}

C_noret_decl(trf_11622)
static void C_ccall trf_11622(C_word c,C_word *av) C_noret;
static void C_ccall trf_11622(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11622(t0,t1);}

C_noret_decl(trf_11712)
static void C_ccall trf_11712(C_word c,C_word *av) C_noret;
static void C_ccall trf_11712(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11712(t0,t1);}

C_noret_decl(trf_11759)
static void C_ccall trf_11759(C_word c,C_word *av) C_noret;
static void C_ccall trf_11759(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11759(t0,t1,t2,t3);}

C_noret_decl(trf_11793)
static void C_ccall trf_11793(C_word c,C_word *av) C_noret;
static void C_ccall trf_11793(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11793(t0,t1,t2,t3);}

C_noret_decl(trf_11840)
static void C_ccall trf_11840(C_word c,C_word *av) C_noret;
static void C_ccall trf_11840(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11840(t0,t1,t2,t3);}

C_noret_decl(trf_11880)
static void C_ccall trf_11880(C_word c,C_word *av) C_noret;
static void C_ccall trf_11880(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11880(t0,t1,t2,t3);}

C_noret_decl(trf_12021)
static void C_ccall trf_12021(C_word c,C_word *av) C_noret;
static void C_ccall trf_12021(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12021(t0,t1);}

C_noret_decl(trf_12237)
static void C_ccall trf_12237(C_word c,C_word *av) C_noret;
static void C_ccall trf_12237(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12237(t0,t1);}

C_noret_decl(trf_12278)
static void C_ccall trf_12278(C_word c,C_word *av) C_noret;
static void C_ccall trf_12278(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12278(t0,t1);}

C_noret_decl(trf_12361)
static void C_ccall trf_12361(C_word c,C_word *av) C_noret;
static void C_ccall trf_12361(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12361(t0,t1);}

C_noret_decl(trf_12556)
static void C_ccall trf_12556(C_word c,C_word *av) C_noret;
static void C_ccall trf_12556(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12556(t0,t1,t2);}

C_noret_decl(trf_12581)
static void C_ccall trf_12581(C_word c,C_word *av) C_noret;
static void C_ccall trf_12581(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12581(t0,t1);}

C_noret_decl(trf_12596)
static void C_ccall trf_12596(C_word c,C_word *av) C_noret;
static void C_ccall trf_12596(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12596(t0,t1);}

C_noret_decl(trf_12679)
static void C_ccall trf_12679(C_word c,C_word *av) C_noret;
static void C_ccall trf_12679(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12679(t0,t1);}

C_noret_decl(trf_12719)
static void C_ccall trf_12719(C_word c,C_word *av) C_noret;
static void C_ccall trf_12719(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12719(t0,t1);}

C_noret_decl(trf_12737)
static void C_ccall trf_12737(C_word c,C_word *av) C_noret;
static void C_ccall trf_12737(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12737(t0,t1);}

C_noret_decl(trf_12761)
static void C_ccall trf_12761(C_word c,C_word *av) C_noret;
static void C_ccall trf_12761(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12761(t0,t1);}

C_noret_decl(trf_12787)
static void C_ccall trf_12787(C_word c,C_word *av) C_noret;
static void C_ccall trf_12787(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12787(t0,t1);}

C_noret_decl(trf_12830)
static void C_ccall trf_12830(C_word c,C_word *av) C_noret;
static void C_ccall trf_12830(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12830(t0,t1);}

C_noret_decl(trf_12874)
static void C_ccall trf_12874(C_word c,C_word *av) C_noret;
static void C_ccall trf_12874(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12874(t0,t1);}

C_noret_decl(trf_12918)
static void C_ccall trf_12918(C_word c,C_word *av) C_noret;
static void C_ccall trf_12918(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12918(t0,t1);}

C_noret_decl(trf_12936)
static void C_ccall trf_12936(C_word c,C_word *av) C_noret;
static void C_ccall trf_12936(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12936(t0,t1);}

C_noret_decl(trf_12963)
static void C_ccall trf_12963(C_word c,C_word *av) C_noret;
static void C_ccall trf_12963(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12963(t0,t1);}

C_noret_decl(trf_13010)
static void C_ccall trf_13010(C_word c,C_word *av) C_noret;
static void C_ccall trf_13010(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13010(t0,t1,t2);}

C_noret_decl(trf_13037)
static void C_ccall trf_13037(C_word c,C_word *av) C_noret;
static void C_ccall trf_13037(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_13037(t0,t1);}

C_noret_decl(trf_13688)
static void C_ccall trf_13688(C_word c,C_word *av) C_noret;
static void C_ccall trf_13688(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13688(t0,t1,t2);}

C_noret_decl(trf_13716)
static void C_ccall trf_13716(C_word c,C_word *av) C_noret;
static void C_ccall trf_13716(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_13716(t0,t1);}

C_noret_decl(trf_13735)
static void C_ccall trf_13735(C_word c,C_word *av) C_noret;
static void C_ccall trf_13735(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_13735(t0,t1);}

C_noret_decl(trf_13744)
static void C_ccall trf_13744(C_word c,C_word *av) C_noret;
static void C_ccall trf_13744(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_13744(t0,t1);}

C_noret_decl(trf_13756)
static void C_ccall trf_13756(C_word c,C_word *av) C_noret;
static void C_ccall trf_13756(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_13756(t0,t1);}

C_noret_decl(trf_13768)
static void C_ccall trf_13768(C_word c,C_word *av) C_noret;
static void C_ccall trf_13768(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_13768(t0,t1);}

C_noret_decl(trf_13780)
static void C_ccall trf_13780(C_word c,C_word *av) C_noret;
static void C_ccall trf_13780(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_13780(t0,t1);}

C_noret_decl(trf_13790)
static void C_ccall trf_13790(C_word c,C_word *av) C_noret;
static void C_ccall trf_13790(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13790(t0,t1,t2);}

C_noret_decl(trf_13817)
static void C_ccall trf_13817(C_word c,C_word *av) C_noret;
static void C_ccall trf_13817(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_13817(t0,t1);}

C_noret_decl(trf_14210)
static void C_ccall trf_14210(C_word c,C_word *av) C_noret;
static void C_ccall trf_14210(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_14210(t0,t1);}

C_noret_decl(trf_14222)
static void C_ccall trf_14222(C_word c,C_word *av) C_noret;
static void C_ccall trf_14222(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_14222(t0,t1);}

C_noret_decl(trf_14232)
static void C_ccall trf_14232(C_word c,C_word *av) C_noret;
static void C_ccall trf_14232(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_14232(t0,t1,t2);}

C_noret_decl(trf_14259)
static void C_ccall trf_14259(C_word c,C_word *av) C_noret;
static void C_ccall trf_14259(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_14259(t0,t1);}

C_noret_decl(trf_14758)
static void C_ccall trf_14758(C_word c,C_word *av) C_noret;
static void C_ccall trf_14758(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_14758(t0,t1);}

C_noret_decl(trf_14934)
static void C_ccall trf_14934(C_word c,C_word *av) C_noret;
static void C_ccall trf_14934(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_14934(t0,t1);}

C_noret_decl(trf_15009)
static void C_ccall trf_15009(C_word c,C_word *av) C_noret;
static void C_ccall trf_15009(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_15009(t0,t1);}

C_noret_decl(trf_15096)
static void C_ccall trf_15096(C_word c,C_word *av) C_noret;
static void C_ccall trf_15096(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_15096(t0,t1);}

C_noret_decl(trf_15117)
static void C_ccall trf_15117(C_word c,C_word *av) C_noret;
static void C_ccall trf_15117(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_15117(t0,t1);}

C_noret_decl(trf_15135)
static void C_ccall trf_15135(C_word c,C_word *av) C_noret;
static void C_ccall trf_15135(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_15135(t0,t1);}

C_noret_decl(trf_15157)
static void C_ccall trf_15157(C_word c,C_word *av) C_noret;
static void C_ccall trf_15157(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_15157(t0,t1);}

C_noret_decl(trf_15550)
static void C_ccall trf_15550(C_word c,C_word *av) C_noret;
static void C_ccall trf_15550(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_15550(t0,t1);}

C_noret_decl(trf_15558)
static void C_ccall trf_15558(C_word c,C_word *av) C_noret;
static void C_ccall trf_15558(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_15558(t0,t1,t2);}

C_noret_decl(trf_15582)
static void C_ccall trf_15582(C_word c,C_word *av) C_noret;
static void C_ccall trf_15582(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_15582(t0,t1);}

C_noret_decl(trf_15614)
static void C_ccall trf_15614(C_word c,C_word *av) C_noret;
static void C_ccall trf_15614(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_15614(t0,t1);}

C_noret_decl(trf_15622)
static void C_ccall trf_15622(C_word c,C_word *av) C_noret;
static void C_ccall trf_15622(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_15622(t0,t1,t2);}

C_noret_decl(trf_15670)
static void C_ccall trf_15670(C_word c,C_word *av) C_noret;
static void C_ccall trf_15670(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_15670(t0,t1,t2,t3);}

C_noret_decl(trf_15704)
static void C_ccall trf_15704(C_word c,C_word *av) C_noret;
static void C_ccall trf_15704(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_15704(t0,t1);}

C_noret_decl(trf_15854)
static void C_ccall trf_15854(C_word c,C_word *av) C_noret;
static void C_ccall trf_15854(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_15854(t0,t1,t2,t3);}

C_noret_decl(trf_15856)
static void C_ccall trf_15856(C_word c,C_word *av) C_noret;
static void C_ccall trf_15856(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_15856(t0,t1,t2);}

C_noret_decl(trf_15868)
static void C_ccall trf_15868(C_word c,C_word *av) C_noret;
static void C_ccall trf_15868(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_15868(t0,t1,t2);}

C_noret_decl(trf_15908)
static void C_ccall trf_15908(C_word c,C_word *av) C_noret;
static void C_ccall trf_15908(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_15908(t0,t1);}

C_noret_decl(trf_16012)
static void C_ccall trf_16012(C_word c,C_word *av) C_noret;
static void C_ccall trf_16012(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_16012(t0,t1);}

C_noret_decl(trf_16057)
static void C_ccall trf_16057(C_word c,C_word *av) C_noret;
static void C_ccall trf_16057(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_16057(t0,t1,t2,t3,t4);}

C_noret_decl(trf_16218)
static void C_ccall trf_16218(C_word c,C_word *av) C_noret;
static void C_ccall trf_16218(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_16218(t0,t1);}

C_noret_decl(trf_16425)
static void C_ccall trf_16425(C_word c,C_word *av) C_noret;
static void C_ccall trf_16425(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_16425(t0,t1,t2);}

C_noret_decl(trf_16459)
static void C_ccall trf_16459(C_word c,C_word *av) C_noret;
static void C_ccall trf_16459(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_16459(t0,t1,t2);}

C_noret_decl(trf_16550)
static void C_ccall trf_16550(C_word c,C_word *av) C_noret;
static void C_ccall trf_16550(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_16550(t0,t1);}

C_noret_decl(trf_16557)
static void C_ccall trf_16557(C_word c,C_word *av) C_noret;
static void C_ccall trf_16557(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_16557(t0,t1,t2);}

C_noret_decl(trf_16639)
static void C_ccall trf_16639(C_word c,C_word *av) C_noret;
static void C_ccall trf_16639(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_16639(t0,t1,t2,t3);}

C_noret_decl(trf_16691)
static void C_ccall trf_16691(C_word c,C_word *av) C_noret;
static void C_ccall trf_16691(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_16691(t0,t1,t2);}

C_noret_decl(trf_16730)
static void C_ccall trf_16730(C_word c,C_word *av) C_noret;
static void C_ccall trf_16730(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_16730(t0,t1,t2);}

C_noret_decl(trf_16763)
static void C_ccall trf_16763(C_word c,C_word *av) C_noret;
static void C_ccall trf_16763(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_16763(t0,t1,t2);}

C_noret_decl(trf_16793)
static void C_ccall trf_16793(C_word c,C_word *av) C_noret;
static void C_ccall trf_16793(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_16793(t0,t1);}

C_noret_decl(trf_16869)
static void C_ccall trf_16869(C_word c,C_word *av) C_noret;
static void C_ccall trf_16869(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_16869(t0,t1);}

C_noret_decl(trf_17164)
static void C_ccall trf_17164(C_word c,C_word *av) C_noret;
static void C_ccall trf_17164(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_17164(t0,t1,t2);}

C_noret_decl(trf_5259)
static void C_ccall trf_5259(C_word c,C_word *av) C_noret;
static void C_ccall trf_5259(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5259(t0,t1,t2);}

C_noret_decl(trf_5317)
static void C_ccall trf_5317(C_word c,C_word *av) C_noret;
static void C_ccall trf_5317(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_5317(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5520)
static void C_ccall trf_5520(C_word c,C_word *av) C_noret;
static void C_ccall trf_5520(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5520(t0,t1,t2);}

C_noret_decl(trf_5526)
static void C_ccall trf_5526(C_word c,C_word *av) C_noret;
static void C_ccall trf_5526(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5526(t0,t1,t2);}

C_noret_decl(trf_5554)
static void C_ccall trf_5554(C_word c,C_word *av) C_noret;
static void C_ccall trf_5554(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5554(t0,t1,t2);}

C_noret_decl(trf_5560)
static void C_ccall trf_5560(C_word c,C_word *av) C_noret;
static void C_ccall trf_5560(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5560(t0,t1,t2);}

C_noret_decl(trf_5584)
static void C_ccall trf_5584(C_word c,C_word *av) C_noret;
static void C_ccall trf_5584(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5584(t0,t1,t2);}

C_noret_decl(trf_5590)
static void C_ccall trf_5590(C_word c,C_word *av) C_noret;
static void C_ccall trf_5590(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5590(t0,t1,t2,t3);}

C_noret_decl(trf_5813)
static void C_ccall trf_5813(C_word c,C_word *av) C_noret;
static void C_ccall trf_5813(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5813(t0,t1,t2);}

C_noret_decl(trf_5821)
static void C_ccall trf_5821(C_word c,C_word *av) C_noret;
static void C_ccall trf_5821(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5821(t0,t1,t2,t3);}

C_noret_decl(trf_5886)
static void C_ccall trf_5886(C_word c,C_word *av) C_noret;
static void C_ccall trf_5886(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5886(t0,t1,t2);}

C_noret_decl(trf_5920)
static void C_ccall trf_5920(C_word c,C_word *av) C_noret;
static void C_ccall trf_5920(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5920(t0,t1);}

C_noret_decl(trf_5979)
static void C_ccall trf_5979(C_word c,C_word *av) C_noret;
static void C_ccall trf_5979(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5979(t0,t1,t2);}

C_noret_decl(trf_5985)
static void C_ccall trf_5985(C_word c,C_word *av) C_noret;
static void C_ccall trf_5985(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5985(t0,t1,t2,t3);}

C_noret_decl(trf_6168)
static void C_ccall trf_6168(C_word c,C_word *av) C_noret;
static void C_ccall trf_6168(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6168(t0,t1,t2);}

C_noret_decl(trf_6281)
static void C_ccall trf_6281(C_word c,C_word *av) C_noret;
static void C_ccall trf_6281(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6281(t0,t1,t2);}

C_noret_decl(trf_6464)
static void C_ccall trf_6464(C_word c,C_word *av) C_noret;
static void C_ccall trf_6464(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6464(t0,t1,t2);}

C_noret_decl(trf_6488)
static void C_ccall trf_6488(C_word c,C_word *av) C_noret;
static void C_ccall trf_6488(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6488(t0,t1);}

C_noret_decl(trf_6530)
static void C_ccall trf_6530(C_word c,C_word *av) C_noret;
static void C_ccall trf_6530(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6530(t0,t1,t2);}

C_noret_decl(trf_6553)
static void C_ccall trf_6553(C_word c,C_word *av) C_noret;
static void C_ccall trf_6553(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6553(t0,t1,t2);}

C_noret_decl(trf_6608)
static void C_ccall trf_6608(C_word c,C_word *av) C_noret;
static void C_ccall trf_6608(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6608(t0,t1,t2);}

C_noret_decl(trf_6610)
static void C_ccall trf_6610(C_word c,C_word *av) C_noret;
static void C_ccall trf_6610(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6610(t0,t1,t2);}

C_noret_decl(trf_6642)
static void C_ccall trf_6642(C_word c,C_word *av) C_noret;
static void C_ccall trf_6642(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6642(t0,t1,t2);}

C_noret_decl(trf_6722)
static void C_ccall trf_6722(C_word c,C_word *av) C_noret;
static void C_ccall trf_6722(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6722(t0,t1);}

C_noret_decl(trf_6726)
static void C_ccall trf_6726(C_word c,C_word *av) C_noret;
static void C_ccall trf_6726(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6726(t0,t1,t2);}

C_noret_decl(trf_6744)
static void C_ccall trf_6744(C_word c,C_word *av) C_noret;
static void C_ccall trf_6744(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6744(t0,t1,t2);}

C_noret_decl(trf_6834)
static void C_ccall trf_6834(C_word c,C_word *av) C_noret;
static void C_ccall trf_6834(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6834(t0,t1,t2);}

C_noret_decl(trf_6872)
static void C_ccall trf_6872(C_word c,C_word *av) C_noret;
static void C_ccall trf_6872(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6872(t0,t1);}

C_noret_decl(trf_6893)
static void C_ccall trf_6893(C_word c,C_word *av) C_noret;
static void C_ccall trf_6893(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6893(t0,t1,t2,t3);}

C_noret_decl(trf_7007)
static void C_ccall trf_7007(C_word c,C_word *av) C_noret;
static void C_ccall trf_7007(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7007(t0,t1,t2,t3);}

C_noret_decl(trf_7056)
static void C_ccall trf_7056(C_word c,C_word *av) C_noret;
static void C_ccall trf_7056(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7056(t0,t1,t2);}

C_noret_decl(trf_7078)
static void C_ccall trf_7078(C_word c,C_word *av) C_noret;
static void C_ccall trf_7078(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7078(t0,t1);}

C_noret_decl(trf_7085)
static void C_ccall trf_7085(C_word c,C_word *av) C_noret;
static void C_ccall trf_7085(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7085(t0,t1);}

C_noret_decl(trf_7226)
static void C_ccall trf_7226(C_word c,C_word *av) C_noret;
static void C_ccall trf_7226(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7226(t0,t1);}

C_noret_decl(trf_7273)
static void C_ccall trf_7273(C_word c,C_word *av) C_noret;
static void C_ccall trf_7273(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7273(t0,t1,t2);}

C_noret_decl(trf_7313)
static void C_ccall trf_7313(C_word c,C_word *av) C_noret;
static void C_ccall trf_7313(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7313(t0,t1,t2,t3);}

C_noret_decl(trf_7319)
static void C_ccall trf_7319(C_word c,C_word *av) C_noret;
static void C_ccall trf_7319(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7319(t0,t1,t2,t3);}

C_noret_decl(trf_7377)
static void C_ccall trf_7377(C_word c,C_word *av) C_noret;
static void C_ccall trf_7377(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_7377(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7504)
static void C_ccall trf_7504(C_word c,C_word *av) C_noret;
static void C_ccall trf_7504(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7504(t0,t1);}

C_noret_decl(trf_7608)
static void C_ccall trf_7608(C_word c,C_word *av) C_noret;
static void C_ccall trf_7608(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7608(t0,t1,t2);}

C_noret_decl(trf_7632)
static void C_ccall trf_7632(C_word c,C_word *av) C_noret;
static void C_ccall trf_7632(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7632(t0,t1);}

C_noret_decl(trf_7723)
static void C_ccall trf_7723(C_word c,C_word *av) C_noret;
static void C_ccall trf_7723(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7723(t0,t1);}

C_noret_decl(trf_7755)
static void C_ccall trf_7755(C_word c,C_word *av) C_noret;
static void C_ccall trf_7755(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7755(t0,t1,t2);}

C_noret_decl(trf_7780)
static void C_ccall trf_7780(C_word c,C_word *av) C_noret;
static void C_ccall trf_7780(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7780(t0,t1,t2);}

C_noret_decl(trf_7950)
static void C_ccall trf_7950(C_word c,C_word *av) C_noret;
static void C_ccall trf_7950(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7950(t0,t1,t2);}

C_noret_decl(trf_8163)
static void C_ccall trf_8163(C_word c,C_word *av) C_noret;
static void C_ccall trf_8163(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8163(t0,t1);}

C_noret_decl(trf_8167)
static void C_ccall trf_8167(C_word c,C_word *av) C_noret;
static void C_ccall trf_8167(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8167(t0,t1,t2);}

C_noret_decl(trf_8231)
static void C_ccall trf_8231(C_word c,C_word *av) C_noret;
static void C_ccall trf_8231(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8231(t0,t1,t2);}

C_noret_decl(trf_8443)
static void C_ccall trf_8443(C_word c,C_word *av) C_noret;
static void C_ccall trf_8443(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8443(t0,t1,t2);}

C_noret_decl(trf_8494)
static void C_ccall trf_8494(C_word c,C_word *av) C_noret;
static void C_ccall trf_8494(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8494(t0,t1);}

C_noret_decl(trf_8560)
static void C_ccall trf_8560(C_word c,C_word *av) C_noret;
static void C_ccall trf_8560(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8560(t0,t1,t2);}

C_noret_decl(trf_8587)
static void C_ccall trf_8587(C_word c,C_word *av) C_noret;
static void C_ccall trf_8587(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8587(t0,t1,t2);}

C_noret_decl(trf_8713)
static void C_ccall trf_8713(C_word c,C_word *av) C_noret;
static void C_ccall trf_8713(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_8713(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8863)
static void C_ccall trf_8863(C_word c,C_word *av) C_noret;
static void C_ccall trf_8863(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8863(t0,t1);}

C_noret_decl(trf_8877)
static void C_ccall trf_8877(C_word c,C_word *av) C_noret;
static void C_ccall trf_8877(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8877(t0,t1,t2);}

C_noret_decl(trf_8936)
static void C_ccall trf_8936(C_word c,C_word *av) C_noret;
static void C_ccall trf_8936(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8936(t0,t1);}

C_noret_decl(trf_8964)
static void C_ccall trf_8964(C_word c,C_word *av) C_noret;
static void C_ccall trf_8964(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8964(t0,t1,t2);}

C_noret_decl(trf_9075)
static void C_ccall trf_9075(C_word c,C_word *av) C_noret;
static void C_ccall trf_9075(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9075(t0,t1,t2);}

C_noret_decl(trf_9181)
static void C_ccall trf_9181(C_word c,C_word *av) C_noret;
static void C_ccall trf_9181(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9181(t0,t1);}

C_noret_decl(trf_9212)
static void C_ccall trf_9212(C_word c,C_word *av) C_noret;
static void C_ccall trf_9212(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9212(t0,t1,t2);}

C_noret_decl(trf_9275)
static void C_ccall trf_9275(C_word c,C_word *av) C_noret;
static void C_ccall trf_9275(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9275(t0,t1,t2);}

C_noret_decl(trf_9343)
static void C_ccall trf_9343(C_word c,C_word *av) C_noret;
static void C_ccall trf_9343(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9343(t0,t1,t2);}

C_noret_decl(trf_9379)
static void C_ccall trf_9379(C_word c,C_word *av) C_noret;
static void C_ccall trf_9379(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9379(t0,t1);}

C_noret_decl(trf_9515)
static void C_ccall trf_9515(C_word c,C_word *av) C_noret;
static void C_ccall trf_9515(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9515(t0,t1,t2);}

C_noret_decl(trf_9607)
static void C_ccall trf_9607(C_word c,C_word *av) C_noret;
static void C_ccall trf_9607(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9607(t0,t1);}

C_noret_decl(trf_9622)
static void C_ccall trf_9622(C_word c,C_word *av) C_noret;
static void C_ccall trf_9622(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9622(t0,t1,t2);}

C_noret_decl(trf_9679)
static void C_ccall trf_9679(C_word c,C_word *av) C_noret;
static void C_ccall trf_9679(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9679(t0,t1,t2);}

C_noret_decl(trf_9799)
static void C_ccall trf_9799(C_word c,C_word *av) C_noret;
static void C_ccall trf_9799(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9799(t0,t1,t2,t3);}

C_noret_decl(trf_9847)
static void C_ccall trf_9847(C_word c,C_word *av) C_noret;
static void C_ccall trf_9847(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9847(t0,t1,t2);}

C_noret_decl(trf_9972)
static void C_ccall trf_9972(C_word c,C_word *av) C_noret;
static void C_ccall trf_9972(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9972(t0,t1,t2,t3);}

/* f18811 in chicken.compiler.support#print-version in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f18811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f18811,2,av);}
/* support.scm:1680: chicken.base#print */
t2=*((C_word*)lf[228]+1);{
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

/* k10009 in k10021 in loop in k9956 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10011,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10021 in loop in k9956 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10023(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_10023,2,av);}
a=C_alloc(10);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10011,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
t7=((C_word*)t0)[5];
t8=C_u_i_cdr(t7);
/* support.scm:636: loop */
t9=((C_word*)((C_word*)t0)[6])[1];
f_9972(t9,t4,t6,t8);}

/* map-loop1925 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_10048(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10048,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10073,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:638: g1931 */
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

/* k10071 in map-loop1925 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10073(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10073,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10048(t6,((C_word*)t0)[5],t5);}

/* k10101 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10103(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_10103,2,av);}
a=C_alloc(6);
/* support.scm:639: cons* */
f_5584(((C_word*)t0)[2],lf[197],C_a_i_list(&a,2,((C_word*)t0)[3],t1));}

/* map-loop1951 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_10105(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10105,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10130,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:639: g1957 */
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

/* k10128 in map-loop1951 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10130(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10130,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10105(t6,((C_word*)t0)[5],t5);}

/* loop in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_10161(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_10161,5,t0,t1,t2,t3,t4);}
a=C_alloc(36);
t5=t2;
if(C_truep(C_i_zerop(t5))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10173,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* support.scm:644: scheme#reverse */
t7=*((C_word*)lf[89]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=t2;
t7=C_s_a_i_minus(&a,2,t6,C_fix(1));
t8=C_i_cdr(t3);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10199,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t7,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
t11=t3;
t12=C_u_i_car(t11);
/* support.scm:645: walk */
t13=((C_word*)((C_word*)t0)[2])[1];{
C_word av2[3];
av2[0]=t13;
av2[1]=t10;
av2[2]=t12;
f_9573(3,av2);}}}

/* k10171 in loop in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10173,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10177,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(((C_word*)t0)[3]);
/* support.scm:644: walk */
t5=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
f_9573(3,av2);}}

/* k10175 in k10171 in loop in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10177,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[206],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10197 in loop in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10199(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_10199,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* support.scm:645: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_10161(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k10208 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_10210(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,0,3)))){
C_save_and_reclaim_args((void *)trf_10210,2,t0,t1);}
a=C_alloc(21);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10217,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* support.scm:647: walk */
t4=((C_word*)((C_word*)t0)[2])[1];{
C_word av2[3];
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
f_9573(3,av2);}}
else{
t2=C_eqp(((C_word*)t0)[7],lf[186]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[7],lf[208]));
if(C_truep(t3)){
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=((C_word*)((C_word*)t0)[2])[1];
t9=C_i_check_list_2(((C_word*)t0)[3],lf[134]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10288,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10290,a[2]=t6,a[3]=t12,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_10290(t14,t10,((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10329,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=((C_word*)((C_word*)t0)[2])[1];
t10=C_i_check_list_2(((C_word*)t0)[3],lf[134]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10339,a[2]=t4,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10341,a[2]=t7,a[3]=t13,a[4]=t9,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_10341(t15,t11,((C_word*)t0)[3]);}}}

/* k10215 in k10208 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10217(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10217,2,av);}
a=C_alloc(19);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)((C_word*)t0)[2])[1];
t8=C_u_i_cdr(((C_word*)t0)[3]);
t9=C_i_check_list_2(t8,lf[134]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10228,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10230,a[2]=t5,a[3]=t12,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_10230(t14,t10,t8);}

/* k10226 in k10215 in k10208 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_10228,2,av);}
a=C_alloc(9);
/* support.scm:647: cons* */
f_5584(((C_word*)t0)[2],((C_word*)t0)[3],C_a_i_list(&a,3,((C_word*)t0)[4],((C_word*)t0)[5],t1));}

/* map-loop1994 in k10215 in k10208 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_10230(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10230,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10255,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:647: g2000 */
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

/* k10253 in map-loop1994 in k10215 in k10208 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10255(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10255,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10230(t6,((C_word*)t0)[5],t5);}

/* k10286 in k10208 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_10288,2,av);}
a=C_alloc(6);
/* support.scm:649: cons* */
f_5584(((C_word*)t0)[2],((C_word*)t0)[3],C_a_i_list(&a,2,((C_word*)t0)[4],t1));}

/* map-loop2023 in k10208 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_10290(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10290,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10315,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:649: g2029 */
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

/* k10313 in map-loop2023 in k10208 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10315(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10315,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10290(t6,((C_word*)t0)[5],t5);}

/* k10327 in k10208 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10329,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10337 in k10208 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10339,2,av);}
/* support.scm:650: scheme#append */
t2=*((C_word*)lf[67]+1);{
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

/* map-loop2049 in k10208 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_10341(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10341,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10366,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:650: g2055 */
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

/* k10364 in map-loop2049 in k10208 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10366,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10341(t6,((C_word*)t0)[5],t5);}

/* chicken.compiler.support#fold-boolean in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10444(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_10444,4,av);}
a=C_alloc(6);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10450,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_10450(t7,t1,t3);}

/* fold in chicken.compiler.support#fold-boolean in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_10450(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_10450,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_cddr(t2);
if(C_truep(C_i_nullp(t3))){{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
C_apply(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10476,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=C_i_car(t5);
t7=t2;
t8=C_i_cadr(t7);
/* support.scm:658: proc */
t9=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t9;
av2[1]=t4;
av2[2]=t6;
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}}

/* k10474 in fold in chicken.compiler.support#fold-boolean in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10476(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10476,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10480,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* support.scm:659: fold */
t6=((C_word*)((C_word*)t0)[4])[1];
f_10450(t6,t3,t5);}

/* k10478 in k10474 in fold in chicken.compiler.support#fold-boolean in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_10480,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[150],lf[181],lf[215],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7=av[7];
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_10496,8,av);}
a=C_alloc(7);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10502,a[2]=t3,a[3]=t5,a[4]=t4,a[5]=t6,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* support.scm:663: ##sys#decompose-lambda-list */
t9=*((C_word*)lf[223]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t1;
av2[2]=t2;
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10502(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_10502,5,av);}
a=C_alloc(13);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10508,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10514,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* support.scm:666: ##sys#call-with-values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t6;
C_call_with_values(4,av2);}}

/* a10507 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10508(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_10508,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5317,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_5317(t7,t1,t3,C_SCHEME_END_OF_LIST,t2);}

/* a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10514(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_10514,4,av);}
a=C_alloc(24);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10518,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[4])){
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=((C_word*)t0)[6];
t10=C_i_check_list_2(t9,lf[134]);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10634,a[2]=t7,a[3]=t12,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_10634(t14,t4,t9);}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[6];
f_10518(2,av2);}}}

/* k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10518(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,4)))){
C_save_and_reclaim((void *)f_10518,2,av);}
a=C_alloc(26);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10521,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
t4=t3;
t5=((C_word*)t0)[8];
t6=((C_word*)t0)[9];
t7=((C_word*)t0)[10];
t8=((C_word*)t0)[11];
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=C_i_check_list_2(t6,lf[134]);
t14=C_i_check_list_2(t2,lf[134]);
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10681,a[2]=t8,a[3]=t7,a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11128,a[2]=t11,a[3]=t17,a[4]=t12,tmp=(C_word)a,a+=5,tmp));
t19=((C_word*)t17)[1];
f_11128(t19,t15,t6,t2);}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[8];
f_10521(2,av2);}}}

/* k10519 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_10521,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10528,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* support.scm:671: take */
f_5259(t3,((C_word*)t0)[4],((C_word*)t0)[7]);}

/* k10526 in k10519 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_10528,2,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10530,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_10530(t5,((C_word*)t0)[6],t1,((C_word*)t0)[7]);}

/* loop in k10526 in k10519 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_10530(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_10530,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
if(C_truep(((C_word*)t0)[2])){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10588,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:676: last */
f_5920(t4,((C_word*)t0)[5]);}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t4=C_i_car(t2);
t5=C_a_i_list1(&a,1,t4);
t6=t5;
t7=C_i_car(t3);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10612,a[2]=t8,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t10=t2;
t11=C_u_i_cdr(t10);
t12=t3;
t13=C_u_i_cdr(t12);
/* support.scm:687: loop */
t15=t9;
t16=t11;
t17=t13;
t1=t15;
t2=t16;
t3=t17;
goto loop;}}

/* k10558 in k10586 in loop in k10526 in k10519 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in ... */
static void C_ccall f_10560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_10560,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[150],lf[105],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10586 in loop in k10526 in k10519 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10588(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,2)))){
C_save_and_reclaim((void *)f_10588,2,av);}
a=C_alloc(35);
t2=C_a_i_list1(&a,1,t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10560,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
/* support.scm:678: qnode */
t5=*((C_word*)lf[164]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t5=C_i_length(((C_word*)t0)[4]);
t6=C_a_i_fixnum_times(&a,2,C_fix(3),t5);
t7=C_a_i_list2(&a,2,lf[217],t6);
t8=((C_word*)t0)[4];
t9=C_a_i_record4(&a,4,lf[150],lf[186],t7,t8);
t10=C_a_i_list2(&a,2,t9,((C_word*)t0)[2]);
t11=((C_word*)t0)[3];
t12=t11;{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_a_i_record4(&a,4,lf[150],lf[105],t3,t10);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}}

/* k10610 in loop in k10526 in k10519 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_10612,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[150],lf[105],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop2100 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_10634(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10634,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10659,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:667: g2106 */
t5=*((C_word*)lf[106]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10657 in map-loop2100 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10659(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10659,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10634(t6,((C_word*)t0)[5],t5);}

/* k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_10681,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10689,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp));
/* support.scm:736: walk */
t5=((C_word*)t3)[1];
f_10689(t5,((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_10689(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(10,0,5)))){
C_save_and_reclaim_args((void *)trf_10689,4,t0,t1,t2,t3);}
a=C_alloc(10);
t4=t2;
t5=C_slot(t4,C_fix(3));
t6=t5;
t7=t2;
t8=C_slot(t7,C_fix(2));
t9=t8;
t10=t2;
t11=C_slot(t10,C_fix(1));
t12=t11;
t13=C_eqp(t12,lf[94]);
if(C_truep(t13)){
t14=t1;
t15=t14;{
C_word av2[2];
av2[0]=t15;
av2[1]=C_a_i_record4(&a,4,lf[150],t12,t9,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}
else{
t14=C_eqp(t12,lf[163]);
if(C_truep(t14)){
t15=C_i_car(t9);
t16=t15;
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10740,a[2]=t1,a[3]=t3,a[4]=t16,tmp=(C_word)a,a+=5,tmp);
t18=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10750,a[2]=((C_word*)t0)[2],a[3]=t17,a[4]=t16,tmp=(C_word)a,a+=5,tmp);
/* support.scm:702: db-get */
t19=*((C_word*)lf[136]+1);{
C_word av2[5];
av2[0]=t19;
av2[1]=t18;
av2[2]=((C_word*)t0)[3];
av2[3]=t16;
av2[4]=lf[220];
((C_proc)(void*)(*((C_word*)t19+1)))(5,av2);}}
else{
t15=C_eqp(t12,lf[133]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10787,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t17=C_i_car(t9);
t18=t3;
/* support.scm:692: chicken.base#alist-ref */
t19=*((C_word*)lf[218]+1);{
C_word av2[6];
av2[0]=t19;
av2[1]=t16;
av2[2]=t17;
av2[3]=t18;
av2[4]=*((C_word*)lf[219]+1);
av2[5]=t17;
((C_proc)(void*)(*((C_word*)t19+1)))(6,av2);}}
else{
t16=C_eqp(t12,lf[105]);
if(C_truep(t16)){
t17=C_i_car(t9);
t18=t17;
t19=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10803,a[2]=t3,a[3]=t18,a[4]=t1,a[5]=t6,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t20=C_i_car(t6);
/* support.scm:711: walk */
t22=t19;
t23=t20;
t24=t3;
t1=t22;
t2=t23;
t3=t24;
goto loop;}
else{
t17=C_eqp(t12,lf[127]);
if(C_truep(t17)){
t18=C_i_caddr(t9);
t19=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10855,a[2]=((C_word*)t0)[3],a[3]=t9,a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* support.scm:719: ##sys#decompose-lambda-list */
t20=*((C_word*)lf[223]+1);{
C_word av2[4];
av2[0]=t20;
av2[1]=t1;
av2[2]=t18;
av2[3]=t19;
((C_proc)(void*)(*((C_word*)t20+1)))(4,av2);}}
else{
t18=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11064,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t6,a[5]=t1,a[6]=t12,tmp=(C_word)a,a+=7,tmp);
/* support.scm:734: tree-copy */
t19=*((C_word*)lf[224]+1);{
C_word av2[3];
av2[0]=t19;
av2[1]=t18;
av2[2]=t9;
((C_proc)(void*)(*((C_word*)t19+1)))(3,av2);}}}}}}}

/* k10738 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_10740,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10747,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];
/* support.scm:692: chicken.base#alist-ref */
t4=*((C_word*)lf[218]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=t3;
av2[4]=*((C_word*)lf[219]+1);
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}

/* k10745 in k10738 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10747,2,av);}
/* support.scm:704: varnode */
t2=*((C_word*)lf[162]+1);{
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

/* k10748 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10750(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10750,2,av);}
if(C_truep(t1)){
/* support.scm:703: cfk */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_10740(2,av2);}}}

/* k10777 in k10785 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void *)f_10779,2,av);}
a=C_alloc(8);
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[2];
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[150],lf[133],((C_word*)t0)[3],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10785 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_10787,2,av);}
a=C_alloc(7);
t2=C_a_i_list1(&a,1,t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10779,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_car(((C_word*)t0)[3]);
/* support.scm:708: walk */
t6=((C_word*)((C_word*)t0)[4])[1];
f_10689(t6,t4,t5,((C_word*)t0)[5]);}

/* k10801 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10803(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_10803,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10806,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* support.scm:712: chicken.base#gensym */
t4=*((C_word*)lf[106]+1);{
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

/* k10804 in k10801 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10806(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,5)))){
C_save_and_reclaim((void *)f_10806,2,av);}
a=C_alloc(14);
t2=t1;
t3=((C_word*)t0)[2];
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t5=C_a_i_cons(&a,2,t4,t3);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10812,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t6,tmp=(C_word)a,a+=8,tmp);
/* support.scm:714: db-put! */
t8=*((C_word*)lf[140]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[8];
av2[3]=t2;
av2[4]=lf[221];
av2[5]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t8+1)))(6,av2);}}

/* k10810 in k10804 in k10801 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in ... */
static void C_ccall f_10812(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_10812,2,av);}
a=C_alloc(8);
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10832,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=C_i_cadr(((C_word*)t0)[5]);
/* support.scm:717: walk */
t6=((C_word*)((C_word*)t0)[6])[1];
f_10689(t6,t4,t5,((C_word*)t0)[7]);}

/* k10830 in k10810 in k10804 in k10801 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in ... */
static void C_ccall f_10832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_10832,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[150],lf[105],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a10854 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10855(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_10855,5,av);}
a=C_alloc(26);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10860,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t10=t2;
t11=C_i_check_list_2(t10,lf[134]);
t12=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10873,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=t3,a[7]=t4,a[8]=t2,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11020,a[2]=t7,a[3]=t14,a[4]=t9,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_11020(t16,t12,t10);}

/* g2240 in a10854 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_10860(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10860,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10864,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:723: chicken.base#gensym */
t4=*((C_word*)lf[106]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k10862 in g2240 in a10854 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in ... */
static void C_ccall f_10864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_10864,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10867,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:724: db-put! */
t4=*((C_word*)lf[140]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[221];
av2[5]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}

/* k10865 in k10862 in g2240 in a10854 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in ... */
static void C_ccall f_10867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10867,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10871 in a10854 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_10873(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,4)))){
C_save_and_reclaim((void *)f_10873,2,av);}
a=C_alloc(25);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10876,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=((C_word*)t0)[8];
t9=C_i_check_list_2(t2,lf[134]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10970,a[2]=t3,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10972,a[2]=t6,a[3]=t12,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_10972(t14,t10,t8,t2);}

/* k10874 in k10871 in a10854 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in ... */
static void C_ccall f_10876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_10876,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10941,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* support.scm:730: chicken.base#gensym */
t4=*((C_word*)lf[106]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[222];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* g2307 in k10947 in k10939 in k10874 in k10871 in a10854 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in ... */
static void C_fcall f_10893(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_10893,3,t0,t1,t2);}
/* support.scm:733: g2324 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_10689(t3,t1,t2,((C_word*)t0)[3]);}

/* k10901 in k10947 in k10939 in k10874 in k10871 in a10854 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in ... */
static void C_ccall f_10903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_10903,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[150],lf[127],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop2301 in k10947 in k10939 in k10874 in k10871 in a10854 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in ... */
static void C_fcall f_10905(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10905,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10930,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:733: g2307 */
t5=((C_word*)t0)[4];
f_10893(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10928 in map-loop2301 in k10947 in k10939 in k10874 in k10871 in a10854 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in ... */
static void C_ccall f_10930(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10930,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10905(t6,((C_word*)t0)[5],t5);}

/* k10939 in k10874 in k10871 in a10854 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in ... */
static void C_ccall f_10941(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,5)))){
C_save_and_reclaim((void *)f_10941,2,av);}
a=C_alloc(14);
t2=t1;
t3=C_i_cadr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10949,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10957,a[2]=t5,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[9])){
t7=((C_word*)t0)[9];
/* support.scm:692: chicken.base#alist-ref */
t8=*((C_word*)lf[218]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
av2[3]=((C_word*)t0)[4];
av2[4]=*((C_word*)lf[219]+1);
av2[5]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(6,av2);}}
else{
/* support.scm:731: build-lambda-list */
t7=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[8];
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}}

/* k10947 in k10939 in k10874 in k10871 in a10854 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in ... */
static void C_ccall f_10949(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_10949,2,av);}
a=C_alloc(33);
t2=C_i_cadddr(((C_word*)t0)[2]);
t3=C_a_i_list4(&a,4,((C_word*)t0)[3],((C_word*)t0)[4],t1,t2);
t4=t3;
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10893,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(((C_word*)t0)[7],lf[134]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10903,a[2]=((C_word*)t0)[8],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10905,a[2]=t7,a[3]=t13,a[4]=t9,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_10905(t15,t11,((C_word*)t0)[7]);}

/* k10955 in k10939 in k10874 in k10871 in a10854 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in ... */
static void C_ccall f_10957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10957,2,av);}
/* support.scm:731: build-lambda-list */
t2=*((C_word*)lf[63]+1);{
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

/* k10968 in k10871 in a10854 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in ... */
static void C_ccall f_10970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10970,2,av);}
/* support.scm:727: scheme#append */
t2=*((C_word*)lf[67]+1);{
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

/* map-loop2264 in k10871 in a10854 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in ... */
static void C_fcall f_10972(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10972,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_cons(&a,2,t6,t7);
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

/* map-loop2234 in a10854 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_11020(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11020,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11045,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:722: g2240 */
t5=((C_word*)t0)[4];
f_10860(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11043 in map-loop2234 in a10854 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in ... */
static void C_ccall f_11045(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11045,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_11020(t6,((C_word*)t0)[5],t5);}

/* k11062 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11064(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_11064,2,av);}
a=C_alloc(22);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11069,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t8=C_i_check_list_2(((C_word*)t0)[4],lf[134]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11079,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11081,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_11081(t13,t9,((C_word*)t0)[4]);}

/* g2346 in k11062 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_11069(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_11069,3,t0,t1,t2);}
/* support.scm:735: g2363 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_10689(t3,t1,t2,((C_word*)t0)[3]);}

/* k11077 in k11062 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_11079,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[150],((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop2340 in k11062 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_11081(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11081,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11106,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:735: g2346 */
t5=((C_word*)t0)[4];
f_11069(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11104 in map-loop2340 in k11062 in walk in k10679 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in ... */
static void C_ccall f_11106(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11106,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_11081(t6,((C_word*)t0)[5],t5);}

/* map-loop2153 in k10516 in a10513 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_11128(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_11128,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_cons(&a,2,t6,t7);
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

/* chicken.compiler.support#tree-copy in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11176,3,av);}
a=C_alloc(5);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11182,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_11182(t6,t1,t2);}

/* rec in chicken.compiler.support#tree-copy in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_11182(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_11182,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11196,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_u_i_car(t4);
/* support.scm:742: rec */
t7=t3;
t8=t5;
t1=t7;
t2=t8;
goto loop;}
else{
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11194 in rec in chicken.compiler.support#tree-copy in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11196(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11196,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11200,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* support.scm:742: rec */
t6=((C_word*)((C_word*)t0)[4])[1];
f_11182(t6,t3,t5);}

/* k11198 in k11194 in rec in chicken.compiler.support#tree-copy in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11200,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.compiler.support#copy-node in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11206(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_11206,3,av);}
a=C_alloc(5);
t3=t2;
t4=C_slot(t3,C_fix(1));
t5=t2;
t6=C_slot(t5,C_fix(2));
t7=t2;
t8=C_slot(t7,C_fix(3));
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_a_i_record4(&a,4,lf[150],t4,t6,t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* chicken.compiler.support#copy-node! in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11244(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11244,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11248,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=C_slot(t5,C_fix(1));
/* support.scm:751: node-class-set! */
t7=*((C_word*)lf[154]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t4;
av2[2]=t3;
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k11246 in chicken.compiler.support#copy-node! in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11248,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11251,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[4];
t4=C_slot(t3,C_fix(2));
/* support.scm:752: node-parameters-set! */
t5=*((C_word*)lf[158]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k11249 in k11246 in chicken.compiler.support#copy-node! in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11251(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_11251,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11254,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=C_slot(t3,C_fix(3));
/* support.scm:753: node-subexpressions-set! */
t5=*((C_word*)lf[161]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k11252 in k11249 in k11246 in chicken.compiler.support#copy-node! in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11254,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* walk in k11620 in k11617 in k11663 in k11583 in k11696 in k11562 in a11556 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in ... */
static void C_ccall f_11289(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_11289,3,av);}
a=C_alloc(18);
t3=t2;
t4=C_slot(t3,C_fix(1));
t5=t4;
t6=t2;
t7=C_slot(t6,C_fix(2));
t8=t7;
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=((C_word*)((C_word*)t0)[2])[1];
t14=t2;
t15=C_slot(t14,C_fix(3));
t16=C_i_check_list_2(t15,lf[134]);
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11333,a[2]=t8,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11335,a[2]=t11,a[3]=t19,a[4]=t13,a[5]=t12,tmp=(C_word)a,a+=6,tmp));
t21=((C_word*)t19)[1];
f_11335(t21,t17,t15);}

/* k11331 in walk in k11620 in k11617 in k11663 in k11583 in k11696 in k11562 in a11556 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in ... */
static void C_ccall f_11333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_11333,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop2425 in walk in k11620 in k11617 in k11663 in k11583 in k11696 in k11562 in a11556 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in ... */
static void C_fcall f_11335(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11335,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11360,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:760: g2431 */
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

/* k11358 in map-loop2425 in walk in k11620 in k11617 in k11663 in k11583 in k11696 in k11562 in a11556 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in ... */
static void C_ccall f_11360(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11360,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_11335(t6,((C_word*)t0)[5],t5);}

/* walk in k11714 in loop in a11705 in chicken.compiler.support#load-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11375(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_11375,3,av);}
a=C_alloc(18);
t3=C_i_car(t2);
t4=t3;
t5=C_i_cadr(t2);
t6=t5;
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=((C_word*)((C_word*)t0)[2])[1];
t12=t2;
t13=C_u_i_cdr(t12);
t14=C_u_i_cdr(t13);
t15=C_i_check_list_2(t14,lf[134]);
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11404,a[2]=t1,a[3]=t4,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11406,a[2]=t9,a[3]=t18,a[4]=t11,a[5]=t10,tmp=(C_word)a,a+=6,tmp));
t20=((C_word*)t18)[1];
f_11406(t20,t16,t14);}

/* k11402 in walk in k11714 in loop in a11705 in chicken.compiler.support#load-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_11404,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[150],((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop2464 in walk in k11714 in loop in a11705 in chicken.compiler.support#load-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_11406(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11406,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11431,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:764: g2470 */
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

/* k11429 in map-loop2464 in walk in k11714 in loop in a11705 in chicken.compiler.support#load-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11431(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11431,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_11406(t6,((C_word*)t0)[5],t5);}

/* chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11440(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_11440,7,av);}
a=C_alloc(18);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11444,a[2]=t1,a[3]=t8,a[4]=t10,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11557,a[2]=t8,a[3]=t10,a[4]=t6,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* support.scm:771: chicken.internal#hash-table-for-each */
t13=*((C_word*)lf[148]+1);{
C_word *av2=av;
av2[0]=t13;
av2[1]=t11;
av2[2]=t12;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t13+1)))(4,av2);}}

/* k11442 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_11444,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11447,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[4])[1]))){
/* support.scm:791: chicken.file#delete-file* */
t3=*((C_word*)lf[234]+1);{
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
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11507,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* support.scm:792: scheme#with-output-to-file */
t4=*((C_word*)lf[241]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k11445 in k11442 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11447(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_11447,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11453,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[3])[1]))){
/* support.scm:803: debugging */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[232];
av2[3]=lf[233];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_11453(2,av2);}}}

/* k11451 in k11445 in k11442 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_11453,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11461,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)((C_word*)t0)[3])[1];
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7350,tmp=(C_word)a,a+=2,tmp);
/* support.scm:298: chicken.sort#sort */
t5=*((C_word*)lf[231]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11459 in k11451 in k11445 in k11442 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11461(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11461,2,av);}
a=C_alloc(5);
t2=C_i_check_list_2(t1,lf[44]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11469,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_11469(t6,((C_word*)t0)[2],t1);}

/* for-each-loop2566 in k11459 in k11451 in k11445 in k11442 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_11469(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_11469,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11479,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:804: g2582 */
t5=*((C_word*)lf[228]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[229];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11477 in for-each-loop2566 in k11459 in k11451 in k11445 in k11442 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11479,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11469(t3,((C_word*)t0)[4],t2);}

/* a11506 in k11442 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_11507,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11511,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11555,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:794: chicken.platform#chicken-version */
t4=*((C_word*)lf[240]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11509 in a11506 in k11442 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11511(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11511,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11522,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:800: scheme#reverse */
t3=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11514 in for-each-loop2544 in k11520 in k11509 in a11506 in k11442 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11516,2,av);}
/* support.scm:799: scheme#newline */
t2=*((C_word*)lf[23]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11520 in k11509 in a11506 in k11442 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_11522,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11525,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11530,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_11530(t6,t2,t1);}

/* k11523 in k11520 in k11509 in a11506 in k11442 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11525,2,av);}
/* support.scm:801: chicken.base#print */
t2=*((C_word*)lf[228]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[235];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* for-each-loop2544 in k11520 in k11509 in a11506 in k11442 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_11530(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_11530,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11540,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11516,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* support.scm:798: chicken.pretty-print#pp */
t7=*((C_word*)lf[236]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11538 in for-each-loop2544 in k11520 in k11509 in a11506 in k11442 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11540,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11530(t3,((C_word*)t0)[4],t2);}

/* k11553 in a11506 in k11442 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_11555,2,av);}
/* support.scm:794: chicken.base#print */
t2=*((C_word*)lf[228]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[237];
av2[3]=t1;
av2[4]=lf[238];
av2[5]=((C_word*)t0)[3];
av2[6]=lf[239];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* a11556 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_11557,4,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11564,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* support.scm:773: variable-visible? */
t5=*((C_word*)lf[251]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k11562 in a11556 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11564(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11564,2,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=C_i_assq(lf[242],((C_word*)t0)[2]);
t3=t2;
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11698,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t5=((C_word*)t0)[3];
/* tweaks.scm:60: ##sys#get */
t6=*((C_word*)lf[190]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
av2[3]=lf[250];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11583 in k11696 in k11562 in a11556 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_11585(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_11585,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
if(C_truep(C_i_assq(lf[244],((C_word*)t0)[2]))){
t2=C_i_cdr(((C_word*)t0)[3]);
t3=C_slot(t2,C_fix(2));
t4=t3;
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11665,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[3],a[7]=t4,a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* support.scm:781: db-get */
t6=*((C_word*)lf[136]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[9];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[248];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t5=((C_word*)t0)[7];{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[7];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[7];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k11617 in k11663 in k11583 in k11696 in k11562 in a11556 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11619(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11619,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11622,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(t1,lf[245]);
if(C_truep(t3)){
t4=t2;
f_11622(t4,C_SCHEME_TRUE);}
else{
t4=C_eqp(t1,lf[246]);
if(C_truep(t4)){
t5=t2;
f_11622(t5,C_SCHEME_FALSE);}
else{
t5=C_i_cadddr(((C_word*)t0)[7]);
t6=((C_word*)t0)[8];
t7=C_i_lessp(t5,t6);
t8=t2;
f_11622(t8,t7);}}}

/* k11620 in k11617 in k11663 in k11583 in k11696 in k11562 in a11556 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_11622(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_11622,2,t0,t1);}
a=C_alloc(13);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11641,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_u_i_cdr(((C_word*)t0)[6]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11289,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];{
C_word av2[3];
av2[0]=t9;
av2[1]=t4;
av2[2]=t5;
f_11289(3,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k11639 in k11620 in k11617 in k11663 in k11583 in k11696 in k11562 in a11556 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in ... */
static void C_ccall f_11641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11641,2,av);}
a=C_alloc(9);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k11663 in k11583 in k11696 in k11562 in a11556 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_11665,2,av);}
a=C_alloc(9);
if(C_truep(C_i_not(t1))){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11619,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=((C_word*)t0)[2];
/* tweaks.scm:60: ##sys#get */
t4=*((C_word*)lf[190]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=lf[247];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k11696 in k11562 in a11556 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11698(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11698,2,av);}
a=C_alloc(10);
t2=C_i_structurep(t1,lf[150]);
if(C_truep(C_i_not(t2))){
t3=C_i_assq(lf[243],((C_word*)t0)[2]);
t4=C_i_not(t3);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t4)){
t6=t5;
f_11585(t6,t4);}
else{
t6=C_i_cdr(t3);
t7=C_eqp(lf[249],t6);
t8=t5;
f_11585(t8,C_i_not(t7));}}
else{
t3=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.compiler.support#load-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,3)))){
C_save_and_reclaim((void *)f_11700,3,av);}
a=C_alloc(2);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11706,tmp=(C_word)a,a+=2,tmp);
/* support.scm:808: scheme#with-input-from-file */
t4=*((C_word*)lf[254]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* a11705 in chicken.compiler.support#load-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11706,2,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11712,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_11712(t5,t1);}

/* loop in a11705 in chicken.compiler.support#load-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_11712(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_11712,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11716,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:811: scheme#read */
t3=*((C_word*)lf[92]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11714 in loop in a11705 in chicken.compiler.support#load-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11716(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11716,2,av);}
a=C_alloc(13);
if(C_truep(C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11739,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(t1);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11750,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cadr(t1);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11375,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=((C_word*)t8)[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t5;
av2[2]=t6;
f_11375(3,av2);}}}

/* k11737 in k11714 in loop in a11705 in chicken.compiler.support#load-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11739,2,av);}
/* support.scm:817: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_11712(t2,((C_word*)t0)[3]);}

/* k11748 in k11714 in loop in a11705 in chicken.compiler.support#load-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11750(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11750,2,av);}
a=C_alloc(3);
t2=C_a_i_list(&a,1,t1);
if(C_truep(C_i_nullp(t2))){
/* tweaks.scm:57: ##sys#put! */
t3=*((C_word*)lf[253]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[250];
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=C_i_car(t2);
/* tweaks.scm:57: ##sys#put! */
t4=*((C_word*)lf[253]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[250];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* chicken.compiler.support#match-node in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11756(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_11756,5,av);}
a=C_alloc(27);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11759,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t14=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11793,a[2]=t8,a[3]=t10,tmp=(C_word)a,a+=4,tmp));
t15=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11840,a[2]=t8,a[3]=t12,a[4]=t10,tmp=(C_word)a,a+=5,tmp));
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11963,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* support.scm:851: matchn */
t17=((C_word*)t12)[1];
f_11840(t17,t16,t2,t3);}

/* resolve in chicken.compiler.support#match-node in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_11759(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11759,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_assq(t2,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11767,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm:826: g2627 */
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=(
  /* support.scm:826: g2627 */
  f_11767(t5,t4)
);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
if(C_truep(C_i_memq(t2,((C_word*)t0)[3]))){
t5=t2;
t6=t3;
t7=((C_word*)((C_word*)t0)[2])[1];
t8=C_a_i_cons(&a,2,t5,t6);
t9=C_a_i_cons(&a,2,t8,t7);
t10=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t11=t1;{
C_word av2[2];
av2[0]=t11;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_eqp(t2,t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}}

/* g2627 in resolve in chicken.compiler.support#match-node in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static C_word C_fcall f_11767(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_cdr(t1);
return(C_i_equalp(((C_word*)t0)[2],t2));}

/* match1 in chicken.compiler.support#match-node in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_11793(C_word t0,C_word t1,C_word t2,C_word t3){
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
loop:
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_11793,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t3);
if(C_truep(C_i_not(t4))){
/* support.scm:833: resolve */
t5=((C_word*)((C_word*)t0)[2])[1];
f_11759(t5,t1,t3,t2);}
else{
t5=C_i_pairp(t2);
if(C_truep(C_i_not(t5))){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11815,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_i_car(t2);
t8=C_i_car(t3);
/* support.scm:835: match1 */
t10=t6;
t11=t7;
t12=t8;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}}

/* k11813 in match1 in chicken.compiler.support#match-node in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11815(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11815,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* support.scm:835: match1 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_11793(t6,((C_word*)t0)[5],t3,t5);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* matchn in chicken.compiler.support#match-node in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_11840(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_11840,4,t0,t1,t2,t3);}
a=C_alloc(7);
t4=C_i_pairp(t3);
if(C_truep(C_i_not(t4))){
/* support.scm:840: resolve */
t5=((C_word*)((C_word*)t0)[2])[1];
f_11759(t5,t1,t3,t2);}
else{
t5=t2;
t6=C_slot(t5,C_fix(1));
t7=t3;
t8=C_i_car(t7);
t9=C_eqp(t6,t8);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11862,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t11=t2;
t12=C_slot(t11,C_fix(2));
t13=t3;
t14=C_i_cadr(t13);
/* support.scm:842: match1 */
t15=((C_word*)((C_word*)t0)[4])[1];
f_11793(t15,t10,t12,t14);}
else{
t10=t1;{
C_word av2[2];
av2[0]=t10;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}}

/* k11860 in matchn in chicken.compiler.support#match-node in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11862(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_11862,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_slot(t2,C_fix(3));
t4=C_i_cddr(((C_word*)t0)[3]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11880,a[2]=((C_word*)t0)[4],a[3]=t6,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_11880(t8,((C_word*)t0)[6],t3,t4);}
else{
t2=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* loop in k11860 in matchn in chicken.compiler.support#match-node in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_11880(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_11880,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_i_nullp(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_pairp(t3);
if(C_truep(C_i_not(t4))){
/* support.scm:846: resolve */
t5=((C_word*)((C_word*)t0)[2])[1];
f_11759(t5,t1,t3,t2);}
else{
if(C_truep(C_i_nullp(t2))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11911,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=C_i_car(t2);
t7=C_i_car(t3);
/* support.scm:848: matchn */
t8=((C_word*)((C_word*)t0)[4])[1];
f_11840(t8,t5,t6,t7);}}}}

/* k11909 in loop in k11860 in matchn in chicken.compiler.support#match-node in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11911,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* support.scm:849: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_11880(t6,((C_word*)t0)[5],t3,t5);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k11961 in chicken.compiler.support#match-node in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11963(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,6)))){
C_save_and_reclaim((void *)f_11963,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11969,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=C_slot(t3,C_fix(1));
t5=((C_word*)t0)[4];
t6=C_slot(t5,C_fix(2));
/* support.scm:854: debugging */
t7=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t7;
av2[1]=t2;
av2[2]=lf[256];
av2[3]=lf[257];
av2[4]=t4;
av2[5]=t6;
av2[6]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t7+1)))(7,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k11967 in k11961 in chicken.compiler.support#match-node in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11969,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.compiler.support#expression-has-side-effects? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11989(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11989,4,av);}
a=C_alloc(5);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11995,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t1;
av2[2]=t2;
f_11995(3,av2);}}

/* walk in chicken.compiler.support#expression-has-side-effects? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_11995(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11995,3,av);}
a=C_alloc(7);
t3=t2;
t4=C_slot(t3,C_fix(3));
t5=t4;
t6=t2;
t7=C_slot(t6,C_fix(1));
t8=t7;
t9=C_eqp(t8,lf[163]);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12021,a[2]=t1,a[3]=t8,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t9)){
t11=t10;
f_12021(t11,t9);}
else{
t11=C_eqp(t8,lf[94]);
if(C_truep(t11)){
t12=t10;
f_12021(t12,t11);}
else{
t12=C_eqp(t8,lf[168]);
t13=t10;
f_12021(t13,(C_truep(t12)?t12:C_eqp(t8,lf[183])));}}}

/* k12019 in walk in chicken.compiler.support#expression-has-side-effects? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_12021(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_12021,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[127]);
if(C_truep(t2)){
t3=((C_word*)t0)[4];
t4=C_slot(t3,C_fix(2));
t5=C_i_car(t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12035,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=((C_word*)t0)[2];
t9=t7;
t10=*((C_word*)lf[260]+1);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6281,a[2]=t12,a[3]=t9,tmp=(C_word)a,a+=4,tmp));
t14=((C_word*)t12)[1];
f_6281(t14,t8,*((C_word*)lf[260]+1));}
else{
t3=C_eqp(((C_word*)t0)[3],lf[167]);
if(C_truep(t3)){
if(C_truep(t3)){
/* support.scm:870: any */
f_5554(((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[6]);}
else{
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t4=C_eqp(((C_word*)t0)[3],lf[105]);
if(C_truep(t4)){
/* support.scm:870: any */
f_5554(((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[6]);}
else{
t5=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}}}}

/* a12034 in k12019 in walk in chicken.compiler.support#expression-has-side-effects? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12035,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12043,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:868: foreign-callback-stub-id */
t4=*((C_word*)lf[259]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k12041 in a12034 in k12019 in walk in chicken.compiler.support#expression-has-side-effects? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_12043,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.compiler.support#simple-lambda-node? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12098(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_12098,3,av);}
a=C_alloc(6);
t3=t2;
t4=C_slot(t3,C_fix(2));
t5=C_i_caddr(t4);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_i_car(t5):C_SCHEME_FALSE);
t8=t7;
if(C_truep(t8)){
if(C_truep(C_i_cadr(t4))){
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12127,a[2]=t8,a[3]=t10,tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];{
C_word *av2=av;
av2[0]=t12;
av2[1]=t1;
av2[2]=t2;
f_12127(3,av2);}}
else{
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}
else{
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* rec in chicken.compiler.support#simple-lambda-node? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12127(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12127,3,av);}
t3=t2;
t4=C_slot(t3,C_fix(1));
t5=C_eqp(t4,lf[188]);
if(C_truep(t5)){
t6=t2;
t7=C_slot(t6,C_fix(3));
t8=C_i_car(t7);
t9=C_slot(t8,C_fix(1));
t10=C_eqp(lf[163],t9);
if(C_truep(t10)){
t11=C_slot(t8,C_fix(2));
t12=C_i_car(t11);
t13=C_eqp(((C_word*)t0)[2],t12);
if(C_truep(t13)){
t14=C_i_cdr(t7);
/* support.scm:886: every */
f_5520(t1,((C_word*)((C_word*)t0)[3])[1],t14);}
else{
t14=t1;{
C_word *av2=av;
av2[0]=t14;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}}
else{
t11=t1;{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}
else{
t6=C_eqp(t4,lf[197]);
if(C_truep(t6)){
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=t2;
t8=C_slot(t7,C_fix(3));
/* support.scm:888: every */
f_5520(t1,((C_word*)((C_word*)t0)[3])[1],t8);}}}

/* chicken.compiler.support#dump-undefined-globals in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_12224,3,av);}
a=C_alloc(2);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12230,tmp=(C_word)a,a+=2,tmp);
/* support.scm:894: chicken.internal#hash-table-for-each */
t4=*((C_word*)lf[148]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* a12229 in chicken.compiler.support#dump-undefined-globals in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12230(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12230,4,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12237,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12263,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* support.scm:896: chicken.keyword#keyword? */
t6=*((C_word*)lf[266]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k12235 in a12229 in chicken.compiler.support#dump-undefined-globals in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_12237(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_12237,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12240,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:899: scheme#write */
t3=*((C_word*)lf[263]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12238 in k12235 in a12229 in chicken.compiler.support#dump-undefined-globals in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12240(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_12240,2,av);}
/* support.scm:900: scheme#newline */
t2=*((C_word*)lf[23]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k12261 in a12229 in chicken.compiler.support#dump-undefined-globals in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_12263,2,av);}
if(C_truep(C_i_not(t1))){
if(C_truep(C_i_assq(lf[264],((C_word*)t0)[2]))){
t2=C_i_assq(lf[265],((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_12237(t3,C_i_not(t2));}
else{
t2=((C_word*)t0)[3];
f_12237(t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
f_12237(t2,C_SCHEME_FALSE);}}

/* chicken.compiler.support#dump-defined-globals in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12265(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_12265,3,av);}
a=C_alloc(2);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12271,tmp=(C_word)a,a+=2,tmp);
/* support.scm:904: chicken.internal#hash-table-for-each */
t4=*((C_word*)lf[148]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* a12270 in chicken.compiler.support#dump-defined-globals in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12271(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12271,4,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12278,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12300,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* support.scm:906: chicken.keyword#keyword? */
t6=*((C_word*)lf[266]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k12276 in a12270 in chicken.compiler.support#dump-defined-globals in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_12278(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_12278,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12281,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:909: scheme#write */
t3=*((C_word*)lf[263]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12279 in k12276 in a12270 in chicken.compiler.support#dump-defined-globals in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_12281,2,av);}
/* support.scm:910: scheme#newline */
t2=*((C_word*)lf[23]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k12298 in a12270 in chicken.compiler.support#dump-defined-globals in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_12300,2,av);}
if(C_truep(C_i_not(t1))){
t2=C_i_assq(lf[264],((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_12278(t3,(C_truep(t2)?C_i_assq(lf[265],((C_word*)t0)[2]):C_SCHEME_FALSE));}
else{
t2=((C_word*)t0)[3];
f_12278(t2,C_SCHEME_FALSE);}}

/* chicken.compiler.support#dump-global-refs in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_12302,3,av);}
a=C_alloc(2);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12308,tmp=(C_word)a,a+=2,tmp);
/* support.scm:914: chicken.internal#hash-table-for-each */
t4=*((C_word*)lf[148]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* a12307 in chicken.compiler.support#dump-global-refs in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_12308,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12349,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:916: chicken.keyword#keyword? */
t5=*((C_word*)lf[266]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k12319 in k12347 in a12307 in chicken.compiler.support#dump-global-refs in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_12321,2,av);}
/* support.scm:919: scheme#newline */
t2=*((C_word*)lf[23]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k12347 in a12307 in chicken.compiler.support#dump-global-refs in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12349(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_12349,2,av);}
a=C_alloc(9);
t2=C_i_not(t1);
t3=(C_truep(t2)?C_i_assq(lf[264],((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_i_assq(lf[269],((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12321,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t4)){
t6=C_i_cdr(t4);
t7=C_i_length(t6);
t8=C_a_i_list2(&a,2,((C_word*)t0)[4],t7);
/* support.scm:918: scheme#write */
t9=*((C_word*)lf[263]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t5;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t6=C_a_i_list2(&a,2,((C_word*)t0)[4],C_fix(0));
/* support.scm:918: scheme#write */
t7=*((C_word*)lf[263]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* ##sys#toplevel-definition-hook in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12351(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12351,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12358,a[2]=t1,a[3]=t2,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* support.scm:927: ##sys#qualified-symbol? */
t6=*((C_word*)lf[276]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k12356 in toplevel-definition-hook in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_12358,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12361,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_12361(t3,t1);}
else{
t3=((C_word*)t0)[3];
t4=t2;
f_12361(t4,C_u_i_namespaced_symbolp(t3));}}

/* k12359 in k12356 in toplevel-definition-hook in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_12361(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_12361,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_17034,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1638: variable-hidden? */
t5=*((C_word*)lf[273]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
if(C_truep(C_i_not(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12373,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* support.scm:930: debugging */
t3=*((C_word*)lf[22]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[198];
av2[3]=lf[275];
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* k12371 in k12359 in k12356 in toplevel-definition-hook in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12373(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_12373,2,av);}
/* support.scm:931: hide-variable */
t2=*((C_word*)lf[274]+1);{
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

/* chicken.compiler.support#make-foreign-callback-stub in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12385(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_12385,7,av);}
a=C_alloc(7);
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_record6(&a,6,lf[278],t2,t3,t4,t5,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* chicken.compiler.support#foreign-callback-stub? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_12391,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[278]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.compiler.support#foreign-callback-stub-id in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12397(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_12397,3,av);}
t3=C_i_check_structure_2(t2,lf[278],lf[280]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.compiler.support#foreign-callback-stub-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12406(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_12406,3,av);}
t3=C_i_check_structure_2(t2,lf[278],lf[282]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(2));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.compiler.support#foreign-callback-stub-qualifiers in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_12415,3,av);}
t3=C_i_check_structure_2(t2,lf[278],lf[284]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(3));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.compiler.support#foreign-callback-stub-return-type in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_12424,3,av);}
t3=C_i_check_structure_2(t2,lf[278],lf[286]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(4));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.compiler.support#foreign-callback-stub-argument-types in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12433(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_12433,3,av);}
t3=C_i_check_structure_2(t2,lf[278],lf[288]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(5));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.compiler.support#register-foreign-callback-stub! in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_12442,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12468,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[277]+1);
av2[3]=t2;
av2[4]=t3;
C_apply(5,av2);}}

/* k12466 in chicken.compiler.support#register-foreign-callback-stub! in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12468(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_12468,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,*((C_word*)lf[260]+1));
t3=C_mutate((C_word*)lf[260]+1 /* (set! chicken.compiler.support#foreign-callback-stubs ...) */,t2);
t4=((C_word*)t0)[2];
t5=((C_word*)t0)[3];
t6=C_SCHEME_END_OF_LIST;
if(C_truep(C_i_nullp(t6))){
/* tweaks.scm:57: ##sys#put! */
t7=*((C_word*)lf[253]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t4;
av2[2]=t5;
av2[3]=lf[290];
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t7=C_i_car(t6);
/* tweaks.scm:57: ##sys#put! */
t8=*((C_word*)lf[253]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t4;
av2[2]=t5;
av2[3]=lf[290];
av2[4]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}}

/* chicken.compiler.support#clear-foreign-type-table! in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_12471,2,av);}
a=C_alloc(3);
if(C_truep(lf[291])){
/* support.scm:959: scheme#vector-fill! */
t2=*((C_word*)lf[293]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[291];
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12482,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:960: scheme#make-vector */
t3=*((C_word*)lf[294]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(301);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k12480 in chicken.compiler.support#clear-foreign-type-table! in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_12482,2,av);}
t2=C_mutate(&lf[291] /* (set! chicken.compiler.support#foreign-type-table ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.compiler.support#register-foreign-type! in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_12484,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
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
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=(C_truep(t10)?t6:C_SCHEME_FALSE);
t14=(C_truep(t6)?C_a_i_vector3(&a,3,t3,t13,t10):C_a_i_vector3(&a,3,t3,t13,C_SCHEME_FALSE));
/* support.scm:968: chicken.internal#hash-table-set! */
t15=*((C_word*)lf[141]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t15;
av2[1]=t1;
av2[2]=lf[291];
av2[3]=t2;
av2[4]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(5,av2);}}

/* chicken.compiler.support#lookup-foreign-type in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12538,3,av);}
/* support.scm:976: chicken.internal#hash-table-ref */
t3=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[291];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_12544,4,av);}
a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12550,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13614,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm:993: follow-without-loop */
f_7313(t1,t3,t4,t5);}

/* a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12550(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_12550,4,av);}
a=C_alloc(8);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12556,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_12556(t7,t1,t2);}

/* repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_12556(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_12556,3,t0,t1,t2);}
a=C_alloc(9);
t3=t2;
t4=C_eqp(t3,lf[299]);
t5=(C_truep(t4)?t4:C_eqp(t3,lf[300]));
if(C_truep(t5)){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=(C_truep(*((C_word*)lf[10]+1))?((C_word*)t0)[2]:C_a_i_list(&a,2,lf[301],((C_word*)t0)[2]));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(t3,lf[302]);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12581,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t6)){
t8=t7;
f_12581(t8,t6);}
else{
t8=C_eqp(t3,lf[384]);
if(C_truep(t8)){
t9=t7;
f_12581(t9,t8);}
else{
t9=C_eqp(t3,lf[385]);
if(C_truep(t9)){
t10=t7;
f_12581(t10,t9);}
else{
t10=C_eqp(t3,lf[386]);
if(C_truep(t10)){
t11=t7;
f_12581(t11,t10);}
else{
t11=C_eqp(t3,lf[387]);
t12=t7;
f_12581(t12,(C_truep(t11)?t11:C_eqp(t3,lf[388])));}}}}}}

/* k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_12581(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_12581,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
if(C_truep(*((C_word*)lf[10]+1))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,lf[303],((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[304]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12596,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t2)){
t4=t3;
f_12596(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[382]);
t5=t3;
f_12596(t5,(C_truep(t4)?t4:C_eqp(((C_word*)t0)[4],lf[383])));}}}

/* k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_12596(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_12596,2,t0,t1);}
a=C_alloc(15);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=(C_truep(*((C_word*)lf[10]+1))?((C_word*)t0)[3]:C_a_i_list(&a,2,lf[305],((C_word*)t0)[3]));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[306]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[307]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12614,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1004: chicken.base#gensym */
t5=*((C_word*)lf[106]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_eqp(((C_word*)t0)[4],lf[309]);
t5=(C_truep(t4)?t4:C_eqp(((C_word*)t0)[4],lf[310]));
if(C_truep(t5)){
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=(C_truep(*((C_word*)lf[10]+1))?((C_word*)t0)[3]:C_a_i_list(&a,2,lf[308],((C_word*)t0)[3]));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(((C_word*)t0)[4],lf[311]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12664,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1016: chicken.base#gensym */
t8=*((C_word*)lf[106]+1);{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t7=C_eqp(((C_word*)t0)[4],lf[313]);
if(C_truep(t7)){
if(C_truep(*((C_word*)lf[10]+1))){
t8=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t8;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_a_i_list(&a,2,lf[94],lf[311]);
t9=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t9;
av2[1]=C_a_i_list(&a,3,lf[312],t8,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}
else{
t8=C_eqp(((C_word*)t0)[4],lf[314]);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12719,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t8)){
t10=t9;
f_12719(t10,t8);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[373]);
if(C_truep(t10)){
t11=t9;
f_12719(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[374]);
if(C_truep(t11)){
t12=t9;
f_12719(t12,t11);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[375]);
if(C_truep(t12)){
t13=t9;
f_12719(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[4],lf[376]);
if(C_truep(t13)){
t14=t9;
f_12719(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[377]);
if(C_truep(t14)){
t15=t9;
f_12719(t15,t14);}
else{
t15=C_eqp(((C_word*)t0)[4],lf[378]);
if(C_truep(t15)){
t16=t9;
f_12719(t16,t15);}
else{
t16=C_eqp(((C_word*)t0)[4],lf[379]);
if(C_truep(t16)){
t17=t9;
f_12719(t17,t16);}
else{
t17=C_eqp(((C_word*)t0)[4],lf[380]);
t18=t9;
f_12719(t18,(C_truep(t17)?t17:C_eqp(((C_word*)t0)[4],lf[381])));}}}}}}}}}}}}}}

/* k12612 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12614(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(42,c,1)))){
C_save_and_reclaim((void *)f_12614,2,av);}
a=C_alloc(42);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=(C_truep(*((C_word*)lf[10]+1))?t1:C_a_i_list(&a,2,lf[308],t1));
t5=C_a_i_list(&a,2,lf[94],C_SCHEME_FALSE);
t6=C_a_i_list(&a,4,lf[167],t1,t4,t5);
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_list(&a,3,lf[105],t3,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k12662 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12664(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_12664,2,av);}
a=C_alloc(29);
t2=t1;
t3=C_a_i_list(&a,2,t2,((C_word*)t0)[2]);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12679,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[10]+1))){
t7=t6;
f_12679(t7,t2);}
else{
t7=C_a_i_list(&a,2,lf[94],lf[311]);
t8=t6;
f_12679(t8,C_a_i_list(&a,3,lf[312],t7,t2));}}

/* k12677 in k12662 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_12679(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,0,1)))){
C_save_and_reclaim_args((void *)trf_12679,2,t0,t1);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,lf[94],C_SCHEME_FALSE);
t3=C_a_i_list(&a,4,lf[167],((C_word*)t0)[2],t1,t2);
t4=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[105],((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_12719(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_12719,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1029: chicken.base#gensym */
t3=*((C_word*)lf[106]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[5],lf[315]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12761,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t2)){
t4=t3;
f_12761(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[364]);
if(C_truep(t4)){
t5=t3;
f_12761(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[365]);
if(C_truep(t5)){
t6=t3;
f_12761(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[5],lf[366]);
if(C_truep(t6)){
t7=t3;
f_12761(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[5],lf[367]);
if(C_truep(t7)){
t8=t3;
f_12761(t8,t7);}
else{
t8=C_eqp(((C_word*)t0)[5],lf[368]);
if(C_truep(t8)){
t9=t3;
f_12761(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[5],lf[369]);
if(C_truep(t9)){
t10=t3;
f_12761(t10,t9);}
else{
t10=C_eqp(((C_word*)t0)[5],lf[370]);
if(C_truep(t10)){
t11=t3;
f_12761(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[5],lf[371]);
t12=t3;
f_12761(t12,(C_truep(t11)?t11:C_eqp(((C_word*)t0)[5],lf[372])));}}}}}}}}}}

/* k12720 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_12722(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_12722,2,av);}
a=C_alloc(29);
t2=t1;
t3=C_a_i_list(&a,2,t2,((C_word*)t0)[2]);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12737,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[10]+1))){
t7=t6;
f_12737(t7,t2);}
else{
t7=C_a_i_list(&a,2,lf[94],((C_word*)t0)[4]);
t8=t6;
f_12737(t8,C_a_i_list(&a,3,lf[312],t7,t2));}}

/* k12735 in k12720 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_12737(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,0,1)))){
C_save_and_reclaim_args((void *)trf_12737,2,t0,t1);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,lf[94],C_SCHEME_FALSE);
t3=C_a_i_list(&a,4,lf[167],((C_word*)t0)[2],t1,t2);
t4=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[105],((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k12759 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_12761(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_12761,2,t0,t1);}
a=C_alloc(15);
if(C_truep(t1)){
if(C_truep(*((C_word*)lf[10]+1))){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[4];
t3=C_u_i_assq(t2,lf[316]);
t4=C_slot(t3,C_fix(1));
t5=C_a_i_list(&a,2,lf[94],t4);
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[312],t5,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
t2=C_eqp(((C_word*)t0)[5],lf[317]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12787,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t2)){
t4=t3;
f_12787(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[359]);
if(C_truep(t4)){
t5=t3;
f_12787(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[360]);
if(C_truep(t5)){
t6=t3;
f_12787(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[5],lf[361]);
if(C_truep(t6)){
t7=t3;
f_12787(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[5],lf[362]);
t8=t3;
f_12787(t8,(C_truep(t7)?t7:C_eqp(((C_word*)t0)[5],lf[363])));}}}}}}

/* k12785 in k12759 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_12787(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_12787,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_assq(t2,((C_word*)t0)[3]);
t4=C_slot(t3,C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12793,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1048: chicken.base#open-output-string */
t7=*((C_word*)lf[60]+1);{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[6],lf[322]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12830,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t2)){
t4=t3;
f_12830(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[6],lf[354]);
if(C_truep(t4)){
t5=t3;
f_12830(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[6],lf[355]);
if(C_truep(t5)){
t6=t3;
f_12830(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[6],lf[356]);
if(C_truep(t6)){
t7=t3;
f_12830(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[6],lf[357]);
t8=t3;
f_12830(t8,(C_truep(t7)?t7:C_eqp(((C_word*)t0)[6],lf[358])));}}}}}}

/* k12791 in k12785 in k12759 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in ... */
static void C_ccall f_12793(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12793,2,av);}
a=C_alloc(7);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_fix(2),C_SCHEME_TRUE,lf[58]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12799,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* support.scm:1048: ##sys#print */
t6=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[321];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12797 in k12791 in k12785 in k12759 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in ... */
static void C_ccall f_12799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_12799,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12802,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:1048: ##sys#print */
t3=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k12800 in k12797 in k12791 in k12785 in k12759 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in ... */
static void C_ccall f_12802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_12802,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12805,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1048: ##sys#print */
t3=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[320];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k12803 in k12800 in k12797 in k12791 in k12785 in k12759 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in ... */
static void C_ccall f_12805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12805,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1048: chicken.base#get-output-string */
t3=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12806 in k12803 in k12800 in k12797 in k12791 in k12785 in k12759 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in ... */
static void C_ccall f_12808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_12808,2,av);}
a=C_alloc(18);
if(C_truep(*((C_word*)lf[10]+1))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_a_i_list(&a,3,lf[318],t1,lf[302]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[319],((C_word*)t0)[2],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12828 in k12785 in k12759 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in ... */
static void C_fcall f_12830(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_12830,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_i_assq(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_slot(t2,C_fix(1));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12836,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1056: chicken.base#open-output-string */
t6=*((C_word*)lf[60]+1);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[6],lf[326]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12874,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_12874(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[6],lf[352]);
t5=t3;
f_12874(t5,(C_truep(t4)?t4:C_eqp(((C_word*)t0)[6],lf[353])));}}}

/* k12834 in k12828 in k12785 in k12759 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in ... */
static void C_ccall f_12836(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12836,2,av);}
a=C_alloc(7);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_fix(2),C_SCHEME_TRUE,lf[58]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12842,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* support.scm:1056: ##sys#print */
t6=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[325];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12840 in k12834 in k12828 in k12785 in k12759 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in ... */
static void C_ccall f_12842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_12842,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12845,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:1056: ##sys#print */
t3=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k12843 in k12840 in k12834 in k12828 in k12785 in k12759 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in ... */
static void C_ccall f_12845(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_12845,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12848,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1056: ##sys#print */
t3=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[324];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k12846 in k12843 in k12840 in k12834 in k12828 in k12785 in k12759 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in ... */
static void C_ccall f_12848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12848,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12851,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1056: chicken.base#get-output-string */
t3=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12849 in k12846 in k12843 in k12840 in k12834 in k12828 in k12785 in k12759 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in ... */
static void C_ccall f_12851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_12851,2,av);}
a=C_alloc(18);
if(C_truep(*((C_word*)lf[10]+1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_a_i_list(&a,3,lf[318],t1,lf[302]);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[323],((C_word*)t0)[3],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12872 in k12828 in k12785 in k12759 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in ... */
static void C_fcall f_12874(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_12874,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12877,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1062: chicken.base#gensym */
t3=*((C_word*)lf[106]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[328]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,lf[327],((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_eqp(((C_word*)t0)[4],lf[329]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12918,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;
f_12918(t5,t3);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[349]);
if(C_truep(t5)){
t6=t4;
f_12918(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[350]);
t7=t4;
f_12918(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[4],lf[351])));}}}}}

/* k12875 in k12872 in k12828 in k12785 in k12759 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in ... */
static void C_ccall f_12877(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(42,c,1)))){
C_save_and_reclaim((void *)f_12877,2,av);}
a=C_alloc(42);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[327],t1);
t5=C_a_i_list(&a,2,lf[94],C_SCHEME_FALSE);
t6=C_a_i_list(&a,4,lf[167],t1,t4,t5);
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_list(&a,3,lf[105],t3,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k12916 in k12872 in k12828 in k12785 in k12759 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in ... */
static void C_fcall f_12918(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_12918,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12921,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1070: chicken.base#gensym */
t3=*((C_word*)lf[106]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[332]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12963,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_12963(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[347]);
t5=t3;
f_12963(t5,(C_truep(t4)?t4:C_eqp(((C_word*)t0)[4],lf[348])));}}}

/* k12919 in k12916 in k12872 in k12828 in k12785 in k12759 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in ... */
static void C_ccall f_12921(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,2)))){
C_save_and_reclaim((void *)f_12921,2,av);}
a=C_alloc(26);
t2=t1;
t3=C_a_i_list(&a,2,t2,((C_word*)t0)[2]);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12936,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[10]+1))){
t7=t6;
f_12936(t7,C_a_i_list(&a,2,lf[330],t2));}
else{
t7=C_a_i_list(&a,2,lf[331],t2);
t8=t6;
f_12936(t8,C_a_i_list(&a,2,lf[330],t7));}}

/* k12934 in k12919 in k12916 in k12872 in k12828 in k12785 in k12759 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in ... */
static void C_fcall f_12936(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,0,1)))){
C_save_and_reclaim_args((void *)trf_12936,2,t0,t1);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,lf[94],C_SCHEME_FALSE);
t3=C_a_i_list(&a,4,lf[167],((C_word*)t0)[2],t1,t2);
t4=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[105],((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k12961 in k12916 in k12872 in k12828 in k12785 in k12759 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in ... */
static void C_fcall f_12963(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,2)))){
C_save_and_reclaim_args((void *)trf_12963,2,t0,t1);}
a=C_alloc(18);
if(C_truep(t1)){
if(C_truep(*((C_word*)lf[10]+1))){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,lf[330],((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_a_i_list(&a,2,lf[331],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,lf[330],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[333]);
if(C_truep(t2)){
if(C_truep(*((C_word*)lf[10]+1))){
t3=C_a_i_list(&a,2,lf[334],((C_word*)t0)[3]);
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[330],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_a_i_list(&a,2,lf[334],((C_word*)t0)[3]);
t4=C_a_i_list(&a,2,lf[331],t3);
t5=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_list(&a,2,lf[330],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13006,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[6]))){
/* support.scm:1086: lookup-foreign-type */
t4=*((C_word*)lf[296]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_13006(2,av2);}}}}}

/* k13004 in k12961 in k12916 in k12872 in k12828 in k12785 in k12759 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in ... */
static void C_ccall f_13006(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_13006,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13010,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1086: g3117 */
t3=t2;
f_13010(t3,((C_word*)t0)[3],t1);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[4];
t3=C_u_i_car(t2);
t4=C_eqp(t3,lf[335]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13037,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t4)){
t6=t5;
f_13037(t6,t4);}
else{
t6=C_eqp(t3,lf[345]);
if(C_truep(t6)){
t7=t5;
f_13037(t7,t6);}
else{
t7=C_eqp(t3,lf[346]);
t8=t5;
f_13037(t8,(C_truep(t7)?t7:C_eqp(t3,lf[326])));}}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* g3117 in k13004 in k12961 in k12916 in k12872 in k12828 in k12785 in k12759 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in ... */
static void C_fcall f_13010(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_13010,3,t0,t1,t2);}
t3=C_i_vector_ref(t2,C_fix(0));
/* support.scm:1087: next */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k13035 in k13004 in k12961 in k12916 in k12872 in k12828 in k12785 in k12759 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in ... */
static void C_fcall f_13037(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,0,2)))){
C_save_and_reclaim_args((void *)trf_13037,2,t0,t1);}
a=C_alloc(18);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13040,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1091: chicken.base#gensym */
t3=*((C_word*)lf[106]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[336]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[337]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13075,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1097: chicken.base#gensym */
t5=*((C_word*)lf[106]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_eqp(((C_word*)t0)[4],lf[307]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13111,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1103: chicken.base#gensym */
t6=*((C_word*)lf[106]+1);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=C_eqp(((C_word*)t0)[4],lf[309]);
if(C_truep(t5)){
if(C_truep(*((C_word*)lf[10]+1))){
t6=((C_word*)t0)[2];
t7=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t6;
av2[1]=C_a_i_list(&a,2,lf[308],((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
t6=C_eqp(((C_word*)t0)[4],lf[340]);
if(C_truep(t6)){
t7=C_a_i_list(&a,2,lf[94],lf[338]);
t8=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t8;
av2[1]=C_a_i_list(&a,3,lf[339],((C_word*)t0)[2],t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t7=C_eqp(((C_word*)t0)[4],lf[341]);
if(C_truep(t7)){
t8=C_i_cadr(((C_word*)t0)[5]);
/* support.scm:1116: repeat */
t9=((C_word*)((C_word*)t0)[6])[1];
f_12556(t9,((C_word*)t0)[3],t8);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[342]);
if(C_truep(t8)){
if(C_truep(*((C_word*)lf[10]+1))){
t9=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t9;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=C_a_i_list(&a,3,lf[318],lf[343],lf[302]);
t10=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t10;
av2[1]=C_a_i_list(&a,3,lf[319],((C_word*)t0)[2],t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}
else{
t9=C_eqp(((C_word*)t0)[4],lf[344]);
if(C_truep(t9)){
t10=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t10;
av2[1]=(C_truep(t9)?C_a_i_list(&a,2,lf[327],((C_word*)t0)[2]):((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t10=C_eqp(((C_word*)t0)[4],lf[328]);
t11=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t11;
av2[1]=(C_truep(t10)?C_a_i_list(&a,2,lf[327],((C_word*)t0)[2]):((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}}}}}}}}

/* k13038 in k13035 in k13004 in k12961 in k12916 in k12872 in k12828 in k12785 in k12759 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in ... */
static void C_ccall f_13040(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(42,c,1)))){
C_save_and_reclaim((void *)f_13040,2,av);}
a=C_alloc(42);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[327],t1);
t5=C_a_i_list(&a,2,lf[94],C_SCHEME_FALSE);
t6=C_a_i_list(&a,4,lf[167],t1,t4,t5);
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_list(&a,3,lf[105],t3,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k13073 in k13035 in k13004 in k12961 in k12916 in k12872 in k12828 in k12785 in k12759 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in ... */
static void C_ccall f_13075(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(51,c,1)))){
C_save_and_reclaim((void *)f_13075,2,av);}
a=C_alloc(51);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[94],lf[338]);
t5=C_a_i_list(&a,3,lf[339],((C_word*)t0)[2],t4);
t6=C_a_i_list(&a,2,lf[94],C_SCHEME_FALSE);
t7=C_a_i_list(&a,4,lf[167],t1,t5,t6);
t8=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_list(&a,3,lf[105],t3,t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k13109 in k13035 in k13004 in k12961 in k12916 in k12872 in k12828 in k12785 in k12759 in k12717 in k12594 in k12579 in repeat in a12549 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in ... */
static void C_ccall f_13111(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(42,c,1)))){
C_save_and_reclaim((void *)f_13111,2,av);}
a=C_alloc(42);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=(C_truep(*((C_word*)lf[10]+1))?t1:C_a_i_list(&a,2,lf[308],t1));
t5=C_a_i_list(&a,2,lf[94],C_SCHEME_FALSE);
t6=C_a_i_list(&a,4,lf[167],t1,t4,t5);
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_list(&a,3,lf[105],t3,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* a13613 in chicken.compiler.support#foreign-type-check in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_13614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_13614,2,av);}
/* support.scm:1128: quit-compiling */
t2=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[389];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.compiler.support#foreign-type-convert-result in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_13620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_13620,4,av);}
a=C_alloc(4);
if(C_truep(C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13633,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1135: lookup-foreign-type */
t5=*((C_word*)lf[296]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=t2;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k13631 in chicken.compiler.support#foreign-type-convert-result in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_13633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_13633,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_vector_ref(t1,C_fix(2));
if(C_truep(t2)){
t3=C_a_i_list2(&a,2,t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=((C_word*)t0)[2];
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.compiler.support#foreign-type-convert-argument in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_13647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_13647,4,av);}
a=C_alloc(4);
if(C_truep(C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13660,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1142: lookup-foreign-type */
t5=*((C_word*)lf[296]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=t2;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k13658 in chicken.compiler.support#foreign-type-convert-argument in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_13660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_13660,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_vector_ref(t1,C_fix(1));
if(C_truep(t2)){
t3=C_a_i_list2(&a,2,t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=((C_word*)t0)[2];
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.compiler.support#final-foreign-type in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_13674(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_13674,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13680,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13707,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1148: follow-without-loop */
f_7313(t1,t2,t3,t4);}

/* a13679 in chicken.compiler.support#final-foreign-type in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_13680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_13680,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13684,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_symbolp(t2))){
/* support.scm:1151: lookup-foreign-type */
t5=*((C_word*)lf[296]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_13684(2,av2);}}}

/* k13682 in a13679 in chicken.compiler.support#final-foreign-type in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_13684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_13684,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13688,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1151: g3204 */
t3=t2;
f_13688(t3,((C_word*)t0)[3],t1);}
else{
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g3204 in k13682 in a13679 in chicken.compiler.support#final-foreign-type in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_13688(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_13688,3,t0,t1,t2);}
t3=C_i_vector_ref(t2,C_fix(0));
/* support.scm:1152: next */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a13706 in chicken.compiler.support#final-foreign-type in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_13707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_13707,2,av);}
/* support.scm:1154: quit-compiling */
t2=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[393];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.compiler.support#estimate-foreign-result-size in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_13713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_13713,3,av);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13716,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13725,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14182,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1162: follow-without-loop */
f_7313(t1,t2,t4,t5);}

/* err in chicken.compiler.support#estimate-foreign-result-size in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_13716(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_13716,2,t0,t1);}
/* support.scm:1161: quit-compiling */
t2=*((C_word*)lf[37]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[395];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a13724 in chicken.compiler.support#estimate-foreign-result-size in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_13725(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_13725,4,av);}
a=C_alloc(7);
t4=t2;
t5=C_eqp(t4,lf[299]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13735,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t5)){
t7=t6;
f_13735(t7,t5);}
else{
t7=C_eqp(t4,lf[302]);
if(C_truep(t7)){
t8=t6;
f_13735(t8,t7);}
else{
t8=C_eqp(t4,lf[361]);
if(C_truep(t8)){
t9=t6;
f_13735(t9,t8);}
else{
t9=C_eqp(t4,lf[396]);
if(C_truep(t9)){
t10=t6;
f_13735(t10,t9);}
else{
t10=C_eqp(t4,lf[397]);
if(C_truep(t10)){
t11=t6;
f_13735(t11,t10);}
else{
t11=C_eqp(t4,lf[322]);
if(C_truep(t11)){
t12=t6;
f_13735(t12,t11);}
else{
t12=C_eqp(t4,lf[398]);
if(C_truep(t12)){
t13=t6;
f_13735(t13,t12);}
else{
t13=C_eqp(t4,lf[300]);
if(C_truep(t13)){
t14=t6;
f_13735(t14,t13);}
else{
t14=C_eqp(t4,lf[384]);
if(C_truep(t14)){
t15=t6;
f_13735(t15,t14);}
else{
t15=C_eqp(t4,lf[385]);
if(C_truep(t15)){
t16=t6;
f_13735(t16,t15);}
else{
t16=C_eqp(t4,lf[386]);
if(C_truep(t16)){
t17=t6;
f_13735(t17,t16);}
else{
t17=C_eqp(t4,lf[387]);
t18=t6;
f_13735(t18,(C_truep(t17)?t17:C_eqp(t4,lf[388])));}}}}}}}}}}}}

/* k13733 in a13724 in chicken.compiler.support#estimate-foreign-result-size in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_13735(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_13735,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[329]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13744,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_13744(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[332]);
if(C_truep(t4)){
t5=t3;
f_13744(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[326]);
if(C_truep(t5)){
t6=t3;
f_13744(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[328]);
if(C_truep(t6)){
t7=t3;
f_13744(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[3],lf[333]);
if(C_truep(t7)){
t8=t3;
f_13744(t8,t7);}
else{
t8=C_eqp(((C_word*)t0)[3],lf[349]);
if(C_truep(t8)){
t9=t3;
f_13744(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[3],lf[347]);
if(C_truep(t9)){
t10=t3;
f_13744(t10,t9);}
else{
t10=C_eqp(((C_word*)t0)[3],lf[350]);
if(C_truep(t10)){
t11=t3;
f_13744(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[3],lf[351]);
if(C_truep(t11)){
t12=t3;
f_13744(t12,t11);}
else{
t12=C_eqp(((C_word*)t0)[3],lf[348]);
if(C_truep(t12)){
t13=t3;
f_13744(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[3],lf[352]);
t14=t3;
f_13744(t14,(C_truep(t13)?t13:C_eqp(((C_word*)t0)[3],lf[353])));}}}}}}}}}}}}

/* k13742 in k13733 in a13724 in chicken.compiler.support#estimate-foreign-result-size in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_13744(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_13744,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
/* support.scm:1172: words->bytes */
t2=*((C_word*)lf[77]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(3);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[355]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13756,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_13756(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[362]);
if(C_truep(t4)){
t5=t3;
f_13756(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[360]);
if(C_truep(t5)){
t6=t3;
f_13756(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[354]);
if(C_truep(t6)){
t7=t3;
f_13756(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[3],lf[317]);
t8=t3;
f_13756(t8,(C_truep(t7)?t7:C_eqp(((C_word*)t0)[3],lf[357])));}}}}}}

/* k13754 in k13742 in k13733 in a13724 in chicken.compiler.support#estimate-foreign-result-size in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_13756(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_13756,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
/* support.scm:1174: words->bytes */
t2=*((C_word*)lf[77]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(6);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[304]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13768,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_13768(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[382]);
t5=t3;
f_13768(t5,(C_truep(t4)?t4:C_eqp(((C_word*)t0)[3],lf[383])));}}}

/* k13766 in k13754 in k13742 in k13733 in a13724 in chicken.compiler.support#estimate-foreign-result-size in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_13768(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_13768,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
/* support.scm:1176: words->bytes */
t2=*((C_word*)lf[77]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(4);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[359]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13780,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_13780(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[358]);
if(C_truep(t4)){
t5=t3;
f_13780(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[356]);
t6=t3;
f_13780(t6,(C_truep(t5)?t5:C_eqp(((C_word*)t0)[3],lf[363])));}}}}

/* k13778 in k13766 in k13754 in k13742 in k13733 in a13724 in chicken.compiler.support#estimate-foreign-result-size in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_13780(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_13780,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
/* support.scm:1178: words->bytes */
t2=*((C_word*)lf[77]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(7);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13786,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[4]))){
/* support.scm:1180: lookup-foreign-type */
t3=*((C_word*)lf[296]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_13786(2,av2);}}}}

/* k13784 in k13778 in k13766 in k13754 in k13742 in k13733 in a13724 in chicken.compiler.support#estimate-foreign-result-size in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_13786(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_13786,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13790,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1180: g3325 */
t3=t2;
f_13790(t3,((C_word*)t0)[3],t1);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[4];
t3=C_u_i_car(t2);
t4=C_eqp(t3,lf[335]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13817,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t4)){
t6=t5;
f_13817(t6,t4);}
else{
t6=C_eqp(t3,lf[344]);
if(C_truep(t6)){
t7=t5;
f_13817(t7,t6);}
else{
t7=C_eqp(t3,lf[345]);
if(C_truep(t7)){
t8=t5;
f_13817(t8,t7);}
else{
t8=C_eqp(t3,lf[326]);
if(C_truep(t8)){
t9=t5;
f_13817(t9,t8);}
else{
t9=C_eqp(t3,lf[328]);
if(C_truep(t9)){
t10=t5;
f_13817(t10,t9);}
else{
t10=C_eqp(t3,lf[346]);
if(C_truep(t10)){
t11=t5;
f_13817(t11,t10);}
else{
t11=C_eqp(t3,lf[336]);
if(C_truep(t11)){
t12=t5;
f_13817(t12,t11);}
else{
t12=C_eqp(t3,lf[337]);
t13=t5;
f_13817(t13,(C_truep(t12)?t12:C_eqp(t3,lf[340])));}}}}}}}}
else{
/* support.scm:1189: err */
t2=((C_word*)t0)[5];
f_13716(t2,((C_word*)t0)[3]);}}}

/* g3325 in k13784 in k13778 in k13766 in k13754 in k13742 in k13733 in a13724 in chicken.compiler.support#estimate-foreign-result-size in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in ... */
static void C_fcall f_13790(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_13790,3,t0,t1,t2);}
t3=C_i_vector_ref(t2,C_fix(0));
/* support.scm:1181: next */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k13815 in k13784 in k13778 in k13766 in k13754 in k13742 in k13733 in a13724 in chicken.compiler.support#estimate-foreign-result-size in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in ... */
static void C_fcall f_13817(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_13817,2,t0,t1);}
if(C_truep(t1)){
/* support.scm:1185: words->bytes */
t2=*((C_word*)lf[77]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(3);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[341]);
if(C_truep(t2)){
t3=C_i_cadr(((C_word*)t0)[4]);
/* support.scm:1186: next */
t4=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=C_eqp(((C_word*)t0)[3],lf[342]);
if(C_truep(t3)){
/* support.scm:1187: words->bytes */
t4=*((C_word*)lf[77]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(6);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* support.scm:1188: err */
t4=((C_word*)t0)[6];
f_13716(t4,((C_word*)t0)[2]);}}}}

/* a14181 in chicken.compiler.support#estimate-foreign-result-size in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_14182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_14182,2,av);}
/* support.scm:1190: quit-compiling */
t2=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[399];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.compiler.support#estimate-foreign-result-location-size in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_14188(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_14188,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14200,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14632,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1195: follow-without-loop */
f_7313(t1,t2,t3,t4);}

/* a14199 in chicken.compiler.support#estimate-foreign-result-location-size in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_14200(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_14200,4,av);}
a=C_alloc(6);
t4=t2;
t5=C_eqp(t4,lf[299]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14210,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_14210(t7,t5);}
else{
t7=C_eqp(t4,lf[302]);
if(C_truep(t7)){
t8=t6;
f_14210(t8,t7);}
else{
t8=C_eqp(t4,lf[361]);
if(C_truep(t8)){
t9=t6;
f_14210(t9,t8);}
else{
t9=C_eqp(t4,lf[396]);
if(C_truep(t9)){
t10=t6;
f_14210(t10,t9);}
else{
t10=C_eqp(t4,lf[322]);
if(C_truep(t10)){
t11=t6;
f_14210(t11,t10);}
else{
t11=C_eqp(t4,lf[300]);
if(C_truep(t11)){
t12=t6;
f_14210(t12,t11);}
else{
t12=C_eqp(t4,lf[384]);
if(C_truep(t12)){
t13=t6;
f_14210(t13,t12);}
else{
t13=C_eqp(t4,lf[362]);
if(C_truep(t13)){
t14=t6;
f_14210(t14,t13);}
else{
t14=C_eqp(t4,lf[354]);
if(C_truep(t14)){
t15=t6;
f_14210(t15,t14);}
else{
t15=C_eqp(t4,lf[385]);
if(C_truep(t15)){
t16=t6;
f_14210(t16,t15);}
else{
t16=C_eqp(t4,lf[386]);
if(C_truep(t16)){
t17=t6;
f_14210(t17,t16);}
else{
t17=C_eqp(t4,lf[326]);
if(C_truep(t17)){
t18=t6;
f_14210(t18,t17);}
else{
t18=C_eqp(t4,lf[328]);
if(C_truep(t18)){
t19=t6;
f_14210(t19,t18);}
else{
t19=C_eqp(t4,lf[355]);
if(C_truep(t19)){
t20=t6;
f_14210(t20,t19);}
else{
t20=C_eqp(t4,lf[360]);
if(C_truep(t20)){
t21=t6;
f_14210(t21,t20);}
else{
t21=C_eqp(t4,lf[304]);
if(C_truep(t21)){
t22=t6;
f_14210(t22,t21);}
else{
t22=C_eqp(t4,lf[329]);
if(C_truep(t22)){
t23=t6;
f_14210(t23,t22);}
else{
t23=C_eqp(t4,lf[333]);
if(C_truep(t23)){
t24=t6;
f_14210(t24,t23);}
else{
t24=C_eqp(t4,lf[307]);
if(C_truep(t24)){
t25=t6;
f_14210(t25,t24);}
else{
t25=C_eqp(t4,lf[309]);
if(C_truep(t25)){
t26=t6;
f_14210(t26,t25);}
else{
t26=C_eqp(t4,lf[387]);
if(C_truep(t26)){
t27=t6;
f_14210(t27,t26);}
else{
t27=C_eqp(t4,lf[388]);
if(C_truep(t27)){
t28=t6;
f_14210(t28,t27);}
else{
t28=C_eqp(t4,lf[317]);
if(C_truep(t28)){
t29=t6;
f_14210(t29,t28);}
else{
t29=C_eqp(t4,lf[357]);
if(C_truep(t29)){
t30=t6;
f_14210(t30,t29);}
else{
t30=C_eqp(t4,lf[350]);
if(C_truep(t30)){
t31=t6;
f_14210(t31,t30);}
else{
t31=C_eqp(t4,lf[351]);
if(C_truep(t31)){
t32=t6;
f_14210(t32,t31);}
else{
t32=C_eqp(t4,lf[348]);
if(C_truep(t32)){
t33=t6;
f_14210(t33,t32);}
else{
t33=C_eqp(t4,lf[332]);
if(C_truep(t33)){
t34=t6;
f_14210(t34,t33);}
else{
t34=C_eqp(t4,lf[349]);
if(C_truep(t34)){
t35=t6;
f_14210(t35,t34);}
else{
t35=C_eqp(t4,lf[347]);
if(C_truep(t35)){
t36=t6;
f_14210(t36,t35);}
else{
t36=C_eqp(t4,lf[352]);
t37=t6;
f_14210(t37,(C_truep(t36)?t36:C_eqp(t4,lf[353])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k14208 in a14199 in chicken.compiler.support#estimate-foreign-result-location-size in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_14210(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_14210,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
/* support.scm:1204: words->bytes */
t2=*((C_word*)lf[77]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[382]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14222,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_14222(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[359]);
if(C_truep(t4)){
t5=t3;
f_14222(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[358]);
if(C_truep(t5)){
t6=t3;
f_14222(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[356]);
t7=t3;
f_14222(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[3],lf[363])));}}}}}

/* k14220 in k14208 in a14199 in chicken.compiler.support#estimate-foreign-result-location-size in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_14222(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_14222,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
/* support.scm:1206: words->bytes */
t2=*((C_word*)lf[77]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(2);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14228,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[4]))){
/* support.scm:1208: lookup-foreign-type */
t3=*((C_word*)lf[296]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_14228(2,av2);}}}}

/* k14226 in k14220 in k14208 in a14199 in chicken.compiler.support#estimate-foreign-result-location-size in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_14228(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_14228,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14232,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1208: g3483 */
t3=t2;
f_14232(t3,((C_word*)t0)[3],t1);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[4];
t3=C_u_i_car(t2);
t4=C_eqp(t3,lf[335]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14259,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_14259(t6,t4);}
else{
t6=C_eqp(t3,lf[344]);
if(C_truep(t6)){
t7=t5;
f_14259(t7,t6);}
else{
t7=C_eqp(t3,lf[345]);
if(C_truep(t7)){
t8=t5;
f_14259(t8,t7);}
else{
t8=C_eqp(t3,lf[326]);
if(C_truep(t8)){
t9=t5;
f_14259(t9,t8);}
else{
t9=C_eqp(t3,lf[328]);
if(C_truep(t9)){
t10=t5;
f_14259(t10,t9);}
else{
t10=C_eqp(t3,lf[346]);
if(C_truep(t10)){
t11=t5;
f_14259(t11,t10);}
else{
t11=C_eqp(t3,lf[307]);
if(C_truep(t11)){
t12=t5;
f_14259(t12,t11);}
else{
t12=C_eqp(t3,lf[309]);
t13=t5;
f_14259(t13,(C_truep(t12)?t12:C_eqp(t3,lf[342])));}}}}}}}}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[4];
/* support.scm:1194: quit-compiling */
t4=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[401];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}}

/* g3483 in k14226 in k14220 in k14208 in a14199 in chicken.compiler.support#estimate-foreign-result-location-size in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_14232(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_14232,3,t0,t1,t2);}
t3=C_i_vector_ref(t2,C_fix(0));
/* support.scm:1209: next */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k14257 in k14226 in k14220 in k14208 in a14199 in chicken.compiler.support#estimate-foreign-result-location-size in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_14259(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_14259,2,t0,t1);}
if(C_truep(t1)){
/* support.scm:1214: words->bytes */
t2=*((C_word*)lf[77]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[341]);
if(C_truep(t2)){
t3=C_i_cadr(((C_word*)t0)[4]);
/* support.scm:1215: next */
t4=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[4];
/* support.scm:1194: quit-compiling */
t5=*((C_word*)lf[37]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[401];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}}

/* a14631 in chicken.compiler.support#estimate-foreign-result-location-size in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_14632(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_14632,2,av);}
/* support.scm:1218: quit-compiling */
t2=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[402];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.compiler.support#finish-foreign-result in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_14638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_14638,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14642,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1224: chicken.syntax#strip-syntax */
t5=*((C_word*)lf[416]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k14640 in chicken.compiler.support#finish-foreign-result in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_14642(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_14642,2,av);}
a=C_alloc(21);
t2=t1;
t3=C_eqp(t2,lf[329]);
t4=(C_truep(t3)?t3:C_eqp(t2,lf[350]));
if(C_truep(t4)){
t5=C_a_i_list(&a,2,lf[94],C_fix(0));
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[404],((C_word*)t0)[3],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=C_eqp(t2,lf[332]);
if(C_truep(t5)){
t6=C_a_i_list(&a,2,lf[94],C_fix(0));
t7=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_list(&a,3,lf[405],((C_word*)t0)[3],t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=C_eqp(t2,lf[349]);
t7=(C_truep(t6)?t6:C_eqp(t2,lf[351]));
if(C_truep(t7)){
t8=C_a_i_list(&a,2,lf[94],C_fix(0));
t9=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_a_i_list(&a,3,lf[406],((C_word*)t0)[3],t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t8=C_eqp(t2,lf[347]);
t9=(C_truep(t8)?t8:C_eqp(t2,lf[348]));
if(C_truep(t9)){
t10=C_a_i_list(&a,2,lf[94],C_fix(0));
t11=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_a_i_list(&a,3,lf[407],((C_word*)t0)[3],t10);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t10=C_eqp(t2,lf[333]);
if(C_truep(t10)){
t11=C_a_i_list(&a,2,lf[94],C_fix(0));
t12=C_a_i_list(&a,3,lf[404],((C_word*)t0)[3],t11);
t13=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t13;
av2[1]=C_a_i_list(&a,2,lf[408],t12);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t11=C_eqp(t2,lf[352]);
if(C_truep(t11)){
t12=C_a_i_list(&a,2,lf[94],C_SCHEME_FALSE);
t13=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t13;
av2[1]=C_a_i_list(&a,3,lf[409],((C_word*)t0)[3],t12);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t12=C_eqp(t2,lf[353]);
if(C_truep(t12)){
t13=C_a_i_list(&a,2,lf[94],C_SCHEME_FALSE);
t14=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t14;
av2[1]=C_a_i_list(&a,3,lf[410],((C_word*)t0)[3],t13);
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
if(C_truep(C_i_listp(t2))){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14758,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t14=C_i_car(t2);
t15=C_eqp(t14,lf[341]);
if(C_truep(t15)){
t16=C_i_length(t2);
t17=C_eqp(C_fix(2),t16);
if(C_truep(t17)){
t18=C_i_cadr(t2);
t19=C_u_i_memq(t18,lf[415]);
t20=t13;
f_14758(t20,t19);}
else{
t18=t13;
f_14758(t18,C_SCHEME_FALSE);}}
else{
t16=t13;
f_14758(t16,C_SCHEME_FALSE);}}
else{
t13=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t13;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}}}}}}}}}

/* k14756 in k14640 in chicken.compiler.support#finish-foreign-result in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_14758(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,0,3)))){
C_save_and_reclaim_args((void *)trf_14758,2,t0,t1);}
a=C_alloc(18);
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
/* support.scm:1241: finish-foreign-result */
t3=*((C_word*)lf[403]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=C_i_length(((C_word*)t0)[2]);
t3=C_eqp(C_fix(3),t2);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[2]);
t5=C_eqp(t4,lf[336]);
t6=(C_truep(t5)?t5:C_eqp(t4,lf[337]));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14786,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1245: chicken.base#gensym */
t8=*((C_word*)lf[106]+1);{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t7=C_eqp(t4,lf[340]);
if(C_truep(t7)){
t8=C_i_caddr(((C_word*)t0)[2]);
t9=C_a_i_list(&a,2,lf[94],lf[338]);
t10=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t10;
av2[1]=C_a_i_list(&a,4,lf[413],t8,t9,((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t8=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t8;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}}
else{
t4=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* k14784 in k14756 in k14640 in chicken.compiler.support#finish-foreign-result in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_14786(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(60,c,1)))){
C_save_and_reclaim((void *)f_14786,2,av);}
a=C_alloc(60);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[411],t1);
t5=C_a_i_list(&a,2,lf[412],t4);
t6=C_i_caddr(((C_word*)t0)[3]);
t7=C_a_i_list(&a,2,lf[94],lf[338]);
t8=C_a_i_list(&a,4,lf[413],t6,t7,t1);
t9=C_a_i_list(&a,4,lf[414],t1,t5,t8);
t10=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_a_i_list(&a,3,lf[105],t3,t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}

/* chicken.compiler.support#foreign-type->scrutiny-type in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_14906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_14906,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14910,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1261: final-foreign-type */
t5=*((C_word*)lf[392]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k14908 in chicken.compiler.support#foreign-type->scrutiny-type in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_14910(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_14910,2,av);}
a=C_alloc(7);
t2=t1;
t3=t2;
t4=C_eqp(t3,lf[397]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=lf[418];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eqp(t3,lf[299]);
t6=(C_truep(t5)?t5:C_eqp(t3,lf[300]));
if(C_truep(t6)){
t7=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t7;
av2[1]=lf[299];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_eqp(t3,lf[302]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_14934,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t7)){
t9=t8;
f_14934(t9,t7);}
else{
t9=C_eqp(t3,lf[384]);
if(C_truep(t9)){
t10=t8;
f_14934(t10,t9);}
else{
t10=C_eqp(t3,lf[361]);
if(C_truep(t10)){
t11=t8;
f_14934(t11,t10);}
else{
t11=C_eqp(t3,lf[322]);
if(C_truep(t11)){
t12=t8;
f_14934(t12,t11);}
else{
t12=C_eqp(t3,lf[385]);
if(C_truep(t12)){
t13=t8;
f_14934(t13,t12);}
else{
t13=C_eqp(t3,lf[386]);
if(C_truep(t13)){
t14=t8;
f_14934(t14,t13);}
else{
t14=C_eqp(t3,lf[387]);
t15=t8;
f_14934(t15,(C_truep(t14)?t14:C_eqp(t3,lf[388])));}}}}}}}}}

/* k14932 in k14908 in chicken.compiler.support#foreign-type->scrutiny-type in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_14934(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_14934,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=lf[173];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[304]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[3],lf[382]));
if(C_truep(t3)){
t4=((C_word*)t0)[4];
t5=C_eqp(t4,lf[419]);
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=(C_truep(t5)?lf[383]:lf[304]);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t4=C_eqp(((C_word*)t0)[3],lf[307]);
t5=(C_truep(t4)?t4:C_eqp(((C_word*)t0)[3],lf[309]));
if(C_truep(t5)){
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=lf[179];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(((C_word*)t0)[3],lf[306]);
if(C_truep(t6)){
t7=((C_word*)t0)[4];
t8=C_eqp(t7,lf[419]);
t9=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t9;
av2[1]=(C_truep(t8)?lf[420]:lf[306]);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t7=C_eqp(((C_word*)t0)[3],lf[310]);
if(C_truep(t7)){
t8=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t8;
av2[1]=lf[306];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_eqp(((C_word*)t0)[3],lf[311]);
if(C_truep(t8)){
t9=((C_word*)t0)[4];
t10=C_eqp(t9,lf[419]);
t11=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t11;
av2[1]=(C_truep(t10)?lf[421]:lf[311]);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t9=C_eqp(((C_word*)t0)[3],lf[313]);
if(C_truep(t9)){
t10=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t10;
av2[1]=lf[311];
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t10=C_eqp(((C_word*)t0)[3],lf[314]);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_15009,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t10)){
t12=t11;
f_15009(t12,t10);}
else{
t12=C_eqp(((C_word*)t0)[3],lf[373]);
if(C_truep(t12)){
t13=t11;
f_15009(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[3],lf[374]);
if(C_truep(t13)){
t14=t11;
f_15009(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[3],lf[375]);
if(C_truep(t14)){
t15=t11;
f_15009(t15,t14);}
else{
t15=C_eqp(((C_word*)t0)[3],lf[376]);
if(C_truep(t15)){
t16=t11;
f_15009(t16,t15);}
else{
t16=C_eqp(((C_word*)t0)[3],lf[377]);
if(C_truep(t16)){
t17=t11;
f_15009(t17,t16);}
else{
t17=C_eqp(((C_word*)t0)[3],lf[378]);
if(C_truep(t17)){
t18=t11;
f_15009(t18,t17);}
else{
t18=C_eqp(((C_word*)t0)[3],lf[379]);
if(C_truep(t18)){
t19=t11;
f_15009(t19,t18);}
else{
t19=C_eqp(((C_word*)t0)[3],lf[380]);
t20=t11;
f_15009(t20,(C_truep(t19)?t19:C_eqp(((C_word*)t0)[3],lf[381])));}}}}}}}}}}}}}}}}

/* k15007 in k14932 in k14908 in chicken.compiler.support#foreign-type->scrutiny-type in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_15009(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_15009,2,t0,t1);}
a=C_alloc(15);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_eqp(t2,lf[419]);
if(C_truep(t3)){
t4=C_a_i_list(&a,2,lf[422],((C_word*)t0)[3]);
t5=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[423],lf[424],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[422],((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t2=C_eqp(((C_word*)t0)[5],lf[315]);
if(C_truep(t2)){
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[425];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_eqp(((C_word*)t0)[5],lf[365]);
if(C_truep(t3)){
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[426];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(((C_word*)t0)[5],lf[364]);
if(C_truep(t4)){
t5=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t5;
av2[1]=lf[427];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eqp(((C_word*)t0)[5],lf[366]);
if(C_truep(t5)){
t6=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t6;
av2[1]=lf[428];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(((C_word*)t0)[5],lf[367]);
if(C_truep(t6)){
t7=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t7;
av2[1]=lf[429];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_eqp(((C_word*)t0)[5],lf[368]);
if(C_truep(t7)){
t8=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t8;
av2[1]=lf[430];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_eqp(((C_word*)t0)[5],lf[369]);
if(C_truep(t8)){
t9=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t9;
av2[1]=lf[431];
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=C_eqp(((C_word*)t0)[5],lf[370]);
if(C_truep(t9)){
t10=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t10;
av2[1]=lf[432];
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t10=C_eqp(((C_word*)t0)[5],lf[371]);
if(C_truep(t10)){
t11=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t11;
av2[1]=lf[433];
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t11=C_eqp(((C_word*)t0)[5],lf[372]);
if(C_truep(t11)){
t12=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t12;
av2[1]=lf[434];
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t12=C_eqp(((C_word*)t0)[5],lf[360]);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15096,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t12)){
t14=t13;
f_15096(t14,t12);}
else{
t14=C_eqp(((C_word*)t0)[5],lf[362]);
if(C_truep(t14)){
t15=t13;
f_15096(t15,t14);}
else{
t15=C_eqp(((C_word*)t0)[5],lf[356]);
if(C_truep(t15)){
t16=t13;
f_15096(t16,t15);}
else{
t16=C_eqp(((C_word*)t0)[5],lf[363]);
if(C_truep(t16)){
t17=t13;
f_15096(t17,t16);}
else{
t17=C_eqp(((C_word*)t0)[5],lf[317]);
if(C_truep(t17)){
t18=t13;
f_15096(t18,t17);}
else{
t18=C_eqp(((C_word*)t0)[5],lf[357]);
if(C_truep(t18)){
t19=t13;
f_15096(t19,t18);}
else{
t19=C_eqp(((C_word*)t0)[5],lf[359]);
if(C_truep(t19)){
t20=t13;
f_15096(t20,t19);}
else{
t20=C_eqp(((C_word*)t0)[5],lf[358]);
t21=t13;
f_15096(t21,(C_truep(t20)?t20:C_eqp(((C_word*)t0)[5],lf[354])));}}}}}}}}}}}}}}}}}}}

/* k15094 in k15007 in k14932 in k14908 in chicken.compiler.support#foreign-type->scrutiny-type in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_15096(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_15096,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=lf[360];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[326]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[435];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_eqp(((C_word*)t0)[3],lf[328]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[345];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(((C_word*)t0)[3],lf[329]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15117,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_15117(t6,t4);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[349]);
if(C_truep(t6)){
t7=t5;
f_15117(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[3],lf[350]);
t8=t5;
f_15117(t8,(C_truep(t7)?t7:C_eqp(((C_word*)t0)[3],lf[351])));}}}}}}

/* k15115 in k15094 in k15007 in k14932 in k14908 in chicken.compiler.support#foreign-type->scrutiny-type in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_15117(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_15117,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=lf[436];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[352]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[3],lf[353]));
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[437];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(((C_word*)t0)[3],lf[332]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15135,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_15135(t6,t4);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[347]);
t7=t5;
f_15135(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[3],lf[348])));}}}}

/* k15133 in k15115 in k15094 in k15007 in k14932 in k14908 in chicken.compiler.support#foreign-type->scrutiny-type in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_15135(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_15135,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=lf[438];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[333]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[333];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[4];
t4=C_u_i_car(t3);
t5=C_eqp(t4,lf[335]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15157,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_15157(t7,t5);}
else{
t7=C_eqp(t4,lf[345]);
if(C_truep(t7)){
t8=t6;
f_15157(t8,t7);}
else{
t8=C_eqp(t4,lf[346]);
t9=t6;
f_15157(t9,(C_truep(t8)?t8:C_eqp(t4,lf[326])));}}}
else{
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[179];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}}

/* k15155 in k15133 in k15115 in k15094 in k15007 in k14932 in k14908 in chicken.compiler.support#foreign-type->scrutiny-type in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_15157(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_15157,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=lf[439];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[341]);
if(C_truep(t2)){
t3=C_i_cadr(((C_word*)t0)[4]);
/* support.scm:1313: foreign-type->scrutiny-type */
t4=*((C_word*)lf[417]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=C_eqp(((C_word*)t0)[3],lf[342]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[360];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(((C_word*)t0)[3],lf[344]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t5;
av2[1]=(C_truep(t4)?lf[345]:lf[179]);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eqp(((C_word*)t0)[3],lf[328]);
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=(C_truep(t5)?lf[345]:lf[179]);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}}}}

/* chicken.compiler.support#scan-used-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15512(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_15512,4,av);}
a=C_alloc(13);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15516,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15518,a[2]=t8,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];{
C_word *av2=av;
av2[0]=t10;
av2[1]=t6;
av2[2]=t2;
f_15518(3,av2);}}

/* k15514 in chicken.compiler.support#scan-used-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_15516,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* walk in chicken.compiler.support#scan-used-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15518(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_15518,3,av);}
a=C_alloc(10);
t3=t2;
t4=C_slot(t3,C_fix(3));
t5=t4;
t6=t2;
t7=C_slot(t6,C_fix(1));
t8=C_eqp(t7,lf[163]);
t9=(C_truep(t8)?t8:C_eqp(t7,lf[133]));
if(C_truep(t9)){
t10=t2;
t11=C_slot(t10,C_fix(2));
t12=C_i_car(t11);
t13=t12;
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15550,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15582,a[2]=t13,a[3]=((C_word*)t0)[3],a[4]=t14,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_memq(t13,((C_word*)t0)[4]))){
t16=C_i_memq(t13,((C_word*)((C_word*)t0)[3])[1]);
t17=t15;
f_15582(t17,C_i_not(t16));}
else{
t16=t15;
f_15582(t16,C_SCHEME_FALSE);}}
else{
t10=C_eqp(t7,lf[94]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15614,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t10)){
t12=t11;
f_15614(t12,t10);}
else{
t12=C_eqp(t7,lf[168]);
t13=t11;
f_15614(t13,(C_truep(t12)?t12:C_eqp(t7,lf[180])));}}}

/* k15548 in walk in chicken.compiler.support#scan-used-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_15550(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_15550,2,t0,t1);}
a=C_alloc(6);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_i_check_list_2(((C_word*)t0)[3],lf[44]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15558,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_15558(t7,((C_word*)t0)[4],((C_word*)t0)[3]);}

/* for-each-loop3764 in k15548 in walk in chicken.compiler.support#scan-used-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_15558(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_15558,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15568,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:1331: g3765 */
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

/* k15566 in for-each-loop3764 in k15548 in walk in chicken.compiler.support#scan-used-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_15568,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_15558(t3,((C_word*)t0)[4],t2);}

/* k15580 in walk in chicken.compiler.support#scan-used-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_15582(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,1)))){
C_save_and_reclaim_args((void *)trf_15582,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];
f_15550(t4,t3);}
else{
t2=((C_word*)t0)[4];
f_15550(t2,C_SCHEME_UNDEFINED);}}

/* k15612 in walk in chicken.compiler.support#scan-used-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_15614(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_15614,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)((C_word*)t0)[3])[1];
t3=C_i_check_list_2(((C_word*)t0)[4],lf[44]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15622,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_15622(t7,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* for-each-loop3789 in k15612 in walk in chicken.compiler.support#scan-used-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_15622(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_15622,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15632,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:1333: g3790 */
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

/* k15630 in for-each-loop3789 in k15612 in walk in chicken.compiler.support#scan-used-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15632(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_15632,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_15622(t3,((C_word*)t0)[4],t2);}

/* chicken.compiler.support#scan-free-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15667(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_15667,4,av);}
a=C_alloc(23);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_15670,a[2]=t5,a[3]=t7,a[4]=t3,a[5]=t9,a[6]=t11,tmp=(C_word)a,a+=7,tmp));
t13=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15854,a[2]=t9,tmp=(C_word)a,a+=3,tmp));
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15892,a[2]=t1,a[3]=t5,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1371: walk */
t15=((C_word*)t9)[1];
f_15670(t15,t14,t2,C_SCHEME_END_OF_LIST);}

/* walk in chicken.compiler.support#scan-free-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_15670(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_15670,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=t2;
t5=C_slot(t4,C_fix(3));
t6=t5;
t7=t2;
t8=C_slot(t7,C_fix(2));
t9=t8;
t10=t2;
t11=C_slot(t10,C_fix(1));
t12=t11;
t13=C_eqp(t12,lf[94]);
t14=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_15704,a[2]=t1,a[3]=t12,a[4]=t9,a[5]=t3,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=t6,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t13)){
t15=t14;
f_15704(t15,t13);}
else{
t15=C_eqp(t12,lf[168]);
if(C_truep(t15)){
t16=t14;
f_15704(t16,t15);}
else{
t16=C_eqp(t12,lf[180]);
if(C_truep(t16)){
t17=t14;
f_15704(t17,t16);}
else{
t17=C_eqp(t12,lf[183]);
t18=t14;
f_15704(t18,(C_truep(t17)?t17:C_eqp(t12,lf[192])));}}}}

/* k15702 in walk in chicken.compiler.support#scan-free-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_15704(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,5)))){
C_save_and_reclaim_args((void *)trf_15704,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[163]);
if(C_truep(t2)){
t3=C_i_car(((C_word*)t0)[4]);
t4=t3;
if(C_truep(C_i_memq(t4,((C_word*)t0)[5]))){
t5=C_SCHEME_UNDEFINED;
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_15723,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[7],a[5]=t4,a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* support.scm:1351: lset-adjoin/eq? */
f_5979(t5,((C_word*)((C_word*)t0)[6])[1],C_a_i_list(&a,1,t4));}}
else{
t3=C_eqp(((C_word*)t0)[3],lf[133]);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[4]);
if(C_truep(C_i_memq(t4,((C_word*)t0)[5]))){
t5=C_i_car(((C_word*)t0)[9]);
/* support.scm:1357: walk */
t6=((C_word*)((C_word*)t0)[10])[1];
f_15670(t6,((C_word*)t0)[2],t5,((C_word*)t0)[5]);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_15759,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* support.scm:1356: lset-adjoin/eq? */
f_5979(t5,((C_word*)((C_word*)t0)[6])[1],C_a_i_list(&a,1,t4));}}
else{
t4=C_eqp(((C_word*)t0)[3],lf[105]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_15768,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=C_i_car(((C_word*)t0)[9]);
/* support.scm:1359: walk */
t7=((C_word*)((C_word*)t0)[10])[1];
f_15670(t7,t5,t6,((C_word*)t0)[5]);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[127]);
if(C_truep(t5)){
t6=C_i_caddr(((C_word*)t0)[4]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15798,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1362: ##sys#decompose-lambda-list */
t8=*((C_word*)lf[223]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=((C_word*)t0)[2];
av2[2]=t6;
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
/* support.scm:1366: walkeach */
t6=((C_word*)((C_word*)t0)[11])[1];
f_15854(t6,((C_word*)t0)[2],((C_word*)t0)[9],((C_word*)t0)[5]);}}}}}}

/* k15721 in k15702 in walk in chicken.compiler.support#scan-free-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_15723,2,av);}
a=C_alloc(5);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15729,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1352: variable-visible? */
t4=*((C_word*)lf[251]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k15727 in k15721 in k15702 in walk in chicken.compiler.support#scan-free-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_15729,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15733,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1353: lset-adjoin/eq? */
f_5979(t2,((C_word*)((C_word*)t0)[3])[1],C_a_i_list(&a,1,((C_word*)t0)[4]));}}

/* k15731 in k15727 in k15721 in k15702 in walk in chicken.compiler.support#scan-free-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_15733,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k15757 in k15702 in walk in chicken.compiler.support#scan-free-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15759(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_15759,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_i_car(((C_word*)t0)[3]);
/* support.scm:1357: walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_15670(t4,((C_word*)t0)[5],t3,((C_word*)t0)[6]);}

/* k15766 in k15702 in walk in chicken.compiler.support#scan-free-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15768(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_15768,2,av);}
a=C_alloc(5);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15779,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1360: scheme#append */
t5=*((C_word*)lf[67]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k15777 in k15766 in k15702 in walk in chicken.compiler.support#scan-free-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_15779,2,av);}
/* support.scm:1360: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_15670(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* a15797 in k15702 in walk in chicken.compiler.support#scan-free-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15798(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_15798,5,av);}
a=C_alloc(5);
t5=C_i_car(((C_word*)t0)[2]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15810,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1365: scheme#append */
t8=*((C_word*)lf[67]+1);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k15808 in a15797 in k15702 in walk in chicken.compiler.support#scan-free-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_15810,2,av);}
/* support.scm:1365: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_15670(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* walkeach in chicken.compiler.support#scan-free-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_15854(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_15854,4,t0,t1,t2,t3);}
a=C_alloc(10);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15856,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_check_list_2(t2,lf[44]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15868,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_15868(t9,t1,t2);}

/* g3857 in walkeach in chicken.compiler.support#scan-free-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_15856(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_15856,3,t0,t1,t2);}
/* support.scm:1369: walk */
t3=((C_word*)((C_word*)t0)[2])[1];
f_15670(t3,t1,t2,((C_word*)t0)[3]);}

/* for-each-loop3856 in walkeach in chicken.compiler.support#scan-free-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_15868(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_15868,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15878,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:1369: g3857 */
t5=((C_word*)t0)[3];
f_15856(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k15876 in for-each-loop3856 in walkeach in chicken.compiler.support#scan-free-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_15878,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_15868(t3,((C_word*)t0)[4],t2);}

/* k15890 in chicken.compiler.support#scan-free-variables in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_15892,2,av);}
/* support.scm:1372: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=((C_word*)((C_word*)t0)[4])[1];
C_values(4,av2);}}

/* chicken.compiler.support#chop-separator in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15897(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_15897,3,av);}
a=C_alloc(10);
t3=C_i_string_length(t2);
t4=C_a_i_fixnum_difference(&a,2,t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15908,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_integer_greaterp(t4,C_fix(0)))){
t6=C_i_string_ref(t2,t4);
t7=t5;
f_15908(t7,C_u_i_memq(t6,lf[444]));}
else{
t6=t5;
f_15908(t6,C_SCHEME_FALSE);}}

/* k15906 in chicken.compiler.support#chop-separator in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_15908(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_15908,2,t0,t1);}
if(C_truep(t1)){
/* support.scm:1381: scheme#substring */
t2=*((C_word*)lf[443]+1);{
C_word av2[5];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.compiler.support#make-block-variable-literal in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_15921,3,av);}
a=C_alloc(3);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_record2(&a,2,lf[446],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.compiler.support#block-variable-literal? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_15927,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[446]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.compiler.support#block-variable-literal-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_15933,3,av);}
t3=C_i_check_structure_2(t2,lf[446],lf[449]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.compiler.support#make-random-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_15942,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15950,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1397: chicken.base#open-output-string */
t4=*((C_word*)lf[60]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k15948 in chicken.compiler.support#make-random-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15950(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_15950,2,av);}
a=C_alloc(9);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_fix(2),C_SCHEME_TRUE,lf[58]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15956,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=((C_word*)t0)[3];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15977,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t6))){
/* support.scm:1398: chicken.base#gensym */
t8=*((C_word*)lf[106]+1);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_i_car(t6);
/* support.scm:1397: ##sys#print */
t9=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t5;
av2[2]=t8;
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}

/* k15954 in k15948 in chicken.compiler.support#make-random-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15956(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_15956,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15959,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1397: ##sys#write-char-0 */
t3=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(45);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k15957 in k15954 in k15948 in chicken.compiler.support#make-random-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15959(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_15959,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15962,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15973,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1399: chicken.time#current-seconds */
t4=*((C_word*)lf[450]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k15960 in k15957 in k15954 in k15948 in chicken.compiler.support#make-random-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_15962,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15965,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_random_fixnum(C_fix(1000));
/* support.scm:1397: ##sys#print */
t4=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k15963 in k15960 in k15957 in k15954 in k15948 in chicken.compiler.support#make-random-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_15965,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15968,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1397: chicken.base#get-output-string */
t3=*((C_word*)lf[59]+1);{
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

/* k15966 in k15963 in k15960 in k15957 in k15954 in k15948 in chicken.compiler.support#make-random-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_15968,2,av);}
/* support.scm:1396: scheme#string->symbol */
t2=*((C_word*)lf[62]+1);{
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

/* k15971 in k15957 in k15954 in k15948 in chicken.compiler.support#make-random-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_15973,2,av);}
/* support.scm:1397: ##sys#print */
t2=*((C_word*)lf[27]+1);{
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

/* k15975 in k15948 in chicken.compiler.support#make-random-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_15977,2,av);}
/* support.scm:1397: ##sys#print */
t2=*((C_word*)lf[27]+1);{
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

/* chicken.compiler.support#clear-real-name-table! in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15989(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_15989,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15994,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1415: scheme#make-vector */
t3=*((C_word*)lf[294]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(997);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k15992 in chicken.compiler.support#clear-real-name-table! in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_15994,2,av);}
t2=C_mutate(&lf[451] /* (set! chicken.compiler.support#real-name-table ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.compiler.support#set-real-name! in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_15996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_15996,4,av);}
/* support.scm:1418: chicken.internal#hash-table-set! */
t4=*((C_word*)lf[141]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[451];
av2[3]=t2;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* chicken.compiler.support#get-real-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_16002,3,av);}
/* support.scm:1423: chicken.internal#hash-table-ref */
t3=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[451];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* chicken.compiler.support#real-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,3)))){
C_save_and_reclaim((void*)f_16009,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+8);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16012,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_16028,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* support.scm:1435: resolve */
f_16012(t5,t2);}

/* resolve in chicken.compiler.support#real-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_16012(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_16012,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16016,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1430: chicken.internal#hash-table-ref */
t4=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[451];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k16014 in resolve in chicken.compiler.support#real-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_16016,2,av);}
a=C_alloc(4);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16022,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1432: chicken.internal#hash-table-ref */
t4=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[451];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k16020 in k16014 in resolve in chicken.compiler.support#real-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_16022,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?t1:((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k16026 in chicken.compiler.support#real-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16028(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_16028,2,av);}
a=C_alloc(6);
if(C_truep(C_i_not(t1))){
/* support.scm:1436: ##sys#symbol->qualified-string */
t2=*((C_word*)lf[189]+1);{
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
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[4];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_16123,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* support.scm:1439: ##sys#symbol->qualified-string */
t5=*((C_word*)lf[189]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* support.scm:1453: ##sys#symbol->qualified-string */
t2=*((C_word*)lf[189]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}}

/* k16053 in k16121 in k16026 in chicken.compiler.support#real-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_16055,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16057,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_16057(t5,((C_word*)t0)[4],((C_word*)t0)[5],C_fix(0),t1);}

/* loop in k16053 in k16121 in k16026 in chicken.compiler.support#real-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_16057(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_16057,5,t0,t1,t2,t3,t4);}
a=C_alloc(8);
t5=t3;
if(C_truep(C_i_greaterp(t5,C_fix(20)))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16070,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_a_i_cons(&a,2,lf[457],t2);
/* support.scm:1444: scheme#reverse */
t8=*((C_word*)lf[89]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
if(C_truep(t4)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_16080,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* support.scm:1446: resolve */
f_16012(t6,t4);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16119,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1452: scheme#reverse */
t7=*((C_word*)lf[89]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}}

/* k16068 in loop in k16053 in k16121 in k16026 in chicken.compiler.support#real-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_16070,2,av);}
/* support.scm:1444: chicken.string#string-intersperse */
t2=*((C_word*)lf[455]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[456];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k16078 in loop in k16053 in k16121 in k16026 in chicken.compiler.support#real-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_16080,2,av);}
a=C_alloc(8);
t2=C_eqp(t1,((C_word*)t0)[2]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16093,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1448: scheme#reverse */
t4=*((C_word*)lf[89]+1);{
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
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_16112,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* support.scm:1449: scheme#symbol->string */
t4=*((C_word*)lf[57]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k16091 in k16078 in loop in k16053 in k16121 in k16026 in chicken.compiler.support#real-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_16093,2,av);}
/* support.scm:1448: chicken.string#string-intersperse */
t2=*((C_word*)lf[455]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[458];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k16106 in k16110 in k16078 in loop in k16053 in k16121 in k16026 in chicken.compiler.support#real-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16108(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_16108,2,av);}
/* support.scm:1449: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_16057(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k16110 in k16078 in loop in k16053 in k16121 in k16026 in chicken.compiler.support#real-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16112(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_16112,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=t2;
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_16108,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* support.scm:1451: db-get */
t7=*((C_word*)lf[136]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
av2[4]=lf[459];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k16117 in loop in k16053 in k16121 in k16026 in chicken.compiler.support#real-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_16119,2,av);}
/* support.scm:1452: chicken.string#string-intersperse */
t2=*((C_word*)lf[455]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[460];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k16121 in k16026 in chicken.compiler.support#real-name in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_16123,2,av);}
a=C_alloc(9);
t2=C_a_i_list1(&a,1,t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_16055,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* support.scm:1441: db-get */
t5=*((C_word*)lf[136]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[459];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* chicken.compiler.support#real-name2 in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_16128,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16132,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1456: chicken.internal#hash-table-ref */
t5=*((C_word*)lf[137]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[451];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k16130 in chicken.compiler.support#real-name2 in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_16132,2,av);}
if(C_truep(t1)){
/* support.scm:1457: real-name */
t2=*((C_word*)lf[55]+1);{
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
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.compiler.support#display-real-name-table in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_16140,2,av);}
a=C_alloc(2);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16146,tmp=(C_word)a,a+=2,tmp);
/* support.scm:1460: chicken.internal#hash-table-for-each */
t3=*((C_word*)lf[148]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[451];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a16145 in chicken.compiler.support#display-real-name-table in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16146(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_16146,4,av);}
a=C_alloc(5);
t4=*((C_word*)lf[24]+1);
t5=*((C_word*)lf[24]+1);
t6=C_i_check_port_2(*((C_word*)lf[24]+1),C_fix(2),C_SCHEME_TRUE,lf[25]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16153,a[2]=t1,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1462: ##sys#print */
t8=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=*((C_word*)lf[24]+1);
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}

/* k16151 in a16145 in chicken.compiler.support#display-real-name-table in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_16153,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16156,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1462: ##sys#write-char-0 */
t3=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(9);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k16154 in k16151 in a16145 in chicken.compiler.support#display-real-name-table in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_16156,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16159,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1462: ##sys#print */
t3=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k16157 in k16154 in k16151 in a16145 in chicken.compiler.support#display-real-name-table in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_16159,2,av);}
/* support.scm:1462: ##sys#write-char-0 */
t2=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.compiler.support#source-info->string in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16164(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_16164,3,av);}
a=C_alloc(13);
if(C_truep(C_i_listp(t2))){
t3=C_i_car(t2);
t4=t3;
t5=C_i_cadr(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16184,a[2]=t1,a[3]=t4,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16188,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=C_i_string_length(t4);
t10=C_a_i_fixnum_difference(&a,2,C_fix(4),t9);
/* support.scm:1469: scheme#max */
t11=*((C_word*)lf[468]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t11;
av2[1]=t8;
av2[2]=C_fix(0);
av2[3]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}
else{
t3=t2;
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k16182 in chicken.compiler.support#source-info->string in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16184(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_16184,2,av);}
/* support.scm:1469: chicken.string#conc */
t2=*((C_word*)lf[464]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[465];
av2[4]=t1;
av2[5]=lf[466];
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k16186 in chicken.compiler.support#source-info->string in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16188(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_16188,2,av);}
/* support.scm:1469: scheme#make-string */
t2=*((C_word*)lf[467]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_make_character(32);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.compiler.support#source-info->line in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_16196,3,av);}
if(C_truep(C_i_listp(t2))){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(t2)){
/* support.scm:1475: chicken.string#->string */
t3=*((C_word*)lf[75]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* chicken.compiler.support#call-info in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16214(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_16214,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16218,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cdr(t2);
if(C_truep(C_i_pairp(t5))){
t6=t2;
t7=t4;
f_16218(t7,C_i_cadr(t6));}
else{
t6=t4;
f_16218(t6,C_SCHEME_FALSE);}}

/* k16216 in chicken.compiler.support#call-info in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_16218(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_16218,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16221,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
if(C_truep(C_i_listp(t1))){
t3=C_i_car(t1);
t4=C_i_cadr(t1);
/* support.scm:1482: chicken.string#conc */
t5=*((C_word*)lf[464]+1);{
C_word av2[6];
av2[0]=t5;
av2[1]=t2;
av2[2]=lf[471];
av2[3]=t3;
av2[4]=lf[472];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k16219 in k16216 in chicken.compiler.support#call-info in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_16221,2,av);}
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

/* chicken.compiler.support#constant-form-eval in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16251(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_16251,5,av);}
a=C_alloc(17);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_i_check_list_2(t3,lf[134]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16275,a[2]=t2,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16459,a[2]=t7,a[3]=t12,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_16459(t14,t10,t3);}

/* k16273 in chicken.compiler.support#constant-form-eval in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16275(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_16275,2,av);}
a=C_alloc(18);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(t2,lf[134]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_16423,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16425,a[2]=t5,a[3]=t10,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_16425(t12,t8,t2);}

/* k16288 in k16421 in k16273 in chicken.compiler.support#constant-form-eval in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_16290,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16293,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1494: g4052 */
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k16291 in k16288 in k16421 in k16273 in chicken.compiler.support#constant-form-eval in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16293(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_16293,2,av);}
a=C_alloc(6);
t2=t1;
if(C_truep(C_i_structurep(t2,lf[150]))){
/* support.scm:1499: k */
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)t0)[4];
av2[4]=C_SCHEME_FALSE;
av2[5]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_16313,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_i_length(t2);
t5=C_eqp(C_fix(1),t4);
if(C_truep(t5)){
t6=C_i_car(t2);
/* support.scm:1501: encodeable-literal? */
t7=lf[476];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t6;
f_16493(3,av2);}}
else{
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_16313(2,av2);}}}}

/* k16311 in k16291 in k16288 in k16421 in k16273 in chicken.compiler.support#constant-form-eval in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_16313,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_16316,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:1502: debugging */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[198];
av2[3]=lf[474];
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=C_u_i_length(((C_word*)t0)[2]);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
/* support.scm:1505: k */
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)t0)[5];
av2[4]=C_SCHEME_FALSE;
av2[5]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}
else{
/* support.scm:1507: bomb */
t4=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[475];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}}

/* k16314 in k16311 in k16291 in k16288 in k16421 in k16273 in chicken.compiler.support#constant-form-eval in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_16316,2,av);}
t2=C_i_car(((C_word*)t0)[2]);
/* support.scm:1503: k */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=C_SCHEME_TRUE;
av2[3]=((C_word*)t0)[5];
av2[4]=t2;
av2[5]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* a16354 in k16421 in k16273 in chicken.compiler.support#constant-form-eval in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_16355,3,av);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16361,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16377,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1494: chicken.condition#with-exception-handler */
t5=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a16360 in a16354 in k16421 in k16273 in chicken.compiler.support#constant-form-eval in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16361(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_16361,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16367,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1494: k4049 */
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a16366 in a16360 in a16354 in k16421 in k16273 in chicken.compiler.support#constant-form-eval in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_16367,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16375,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1496: chicken.condition#get-condition-property */
t3=*((C_word*)lf[477]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[478];
av2[4]=lf[479];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k16373 in a16366 in a16360 in a16354 in k16421 in k16273 in chicken.compiler.support#constant-form-eval in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_16375,2,av);}
/* support.scm:1495: k */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)t0)[4];
av2[4]=C_SCHEME_FALSE;
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* a16376 in a16354 in k16421 in k16273 in chicken.compiler.support#constant-form-eval in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_16377,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16383,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16395,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1494: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a16382 in a16376 in a16354 in k16421 in k16273 in chicken.compiler.support#constant-form-eval in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_16383,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16389,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1497: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=*((C_word*)lf[480]+1);
C_call_with_values(4,av2);}}

/* a16388 in a16382 in a16376 in a16354 in k16421 in k16273 in chicken.compiler.support#constant-form-eval in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_16389,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* a16394 in a16376 in a16354 in k16421 in k16273 in chicken.compiler.support#constant-form-eval in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16395(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_16395,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16401,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1494: k4049 */
t4=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a16400 in a16394 in a16376 in a16354 in k16421 in k16273 in chicken.compiler.support#constant-form-eval in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_16401,2,av);}{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
C_apply_values(3,av2);}}

/* k16421 in k16273 in chicken.compiler.support#constant-form-eval in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16423(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_16423,2,av);}
a=C_alloc(14);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=C_slot(((C_word*)t0)[2],C_fix(0));
t5=t4;
if(C_truep(C_i_closurep(t5))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16290,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_16355,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:1494: scheme#call-with-current-continuation */
t8=*((C_word*)lf[116]+1);{
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
else{
/* support.scm:1508: bomb */
t6=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[481];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* map-loop4019 in k16273 in chicken.compiler.support#constant-form-eval in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_16425(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_16425,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,lf[94],t3);
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

/* map-loop3988 in chicken.compiler.support#constant-form-eval in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_16459(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_16459,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_slot(t3,C_fix(2));
t5=C_i_car(t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
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

/* chicken.compiler.support#encodeable-literal? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16493(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_16493,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16508,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1518: immediate? */
t4=*((C_word*)lf[98]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k16506 in chicken.compiler.support#encodeable-literal? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16508(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_16508,2,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];
if(C_truep(C_i_exact_integerp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16518,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16533,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1523: scheme#call-with-current-continuation */
t5=*((C_word*)lf[116]+1);{
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
t3=C_i_flonump(((C_word*)t0)[3]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t4=C_slot(((C_word*)t0)[3],C_fix(1));
t5=C_i_string_length(t4);
t6=((C_word*)t0)[2];
t7=C_i_integer_length(t5);
t8=t6;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_fixnum_less_or_equal_p(t7,C_fix(24));
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
if(C_truep(C_byteblockp(((C_word*)t0)[3]))){
t4=((C_word*)t0)[3];
t5=stub4077(C_SCHEME_UNDEFINED,t4);
t6=((C_word*)t0)[2];
t7=C_i_integer_length(t5);
t8=t6;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_fixnum_less_or_equal_p(t7,C_fix(24));
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t4=((C_word*)t0)[3];
t5=stub4077(C_SCHEME_UNDEFINED,t4);
t6=C_i_integer_length(t5);
if(C_truep(C_fixnum_less_or_equal_p(t6,C_fix(24)))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16622,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16624,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t9=t5;
t10=t8;
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6168,a[2]=t9,a[3]=t12,a[4]=t10,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_6168(t14,t7,C_fix(0));}
else{
t7=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}}}}}

/* k16516 in k16506 in chicken.compiler.support#encodeable-literal? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_16518,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16521,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1523: g4086 */
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k16519 in k16516 in k16506 in chicken.compiler.support#encodeable-literal? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_16521,2,av);}
if(C_truep(t1)){
t2=C_i_string_length(t1);
t3=((C_word*)t0)[2];
t4=C_i_integer_length(t2);
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_fixnum_less_or_equal_p(t4,C_fix(24));
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a16532 in k16506 in chicken.compiler.support#encodeable-literal? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16533(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_16533,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16539,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16548,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1523: chicken.condition#with-exception-handler */
t5=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a16538 in a16532 in k16506 in chicken.compiler.support#encodeable-literal? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16539(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,2)))){
C_save_and_reclaim((void *)f_16539,3,av);}
a=C_alloc(2);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16545,tmp=(C_word)a,a+=2,tmp);
/* support.scm:1523: k4083 */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a16544 in a16538 in a16532 in k16506 in chicken.compiler.support#encodeable-literal? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_16545,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a16547 in a16532 in k16506 in chicken.compiler.support#encodeable-literal? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_16548,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16550,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16557,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16574,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp15112 */
t5=t2;
f_16550(t5,t4);}

/* tmp15112 in a16547 in a16532 in k16506 in chicken.compiler.support#encodeable-literal? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_16550(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_16550,2,t0,t1);}
t2=((C_word*)t0)[2];
/* ##sys#number->string */
t3=*((C_word*)lf[482]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(16);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* tmp25113 in a16547 in a16532 in k16506 in chicken.compiler.support#encodeable-literal? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_16557(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_16557,3,t0,t1,t2);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16563,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1523: k4083 */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a16562 in tmp25113 in a16547 in a16532 in k16506 in chicken.compiler.support#encodeable-literal? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_16563,2,av);}{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
C_apply_values(3,av2);}}

/* k16572 in a16547 in a16532 in k16506 in chicken.compiler.support#encodeable-literal? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_16574,2,av);}
a=C_alloc(3);
/* tmp25113 */
t2=((C_word*)t0)[2];
f_16557(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* k16620 in k16506 in chicken.compiler.support#encodeable-literal? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_16622,2,av);}
/* support.scm:1534: every */
f_5520(((C_word*)t0)[2],lf[476],t1);}

/* a16623 in k16506 in chicken.compiler.support#encodeable-literal? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_16624,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[2],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.compiler.support#dump-nodes in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16630(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_16630,3,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16634,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16639,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_16639(t7,t3,C_fix(0),t2);}

/* k16632 in chicken.compiler.support#dump-nodes in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_16634,2,av);}
/* support.scm:1559: scheme#newline */
t2=*((C_word*)lf[23]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in chicken.compiler.support#dump-nodes in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_16639(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_16639,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=t3;
t5=C_slot(t4,C_fix(1));
t6=t5;
t7=t3;
t8=C_slot(t7,C_fix(2));
t9=t8;
t10=t3;
t11=C_slot(t10,C_fix(3));
t12=t11;
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_16667,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t12,a[5]=t3,a[6]=t1,a[7]=t9,a[8]=t6,tmp=(C_word)a,a+=9,tmp);
/* support.scm:1547: scheme#make-string */
t14=*((C_word*)lf[467]+1);{
C_word av2[4];
av2[0]=t14;
av2[1]=t13;
av2[2]=t2;
av2[3]=C_make_character(32);
((C_proc)(void*)(*((C_word*)t14+1)))(4,av2);}}

/* k16665 in loop in chicken.compiler.support#dump-nodes in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16667(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_16667,2,av);}
a=C_alloc(16);
t2=t1;
t3=((C_word*)t0)[2];
t4=C_a_i_fixnum_plus(&a,2,t3,C_fix(2));
t5=*((C_word*)lf[24]+1);
t6=*((C_word*)lf[24]+1);
t7=C_i_check_port_2(*((C_word*)lf[24]+1),C_fix(2),C_SCHEME_TRUE,lf[25]);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_16675,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t5,a[9]=((C_word*)t0)[8],a[10]=t2,tmp=(C_word)a,a+=11,tmp);
/* support.scm:1549: ##sys#write-char-0 */
t9=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[24]+1);
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* k16673 in k16665 in loop in chicken.compiler.support#dump-nodes in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_16675,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_16678,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* support.scm:1549: ##sys#print */
t3=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k16676 in k16673 in k16665 in loop in chicken.compiler.support#dump-nodes in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_16678,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_16681,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* support.scm:1549: ##sys#write-char-0 */
t3=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(60);
av2[3]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k16679 in k16676 in k16673 in k16665 in loop in chicken.compiler.support#dump-nodes in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_16681,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_16684,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* support.scm:1549: ##sys#print */
t3=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k16682 in k16679 in k16676 in k16673 in k16665 in loop in chicken.compiler.support#dump-nodes in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_16684,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_16687,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* support.scm:1549: ##sys#write-char-0 */
t3=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k16685 in k16682 in k16679 in k16676 in k16673 in k16665 in loop in chicken.compiler.support#dump-nodes in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_16687,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_16690,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* support.scm:1549: ##sys#print */
t3=*((C_word*)lf[27]+1);{
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
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k16688 in k16685 in k16682 in k16679 in k16676 in k16673 in k16665 in loop in chicken.compiler.support#dump-nodes in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in ... */
static void C_ccall f_16690(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_16690,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16691,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[4],lf[44]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16701,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16763,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_16763(t8,t4,((C_word*)t0)[4]);}

/* g4126 in k16688 in k16685 in k16682 in k16679 in k16676 in k16673 in k16665 in loop in chicken.compiler.support#dump-nodes in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in ... */
static void C_fcall f_16691(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_16691,3,t0,t1,t2);}
/* support.scm:1550: g4148 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_16639(t3,t1,((C_word*)t0)[3],t2);}

/* k16699 in k16688 in k16685 in k16682 in k16679 in k16676 in k16673 in k16665 in loop in chicken.compiler.support#dump-nodes in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in ... */
static void C_ccall f_16701(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_16701,2,av);}
a=C_alloc(9);
t2=C_block_size(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16707,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_greaterp(t3,C_fix(4)))){
t5=*((C_word*)lf[24]+1);
t6=*((C_word*)lf[24]+1);
t7=C_i_check_port_2(*((C_word*)lf[24]+1),C_fix(2),C_SCHEME_TRUE,lf[25]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_16719,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* support.scm:1553: ##sys#write-char-0 */
t9=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=C_make_character(91);
av2[3]=*((C_word*)lf[24]+1);
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
/* write-char/port */
t5=*((C_word*)lf[484]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=C_make_character(62);
av2[3]=*((C_word*)lf[24]+1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k16705 in k16699 in k16688 in k16685 in k16682 in k16679 in k16676 in k16673 in k16665 in loop in chicken.compiler.support#dump-nodes in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in ... */
static void C_ccall f_16707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_16707,2,av);}
/* write-char/port */
t2=*((C_word*)lf[484]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(62);
av2[3]=*((C_word*)lf[24]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k16717 in k16699 in k16688 in k16685 in k16682 in k16679 in k16676 in k16673 in k16665 in loop in chicken.compiler.support#dump-nodes in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in ... */
static void C_ccall f_16719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_16719,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[4],C_fix(4));
/* support.scm:1553: ##sys#print */
t4=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k16720 in k16717 in k16699 in k16688 in k16685 in k16682 in k16679 in k16676 in k16673 in k16665 in loop in chicken.compiler.support#dump-nodes in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in ... */
static void C_ccall f_16722(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_16722,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16725,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16730,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_16730(t6,t2,C_fix(5));}

/* k16723 in k16720 in k16717 in k16699 in k16688 in k16685 in k16682 in k16679 in k16676 in k16673 in k16665 in loop in chicken.compiler.support#dump-nodes in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in ... */
static void C_ccall f_16725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_16725,2,av);}
/* write-char/port */
t2=*((C_word*)lf[484]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(93);
av2[3]=*((C_word*)lf[24]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* doloop4162 in k16720 in k16717 in k16699 in k16688 in k16685 in k16682 in k16679 in k16676 in k16673 in k16665 in loop in chicken.compiler.support#dump-nodes in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in ... */
static void C_fcall f_16730(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_16730,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=*((C_word*)lf[24]+1);
t4=*((C_word*)lf[24]+1);
t5=C_i_check_port_2(*((C_word*)lf[24]+1),C_fix(2),C_SCHEME_TRUE,lf[25]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_16743,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* support.scm:1556: ##sys#write-char-0 */
t7=*((C_word*)lf[26]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=C_make_character(32);
av2[3]=*((C_word*)lf[24]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k16741 in doloop4162 in k16720 in k16717 in k16699 in k16688 in k16685 in k16682 in k16679 in k16676 in k16673 in k16665 in loop in chicken.compiler.support#dump-nodes in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in ... */
static void C_ccall f_16743(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_16743,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16746,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[5],((C_word*)t0)[2]);
/* support.scm:1556: ##sys#print */
t4=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k16744 in k16741 in doloop4162 in k16720 in k16717 in k16699 in k16688 in k16685 in k16682 in k16679 in k16676 in k16673 in k16665 in loop in chicken.compiler.support#dump-nodes in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in ... */
static void C_ccall f_16746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_16746,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_16730(t3,((C_word*)t0)[4],t2);}

/* for-each-loop4125 in k16688 in k16685 in k16682 in k16679 in k16676 in k16673 in k16665 in loop in chicken.compiler.support#dump-nodes in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in ... */
static void C_fcall f_16763(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_16763,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16773,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:1550: g4126 */
t5=((C_word*)t0)[3];
f_16691(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k16771 in for-each-loop4125 in k16688 in k16685 in k16682 in k16679 in k16676 in k16673 in k16665 in loop in chicken.compiler.support#dump-nodes in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in ... */
static void C_ccall f_16773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_16773,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_16763(t3,((C_word*)t0)[4],t2);}

/* chicken.compiler.support#read-info-hook in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16786(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_16786,5,av);}
a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16790,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_16793,a[2]=t3,a[3]=t5,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_eqp(lf[488],t2);
if(C_truep(t7)){
t8=C_i_car(t3);
t9=t6;
f_16793(t9,C_i_symbolp(t8));}
else{
t8=t6;
f_16793(t8,C_SCHEME_FALSE);}}

/* k16788 in chicken.compiler.support#read-info-hook in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_16790,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k16791 in chicken.compiler.support#read-info-hook in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_16793(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_16793,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1570: chicken.string#conc */
t5=*((C_word*)lf[464]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=*((C_word*)lf[486]+1);
av2[3]=lf[487];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k16806 in k16791 in chicken.compiler.support#read-info-hook in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16808(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_16808,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_16812,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
/* support.scm:1571: chicken.internal#hash-table-ref */
t6=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=*((C_word*)lf[145]+1);
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k16810 in k16806 in k16791 in chicken.compiler.support#read-info-hook in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16812(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_16812,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,t4,t2);
/* support.scm:1566: chicken.internal#hash-table-set! */
t6=*((C_word*)lf[141]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[4];
av2[2]=*((C_word*)lf[145]+1);
av2[3]=((C_word*)t0)[5];
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
/* support.scm:1566: chicken.internal#hash-table-set! */
t5=*((C_word*)lf[141]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
av2[2]=*((C_word*)lf[145]+1);
av2[3]=((C_word*)t0)[5];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* chicken.compiler.support#read/source-info in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_16829,3,av);}
/* support.scm:1576: ##sys#read */
t3=*((C_word*)lf[490]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=*((C_word*)lf[485]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* ##sys#user-read-hook in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_16835,4,av);}
a=C_alloc(4);
if(C_truep(C_i_char_equalp(C_make_character(62),t2))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16845,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* read-char/port */
t5=*((C_word*)lf[495]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* support.scm:1588: old-hook */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k16843 in user-read-hook in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16845(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_16845,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16848,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=t2;
t4=((C_word*)t0)[3];
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16864,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1591: chicken.base#open-output-string */
t6=*((C_word*)lf[60]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k16846 in k16843 in user-read-hook in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_16848,2,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,2,lf[492],t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,lf[493],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k16862 in k16843 in user-read-hook in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16864(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_16864,2,av);}
a=C_alloc(7);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16869,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_16869(t6,((C_word*)t0)[3]);}

/* loop in k16862 in k16843 in user-read-hook in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_16869(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_16869,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_16873,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* read-char/port */
t3=*((C_word*)lf[495]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k16871 in loop in k16862 in k16843 in user-read-hook in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_16873,2,av);}
a=C_alloc(5);
if(C_truep(C_eofp(t1))){
/* support.scm:1595: quit-compiling */
t2=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[494];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
if(C_truep(C_u_i_char_equalp(t1,C_make_character(10)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16890,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1597: scheme#newline */
t3=*((C_word*)lf[23]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
if(C_truep(C_u_i_char_equalp(t1,C_make_character(60)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* read-char/port */
t3=*((C_word*)lf[495]+1);{
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
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16924,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[484]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}}}

/* k16888 in k16871 in loop in k16862 in k16843 in user-read-hook in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_16890,2,av);}
/* support.scm:1598: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_16869(t2,((C_word*)t0)[3]);}

/* k16899 in k16871 in loop in k16862 in k16843 in user-read-hook in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_16901,2,av);}
a=C_alloc(6);
t2=t1;
t3=C_eqp(C_make_character(35),t2);
if(C_truep(t3)){
/* support.scm:1602: chicken.base#get-output-string */
t4=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_16913,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t5=*((C_word*)lf[484]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_make_character(60);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k16911 in k16899 in k16871 in loop in k16862 in k16843 in user-read-hook in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_16913,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16916,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[484]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k16914 in k16911 in k16899 in k16871 in loop in k16862 in k16843 in user-read-hook in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_16916,2,av);}
/* support.scm:1606: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_16869(t2,((C_word*)t0)[3]);}

/* k16922 in k16871 in loop in k16862 in k16843 in user-read-hook in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_16924,2,av);}
/* support.scm:1609: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_16869(t2,((C_word*)t0)[3]);}

/* chicken.compiler.support#big-fixnum? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_16929,3,av);}
a=C_alloc(4);
if(C_truep(C_fixnump(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16942,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1616: chicken.platform#feature? */
t4=*((C_word*)lf[496]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[497];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k16940 in chicken.compiler.support#big-fixnum? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_16942,2,av);}
if(C_truep(t1)){
t2=C_fixnum_greaterp(((C_word*)t0)[2],C_fix(1073741823));
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?t2:C_fixnum_lessp(((C_word*)t0)[2],C_fix(-1073741824)));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.compiler.support#small-bignum? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16953(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_16953,3,av);}
a=C_alloc(4);
if(C_truep(C_i_bignump(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16975,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1622: chicken.platform#feature? */
t4=*((C_word*)lf[496]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[497];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k16973 in chicken.compiler.support#small-bignum? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_16975,2,av);}
if(C_truep(C_i_not(t1))){
t2=((C_word*)t0)[2];
t3=C_i_integer_length(t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_fixnum_less_or_equal_p(t3,C_fix(62));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.compiler.support#hide-variable in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_16977,3,av);}
a=C_alloc(3);
t3=C_a_i_list(&a,1,lf[499]);
if(C_truep(C_i_nullp(t3))){
/* tweaks.scm:57: ##sys#put! */
t4=*((C_word*)lf[253]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[272];
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=C_i_car(t3);
/* tweaks.scm:57: ##sys#put! */
t5=*((C_word*)lf[253]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[272];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* chicken.compiler.support#export-variable in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_16997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_16997,3,av);}
a=C_alloc(3);
t3=C_a_i_list(&a,1,lf[501]);
if(C_truep(C_i_nullp(t3))){
/* tweaks.scm:57: ##sys#put! */
t4=*((C_word*)lf[253]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[272];
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=C_i_car(t3);
/* tweaks.scm:57: ##sys#put! */
t5=*((C_word*)lf[253]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[272];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* chicken.compiler.support#variable-hidden? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_17017,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_17025,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1635: ##sys#get */
t4=*((C_word*)lf[190]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[272];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k17023 in chicken.compiler.support#variable-hidden? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_17025,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(t1,lf[499]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k17032 in k12359 in k12356 in toplevel-definition-hook in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_17034,2,av);}
if(C_truep(t1)){
/* support.scm:1638: chicken.plist#remprop! */
t2=*((C_word*)lf[271]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[272];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.compiler.support#variable-visible? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_17039,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_17043,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1641: ##sys#get */
t5=*((C_word*)lf[190]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[272];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k17041 in chicken.compiler.support#variable-visible? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_17043,2,av);}
t2=C_eqp(t1,lf[499]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_eqp(t1,lf[501]);
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?C_SCHEME_TRUE:C_i_not(((C_word*)t0)[3]));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* chicken.compiler.support#mark-variable in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_17064,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+0);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* support.scm:1651: ##sys#put! */
t5=*((C_word*)lf[253]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=C_i_car(t4);
/* support.scm:1651: ##sys#put! */
t6=*((C_word*)lf[253]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* chicken.compiler.support#variable-mark in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_17079,4,av);}
/* support.scm:1654: ##sys#get */
t4=*((C_word*)lf[190]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* chicken.compiler.support#intrinsic? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_17085,3,av);}
/* tweaks.scm:60: ##sys#get */
t3=*((C_word*)lf[190]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[505];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* chicken.compiler.support#foldable? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_17096,3,av);}
/* tweaks.scm:60: ##sys#get */
t3=*((C_word*)lf[190]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[507];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* chicken.compiler.support#predicate? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_17107,3,av);}
/* tweaks.scm:60: ##sys#get */
t3=*((C_word*)lf[190]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[509];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* chicken.compiler.support#load-identifier-database in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_17118,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_17122,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_17211,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1665: chicken.platform#repository-path */
t5=*((C_word*)lf[517]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k17120 in chicken.compiler.support#load-identifier-database in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_17122,2,av);}
a=C_alloc(8);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_17128,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_17189,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1666: chicken.base#open-output-string */
t5=*((C_word*)lf[60]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k17126 in k17120 in chicken.compiler.support#load-identifier-database in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_17128,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_17156,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1673: scheme#call-with-input-file */
t3=*((C_word*)lf[512]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[91]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k17138 in for-each-loop4338 in k17154 in k17126 in k17120 in chicken.compiler.support#load-identifier-database in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_17140,2,av);}
/* support.scm:1670: ##sys#put! */
t2=*((C_word*)lf[253]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[511];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k17142 in for-each-loop4338 in k17154 in k17126 in k17120 in chicken.compiler.support#load-identifier-database in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_17144,2,av);}
a=C_alloc(3);
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_list1(&a,1,t3);
/* support.scm:1672: scheme#append */
t5=*((C_word*)lf[67]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k17154 in k17126 in k17120 in chicken.compiler.support#load-identifier-database in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17156(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_17156,2,av);}
a=C_alloc(5);
t2=C_i_check_list_2(t1,lf[44]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_17164,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_17164(t6,((C_word*)t0)[2],t1);}

/* for-each-loop4338 in k17154 in k17126 in k17120 in chicken.compiler.support#load-identifier-database in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_17164(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_17164,3,t0,t1,t2);}
a=C_alloc(13);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_17174,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=C_i_car(t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_17140,a[2]=t5,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_17144,a[2]=t6,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1672: ##sys#get */
t11=*((C_word*)lf[190]+1);{
C_word av2[4];
av2[0]=t11;
av2[1]=t10;
av2[2]=t8;
av2[3]=lf[511];
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k17172 in for-each-loop4338 in k17154 in k17126 in k17120 in chicken.compiler.support#load-identifier-database in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_17174,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_17164(t3,((C_word*)t0)[4],t2);}

/* k17187 in k17120 in chicken.compiler.support#load-identifier-database in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17189(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_17189,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_fix(2),C_SCHEME_TRUE,lf[58]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_17195,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* support.scm:1666: ##sys#print */
t6=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[515];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k17193 in k17187 in k17120 in chicken.compiler.support#load-identifier-database in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_17195,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_17198,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1666: ##sys#print */
t3=*((C_word*)lf[27]+1);{
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

/* k17196 in k17193 in k17187 in k17120 in chicken.compiler.support#load-identifier-database in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_17198,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_17201,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1666: ##sys#print */
t3=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[514];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k17199 in k17196 in k17193 in k17187 in k17120 in chicken.compiler.support#load-identifier-database in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_17201,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_17204,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1666: ##sys#write-char-0 */
t3=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k17202 in k17199 in k17196 in k17193 in k17187 in k17120 in chicken.compiler.support#load-identifier-database in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_17204,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_17207,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1666: chicken.base#get-output-string */
t3=*((C_word*)lf[59]+1);{
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

/* k17205 in k17202 in k17199 in k17196 in k17193 in k17187 in k17120 in chicken.compiler.support#load-identifier-database in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_17207,2,av);}
/* support.scm:1666: debugging */
t2=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[513];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k17209 in chicken.compiler.support#load-identifier-database in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17211(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_17211,2,av);}
/* support.scm:1665: chicken.load#find-file */
t2=*((C_word*)lf[516]+1);{
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

/* chicken.compiler.support#print-version in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +6,c,2)))){
C_save_and_reclaim((void*)f_17213,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+6);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_17220,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t4)){
/* support.scm:1679: chicken.base#print* */
t6=*((C_word*)lf[519]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[520];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f18811,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1680: chicken.platform#chicken-version */
t7=*((C_word*)lf[240]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k17218 in chicken.compiler.support#print-version in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_17220,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_17227,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1680: chicken.platform#chicken-version */
t3=*((C_word*)lf[240]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k17225 in k17218 in chicken.compiler.support#print-version in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_17227,2,av);}
/* support.scm:1680: chicken.base#print */
t2=*((C_word*)lf[228]+1);{
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

/* chicken.compiler.support#print-usage in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_17238,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_17242,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1685: print-version */
t3=*((C_word*)lf[518]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k17240 in chicken.compiler.support#print-usage in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_17242,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_17245,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1686: scheme#newline */
t3=*((C_word*)lf[23]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k17243 in k17240 in chicken.compiler.support#print-usage in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_17245,2,av);}
/* support.scm:1687: scheme#display */
t2=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[522];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* chicken.compiler.support#print-debug-options in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17250(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_17250,2,av);}
/* support.scm:1815: scheme#display */
t2=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[524];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a17255 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17256(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_17256,4,av);}
a=C_alloc(5);
t4=t3;
t5=C_i_check_port_2(t4,C_fix(2),C_SCHEME_TRUE,lf[32]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_17263,a[2]=t1,a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:493: ##sys#print */
t7=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[525];
av2[3]=C_SCHEME_FALSE;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k17261 in a17255 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_17263,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_17266,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[4];
t4=C_slot(t3,C_fix(1));
/* support.scm:493: ##sys#print */
t5=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k17264 in k17261 in a17255 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_17266,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_17269,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:493: ##sys#write-char-0 */
t3=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k17267 in k17264 in k17261 in a17255 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_17269,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_17272,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=C_slot(t3,C_fix(2));
/* support.scm:493: ##sys#print */
t5=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k17270 in k17267 in k17264 in k17261 in a17255 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_17272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_17272,2,av);}
/* support.scm:493: ##sys#write-char-0 */
t2=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(62);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5123 */
static void C_ccall f_5125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5125,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5128,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k5126 in k5123 */
static void C_ccall f_5128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5128,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5131,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k5129 in k5126 in k5123 */
static void C_ccall f_5131(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5131,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5134,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_5134(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5134,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5137,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_5137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5137,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5140,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_file_toplevel(2,av2);}}

/* k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_5140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5140,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5143,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_5143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5143,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5146,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_5146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5146,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5149,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_port_toplevel(2,av2);}}

/* k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_5149(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,4)))){
C_save_and_reclaim((void *)f_5149,2,av);}
a=C_alloc(35);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=C_mutate(&lf[2] /* (set! chicken.compiler.support#take ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5259,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate(&lf[3] /* (set! chicken.compiler.support#every ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5520,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate(&lf[4] /* (set! chicken.compiler.support#any ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5554,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate(&lf[5] /* (set! chicken.compiler.support#cons* ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5584,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate(&lf[6] /* (set! chicken.compiler.support#last ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5920,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate(&lf[7] /* (set! chicken.compiler.support#lset-adjoin/eq? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5979,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate((C_word*)lf[8]+1 /* (set! chicken.compiler.support#number-type ...) */,lf[9]);
t11=C_set_block_item(lf[10] /* chicken.compiler.support#unsafe */,0,C_SCHEME_FALSE);
t12=C_mutate((C_word*)lf[11]+1 /* (set! chicken.compiler.support#compiler-cleanup-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6432,tmp=(C_word)a,a+=2,tmp));
t13=C_set_block_item(lf[12] /* chicken.compiler.support#debugging-chicken */,0,C_SCHEME_END_OF_LIST);
t14=C_mutate((C_word*)lf[13]+1 /* (set! chicken.compiler.support#bomb ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6436,tmp=(C_word)a,a+=2,tmp));
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6461,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:121: chicken.base#open-output-string */
t16=*((C_word*)lf[60]+1);{
C_word *av2=av;
av2[0]=t16;
av2[1]=t15;
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}

/* chicken.compiler.support#take in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_5259(C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_5259,3,t1,t2,t3);}
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
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5277,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
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

/* k5275 in chicken.compiler.support#take in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_5277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5277,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in a10507 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_5317(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_5317,5,t0,t1,t2,t3,t4);}
a=C_alloc(4);
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5331,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:67: scheme#reverse */
t6=*((C_word*)lf[89]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_fixnum_difference(t2,C_fix(1));
t6=C_i_car(t4);
t7=C_a_i_cons(&a,2,t6,t3);
t8=t4;
t9=C_u_i_cdr(t8);
/* mini-srfi-1.scm:68: loop */
t11=t1;
t12=t5;
t13=t7;
t14=t9;
t1=t11;
t2=t12;
t3=t13;
t4=t14;
goto loop;}}

/* k5329 in loop in a10507 in a10501 in chicken.compiler.support#inline-lambda-bindings in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_5331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5331,2,av);}
/* mini-srfi-1.scm:67: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
C_values(4,av2);}}

/* chicken.compiler.support#every in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_5520(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5520,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5526,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5526(t7,t1,t3);}

/* loop in chicken.compiler.support#every in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_5526(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5526,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5548,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_i_car(t2);
/* mini-srfi-1.scm:82: pred */
t6=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k5546 in loop in chicken.compiler.support#every in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_5548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5548,2,av);}
if(C_truep(C_i_not(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* mini-srfi-1.scm:83: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_5526(t4,((C_word*)t0)[2],t3);}}

/* chicken.compiler.support#any in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_5554(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5554,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5560,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5560(t7,t1,t3);}

/* loop in chicken.compiler.support#any in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_5560(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5560,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5570,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* mini-srfi-1.scm:88: pred */
t5=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k5568 in loop in chicken.compiler.support#any in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_5570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5570,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* mini-srfi-1.scm:89: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_5560(t4,((C_word*)t0)[2],t3);}}

/* chicken.compiler.support#cons* in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_5584(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_5584,3,t1,t2,t3);}
a=C_alloc(5);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5590,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_5590(t7,t1,t2,t3);}

/* loop in chicken.compiler.support#cons* in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_5590(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_5590,4,t0,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t3))){
t4=t2;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5604,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
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

/* k5602 in loop in chicken.compiler.support#cons* in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_5604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5604,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* foldr389 in k8020 in chicken.compiler.support#db-get-all in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_5813(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_5813,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5821,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5847,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
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

/* g394 in foldr389 in k8020 in chicken.compiler.support#db-get-all in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_5821(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_5821,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5825,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:135: pred */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5823 in g394 in foldr389 in k8020 in chicken.compiler.support#db-get-all in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_5825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5825,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5829,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* mini-srfi-1.scm:135: g404 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  /* mini-srfi-1.scm:135: g404 */
  f_5829(C_a_i(&a,3),t2,t1)
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g404 in k5823 in g394 in foldr389 in k8020 in chicken.compiler.support#db-get-all in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static C_word C_fcall f_5829(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* k5845 in foldr389 in k8020 in chicken.compiler.support#db-get-all in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_5847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5847,2,av);}
/* mini-srfi-1.scm:134: g394 */
t2=((C_word*)t0)[2];
f_5821(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* map-loop417 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_5886(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_5886,3,t0,t1,t2);}
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

/* chicken.compiler.support#last in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_5920(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,0,2)))){
C_save_and_reclaim_args((void *)trf_5920,2,t1,t2);}
a=C_alloc(2);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5926,tmp=(C_word)a,a+=2,tmp);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=(
  f_5926(t2)
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* loop in chicken.compiler.support#last in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static C_word C_fcall f_5926(C_word t1){
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

/* chicken.compiler.support#lset-adjoin/eq? in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_5979(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_5979,3,t1,t2,t3);}
a=C_alloc(5);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5985,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_5985(t7,t1,t3,t2);}

/* loop in chicken.compiler.support#lset-adjoin/eq? in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_5985(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_5985,4,t0,t1,t2,t3);}
a=C_alloc(3);
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t2);
if(C_truep(C_i_memq(t4,t3))){
t5=t2;
t6=C_u_i_cdr(t5);
/* mini-srfi-1.scm:160: loop */
t11=t1;
t12=t6;
t13=t3;
t1=t11;
t2=t12;
t3=t13;
goto loop;}
else{
t5=t2;
t6=C_u_i_cdr(t5);
t7=t2;
t8=C_u_i_car(t7);
t9=C_a_i_cons(&a,2,t8,t3);
/* mini-srfi-1.scm:161: loop */
t11=t1;
t12=t6;
t13=t9;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}}

/* loop in k16506 in chicken.compiler.support#encodeable-literal? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_6168(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6168,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6182,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* mini-srfi-1.scm:190: proc */
t4=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k6180 in loop in k16506 in chicken.compiler.support#encodeable-literal? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6182,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6186,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* mini-srfi-1.scm:190: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6168(t5,t3,t4);}

/* k6184 in k6180 in loop in k16506 in chicken.compiler.support#encodeable-literal? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6186,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k12019 in walk in chicken.compiler.support#expression-has-side-effects? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_6281(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6281,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6294,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* mini-srfi-1.scm:216: pred */
t5=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k6292 in loop in k12019 in walk in chicken.compiler.support#expression-has-side-effects? in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6294,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_u_i_car(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* mini-srfi-1.scm:217: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_6281(t4,((C_word*)t0)[3],t3);}}

/* chicken.compiler.support#compiler-cleanup-hook in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6432(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6432,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.compiler.support#bomb in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_6436,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6450,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=C_u_i_car(t4);
/* support.scm:117: scheme#string-append */
t6=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=lf[16];
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
/* support.scm:118: chicken.base#error */
t3=*((C_word*)lf[14]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[17];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k6448 in chicken.compiler.support#bomb in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6450(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6450,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=*((C_word*)lf[14]+1);
av2[3]=t1;
av2[4]=t3;
C_apply(5,av2);}}

/* k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6461(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(51,c,5)))){
C_save_and_reclaim((void *)f_6461,2,av);}
a=C_alloc(51);
t2=C_mutate((C_word*)lf[18]+1 /* (set! chicken.compiler.support#collected-debugging-output ...) */,t1);
t3=C_mutate(&lf[19] /* (set! chicken.compiler.support#+logged-debugging-modes+ ...) */,lf[20]);
t4=C_mutate(&lf[21] /* (set! chicken.compiler.support#test-debugging-mode ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6464,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[22]+1 /* (set! chicken.compiler.support#debugging ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6485,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[34]+1 /* (set! chicken.compiler.support#with-debugging-output ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6605,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[37]+1 /* (set! chicken.compiler.support#quit-compiling ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6702,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[42]+1 /* (set! ##sys#syntax-error-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6718,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[51]+1 /* (set! chicken.syntax#syntax-error ...) */,*((C_word*)lf[42]+1));
t10=C_mutate((C_word*)lf[52]+1 /* (set! chicken.compiler.support#emit-syntax-trace-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6815,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[53]+1 /* (set! chicken.compiler.support#check-signature ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6869,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[56]+1 /* (set! chicken.compiler.support#stringify ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6937,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[61]+1 /* (set! chicken.compiler.support#symbolify ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6967,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[63]+1 /* (set! chicken.compiler.support#build-lambda-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7001,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[64]+1 /* (set! chicken.compiler.support#c-ify-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7038,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[74]+1 /* (set! chicken.compiler.support#valid-c-identifier? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7137,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate((C_word*)lf[76]+1 /* (set! chicken.compiler.support#bytes->words ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7187,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate((C_word*)lf[77]+1 /* (set! chicken.compiler.support#words->bytes ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7194,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate((C_word*)lf[78]+1 /* (set! chicken.compiler.support#check-and-open-input-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7201,tmp=(C_word)a,a+=2,tmp));
t20=C_mutate((C_word*)lf[85]+1 /* (set! chicken.compiler.support#close-checked-input-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7245,tmp=(C_word)a,a+=2,tmp));
t21=C_mutate((C_word*)lf[88]+1 /* (set! chicken.compiler.support#fold-inner ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7257,tmp=(C_word)a,a+=2,tmp));
t22=C_mutate(&lf[90] /* (set! chicken.compiler.support#follow-without-loop ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7313,tmp=(C_word)a,a+=2,tmp));
t23=C_mutate((C_word*)lf[91]+1 /* (set! chicken.compiler.support#read-expressions ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7364,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate((C_word*)lf[93]+1 /* (set! chicken.compiler.support#constant? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7408,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate((C_word*)lf[97]+1 /* (set! chicken.compiler.support#collapsable-literal? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7470,tmp=(C_word)a,a+=2,tmp));
t26=C_mutate((C_word*)lf[98]+1 /* (set! chicken.compiler.support#immediate? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7500,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate((C_word*)lf[100]+1 /* (set! chicken.compiler.support#basic-literal? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7546,tmp=(C_word)a,a+=2,tmp));
t28=C_mutate((C_word*)lf[102]+1 /* (set! chicken.compiler.support#canonicalize-begin-body ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7602,tmp=(C_word)a,a+=2,tmp));
t29=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7677,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:361: chicken.condition#condition-predicate */
t30=*((C_word*)lf[528]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t30;
av2[1]=t29;
av2[2]=lf[478];
((C_proc)(void*)(*((C_word*)t30+1)))(3,av2);}}

/* chicken.compiler.support#test-debugging-mode in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_6464(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_6464,3,t1,t2,t3);}
a=C_alloc(3);
if(C_truep(C_i_symbolp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_i_memq(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6479,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm:128: any */
f_5554(t1,t4,t2);}}

/* a6478 in chicken.compiler.support#test-debugging-mode in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6479,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_memq(t2,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.compiler.support#debugging in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6485(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +17,c,3)))){
C_save_and_reclaim((void*)f_6485,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+17);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6488,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t10=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6553,a[2]=t2,tmp=(C_word)a,a+=3,tmp));
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6572,a[2]=t1,a[3]=t8,a[4]=t2,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* support.scm:143: test-debugging-mode */
f_6464(t11,t2,*((C_word*)lf[12]+1));}

/* text in chicken.compiler.support#debugging in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_6488(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_6488,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6494,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:132: chicken.port#with-output-to-string */
t3=*((C_word*)lf[31]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a6493 in text in chicken.compiler.support#debugging in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6494,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6498,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:134: scheme#display */
t3=*((C_word*)lf[29]+1);{
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

/* k6496 in a6493 in text in chicken.compiler.support#debugging in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6498,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6501,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6510,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:136: scheme#display */
t4=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[30];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* support.scm:140: scheme#newline */
t3=*((C_word*)lf[23]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6499 in k6496 in a6493 in text in chicken.compiler.support#debugging in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6501,2,av);}
/* support.scm:140: scheme#newline */
t2=*((C_word*)lf[23]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6508 in k6496 in a6493 in text in chicken.compiler.support#debugging in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6510(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6510,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6530,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_6530(t6,((C_word*)t0)[3],t2);}

/* k6516 in for-each-loop685 in k6508 in k6496 in a6493 in text in chicken.compiler.support#debugging in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6518,2,av);}
/* support.scm:138: ##sys#write-char-0 */
t2=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k6523 in for-each-loop685 in k6508 in k6496 in a6493 in text in chicken.compiler.support#debugging in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6525,2,av);}
/* support.scm:138: ##sys#print */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* for-each-loop685 in k6508 in k6496 in a6493 in text in chicken.compiler.support#debugging in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_6530(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_6530,3,t0,t1,t2);}
a=C_alloc(13);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6540,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=*((C_word*)lf[24]+1);
t7=*((C_word*)lf[24]+1);
t8=C_i_check_port_2(*((C_word*)lf[24]+1),C_fix(2),C_SCHEME_TRUE,lf[25]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6518,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6525,a[2]=t9,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* support.scm:138: scheme#force */
t11=*((C_word*)lf[28]+1);{
C_word av2[3];
av2[0]=t11;
av2[1]=t10;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6538 in for-each-loop685 in k6508 in k6496 in a6493 in text in chicken.compiler.support#debugging in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6540,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6530(t3,((C_word*)t0)[4],t2);}

/* dump in chicken.compiler.support#debugging in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_6553(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_6553,3,t0,t1,t2);}
a=C_alloc(5);
t3=*((C_word*)lf[18]+1);
t4=*((C_word*)lf[18]+1);
t5=C_i_check_port_2(*((C_word*)lf[18]+1),C_fix(2),C_SCHEME_TRUE,lf[32]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6560,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:142: ##sys#print */
t7=*((C_word*)lf[27]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k6558 in dump in chicken.compiler.support#debugging in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6560,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6563,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:142: ##sys#write-char-0 */
t3=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(124);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6561 in k6558 in dump in chicken.compiler.support#debugging in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6563,2,av);}
/* support.scm:142: ##sys#print */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6570 in chicken.compiler.support#debugging in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_6572,2,av);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6575,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:144: text */
t3=((C_word*)((C_word*)t0)[5])[1];
f_6488(t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6593,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6596,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* support.scm:151: test-debugging-mode */
f_6464(t3,((C_word*)t0)[4],lf[19]);}}

/* k6573 in k6570 in chicken.compiler.support#debugging in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6575,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6578,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* support.scm:145: scheme#display */
t4=*((C_word*)lf[29]+1);{
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

/* k6576 in k6573 in k6570 in chicken.compiler.support#debugging in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6578,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6581,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:146: chicken.base#flush-output */
t3=*((C_word*)lf[33]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6579 in k6576 in k6573 in k6570 in chicken.compiler.support#debugging in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_6581,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6584,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6587,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* support.scm:147: test-debugging-mode */
f_6464(t3,((C_word*)t0)[5],lf[19]);}

/* k6582 in k6579 in k6576 in k6573 in k6570 in chicken.compiler.support#debugging in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6584,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6585 in k6579 in k6576 in k6573 in k6570 in chicken.compiler.support#debugging in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6587,2,av);}
if(C_truep(t1)){
/* support.scm:148: dump */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6553(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k6591 in k6570 in chicken.compiler.support#debugging in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6593,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6594 in k6570 in chicken.compiler.support#debugging in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6596,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6603,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:152: text */
t3=((C_word*)((C_word*)t0)[4])[1];
f_6488(t3,t2);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k6601 in k6594 in k6570 in chicken.compiler.support#debugging in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6603,2,av);}
/* support.scm:152: dump */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6553(t2,((C_word*)t0)[3],t1);}

/* chicken.compiler.support#with-debugging-output in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6605(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_6605,4,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6608,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6669,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* support.scm:163: test-debugging-mode */
f_6464(t5,t2,*((C_word*)lf[12]+1));}

/* collect in chicken.compiler.support#with-debugging-output in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_6608(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_6608,3,t0,t1,t2);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6610,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6637,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:162: chicken.string#string-split */
t5=*((C_word*)lf[35]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[36];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* g737 in collect in chicken.compiler.support#with-debugging-output in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_6610(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_6610,3,t0,t1,t2);}
a=C_alloc(5);
t3=*((C_word*)lf[18]+1);
t4=*((C_word*)lf[18]+1);
t5=C_i_check_port_2(*((C_word*)lf[18]+1),C_fix(2),C_SCHEME_TRUE,lf[32]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6617,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t7=((C_word*)t0)[2];
t8=C_u_i_car(t7);
/* support.scm:159: ##sys#print */
t9=*((C_word*)lf[27]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t6;
av2[2]=t8;
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t7=((C_word*)t0)[2];
/* support.scm:159: ##sys#print */
t8=*((C_word*)lf[27]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}}

/* k6615 in g737 in collect in chicken.compiler.support#with-debugging-output in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6617,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6620,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:159: ##sys#write-char-0 */
t3=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(124);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6618 in k6615 in g737 in collect in chicken.compiler.support#with-debugging-output in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6620,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6623,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:159: ##sys#print */
t3=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6621 in k6618 in k6615 in g737 in collect in chicken.compiler.support#with-debugging-output in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6623,2,av);}
/* support.scm:159: ##sys#write-char-0 */
t2=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k6635 in collect in chicken.compiler.support#with-debugging-output in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6637,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6642,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_6642(t5,((C_word*)t0)[3],t1);}

/* for-each-loop736 in k6635 in collect in chicken.compiler.support#with-debugging-output in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_6642(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6642,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6652,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:157: g737 */
t5=((C_word*)t0)[3];
f_6610(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6650 in for-each-loop736 in k6635 in collect in chicken.compiler.support#with-debugging-output in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6652,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6642(t3,((C_word*)t0)[4],t2);}

/* k6667 in chicken.compiler.support#with-debugging-output in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6669,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6672,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:164: chicken.port#with-output-to-string */
t3=*((C_word*)lf[31]+1);{
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
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6693,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* support.scm:169: test-debugging-mode */
f_6464(t2,((C_word*)t0)[4],lf[19]);}}

/* k6670 in k6667 in chicken.compiler.support#with-debugging-output in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6672,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6675,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* support.scm:165: scheme#display */
t4=*((C_word*)lf[29]+1);{
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

/* k6673 in k6670 in k6667 in chicken.compiler.support#with-debugging-output in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6675,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6678,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:166: chicken.base#flush-output */
t3=*((C_word*)lf[33]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6676 in k6673 in k6670 in k6667 in chicken.compiler.support#with-debugging-output in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6678,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6684,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:167: test-debugging-mode */
f_6464(t2,((C_word*)t0)[5],lf[19]);}

/* k6682 in k6676 in k6673 in k6670 in k6667 in chicken.compiler.support#with-debugging-output in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6684,2,av);}
if(C_truep(t1)){
/* support.scm:168: collect */
t2=((C_word*)t0)[2];
f_6608(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k6691 in k6667 in chicken.compiler.support#with-debugging-output in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6693,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6700,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:170: chicken.port#with-output-to-string */
t3=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k6698 in k6691 in k6667 in chicken.compiler.support#with-debugging-output in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6700,2,av);}
/* support.scm:170: collect */
t2=((C_word*)t0)[2];
f_6608(t2,((C_word*)t0)[3],t1);}

/* chicken.compiler.support#quit-compiling in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +9,c,3)))){
C_save_and_reclaim((void*)f_6702,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+9);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=*((C_word*)lf[38]+1);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6706,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6716,a[2]=t5,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:174: scheme#string-append */
t7=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[41];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k6704 in chicken.compiler.support#quit-compiling in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6706,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6709,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:175: scheme#newline */
t3=*((C_word*)lf[23]+1);{
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

/* k6707 in k6704 in chicken.compiler.support#quit-compiling in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6709,2,av);}
/* support.scm:176: chicken.base#exit */
t2=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6714 in chicken.compiler.support#quit-compiling in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6716,2,av);}{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[40]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
av2[5]=((C_word*)t0)[4];
C_apply(6,av2);}}

/* ##sys#syntax-error-hook in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,2)))){
C_save_and_reclaim((void*)f_6718,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+10);
t3=C_build_rest(&a,c,3,av);
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
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[38]+1);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6722,a[2]=t6,a[3]=t5,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_symbolp(((C_word*)t4)[1]))){
t8=((C_word*)t4)[1];
t9=C_i_car(((C_word*)t5)[1]);
t10=C_set_block_item(t4,0,t9);
t11=C_i_cdr(((C_word*)t5)[1]);
t12=C_set_block_item(t5,0,t11);
t13=t7;
f_6722(t13,t8);}
else{
t8=t7;
f_6722(t8,C_SCHEME_FALSE);}}

/* k6720 in syntax-error-hook in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_6722(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_6722,2,t0,t1);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6725,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=((C_word*)t0)[2];
t5=C_i_check_port_2(t4,C_fix(2),C_SCHEME_TRUE,lf[32]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6771,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* support.scm:187: ##sys#print */
t7=*((C_word*)lf[27]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[49];
av2[3]=C_SCHEME_FALSE;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t4=((C_word*)t0)[2];
t5=C_i_check_port_2(t4,C_fix(2),C_SCHEME_TRUE,lf[32]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6792,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* support.scm:188: ##sys#print */
t7=*((C_word*)lf[27]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[50];
av2[3]=C_SCHEME_FALSE;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}}

/* k6723 in k6720 in syntax-error-hook in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6725(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_6725,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6726,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)((C_word*)t0)[3])[1];
t4=C_i_check_list_2(t3,lf[44]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6736,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6744,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_6744(t9,t5,t3);}

/* g781 in k6723 in k6720 in syntax-error-hook in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_6726(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_6726,3,t0,t1,t2);}
/* support.scm:189: g814 */
t3=*((C_word*)lf[40]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[43];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6734 in k6723 in k6720 in syntax-error-hook in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_6736,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6739,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:190: chicken.base#print-call-chain */
t3=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(0);
av2[4]=*((C_word*)lf[46]+1);
av2[5]=lf[47];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k6737 in k6734 in k6723 in k6720 in syntax-error-hook in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6739,2,av);}
/* support.scm:191: chicken.base#exit */
t2=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(70);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* for-each-loop780 in k6723 in k6720 in syntax-error-hook in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_6744(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6744,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6754,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:189: g781 */
t5=((C_word*)t0)[3];
f_6726(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6752 in for-each-loop780 in k6723 in k6720 in syntax-error-hook in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6754,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6744(t3,((C_word*)t0)[4],t2);}

/* k6769 in k6720 in syntax-error-hook in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6771,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6774,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:187: ##sys#print */
t3=*((C_word*)lf[27]+1);{
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
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6772 in k6769 in k6720 in syntax-error-hook in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6774,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6777,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:187: ##sys#print */
t3=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[48];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6775 in k6772 in k6769 in k6720 in syntax-error-hook in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6777,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6780,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:187: ##sys#print */
t3=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6778 in k6775 in k6772 in k6769 in k6720 in syntax-error-hook in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6780,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6783,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:187: ##sys#write-char-0 */
t3=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6781 in k6778 in k6775 in k6772 in k6769 in k6720 in syntax-error-hook in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6783,2,av);}
/* support.scm:187: ##sys#write-char-0 */
t2=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k6790 in k6720 in syntax-error-hook in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6792,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6795,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:188: ##sys#print */
t3=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6793 in k6790 in k6720 in syntax-error-hook in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6795,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6798,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:188: ##sys#write-char-0 */
t3=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6796 in k6793 in k6790 in k6720 in syntax-error-hook in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6798,2,av);}
/* support.scm:188: ##sys#write-char-0 */
t2=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.compiler.support#emit-syntax-trace-info in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6815(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6815,4,av);}
t4=*((C_word*)lf[46]+1);
t5=C_slot(*((C_word*)lf[46]+1),C_fix(14));
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_emit_syntax_trace_info(t2,t3,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* loop in k6878 in err in chicken.compiler.support#check-signature in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_6834(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6834,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
/* support.scm:204: proc */
t3=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6857,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* support.scm:205: proc */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}}

/* k6855 in loop in k6878 in err in chicken.compiler.support#check-signature in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6857(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6857,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6861,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* support.scm:205: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6834(t6,t3,t5);}

/* k6859 in k6855 in loop in k6878 in err in chicken.compiler.support#check-signature in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6861,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.compiler.support#check-signature in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6869(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_6869,5,av);}
a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6872,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6893,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_6893(t9,t1,t3,t4);}

/* err in chicken.compiler.support#check-signature in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_6872(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_6872,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6880,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:212: real-name */
t3=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6878 in err in chicken.compiler.support#check-signature in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6880(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_6880,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6884,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[3]);
t5=*((C_word*)lf[55]+1);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6834,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_6834(t9,t3,t4);}

/* k6882 in k6878 in err in chicken.compiler.support#check-signature in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6884,2,av);}
/* support.scm:210: quit-compiling */
t2=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[54];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* loop in chicken.compiler.support#check-signature in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
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
loop:
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_6893,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* support.scm:215: err */
t4=((C_word*)t0)[2];
f_6872(t4,t1);}}
else{
t4=C_i_symbolp(t3);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(t2))){
/* support.scm:217: err */
t5=((C_word*)t0)[2];
f_6872(t5,t1);}
else{
t5=C_i_cdr(t2);
t6=C_i_cdr(t3);
/* support.scm:218: loop */
t8=t1;
t9=t5;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}}}

/* chicken.compiler.support#stringify in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6937,3,av);}
a=C_alloc(4);
if(C_truep(C_i_stringp(t2))){
t3=t2;
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
/* support.scm:225: scheme#symbol->string */
t3=*((C_word*)lf[57]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6956,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:226: chicken.base#open-output-string */
t4=*((C_word*)lf[60]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* k6954 in chicken.compiler.support#stringify in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6956(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6956,2,av);}
a=C_alloc(4);
t2=t1;
t3=C_i_check_port_2(t2,C_fix(2),C_SCHEME_TRUE,lf[58]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6962,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:226: ##sys#print */
t5=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k6960 in k6954 in chicken.compiler.support#stringify in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6962,2,av);}
/* support.scm:226: chicken.base#get-output-string */
t2=*((C_word*)lf[59]+1);{
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

/* chicken.compiler.support#symbolify in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6967,3,av);}
a=C_alloc(4);
if(C_truep(C_i_symbolp(t2))){
t3=t2;
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_stringp(t2))){
/* support.scm:230: scheme#string->symbol */
t3=*((C_word*)lf[62]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6990,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:231: chicken.base#open-output-string */
t4=*((C_word*)lf[60]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* k6988 in chicken.compiler.support#symbolify in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6990,2,av);}
a=C_alloc(4);
t2=t1;
t3=C_i_check_port_2(t2,C_fix(2),C_SCHEME_TRUE,lf[58]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6996,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:231: ##sys#print */
t5=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k6994 in k6988 in chicken.compiler.support#symbolify in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6996,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6999,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:231: chicken.base#get-output-string */
t3=*((C_word*)lf[59]+1);{
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

/* k6997 in k6994 in k6988 in chicken.compiler.support#symbolify in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_6999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6999,2,av);}
/* support.scm:231: scheme#string->symbol */
t2=*((C_word*)lf[62]+1);{
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

/* chicken.compiler.support#build-lambda-list in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7001(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_7001,5,av);}
a=C_alloc(6);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7007,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_7007(t8,t1,t2,t3);}

/* loop in chicken.compiler.support#build-lambda-list in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_7007(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,0,3)))){
C_save_and_reclaim_args((void *)trf_7007,4,t0,t1,t2,t3);}
a=C_alloc(33);
t4=t3;
t5=C_i_zerop(t4);
t6=(C_truep(t5)?t5:C_i_nullp(t2));
if(C_truep(t6)){
t7=((C_word*)t0)[2];
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=(C_truep(t7)?t7:C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t7=C_i_car(t2);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7029,a[2]=t1,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=t2;
t11=C_u_i_cdr(t10);
t12=t3;
t13=C_s_a_i_minus(&a,2,t12,C_fix(1));
/* support.scm:236: loop */
t15=t9;
t16=t11;
t17=t13;
t1=t15;
t2=t16;
t3=t17;
goto loop;}}

/* k7027 in loop in chicken.compiler.support#build-lambda-list in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7029,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.compiler.support#c-ify-string in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7038(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7038,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7050,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7054,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* string->list */
t5=*((C_word*)lf[69]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7048 in chicken.compiler.support#c-ify-string in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7050,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,C_make_character(34),t1);
/* list->string */
t3=*((C_word*)lf[65]+1);{
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

/* k7052 in chicken.compiler.support#c-ify-string in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7054,2,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7056,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_7056(t5,((C_word*)t0)[2],t1);}

/* loop in k7052 in chicken.compiler.support#c-ify-string in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_7056(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_7056,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[66];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=t3;
t5=C_fix(C_character_code(t4));
t6=t5;
t7=C_fixnum_lessp(t6,C_fix(32));
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7078,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t6,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t7)){
t9=t8;
f_7078(t9,t7);}
else{
t9=C_fixnum_greater_or_equal_p(t6,C_fix(127));
if(C_truep(t9)){
t10=t8;
f_7078(t10,t9);}
else{
t10=C_u_i_memq(t4,lf[73]);
t11=t8;
f_7078(t11,t10);}}}}

/* k7076 in loop in k7052 in chicken.compiler.support#c-ify-string in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_7078(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7078,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7085,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[5],C_fix(8)))){
t3=t2;
f_7085(t3,lf[71]);}
else{
t3=C_fixnum_lessp(((C_word*)t0)[5],C_fix(64));
t4=t2;
f_7085(t4,(C_truep(t3)?lf[72]:C_SCHEME_END_OF_LIST));}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7121,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* support.scm:255: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_7056(t5,t2,t4);}}

/* k7083 in k7076 in loop in k7052 in chicken.compiler.support#c-ify-string in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_7085(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_7085,2,t0,t1);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7089,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7099,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#fixnum->string */
t5=*((C_word*)lf[70]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(8);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k7087 in k7083 in k7076 in loop in k7052 in chicken.compiler.support#c-ify-string in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7089(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7089,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7093,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
t5=C_u_i_cdr(t4);
/* support.scm:254: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_7056(t6,t3,t5);}

/* k7091 in k7087 in k7083 in k7076 in loop in k7052 in chicken.compiler.support#c-ify-string in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7093,2,av);}
/* support.scm:249: scheme#append */
t2=*((C_word*)lf[67]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[68];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k7097 in k7083 in k7076 in loop in k7052 in chicken.compiler.support#c-ify-string in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7099,2,av);}
/* string->list */
t2=*((C_word*)lf[69]+1);{
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

/* k7119 in k7076 in loop in k7052 in chicken.compiler.support#c-ify-string in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7121,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.compiler.support#valid-c-identifier? in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7137,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7141,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7185,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm:259: chicken.string#->string */
t5=*((C_word*)lf[75]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7139 in chicken.compiler.support#valid-c-identifier? in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7141(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(2,c,3)))){
C_save_and_reclaim((void *)f_7141,2,av);}
a=C_alloc(2);
if(C_truep(C_i_pairp(t1))){
t2=C_u_i_car(t1);
t3=C_u_i_char_alphabeticp(t2);
t4=(C_truep(t3)?t3:C_u_i_char_equalp(C_make_character(95),t2));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7162,tmp=(C_word)a,a+=2,tmp);
t6=C_u_i_cdr(t1);
/* support.scm:263: every */
f_5520(((C_word*)t0)[2],t5,t6);}
else{
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a7161 in k7139 in chicken.compiler.support#valid-c-identifier? in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7162(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7162,3,av);}
t3=C_u_i_char_alphabeticp(t2);
if(C_truep(t3)){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_u_i_char_numericp(t2);
if(C_truep(t4)){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=t2;
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_u_i_char_equalp(C_make_character(95),t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}}

/* k7183 in chicken.compiler.support#valid-c-identifier? in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7185(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7185,2,av);}
/* string->list */
t2=*((C_word*)lf[69]+1);{
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

/* chicken.compiler.support#bytes->words in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7187,3,av);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=stub942(C_SCHEME_UNDEFINED,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.compiler.support#words->bytes in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7194,3,av);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=stub947(C_SCHEME_UNDEFINED,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.compiler.support#check-and-open-input-file in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_7201,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
if(C_truep(C_i_string_equal_p(t2,lf[79]))){
t4=*((C_word*)lf[80]+1);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=*((C_word*)lf[80]+1);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7214,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:273: chicken.file#file-exists? */
t5=*((C_word*)lf[84]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k7212 in chicken.compiler.support#check-and-open-input-file in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7214,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
/* support.scm:273: scheme#open-input-file */
t2=*((C_word*)lf[81]+1);{
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
else{
t2=C_i_nullp(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7226,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_7226(t4,t2);}
else{
t4=C_i_car(((C_word*)t0)[4]);
t5=t3;
f_7226(t5,C_i_not(t4));}}}

/* k7224 in k7212 in chicken.compiler.support#check-and-open-input-file in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_7226(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_7226,2,t0,t1);}
if(C_truep(t1)){
/* support.scm:275: quit-compiling */
t2=*((C_word*)lf[37]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[82];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=C_i_car(((C_word*)t0)[4]);
/* support.scm:276: quit-compiling */
t3=*((C_word*)lf[37]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[83];
av2[3]=t2;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* chicken.compiler.support#close-checked-input-file in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7245,4,av);}
if(C_truep(C_i_string_equal_p(t3,lf[86]))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* support.scm:279: scheme#close-input-port */
t4=*((C_word*)lf[87]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* chicken.compiler.support#fold-inner in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7257,4,av);}
a=C_alloc(4);
t4=C_i_cdr(t3);
if(C_truep(C_i_nullp(t4))){
t5=t3;
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7271,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:284: scheme#reverse */
t6=*((C_word*)lf[89]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k7269 in chicken.compiler.support#fold-inner in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7271(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7271,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7273,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_7273(t5,((C_word*)t0)[3],t1);}

/* fold in k7269 in chicken.compiler.support#fold-inner in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_7273(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7273,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_cddr(t2);
if(C_truep(C_i_nullp(t3))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_u_i_car(t5);
t7=t2;
t8=C_u_i_car(t7);
t9=C_a_i_list2(&a,2,t6,t8);{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t9;
C_apply(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7299,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=C_u_i_cdr(t5);
/* support.scm:289: fold */
t11=t4;
t12=t6;
t1=t11;
t2=t12;
goto loop;}}

/* k7297 in fold in k7269 in chicken.compiler.support#fold-inner in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7299,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=C_a_i_list2(&a,2,t1,t3);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t4;
C_apply(4,av2);}}

/* chicken.compiler.support#follow-without-loop in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_7313(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_7313,4,t1,t2,t3,t4);}
a=C_alloc(7);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7319,a[2]=t4,a[3]=t6,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7319(t8,t1,t2,C_SCHEME_END_OF_LIST);}

/* loop in chicken.compiler.support#follow-without-loop in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_7319(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_7319,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_member(t2,t3))){
/* support.scm:294: abort */
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7334,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:295: proc */
t5=((C_word*)t0)[4];{
C_word av2[4];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* a7333 in loop in chicken.compiler.support#follow-without-loop in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7334,3,av);}
a=C_alloc(3);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
/* support.scm:295: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_7319(t4,t1,t2,t3);}

/* a7349 in k11451 in k11445 in k11442 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7350,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7358,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:298: scheme#symbol->string */
t5=*((C_word*)lf[57]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7356 in a7349 in k11451 in k11445 in k11442 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7358,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7362,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:298: scheme#symbol->string */
t4=*((C_word*)lf[57]+1);{
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

/* k7360 in k7356 in a7349 in k11451 in k11445 in k11442 in chicken.compiler.support#emit-global-inline-file in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7362,2,av);}
/* support.scm:298: scheme#string<? */
t2=*((C_word*)lf[230]+1);{
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

/* chicken.compiler.support#read-expressions in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7364(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_7364,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[80]+1):C_i_car(t2));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7375,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:301: scheme#read */
t7=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k7373 in chicken.compiler.support#read-expressions in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_7375,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7377,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_7377(t5,((C_word*)t0)[3],t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* doloop993 in k7373 in chicken.compiler.support#read-expressions in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_7377(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_7377,5,t0,t1,t2,t3,t4);}
a=C_alloc(7);
if(C_truep(C_eofp(t2))){
/* support.scm:304: scheme#reverse */
t5=*((C_word*)lf[89]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t1;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7394,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* support.scm:301: scheme#read */
t6=*((C_word*)lf[92]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k7392 in doloop993 in k7373 in chicken.compiler.support#read-expressions in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,4)))){
C_save_and_reclaim((void *)f_7394,2,av);}
a=C_alloc(32);
t2=((C_word*)t0)[2];
t3=C_s_a_i_plus(&a,2,t2,C_fix(1));
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t5=((C_word*)((C_word*)t0)[5])[1];
f_7377(t5,((C_word*)t0)[6],t1,t3,t4);}

/* chicken.compiler.support#constant? in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7408(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7408,3,av);}
a=C_alloc(4);
t3=C_i_numberp(t2);
if(C_truep(t3)){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_charp(t2);
if(C_truep(t4)){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_stringp(t2);
if(C_truep(t5)){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_booleanp(t2);
if(C_truep(t6)){
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_eofp(t2);
if(C_truep(t7)){
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7442,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:315: chicken.blob#blob? */
t9=*((C_word*)lf[96]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}}}}}

/* k7440 in chicken.compiler.support#constant? in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7442,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_vectorp(((C_word*)t0)[3]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7454,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:317: ##sys#srfi-4-vector? */
t4=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}}

/* k7452 in k7440 in chicken.compiler.support#constant? in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7454,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_eqp(lf[94],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* chicken.compiler.support#collapsable-literal? in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7470(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7470,3,av);}
t3=C_booleanp(t2);
if(C_truep(t3)){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_charp(t2);
if(C_truep(t4)){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eofp(t2);
if(C_truep(t5)){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_i_numberp(t2);
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=(C_truep(t6)?t6:C_i_symbolp(t2));
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}}

/* chicken.compiler.support#immediate? in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7500,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7504,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7544,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm:328: big-fixnum? */
t5=*((C_word*)lf[99]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=t3;
f_7504(t4,C_SCHEME_FALSE);}}

/* k7502 in chicken.compiler.support#immediate? in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_7504(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_7504,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_eqp(C_SCHEME_UNDEFINED,((C_word*)t0)[3]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_nullp(((C_word*)t0)[3]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eofp(((C_word*)t0)[3]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_charp(((C_word*)t0)[3]);
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=(C_truep(t5)?t5:C_booleanp(((C_word*)t0)[3]));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}}}}

/* k7542 in chicken.compiler.support#immediate? in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7544,2,av);}
t2=((C_word*)t0)[2];
f_7504(t2,C_i_not(t1));}

/* chicken.compiler.support#basic-literal? in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7546,3,av);}
a=C_alloc(4);
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_symbolp(t2);
if(C_truep(t4)){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7562,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:338: constant? */
t6=*((C_word*)lf[93]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}}

/* k7560 in chicken.compiler.support#basic-literal? in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7562,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7568,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_vectorp(((C_word*)t0)[3]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7600,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:339: scheme#vector->list */
t4=*((C_word*)lf[101]+1);{
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
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_7568(2,av2);}}}}

/* k7566 in k7560 in chicken.compiler.support#basic-literal? in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7568,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7583,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
/* support.scm:341: basic-literal? */
t5=*((C_word*)lf[100]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* k7581 in k7566 in k7560 in chicken.compiler.support#basic-literal? in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7583,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* support.scm:342: basic-literal? */
t4=*((C_word*)lf[100]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k7598 in k7560 in chicken.compiler.support#basic-literal? in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7600,2,av);}
/* support.scm:339: every */
f_5520(((C_word*)t0)[2],*((C_word*)lf[100]+1),t1);}

/* chicken.compiler.support#canonicalize-begin-body in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7602,3,av);}
a=C_alloc(5);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7608,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_7608(t6,t1,t2);}

/* loop in chicken.compiler.support#canonicalize-begin-body in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_7608(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_7608,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[103];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
t4=t2;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_u_i_car(t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=t2;
t5=C_u_i_car(t4);
t6=C_i_equalp(t5,lf[104]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7632,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t6)){
t8=t7;
f_7632(t8,t6);}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7663,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* support.scm:353: constant? */
t9=*((C_word*)lf[93]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}}}

/* k7630 in loop in chicken.compiler.support#canonicalize-begin-body in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_7632(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7632,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* support.scm:355: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7608(t4,((C_word*)t0)[4],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7658,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:356: chicken.base#gensym */
t3=*((C_word*)lf[106]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[107];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k7646 in k7656 in k7630 in loop in chicken.compiler.support#canonicalize-begin-body in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7648,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[105],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7656 in k7630 in loop in chicken.compiler.support#canonicalize-begin-body in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7658(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7658,2,av);}
a=C_alloc(13);
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=C_a_i_list(&a,2,t1,t3);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7648,a[2]=((C_word*)t0)[3],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=((C_word*)t0)[2];
t9=C_u_i_cdr(t8);
/* support.scm:357: loop */
t10=((C_word*)((C_word*)t0)[4])[1];
f_7608(t10,t7,t9);}

/* k7661 in loop in chicken.compiler.support#canonicalize-begin-body in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7663,2,av);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_7632(t3,t2);}
else{
t2=((C_word*)t0)[2];
f_7632(t2,C_i_equalp(((C_word*)t0)[3],lf[108]));}}

/* k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7677,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7680,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:362: chicken.condition#condition-property-accessor */
t4=*((C_word*)lf[527]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[478];
av2[3]=lf[479];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7680(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(51,c,6)))){
C_save_and_reclaim((void *)f_7680,2,av);}
a=C_alloc(51);
t2=t1;
t3=C_mutate((C_word*)lf[109]+1 /* (set! chicken.compiler.support#string->expr ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7681,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[117]+1 /* (set! chicken.compiler.support#llist-length ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7799,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[118]+1 /* (set! chicken.compiler.support#llist-match? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7802,tmp=(C_word)a,a+=2,tmp));
t6=lf[119] /* chicken.compiler.support#profile-info-vector-name */ =C_SCHEME_FALSE;;
t7=C_mutate((C_word*)lf[120]+1 /* (set! chicken.compiler.support#reset-profile-info-vector-name! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7847,tmp=(C_word)a,a+=2,tmp));
t8=lf[123] /* chicken.compiler.support#profile-lambda-list */ =C_SCHEME_END_OF_LIST;;
t9=lf[124] /* chicken.compiler.support#profile-lambda-index */ =C_fix(0);;
t10=C_mutate((C_word*)lf[125]+1 /* (set! chicken.compiler.support#expand-profile-lambda ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7856,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[131]+1 /* (set! chicken.compiler.support#profiling-prelude-exps ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7911,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[136]+1 /* (set! chicken.compiler.support#db-get ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8000,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[138]+1 /* (set! chicken.compiler.support#db-get-all ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8018,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[140]+1 /* (set! chicken.compiler.support#db-put! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8036,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[142]+1 /* (set! chicken.compiler.support#collect! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8082,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[143]+1 /* (set! chicken.compiler.support#db-get-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8134,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate((C_word*)lf[144]+1 /* (set! chicken.compiler.support#get-line ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8143,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate((C_word*)lf[146]+1 /* (set! chicken.compiler.support#get-line-2 ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8153,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate((C_word*)lf[147]+1 /* (set! chicken.compiler.support#display-line-number-database ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8194,tmp=(C_word)a,a+=2,tmp));
t20=C_mutate((C_word*)lf[149]+1 /* (set! chicken.compiler.support#make-node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8266,tmp=(C_word)a,a+=2,tmp));
t21=C_mutate((C_word*)lf[151]+1 /* (set! chicken.compiler.support#node? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8272,tmp=(C_word)a,a+=2,tmp));
t22=C_mutate((C_word*)lf[152]+1 /* (set! chicken.compiler.support#node-class ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8278,tmp=(C_word)a,a+=2,tmp));
t23=C_mutate((C_word*)lf[154]+1 /* (set! chicken.compiler.support#node-class-set! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8287,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate((C_word*)lf[156]+1 /* (set! chicken.compiler.support#node-parameters ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8296,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate((C_word*)lf[158]+1 /* (set! chicken.compiler.support#node-parameters-set! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8305,tmp=(C_word)a,a+=2,tmp));
t26=C_mutate((C_word*)lf[159]+1 /* (set! chicken.compiler.support#node-subexpressions ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8314,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate((C_word*)lf[161]+1 /* (set! chicken.compiler.support#node-subexpressions-set! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8323,tmp=(C_word)a,a+=2,tmp));
t28=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8333,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t29=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_17256,tmp=(C_word)a,a+=2,tmp);
/* support.scm:492: ##sys#register-record-printer */
t30=*((C_word*)lf[526]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t30;
av2[1]=t28;
av2[2]=lf[150];
av2[3]=t29;
((C_proc)(void*)(*((C_word*)t30+1)))(4,av2);}}

/* chicken.compiler.support#string->expr in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_7681,3,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7685,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7690,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:364: scheme#call-with-current-continuation */
t5=*((C_word*)lf[116]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7683 in chicken.compiler.support#string->expr in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7685(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7685,2,av);}
/* support.scm:363: g1101 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7689 in chicken.compiler.support#string->expr in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_7690,3,av);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7696,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7721,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:364: chicken.condition#with-exception-handler */
t5=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a7695 in a7689 in chicken.compiler.support#string->expr in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7696,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7702,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* support.scm:364: k1098 */
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a7701 in a7695 in a7689 in chicken.compiler.support#string->expr in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7702,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7710,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7713,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:367: exn? */
t4=((C_word*)t0)[5];{
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

/* k7708 in a7701 in a7695 in a7689 in chicken.compiler.support#string->expr in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7710,2,av);}
/* support.scm:365: quit-compiling */
t2=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[110];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7711 in a7701 in a7695 in a7689 in chicken.compiler.support#string->expr in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7713,2,av);}
if(C_truep(t1)){
/* support.scm:368: exn-msg */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
/* support.scm:369: chicken.string#->string */
t2=*((C_word*)lf[75]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* a7720 in a7689 in chicken.compiler.support#string->expr in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_7721,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7723,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7780,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7797,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp14754 */
t5=t2;
f_7723(t5,t4);}

/* tmp14754 in a7720 in a7689 in chicken.compiler.support#string->expr in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_7723(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_7723,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7727,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7749,tmp=(C_word)a,a+=2,tmp);
/* support.scm:370: chicken.port#with-input-from-string */
t4=*((C_word*)lf[114]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k7725 in tmp14754 in a7720 in a7689 in chicken.compiler.support#string->expr in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7727,2,av);}
a=C_alloc(3);
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[111];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(t1);
t3=C_i_nullp(t2);
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?C_u_i_car(t1):C_a_i_cons(&a,2,lf[112],t1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a7748 in tmp14754 in a7720 in a7689 in chicken.compiler.support#string->expr in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7749,2,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7755,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_7755(t5,t1,C_SCHEME_END_OF_LIST);}

/* loop in a7748 in tmp14754 in a7720 in a7689 in chicken.compiler.support#string->expr in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_7755(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7755,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7759,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* support.scm:374: scheme#read */
t4=*((C_word*)lf[92]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7757 in loop in a7748 in tmp14754 in a7720 in a7689 in chicken.compiler.support#string->expr in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7759(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7759,2,av);}
a=C_alloc(3);
if(C_truep(C_eofp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7772,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:376: scheme#reverse */
t3=*((C_word*)lf[89]+1);{
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
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
/* support.scm:377: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_7755(t3,((C_word*)t0)[2],t2);}}

/* k7770 in k7757 in loop in a7748 in tmp14754 in a7720 in a7689 in chicken.compiler.support#string->expr in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7772,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[113]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* tmp24755 in a7720 in a7689 in chicken.compiler.support#string->expr in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_7780(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_7780,3,t0,t1,t2);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7786,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:364: k1098 */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a7785 in tmp24755 in a7720 in a7689 in chicken.compiler.support#string->expr in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7786,2,av);}{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
C_apply_values(3,av2);}}

/* k7795 in a7720 in a7689 in chicken.compiler.support#string->expr in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7797(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7797,2,av);}
a=C_alloc(3);
/* tmp24755 */
t2=((C_word*)t0)[2];
f_7780(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* chicken.compiler.support#llist-length in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7799,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_u_i_length(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.compiler.support#llist-match? in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,3)))){
C_save_and_reclaim((void *)f_7802,4,av);}
a=C_alloc(2);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7808,tmp=(C_word)a,a+=2,tmp);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=(
  f_7808(t2,t3)
);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* loop in chicken.compiler.support#llist-match? in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static C_word C_fcall f_7808(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t1))){
return(C_i_nullp(t2));}
else{
t3=C_i_symbolp(t1);
if(C_truep(t3)){
return(t3);}
else{
if(C_truep(C_i_nullp(t2))){
return(C_i_not_pair_p(t1));}
else{
t4=C_i_cdr(t1);
t5=C_i_cdr(t2);
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}}}

/* chicken.compiler.support#reset-profile-info-vector-name! in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7847,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7852,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:398: make-random-name */
t3=*((C_word*)lf[121]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[122];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7850 in chicken.compiler.support#reset-profile-info-vector-name! in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7852(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7852,2,av);}
t2=C_mutate(&lf[119] /* (set! chicken.compiler.support#profile-info-vector-name ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.compiler.support#expand-profile-lambda in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7856(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7856,5,av);}
a=C_alloc(7);
t5=lf[124];
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7860,a[2]=t2,a[3]=t5,a[4]=t3,a[5]=t4,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* support.scm:405: chicken.base#gensym */
t7=*((C_word*)lf[106]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k7858 in chicken.compiler.support#expand-profile-lambda in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7860(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(131,c,1)))){
C_save_and_reclaim((void *)f_7860,2,av);}
a=C_alloc(131);
t2=((C_word*)t0)[2];
t3=lf[123];
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t5=C_a_i_cons(&a,2,t4,lf[123]);
t6=C_mutate(&lf[123] /* (set! chicken.compiler.support#profile-lambda-list ...) */,t5);
t7=C_mutate(&lf[124] /* (set! chicken.compiler.support#profile-lambda-index ...) */,C_s_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1)));
t8=C_a_i_list(&a,2,lf[94],((C_word*)t0)[3]);
t9=C_a_i_list(&a,3,lf[126],t8,lf[119]);
t10=C_a_i_list(&a,3,lf[127],C_SCHEME_END_OF_LIST,t9);
t11=C_a_i_list(&a,3,lf[127],((C_word*)t0)[4],((C_word*)t0)[5]);
t12=C_a_i_list(&a,3,lf[128],t11,t1);
t13=C_a_i_list(&a,3,lf[127],C_SCHEME_END_OF_LIST,t12);
t14=C_a_i_list(&a,2,lf[94],((C_word*)t0)[3]);
t15=C_a_i_list(&a,3,lf[129],t14,lf[119]);
t16=C_a_i_list(&a,3,lf[127],C_SCHEME_END_OF_LIST,t15);
t17=C_a_i_list(&a,4,lf[130],t10,t13,t16);
t18=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t18;
av2[1]=C_a_i_list(&a,3,lf[127],t1,t17);
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}

/* chicken.compiler.support#profiling-prelude-exps in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7911(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(46,c,3)))){
C_save_and_reclaim((void *)f_7911,3,av);}
a=C_alloc(46);
t3=C_i_length(lf[123]);
t4=C_a_i_list(&a,2,lf[94],t3);
t5=C_a_i_list(&a,2,lf[94],t2);
t6=C_a_i_list(&a,3,lf[132],t4,t5);
t7=C_a_i_list(&a,3,lf[133],lf[119],t6);
t8=t7;
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=lf[123];
t14=C_i_check_list_2(lf[123],lf[134]);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7948,a[2]=t1,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7950,a[2]=t11,a[3]=t17,a[4]=t12,tmp=(C_word)a,a+=5,tmp));
t19=((C_word*)t17)[1];
f_7950(t19,t15,lf[123]);}

/* k7946 in chicken.compiler.support#profiling-prelude-exps in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_7948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7948,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop1156 in chicken.compiler.support#profiling-prelude-exps in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_7950(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(27,0,2)))){
C_save_and_reclaim_args((void *)trf_7950,3,t0,t1,t2);}
a=C_alloc(27);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_list(&a,2,lf[94],t4);
t6=C_u_i_cdr(t3);
t7=C_a_i_list(&a,2,lf[94],t6);
t8=C_a_i_list(&a,4,lf[135],lf[119],t5,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t12=C_slot(t2,C_fix(1));
t14=t1;
t15=t12;
t1=t14;
t2=t15;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.compiler.support#db-get in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_8000,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8004,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:430: chicken.internal#hash-table-ref */
t6=*((C_word*)lf[137]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k8002 in chicken.compiler.support#db-get in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8004,2,av);}
if(C_truep(t1)){
t2=C_i_assq(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?C_slot(t2,C_fix(1)):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.compiler.support#db-get-all in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_8018,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8022,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* support.scm:436: chicken.internal#hash-table-ref */
t6=*((C_word*)lf[137]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k8020 in chicken.compiler.support#db-get-all in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8022(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_8022,2,av);}
a=C_alloc(9);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8030,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=((C_word*)t0)[2];
t5=t3;
t6=((C_word*)t0)[3];
t7=C_i_check_list_2(t6,lf[139]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5813,a[2]=t5,a[3]=t9,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_5813(t11,t4,t6);}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a8029 in k8020 in chicken.compiler.support#db-get-all in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8030,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_assq(t2,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.compiler.support#db-put! in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8036(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_8036,6,av);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8040,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* support.scm:442: chicken.internal#hash-table-ref */
t7=*((C_word*)lf[137]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k8038 in chicken.compiler.support#db-put! in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8040(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8040,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_setslot(t2,C_fix(1),((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(((C_word*)t0)[4])){
t3=C_slot(t1,C_fix(1));
t4=((C_word*)t0)[2];
t5=((C_word*)t0)[4];
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,t6,t3);
t8=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_i_setslot(t1,C_fix(1),t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}
else{
if(C_truep(((C_word*)t0)[4])){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[4]);
t3=C_a_i_list1(&a,1,t2);
/* support.scm:447: chicken.internal#hash-table-set! */
t4=*((C_word*)lf[141]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* chicken.compiler.support#collect! in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8082(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_8082,6,av);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8086,a[2]=t4,a[3]=t5,a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* support.scm:450: chicken.internal#hash-table-ref */
t7=*((C_word*)lf[137]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k8084 in chicken.compiler.support#collect! in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8086(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_8086,2,av);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_slot(t2,C_fix(1));
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_setslot(t2,C_fix(1),t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
t4=C_slot(t1,C_fix(1));
t5=((C_word*)t0)[2];
t6=C_a_i_cons(&a,2,t5,t3);
t7=C_a_i_cons(&a,2,t6,t4);
t8=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_i_setslot(t1,C_fix(1),t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}
else{
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list1(&a,1,t2);
/* support.scm:455: chicken.internal#hash-table-set! */
t4=*((C_word*)lf[141]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* chicken.compiler.support#db-get-list in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8134(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_8134,5,av);}
a=C_alloc(3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8138,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:458: db-get */
t6=*((C_word*)lf[136]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8136 in chicken.compiler.support#db-get-list in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8138,2,av);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.compiler.support#get-line in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8143,3,av);}
t3=C_i_car(t2);
/* support.scm:465: db-get */
t4=*((C_word*)lf[136]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=*((C_word*)lf[145]+1);
av2[3]=t3;
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* chicken.compiler.support#get-line-2 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_8153,3,av);}
a=C_alloc(5);
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8160,a[2]=t1,a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:469: chicken.internal#hash-table-ref */
t6=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=*((C_word*)lf[145]+1);
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k8158 in chicken.compiler.support#get-line-2 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_8160,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8163,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=C_i_cdr(t2);
t5=t3;
f_8163(t5,C_i_assq(((C_word*)t0)[4],t4));}
else{
t4=t3;
f_8163(t4,C_SCHEME_FALSE);}}

/* k8161 in k8158 in chicken.compiler.support#get-line-2 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_8163(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_8163,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8167,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:470: g1239 */
t3=t2;
f_8167(t3,((C_word*)t0)[3],t1);}
else{
/* support.scm:472: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}

/* g1239 in k8161 in k8158 in chicken.compiler.support#get-line-2 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_8167(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_8167,3,t0,t1,t2);}
t3=C_i_car(((C_word*)t0)[2]);
t4=C_i_cdr(t2);
/* support.scm:471: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_values(4,av2);}}

/* chicken.compiler.support#display-line-number-database in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_8194,2,av);}
a=C_alloc(2);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8200,tmp=(C_word)a,a+=2,tmp);
/* support.scm:475: chicken.internal#hash-table-for-each */
t3=*((C_word*)lf[148]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=*((C_word*)lf[145]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a8199 in chicken.compiler.support#display-line-number-database in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8200(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8200,4,av);}
a=C_alloc(5);
if(C_truep(t3)){
t4=*((C_word*)lf[24]+1);
t5=*((C_word*)lf[24]+1);
t6=C_i_check_port_2(*((C_word*)lf[24]+1),C_fix(2),C_SCHEME_TRUE,lf[25]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8210,a[2]=t1,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:477: ##sys#print */
t8=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=*((C_word*)lf[24]+1);
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k8208 in a8199 in chicken.compiler.support#display-line-number-database in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_8210,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8213,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:477: ##sys#write-char-0 */
t3=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k8211 in k8208 in a8199 in chicken.compiler.support#display-line-number-database in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8213(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8213,2,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8216,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)t0)[4];
t8=C_i_check_list_2(t7,lf[134]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8229,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8231,a[2]=t5,a[3]=t11,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_8231(t13,t9,t7);}

/* k8214 in k8211 in k8208 in a8199 in chicken.compiler.support#display-line-number-database in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8216,2,av);}
/* support.scm:477: ##sys#write-char-0 */
t2=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k8227 in k8211 in k8208 in a8199 in chicken.compiler.support#display-line-number-database in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8229,2,av);}
/* support.scm:477: ##sys#print */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* map-loop1251 in k8211 in k8208 in a8199 in chicken.compiler.support#display-line-number-database in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_8231(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8231,3,t0,t1,t2);}
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

/* chicken.compiler.support#make-node in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_8266,5,av);}
a=C_alloc(5);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_record4(&a,4,lf[150],t2,t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.compiler.support#node? in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8272,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[150]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.compiler.support#node-class in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8278,3,av);}
t3=C_i_check_structure_2(t2,lf[150],lf[153]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.compiler.support#node-class-set! in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8287,4,av);}
t4=C_i_check_structure_2(t2,lf[150],C_SCHEME_FALSE);
/* support.scm:485: ##sys#block-set! */
t5=*((C_word*)lf[155]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(1);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* chicken.compiler.support#node-parameters in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8296,3,av);}
t3=C_i_check_structure_2(t2,lf[150],lf[157]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(2));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.compiler.support#node-parameters-set! in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8305,4,av);}
t4=C_i_check_structure_2(t2,lf[150],C_SCHEME_FALSE);
/* support.scm:485: ##sys#block-set! */
t5=*((C_word*)lf[155]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(2);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* chicken.compiler.support#node-subexpressions in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8314,3,av);}
t3=C_i_check_structure_2(t2,lf[150],lf[160]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(3));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.compiler.support#node-subexpressions-set! in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8323,4,av);}
t4=C_i_check_structure_2(t2,lf[150],C_SCHEME_FALSE);
/* support.scm:485: ##sys#block-set! */
t5=*((C_word*)lf[155]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(3);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8333(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(152,c,8)))){
C_save_and_reclaim((void *)f_8333,2,av);}
a=C_alloc(152);
t2=C_mutate((C_word*)lf[149]+1 /* (set! chicken.compiler.support#make-node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8335,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate((C_word*)lf[162]+1 /* (set! chicken.compiler.support#varnode ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8341,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[164]+1 /* (set! chicken.compiler.support#qnode ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8356,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[165]+1 /* (set! chicken.compiler.support#build-node-graph ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8371,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[200]+1 /* (set! chicken.compiler.support#build-expression-tree ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9567,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[214]+1 /* (set! chicken.compiler.support#fold-boolean ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10444,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[216]+1 /* (set! chicken.compiler.support#inline-lambda-bindings ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10496,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[224]+1 /* (set! chicken.compiler.support#tree-copy ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11176,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate((C_word*)lf[225]+1 /* (set! chicken.compiler.support#copy-node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11206,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[226]+1 /* (set! chicken.compiler.support#copy-node! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11244,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[227]+1 /* (set! chicken.compiler.support#emit-global-inline-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11440,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[252]+1 /* (set! chicken.compiler.support#load-inline-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11700,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[255]+1 /* (set! chicken.compiler.support#match-node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11756,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[258]+1 /* (set! chicken.compiler.support#expression-has-side-effects? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11989,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[261]+1 /* (set! chicken.compiler.support#simple-lambda-node? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12098,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate((C_word*)lf[262]+1 /* (set! chicken.compiler.support#dump-undefined-globals ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12224,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate((C_word*)lf[267]+1 /* (set! chicken.compiler.support#dump-defined-globals ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12265,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate((C_word*)lf[268]+1 /* (set! chicken.compiler.support#dump-global-refs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12302,tmp=(C_word)a,a+=2,tmp));
t20=C_mutate((C_word*)lf[270]+1 /* (set! ##sys#toplevel-definition-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12351,tmp=(C_word)a,a+=2,tmp));
t21=C_set_block_item(lf[260] /* chicken.compiler.support#foreign-callback-stubs */,0,C_SCHEME_END_OF_LIST);
t22=C_mutate((C_word*)lf[277]+1 /* (set! chicken.compiler.support#make-foreign-callback-stub ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12385,tmp=(C_word)a,a+=2,tmp));
t23=C_mutate((C_word*)lf[279]+1 /* (set! chicken.compiler.support#foreign-callback-stub? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12391,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate((C_word*)lf[259]+1 /* (set! chicken.compiler.support#foreign-callback-stub-id ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12397,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate((C_word*)lf[281]+1 /* (set! chicken.compiler.support#foreign-callback-stub-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12406,tmp=(C_word)a,a+=2,tmp));
t26=C_mutate((C_word*)lf[283]+1 /* (set! chicken.compiler.support#foreign-callback-stub-qualifiers ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12415,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate((C_word*)lf[285]+1 /* (set! chicken.compiler.support#foreign-callback-stub-return-type ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12424,tmp=(C_word)a,a+=2,tmp));
t28=C_mutate((C_word*)lf[287]+1 /* (set! chicken.compiler.support#foreign-callback-stub-argument-types ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12433,tmp=(C_word)a,a+=2,tmp));
t29=C_mutate((C_word*)lf[289]+1 /* (set! chicken.compiler.support#register-foreign-callback-stub! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12442,tmp=(C_word)a,a+=2,tmp));
t30=lf[291] /* chicken.compiler.support#foreign-type-table */ =C_SCHEME_FALSE;;
t31=C_mutate((C_word*)lf[292]+1 /* (set! chicken.compiler.support#clear-foreign-type-table! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12471,tmp=(C_word)a,a+=2,tmp));
t32=C_mutate((C_word*)lf[295]+1 /* (set! chicken.compiler.support#register-foreign-type! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12484,tmp=(C_word)a,a+=2,tmp));
t33=C_mutate((C_word*)lf[296]+1 /* (set! chicken.compiler.support#lookup-foreign-type ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12538,tmp=(C_word)a,a+=2,tmp));
t34=lf[297];
t35=C_mutate((C_word*)lf[298]+1 /* (set! chicken.compiler.support#foreign-type-check ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12544,a[2]=t34,tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[390]+1 /* (set! chicken.compiler.support#foreign-type-convert-result ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13620,tmp=(C_word)a,a+=2,tmp));
t37=C_mutate((C_word*)lf[391]+1 /* (set! chicken.compiler.support#foreign-type-convert-argument ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13647,tmp=(C_word)a,a+=2,tmp));
t38=C_mutate((C_word*)lf[392]+1 /* (set! chicken.compiler.support#final-foreign-type ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13674,tmp=(C_word)a,a+=2,tmp));
t39=C_mutate((C_word*)lf[394]+1 /* (set! chicken.compiler.support#estimate-foreign-result-size ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13713,tmp=(C_word)a,a+=2,tmp));
t40=C_mutate((C_word*)lf[400]+1 /* (set! chicken.compiler.support#estimate-foreign-result-location-size ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14188,tmp=(C_word)a,a+=2,tmp));
t41=C_mutate((C_word*)lf[403]+1 /* (set! chicken.compiler.support#finish-foreign-result ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14638,tmp=(C_word)a,a+=2,tmp));
t42=C_mutate((C_word*)lf[417]+1 /* (set! chicken.compiler.support#foreign-type->scrutiny-type ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14906,tmp=(C_word)a,a+=2,tmp));
t43=C_mutate((C_word*)lf[440]+1 /* (set! chicken.compiler.support#scan-used-variables ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15512,tmp=(C_word)a,a+=2,tmp));
t44=C_mutate((C_word*)lf[441]+1 /* (set! chicken.compiler.support#scan-free-variables ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15667,tmp=(C_word)a,a+=2,tmp));
t45=C_mutate((C_word*)lf[442]+1 /* (set! chicken.compiler.support#chop-separator ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15897,tmp=(C_word)a,a+=2,tmp));
t46=C_mutate((C_word*)lf[445]+1 /* (set! chicken.compiler.support#make-block-variable-literal ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15921,tmp=(C_word)a,a+=2,tmp));
t47=C_mutate((C_word*)lf[447]+1 /* (set! chicken.compiler.support#block-variable-literal? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15927,tmp=(C_word)a,a+=2,tmp));
t48=C_mutate((C_word*)lf[448]+1 /* (set! chicken.compiler.support#block-variable-literal-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15933,tmp=(C_word)a,a+=2,tmp));
t49=C_mutate((C_word*)lf[121]+1 /* (set! chicken.compiler.support#make-random-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15942,tmp=(C_word)a,a+=2,tmp));
t50=lf[451] /* chicken.compiler.support#real-name-table */ =C_SCHEME_FALSE;;
t51=C_mutate((C_word*)lf[452]+1 /* (set! chicken.compiler.support#clear-real-name-table! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15989,tmp=(C_word)a,a+=2,tmp));
t52=C_mutate((C_word*)lf[453]+1 /* (set! chicken.compiler.support#set-real-name! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15996,tmp=(C_word)a,a+=2,tmp));
t53=C_mutate((C_word*)lf[454]+1 /* (set! chicken.compiler.support#get-real-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16002,tmp=(C_word)a,a+=2,tmp));
t54=C_mutate((C_word*)lf[55]+1 /* (set! chicken.compiler.support#real-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16009,tmp=(C_word)a,a+=2,tmp));
t55=C_mutate((C_word*)lf[461]+1 /* (set! chicken.compiler.support#real-name2 ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16128,tmp=(C_word)a,a+=2,tmp));
t56=C_mutate((C_word*)lf[462]+1 /* (set! chicken.compiler.support#display-real-name-table ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16140,tmp=(C_word)a,a+=2,tmp));
t57=C_mutate((C_word*)lf[463]+1 /* (set! chicken.compiler.support#source-info->string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16164,tmp=(C_word)a,a+=2,tmp));
t58=C_mutate((C_word*)lf[469]+1 /* (set! chicken.compiler.support#source-info->line ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16196,tmp=(C_word)a,a+=2,tmp));
t59=C_mutate((C_word*)lf[470]+1 /* (set! chicken.compiler.support#call-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16214,tmp=(C_word)a,a+=2,tmp));
t60=C_mutate((C_word*)lf[473]+1 /* (set! chicken.compiler.support#constant-form-eval ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16251,tmp=(C_word)a,a+=2,tmp));
t61=C_mutate(&lf[476] /* (set! chicken.compiler.support#encodeable-literal? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16493,tmp=(C_word)a,a+=2,tmp));
t62=C_mutate((C_word*)lf[483]+1 /* (set! chicken.compiler.support#dump-nodes ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16630,tmp=(C_word)a,a+=2,tmp));
t63=C_mutate((C_word*)lf[485]+1 /* (set! chicken.compiler.support#read-info-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16786,tmp=(C_word)a,a+=2,tmp));
t64=C_mutate((C_word*)lf[489]+1 /* (set! chicken.compiler.support#read/source-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16829,tmp=(C_word)a,a+=2,tmp));
t65=*((C_word*)lf[491]+1);
t66=C_mutate((C_word*)lf[491]+1 /* (set! ##sys#user-read-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16835,a[2]=t65,tmp=(C_word)a,a+=3,tmp));
t67=C_mutate((C_word*)lf[99]+1 /* (set! chicken.compiler.support#big-fixnum? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16929,tmp=(C_word)a,a+=2,tmp));
t68=C_mutate((C_word*)lf[498]+1 /* (set! chicken.compiler.support#small-bignum? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16953,tmp=(C_word)a,a+=2,tmp));
t69=C_mutate((C_word*)lf[274]+1 /* (set! chicken.compiler.support#hide-variable ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16977,tmp=(C_word)a,a+=2,tmp));
t70=C_mutate((C_word*)lf[500]+1 /* (set! chicken.compiler.support#export-variable ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16997,tmp=(C_word)a,a+=2,tmp));
t71=C_mutate((C_word*)lf[273]+1 /* (set! chicken.compiler.support#variable-hidden? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_17017,tmp=(C_word)a,a+=2,tmp));
t72=C_mutate((C_word*)lf[251]+1 /* (set! chicken.compiler.support#variable-visible? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_17039,tmp=(C_word)a,a+=2,tmp));
t73=C_mutate((C_word*)lf[502]+1 /* (set! chicken.compiler.support#mark-variable ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_17064,tmp=(C_word)a,a+=2,tmp));
t74=C_mutate((C_word*)lf[503]+1 /* (set! chicken.compiler.support#variable-mark ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_17079,tmp=(C_word)a,a+=2,tmp));
t75=C_mutate((C_word*)lf[504]+1 /* (set! chicken.compiler.support#intrinsic? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_17085,tmp=(C_word)a,a+=2,tmp));
t76=C_mutate((C_word*)lf[506]+1 /* (set! chicken.compiler.support#foldable? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_17096,tmp=(C_word)a,a+=2,tmp));
t77=C_mutate((C_word*)lf[508]+1 /* (set! chicken.compiler.support#predicate? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_17107,tmp=(C_word)a,a+=2,tmp));
t78=C_mutate((C_word*)lf[510]+1 /* (set! chicken.compiler.support#load-identifier-database ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_17118,tmp=(C_word)a,a+=2,tmp));
t79=C_mutate((C_word*)lf[518]+1 /* (set! chicken.compiler.support#print-version ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_17213,tmp=(C_word)a,a+=2,tmp));
t80=C_mutate((C_word*)lf[521]+1 /* (set! chicken.compiler.support#print-usage ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_17238,tmp=(C_word)a,a+=2,tmp));
t81=C_mutate((C_word*)lf[523]+1 /* (set! chicken.compiler.support#print-debug-options ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_17250,tmp=(C_word)a,a+=2,tmp));
t82=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t82;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t82+1)))(2,av2);}}

/* chicken.compiler.support#make-node in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_8335,5,av);}
a=C_alloc(5);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_record4(&a,4,lf[150],t2,t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.compiler.support#varnode in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void *)f_8341,3,av);}
a=C_alloc(8);
t3=C_a_i_list1(&a,1,t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[150],lf[163],t3,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.compiler.support#qnode in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void *)f_8356,3,av);}
a=C_alloc(8);
t3=C_a_i_list1(&a,1,t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[150],lf[94],t3,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8371(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_8371,3,av);}
a=C_alloc(12);
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8374,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9558,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* support.scm:594: walk */
t9=((C_word*)t6)[1];{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=t2;
f_8374(3,av2);}}

/* walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8374(C_word c,C_word *av){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
av[0]=t0;
av[1]=t1;
av[2]=t2;
C_save_and_reclaim((void *)f_8374,3,av);}
a=C_alloc(20);
if(C_truep(C_i_symbolp(t2))){
/* support.scm:504: varnode */
t3=*((C_word*)lf[162]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;
if(C_truep(C_i_structurep(t3,lf[150]))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_pairp(t2);
if(C_truep(C_i_not(t4))){
/* support.scm:506: bomb */
t5=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[166];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=C_i_car(t2);
if(C_truep(C_i_symbolp(t5))){
t6=t2;
t7=C_u_i_car(t6);
t8=C_eqp(t7,lf[167]);
t9=(C_truep(t8)?t8:C_eqp(t7,lf[168]));
if(C_truep(t9)){
t10=t2;
t11=C_u_i_car(t10);
t12=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t13=t12;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=((C_word*)t14)[1];
t16=((C_word*)((C_word*)t0)[2])[1];
t17=t2;
t18=C_u_i_cdr(t17);
t19=C_i_check_list_2(t18,lf[134]);
t20=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8441,a[2]=t1,a[3]=t11,tmp=(C_word)a,a+=4,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8443,a[2]=t14,a[3]=t22,a[4]=t16,a[5]=t15,tmp=(C_word)a,a+=6,tmp));
t24=((C_word*)t22)[1];
f_8443(t24,t20,t18);}
else{
t10=C_eqp(t7,lf[94]);
if(C_truep(t10)){
t11=C_i_cadr(t2);
t12=t11;
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8491,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8494,a[2]=t13,a[3]=t12,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_numberp(t12))){
t15=C_eqp(lf[173],*((C_word*)lf[8]+1));
if(C_truep(t15)){
t16=C_i_integerp(t12);
t17=t14;
f_8494(t17,C_i_not(t16));}
else{
t16=t14;
f_8494(t16,C_SCHEME_FALSE);}}
else{
t15=t14;
f_8494(t15,C_SCHEME_FALSE);}}
else{
t11=C_eqp(t7,lf[105]);
if(C_truep(t11)){
t12=C_i_cadr(t2);
t13=C_i_caddr(t2);
t14=t13;
if(C_truep(C_i_nullp(t12))){
/* support.scm:524: walk */
t25=t1;
t26=t14;
t1=t25;
t2=t26;
c=3;
goto loop;}
else{
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8551,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t14,tmp=(C_word)a,a+=6,tmp);
t16=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t17=t16;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=((C_word*)t18)[1];
t20=C_i_check_list_2(t12,lf[134]);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5886,a[2]=t18,a[3]=t22,a[4]=t19,tmp=(C_word)a,a+=5,tmp));
t24=((C_word*)t22)[1];
f_5886(t24,t15,t12);}}
else{
t12=C_eqp(t7,lf[174]);
t13=(C_truep(t12)?t12:C_eqp(t7,lf[127]));
if(C_truep(t13)){
t14=C_i_cadr(t2);
t15=C_a_i_list1(&a,1,t14);
t16=t15;
t17=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8648,a[2]=t1,a[3]=t16,tmp=(C_word)a,a+=4,tmp);
t18=C_i_caddr(t2);
/* support.scm:530: walk */
t25=t17;
t26=t18;
t1=t25;
t2=t26;
c=3;
goto loop;}
else{
t14=C_eqp(t7,lf[175]);
if(C_truep(t14)){
t15=t2;
t16=C_i_cadr(t15);
t17=t2;
t18=C_i_caddr(t17);
t19=C_a_i_list2(&a,2,t16,t18);
t20=t19;
t21=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8682,a[2]=t1,a[3]=t20,tmp=(C_word)a,a+=4,tmp);
t22=t2;
t23=C_i_cadddr(t22);
/* support.scm:534: walk */
t25=t21;
t26=t23;
t1=t25;
t2=t26;
c=3;
goto loop;}
else{
t15=C_eqp(t7,lf[176]);
if(C_truep(t15)){
t16=C_i_cdddr(t2);
t17=t16;
t18=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8836,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t17,tmp=(C_word)a,a+=6,tmp);
t19=t2;
t20=C_u_i_cdr(t19);
t21=C_u_i_cdr(t20);
t22=C_u_i_car(t21);
/* support.scm:537: walk */
t25=t18;
t26=t22;
t1=t25;
t2=t26;
c=3;
goto loop;}
else{
t16=C_eqp(t7,lf[180]);
if(C_truep(t16)){
t17=C_i_cadr(t2);
t18=t2;
t19=C_u_i_car(t18);
t20=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8863,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=t19,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t17))){
t21=C_u_i_car(t17);
t22=C_eqp(lf[94],t21);
if(C_truep(t22)){
t23=C_i_cadr(t17);
t24=t20;
f_8863(t24,C_a_i_list1(&a,1,t23));}
else{
t23=t20;
f_8863(t23,C_a_i_list1(&a,1,t17));}}
else{
t21=t20;
f_8863(t21,C_a_i_list1(&a,1,t17));}}
else{
t17=C_eqp(t7,lf[181]);
t18=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8936,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t7,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t17)){
t19=t18;
f_8936(t19,t17);}
else{
t19=C_eqp(t7,lf[196]);
t20=t18;
f_8936(t20,(C_truep(t19)?t19:C_eqp(t7,lf[197])));}}}}}}}}}
else{
t6=C_a_i_list1(&a,1,C_SCHEME_FALSE);
t7=t6;
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=((C_word*)((C_word*)t0)[2])[1];
t13=t2;
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9513,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9515,a[2]=t10,a[3]=t16,a[4]=t12,a[5]=t11,tmp=(C_word)a,a+=6,tmp));
t18=((C_word*)t16)[1];
f_9515(t18,t14,t13);}}}}}

/* k8439 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8441(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_8441,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[150],((C_word*)t0)[3],C_SCHEME_END_OF_LIST,t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop1381 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_8443(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8443,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8468,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:509: g1387 */
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

/* k8466 in map-loop1381 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8468(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8468,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8443(t6,((C_word*)t0)[5],t5);}

/* k8489 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8491(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8491,2,av);}
/* support.scm:512: qnode */
t2=*((C_word*)lf[164]+1);{
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

/* k8492 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_8494(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_8494,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8497,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:516: chicken.base#warning */
t3=*((C_word*)lf[171]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[172];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
/* support.scm:512: qnode */
t2=*((C_word*)lf[164]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k8495 in k8492 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8497,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8504,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:518: scheme#truncate */
t3=*((C_word*)lf[170]+1);{
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

/* k8502 in k8495 in k8492 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8504(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8504,2,av);}
/* support.scm:518: scheme#inexact->exact */
t2=*((C_word*)lf[169]+1);{
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

/* k8549 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8551(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_8551,2,av);}
a=C_alloc(25);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8555,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8560,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t9=C_i_cadr(((C_word*)t0)[4]);
t10=C_i_check_list_2(t9,lf[134]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8577,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8587,a[2]=t6,a[3]=t13,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_8587(t15,t11,t9);}

/* k8553 in k8549 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_8555,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[150],lf[105],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* g1424 in k8549 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_8560(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_8560,3,t0,t1,t2);}
t3=C_i_cadr(t2);
/* support.scm:527: walk */
t4=((C_word*)((C_word*)t0)[2])[1];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
f_8374(3,av2);}}

/* k8575 in k8549 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8577(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8577,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8585,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:528: walk */
t4=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
f_8374(3,av2);}}

/* k8583 in k8575 in k8549 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8585,2,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
/* support.scm:527: scheme#append */
t3=*((C_word*)lf[67]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* map-loop1418 in k8549 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_8587(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8587,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8612,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:527: g1424 */
t5=((C_word*)t0)[4];
f_8560(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8610 in map-loop1418 in k8549 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8612(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8612,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8587(t6,((C_word*)t0)[5],t5);}

/* k8646 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void *)f_8648,2,av);}
a=C_alloc(8);
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[2];
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[150],lf[174],((C_word*)t0)[3],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k8680 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void *)f_8682,2,av);}
a=C_alloc(8);
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[2];
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[150],lf[175],((C_word*)t0)[3],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* loop in k8834 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_8713(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_8713,5,t0,t1,t2,t3,t4);}
a=C_alloc(14);
if(C_truep(C_i_nullp(t2))){
t5=C_i_cadr(((C_word*)t0)[2]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8757,a[2]=t6,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* support.scm:541: scheme#reverse */
t8=*((C_word*)lf[89]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t5=C_i_caar(t2);
t6=C_eqp(lf[177],t5);
if(C_truep(t6)){
t7=C_i_cadr(((C_word*)t0)[2]);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8799,a[2]=t8,a[3]=t1,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t10=C_a_i_cons(&a,2,lf[179],t3);
/* support.scm:547: scheme#reverse */
t11=*((C_word*)lf[89]+1);{
C_word av2[3];
av2[0]=t11;
av2[1]=t9;
av2[2]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t7=t2;
t8=C_u_i_cdr(t7);
t9=C_i_caar(t2);
t10=C_a_i_cons(&a,2,t9,t3);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8820,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t8,a[6]=t11,tmp=(C_word)a,a+=7,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8824,a[2]=((C_word*)t0)[3],a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* support.scm:551: scheme#cadar */
t14=*((C_word*)lf[178]+1);{
C_word av2[3];
av2[0]=t14;
av2[1]=t13;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t14+1)))(3,av2);}}}}

/* k8734 in k8755 in loop in k8834 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_8736,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[150],lf[176],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8755 in loop in k8834 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8757(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_8757,2,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8736,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_a_i_record4(&a,4,lf[150],lf[168],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[4]);
/* support.scm:542: scheme#reverse */
t7=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t4;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k8777 in k8797 in loop in k8834 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_8779,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[150],lf[176],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8785 in k8797 in loop in k8834 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8787,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* support.scm:548: scheme#reverse */
t3=*((C_word*)lf[89]+1);{
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

/* k8789 in k8797 in loop in k8834 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8791,2,av);}
/* support.scm:548: walk */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
f_8374(3,av2);}}

/* k8797 in loop in k8834 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8799(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_8799,2,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8779,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8787,a[2]=((C_word*)t0)[4],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8791,a[2]=((C_word*)t0)[5],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* support.scm:548: scheme#cadar */
t7=*((C_word*)lf[178]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k8818 in loop in k8834 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_8820,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* support.scm:549: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8713(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k8822 in loop in k8834 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8824,2,av);}
/* support.scm:551: walk */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
f_8374(3,av2);}}

/* k8834 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_8836,2,av);}
a=C_alloc(10);
t2=C_a_i_list1(&a,1,t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8713,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_8713(t6,((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_END_OF_LIST,t2);}

/* k8861 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_8863(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,0,3)))){
C_save_and_reclaim_args((void *)trf_8863,2,t0,t1);}
a=C_alloc(18);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)((C_word*)t0)[2])[1];
t8=((C_word*)t0)[3];
t9=C_u_i_cdr(t8);
t10=C_u_i_cdr(t9);
t11=C_i_check_list_2(t10,lf[134]);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8875,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8877,a[2]=t5,a[3]=t14,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_8877(t16,t12,t10);}

/* k8873 in k8861 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_8875,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[150],((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop1489 in k8861 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_8877(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8877,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8902,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:557: g1495 */
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

/* k8900 in map-loop1489 in k8861 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8902(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8902,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8877(t6,((C_word*)t0)[5],t5);}

/* k8934 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_8936(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,3)))){
C_save_and_reclaim_args((void *)trf_8936,2,t0,t1);}
a=C_alloc(21);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_a_i_list1(&a,1,t4);
t6=t5;
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=((C_word*)((C_word*)t0)[3])[1];
t12=((C_word*)t0)[2];
t13=C_u_i_cdr(t12);
t14=C_u_i_cdr(t13);
t15=C_i_check_list_2(t14,lf[134]);
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8962,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8964,a[2]=t9,a[3]=t18,a[4]=t11,a[5]=t10,tmp=(C_word)a,a+=6,tmp));
t20=((C_word*)t18)[1];
f_8964(t20,t16,t14);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[182]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
t7=((C_word*)t0)[4];
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_a_i_record4(&a,4,lf[150],t4,t6,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t3=C_eqp(((C_word*)t0)[5],lf[183]);
if(C_truep(t3)){
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_a_i_list2(&a,2,t4,C_SCHEME_TRUE);
t6=((C_word*)t0)[4];
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_a_i_record4(&a,4,lf[150],lf[183],t5,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t4=C_eqp(((C_word*)t0)[5],lf[133]);
t5=(C_truep(t4)?t4:C_eqp(((C_word*)t0)[5],lf[184]));
if(C_truep(t5)){
t6=C_i_cadr(((C_word*)t0)[2]);
t7=C_a_i_list1(&a,1,t6);
t8=t7;
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=((C_word*)((C_word*)t0)[3])[1];
t14=((C_word*)t0)[2];
t15=C_u_i_cdr(t14);
t16=C_u_i_cdr(t15);
t17=C_i_check_list_2(t16,lf[134]);
t18=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9073,a[2]=((C_word*)t0)[4],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9075,a[2]=t11,a[3]=t20,a[4]=t13,a[5]=t12,tmp=(C_word)a,a+=6,tmp));
t22=((C_word*)t20)[1];
f_9075(t22,t18,t16);}
else{
t6=C_eqp(((C_word*)t0)[5],lf[185]);
if(C_truep(t6)){
t7=((C_word*)t0)[2];
t8=C_i_cadr(t7);
t9=C_i_cadr(t8);
t10=((C_word*)t0)[2];
t11=C_i_caddr(t10);
t12=C_i_cadr(t11);
t13=((C_word*)t0)[2];
t14=C_i_cadddr(t13);
t15=C_i_cadr(t14);
t16=((C_word*)t0)[2];
t17=C_i_cddddr(t16);
t18=C_i_car(t17);
t19=C_i_cadr(t18);
t20=C_a_i_list4(&a,4,t9,t12,t15,t19);
t21=t20;
t22=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9140,a[2]=((C_word*)t0)[4],a[3]=t21,tmp=(C_word)a,a+=4,tmp);
t23=C_i_list_ref(((C_word*)t0)[2],C_fix(5));
/* support.scm:573: walk */
t24=((C_word*)((C_word*)t0)[3])[1];{
C_word av2[3];
av2[0]=t24;
av2[1]=t22;
av2[2]=t23;
f_8374(3,av2);}}
else{
t7=C_eqp(((C_word*)t0)[5],lf[186]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9181,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t7)){
t9=t8;
f_9181(t9,t7);}
else{
t9=C_eqp(((C_word*)t0)[5],lf[192]);
if(C_truep(t9)){
t10=t8;
f_9181(t10,t9);}
else{
t10=C_eqp(((C_word*)t0)[5],lf[193]);
if(C_truep(t10)){
t11=t8;
f_9181(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[5],lf[194]);
t12=t8;
f_9181(t12,(C_truep(t11)?t11:C_eqp(((C_word*)t0)[5],lf[195])));}}}}}}}}}

/* k8960 in k8934 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_8962,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[150],((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop1526 in k8934 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_8964(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8964,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8989,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:559: g1532 */
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

/* k8987 in map-loop1526 in k8934 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_8989(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8989,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8964(t6,((C_word*)t0)[5],t5);}

/* k9071 in k8934 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_9073,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[150],lf[133],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop1570 in k8934 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_9075(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9075,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9100,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:567: g1576 */
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

/* k9098 in map-loop1570 in k8934 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9100(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9100,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9075(t6,((C_word*)t0)[5],t5);}

/* k9138 in k8934 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void *)f_9140,2,av);}
a=C_alloc(8);
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[2];
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[150],lf[185],((C_word*)t0)[3],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k9179 in k8934 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_9181(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,0,4)))){
C_save_and_reclaim_args((void *)trf_9181,2,t0,t1);}
a=C_alloc(20);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_i_car(t2);
t4=t3;
t5=((C_word*)t0)[2];
t6=C_i_cadr(t5);
t7=t6;
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=((C_word*)((C_word*)t0)[3])[1];
t13=C_i_cddr(((C_word*)t0)[2]);
t14=C_i_check_list_2(t13,lf[134]);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9210,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9212,a[2]=t10,a[3]=t17,a[4]=t12,a[5]=t11,tmp=(C_word)a,a+=6,tmp));
t19=((C_word*)t17)[1];
f_9212(t19,t15,t13);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[187]);
if(C_truep(t2)){
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=t3;
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=((C_word*)((C_word*)t0)[3])[1];
t10=((C_word*)t0)[2];
t11=C_u_i_cdr(t10);
t12=C_i_check_list_2(t11,lf[134]);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9273,a[2]=((C_word*)t0)[4],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9275,a[2]=t7,a[3]=t15,a[4]=t9,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_9275(t17,t13,t11);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9312,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9318,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* support.scm:580: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}}}

/* k9208 in k9179 in k8934 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_9210,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[150],((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop1619 in k9179 in k8934 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_9212(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9212,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9237,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:576: g1625 */
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

/* k9235 in map-loop1619 in k9179 in k8934 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9237(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9237,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9212(t6,((C_word*)t0)[5],t5);}

/* k9271 in k9179 in k8934 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_9273,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[150],lf[188],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop1650 in k9179 in k8934 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_9275(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9275,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9300,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:578: g1656 */
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

/* k9298 in map-loop1650 in k9179 in k8934 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9300(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9300,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9275(t6,((C_word*)t0)[5],t5);}

/* a9311 in k9179 in k8934 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9312(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9312,2,av);}
/* support.scm:580: get-line-2 */
t2=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a9317 in k9179 in k8934 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9318(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_9318,4,av);}
a=C_alloc(11);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9379,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9407,a[2]=((C_word*)t0)[4],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=t2;
/* tweaks.scm:60: ##sys#get */
t7=*((C_word*)lf[190]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=lf[191];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k9339 in k9381 in k9377 in a9317 in k9179 in k8934 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_9341,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[150],lf[188],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop1696 in k9381 in k9377 in a9317 in k9179 in k8934 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_9343(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9343,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9368,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:592: g1702 */
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

/* k9366 in map-loop1696 in k9381 in k9377 in a9317 in k9179 in k8934 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in ... */
static void C_ccall f_9368(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9368,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9343(t6,((C_word*)t0)[5],t5);}

/* k9377 in a9317 in k9179 in k8934 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_9379(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_9379,2,t0,t1);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9383,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9386,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* support.scm:588: real-name */
t5=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* support.scm:591: ##sys#symbol->qualified-string */
t4=*((C_word*)lf[189]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k9381 in k9377 in a9317 in k9179 in k8934 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9383(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_9383,2,av);}
a=C_alloc(23);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=((C_word*)((C_word*)t0)[3])[1];
t9=((C_word*)t0)[4];
t10=C_i_check_list_2(t9,lf[134]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9341,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9343,a[2]=t6,a[3]=t13,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_9343(t15,t11,t9);}

/* k9384 in k9377 in a9317 in k9179 in k8934 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9386(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_9386,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9393,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t1;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],t3);
f_9383(2,av2);}}
else{
/* support.scm:590: ##sys#symbol->qualified-string */
t3=*((C_word*)lf[189]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k9391 in k9384 in k9377 in a9317 in k9179 in k8934 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_9393,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],t1);
f_9383(2,av2);}}

/* k9405 in a9317 in k9179 in k8934 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9407(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_9407,2,av);}
a=C_alloc(29);
if(C_truep(t1)){
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_s_a_i_plus(&a,2,t2,C_fix(1)));
t4=((C_word*)t0)[3];
f_9379(t4,C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[3];
f_9379(t2,C_SCHEME_FALSE);}}

/* k9511 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_9513,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[150],lf[188],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop1727 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_9515(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9515,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9540,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:593: g1733 */
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

/* k9538 in map-loop1727 in walk in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9540(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9540,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9515(t6,((C_word*)t0)[5],t5);}

/* k9556 in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9558(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_9558,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9561,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(C_i_positivep(t4))){
/* support.scm:596: debugging */
t5=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[198];
av2[3]=lf[199];
av2[4]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k9559 in k9556 in chicken.compiler.support#build-node-graph in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9561,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_9567,3,av);}
a=C_alloc(5);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9573,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
f_9573(3,av2);}}

/* walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9573(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_9573,3,av);}
a=C_alloc(8);
t3=t2;
t4=C_slot(t3,C_fix(3));
t5=t4;
t6=t2;
t7=C_slot(t6,C_fix(2));
t8=t7;
t9=t2;
t10=C_slot(t9,C_fix(1));
t11=t10;
t12=t11;
t13=C_eqp(t12,lf[167]);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9607,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t1,a[5]=t11,a[6]=t12,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t13)){
t15=t14;
f_9607(t15,t13);}
else{
t15=C_eqp(t12,lf[212]);
t16=t14;
f_9607(t16,(C_truep(t15)?t15:C_eqp(t12,lf[213])));}}

/* k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_9607(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,5)))){
C_save_and_reclaim_args((void *)trf_9607,2,t0,t1);}
a=C_alloc(21);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=((C_word*)((C_word*)t0)[2])[1];
t7=C_i_check_list_2(((C_word*)t0)[3],lf[134]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9620,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9622,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_9622(t12,t8,((C_word*)t0)[3]);}
else{
t2=C_eqp(((C_word*)t0)[6],lf[201]);
if(C_truep(t2)){
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)((C_word*)t0)[2])[1];
t8=C_i_check_list_2(((C_word*)t0)[3],lf[134]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9677,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9679,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_9679(t13,t9,((C_word*)t0)[3]);}
else{
t3=C_eqp(((C_word*)t0)[6],lf[163]);
if(C_truep(t3)){
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_i_car(((C_word*)t0)[7]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(((C_word*)t0)[6],lf[94]);
if(C_truep(t4)){
t5=C_i_car(((C_word*)t0)[7]);
t6=C_booleanp(t5);
if(C_truep(t6)){
if(C_truep(t6)){
t7=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t7;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_u_i_car(((C_word*)t0)[7]);
t8=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t8;
av2[1]=C_a_i_list(&a,2,lf[94],t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}
else{
t7=C_i_stringp(t5);
if(C_truep(t7)){
if(C_truep(t7)){
t8=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t8;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_u_i_car(((C_word*)t0)[7]);
t9=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t9;
av2[1]=C_a_i_list(&a,2,lf[94],t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}
else{
t8=C_i_numberp(t5);
t9=(C_truep(t8)?t8:C_charp(t5));
if(C_truep(t9)){
t10=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t10;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t10=C_u_i_car(((C_word*)t0)[7]);
t11=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t11;
av2[1]=C_a_i_list(&a,2,lf[94],t10);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}}}
else{
t5=C_eqp(((C_word*)t0)[6],lf[105]);
if(C_truep(t5)){
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=((C_word*)t0)[7];
t11=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t12=t11;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=((C_word*)t13)[1];
t15=((C_word*)((C_word*)t0)[2])[1];
t16=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9777,a[2]=t10,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t8,a[7]=t9,a[8]=t13,a[9]=t15,a[10]=t14,tmp=(C_word)a,a+=11,tmp);
/* support.scm:615: chicken.base#butlast */
t17=*((C_word*)lf[202]+1);{
C_word av2[3];
av2[0]=t17;
av2[1]=t16;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t17+1)))(3,av2);}}
else{
t6=C_eqp(((C_word*)t0)[6],lf[127]);
if(C_truep(t6)){
t7=C_i_cadr(((C_word*)t0)[7]);
t8=(C_truep(t7)?lf[174]:lf[127]);
t9=t8;
t10=C_i_caddr(((C_word*)t0)[7]);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9900,a[2]=((C_word*)t0)[4],a[3]=t9,a[4]=t11,tmp=(C_word)a,a+=5,tmp);
t13=C_i_car(((C_word*)t0)[3]);
/* support.scm:622: walk */
t14=((C_word*)((C_word*)t0)[2])[1];{
C_word av2[3];
av2[0]=t14;
av2[1]=t12;
av2[2]=t13;
f_9573(3,av2);}}
else{
t7=C_eqp(((C_word*)t0)[6],lf[175]);
if(C_truep(t7)){
t8=C_i_car(((C_word*)t0)[7]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9924,a[2]=((C_word*)t0)[4],a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=C_i_car(((C_word*)t0)[3]);
/* support.scm:624: walk */
t12=((C_word*)((C_word*)t0)[2])[1];{
C_word av2[3];
av2[0]=t12;
av2[1]=t10;
av2[2]=t11;
f_9573(3,av2);}}
else{
t8=C_eqp(((C_word*)t0)[6],lf[204]);
if(C_truep(t8)){
t9=C_i_car(((C_word*)t0)[3]);
/* support.scm:626: walk */
t10=((C_word*)((C_word*)t0)[2])[1];{
C_word av2[3];
av2[0]=t10;
av2[1]=((C_word*)t0)[4];
av2[2]=t9;
f_9573(3,av2);}}
else{
t9=C_eqp(((C_word*)t0)[6],lf[176]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9958,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t11=C_i_car(((C_word*)t0)[3]);
/* support.scm:629: walk */
t12=((C_word*)((C_word*)t0)[2])[1];{
C_word av2[3];
av2[0]=t12;
av2[1]=t10;
av2[2]=t11;
f_9573(3,av2);}}
else{
t10=C_eqp(((C_word*)t0)[6],lf[188]);
if(C_truep(t10)){
t11=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t12=t11;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=((C_word*)t13)[1];
t15=((C_word*)((C_word*)t0)[2])[1];
t16=C_i_check_list_2(((C_word*)t0)[3],lf[134]);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10048,a[2]=t13,a[3]=t18,a[4]=t15,a[5]=t14,tmp=(C_word)a,a+=6,tmp));
t20=((C_word*)t18)[1];
f_10048(t20,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t11=C_eqp(((C_word*)t0)[6],lf[197]);
if(C_truep(t11)){
t12=C_i_car(((C_word*)t0)[7]);
t13=t12;
t14=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t15=t14;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=((C_word*)t16)[1];
t18=((C_word*)((C_word*)t0)[2])[1];
t19=C_i_check_list_2(((C_word*)t0)[3],lf[134]);
t20=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10103,a[2]=((C_word*)t0)[4],a[3]=t13,tmp=(C_word)a,a+=4,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10105,a[2]=t16,a[3]=t22,a[4]=t18,a[5]=t17,tmp=(C_word)a,a+=6,tmp));
t24=((C_word*)t22)[1];
f_10105(t24,t20,((C_word*)t0)[3]);}
else{
t12=C_eqp(((C_word*)t0)[6],lf[168]);
if(C_truep(t12)){
t13=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t13;
av2[1]=C_a_i_list1(&a,1,((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t13=C_eqp(((C_word*)t0)[6],lf[206]);
if(C_truep(t13)){
t14=C_i_car(((C_word*)t0)[7]);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10161,a[2]=((C_word*)t0)[2],a[3]=t16,tmp=(C_word)a,a+=4,tmp));
t18=((C_word*)t16)[1];
f_10161(t18,((C_word*)t0)[4],t14,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}
else{
t14=C_eqp(((C_word*)t0)[6],lf[207]);
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10210,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t14)){
t16=t15;
f_10210(t16,t14);}
else{
t16=C_eqp(((C_word*)t0)[6],lf[209]);
if(C_truep(t16)){
t17=t15;
f_10210(t17,t16);}
else{
t17=C_eqp(((C_word*)t0)[6],lf[210]);
t18=t15;
f_10210(t18,(C_truep(t17)?t17:C_eqp(((C_word*)t0)[6],lf[211])));}}}}}}}}}}}}}}}}

/* k9618 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9620,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop1784 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_9622(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9622,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9647,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:605: g1790 */
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

/* k9645 in map-loop1784 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9647(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9647,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9622(t6,((C_word*)t0)[5],t5);}

/* k9675 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_9677,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[201],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop1813 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_9679(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9679,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9704,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:607: g1819 */
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

/* k9702 in map-loop1813 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9704(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9704,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9679(t6,((C_word*)t0)[5],t5);}

/* k9775 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9777(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9777,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9780,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9847,a[2]=((C_word*)t0)[8],a[3]=t4,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_9847(t6,t2,t1);}

/* k9778 in k9775 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9780(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9780,2,av);}
a=C_alloc(12);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[134]);
t3=C_i_check_list_2(t1,lf[134]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9789,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9799,a[2]=((C_word*)t0)[6],a[3]=t6,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_9799(t8,t4,((C_word*)t0)[2],t1);}

/* k9787 in k9778 in k9775 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_9789,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9793,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9797,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:616: last */
f_5920(t4,((C_word*)t0)[4]);}

/* k9791 in k9787 in k9778 in k9775 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9793,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[105],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9795 in k9787 in k9778 in k9775 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9797(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9797,2,av);}
/* support.scm:616: walk */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
f_9573(3,av2);}}

/* map-loop1855 in k9778 in k9775 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_9799(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_9799,4,t0,t1,t2,t3);}
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

/* map-loop1876 in k9775 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_9847(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9847,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9872,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:615: g1882 */
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

/* k9870 in map-loop1876 in k9775 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9872(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9872,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9847(t6,((C_word*)t0)[5],t5);}

/* k9898 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9900,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list3(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9922 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9924,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[203],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9956 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9958(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_9958,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9962,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[3]);
t5=C_i_cdr(((C_word*)t0)[4]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9972,a[2]=((C_word*)t0)[5],a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_9972(t9,t3,t4,t5);}

/* k9960 in k9956 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_9962,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[205],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* loop in k9956 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_fcall f_9972(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_9972,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9996,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=C_i_car(t3);
/* support.scm:634: walk */
t6=((C_word*)((C_word*)t0)[2])[1];{
C_word av2[3];
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
f_9573(3,av2);}}}
else{
t4=C_i_car(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10023,a[2]=t5,a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t7=C_i_car(t3);
/* support.scm:635: walk */
t8=((C_word*)((C_word*)t0)[2])[1];{
C_word av2[3];
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
f_9573(3,av2);}}}

/* k9994 in loop in k9956 in k9605 in walk in chicken.compiler.support#build-expression-tree in k8331 in k7678 in k7675 in k6459 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 */
static void C_ccall f_9996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9996,2,av);}
a=C_alloc(9);
t2=C_a_i_list(&a,2,lf[177],t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_support_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("support"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_support_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(3900))){
C_save(t1);
C_rereclaim2(3900*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,529);
lf[0]=C_h_intern(&lf[0],7, C_text("support"));
lf[1]=C_h_intern(&lf[1],25, C_text("chicken.compiler.support#"));
lf[8]=C_h_intern(&lf[8],36, C_text("chicken.compiler.support#number-type"));
lf[9]=C_h_intern(&lf[9],7, C_text("generic"));
lf[10]=C_h_intern(&lf[10],31, C_text("chicken.compiler.support#unsafe"));
lf[11]=C_h_intern(&lf[11],46, C_text("chicken.compiler.support#compiler-cleanup-hook"));
lf[12]=C_h_intern(&lf[12],42, C_text("chicken.compiler.support#debugging-chicken"));
lf[13]=C_h_intern(&lf[13],29, C_text("chicken.compiler.support#bomb"));
lf[14]=C_h_intern(&lf[14],18, C_text("chicken.base#error"));
lf[15]=C_h_intern(&lf[15],20, C_text("scheme#string-append"));
lf[16]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032[internal compiler error] "));
lf[17]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031[internal compiler error]"));
lf[18]=C_h_intern(&lf[18],51, C_text("chicken.compiler.support#collected-debugging-output"));
lf[20]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001o\376\003\000\000\002\376\001\000\000\001x\376\003\000\000\002\376\001\000\000\001S\376\377\016"));
lf[22]=C_h_intern(&lf[22],34, C_text("chicken.compiler.support#debugging"));
lf[23]=C_h_intern(&lf[23],14, C_text("scheme#newline"));
lf[24]=C_h_intern(&lf[24],19, C_text("\003sysstandard-output"));
lf[25]=C_h_intern(&lf[25],6, C_text("printf"));
lf[26]=C_h_intern(&lf[26],16, C_text("\003syswrite-char-0"));
lf[27]=C_h_intern(&lf[27],9, C_text("\003sysprint"));
lf[28]=C_h_intern(&lf[28],12, C_text("scheme#force"));
lf[29]=C_h_intern(&lf[29],14, C_text("scheme#display"));
lf[30]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002: "));
lf[31]=C_h_intern(&lf[31],34, C_text("chicken.port#with-output-to-string"));
lf[32]=C_h_intern(&lf[32],7, C_text("fprintf"));
lf[33]=C_h_intern(&lf[33],25, C_text("chicken.base#flush-output"));
lf[34]=C_h_intern(&lf[34],46, C_text("chicken.compiler.support#with-debugging-output"));
lf[35]=C_h_intern(&lf[35],27, C_text("chicken.string#string-split"));
lf[36]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\012"));
lf[37]=C_h_intern(&lf[37],39, C_text("chicken.compiler.support#quit-compiling"));
lf[38]=C_h_intern(&lf[38],18, C_text("\003sysstandard-error"));
lf[39]=C_h_intern(&lf[39],17, C_text("chicken.base#exit"));
lf[40]=C_h_intern(&lf[40],22, C_text("chicken.format#fprintf"));
lf[41]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010\012Error: "));
lf[42]=C_h_intern(&lf[42],21, C_text("\003syssyntax-error-hook"));
lf[43]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005\011~s~%"));
lf[44]=C_h_intern(&lf[44],8, C_text("for-each"));
lf[45]=C_h_intern(&lf[45],29, C_text("chicken.base#print-call-chain"));
lf[46]=C_h_intern(&lf[46],18, C_text("\003syscurrent-thread"));
lf[47]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025\012\011Expansion history:\012"));
lf[48]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003): "));
lf[49]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017\012Syntax error ("));
lf[50]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017\012Syntax error: "));
lf[51]=C_h_intern(&lf[51],27, C_text("chicken.syntax#syntax-error"));
lf[52]=C_h_intern(&lf[52],47, C_text("chicken.compiler.support#emit-syntax-trace-info"));
lf[53]=C_h_intern(&lf[53],40, C_text("chicken.compiler.support#check-signature"));
lf[54]=C_decode_literal(C_heaptop,C_text("\376B\000\000@Arguments to inlined call of `~A\047 do not match parameter-list ~A"));
lf[55]=C_h_intern(&lf[55],34, C_text("chicken.compiler.support#real-name"));
lf[56]=C_h_intern(&lf[56],34, C_text("chicken.compiler.support#stringify"));
lf[57]=C_h_intern(&lf[57],21, C_text("scheme#symbol->string"));
lf[58]=C_h_intern(&lf[58],6, C_text("format"));
lf[59]=C_h_intern(&lf[59],30, C_text("chicken.base#get-output-string"));
lf[60]=C_h_intern(&lf[60],31, C_text("chicken.base#open-output-string"));
lf[61]=C_h_intern(&lf[61],34, C_text("chicken.compiler.support#symbolify"));
lf[62]=C_h_intern(&lf[62],21, C_text("scheme#string->symbol"));
lf[63]=C_h_intern(&lf[63],42, C_text("chicken.compiler.support#build-lambda-list"));
lf[64]=C_h_intern(&lf[64],37, C_text("chicken.compiler.support#c-ify-string"));
lf[65]=C_h_intern(&lf[65],16, C_text("\003syslist->string"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000\042\376\377\016"));
lf[67]=C_h_intern(&lf[67],13, C_text("scheme#append"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000\134\376\377\016"));
lf[69]=C_h_intern(&lf[69],16, C_text("\003sysstring->list"));
lf[70]=C_h_intern(&lf[70],18, C_text("\003sysfixnum->string"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\0000\376\003\000\000\002\376\377\012\000\0000\376\377\016"));
lf[72]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\0000\376\377\016"));
lf[73]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000\042\376\003\000\000\002\376\377\012\000\000\047\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000\077\376\003\000\000\002\376\377\012\000\000\052\376\377\016"));
lf[74]=C_h_intern(&lf[74],44, C_text("chicken.compiler.support#valid-c-identifier\077"));
lf[75]=C_h_intern(&lf[75],23, C_text("chicken.string#->string"));
lf[76]=C_h_intern(&lf[76],37, C_text("chicken.compiler.support#bytes->words"));
lf[77]=C_h_intern(&lf[77],37, C_text("chicken.compiler.support#words->bytes"));
lf[78]=C_h_intern(&lf[78],50, C_text("chicken.compiler.support#check-and-open-input-file"));
lf[79]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001-"));
lf[80]=C_h_intern(&lf[80],18, C_text("\003sysstandard-input"));
lf[81]=C_h_intern(&lf[81],22, C_text("scheme#open-input-file"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024Can not open file ~s"));
lf[83]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031(~a) can not open file ~s"));
lf[84]=C_h_intern(&lf[84],25, C_text("chicken.file#file-exists\077"));
lf[85]=C_h_intern(&lf[85],49, C_text("chicken.compiler.support#close-checked-input-file"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001-"));
lf[87]=C_h_intern(&lf[87],23, C_text("scheme#close-input-port"));
lf[88]=C_h_intern(&lf[88],35, C_text("chicken.compiler.support#fold-inner"));
lf[89]=C_h_intern(&lf[89],14, C_text("scheme#reverse"));
lf[91]=C_h_intern(&lf[91],41, C_text("chicken.compiler.support#read-expressions"));
lf[92]=C_h_intern(&lf[92],11, C_text("scheme#read"));
lf[93]=C_h_intern(&lf[93],34, C_text("chicken.compiler.support#constant\077"));
lf[94]=C_h_intern(&lf[94],5, C_text("quote"));
lf[95]=C_h_intern(&lf[95],18, C_text("\003syssrfi-4-vector\077"));
lf[96]=C_h_intern(&lf[96],18, C_text("chicken.blob#blob\077"));
lf[97]=C_h_intern(&lf[97],45, C_text("chicken.compiler.support#collapsable-literal\077"));
lf[98]=C_h_intern(&lf[98],35, C_text("chicken.compiler.support#immediate\077"));
lf[99]=C_h_intern(&lf[99],36, C_text("chicken.compiler.support#big-fixnum\077"));
lf[100]=C_h_intern(&lf[100],39, C_text("chicken.compiler.support#basic-literal\077"));
lf[101]=C_h_intern(&lf[101],19, C_text("scheme#vector->list"));
lf[102]=C_h_intern(&lf[102],48, C_text("chicken.compiler.support#canonicalize-begin-body"));
lf[103]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[104]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[105]=C_h_intern(&lf[105],3, C_text("let"));
lf[106]=C_h_intern(&lf[106],19, C_text("chicken.base#gensym"));
lf[107]=C_h_intern(&lf[107],1, C_text("t"));
lf[108]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\010\003sysvoid\376\377\016"));
lf[109]=C_h_intern(&lf[109],37, C_text("chicken.compiler.support#string->expr"));
lf[110]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042cannot parse expression: ~s [~a]~%"));
lf[111]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[112]=C_h_intern(&lf[112],5, C_text("begin"));
lf[113]=C_h_intern(&lf[113],13, C_text("scheme#values"));
lf[114]=C_h_intern(&lf[114],35, C_text("chicken.port#with-input-from-string"));
lf[115]=C_h_intern(&lf[115],40, C_text("chicken.condition#with-exception-handler"));
lf[116]=C_h_intern(&lf[116],37, C_text("scheme#call-with-current-continuation"));
lf[117]=C_h_intern(&lf[117],37, C_text("chicken.compiler.support#llist-length"));
lf[118]=C_h_intern(&lf[118],37, C_text("chicken.compiler.support#llist-match\077"));
lf[120]=C_h_intern(&lf[120],56, C_text("chicken.compiler.support#reset-profile-info-vector-name!"));
lf[121]=C_h_intern(&lf[121],41, C_text("chicken.compiler.support#make-random-name"));
lf[122]=C_h_intern(&lf[122],12, C_text("profile-info"));
lf[125]=C_h_intern(&lf[125],46, C_text("chicken.compiler.support#expand-profile-lambda"));
lf[126]=C_h_intern(&lf[126],17, C_text("\003sysprofile-entry"));
lf[127]=C_h_intern(&lf[127],11, C_text("\004corelambda"));
lf[128]=C_h_intern(&lf[128],9, C_text("\003sysapply"));
lf[129]=C_h_intern(&lf[129],16, C_text("\003sysprofile-exit"));
lf[130]=C_h_intern(&lf[130],16, C_text("\003sysdynamic-wind"));
lf[131]=C_h_intern(&lf[131],47, C_text("chicken.compiler.support#profiling-prelude-exps"));
lf[132]=C_h_intern(&lf[132],25, C_text("\003sysregister-profile-info"));
lf[133]=C_h_intern(&lf[133],4, C_text("set!"));
lf[134]=C_h_intern(&lf[134],3, C_text("map"));
lf[135]=C_h_intern(&lf[135],28, C_text("\003sysset-profile-info-vector!"));
lf[136]=C_h_intern(&lf[136],31, C_text("chicken.compiler.support#db-get"));
lf[137]=C_h_intern(&lf[137],31, C_text("chicken.internal#hash-table-ref"));
lf[138]=C_h_intern(&lf[138],35, C_text("chicken.compiler.support#db-get-all"));
lf[139]=C_h_intern(&lf[139],5, C_text("foldr"));
lf[140]=C_h_intern(&lf[140],32, C_text("chicken.compiler.support#db-put!"));
lf[141]=C_h_intern(&lf[141],32, C_text("chicken.internal#hash-table-set!"));
lf[142]=C_h_intern(&lf[142],33, C_text("chicken.compiler.support#collect!"));
lf[143]=C_h_intern(&lf[143],36, C_text("chicken.compiler.support#db-get-list"));
lf[144]=C_h_intern(&lf[144],33, C_text("chicken.compiler.support#get-line"));
lf[145]=C_h_intern(&lf[145],24, C_text("\003sysline-number-database"));
lf[146]=C_h_intern(&lf[146],35, C_text("chicken.compiler.support#get-line-2"));
lf[147]=C_h_intern(&lf[147],53, C_text("chicken.compiler.support#display-line-number-database"));
lf[148]=C_h_intern(&lf[148],36, C_text("chicken.internal#hash-table-for-each"));
lf[149]=C_h_intern(&lf[149],34, C_text("chicken.compiler.support#make-node"));
lf[150]=C_h_intern(&lf[150],29, C_text("chicken.compiler.support#node"));
lf[151]=C_h_intern(&lf[151],30, C_text("chicken.compiler.support#node\077"));
lf[152]=C_h_intern(&lf[152],35, C_text("chicken.compiler.support#node-class"));
lf[153]=C_h_intern(&lf[153],10, C_text("node-class"));
lf[154]=C_h_intern(&lf[154],40, C_text("chicken.compiler.support#node-class-set!"));
lf[155]=C_h_intern(&lf[155],14, C_text("\003sysblock-set!"));
lf[156]=C_h_intern(&lf[156],40, C_text("chicken.compiler.support#node-parameters"));
lf[157]=C_h_intern(&lf[157],15, C_text("node-parameters"));
lf[158]=C_h_intern(&lf[158],45, C_text("chicken.compiler.support#node-parameters-set!"));
lf[159]=C_h_intern(&lf[159],44, C_text("chicken.compiler.support#node-subexpressions"));
lf[160]=C_h_intern(&lf[160],19, C_text("node-subexpressions"));
lf[161]=C_h_intern(&lf[161],49, C_text("chicken.compiler.support#node-subexpressions-set!"));
lf[162]=C_h_intern(&lf[162],32, C_text("chicken.compiler.support#varnode"));
lf[163]=C_h_intern(&lf[163],13, C_text("\004corevariable"));
lf[164]=C_h_intern(&lf[164],30, C_text("chicken.compiler.support#qnode"));
lf[165]=C_h_intern(&lf[165],41, C_text("chicken.compiler.support#build-node-graph"));
lf[166]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016bad expression"));
lf[167]=C_h_intern(&lf[167],2, C_text("if"));
lf[168]=C_h_intern(&lf[168],14, C_text("\004coreundefined"));
lf[169]=C_h_intern(&lf[169],21, C_text("scheme#inexact->exact"));
lf[170]=C_h_intern(&lf[170],15, C_text("scheme#truncate"));
lf[171]=C_h_intern(&lf[171],20, C_text("chicken.base#warning"));
lf[172]=C_decode_literal(C_heaptop,C_text("\376B\000\0006literal is out of range - will be truncated to integer"));
lf[173]=C_h_intern(&lf[173],6, C_text("fixnum"));
lf[174]=C_h_intern(&lf[174],6, C_text("lambda"));
lf[175]=C_h_intern(&lf[175],8, C_text("\004corethe"));
lf[176]=C_h_intern(&lf[176],13, C_text("\004coretypecase"));
lf[177]=C_h_intern(&lf[177],4, C_text("else"));
lf[178]=C_h_intern(&lf[178],12, C_text("scheme#cadar"));
lf[179]=C_h_intern(&lf[179],1, C_text("\052"));
lf[180]=C_h_intern(&lf[180],14, C_text("\004coreprimitive"));
lf[181]=C_h_intern(&lf[181],11, C_text("\004coreinline"));
lf[182]=C_h_intern(&lf[182],16, C_text("\004coredebug-event"));
lf[183]=C_h_intern(&lf[183],9, C_text("\004coreproc"));
lf[184]=C_h_intern(&lf[184],9, C_text("\004coreset!"));
lf[185]=C_h_intern(&lf[185],29, C_text("\004coreforeign-callback-wrapper"));
lf[186]=C_h_intern(&lf[186],20, C_text("\004coreinline_allocate"));
lf[187]=C_h_intern(&lf[187],8, C_text("\004coreapp"));
lf[188]=C_h_intern(&lf[188],9, C_text("\004corecall"));
lf[189]=C_h_intern(&lf[189],28, C_text("\003syssymbol->qualified-string"));
lf[190]=C_h_intern(&lf[190],7, C_text("\003sysget"));
lf[191]=C_h_intern(&lf[191],34, C_text("\010compileralways-bound-to-procedure"));
lf[192]=C_h_intern(&lf[192],15, C_text("\004coreinline_ref"));
lf[193]=C_h_intern(&lf[193],18, C_text("\004coreinline_update"));
lf[194]=C_h_intern(&lf[194],19, C_text("\004coreinline_loc_ref"));
lf[195]=C_h_intern(&lf[195],22, C_text("\004coreinline_loc_update"));
lf[196]=C_h_intern(&lf[196],12, C_text("\004coreprovide"));
lf[197]=C_h_intern(&lf[197],13, C_text("\004corecallunit"));
lf[198]=C_h_intern(&lf[198],1, C_text("o"));
lf[199]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033eliminated procedure checks"));
lf[200]=C_h_intern(&lf[200],46, C_text("chicken.compiler.support#build-expression-tree"));
lf[201]=C_h_intern(&lf[201],12, C_text("\004coreclosure"));
lf[202]=C_h_intern(&lf[202],20, C_text("chicken.base#butlast"));
lf[203]=C_h_intern(&lf[203],3, C_text("the"));
lf[204]=C_h_intern(&lf[204],15, C_text("\004corethe/result"));
lf[205]=C_h_intern(&lf[205],17, C_text("compiler-typecase"));
lf[206]=C_h_intern(&lf[206],9, C_text("\004corebind"));
lf[207]=C_h_intern(&lf[207],10, C_text("\004coreunbox"));
lf[208]=C_h_intern(&lf[208],16, C_text("\004corelet_unboxed"));
lf[209]=C_h_intern(&lf[209],8, C_text("\004coreref"));
lf[210]=C_h_intern(&lf[210],11, C_text("\004coreupdate"));
lf[211]=C_h_intern(&lf[211],13, C_text("\004coreupdate_i"));
lf[212]=C_h_intern(&lf[212],8, C_text("\004corebox"));
lf[213]=C_h_intern(&lf[213],9, C_text("\004corecond"));
lf[214]=C_h_intern(&lf[214],37, C_text("chicken.compiler.support#fold-boolean"));
lf[215]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\005C_and\376\377\016"));
lf[216]=C_h_intern(&lf[216],47, C_text("chicken.compiler.support#inline-lambda-bindings"));
lf[217]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012C_a_i_list"));
lf[218]=C_h_intern(&lf[218],22, C_text("chicken.base#alist-ref"));
lf[219]=C_h_intern(&lf[219],10, C_text("scheme#eq\077"));
lf[220]=C_h_intern(&lf[220],12, C_text("contractable"));
lf[221]=C_h_intern(&lf[221],16, C_text("inline-transient"));
lf[222]=C_h_intern(&lf[222],1, C_text("f"));
lf[223]=C_h_intern(&lf[223],25, C_text("\003sysdecompose-lambda-list"));
lf[224]=C_h_intern(&lf[224],34, C_text("chicken.compiler.support#tree-copy"));
lf[225]=C_h_intern(&lf[225],34, C_text("chicken.compiler.support#copy-node"));
lf[226]=C_h_intern(&lf[226],35, C_text("chicken.compiler.support#copy-node!"));
lf[227]=C_h_intern(&lf[227],48, C_text("chicken.compiler.support#emit-global-inline-file"));
lf[228]=C_h_intern(&lf[228],18, C_text("chicken.base#print"));
lf[229]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002  "));
lf[230]=C_h_intern(&lf[230],15, C_text("scheme#string<\077"));
lf[231]=C_h_intern(&lf[231],17, C_text("chicken.sort#sort"));
lf[232]=C_h_intern(&lf[232],1, C_text("i"));
lf[233]=C_decode_literal(C_heaptop,C_text("\376B\000\0001the following procedures can be globally inlined:"));
lf[234]=C_h_intern(&lf[234],25, C_text("chicken.file#delete-file\052"));
lf[235]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015; END OF FILE"));
lf[236]=C_h_intern(&lf[236],23, C_text("chicken.pretty-print#pp"));
lf[237]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027; GENERATED BY CHICKEN "));
lf[238]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006 FROM "));
lf[239]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\012"));
lf[240]=C_h_intern(&lf[240],32, C_text("chicken.platform#chicken-version"));
lf[241]=C_h_intern(&lf[241],26, C_text("scheme#with-output-to-file"));
lf[242]=C_h_intern(&lf[242],11, C_text("local-value"));
lf[243]=C_h_intern(&lf[243],5, C_text("value"));
lf[244]=C_h_intern(&lf[244],9, C_text("inlinable"));
lf[245]=C_h_intern(&lf[245],3, C_text("yes"));
lf[246]=C_h_intern(&lf[246],2, C_text("no"));
lf[247]=C_h_intern(&lf[247],15, C_text("\010compilerinline"));
lf[248]=C_h_intern(&lf[248],11, C_text("hidden-refs"));
lf[249]=C_h_intern(&lf[249],7, C_text("unknown"));
lf[250]=C_h_intern(&lf[250],22, C_text("\010compilerinline-global"));
lf[251]=C_h_intern(&lf[251],42, C_text("chicken.compiler.support#variable-visible\077"));
lf[252]=C_h_intern(&lf[252],41, C_text("chicken.compiler.support#load-inline-file"));
lf[253]=C_h_intern(&lf[253],8, C_text("\003sysput!"));
lf[254]=C_h_intern(&lf[254],27, C_text("scheme#with-input-from-file"));
lf[255]=C_h_intern(&lf[255],35, C_text("chicken.compiler.support#match-node"));
lf[256]=C_h_intern(&lf[256],1, C_text("a"));
lf[257]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007matched"));
lf[258]=C_h_intern(&lf[258],53, C_text("chicken.compiler.support#expression-has-side-effects\077"));
lf[259]=C_h_intern(&lf[259],49, C_text("chicken.compiler.support#foreign-callback-stub-id"));
lf[260]=C_h_intern(&lf[260],47, C_text("chicken.compiler.support#foreign-callback-stubs"));
lf[261]=C_h_intern(&lf[261],44, C_text("chicken.compiler.support#simple-lambda-node\077"));
lf[262]=C_h_intern(&lf[262],47, C_text("chicken.compiler.support#dump-undefined-globals"));
lf[263]=C_h_intern(&lf[263],12, C_text("scheme#write"));
lf[264]=C_h_intern(&lf[264],6, C_text("global"));
lf[265]=C_h_intern(&lf[265],8, C_text("assigned"));
lf[266]=C_h_intern(&lf[266],24, C_text("chicken.keyword#keyword\077"));
lf[267]=C_h_intern(&lf[267],45, C_text("chicken.compiler.support#dump-defined-globals"));
lf[268]=C_h_intern(&lf[268],41, C_text("chicken.compiler.support#dump-global-refs"));
lf[269]=C_h_intern(&lf[269],10, C_text("references"));
lf[270]=C_h_intern(&lf[270],28, C_text("\003systoplevel-definition-hook"));
lf[271]=C_h_intern(&lf[271],22, C_text("chicken.plist#remprop!"));
lf[272]=C_h_intern(&lf[272],19, C_text("\010compilervisibility"));
lf[273]=C_h_intern(&lf[273],41, C_text("chicken.compiler.support#variable-hidden\077"));
lf[274]=C_h_intern(&lf[274],38, C_text("chicken.compiler.support#hide-variable"));
lf[275]=C_decode_literal(C_heaptop,C_text("\376B\000\000 hiding unexported module binding"));
lf[276]=C_h_intern(&lf[276],21, C_text("\003sysqualified-symbol\077"));
lf[277]=C_h_intern(&lf[277],51, C_text("chicken.compiler.support#make-foreign-callback-stub"));
lf[278]=C_h_intern(&lf[278],46, C_text("chicken.compiler.support#foreign-callback-stub"));
lf[279]=C_h_intern(&lf[279],47, C_text("chicken.compiler.support#foreign-callback-stub\077"));
lf[280]=C_h_intern(&lf[280],24, C_text("foreign-callback-stub-id"));
lf[281]=C_h_intern(&lf[281],51, C_text("chicken.compiler.support#foreign-callback-stub-name"));
lf[282]=C_h_intern(&lf[282],26, C_text("foreign-callback-stub-name"));
lf[283]=C_h_intern(&lf[283],57, C_text("chicken.compiler.support#foreign-callback-stub-qualifiers"));
lf[284]=C_h_intern(&lf[284],32, C_text("foreign-callback-stub-qualifiers"));
lf[285]=C_h_intern(&lf[285],58, C_text("chicken.compiler.support#foreign-callback-stub-return-type"));
lf[286]=C_h_intern(&lf[286],33, C_text("foreign-callback-stub-return-type"));
lf[287]=C_h_intern(&lf[287],61, C_text("chicken.compiler.support#foreign-callback-stub-argument-types"));
lf[288]=C_h_intern(&lf[288],36, C_text("foreign-callback-stub-argument-types"));
lf[289]=C_h_intern(&lf[289],56, C_text("chicken.compiler.support#register-foreign-callback-stub!"));
lf[290]=C_h_intern(&lf[290],24, C_text("\010compilercallback-lambda"));
lf[292]=C_h_intern(&lf[292],50, C_text("chicken.compiler.support#clear-foreign-type-table!"));
lf[293]=C_h_intern(&lf[293],19, C_text("scheme#vector-fill!"));
lf[294]=C_h_intern(&lf[294],18, C_text("scheme#make-vector"));
lf[295]=C_h_intern(&lf[295],47, C_text("chicken.compiler.support#register-foreign-type!"));
lf[296]=C_h_intern(&lf[296],44, C_text("chicken.compiler.support#lookup-foreign-type"));
lf[297]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007integer\376B\000\000\003int\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020unsigned-integer\376B\000\000\014unsigned int\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\011integer32\376B\000\000\005C_s32\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022unsigned-integer32\376B\000\000\005C_u32\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\011integer64\376B\000\000\005C_s64\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022unsigned-integer64\376B\000\000\005C_u64\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\005short\376B\000\000\005short\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016unsigned-short\376B\000\000\016unsigned short\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\004long\376B\000\000\004long\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015unsigned-long\376B\000\000\015unsigned long\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007s"
"size_t\376B\000\000\007ssize_t\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006size_t\376B\000\000\006size_t\376\377\016"));
lf[298]=C_h_intern(&lf[298],43, C_text("chicken.compiler.support#foreign-type-check"));
lf[299]=C_h_intern(&lf[299],4, C_text("char"));
lf[300]=C_h_intern(&lf[300],13, C_text("unsigned-char"));
lf[301]=C_h_intern(&lf[301],25, C_text("\003sysforeign-char-argument"));
lf[302]=C_h_intern(&lf[302],3, C_text("int"));
lf[303]=C_h_intern(&lf[303],27, C_text("\003sysforeign-fixnum-argument"));
lf[304]=C_h_intern(&lf[304],5, C_text("float"));
lf[305]=C_h_intern(&lf[305],27, C_text("\003sysforeign-flonum-argument"));
lf[306]=C_h_intern(&lf[306],4, C_text("blob"));
lf[307]=C_h_intern(&lf[307],14, C_text("scheme-pointer"));
lf[308]=C_h_intern(&lf[308],26, C_text("\003sysforeign-block-argument"));
lf[309]=C_h_intern(&lf[309],22, C_text("nonnull-scheme-pointer"));
lf[310]=C_h_intern(&lf[310],12, C_text("nonnull-blob"));
lf[311]=C_h_intern(&lf[311],14, C_text("pointer-vector"));
lf[312]=C_h_intern(&lf[312],35, C_text("\003sysforeign-struct-wrapper-argument"));
lf[313]=C_h_intern(&lf[313],22, C_text("nonnull-pointer-vector"));
lf[314]=C_h_intern(&lf[314],8, C_text("u8vector"));
lf[315]=C_h_intern(&lf[315],16, C_text("nonnull-u8vector"));
lf[316]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020nonnull-u8vector\376\001\000\000\010u8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-u16vector\376\001\000\000"
"\011u16vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020nonnull-s8vector\376\001\000\000\010s8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-s16"
"vector\376\001\000\000\011s16vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-u32vector\376\001\000\000\011u32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\021nonnull-s32vector\376\001\000\000\011s32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-u64vector\376\001\000\000\011u64vector\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-s64vector\376\001\000\000\011s64vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-f32vector\376\001\000\000"
"\011f32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-f64vector\376\001\000\000\011f64vector\376\377\016"));
lf[317]=C_h_intern(&lf[317],9, C_text("integer32"));
lf[318]=C_h_intern(&lf[318],13, C_text("foreign-value"));
lf[319]=C_h_intern(&lf[319],35, C_text("\003sysforeign-ranged-integer-argument"));
lf[320]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014) \052 CHAR_BIT"));
lf[321]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007sizeof("));
lf[322]=C_h_intern(&lf[322],14, C_text("unsigned-short"));
lf[323]=C_h_intern(&lf[323],44, C_text("\003sysforeign-unsigned-ranged-integer-argument"));
lf[324]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014) \052 CHAR_BIT"));
lf[325]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007sizeof("));
lf[326]=C_h_intern(&lf[326],9, C_text("c-pointer"));
lf[327]=C_h_intern(&lf[327],28, C_text("\003sysforeign-pointer-argument"));
lf[328]=C_h_intern(&lf[328],17, C_text("nonnull-c-pointer"));
lf[329]=C_h_intern(&lf[329],8, C_text("c-string"));
lf[330]=C_h_intern(&lf[330],17, C_text("\003sysmake-c-string"));
lf[331]=C_h_intern(&lf[331],27, C_text("\003sysforeign-string-argument"));
lf[332]=C_h_intern(&lf[332],16, C_text("nonnull-c-string"));
lf[333]=C_h_intern(&lf[333],6, C_text("symbol"));
lf[334]=C_h_intern(&lf[334],18, C_text("\003syssymbol->string"));
lf[335]=C_h_intern(&lf[335],3, C_text("ref"));
lf[336]=C_h_intern(&lf[336],8, C_text("instance"));
lf[337]=C_h_intern(&lf[337],12, C_text("instance-ref"));
lf[338]=C_h_intern(&lf[338],4, C_text("this"));
lf[339]=C_h_intern(&lf[339],8, C_text("slot-ref"));
lf[340]=C_h_intern(&lf[340],16, C_text("nonnull-instance"));
lf[341]=C_h_intern(&lf[341],5, C_text("const"));
lf[342]=C_h_intern(&lf[342],4, C_text("enum"));
lf[343]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026sizeof(int) \052 CHAR_BIT"));
lf[344]=C_h_intern(&lf[344],15, C_text("nonnull-pointer"));
lf[345]=C_h_intern(&lf[345],7, C_text("pointer"));
lf[346]=C_h_intern(&lf[346],8, C_text("function"));
lf[347]=C_h_intern(&lf[347],17, C_text("nonnull-c-string\052"));
lf[348]=C_h_intern(&lf[348],26, C_text("nonnull-unsigned-c-string\052"));
lf[349]=C_h_intern(&lf[349],9, C_text("c-string\052"));
lf[350]=C_h_intern(&lf[350],17, C_text("unsigned-c-string"));
lf[351]=C_h_intern(&lf[351],18, C_text("unsigned-c-string\052"));
lf[352]=C_h_intern(&lf[352],13, C_text("c-string-list"));
lf[353]=C_h_intern(&lf[353],14, C_text("c-string-list\052"));
lf[354]=C_h_intern(&lf[354],13, C_text("unsigned-long"));
lf[355]=C_h_intern(&lf[355],16, C_text("unsigned-integer"));
lf[356]=C_h_intern(&lf[356],6, C_text("size_t"));
lf[357]=C_h_intern(&lf[357],18, C_text("unsigned-integer32"));
lf[358]=C_h_intern(&lf[358],18, C_text("unsigned-integer64"));
lf[359]=C_h_intern(&lf[359],9, C_text("integer64"));
lf[360]=C_h_intern(&lf[360],7, C_text("integer"));
lf[361]=C_h_intern(&lf[361],5, C_text("short"));
lf[362]=C_h_intern(&lf[362],4, C_text("long"));
lf[363]=C_h_intern(&lf[363],7, C_text("ssize_t"));
lf[364]=C_h_intern(&lf[364],17, C_text("nonnull-u16vector"));
lf[365]=C_h_intern(&lf[365],16, C_text("nonnull-s8vector"));
lf[366]=C_h_intern(&lf[366],17, C_text("nonnull-s16vector"));
lf[367]=C_h_intern(&lf[367],17, C_text("nonnull-u32vector"));
lf[368]=C_h_intern(&lf[368],17, C_text("nonnull-s32vector"));
lf[369]=C_h_intern(&lf[369],17, C_text("nonnull-u64vector"));
lf[370]=C_h_intern(&lf[370],17, C_text("nonnull-s64vector"));
lf[371]=C_h_intern(&lf[371],17, C_text("nonnull-f32vector"));
lf[372]=C_h_intern(&lf[372],17, C_text("nonnull-f64vector"));
lf[373]=C_h_intern(&lf[373],9, C_text("u16vector"));
lf[374]=C_h_intern(&lf[374],8, C_text("s8vector"));
lf[375]=C_h_intern(&lf[375],9, C_text("s16vector"));
lf[376]=C_h_intern(&lf[376],9, C_text("u32vector"));
lf[377]=C_h_intern(&lf[377],9, C_text("s32vector"));
lf[378]=C_h_intern(&lf[378],9, C_text("u64vector"));
lf[379]=C_h_intern(&lf[379],9, C_text("s64vector"));
lf[380]=C_h_intern(&lf[380],9, C_text("f32vector"));
lf[381]=C_h_intern(&lf[381],9, C_text("f64vector"));
lf[382]=C_h_intern(&lf[382],6, C_text("double"));
lf[383]=C_h_intern(&lf[383],6, C_text("number"));
lf[384]=C_h_intern(&lf[384],12, C_text("unsigned-int"));
lf[385]=C_h_intern(&lf[385],4, C_text("byte"));
lf[386]=C_h_intern(&lf[386],13, C_text("unsigned-byte"));
lf[387]=C_h_intern(&lf[387],5, C_text("int32"));
lf[388]=C_h_intern(&lf[388],14, C_text("unsigned-int32"));
lf[389]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042foreign type `~S\047 refers to itself"));
lf[390]=C_h_intern(&lf[390],52, C_text("chicken.compiler.support#foreign-type-convert-result"));
lf[391]=C_h_intern(&lf[391],54, C_text("chicken.compiler.support#foreign-type-convert-argument"));
lf[392]=C_h_intern(&lf[392],43, C_text("chicken.compiler.support#final-foreign-type"));
lf[393]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042foreign type `~S\047 refers to itself"));
lf[394]=C_h_intern(&lf[394],53, C_text("chicken.compiler.support#estimate-foreign-result-size"));
lf[395]=C_decode_literal(C_heaptop,C_text("\376B\000\0008cannot compute size for unknown foreign type `~S\047 result"));
lf[396]=C_h_intern(&lf[396],4, C_text("bool"));
lf[397]=C_h_intern(&lf[397],4, C_text("void"));
lf[398]=C_h_intern(&lf[398],13, C_text("scheme-object"));
lf[399]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042foreign type `~S\047 refers to itself"));
lf[400]=C_h_intern(&lf[400],62, C_text("chicken.compiler.support#estimate-foreign-result-location-size"));
lf[401]=C_decode_literal(C_heaptop,C_text("\376B\000\0005cannot compute size of location for foreign type `~S\047"));
lf[402]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042foreign type `~S\047 refers to itself"));
lf[403]=C_h_intern(&lf[403],46, C_text("chicken.compiler.support#finish-foreign-result"));
lf[404]=C_h_intern(&lf[404],17, C_text("\003syspeek-c-string"));
lf[405]=C_h_intern(&lf[405],25, C_text("\003syspeek-nonnull-c-string"));
lf[406]=C_h_intern(&lf[406],26, C_text("\003syspeek-and-free-c-string"));
lf[407]=C_h_intern(&lf[407],34, C_text("\003syspeek-and-free-nonnull-c-string"));
lf[408]=C_h_intern(&lf[408],17, C_text("\003sysintern-symbol"));
lf[409]=C_h_intern(&lf[409],22, C_text("\003syspeek-c-string-list"));
lf[410]=C_h_intern(&lf[410],31, C_text("\003syspeek-and-free-c-string-list"));
lf[411]=C_h_intern(&lf[411],17, C_text("\003sysnull-pointer\077"));
lf[412]=C_h_intern(&lf[412],3, C_text("not"));
lf[413]=C_h_intern(&lf[413],4, C_text("make"));
lf[414]=C_h_intern(&lf[414],3, C_text("and"));
lf[415]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\010c-string\376\003\000\000\002\376\001\000\000\011c-string\052\376\003\000\000\002\376\001\000\000\021unsigned-c-string\376\003\000\000\002\376\001\000\000\022unsign"
"ed-c-string\052\376\003\000\000\002\376\001\000\000\020nonnull-c-string\376\003\000\000\002\376\001\000\000\021nonnull-c-string\052\376\003\000\000\002\376\001\000\000\030nonnu"
"ll-unsigned-string\052\376\377\016"));
lf[416]=C_h_intern(&lf[416],27, C_text("chicken.syntax#strip-syntax"));
lf[417]=C_h_intern(&lf[417],52, C_text("chicken.compiler.support#foreign-type->scrutiny-type"));
lf[418]=C_h_intern(&lf[418],9, C_text("undefined"));
lf[419]=C_h_intern(&lf[419],3, C_text("arg"));
lf[420]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\002or\376\003\000\000\002\376\001\000\000\007boolean\376\003\000\000\002\376\001\000\000\004blob\376\377\016"));
lf[421]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\002or\376\003\000\000\002\376\001\000\000\007boolean\376\003\000\000\002\376\001\000\000\016pointer-vector\376\377\016"));
lf[422]=C_h_intern(&lf[422],6, C_text("struct"));
lf[423]=C_h_intern(&lf[423],2, C_text("or"));
lf[424]=C_h_intern(&lf[424],7, C_text("boolean"));
lf[425]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\010u8vector\376\377\016"));
lf[426]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\010s8vector\376\377\016"));
lf[427]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011u16vector\376\377\016"));
lf[428]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011s16vector\376\377\016"));
lf[429]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011u32vector\376\377\016"));
lf[430]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011s32vector\376\377\016"));
lf[431]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011u64vector\376\377\016"));
lf[432]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011s64vector\376\377\016"));
lf[433]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011f32vector\376\377\016"));
lf[434]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011f64vector\376\377\016"));
lf[435]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\002or\376\003\000\000\002\376\001\000\000\007boolean\376\003\000\000\002\376\001\000\000\007pointer\376\003\000\000\002\376\001\000\000\010locative\376\377\016"));
lf[436]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\002or\376\003\000\000\002\376\001\000\000\007boolean\376\003\000\000\002\376\001\000\000\006string\376\377\016"));
lf[437]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\007list-of\376\003\000\000\002\376\001\000\000\006string\376\377\016"));
lf[438]=C_h_intern(&lf[438],6, C_text("string"));
lf[439]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\002or\376\003\000\000\002\376\001\000\000\007boolean\376\003\000\000\002\376\001\000\000\007pointer\376\003\000\000\002\376\001\000\000\010locative\376\377\016"));
lf[440]=C_h_intern(&lf[440],44, C_text("chicken.compiler.support#scan-used-variables"));
lf[441]=C_h_intern(&lf[441],44, C_text("chicken.compiler.support#scan-free-variables"));
lf[442]=C_h_intern(&lf[442],39, C_text("chicken.compiler.support#chop-separator"));
lf[443]=C_h_intern(&lf[443],16, C_text("scheme#substring"));
lf[444]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000/\376\377\016"));
lf[445]=C_h_intern(&lf[445],52, C_text("chicken.compiler.support#make-block-variable-literal"));
lf[446]=C_h_intern(&lf[446],47, C_text("chicken.compiler.support#block-variable-literal"));
lf[447]=C_h_intern(&lf[447],48, C_text("chicken.compiler.support#block-variable-literal\077"));
lf[448]=C_h_intern(&lf[448],52, C_text("chicken.compiler.support#block-variable-literal-name"));
lf[449]=C_h_intern(&lf[449],27, C_text("block-variable-literal-name"));
lf[450]=C_h_intern(&lf[450],28, C_text("chicken.time#current-seconds"));
lf[452]=C_h_intern(&lf[452],47, C_text("chicken.compiler.support#clear-real-name-table!"));
lf[453]=C_h_intern(&lf[453],39, C_text("chicken.compiler.support#set-real-name!"));
lf[454]=C_h_intern(&lf[454],38, C_text("chicken.compiler.support#get-real-name"));
lf[455]=C_h_intern(&lf[455],33, C_text("chicken.string#string-intersperse"));
lf[456]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004 in "));
lf[457]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003..."));
lf[458]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004 in "));
lf[459]=C_h_intern(&lf[459],12, C_text("contained-in"));
lf[460]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004 in "));
lf[461]=C_h_intern(&lf[461],35, C_text("chicken.compiler.support#real-name2"));
lf[462]=C_h_intern(&lf[462],48, C_text("chicken.compiler.support#display-real-name-table"));
lf[463]=C_h_intern(&lf[463],44, C_text("chicken.compiler.support#source-info->string"));
lf[464]=C_h_intern(&lf[464],19, C_text("chicken.string#conc"));
lf[465]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001:"));
lf[466]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001 "));
lf[467]=C_h_intern(&lf[467],18, C_text("scheme#make-string"));
lf[468]=C_h_intern(&lf[468],10, C_text("scheme#max"));
lf[469]=C_h_intern(&lf[469],42, C_text("chicken.compiler.support#source-info->line"));
lf[470]=C_h_intern(&lf[470],34, C_text("chicken.compiler.support#call-info"));
lf[471]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001("));
lf[472]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002) "));
lf[473]=C_h_intern(&lf[473],43, C_text("chicken.compiler.support#constant-form-eval"));
lf[474]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032folded constant expression"));
lf[475]=C_decode_literal(C_heaptop,C_text("\376B\000\000Dattempt to constant-fold call to procedure that has multiple results"));
lf[477]=C_h_intern(&lf[477],40, C_text("chicken.condition#get-condition-property"));
lf[478]=C_h_intern(&lf[478],3, C_text("exn"));
lf[479]=C_h_intern(&lf[479],7, C_text("message"));
lf[480]=C_h_intern(&lf[480],8, C_text("\003syslist"));
lf[481]=C_decode_literal(C_heaptop,C_text("\376B\000\000.attempt to constant-fold call to non-procedure"));
lf[482]=C_h_intern(&lf[482],18, C_text("\003sysnumber->string"));
lf[483]=C_h_intern(&lf[483],35, C_text("chicken.compiler.support#dump-nodes"));
lf[484]=C_h_intern(&lf[484],19, C_text("\003syswrite-char/port"));
lf[485]=C_h_intern(&lf[485],39, C_text("chicken.compiler.support#read-info-hook"));
lf[486]=C_h_intern(&lf[486],27, C_text("\003syscurrent-source-filename"));
lf[487]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001:"));
lf[488]=C_h_intern(&lf[488],9, C_text("list-info"));
lf[489]=C_h_intern(&lf[489],41, C_text("chicken.compiler.support#read/source-info"));
lf[490]=C_h_intern(&lf[490],8, C_text("\003sysread"));
lf[491]=C_h_intern(&lf[491],18, C_text("\003sysuser-read-hook"));
lf[492]=C_h_intern(&lf[492],15, C_text("foreign-declare"));
lf[493]=C_h_intern(&lf[493],7, C_text("declare"));
lf[494]=C_decode_literal(C_heaptop,C_text("\376B\000\000&unexpected end of `#> ... <#\047 sequence"));
lf[495]=C_h_intern(&lf[495],18, C_text("\003sysread-char/port"));
lf[496]=C_h_intern(&lf[496],25, C_text("chicken.platform#feature\077"));
lf[497]=C_h_intern(&lf[497],6, C_text("\00064bit"));
lf[498]=C_h_intern(&lf[498],38, C_text("chicken.compiler.support#small-bignum\077"));
lf[499]=C_h_intern(&lf[499],6, C_text("hidden"));
lf[500]=C_h_intern(&lf[500],40, C_text("chicken.compiler.support#export-variable"));
lf[501]=C_h_intern(&lf[501],8, C_text("exported"));
lf[502]=C_h_intern(&lf[502],38, C_text("chicken.compiler.support#mark-variable"));
lf[503]=C_h_intern(&lf[503],38, C_text("chicken.compiler.support#variable-mark"));
lf[504]=C_h_intern(&lf[504],35, C_text("chicken.compiler.support#intrinsic\077"));
lf[505]=C_h_intern(&lf[505],18, C_text("\010compilerintrinsic"));
lf[506]=C_h_intern(&lf[506],34, C_text("chicken.compiler.support#foldable\077"));
lf[507]=C_h_intern(&lf[507],17, C_text("\010compilerfoldable"));
lf[508]=C_h_intern(&lf[508],35, C_text("chicken.compiler.support#predicate\077"));
lf[509]=C_h_intern(&lf[509],18, C_text("\010compilerpredicate"));
lf[510]=C_h_intern(&lf[510],49, C_text("chicken.compiler.support#load-identifier-database"));
lf[511]=C_h_intern(&lf[511],7, C_text("\004coredb"));
lf[512]=C_h_intern(&lf[512],27, C_text("scheme#call-with-input-file"));
lf[513]=C_h_intern(&lf[513],1, C_text("p"));
lf[514]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004 ..."));
lf[515]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034loading identifier database "));
lf[516]=C_h_intern(&lf[516],22, C_text("chicken.load#find-file"));
lf[517]=C_h_intern(&lf[517],32, C_text("chicken.platform#repository-path"));
lf[518]=C_h_intern(&lf[518],38, C_text("chicken.compiler.support#print-version"));
lf[519]=C_h_intern(&lf[519],19, C_text("chicken.base#print\052"));
lf[520]=C_decode_literal(C_heaptop,C_text("\376B\000\000KCHICKEN\012(c) 2008-2018, The CHICKEN Team\012(c) 2000-2007, Felix L. Winkelmann\012"
));
lf[521]=C_h_intern(&lf[521],36, C_text("chicken.compiler.support#print-usage"));
lf[522]=C_decode_literal(C_heaptop,C_text("\376B\000\030\243Usage: chicken FILENAME [OPTION ...]\012\012  `chicken\047 is the CHICKEN compiler.\012"
"  \012  FILENAME should be a complete source file name with extension, or \042-\042 for\012 "
" standard input. OPTION may be one of the following:\012\012  General options:\012\012    -h"
"elp                        display this text and exit\012    -version              "
"       display compiler version and exit\012    -release                     print "
"release number and exit\012    -verbose                     display information on "
"compilation progress\012\012  File and pathname options:\012\012    -output-file FILENAME   "
"     specifies output-filename, default is \047out.c\047\012    -include-path PATHNAME   "
"    specifies alternative path for included files\012    -to-stdout                "
"   write compiled file to stdout instead of file\012\012  Language options:\012\012    -feat"
"ure SYMBOL              register feature identifier\012    -no-feature SYMBOL      "
"     disable built-in feature identifier\012\012  Syntax related options:\012\012    -case-i"
"nsensitive            don\047t preserve case of read symbols\012    -keyword-style STY"
"LE         allow alternative keyword syntax\012                                  (p"
"refix, suffix or none)\012    -no-parentheses-synonyms     disables list delimiter "
"synonyms\012    -no-symbol-escape            disables support for escaped symbols\012 "
"   -r5rs-syntax                 disables the CHICKEN extensions to\012             "
"                     R5RS syntax\012    -compile-syntax              macros are mad"
"e available at run-time\012    -emit-import-library MODULE  write compile-time modu"
"le information into\012                                  separate file\012    -emit-al"
"l-import-libraries   emit import-libraries for all defined modules\012    -no-modul"
"e-registration      do not generate module registration code\012    -no-compiler-sy"
"ntax          disable expansion of compiler-macros\012    -module NAME             "
"    wrap compiled code in a module\012\012  Translation options:\012\012    -explicit-use   "
"             do not use units \047library\047 and \047eval\047 by\012                          "
"        default\012    -check-syntax                stop compilation after macro-ex"
"pansion\012    -analyze-only                stop compilation after first analysis p"
"ass\012\012  Debugging options:\012\012    -no-warnings                 disable warnings\012   "
" -debug-level NUMBER          set level of available debugging information\012    -"
"no-trace                    disable tracing information\012    -debug-info         "
"         enable debug-information in compiled code for use\012                     "
"             with an external debugger\012    -profile                     executab"
"le emits profiling information \012    -profile-name FILENAME       name of the gen"
"erated profile information file\012    -accumulate-profile          executable emit"
"s profiling information in\012                                  append mode\012    -no"
"-lambda-info              omit additional procedure-information\012    -emit-types-"
"file FILENAME    write type-declaration information into file\012    -consult-types"
"-file FILENAME load additional type database\012\012  Optimization options:\012\012    -opti"
"mize-level NUMBER       enable certain sets of optimization options\012    -optimiz"
"e-leaf-routines      enable leaf routine optimization\012    -no-usual-integrations"
"       standard procedures may be redefined\012    -unsafe                      dis"
"able all safety checks\012    -local                       assume globals are only "
"modified in current\012                                  file\012    -block           "
"            enable block-compilation\012    -disable-interrupts          disable in"
"terrupts in compiled code\012    -fixnum-arithmetic           assume all numbers ar"
"e fixnums\012    -disable-stack-overflow-checks  disables detection of stack-overfl"
"ows\012    -inline                      enable inlining\012    -inline-limit LIMIT    "
"      set inlining threshold\012    -inline-global               enable cross-modul"
"e inlining\012    -specialize                  perform type-based specialization of"
" primitive calls\012    -emit-inline-file FILENAME   generate file with globally in"
"linable\012                                  procedures (implies -inline -local)\012  "
"  -consult-inline-file FILENAME  explicitly load inline file\012    -no-argc-checks"
"              disable argument count checks\012    -no-bound-checks             dis"
"able bound variable checks\012    -no-procedure-checks         disable procedure ca"
"ll checks\012    -no-procedure-checks-for-usual-bindings\012                          "
"         disable procedure call checks only for usual\012                          "
"         bindings\012    -no-procedure-checks-for-toplevel-bindings\012               "
"                    disable procedure call checks for toplevel\012                 "
"                  bindings\012    -strict-types                assume variable do n"
"ot change their type\012    -clustering                  combine groups of local pr"
"ocedures into dispatch\012                                   loop\012    -lfa2        "
"                perform additional lightweight flow-analysis pass\012\012  Configurati"
"on options:\012\012    -unit NAME                   compile file as a library unit\012   "
" -uses NAME                   declare library unit as used.\012    -heap-size NUMBE"
"R            specifies heap-size of compiled executable\012    -nursery NUMBER  -st"
"ack-size NUMBER\012                                 specifies nursery size of compi"
"led executable\012    -extend FILENAME             load file before compilation com"
"mences\012    -prelude EXPRESSION          add expression to front of source file\012 "
"   -postlude EXPRESSION         add expression to end of source file\012    -prolog"
"ue FILENAME           include file before main source file\012    -epilogue FILENAM"
"E           include file after main source file\012    -dynamic                    "
" compile as dynamically loadable code\012    -require-extension NAME      require a"
"nd import extension NAME\012\012  Obscure options:\012\012    -debug MODES                 d"
"isplay debugging output for the given modes\012    -raw                         do "
"not generate implicit init- and exit code                           \012    -emit-e"
"xternal-prototypes-first\012                                 emit prototypes for ca"
"llbacks before foreign\012                                  declarations\012    -ignor"
"e-repository           do not refer to repository for extensions\012    -setup-mode"
"                  prefer the current directory when locating extensions\012"));
lf[523]=C_h_intern(&lf[523],44, C_text("chicken.compiler.support#print-debug-options"));
lf[524]=C_decode_literal(C_heaptop,C_text("\376B\000\007\026\012Available debugging options:\012\012     a          show node-matching during si"
"mplification\012     b          show breakdown of time needed for each compiler pas"
"s\012     c          print every expression before macro-expansion\012     d          "
"lists all assigned global variables\012     e          show information about speci"
"alizations\012     h          you already figured that out\012     i          show inf"
"ormation about inlining\012     m          show GC statistics during compilation\012  "
"   n          print the line-number database \012     o          show performed opt"
"imizations\012     p          display information about what the compiler is curren"
"tly doing\012     r          show invocation parameters\012     s          show progra"
"m-size information and other statistics\012     t          show time needed for com"
"pilation\012     u          lists all unassigned global variable references\012     x "
"         display information about experimental features\012     D          when pr"
"inting nodes, use node-tree output\012     I          show inferred type informatio"
"n for unexported globals\012     M          show syntax-/runtime-requirements\012     "
"N          show the real-name mapping table\012     P          show expressions aft"
"er specialization\012     S          show applications of compiler syntax\012     T   "
"       show expressions after converting to node tree\012     1          show sourc"
"e expressions\012     2          show canonicalized expressions\012     3          sho"
"w expressions converted into CPS\012     4          show database after each analys"
"is pass\012     5          show expressions after each optimization pass\012     6    "
"      show expressions after each inlining pass\012     7          show expressions"
" after complete optimization\012     8          show database after final analysis\012"
"     9          show expressions after closure conversion\012\012"));
lf[525]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007#<node "));
lf[526]=C_h_intern(&lf[526],27, C_text("\003sysregister-record-printer"));
lf[527]=C_h_intern(&lf[527],45, C_text("chicken.condition#condition-property-accessor"));
lf[528]=C_h_intern(&lf[528],37, C_text("chicken.condition#condition-predicate"));
C_register_lf2(lf,529,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5125,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[756] = {
{C_text("f18811:support_2escm"),(void*)f18811},
{C_text("f_10011:support_2escm"),(void*)f_10011},
{C_text("f_10023:support_2escm"),(void*)f_10023},
{C_text("f_10048:support_2escm"),(void*)f_10048},
{C_text("f_10073:support_2escm"),(void*)f_10073},
{C_text("f_10103:support_2escm"),(void*)f_10103},
{C_text("f_10105:support_2escm"),(void*)f_10105},
{C_text("f_10130:support_2escm"),(void*)f_10130},
{C_text("f_10161:support_2escm"),(void*)f_10161},
{C_text("f_10173:support_2escm"),(void*)f_10173},
{C_text("f_10177:support_2escm"),(void*)f_10177},
{C_text("f_10199:support_2escm"),(void*)f_10199},
{C_text("f_10210:support_2escm"),(void*)f_10210},
{C_text("f_10217:support_2escm"),(void*)f_10217},
{C_text("f_10228:support_2escm"),(void*)f_10228},
{C_text("f_10230:support_2escm"),(void*)f_10230},
{C_text("f_10255:support_2escm"),(void*)f_10255},
{C_text("f_10288:support_2escm"),(void*)f_10288},
{C_text("f_10290:support_2escm"),(void*)f_10290},
{C_text("f_10315:support_2escm"),(void*)f_10315},
{C_text("f_10329:support_2escm"),(void*)f_10329},
{C_text("f_10339:support_2escm"),(void*)f_10339},
{C_text("f_10341:support_2escm"),(void*)f_10341},
{C_text("f_10366:support_2escm"),(void*)f_10366},
{C_text("f_10444:support_2escm"),(void*)f_10444},
{C_text("f_10450:support_2escm"),(void*)f_10450},
{C_text("f_10476:support_2escm"),(void*)f_10476},
{C_text("f_10480:support_2escm"),(void*)f_10480},
{C_text("f_10496:support_2escm"),(void*)f_10496},
{C_text("f_10502:support_2escm"),(void*)f_10502},
{C_text("f_10508:support_2escm"),(void*)f_10508},
{C_text("f_10514:support_2escm"),(void*)f_10514},
{C_text("f_10518:support_2escm"),(void*)f_10518},
{C_text("f_10521:support_2escm"),(void*)f_10521},
{C_text("f_10528:support_2escm"),(void*)f_10528},
{C_text("f_10530:support_2escm"),(void*)f_10530},
{C_text("f_10560:support_2escm"),(void*)f_10560},
{C_text("f_10588:support_2escm"),(void*)f_10588},
{C_text("f_10612:support_2escm"),(void*)f_10612},
{C_text("f_10634:support_2escm"),(void*)f_10634},
{C_text("f_10659:support_2escm"),(void*)f_10659},
{C_text("f_10681:support_2escm"),(void*)f_10681},
{C_text("f_10689:support_2escm"),(void*)f_10689},
{C_text("f_10740:support_2escm"),(void*)f_10740},
{C_text("f_10747:support_2escm"),(void*)f_10747},
{C_text("f_10750:support_2escm"),(void*)f_10750},
{C_text("f_10779:support_2escm"),(void*)f_10779},
{C_text("f_10787:support_2escm"),(void*)f_10787},
{C_text("f_10803:support_2escm"),(void*)f_10803},
{C_text("f_10806:support_2escm"),(void*)f_10806},
{C_text("f_10812:support_2escm"),(void*)f_10812},
{C_text("f_10832:support_2escm"),(void*)f_10832},
{C_text("f_10855:support_2escm"),(void*)f_10855},
{C_text("f_10860:support_2escm"),(void*)f_10860},
{C_text("f_10864:support_2escm"),(void*)f_10864},
{C_text("f_10867:support_2escm"),(void*)f_10867},
{C_text("f_10873:support_2escm"),(void*)f_10873},
{C_text("f_10876:support_2escm"),(void*)f_10876},
{C_text("f_10893:support_2escm"),(void*)f_10893},
{C_text("f_10903:support_2escm"),(void*)f_10903},
{C_text("f_10905:support_2escm"),(void*)f_10905},
{C_text("f_10930:support_2escm"),(void*)f_10930},
{C_text("f_10941:support_2escm"),(void*)f_10941},
{C_text("f_10949:support_2escm"),(void*)f_10949},
{C_text("f_10957:support_2escm"),(void*)f_10957},
{C_text("f_10970:support_2escm"),(void*)f_10970},
{C_text("f_10972:support_2escm"),(void*)f_10972},
{C_text("f_11020:support_2escm"),(void*)f_11020},
{C_text("f_11045:support_2escm"),(void*)f_11045},
{C_text("f_11064:support_2escm"),(void*)f_11064},
{C_text("f_11069:support_2escm"),(void*)f_11069},
{C_text("f_11079:support_2escm"),(void*)f_11079},
{C_text("f_11081:support_2escm"),(void*)f_11081},
{C_text("f_11106:support_2escm"),(void*)f_11106},
{C_text("f_11128:support_2escm"),(void*)f_11128},
{C_text("f_11176:support_2escm"),(void*)f_11176},
{C_text("f_11182:support_2escm"),(void*)f_11182},
{C_text("f_11196:support_2escm"),(void*)f_11196},
{C_text("f_11200:support_2escm"),(void*)f_11200},
{C_text("f_11206:support_2escm"),(void*)f_11206},
{C_text("f_11244:support_2escm"),(void*)f_11244},
{C_text("f_11248:support_2escm"),(void*)f_11248},
{C_text("f_11251:support_2escm"),(void*)f_11251},
{C_text("f_11254:support_2escm"),(void*)f_11254},
{C_text("f_11289:support_2escm"),(void*)f_11289},
{C_text("f_11333:support_2escm"),(void*)f_11333},
{C_text("f_11335:support_2escm"),(void*)f_11335},
{C_text("f_11360:support_2escm"),(void*)f_11360},
{C_text("f_11375:support_2escm"),(void*)f_11375},
{C_text("f_11404:support_2escm"),(void*)f_11404},
{C_text("f_11406:support_2escm"),(void*)f_11406},
{C_text("f_11431:support_2escm"),(void*)f_11431},
{C_text("f_11440:support_2escm"),(void*)f_11440},
{C_text("f_11444:support_2escm"),(void*)f_11444},
{C_text("f_11447:support_2escm"),(void*)f_11447},
{C_text("f_11453:support_2escm"),(void*)f_11453},
{C_text("f_11461:support_2escm"),(void*)f_11461},
{C_text("f_11469:support_2escm"),(void*)f_11469},
{C_text("f_11479:support_2escm"),(void*)f_11479},
{C_text("f_11507:support_2escm"),(void*)f_11507},
{C_text("f_11511:support_2escm"),(void*)f_11511},
{C_text("f_11516:support_2escm"),(void*)f_11516},
{C_text("f_11522:support_2escm"),(void*)f_11522},
{C_text("f_11525:support_2escm"),(void*)f_11525},
{C_text("f_11530:support_2escm"),(void*)f_11530},
{C_text("f_11540:support_2escm"),(void*)f_11540},
{C_text("f_11555:support_2escm"),(void*)f_11555},
{C_text("f_11557:support_2escm"),(void*)f_11557},
{C_text("f_11564:support_2escm"),(void*)f_11564},
{C_text("f_11585:support_2escm"),(void*)f_11585},
{C_text("f_11619:support_2escm"),(void*)f_11619},
{C_text("f_11622:support_2escm"),(void*)f_11622},
{C_text("f_11641:support_2escm"),(void*)f_11641},
{C_text("f_11665:support_2escm"),(void*)f_11665},
{C_text("f_11698:support_2escm"),(void*)f_11698},
{C_text("f_11700:support_2escm"),(void*)f_11700},
{C_text("f_11706:support_2escm"),(void*)f_11706},
{C_text("f_11712:support_2escm"),(void*)f_11712},
{C_text("f_11716:support_2escm"),(void*)f_11716},
{C_text("f_11739:support_2escm"),(void*)f_11739},
{C_text("f_11750:support_2escm"),(void*)f_11750},
{C_text("f_11756:support_2escm"),(void*)f_11756},
{C_text("f_11759:support_2escm"),(void*)f_11759},
{C_text("f_11767:support_2escm"),(void*)f_11767},
{C_text("f_11793:support_2escm"),(void*)f_11793},
{C_text("f_11815:support_2escm"),(void*)f_11815},
{C_text("f_11840:support_2escm"),(void*)f_11840},
{C_text("f_11862:support_2escm"),(void*)f_11862},
{C_text("f_11880:support_2escm"),(void*)f_11880},
{C_text("f_11911:support_2escm"),(void*)f_11911},
{C_text("f_11963:support_2escm"),(void*)f_11963},
{C_text("f_11969:support_2escm"),(void*)f_11969},
{C_text("f_11989:support_2escm"),(void*)f_11989},
{C_text("f_11995:support_2escm"),(void*)f_11995},
{C_text("f_12021:support_2escm"),(void*)f_12021},
{C_text("f_12035:support_2escm"),(void*)f_12035},
{C_text("f_12043:support_2escm"),(void*)f_12043},
{C_text("f_12098:support_2escm"),(void*)f_12098},
{C_text("f_12127:support_2escm"),(void*)f_12127},
{C_text("f_12224:support_2escm"),(void*)f_12224},
{C_text("f_12230:support_2escm"),(void*)f_12230},
{C_text("f_12237:support_2escm"),(void*)f_12237},
{C_text("f_12240:support_2escm"),(void*)f_12240},
{C_text("f_12263:support_2escm"),(void*)f_12263},
{C_text("f_12265:support_2escm"),(void*)f_12265},
{C_text("f_12271:support_2escm"),(void*)f_12271},
{C_text("f_12278:support_2escm"),(void*)f_12278},
{C_text("f_12281:support_2escm"),(void*)f_12281},
{C_text("f_12300:support_2escm"),(void*)f_12300},
{C_text("f_12302:support_2escm"),(void*)f_12302},
{C_text("f_12308:support_2escm"),(void*)f_12308},
{C_text("f_12321:support_2escm"),(void*)f_12321},
{C_text("f_12349:support_2escm"),(void*)f_12349},
{C_text("f_12351:support_2escm"),(void*)f_12351},
{C_text("f_12358:support_2escm"),(void*)f_12358},
{C_text("f_12361:support_2escm"),(void*)f_12361},
{C_text("f_12373:support_2escm"),(void*)f_12373},
{C_text("f_12385:support_2escm"),(void*)f_12385},
{C_text("f_12391:support_2escm"),(void*)f_12391},
{C_text("f_12397:support_2escm"),(void*)f_12397},
{C_text("f_12406:support_2escm"),(void*)f_12406},
{C_text("f_12415:support_2escm"),(void*)f_12415},
{C_text("f_12424:support_2escm"),(void*)f_12424},
{C_text("f_12433:support_2escm"),(void*)f_12433},
{C_text("f_12442:support_2escm"),(void*)f_12442},
{C_text("f_12468:support_2escm"),(void*)f_12468},
{C_text("f_12471:support_2escm"),(void*)f_12471},
{C_text("f_12482:support_2escm"),(void*)f_12482},
{C_text("f_12484:support_2escm"),(void*)f_12484},
{C_text("f_12538:support_2escm"),(void*)f_12538},
{C_text("f_12544:support_2escm"),(void*)f_12544},
{C_text("f_12550:support_2escm"),(void*)f_12550},
{C_text("f_12556:support_2escm"),(void*)f_12556},
{C_text("f_12581:support_2escm"),(void*)f_12581},
{C_text("f_12596:support_2escm"),(void*)f_12596},
{C_text("f_12614:support_2escm"),(void*)f_12614},
{C_text("f_12664:support_2escm"),(void*)f_12664},
{C_text("f_12679:support_2escm"),(void*)f_12679},
{C_text("f_12719:support_2escm"),(void*)f_12719},
{C_text("f_12722:support_2escm"),(void*)f_12722},
{C_text("f_12737:support_2escm"),(void*)f_12737},
{C_text("f_12761:support_2escm"),(void*)f_12761},
{C_text("f_12787:support_2escm"),(void*)f_12787},
{C_text("f_12793:support_2escm"),(void*)f_12793},
{C_text("f_12799:support_2escm"),(void*)f_12799},
{C_text("f_12802:support_2escm"),(void*)f_12802},
{C_text("f_12805:support_2escm"),(void*)f_12805},
{C_text("f_12808:support_2escm"),(void*)f_12808},
{C_text("f_12830:support_2escm"),(void*)f_12830},
{C_text("f_12836:support_2escm"),(void*)f_12836},
{C_text("f_12842:support_2escm"),(void*)f_12842},
{C_text("f_12845:support_2escm"),(void*)f_12845},
{C_text("f_12848:support_2escm"),(void*)f_12848},
{C_text("f_12851:support_2escm"),(void*)f_12851},
{C_text("f_12874:support_2escm"),(void*)f_12874},
{C_text("f_12877:support_2escm"),(void*)f_12877},
{C_text("f_12918:support_2escm"),(void*)f_12918},
{C_text("f_12921:support_2escm"),(void*)f_12921},
{C_text("f_12936:support_2escm"),(void*)f_12936},
{C_text("f_12963:support_2escm"),(void*)f_12963},
{C_text("f_13006:support_2escm"),(void*)f_13006},
{C_text("f_13010:support_2escm"),(void*)f_13010},
{C_text("f_13037:support_2escm"),(void*)f_13037},
{C_text("f_13040:support_2escm"),(void*)f_13040},
{C_text("f_13075:support_2escm"),(void*)f_13075},
{C_text("f_13111:support_2escm"),(void*)f_13111},
{C_text("f_13614:support_2escm"),(void*)f_13614},
{C_text("f_13620:support_2escm"),(void*)f_13620},
{C_text("f_13633:support_2escm"),(void*)f_13633},
{C_text("f_13647:support_2escm"),(void*)f_13647},
{C_text("f_13660:support_2escm"),(void*)f_13660},
{C_text("f_13674:support_2escm"),(void*)f_13674},
{C_text("f_13680:support_2escm"),(void*)f_13680},
{C_text("f_13684:support_2escm"),(void*)f_13684},
{C_text("f_13688:support_2escm"),(void*)f_13688},
{C_text("f_13707:support_2escm"),(void*)f_13707},
{C_text("f_13713:support_2escm"),(void*)f_13713},
{C_text("f_13716:support_2escm"),(void*)f_13716},
{C_text("f_13725:support_2escm"),(void*)f_13725},
{C_text("f_13735:support_2escm"),(void*)f_13735},
{C_text("f_13744:support_2escm"),(void*)f_13744},
{C_text("f_13756:support_2escm"),(void*)f_13756},
{C_text("f_13768:support_2escm"),(void*)f_13768},
{C_text("f_13780:support_2escm"),(void*)f_13780},
{C_text("f_13786:support_2escm"),(void*)f_13786},
{C_text("f_13790:support_2escm"),(void*)f_13790},
{C_text("f_13817:support_2escm"),(void*)f_13817},
{C_text("f_14182:support_2escm"),(void*)f_14182},
{C_text("f_14188:support_2escm"),(void*)f_14188},
{C_text("f_14200:support_2escm"),(void*)f_14200},
{C_text("f_14210:support_2escm"),(void*)f_14210},
{C_text("f_14222:support_2escm"),(void*)f_14222},
{C_text("f_14228:support_2escm"),(void*)f_14228},
{C_text("f_14232:support_2escm"),(void*)f_14232},
{C_text("f_14259:support_2escm"),(void*)f_14259},
{C_text("f_14632:support_2escm"),(void*)f_14632},
{C_text("f_14638:support_2escm"),(void*)f_14638},
{C_text("f_14642:support_2escm"),(void*)f_14642},
{C_text("f_14758:support_2escm"),(void*)f_14758},
{C_text("f_14786:support_2escm"),(void*)f_14786},
{C_text("f_14906:support_2escm"),(void*)f_14906},
{C_text("f_14910:support_2escm"),(void*)f_14910},
{C_text("f_14934:support_2escm"),(void*)f_14934},
{C_text("f_15009:support_2escm"),(void*)f_15009},
{C_text("f_15096:support_2escm"),(void*)f_15096},
{C_text("f_15117:support_2escm"),(void*)f_15117},
{C_text("f_15135:support_2escm"),(void*)f_15135},
{C_text("f_15157:support_2escm"),(void*)f_15157},
{C_text("f_15512:support_2escm"),(void*)f_15512},
{C_text("f_15516:support_2escm"),(void*)f_15516},
{C_text("f_15518:support_2escm"),(void*)f_15518},
{C_text("f_15550:support_2escm"),(void*)f_15550},
{C_text("f_15558:support_2escm"),(void*)f_15558},
{C_text("f_15568:support_2escm"),(void*)f_15568},
{C_text("f_15582:support_2escm"),(void*)f_15582},
{C_text("f_15614:support_2escm"),(void*)f_15614},
{C_text("f_15622:support_2escm"),(void*)f_15622},
{C_text("f_15632:support_2escm"),(void*)f_15632},
{C_text("f_15667:support_2escm"),(void*)f_15667},
{C_text("f_15670:support_2escm"),(void*)f_15670},
{C_text("f_15704:support_2escm"),(void*)f_15704},
{C_text("f_15723:support_2escm"),(void*)f_15723},
{C_text("f_15729:support_2escm"),(void*)f_15729},
{C_text("f_15733:support_2escm"),(void*)f_15733},
{C_text("f_15759:support_2escm"),(void*)f_15759},
{C_text("f_15768:support_2escm"),(void*)f_15768},
{C_text("f_15779:support_2escm"),(void*)f_15779},
{C_text("f_15798:support_2escm"),(void*)f_15798},
{C_text("f_15810:support_2escm"),(void*)f_15810},
{C_text("f_15854:support_2escm"),(void*)f_15854},
{C_text("f_15856:support_2escm"),(void*)f_15856},
{C_text("f_15868:support_2escm"),(void*)f_15868},
{C_text("f_15878:support_2escm"),(void*)f_15878},
{C_text("f_15892:support_2escm"),(void*)f_15892},
{C_text("f_15897:support_2escm"),(void*)f_15897},
{C_text("f_15908:support_2escm"),(void*)f_15908},
{C_text("f_15921:support_2escm"),(void*)f_15921},
{C_text("f_15927:support_2escm"),(void*)f_15927},
{C_text("f_15933:support_2escm"),(void*)f_15933},
{C_text("f_15942:support_2escm"),(void*)f_15942},
{C_text("f_15950:support_2escm"),(void*)f_15950},
{C_text("f_15956:support_2escm"),(void*)f_15956},
{C_text("f_15959:support_2escm"),(void*)f_15959},
{C_text("f_15962:support_2escm"),(void*)f_15962},
{C_text("f_15965:support_2escm"),(void*)f_15965},
{C_text("f_15968:support_2escm"),(void*)f_15968},
{C_text("f_15973:support_2escm"),(void*)f_15973},
{C_text("f_15977:support_2escm"),(void*)f_15977},
{C_text("f_15989:support_2escm"),(void*)f_15989},
{C_text("f_15994:support_2escm"),(void*)f_15994},
{C_text("f_15996:support_2escm"),(void*)f_15996},
{C_text("f_16002:support_2escm"),(void*)f_16002},
{C_text("f_16009:support_2escm"),(void*)f_16009},
{C_text("f_16012:support_2escm"),(void*)f_16012},
{C_text("f_16016:support_2escm"),(void*)f_16016},
{C_text("f_16022:support_2escm"),(void*)f_16022},
{C_text("f_16028:support_2escm"),(void*)f_16028},
{C_text("f_16055:support_2escm"),(void*)f_16055},
{C_text("f_16057:support_2escm"),(void*)f_16057},
{C_text("f_16070:support_2escm"),(void*)f_16070},
{C_text("f_16080:support_2escm"),(void*)f_16080},
{C_text("f_16093:support_2escm"),(void*)f_16093},
{C_text("f_16108:support_2escm"),(void*)f_16108},
{C_text("f_16112:support_2escm"),(void*)f_16112},
{C_text("f_16119:support_2escm"),(void*)f_16119},
{C_text("f_16123:support_2escm"),(void*)f_16123},
{C_text("f_16128:support_2escm"),(void*)f_16128},
{C_text("f_16132:support_2escm"),(void*)f_16132},
{C_text("f_16140:support_2escm"),(void*)f_16140},
{C_text("f_16146:support_2escm"),(void*)f_16146},
{C_text("f_16153:support_2escm"),(void*)f_16153},
{C_text("f_16156:support_2escm"),(void*)f_16156},
{C_text("f_16159:support_2escm"),(void*)f_16159},
{C_text("f_16164:support_2escm"),(void*)f_16164},
{C_text("f_16184:support_2escm"),(void*)f_16184},
{C_text("f_16188:support_2escm"),(void*)f_16188},
{C_text("f_16196:support_2escm"),(void*)f_16196},
{C_text("f_16214:support_2escm"),(void*)f_16214},
{C_text("f_16218:support_2escm"),(void*)f_16218},
{C_text("f_16221:support_2escm"),(void*)f_16221},
{C_text("f_16251:support_2escm"),(void*)f_16251},
{C_text("f_16275:support_2escm"),(void*)f_16275},
{C_text("f_16290:support_2escm"),(void*)f_16290},
{C_text("f_16293:support_2escm"),(void*)f_16293},
{C_text("f_16313:support_2escm"),(void*)f_16313},
{C_text("f_16316:support_2escm"),(void*)f_16316},
{C_text("f_16355:support_2escm"),(void*)f_16355},
{C_text("f_16361:support_2escm"),(void*)f_16361},
{C_text("f_16367:support_2escm"),(void*)f_16367},
{C_text("f_16375:support_2escm"),(void*)f_16375},
{C_text("f_16377:support_2escm"),(void*)f_16377},
{C_text("f_16383:support_2escm"),(void*)f_16383},
{C_text("f_16389:support_2escm"),(void*)f_16389},
{C_text("f_16395:support_2escm"),(void*)f_16395},
{C_text("f_16401:support_2escm"),(void*)f_16401},
{C_text("f_16423:support_2escm"),(void*)f_16423},
{C_text("f_16425:support_2escm"),(void*)f_16425},
{C_text("f_16459:support_2escm"),(void*)f_16459},
{C_text("f_16493:support_2escm"),(void*)f_16493},
{C_text("f_16508:support_2escm"),(void*)f_16508},
{C_text("f_16518:support_2escm"),(void*)f_16518},
{C_text("f_16521:support_2escm"),(void*)f_16521},
{C_text("f_16533:support_2escm"),(void*)f_16533},
{C_text("f_16539:support_2escm"),(void*)f_16539},
{C_text("f_16545:support_2escm"),(void*)f_16545},
{C_text("f_16548:support_2escm"),(void*)f_16548},
{C_text("f_16550:support_2escm"),(void*)f_16550},
{C_text("f_16557:support_2escm"),(void*)f_16557},
{C_text("f_16563:support_2escm"),(void*)f_16563},
{C_text("f_16574:support_2escm"),(void*)f_16574},
{C_text("f_16622:support_2escm"),(void*)f_16622},
{C_text("f_16624:support_2escm"),(void*)f_16624},
{C_text("f_16630:support_2escm"),(void*)f_16630},
{C_text("f_16634:support_2escm"),(void*)f_16634},
{C_text("f_16639:support_2escm"),(void*)f_16639},
{C_text("f_16667:support_2escm"),(void*)f_16667},
{C_text("f_16675:support_2escm"),(void*)f_16675},
{C_text("f_16678:support_2escm"),(void*)f_16678},
{C_text("f_16681:support_2escm"),(void*)f_16681},
{C_text("f_16684:support_2escm"),(void*)f_16684},
{C_text("f_16687:support_2escm"),(void*)f_16687},
{C_text("f_16690:support_2escm"),(void*)f_16690},
{C_text("f_16691:support_2escm"),(void*)f_16691},
{C_text("f_16701:support_2escm"),(void*)f_16701},
{C_text("f_16707:support_2escm"),(void*)f_16707},
{C_text("f_16719:support_2escm"),(void*)f_16719},
{C_text("f_16722:support_2escm"),(void*)f_16722},
{C_text("f_16725:support_2escm"),(void*)f_16725},
{C_text("f_16730:support_2escm"),(void*)f_16730},
{C_text("f_16743:support_2escm"),(void*)f_16743},
{C_text("f_16746:support_2escm"),(void*)f_16746},
{C_text("f_16763:support_2escm"),(void*)f_16763},
{C_text("f_16773:support_2escm"),(void*)f_16773},
{C_text("f_16786:support_2escm"),(void*)f_16786},
{C_text("f_16790:support_2escm"),(void*)f_16790},
{C_text("f_16793:support_2escm"),(void*)f_16793},
{C_text("f_16808:support_2escm"),(void*)f_16808},
{C_text("f_16812:support_2escm"),(void*)f_16812},
{C_text("f_16829:support_2escm"),(void*)f_16829},
{C_text("f_16835:support_2escm"),(void*)f_16835},
{C_text("f_16845:support_2escm"),(void*)f_16845},
{C_text("f_16848:support_2escm"),(void*)f_16848},
{C_text("f_16864:support_2escm"),(void*)f_16864},
{C_text("f_16869:support_2escm"),(void*)f_16869},
{C_text("f_16873:support_2escm"),(void*)f_16873},
{C_text("f_16890:support_2escm"),(void*)f_16890},
{C_text("f_16901:support_2escm"),(void*)f_16901},
{C_text("f_16913:support_2escm"),(void*)f_16913},
{C_text("f_16916:support_2escm"),(void*)f_16916},
{C_text("f_16924:support_2escm"),(void*)f_16924},
{C_text("f_16929:support_2escm"),(void*)f_16929},
{C_text("f_16942:support_2escm"),(void*)f_16942},
{C_text("f_16953:support_2escm"),(void*)f_16953},
{C_text("f_16975:support_2escm"),(void*)f_16975},
{C_text("f_16977:support_2escm"),(void*)f_16977},
{C_text("f_16997:support_2escm"),(void*)f_16997},
{C_text("f_17017:support_2escm"),(void*)f_17017},
{C_text("f_17025:support_2escm"),(void*)f_17025},
{C_text("f_17034:support_2escm"),(void*)f_17034},
{C_text("f_17039:support_2escm"),(void*)f_17039},
{C_text("f_17043:support_2escm"),(void*)f_17043},
{C_text("f_17064:support_2escm"),(void*)f_17064},
{C_text("f_17079:support_2escm"),(void*)f_17079},
{C_text("f_17085:support_2escm"),(void*)f_17085},
{C_text("f_17096:support_2escm"),(void*)f_17096},
{C_text("f_17107:support_2escm"),(void*)f_17107},
{C_text("f_17118:support_2escm"),(void*)f_17118},
{C_text("f_17122:support_2escm"),(void*)f_17122},
{C_text("f_17128:support_2escm"),(void*)f_17128},
{C_text("f_17140:support_2escm"),(void*)f_17140},
{C_text("f_17144:support_2escm"),(void*)f_17144},
{C_text("f_17156:support_2escm"),(void*)f_17156},
{C_text("f_17164:support_2escm"),(void*)f_17164},
{C_text("f_17174:support_2escm"),(void*)f_17174},
{C_text("f_17189:support_2escm"),(void*)f_17189},
{C_text("f_17195:support_2escm"),(void*)f_17195},
{C_text("f_17198:support_2escm"),(void*)f_17198},
{C_text("f_17201:support_2escm"),(void*)f_17201},
{C_text("f_17204:support_2escm"),(void*)f_17204},
{C_text("f_17207:support_2escm"),(void*)f_17207},
{C_text("f_17211:support_2escm"),(void*)f_17211},
{C_text("f_17213:support_2escm"),(void*)f_17213},
{C_text("f_17220:support_2escm"),(void*)f_17220},
{C_text("f_17227:support_2escm"),(void*)f_17227},
{C_text("f_17238:support_2escm"),(void*)f_17238},
{C_text("f_17242:support_2escm"),(void*)f_17242},
{C_text("f_17245:support_2escm"),(void*)f_17245},
{C_text("f_17250:support_2escm"),(void*)f_17250},
{C_text("f_17256:support_2escm"),(void*)f_17256},
{C_text("f_17263:support_2escm"),(void*)f_17263},
{C_text("f_17266:support_2escm"),(void*)f_17266},
{C_text("f_17269:support_2escm"),(void*)f_17269},
{C_text("f_17272:support_2escm"),(void*)f_17272},
{C_text("f_5125:support_2escm"),(void*)f_5125},
{C_text("f_5128:support_2escm"),(void*)f_5128},
{C_text("f_5131:support_2escm"),(void*)f_5131},
{C_text("f_5134:support_2escm"),(void*)f_5134},
{C_text("f_5137:support_2escm"),(void*)f_5137},
{C_text("f_5140:support_2escm"),(void*)f_5140},
{C_text("f_5143:support_2escm"),(void*)f_5143},
{C_text("f_5146:support_2escm"),(void*)f_5146},
{C_text("f_5149:support_2escm"),(void*)f_5149},
{C_text("f_5259:support_2escm"),(void*)f_5259},
{C_text("f_5277:support_2escm"),(void*)f_5277},
{C_text("f_5317:support_2escm"),(void*)f_5317},
{C_text("f_5331:support_2escm"),(void*)f_5331},
{C_text("f_5520:support_2escm"),(void*)f_5520},
{C_text("f_5526:support_2escm"),(void*)f_5526},
{C_text("f_5548:support_2escm"),(void*)f_5548},
{C_text("f_5554:support_2escm"),(void*)f_5554},
{C_text("f_5560:support_2escm"),(void*)f_5560},
{C_text("f_5570:support_2escm"),(void*)f_5570},
{C_text("f_5584:support_2escm"),(void*)f_5584},
{C_text("f_5590:support_2escm"),(void*)f_5590},
{C_text("f_5604:support_2escm"),(void*)f_5604},
{C_text("f_5813:support_2escm"),(void*)f_5813},
{C_text("f_5821:support_2escm"),(void*)f_5821},
{C_text("f_5825:support_2escm"),(void*)f_5825},
{C_text("f_5829:support_2escm"),(void*)f_5829},
{C_text("f_5847:support_2escm"),(void*)f_5847},
{C_text("f_5886:support_2escm"),(void*)f_5886},
{C_text("f_5920:support_2escm"),(void*)f_5920},
{C_text("f_5926:support_2escm"),(void*)f_5926},
{C_text("f_5979:support_2escm"),(void*)f_5979},
{C_text("f_5985:support_2escm"),(void*)f_5985},
{C_text("f_6168:support_2escm"),(void*)f_6168},
{C_text("f_6182:support_2escm"),(void*)f_6182},
{C_text("f_6186:support_2escm"),(void*)f_6186},
{C_text("f_6281:support_2escm"),(void*)f_6281},
{C_text("f_6294:support_2escm"),(void*)f_6294},
{C_text("f_6432:support_2escm"),(void*)f_6432},
{C_text("f_6436:support_2escm"),(void*)f_6436},
{C_text("f_6450:support_2escm"),(void*)f_6450},
{C_text("f_6461:support_2escm"),(void*)f_6461},
{C_text("f_6464:support_2escm"),(void*)f_6464},
{C_text("f_6479:support_2escm"),(void*)f_6479},
{C_text("f_6485:support_2escm"),(void*)f_6485},
{C_text("f_6488:support_2escm"),(void*)f_6488},
{C_text("f_6494:support_2escm"),(void*)f_6494},
{C_text("f_6498:support_2escm"),(void*)f_6498},
{C_text("f_6501:support_2escm"),(void*)f_6501},
{C_text("f_6510:support_2escm"),(void*)f_6510},
{C_text("f_6518:support_2escm"),(void*)f_6518},
{C_text("f_6525:support_2escm"),(void*)f_6525},
{C_text("f_6530:support_2escm"),(void*)f_6530},
{C_text("f_6540:support_2escm"),(void*)f_6540},
{C_text("f_6553:support_2escm"),(void*)f_6553},
{C_text("f_6560:support_2escm"),(void*)f_6560},
{C_text("f_6563:support_2escm"),(void*)f_6563},
{C_text("f_6572:support_2escm"),(void*)f_6572},
{C_text("f_6575:support_2escm"),(void*)f_6575},
{C_text("f_6578:support_2escm"),(void*)f_6578},
{C_text("f_6581:support_2escm"),(void*)f_6581},
{C_text("f_6584:support_2escm"),(void*)f_6584},
{C_text("f_6587:support_2escm"),(void*)f_6587},
{C_text("f_6593:support_2escm"),(void*)f_6593},
{C_text("f_6596:support_2escm"),(void*)f_6596},
{C_text("f_6603:support_2escm"),(void*)f_6603},
{C_text("f_6605:support_2escm"),(void*)f_6605},
{C_text("f_6608:support_2escm"),(void*)f_6608},
{C_text("f_6610:support_2escm"),(void*)f_6610},
{C_text("f_6617:support_2escm"),(void*)f_6617},
{C_text("f_6620:support_2escm"),(void*)f_6620},
{C_text("f_6623:support_2escm"),(void*)f_6623},
{C_text("f_6637:support_2escm"),(void*)f_6637},
{C_text("f_6642:support_2escm"),(void*)f_6642},
{C_text("f_6652:support_2escm"),(void*)f_6652},
{C_text("f_6669:support_2escm"),(void*)f_6669},
{C_text("f_6672:support_2escm"),(void*)f_6672},
{C_text("f_6675:support_2escm"),(void*)f_6675},
{C_text("f_6678:support_2escm"),(void*)f_6678},
{C_text("f_6684:support_2escm"),(void*)f_6684},
{C_text("f_6693:support_2escm"),(void*)f_6693},
{C_text("f_6700:support_2escm"),(void*)f_6700},
{C_text("f_6702:support_2escm"),(void*)f_6702},
{C_text("f_6706:support_2escm"),(void*)f_6706},
{C_text("f_6709:support_2escm"),(void*)f_6709},
{C_text("f_6716:support_2escm"),(void*)f_6716},
{C_text("f_6718:support_2escm"),(void*)f_6718},
{C_text("f_6722:support_2escm"),(void*)f_6722},
{C_text("f_6725:support_2escm"),(void*)f_6725},
{C_text("f_6726:support_2escm"),(void*)f_6726},
{C_text("f_6736:support_2escm"),(void*)f_6736},
{C_text("f_6739:support_2escm"),(void*)f_6739},
{C_text("f_6744:support_2escm"),(void*)f_6744},
{C_text("f_6754:support_2escm"),(void*)f_6754},
{C_text("f_6771:support_2escm"),(void*)f_6771},
{C_text("f_6774:support_2escm"),(void*)f_6774},
{C_text("f_6777:support_2escm"),(void*)f_6777},
{C_text("f_6780:support_2escm"),(void*)f_6780},
{C_text("f_6783:support_2escm"),(void*)f_6783},
{C_text("f_6792:support_2escm"),(void*)f_6792},
{C_text("f_6795:support_2escm"),(void*)f_6795},
{C_text("f_6798:support_2escm"),(void*)f_6798},
{C_text("f_6815:support_2escm"),(void*)f_6815},
{C_text("f_6834:support_2escm"),(void*)f_6834},
{C_text("f_6857:support_2escm"),(void*)f_6857},
{C_text("f_6861:support_2escm"),(void*)f_6861},
{C_text("f_6869:support_2escm"),(void*)f_6869},
{C_text("f_6872:support_2escm"),(void*)f_6872},
{C_text("f_6880:support_2escm"),(void*)f_6880},
{C_text("f_6884:support_2escm"),(void*)f_6884},
{C_text("f_6893:support_2escm"),(void*)f_6893},
{C_text("f_6937:support_2escm"),(void*)f_6937},
{C_text("f_6956:support_2escm"),(void*)f_6956},
{C_text("f_6962:support_2escm"),(void*)f_6962},
{C_text("f_6967:support_2escm"),(void*)f_6967},
{C_text("f_6990:support_2escm"),(void*)f_6990},
{C_text("f_6996:support_2escm"),(void*)f_6996},
{C_text("f_6999:support_2escm"),(void*)f_6999},
{C_text("f_7001:support_2escm"),(void*)f_7001},
{C_text("f_7007:support_2escm"),(void*)f_7007},
{C_text("f_7029:support_2escm"),(void*)f_7029},
{C_text("f_7038:support_2escm"),(void*)f_7038},
{C_text("f_7050:support_2escm"),(void*)f_7050},
{C_text("f_7054:support_2escm"),(void*)f_7054},
{C_text("f_7056:support_2escm"),(void*)f_7056},
{C_text("f_7078:support_2escm"),(void*)f_7078},
{C_text("f_7085:support_2escm"),(void*)f_7085},
{C_text("f_7089:support_2escm"),(void*)f_7089},
{C_text("f_7093:support_2escm"),(void*)f_7093},
{C_text("f_7099:support_2escm"),(void*)f_7099},
{C_text("f_7121:support_2escm"),(void*)f_7121},
{C_text("f_7137:support_2escm"),(void*)f_7137},
{C_text("f_7141:support_2escm"),(void*)f_7141},
{C_text("f_7162:support_2escm"),(void*)f_7162},
{C_text("f_7185:support_2escm"),(void*)f_7185},
{C_text("f_7187:support_2escm"),(void*)f_7187},
{C_text("f_7194:support_2escm"),(void*)f_7194},
{C_text("f_7201:support_2escm"),(void*)f_7201},
{C_text("f_7214:support_2escm"),(void*)f_7214},
{C_text("f_7226:support_2escm"),(void*)f_7226},
{C_text("f_7245:support_2escm"),(void*)f_7245},
{C_text("f_7257:support_2escm"),(void*)f_7257},
{C_text("f_7271:support_2escm"),(void*)f_7271},
{C_text("f_7273:support_2escm"),(void*)f_7273},
{C_text("f_7299:support_2escm"),(void*)f_7299},
{C_text("f_7313:support_2escm"),(void*)f_7313},
{C_text("f_7319:support_2escm"),(void*)f_7319},
{C_text("f_7334:support_2escm"),(void*)f_7334},
{C_text("f_7350:support_2escm"),(void*)f_7350},
{C_text("f_7358:support_2escm"),(void*)f_7358},
{C_text("f_7362:support_2escm"),(void*)f_7362},
{C_text("f_7364:support_2escm"),(void*)f_7364},
{C_text("f_7375:support_2escm"),(void*)f_7375},
{C_text("f_7377:support_2escm"),(void*)f_7377},
{C_text("f_7394:support_2escm"),(void*)f_7394},
{C_text("f_7408:support_2escm"),(void*)f_7408},
{C_text("f_7442:support_2escm"),(void*)f_7442},
{C_text("f_7454:support_2escm"),(void*)f_7454},
{C_text("f_7470:support_2escm"),(void*)f_7470},
{C_text("f_7500:support_2escm"),(void*)f_7500},
{C_text("f_7504:support_2escm"),(void*)f_7504},
{C_text("f_7544:support_2escm"),(void*)f_7544},
{C_text("f_7546:support_2escm"),(void*)f_7546},
{C_text("f_7562:support_2escm"),(void*)f_7562},
{C_text("f_7568:support_2escm"),(void*)f_7568},
{C_text("f_7583:support_2escm"),(void*)f_7583},
{C_text("f_7600:support_2escm"),(void*)f_7600},
{C_text("f_7602:support_2escm"),(void*)f_7602},
{C_text("f_7608:support_2escm"),(void*)f_7608},
{C_text("f_7632:support_2escm"),(void*)f_7632},
{C_text("f_7648:support_2escm"),(void*)f_7648},
{C_text("f_7658:support_2escm"),(void*)f_7658},
{C_text("f_7663:support_2escm"),(void*)f_7663},
{C_text("f_7677:support_2escm"),(void*)f_7677},
{C_text("f_7680:support_2escm"),(void*)f_7680},
{C_text("f_7681:support_2escm"),(void*)f_7681},
{C_text("f_7685:support_2escm"),(void*)f_7685},
{C_text("f_7690:support_2escm"),(void*)f_7690},
{C_text("f_7696:support_2escm"),(void*)f_7696},
{C_text("f_7702:support_2escm"),(void*)f_7702},
{C_text("f_7710:support_2escm"),(void*)f_7710},
{C_text("f_7713:support_2escm"),(void*)f_7713},
{C_text("f_7721:support_2escm"),(void*)f_7721},
{C_text("f_7723:support_2escm"),(void*)f_7723},
{C_text("f_7727:support_2escm"),(void*)f_7727},
{C_text("f_7749:support_2escm"),(void*)f_7749},
{C_text("f_7755:support_2escm"),(void*)f_7755},
{C_text("f_7759:support_2escm"),(void*)f_7759},
{C_text("f_7772:support_2escm"),(void*)f_7772},
{C_text("f_7780:support_2escm"),(void*)f_7780},
{C_text("f_7786:support_2escm"),(void*)f_7786},
{C_text("f_7797:support_2escm"),(void*)f_7797},
{C_text("f_7799:support_2escm"),(void*)f_7799},
{C_text("f_7802:support_2escm"),(void*)f_7802},
{C_text("f_7808:support_2escm"),(void*)f_7808},
{C_text("f_7847:support_2escm"),(void*)f_7847},
{C_text("f_7852:support_2escm"),(void*)f_7852},
{C_text("f_7856:support_2escm"),(void*)f_7856},
{C_text("f_7860:support_2escm"),(void*)f_7860},
{C_text("f_7911:support_2escm"),(void*)f_7911},
{C_text("f_7948:support_2escm"),(void*)f_7948},
{C_text("f_7950:support_2escm"),(void*)f_7950},
{C_text("f_8000:support_2escm"),(void*)f_8000},
{C_text("f_8004:support_2escm"),(void*)f_8004},
{C_text("f_8018:support_2escm"),(void*)f_8018},
{C_text("f_8022:support_2escm"),(void*)f_8022},
{C_text("f_8030:support_2escm"),(void*)f_8030},
{C_text("f_8036:support_2escm"),(void*)f_8036},
{C_text("f_8040:support_2escm"),(void*)f_8040},
{C_text("f_8082:support_2escm"),(void*)f_8082},
{C_text("f_8086:support_2escm"),(void*)f_8086},
{C_text("f_8134:support_2escm"),(void*)f_8134},
{C_text("f_8138:support_2escm"),(void*)f_8138},
{C_text("f_8143:support_2escm"),(void*)f_8143},
{C_text("f_8153:support_2escm"),(void*)f_8153},
{C_text("f_8160:support_2escm"),(void*)f_8160},
{C_text("f_8163:support_2escm"),(void*)f_8163},
{C_text("f_8167:support_2escm"),(void*)f_8167},
{C_text("f_8194:support_2escm"),(void*)f_8194},
{C_text("f_8200:support_2escm"),(void*)f_8200},
{C_text("f_8210:support_2escm"),(void*)f_8210},
{C_text("f_8213:support_2escm"),(void*)f_8213},
{C_text("f_8216:support_2escm"),(void*)f_8216},
{C_text("f_8229:support_2escm"),(void*)f_8229},
{C_text("f_8231:support_2escm"),(void*)f_8231},
{C_text("f_8266:support_2escm"),(void*)f_8266},
{C_text("f_8272:support_2escm"),(void*)f_8272},
{C_text("f_8278:support_2escm"),(void*)f_8278},
{C_text("f_8287:support_2escm"),(void*)f_8287},
{C_text("f_8296:support_2escm"),(void*)f_8296},
{C_text("f_8305:support_2escm"),(void*)f_8305},
{C_text("f_8314:support_2escm"),(void*)f_8314},
{C_text("f_8323:support_2escm"),(void*)f_8323},
{C_text("f_8333:support_2escm"),(void*)f_8333},
{C_text("f_8335:support_2escm"),(void*)f_8335},
{C_text("f_8341:support_2escm"),(void*)f_8341},
{C_text("f_8356:support_2escm"),(void*)f_8356},
{C_text("f_8371:support_2escm"),(void*)f_8371},
{C_text("f_8374:support_2escm"),(void*)f_8374},
{C_text("f_8441:support_2escm"),(void*)f_8441},
{C_text("f_8443:support_2escm"),(void*)f_8443},
{C_text("f_8468:support_2escm"),(void*)f_8468},
{C_text("f_8491:support_2escm"),(void*)f_8491},
{C_text("f_8494:support_2escm"),(void*)f_8494},
{C_text("f_8497:support_2escm"),(void*)f_8497},
{C_text("f_8504:support_2escm"),(void*)f_8504},
{C_text("f_8551:support_2escm"),(void*)f_8551},
{C_text("f_8555:support_2escm"),(void*)f_8555},
{C_text("f_8560:support_2escm"),(void*)f_8560},
{C_text("f_8577:support_2escm"),(void*)f_8577},
{C_text("f_8585:support_2escm"),(void*)f_8585},
{C_text("f_8587:support_2escm"),(void*)f_8587},
{C_text("f_8612:support_2escm"),(void*)f_8612},
{C_text("f_8648:support_2escm"),(void*)f_8648},
{C_text("f_8682:support_2escm"),(void*)f_8682},
{C_text("f_8713:support_2escm"),(void*)f_8713},
{C_text("f_8736:support_2escm"),(void*)f_8736},
{C_text("f_8757:support_2escm"),(void*)f_8757},
{C_text("f_8779:support_2escm"),(void*)f_8779},
{C_text("f_8787:support_2escm"),(void*)f_8787},
{C_text("f_8791:support_2escm"),(void*)f_8791},
{C_text("f_8799:support_2escm"),(void*)f_8799},
{C_text("f_8820:support_2escm"),(void*)f_8820},
{C_text("f_8824:support_2escm"),(void*)f_8824},
{C_text("f_8836:support_2escm"),(void*)f_8836},
{C_text("f_8863:support_2escm"),(void*)f_8863},
{C_text("f_8875:support_2escm"),(void*)f_8875},
{C_text("f_8877:support_2escm"),(void*)f_8877},
{C_text("f_8902:support_2escm"),(void*)f_8902},
{C_text("f_8936:support_2escm"),(void*)f_8936},
{C_text("f_8962:support_2escm"),(void*)f_8962},
{C_text("f_8964:support_2escm"),(void*)f_8964},
{C_text("f_8989:support_2escm"),(void*)f_8989},
{C_text("f_9073:support_2escm"),(void*)f_9073},
{C_text("f_9075:support_2escm"),(void*)f_9075},
{C_text("f_9100:support_2escm"),(void*)f_9100},
{C_text("f_9140:support_2escm"),(void*)f_9140},
{C_text("f_9181:support_2escm"),(void*)f_9181},
{C_text("f_9210:support_2escm"),(void*)f_9210},
{C_text("f_9212:support_2escm"),(void*)f_9212},
{C_text("f_9237:support_2escm"),(void*)f_9237},
{C_text("f_9273:support_2escm"),(void*)f_9273},
{C_text("f_9275:support_2escm"),(void*)f_9275},
{C_text("f_9300:support_2escm"),(void*)f_9300},
{C_text("f_9312:support_2escm"),(void*)f_9312},
{C_text("f_9318:support_2escm"),(void*)f_9318},
{C_text("f_9341:support_2escm"),(void*)f_9341},
{C_text("f_9343:support_2escm"),(void*)f_9343},
{C_text("f_9368:support_2escm"),(void*)f_9368},
{C_text("f_9379:support_2escm"),(void*)f_9379},
{C_text("f_9383:support_2escm"),(void*)f_9383},
{C_text("f_9386:support_2escm"),(void*)f_9386},
{C_text("f_9393:support_2escm"),(void*)f_9393},
{C_text("f_9407:support_2escm"),(void*)f_9407},
{C_text("f_9513:support_2escm"),(void*)f_9513},
{C_text("f_9515:support_2escm"),(void*)f_9515},
{C_text("f_9540:support_2escm"),(void*)f_9540},
{C_text("f_9558:support_2escm"),(void*)f_9558},
{C_text("f_9561:support_2escm"),(void*)f_9561},
{C_text("f_9567:support_2escm"),(void*)f_9567},
{C_text("f_9573:support_2escm"),(void*)f_9573},
{C_text("f_9607:support_2escm"),(void*)f_9607},
{C_text("f_9620:support_2escm"),(void*)f_9620},
{C_text("f_9622:support_2escm"),(void*)f_9622},
{C_text("f_9647:support_2escm"),(void*)f_9647},
{C_text("f_9677:support_2escm"),(void*)f_9677},
{C_text("f_9679:support_2escm"),(void*)f_9679},
{C_text("f_9704:support_2escm"),(void*)f_9704},
{C_text("f_9777:support_2escm"),(void*)f_9777},
{C_text("f_9780:support_2escm"),(void*)f_9780},
{C_text("f_9789:support_2escm"),(void*)f_9789},
{C_text("f_9793:support_2escm"),(void*)f_9793},
{C_text("f_9797:support_2escm"),(void*)f_9797},
{C_text("f_9799:support_2escm"),(void*)f_9799},
{C_text("f_9847:support_2escm"),(void*)f_9847},
{C_text("f_9872:support_2escm"),(void*)f_9872},
{C_text("f_9900:support_2escm"),(void*)f_9900},
{C_text("f_9924:support_2escm"),(void*)f_9924},
{C_text("f_9958:support_2escm"),(void*)f_9958},
{C_text("f_9962:support_2escm"),(void*)f_9962},
{C_text("f_9972:support_2escm"),(void*)f_9972},
{C_text("f_9996:support_2escm"),(void*)f_9996},
{C_text("toplevel:support_2escm"),(void*)C_support_toplevel},
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
o|hiding unexported module binding: chicken.compiler.support#partition 
o|hiding unexported module binding: chicken.compiler.support#span 
o|hiding unexported module binding: chicken.compiler.support#take 
o|hiding unexported module binding: chicken.compiler.support#drop 
o|hiding unexported module binding: chicken.compiler.support#split-at 
o|hiding unexported module binding: chicken.compiler.support#append-map 
o|hiding unexported module binding: chicken.compiler.support#every 
o|hiding unexported module binding: chicken.compiler.support#any 
o|hiding unexported module binding: chicken.compiler.support#cons* 
o|hiding unexported module binding: chicken.compiler.support#concatenate 
o|hiding unexported module binding: chicken.compiler.support#delete 
o|hiding unexported module binding: chicken.compiler.support#first 
o|hiding unexported module binding: chicken.compiler.support#second 
o|hiding unexported module binding: chicken.compiler.support#third 
o|hiding unexported module binding: chicken.compiler.support#fourth 
o|hiding unexported module binding: chicken.compiler.support#fifth 
o|hiding unexported module binding: chicken.compiler.support#delete-duplicates 
o|hiding unexported module binding: chicken.compiler.support#alist-cons 
o|hiding unexported module binding: chicken.compiler.support#filter 
o|hiding unexported module binding: chicken.compiler.support#filter-map 
o|hiding unexported module binding: chicken.compiler.support#remove 
o|hiding unexported module binding: chicken.compiler.support#unzip1 
o|hiding unexported module binding: chicken.compiler.support#last 
o|hiding unexported module binding: chicken.compiler.support#list-index 
o|hiding unexported module binding: chicken.compiler.support#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.compiler.support#lset-difference/eq? 
o|hiding unexported module binding: chicken.compiler.support#lset-union/eq? 
o|hiding unexported module binding: chicken.compiler.support#lset-intersection/eq? 
o|hiding unexported module binding: chicken.compiler.support#list-tabulate 
o|hiding unexported module binding: chicken.compiler.support#lset<=/eq? 
o|hiding unexported module binding: chicken.compiler.support#lset=/eq? 
o|hiding unexported module binding: chicken.compiler.support#length+ 
o|hiding unexported module binding: chicken.compiler.support#find 
o|hiding unexported module binding: chicken.compiler.support#find-tail 
o|hiding unexported module binding: chicken.compiler.support#iota 
o|hiding unexported module binding: chicken.compiler.support#make-list 
o|hiding unexported module binding: chicken.compiler.support#posq 
o|hiding unexported module binding: chicken.compiler.support#posv 
o|hiding unexported module binding: chicken.compiler.support#constant659 
o|hiding unexported module binding: chicken.compiler.support#+logged-debugging-modes+ 
o|hiding unexported module binding: chicken.compiler.support#test-debugging-mode 
o|hiding unexported module binding: chicken.compiler.support#map-llist 
o|hiding unexported module binding: chicken.compiler.support#follow-without-loop 
o|hiding unexported module binding: chicken.compiler.support#sort-symbols 
o|hiding unexported module binding: chicken.compiler.support#profile-info-vector-name 
o|hiding unexported module binding: chicken.compiler.support#profile-lambda-list 
o|hiding unexported module binding: chicken.compiler.support#profile-lambda-index 
o|hiding unexported module binding: chicken.compiler.support#node 
o|hiding unexported module binding: chicken.compiler.support#copy-node-tree-and-rename 
o|hiding unexported module binding: chicken.compiler.support#node->sexpr 
o|hiding unexported module binding: chicken.compiler.support#sexpr->node 
o|hiding unexported module binding: chicken.compiler.support#foreign-callback-stub 
o|hiding unexported module binding: chicken.compiler.support#foreign-type-table 
o|hiding unexported module binding: chicken.compiler.support#block-variable-literal 
o|hiding unexported module binding: chicken.compiler.support#real-name-table 
o|hiding unexported module binding: chicken.compiler.support#real-name-max-depth 
o|hiding unexported module binding: chicken.compiler.support#encodeable-literal? 
o|hiding unexported module binding: chicken.compiler.support#scan-sharp-greater-string 
o|hiding unexported module binding: chicken.compiler.support#unhide-variable 
S|applied compiler syntax:
S|  sprintf		6
S|  fprintf		5
S|  printf		6
S|  for-each		10
S|  foldl		3
S|  map		33
S|  foldr		3
o|eliminated procedure checks: 438 
o|specializations:
o|  1 (scheme#eqv? (or eof null fixnum char boolean symbol) *)
o|  1 (scheme#+ fixnum fixnum)
o|  1 (scheme#number->string * *)
o|  1 (chicken.base#exact-integer? *)
o|  2 (chicken.bitwise#integer-length *)
o|  1 (scheme#length list)
o|  1 (scheme#- fixnum fixnum)
o|  1 (scheme#> * *)
o|  1 (scheme#> integer integer)
o|  1 (chicken.base#sub1 fixnum)
o|  4 (scheme#= fixnum fixnum)
o|  2 (scheme#assq * (list-of pair))
o|  1 (scheme#< * *)
o|  1 (scheme#* fixnum fixnum)
o|  1 (scheme#- * *)
o|  1 (scheme#positive? *)
o|  4 (scheme#cddr (pair * pair))
o|  1 (scheme#caddr (pair * (pair * pair)))
o|  1 (scheme#integer? *)
o|  331 (scheme#eqv? * (or eof null fixnum char boolean symbol))
o|  2 (##sys#call-with-values (procedure () *) *)
o|  3 (chicken.base#add1 *)
o|  1 (scheme#cadr (pair * pair))
o|  2 (scheme#current-input-port)
o|  4 (scheme#char=? char char)
o|  1 (scheme#number->string fixnum fixnum)
o|  3 (scheme#memq * list)
o|  1 (scheme#>= fixnum fixnum)
o|  3 (scheme#< fixnum fixnum)
o|  1 (chicken.base#sub1 *)
o|  2 (scheme#zero? *)
o|  2 (chicken.base#current-error-port)
o|  17 (##sys#check-output-port * * *)
o|  1 (scheme#eqv? * *)
o|  9 (##sys#check-list (or pair list) *)
o|  50 (scheme#cdr pair)
o|  33 (scheme#car pair)
(o e)|safe calls: 1800 
(o e)|assignments to immediate values: 5 
o|safe globals: (chicken.compiler.support#bomb chicken.compiler.support#debugging-chicken chicken.compiler.support#compiler-cleanup-hook chicken.compiler.support#unsafe chicken.compiler.support#number-type chicken.compiler.support#constant659 chicken.compiler.support#posv chicken.compiler.support#posq chicken.compiler.support#make-list chicken.compiler.support#iota chicken.compiler.support#find-tail chicken.compiler.support#find chicken.compiler.support#length+ chicken.compiler.support#lset=/eq? chicken.compiler.support#lset<=/eq? chicken.compiler.support#list-tabulate chicken.compiler.support#lset-intersection/eq? chicken.compiler.support#lset-union/eq? chicken.compiler.support#lset-difference/eq? chicken.compiler.support#lset-adjoin/eq? chicken.compiler.support#list-index chicken.compiler.support#last chicken.compiler.support#unzip1 chicken.compiler.support#remove chicken.compiler.support#filter-map chicken.compiler.support#filter chicken.compiler.support#alist-cons chicken.compiler.support#delete-duplicates chicken.compiler.support#fifth chicken.compiler.support#fourth chicken.compiler.support#third chicken.compiler.support#second chicken.compiler.support#first chicken.compiler.support#delete chicken.compiler.support#concatenate chicken.compiler.support#cons* chicken.compiler.support#any chicken.compiler.support#every chicken.compiler.support#append-map chicken.compiler.support#split-at chicken.compiler.support#drop chicken.compiler.support#take chicken.compiler.support#span chicken.compiler.support#partition) 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#partition 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#span 
o|inlining procedure: k5261 
o|inlining procedure: k5261 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#drop 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#append-map 
o|inlining procedure: k5531 
o|inlining procedure: k5531 
o|inlining procedure: k5562 
o|inlining procedure: k5562 
o|merged explicitly consed rest parameter: xs320 
o|inlining procedure: k5592 
o|inlining procedure: k5592 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#concatenate 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#delete-duplicates 
o|inlining procedure: k5779 
o|inlining procedure: k5779 
o|inlining procedure: k5771 
o|inlining procedure: k5771 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#remove 
o|inlining procedure: k5928 
o|inlining procedure: k5928 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#list-index 
o|merged explicitly consed rest parameter: vals460 
o|inlining procedure: k5987 
o|inlining procedure: k5987 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#lset-union/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#lset-intersection/eq? 
o|inlining procedure: k6170 
o|inlining procedure: k6170 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#lset=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#length+ 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#find-tail 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#iota 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#make-list 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#posq 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#posv 
o|inlining procedure: k6438 
o|inlining procedure: k6438 
o|inlining procedure: k6466 
o|inlining procedure: k6466 
o|inlining procedure: k6499 
o|inlining procedure: k6532 
o|contracted procedure: "(support.scm:137) g686693" 
o|propagated global variable: out696699 ##sys#standard-output 
o|substituted constant variable: a6514 
o|substituted constant variable: a6515 
o|inlining procedure: k6532 
o|inlining procedure: k6499 
o|propagated global variable: out711714 chicken.compiler.support#collected-debugging-output 
o|substituted constant variable: a6556 
o|substituted constant variable: a6557 
o|propagated global variable: out711714 chicken.compiler.support#collected-debugging-output 
o|inlining procedure: k6567 
o|inlining procedure: k6567 
o|propagated global variable: out747750 chicken.compiler.support#collected-debugging-output 
o|substituted constant variable: a6613 
o|substituted constant variable: a6614 
o|inlining procedure: k6628 
o|inlining procedure: k6628 
o|inlining procedure: k6644 
o|inlining procedure: k6644 
o|inlining procedure: k6664 
o|inlining procedure: k6664 
o|inlining procedure: k6746 
o|inlining procedure: k6746 
o|substituted constant variable: a6767 
o|substituted constant variable: a6768 
o|substituted constant variable: a6788 
o|substituted constant variable: a6789 
o|contracted procedure: "(support.scm:199) thread-id827" 
o|propagated global variable: t828 ##sys#current-thread 
o|contracted procedure: "(support.scm:213) chicken.compiler.support#map-llist" 
o|inlining procedure: k6836 
o|inlining procedure: k6836 
o|inlining procedure: k6895 
o|inlining procedure: k6895 
o|inlining procedure: k6916 
o|inlining procedure: k6916 
o|inlining procedure: k6939 
o|inlining procedure: k6939 
o|substituted constant variable: a6958 
o|substituted constant variable: a6959 
o|inlining procedure: k6969 
o|inlining procedure: k6969 
o|substituted constant variable: a6992 
o|substituted constant variable: a6993 
o|inlining procedure: k7009 
o|inlining procedure: k7009 
o|inlining procedure: k7058 
o|inlining procedure: k7058 
o|substituted constant variable: a7101 
o|inlining procedure: k7105 
o|inlining procedure: k7105 
o|substituted constant variable: a7112 
o|substituted constant variable: a7114 
o|inlining procedure: k7127 
o|inlining procedure: k7127 
o|substituted constant variable: a7131 
o|substituted constant variable: a7133 
o|substituted constant variable: a7135 
o|inlining procedure: k7142 
o|inlining procedure: k7167 
o|inlining procedure: k7167 
o|substituted constant variable: a7176 
o|substituted constant variable: a7180 
o|inlining procedure: k7142 
o|inlining procedure: k7203 
o|propagated global variable: r720417362 ##sys#standard-input 
o|inlining procedure: k7203 
o|inlining procedure: k7218 
o|inlining procedure: k7218 
o|inlining procedure: k7247 
o|inlining procedure: k7247 
o|inlining procedure: k7259 
o|inlining procedure: k7259 
o|inlining procedure: k7279 
o|inlining procedure: k7279 
o|inlining procedure: k7321 
o|inlining procedure: k7321 
o|inlining procedure: k7379 
o|inlining procedure: k7379 
o|inlining procedure: k7413 
o|inlining procedure: k7413 
o|inlining procedure: k7425 
o|inlining procedure: k7425 
o|inlining procedure: k7437 
o|inlining procedure: k7437 
o|inlining procedure: k7449 
o|inlining procedure: k7449 
o|inlining procedure: k7458 
o|inlining procedure: k7458 
o|inlining procedure: k7475 
o|inlining procedure: k7475 
o|inlining procedure: k7487 
o|inlining procedure: k7487 
o|inlining procedure: k7505 
o|inlining procedure: k7505 
o|inlining procedure: k7517 
o|inlining procedure: k7517 
o|inlining procedure: k7529 
o|inlining procedure: k7529 
o|inlining procedure: k7551 
o|inlining procedure: k7551 
o|inlining procedure: k7563 
o|inlining procedure: k7563 
o|inlining procedure: k7572 
o|inlining procedure: k7572 
o|inlining procedure: k7610 
o|inlining procedure: k7610 
o|inlining procedure: k7623 
o|inlining procedure: k7623 
o|inlining procedure: k7664 
o|inlining procedure: k7664 
o|inlining procedure: k7708 
o|inlining procedure: k7708 
o|inlining procedure: k7728 
o|inlining procedure: k7728 
o|inlining procedure: k7760 
o|inlining procedure: k7760 
o|merged explicitly consed rest parameter: args10991117 
o|consed rest parameter at call site: tmp24755 1 
o|inlining procedure: k7810 
o|inlining procedure: k7810 
o|inlining procedure: k7825 
o|inlining procedure: k7825 
o|inlining procedure: k7952 
o|contracted procedure: "(support.scm:420) g11621171" 
o|inlining procedure: k7952 
o|propagated global variable: g11681172 chicken.compiler.support#profile-lambda-list 
o|inlining procedure: k8005 
o|inlining procedure: k8005 
o|inlining procedure: k8023 
o|contracted procedure: "(support.scm:438) chicken.compiler.support#filter-map" 
o|inlining procedure: k5826 
o|inlining procedure: k5826 
o|inlining procedure: k5815 
o|inlining procedure: k5815 
o|inlining procedure: k8023 
o|inlining procedure: k8041 
o|inlining procedure: k8053 
o|inlining procedure: k8053 
o|inlining procedure: k8041 
o|inlining procedure: k8087 
o|inlining procedure: k8087 
o|inlining procedure: k8139 
o|inlining procedure: k8139 
o|inlining procedure: k8164 
o|inlining procedure: k8164 
o|propagated global variable: out12451248 ##sys#standard-output 
o|substituted constant variable: a8206 
o|substituted constant variable: a8207 
o|inlining procedure: k8202 
o|inlining procedure: k8233 
o|inlining procedure: k8233 
o|propagated global variable: out12451248 ##sys#standard-output 
o|inlining procedure: k8202 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#node 
o|contracted procedure: "(support.scm:498) g13411342" 
o|contracted procedure: "(support.scm:499) g13481349" 
o|inlining procedure: k8376 
o|inlining procedure: k8376 
o|inlining procedure: k8396 
o|inlining procedure: k8396 
o|inlining procedure: k8412 
o|contracted procedure: "(support.scm:509) g13741375" 
o|inlining procedure: k8445 
o|inlining procedure: k8445 
o|inlining procedure: k8412 
o|inlining procedure: k8489 
o|inlining procedure: k8489 
o|inlining procedure: k8508 
o|inlining procedure: k8508 
o|inlining procedure: k8519 
o|contracted procedure: "(support.scm:525) g14111412" 
o|inlining procedure: k8589 
o|inlining procedure: k8589 
o|contracted procedure: "(support.scm:526) chicken.compiler.support#unzip1" 
o|inlining procedure: k5888 
o|contracted procedure: "(mini-srfi-1.scm:143) g423432" 
o|inlining procedure: k5888 
o|inlining procedure: k8519 
o|contracted procedure: "(support.scm:530) g14461447" 
o|inlining procedure: k8657 
o|contracted procedure: "(support.scm:532) g14511452" 
o|inlining procedure: "(support.scm:534) chicken.compiler.support#fourth" 
o|inlining procedure: "(support.scm:533) chicken.compiler.support#third" 
o|inlining procedure: "(support.scm:533) chicken.compiler.support#second" 
o|inlining procedure: k8657 
o|inlining procedure: k8715 
o|contracted procedure: "(support.scm:539) g14641465" 
o|contracted procedure: "(support.scm:543) g14691470" 
o|inlining procedure: k8715 
o|contracted procedure: "(support.scm:545) g14741475" 
o|inlining procedure: k8841 
o|contracted procedure: "(support.scm:554) g14811482" 
o|inlining procedure: k8879 
o|inlining procedure: k8879 
o|inlining procedure: k8911 
o|inlining procedure: k8911 
o|inlining procedure: k8841 
o|contracted procedure: "(support.scm:559) g15191520" 
o|inlining procedure: k8966 
o|inlining procedure: k8966 
o|inlining procedure: k9001 
o|contracted procedure: "(support.scm:561) g15501551" 
o|inlining procedure: k9001 
o|contracted procedure: "(support.scm:563) g15551556" 
o|inlining procedure: k9041 
o|contracted procedure: "(support.scm:565) g15631564" 
o|inlining procedure: k9077 
o|inlining procedure: k9077 
o|inlining procedure: k9041 
o|contracted procedure: "(support.scm:570) g15951596" 
o|contracted procedure: "(support.scm:572) chicken.compiler.support#fifth" 
o|inlining procedure: "(support.scm:572) chicken.compiler.support#fourth" 
o|inlining procedure: "(support.scm:572) chicken.compiler.support#third" 
o|inlining procedure: "(support.scm:569) chicken.compiler.support#second" 
o|inlining procedure: k9173 
o|contracted procedure: "(support.scm:576) g16121613" 
o|inlining procedure: k9214 
o|inlining procedure: k9214 
o|inlining procedure: "(support.scm:576) chicken.compiler.support#second" 
o|inlining procedure: "(support.scm:576) chicken.compiler.support#first" 
o|inlining procedure: k9173 
o|contracted procedure: "(support.scm:578) g16431644" 
o|inlining procedure: k9277 
o|inlining procedure: k9277 
o|contracted procedure: "(support.scm:581) g16761677" 
o|inlining procedure: k9345 
o|inlining procedure: k9345 
o|inlining procedure: k9381 
o|inlining procedure: k9391 
o|inlining procedure: k9391 
o|inlining procedure: k9381 
o|contracted procedure: "(support.scm:583) g16851686" 
o|substituted constant variable: a9411 
o|inlining procedure: k9415 
o|inlining procedure: k9415 
o|inlining procedure: k9427 
o|inlining procedure: k9427 
o|substituted constant variable: a9434 
o|substituted constant variable: a9436 
o|substituted constant variable: a9438 
o|substituted constant variable: a9440 
o|substituted constant variable: a9442 
o|substituted constant variable: a9444 
o|substituted constant variable: a9449 
o|substituted constant variable: a9451 
o|substituted constant variable: a9453 
o|substituted constant variable: a9455 
o|inlining procedure: k9459 
o|inlining procedure: k9459 
o|substituted constant variable: a9466 
o|substituted constant variable: a9468 
o|substituted constant variable: a9470 
o|substituted constant variable: a9472 
o|substituted constant variable: a9474 
o|substituted constant variable: a9476 
o|substituted constant variable: a9481 
o|substituted constant variable: a9483 
o|substituted constant variable: a9485 
o|substituted constant variable: a9487 
o|substituted constant variable: a9492 
o|substituted constant variable: a9494 
o|contracted procedure: "(support.scm:593) g17201721" 
o|inlining procedure: k9517 
o|inlining procedure: k9517 
o|contracted procedure: "(support.scm:505) g13621363" 
o|inlining procedure: k9559 
o|inlining procedure: k9559 
o|inlining procedure: k9599 
o|inlining procedure: k9624 
o|inlining procedure: k9624 
o|inlining procedure: k9599 
o|inlining procedure: k9681 
o|inlining procedure: k9681 
o|inlining procedure: k9712 
o|inlining procedure: k9712 
o|inlining procedure: k9730 
o|inlining procedure: k9730 
o|inlining procedure: k9747 
o|inlining procedure: k9747 
o|inlining procedure: k9759 
o|inlining procedure: k9801 
o|inlining procedure: k9801 
o|inlining procedure: k9849 
o|inlining procedure: k9849 
o|inlining procedure: k9759 
o|inlining procedure: "(support.scm:621) chicken.compiler.support#third" 
o|inlining procedure: "(support.scm:618) chicken.compiler.support#second" 
o|inlining procedure: k9908 
o|inlining procedure: "(support.scm:624) chicken.compiler.support#first" 
o|inlining procedure: "(support.scm:624) chicken.compiler.support#first" 
o|inlining procedure: k9908 
o|inlining procedure: "(support.scm:626) chicken.compiler.support#first" 
o|inlining procedure: k9942 
o|inlining procedure: k9974 
o|inlining procedure: k9974 
o|inlining procedure: "(support.scm:629) chicken.compiler.support#first" 
o|inlining procedure: k9942 
o|inlining procedure: k10050 
o|inlining procedure: k10050 
o|inlining procedure: k10081 
o|consed rest parameter at call site: "(support.scm:639) chicken.compiler.support#cons*" 2 
o|inlining procedure: k10107 
o|inlining procedure: k10107 
o|inlining procedure: k10081 
o|inlining procedure: k10147 
o|inlining procedure: k10163 
o|inlining procedure: k10163 
o|substituted constant variable: a10187 
o|inlining procedure: k10147 
o|consed rest parameter at call site: "(support.scm:647) chicken.compiler.support#cons*" 2 
o|inlining procedure: k10232 
o|inlining procedure: k10232 
o|inlining procedure: k10267 
o|consed rest parameter at call site: "(support.scm:649) chicken.compiler.support#cons*" 2 
o|inlining procedure: k10292 
o|inlining procedure: k10292 
o|inlining procedure: k10267 
o|inlining procedure: k10343 
o|inlining procedure: k10343 
o|substituted constant variable: a10378 
o|substituted constant variable: a10380 
o|inlining procedure: k10384 
o|inlining procedure: k10384 
o|substituted constant variable: a10397 
o|substituted constant variable: a10399 
o|substituted constant variable: a10401 
o|substituted constant variable: a10403 
o|substituted constant variable: a10405 
o|substituted constant variable: a10407 
o|substituted constant variable: a10409 
o|substituted constant variable: a10411 
o|substituted constant variable: a10413 
o|substituted constant variable: a10415 
o|substituted constant variable: a10417 
o|substituted constant variable: a10419 
o|substituted constant variable: a10421 
o|substituted constant variable: a10423 
o|substituted constant variable: a10425 
o|substituted constant variable: a10427 
o|inlining procedure: k10431 
o|inlining procedure: k10431 
o|substituted constant variable: a10438 
o|substituted constant variable: a10440 
o|substituted constant variable: a10442 
o|contracted procedure: "(support.scm:603) g17671768" 
o|contracted procedure: "(support.scm:602) g17641765" 
o|contracted procedure: "(support.scm:601) g17611762" 
o|inlining procedure: k10452 
o|inlining procedure: k10452 
o|contracted procedure: "(support.scm:656) g20792080" 
o|inlining procedure: "(support.scm:658) chicken.compiler.support#second" 
o|inlining procedure: "(support.scm:658) chicken.compiler.support#first" 
o|contracted procedure: "(support.scm:666) chicken.compiler.support#split-at" 
o|inlining procedure: k5319 
o|inlining procedure: k5319 
o|inlining procedure: k10532 
o|contracted procedure: "(support.scm:675) g21282129" 
o|inlining procedure: k10558 
o|inlining procedure: k10558 
o|contracted procedure: "(support.scm:679) g21332134" 
o|substituted constant variable: a10580 
o|inlining procedure: k10532 
o|contracted procedure: "(support.scm:685) g21382139" 
o|contracted procedure: "(support.scm:669) chicken.compiler.support#copy-node-tree-and-rename" 
o|inlining procedure: k10715 
o|contracted procedure: "(support.scm:699) g22062207" 
o|inlining procedure: k10715 
o|inlining procedure: "(support.scm:704) rename2182" 
o|inlining procedure: "(support.scm:701) chicken.compiler.support#first" 
o|inlining procedure: k10754 
o|contracted procedure: "(support.scm:706) g22132214" 
o|inlining procedure: "(support.scm:708) chicken.compiler.support#first" 
o|inlining procedure: "(support.scm:707) rename2182" 
o|inlining procedure: "(support.scm:707) chicken.compiler.support#first" 
o|inlining procedure: k10754 
o|contracted procedure: "(support.scm:715) g22222223" 
o|inlining procedure: "(support.scm:717) chicken.compiler.support#second" 
o|inlining procedure: "(support.scm:711) chicken.compiler.support#first" 
o|inlining procedure: "(support.scm:710) chicken.compiler.support#first" 
o|inlining procedure: k10841 
o|contracted procedure: "(support.scm:728) g22932294" 
o|inlining procedure: k10907 
o|inlining procedure: k10907 
o|inlining procedure: "(support.scm:732) chicken.compiler.support#fourth" 
o|inlining procedure: k10955 
o|inlining procedure: "(support.scm:731) rename2182" 
o|inlining procedure: k10955 
o|inlining procedure: "(support.scm:730) chicken.compiler.support#second" 
o|inlining procedure: k10974 
o|inlining procedure: k10974 
o|inlining procedure: k11022 
o|inlining procedure: k11022 
o|inlining procedure: "(support.scm:720) chicken.compiler.support#third" 
o|inlining procedure: k10841 
o|contracted procedure: "(support.scm:734) g23332334" 
o|inlining procedure: k11083 
o|inlining procedure: k11083 
o|substituted constant variable: a11115 
o|substituted constant variable: a11117 
o|substituted constant variable: a11119 
o|substituted constant variable: a11121 
o|substituted constant variable: a11123 
o|contracted procedure: "(support.scm:696) g21972198" 
o|contracted procedure: "(support.scm:695) g21942195" 
o|contracted procedure: "(support.scm:694) g21912192" 
o|inlining procedure: k11130 
o|inlining procedure: k11130 
o|inlining procedure: k10636 
o|inlining procedure: k10636 
o|inlining procedure: k11184 
o|inlining procedure: k11184 
o|contracted procedure: "(support.scm:746) g23812382" 
o|contracted procedure: "(support.scm:748) g23922393" 
o|contracted procedure: "(support.scm:747) g23892390" 
o|contracted procedure: "(support.scm:746) g23862387" 
o|contracted procedure: "(support.scm:753) g24042405" 
o|contracted procedure: "(support.scm:752) g24012402" 
o|contracted procedure: "(support.scm:751) g23982399" 
o|inlining procedure: k11448 
o|inlining procedure: k11471 
o|contracted procedure: "(support.scm:804) g25672574" 
o|inlining procedure: k11471 
o|contracted procedure: "(support.scm:804) chicken.compiler.support#sort-symbols" 
o|inlining procedure: k11448 
o|inlining procedure: k11532 
o|contracted procedure: "(support.scm:796) g25452552" 
o|inlining procedure: k11532 
o|inlining procedure: k11559 
o|inlining procedure: k11574 
o|inlining procedure: k11592 
o|inlining procedure: k11609 
o|contracted procedure: "(support.scm:788) chicken.compiler.support#node->sexpr" 
o|inlining procedure: k11337 
o|inlining procedure: k11337 
o|contracted procedure: "(support.scm:760) g24422443" 
o|contracted procedure: "(support.scm:759) g24202421" 
o|contracted procedure: "(support.scm:758) g24172418" 
o|inlining procedure: k11647 
o|inlining procedure: k11647 
o|inlining procedure: "(support.scm:786) chicken.compiler.support#fourth" 
o|substituted constant variable: a11659 
o|substituted constant variable: a11661 
o|contracted procedure: "(support.scm:782) g25362537" 
o|inlining procedure: k11609 
o|contracted procedure: "(support.scm:780) g25252526" 
o|inlining procedure: k11592 
o|inlining procedure: k11574 
o|contracted procedure: "(support.scm:775) g25112512" 
o|contracted procedure: "(support.scm:775) g25142515" 
o|inlining procedure: k11559 
o|inlining procedure: k11717 
o|inlining procedure: k11717 
o|contracted procedure: "(support.scm:813) g25952596" 
o|contracted procedure: "(support.scm:816) chicken.compiler.support#sexpr->node" 
o|contracted procedure: "(support.scm:764) g24572458" 
o|inlining procedure: k11408 
o|inlining procedure: k11408 
o|inlining procedure: k11764 
o|inlining procedure: k11764 
o|inlining procedure: k11795 
o|inlining procedure: k11795 
o|inlining procedure: k11810 
o|inlining procedure: k11810 
o|inlining procedure: k11842 
o|inlining procedure: k11842 
o|inlining procedure: k11857 
o|inlining procedure: k11882 
o|inlining procedure: k11882 
o|inlining procedure: k11900 
o|inlining procedure: k11900 
o|contracted procedure: "(support.scm:843) g26562657" 
o|inlining procedure: k11857 
o|inlining procedure: "(support.scm:842) chicken.compiler.support#second" 
o|contracted procedure: "(support.scm:842) g26442645" 
o|inlining procedure: "(support.scm:841) chicken.compiler.support#first" 
o|contracted procedure: "(support.scm:841) g26402641" 
o|inlining procedure: k11964 
o|contracted procedure: "(support.scm:854) g26642665" 
o|contracted procedure: "(support.scm:854) g26612662" 
o|inlining procedure: k11964 
o|inlining procedure: k12013 
o|inlining procedure: k12013 
o|contracted procedure: "(support.scm:867) chicken.compiler.support#find" 
o|inlining procedure: k6283 
o|inlining procedure: k6283 
o|propagated global variable: lst566 chicken.compiler.support#foreign-callback-stubs 
o|inlining procedure: "(support.scm:866) chicken.compiler.support#first" 
o|contracted procedure: "(support.scm:866) g26992700" 
o|inlining procedure: k12053 
o|inlining procedure: k12053 
o|substituted constant variable: a12069 
o|substituted constant variable: a12071 
o|substituted constant variable: a12073 
o|inlining procedure: k12077 
o|inlining procedure: k12077 
o|substituted constant variable: a12090 
o|substituted constant variable: a12092 
o|substituted constant variable: a12094 
o|substituted constant variable: a12096 
o|contracted procedure: "(support.scm:863) g26862687" 
o|contracted procedure: "(support.scm:862) g26772678" 
o|inlining procedure: k12114 
o|inlining procedure: k12137 
o|inlining procedure: k12160 
o|inlining procedure: k12160 
o|inlining procedure: "(support.scm:885) chicken.compiler.support#first" 
o|contracted procedure: "(support.scm:885) g27392740" 
o|contracted procedure: "(support.scm:884) g27352736" 
o|inlining procedure: "(support.scm:883) chicken.compiler.support#first" 
o|contracted procedure: "(support.scm:882) g27302731" 
o|inlining procedure: k12137 
o|contracted procedure: "(support.scm:888) g27422743" 
o|substituted constant variable: a12214 
o|substituted constant variable: a12216 
o|contracted procedure: "(support.scm:880) g27262727" 
o|inlining procedure: "(support.scm:878) chicken.compiler.support#second" 
o|inlining procedure: k12114 
o|inlining procedure: "(support.scm:876) chicken.compiler.support#first" 
o|inlining procedure: "(support.scm:875) chicken.compiler.support#third" 
o|contracted procedure: "(support.scm:874) g27102711" 
o|inlining procedure: k12232 
o|inlining procedure: k12232 
o|inlining procedure: k12247 
o|inlining procedure: k12247 
o|inlining procedure: k12273 
o|inlining procedure: k12273 
o|inlining procedure: k12288 
o|inlining procedure: k12288 
o|inlining procedure: k12310 
o|inlining procedure: k12330 
o|inlining procedure: k12330 
o|inlining procedure: k12310 
o|inlining procedure: k12353 
o|contracted procedure: "(support.scm:928) chicken.compiler.support#unhide-variable" 
o|inlining procedure: k17029 
o|inlining procedure: k17029 
o|inlining procedure: k12353 
o|contracted procedure: "(support.scm:927) g27772778" 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#foreign-callback-stub 
o|contracted procedure: "(support.scm:951) g28192820" 
o|inlining procedure: k12473 
o|inlining procedure: k12473 
o|inlining procedure: k12510 
o|inlining procedure: k12510 
o|inlining procedure: k12558 
o|inlining procedure: k12558 
o|inlining procedure: k12582 
o|inlining procedure: k12582 
o|inlining procedure: k12588 
o|inlining procedure: k12588 
o|inlining procedure: k12641 
o|inlining procedure: k12641 
o|inlining procedure: k12695 
o|inlining procedure: k12695 
o|inlining procedure: k12753 
o|substituted constant variable: tmap2859 
o|substituted constant variable: tmap2859 
o|inlining procedure: k12753 
o|substituted constant variable: a12795 
o|substituted constant variable: a12796 
o|inlining procedure: k12809 
o|inlining procedure: k12809 
o|substituted constant variable: a12838 
o|substituted constant variable: a12839 
o|inlining procedure: k12822 
o|inlining procedure: k12822 
o|inlining procedure: k12901 
o|inlining procedure: k12901 
o|inlining procedure: k12955 
o|inlining procedure: k12955 
o|inlining procedure: k12983 
o|inlining procedure: k12983 
o|inlining procedure: k13007 
o|inlining procedure: k13007 
o|inlining procedure: k13029 
o|inlining procedure: k13029 
o|inlining procedure: k13103 
o|inlining procedure: k13103 
o|inlining procedure: k13144 
o|inlining procedure: k13144 
o|inlining procedure: k13150 
o|inlining procedure: k13150 
o|inlining procedure: k13176 
o|inlining procedure: k13176 
o|substituted constant variable: a13208 
o|substituted constant variable: a13210 
o|substituted constant variable: a13212 
o|substituted constant variable: a13214 
o|substituted constant variable: a13216 
o|substituted constant variable: a13218 
o|substituted constant variable: a13220 
o|substituted constant variable: a13225 
o|substituted constant variable: a13227 
o|inlining procedure: k13231 
o|inlining procedure: k13231 
o|substituted constant variable: a13244 
o|substituted constant variable: a13246 
o|substituted constant variable: a13248 
o|substituted constant variable: a13250 
o|substituted constant variable: a13258 
o|inlining procedure: k13262 
o|inlining procedure: k13262 
o|substituted constant variable: a13269 
o|substituted constant variable: a13271 
o|substituted constant variable: a13273 
o|inlining procedure: k13277 
o|inlining procedure: k13277 
o|substituted constant variable: a13290 
o|substituted constant variable: a13292 
o|substituted constant variable: a13294 
o|substituted constant variable: a13296 
o|substituted constant variable: a13298 
o|inlining procedure: k13302 
o|inlining procedure: k13302 
o|substituted constant variable: a13309 
o|substituted constant variable: a13311 
o|substituted constant variable: a13313 
o|inlining procedure: k13317 
o|inlining procedure: k13317 
o|inlining procedure: k13329 
o|inlining procedure: k13329 
o|substituted constant variable: a13342 
o|substituted constant variable: a13344 
o|substituted constant variable: a13346 
o|substituted constant variable: a13348 
o|substituted constant variable: a13350 
o|substituted constant variable: a13352 
o|inlining procedure: k13356 
o|inlining procedure: k13356 
o|inlining procedure: k13368 
o|inlining procedure: k13368 
o|substituted constant variable: a13381 
o|substituted constant variable: a13383 
o|substituted constant variable: a13385 
o|substituted constant variable: a13387 
o|substituted constant variable: a13389 
o|substituted constant variable: a13391 
o|inlining procedure: k13395 
o|inlining procedure: k13395 
o|inlining procedure: k13407 
o|inlining procedure: k13407 
o|inlining procedure: k13419 
o|inlining procedure: k13419 
o|inlining procedure: k13431 
o|inlining procedure: k13431 
o|substituted constant variable: a13444 
o|substituted constant variable: a13446 
o|substituted constant variable: a13448 
o|substituted constant variable: a13450 
o|substituted constant variable: a13452 
o|substituted constant variable: a13454 
o|substituted constant variable: a13456 
o|substituted constant variable: a13458 
o|substituted constant variable: a13460 
o|substituted constant variable: a13462 
o|inlining procedure: k13466 
o|inlining procedure: k13466 
o|inlining procedure: k13478 
o|inlining procedure: k13478 
o|inlining procedure: k13490 
o|inlining procedure: k13490 
o|inlining procedure: k13502 
o|inlining procedure: k13502 
o|substituted constant variable: a13515 
o|substituted constant variable: a13517 
o|substituted constant variable: a13519 
o|substituted constant variable: a13521 
o|substituted constant variable: a13523 
o|substituted constant variable: a13525 
o|substituted constant variable: a13527 
o|substituted constant variable: a13529 
o|substituted constant variable: a13531 
o|substituted constant variable: a13533 
o|substituted constant variable: a13535 
o|substituted constant variable: a13537 
o|substituted constant variable: a13542 
o|substituted constant variable: a13544 
o|substituted constant variable: a13549 
o|substituted constant variable: a13551 
o|inlining procedure: k13555 
o|inlining procedure: k13555 
o|substituted constant variable: a13562 
o|substituted constant variable: a13564 
o|substituted constant variable: a13566 
o|inlining procedure: k13570 
o|inlining procedure: k13570 
o|inlining procedure: k13582 
o|inlining procedure: k13582 
o|substituted constant variable: a13595 
o|substituted constant variable: a13597 
o|substituted constant variable: a13599 
o|substituted constant variable: a13601 
o|substituted constant variable: a13603 
o|substituted constant variable: a13605 
o|substituted constant variable: a13610 
o|substituted constant variable: a13612 
o|inlining procedure: k13628 
o|inlining procedure: k13628 
o|inlining procedure: k13634 
o|inlining procedure: k13634 
o|inlining procedure: k13655 
o|inlining procedure: k13655 
o|inlining procedure: k13661 
o|inlining procedure: k13661 
o|inlining procedure: k13685 
o|inlining procedure: k13685 
o|removed unused formal parameters: (t3210) 
o|inlining procedure: k13727 
o|inlining procedure: k13727 
o|inlining procedure: k13748 
o|inlining procedure: k13748 
o|inlining procedure: k13772 
o|inlining procedure: k13772 
o|inlining procedure: k13802 
o|inlining procedure: k13821 
o|inlining procedure: k13821 
o|removed unused parameter to known procedure: t3210 "(support.scm:1188) err3209" 
o|substituted constant variable: a13847 
o|substituted constant variable: a13849 
o|inlining procedure: k13853 
o|inlining procedure: k13853 
o|inlining procedure: k13865 
o|inlining procedure: k13865 
o|inlining procedure: k13877 
o|inlining procedure: k13877 
o|inlining procedure: k13889 
o|inlining procedure: k13889 
o|substituted constant variable: a13896 
o|substituted constant variable: a13898 
o|substituted constant variable: a13900 
o|substituted constant variable: a13902 
o|substituted constant variable: a13904 
o|substituted constant variable: a13906 
o|substituted constant variable: a13908 
o|substituted constant variable: a13910 
o|substituted constant variable: a13912 
o|inlining procedure: k13802 
o|removed unused parameter to known procedure: t3210 "(support.scm:1189) err3209" 
o|inlining procedure: k13925 
o|inlining procedure: k13925 
o|substituted constant variable: a13938 
o|substituted constant variable: a13940 
o|substituted constant variable: a13942 
o|substituted constant variable: a13944 
o|inlining procedure: k13948 
o|inlining procedure: k13948 
o|substituted constant variable: a13955 
o|substituted constant variable: a13957 
o|substituted constant variable: a13959 
o|inlining procedure: k13963 
o|inlining procedure: k13963 
o|inlining procedure: k13975 
o|inlining procedure: k13975 
o|substituted constant variable: a13988 
o|substituted constant variable: a13990 
o|substituted constant variable: a13992 
o|substituted constant variable: a13994 
o|substituted constant variable: a13996 
o|substituted constant variable: a13998 
o|inlining procedure: k14002 
o|inlining procedure: k14002 
o|inlining procedure: k14014 
o|inlining procedure: k14014 
o|inlining procedure: k14026 
o|inlining procedure: k14026 
o|inlining procedure: k14038 
o|inlining procedure: k14038 
o|inlining procedure: k14050 
o|inlining procedure: k14050 
o|substituted constant variable: a14063 
o|substituted constant variable: a14065 
o|substituted constant variable: a14067 
o|substituted constant variable: a14069 
o|substituted constant variable: a14071 
o|substituted constant variable: a14073 
o|substituted constant variable: a14075 
o|substituted constant variable: a14077 
o|substituted constant variable: a14079 
o|substituted constant variable: a14081 
o|substituted constant variable: a14083 
o|substituted constant variable: a14085 
o|inlining procedure: k14089 
o|inlining procedure: k14089 
o|inlining procedure: k14101 
o|inlining procedure: k14101 
o|inlining procedure: k14113 
o|inlining procedure: k14113 
o|inlining procedure: k14125 
o|inlining procedure: k14125 
o|inlining procedure: k14137 
o|inlining procedure: k14137 
o|inlining procedure: k14149 
o|inlining procedure: k14149 
o|substituted constant variable: a14156 
o|substituted constant variable: a14158 
o|substituted constant variable: a14160 
o|substituted constant variable: a14162 
o|substituted constant variable: a14164 
o|substituted constant variable: a14166 
o|substituted constant variable: a14168 
o|substituted constant variable: a14170 
o|substituted constant variable: a14172 
o|substituted constant variable: a14174 
o|substituted constant variable: a14176 
o|substituted constant variable: a14178 
o|substituted constant variable: a14180 
o|inlining procedure: k14202 
o|inlining procedure: k14202 
o|inlining procedure: k14229 
o|inlining procedure: k14229 
o|inlining procedure: k14251 
o|inlining procedure: k14251 
o|inlining procedure: "(support.scm:1216) err3361" 
o|substituted constant variable: a14280 
o|inlining procedure: k14284 
o|inlining procedure: k14284 
o|inlining procedure: k14296 
o|inlining procedure: k14296 
o|inlining procedure: k14308 
o|inlining procedure: k14308 
o|inlining procedure: k14320 
o|inlining procedure: k14320 
o|substituted constant variable: a14327 
o|substituted constant variable: a14329 
o|substituted constant variable: a14331 
o|substituted constant variable: a14333 
o|substituted constant variable: a14335 
o|substituted constant variable: a14337 
o|substituted constant variable: a14339 
o|substituted constant variable: a14341 
o|substituted constant variable: a14343 
o|inlining procedure: "(support.scm:1217) err3361" 
o|inlining procedure: k14356 
o|inlining procedure: k14356 
o|inlining procedure: k14368 
o|inlining procedure: k14368 
o|substituted constant variable: a14375 
o|substituted constant variable: a14377 
o|substituted constant variable: a14379 
o|substituted constant variable: a14381 
o|substituted constant variable: a14383 
o|inlining procedure: k14387 
o|inlining procedure: k14387 
o|inlining procedure: k14399 
o|inlining procedure: k14399 
o|inlining procedure: k14411 
o|inlining procedure: k14411 
o|inlining procedure: k14423 
o|inlining procedure: k14423 
o|inlining procedure: k14435 
o|inlining procedure: k14435 
o|inlining procedure: k14447 
o|inlining procedure: k14447 
o|inlining procedure: k14459 
o|inlining procedure: k14459 
o|inlining procedure: k14471 
o|inlining procedure: k14471 
o|inlining procedure: k14483 
o|inlining procedure: k14483 
o|inlining procedure: k14495 
o|inlining procedure: k14495 
o|inlining procedure: k14507 
o|inlining procedure: k14507 
o|inlining procedure: k14519 
o|inlining procedure: k14519 
o|inlining procedure: k14531 
o|inlining procedure: k14531 
o|inlining procedure: k14543 
o|inlining procedure: k14543 
o|inlining procedure: k14555 
o|inlining procedure: k14555 
o|substituted constant variable: a14568 
o|substituted constant variable: a14570 
o|substituted constant variable: a14572 
o|substituted constant variable: a14574 
o|substituted constant variable: a14576 
o|substituted constant variable: a14578 
o|substituted constant variable: a14580 
o|substituted constant variable: a14582 
o|substituted constant variable: a14584 
o|substituted constant variable: a14586 
o|substituted constant variable: a14588 
o|substituted constant variable: a14590 
o|substituted constant variable: a14592 
o|substituted constant variable: a14594 
o|substituted constant variable: a14596 
o|substituted constant variable: a14598 
o|substituted constant variable: a14600 
o|substituted constant variable: a14602 
o|substituted constant variable: a14604 
o|substituted constant variable: a14606 
o|substituted constant variable: a14608 
o|substituted constant variable: a14610 
o|substituted constant variable: a14612 
o|substituted constant variable: a14614 
o|substituted constant variable: a14616 
o|substituted constant variable: a14618 
o|substituted constant variable: a14620 
o|substituted constant variable: a14622 
o|substituted constant variable: a14624 
o|substituted constant variable: a14626 
o|substituted constant variable: a14628 
o|substituted constant variable: a14630 
o|inlining procedure: k14643 
o|inlining procedure: k14643 
o|inlining procedure: k14672 
o|inlining procedure: k14672 
o|inlining procedure: k14704 
o|inlining procedure: k14704 
o|inlining procedure: k14734 
o|inlining procedure: k14734 
o|inlining procedure: k14753 
o|inlining procedure: k14753 
o|inlining procedure: k14775 
o|inlining procedure: k14775 
o|substituted constant variable: a14840 
o|substituted constant variable: a14845 
o|substituted constant variable: a14847 
o|substituted constant variable: a14848 
o|inlining procedure: k14856 
o|substituted constant variable: a14866 
o|inlining procedure: k14856 
o|substituted constant variable: a14867 
o|substituted constant variable: a14877 
o|substituted constant variable: a14879 
o|substituted constant variable: a14881 
o|substituted constant variable: a14886 
o|substituted constant variable: a14888 
o|substituted constant variable: a14893 
o|substituted constant variable: a14895 
o|substituted constant variable: a14897 
o|substituted constant variable: a14902 
o|substituted constant variable: a14904 
o|inlining procedure: k14911 
o|inlining procedure: k14911 
o|inlining procedure: k14926 
o|inlining procedure: k14926 
o|inlining procedure: k14944 
o|inlining procedure: k14944 
o|substituted constant variable: a14951 
o|inlining procedure: k14952 
o|inlining procedure: k14952 
o|inlining procedure: k14967 
o|inlining procedure: k14967 
o|substituted constant variable: a14974 
o|inlining procedure: k14975 
o|inlining procedure: k14975 
o|inlining procedure: k14987 
o|inlining procedure: k14987 
o|substituted constant variable: a14994 
o|inlining procedure: k14995 
o|inlining procedure: k14995 
o|inlining procedure: k15010 
o|inlining procedure: k15010 
o|substituted constant variable: a15027 
o|inlining procedure: k15028 
o|inlining procedure: k15028 
o|inlining procedure: k15040 
o|inlining procedure: k15040 
o|inlining procedure: k15052 
o|inlining procedure: k15052 
o|inlining procedure: k15064 
o|inlining procedure: k15064 
o|inlining procedure: k15076 
o|inlining procedure: k15076 
o|inlining procedure: k15088 
o|inlining procedure: k15088 
o|inlining procedure: k15103 
o|inlining procedure: k15103 
o|inlining procedure: k15118 
o|inlining procedure: k15118 
o|inlining procedure: k15136 
o|inlining procedure: k15136 
o|inlining procedure: k15149 
o|inlining procedure: k15149 
o|inlining procedure: k15171 
o|inlining procedure: k15171 
o|inlining procedure: k15183 
o|inlining procedure: k15183 
o|substituted constant variable: a15190 
o|substituted constant variable: a15192 
o|substituted constant variable: a15194 
o|substituted constant variable: a15196 
o|inlining procedure: k15200 
o|inlining procedure: k15200 
o|substituted constant variable: a15213 
o|substituted constant variable: a15215 
o|substituted constant variable: a15217 
o|substituted constant variable: a15219 
o|substituted constant variable: a15221 
o|inlining procedure: k15225 
o|inlining procedure: k15225 
o|substituted constant variable: a15232 
o|substituted constant variable: a15234 
o|substituted constant variable: a15236 
o|substituted constant variable: a15241 
o|substituted constant variable: a15243 
o|inlining procedure: k15247 
o|inlining procedure: k15247 
o|substituted constant variable: a15260 
o|substituted constant variable: a15262 
o|substituted constant variable: a15264 
o|substituted constant variable: a15266 
o|substituted constant variable: a15268 
o|substituted constant variable: a15270 
o|inlining procedure: k15274 
o|inlining procedure: k15274 
o|inlining procedure: k15286 
o|inlining procedure: k15286 
o|inlining procedure: k15298 
o|inlining procedure: k15298 
o|inlining procedure: k15310 
o|inlining procedure: k15310 
o|substituted constant variable: a15317 
o|substituted constant variable: a15319 
o|substituted constant variable: a15321 
o|substituted constant variable: a15323 
o|substituted constant variable: a15325 
o|substituted constant variable: a15327 
o|substituted constant variable: a15329 
o|substituted constant variable: a15331 
o|substituted constant variable: a15333 
o|substituted constant variable: a15335 
o|substituted constant variable: a15337 
o|substituted constant variable: a15339 
o|substituted constant variable: a15341 
o|substituted constant variable: a15343 
o|substituted constant variable: a15345 
o|substituted constant variable: a15347 
o|substituted constant variable: a15349 
o|substituted constant variable: a15351 
o|substituted constant variable: a15353 
o|inlining procedure: k15357 
o|inlining procedure: k15357 
o|inlining procedure: k15369 
o|inlining procedure: k15369 
o|inlining procedure: k15381 
o|inlining procedure: k15381 
o|inlining procedure: k15393 
o|inlining procedure: k15393 
o|substituted constant variable: a15406 
o|substituted constant variable: a15408 
o|substituted constant variable: a15410 
o|substituted constant variable: a15412 
o|substituted constant variable: a15414 
o|substituted constant variable: a15416 
o|substituted constant variable: a15418 
o|substituted constant variable: a15420 
o|substituted constant variable: a15422 
o|substituted constant variable: a15424 
o|substituted constant variable: a15426 
o|substituted constant variable: a15428 
o|substituted constant variable: a15430 
o|substituted constant variable: a15432 
o|substituted constant variable: a15437 
o|substituted constant variable: a15439 
o|substituted constant variable: a15444 
o|substituted constant variable: a15446 
o|inlining procedure: k15450 
o|inlining procedure: k15450 
o|inlining procedure: k15462 
o|inlining procedure: k15462 
o|inlining procedure: k15474 
o|inlining procedure: k15474 
o|substituted constant variable: a15487 
o|substituted constant variable: a15489 
o|substituted constant variable: a15491 
o|substituted constant variable: a15493 
o|substituted constant variable: a15495 
o|substituted constant variable: a15497 
o|substituted constant variable: a15499 
o|substituted constant variable: a15501 
o|substituted constant variable: a15506 
o|substituted constant variable: a15508 
o|substituted constant variable: a15510 
o|inlining procedure: k15536 
o|inlining procedure: k15560 
o|inlining procedure: k15560 
o|inlining procedure: "(support.scm:1328) chicken.compiler.support#first" 
o|contracted procedure: "(support.scm:1328) g37593760" 
o|inlining procedure: k15536 
o|inlining procedure: k15624 
o|inlining procedure: k15624 
o|inlining procedure: k15647 
o|inlining procedure: k15647 
o|substituted constant variable: a15654 
o|substituted constant variable: a15656 
o|substituted constant variable: a15658 
o|substituted constant variable: a15663 
o|substituted constant variable: a15665 
o|contracted procedure: "(support.scm:1326) g37523753" 
o|contracted procedure: "(support.scm:1325) g37433744" 
o|inlining procedure: k15696 
o|inlining procedure: k15696 
o|inlining procedure: k15714 
o|inlining procedure: k15714 
o|consed rest parameter at call site: "(support.scm:1353) chicken.compiler.support#lset-adjoin/eq?" 2 
o|consed rest parameter at call site: "(support.scm:1351) chicken.compiler.support#lset-adjoin/eq?" 2 
o|inlining procedure: "(support.scm:1349) chicken.compiler.support#first" 
o|inlining procedure: k15734 
o|consed rest parameter at call site: "(support.scm:1356) chicken.compiler.support#lset-adjoin/eq?" 2 
o|inlining procedure: "(support.scm:1355) chicken.compiler.support#first" 
o|inlining procedure: k15734 
o|inlining procedure: "(support.scm:1360) chicken.compiler.support#second" 
o|inlining procedure: "(support.scm:1359) chicken.compiler.support#first" 
o|inlining procedure: k15784 
o|inlining procedure: "(support.scm:1365) chicken.compiler.support#first" 
o|inlining procedure: "(support.scm:1363) chicken.compiler.support#third" 
o|inlining procedure: k15784 
o|substituted constant variable: a15815 
o|substituted constant variable: a15817 
o|substituted constant variable: a15819 
o|substituted constant variable: a15821 
o|inlining procedure: k15825 
o|inlining procedure: k15825 
o|inlining procedure: k15837 
o|inlining procedure: k15837 
o|substituted constant variable: a15844 
o|substituted constant variable: a15846 
o|substituted constant variable: a15848 
o|substituted constant variable: a15850 
o|substituted constant variable: a15852 
o|contracted procedure: "(support.scm:1346) g38293830" 
o|contracted procedure: "(support.scm:1345) g38203821" 
o|contracted procedure: "(support.scm:1344) g38173818" 
o|inlining procedure: k15870 
o|inlining procedure: k15870 
o|inlining procedure: k15903 
o|inlining procedure: k15903 
o|substituted constant variable: a15913 
o|substituted constant variable: a15918 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#block-variable-literal 
o|substituted constant variable: a15952 
o|substituted constant variable: a15953 
o|inlining procedure: k15975 
o|inlining procedure: k15975 
o|inlining procedure: k16017 
o|inlining procedure: k16017 
o|inlining procedure: k16029 
o|inlining procedure: k16029 
o|substituted constant variable: chicken.compiler.support#real-name-max-depth 
o|substituted constant variable: chicken.compiler.support#real-name-max-depth 
o|inlining procedure: k16059 
o|inlining procedure: k16059 
o|inlining procedure: k16081 
o|inlining procedure: k16081 
o|inlining procedure: k16133 
o|inlining procedure: k16133 
o|propagated global variable: out39543957 ##sys#standard-output 
o|substituted constant variable: a16149 
o|substituted constant variable: a16150 
o|propagated global variable: out39543957 ##sys#standard-output 
o|inlining procedure: k16166 
o|substituted constant variable: a16190 
o|inlining procedure: k16166 
o|inlining procedure: k16198 
o|inlining procedure: k16198 
o|inlining procedure: k16222 
o|inlining procedure: k16222 
o|inlining procedure: k16225 
o|inlining procedure: k16225 
o|inlining procedure: "(support.scm:1478) chicken.compiler.support#second" 
o|inlining procedure: k16282 
o|inlining procedure: k16308 
o|inlining procedure: k16308 
o|substituted constant variable: a16336 
o|substituted constant variable: a16349 
o|contracted procedure: "(support.scm:1498) g40614062" 
o|inlining procedure: k16282 
o|inlining procedure: k16427 
o|contracted procedure: "(support.scm:1490) g40254034" 
o|inlining procedure: k16427 
o|inlining procedure: k16461 
o|contracted procedure: "(support.scm:1489) g39944003" 
o|inlining procedure: "(support.scm:1489) chicken.compiler.support#first" 
o|contracted procedure: "(support.scm:1489) g40064007" 
o|inlining procedure: k16461 
o|inlining procedure: k16509 
o|inlining procedure: k16509 
o|inlining procedure: k16522 
o|inlining procedure: k16522 
o|substituted constant variable: a16556 
o|merged explicitly consed rest parameter: args40844090 
o|consed rest parameter at call site: tmp25113 1 
o|inlining procedure: k16578 
o|inlining procedure: k16578 
o|inlining procedure: k16597 
o|inlining procedure: "(support.scm:1530) getsize4074" 
o|inlining procedure: k16597 
o|inlining procedure: "(support.scm:1532) getsize4074" 
o|substituted constant variable: a16669 
o|propagated global variable: out41204133 ##sys#standard-output 
o|substituted constant variable: a16671 
o|substituted constant variable: a16672 
o|propagated global variable: out41564159 ##sys#standard-output 
o|substituted constant variable: a16715 
o|substituted constant variable: a16716 
o|inlining procedure: k16705 
o|inlining procedure: k16732 
o|propagated global variable: out41654168 ##sys#standard-output 
o|substituted constant variable: a16739 
o|substituted constant variable: a16740 
o|inlining procedure: k16732 
o|propagated global variable: out41654168 ##sys#standard-output 
o|propagated global variable: out41564159 ##sys#standard-output 
o|inlining procedure: k16705 
o|inlining procedure: k16765 
o|inlining procedure: k16765 
o|propagated global variable: out41204133 ##sys#standard-output 
o|contracted procedure: "(support.scm:1546) g41174118" 
o|contracted procedure: "(support.scm:1545) g41144115" 
o|contracted procedure: "(support.scm:1544) g41114112" 
o|inlining procedure: k16788 
o|inlining procedure: k16813 
o|inlining procedure: k16813 
o|inlining procedure: k16788 
o|inlining procedure: k16837 
o|contracted procedure: "(support.scm:1586) chicken.compiler.support#scan-sharp-greater-string" 
o|inlining procedure: k16874 
o|inlining procedure: k16874 
o|substituted constant variable: a16887 
o|substituted constant variable: a16898 
o|inlining procedure: k16894 
o|substituted constant variable: a16920 
o|inlining procedure: k16894 
o|inlining procedure: k16837 
o|inlining procedure: k16931 
o|inlining procedure: k16946 
o|inlining procedure: k16946 
o|inlining procedure: k16931 
o|inlining procedure: k16955 
o|inlining procedure: k16955 
o|contracted procedure: "(support.scm:1629) g42274228" 
o|contracted procedure: "(support.scm:1632) g42434244" 
o|inlining procedure: k17044 
o|inlining procedure: k17044 
o|substituted constant variable: a17060 
o|substituted constant variable: a17062 
o|contracted procedure: "(support.scm:1656) g42944295" 
o|contracted procedure: "(support.scm:1658) g43054306" 
o|contracted procedure: "(support.scm:1659) g43164317" 
o|inlining procedure: k17123 
o|inlining procedure: k17166 
o|contracted procedure: "(support.scm:1667) g43394346" 
o|inlining procedure: k17166 
o|substituted constant variable: a17191 
o|substituted constant variable: a17192 
o|inlining procedure: k17123 
o|substituted constant variable: chicken.compiler.support#constant659 
o|substituted constant variable: a17259 
o|substituted constant variable: a17260 
o|contracted procedure: "(support.scm:493) g13271328" 
o|contracted procedure: "(support.scm:493) g13241325" 
o|replaced variables: 2853 
o|removed binding forms: 644 
o|substituted constant variable: r526217294 
o|substituted constant variable: r556317298 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#first 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#second 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#third 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#fourth 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#filter 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#constant659 
o|propagated global variable: out696699 ##sys#standard-output 
o|propagated global variable: out711714 chicken.compiler.support#collected-debugging-output 
o|substituted constant variable: r656817328 
o|inlining procedure: k6582 
o|substituted constant variable: r656817329 
o|inlining procedure: k6591 
o|propagated global variable: out747750 chicken.compiler.support#collected-debugging-output 
o|converted assignments to bindings: (collect732) 
o|substituted constant variable: r683717340 
o|converted assignments to bindings: (err844) 
o|substituted constant variable: r705917352 
o|substituted constant variable: r710617354 
o|substituted constant variable: r710617355 
o|substituted constant variable: r714317361 
o|substituted constant variable: r745917387 
o|substituted constant variable: r757317403 
o|substituted constant variable: r761117404 
o|substituted constant variable: r772917414 
o|substituted constant variable: r800617425 
o|substituted constant variable: r581617430 
o|substituted constant variable: r802417431 
o|substituted constant variable: r814017439 
o|propagated global variable: out12451248 ##sys#standard-output 
o|substituted constant variable: c1343 
o|substituted constant variable: s1345 
o|substituted constant variable: c1350 
o|substituted constant variable: s1352 
o|substituted constant variable: p1377 
o|substituted constant variable: r850917459 
o|substituted constant variable: c1413 
o|substituted constant variable: c1448 
o|substituted constant variable: c1453 
o|substituted constant variable: c1466 
o|substituted constant variable: c1471 
o|substituted constant variable: p1472 
o|substituted constant variable: s1473 
o|substituted constant variable: c1476 
o|substituted constant variable: s1554 
o|substituted constant variable: c1557 
o|substituted constant variable: s1559 
o|substituted constant variable: c1565 
o|substituted constant variable: c1597 
o|substituted constant variable: c1645 
o|substituted constant variable: c1678 
o|substituted constant variable: mark1688 
o|substituted constant variable: c1722 
o|substituted constant variable: c2081 
o|substituted constant variable: p2082 
o|substituted constant variable: c2130 
o|substituted constant variable: c2135 
o|substituted constant variable: c2140 
o|removed side-effect free assignment to unused variable: rename2182 
o|substituted constant variable: s2210 
o|substituted constant variable: c2215 
o|substituted constant variable: c2224 
o|substituted constant variable: c2295 
o|substituted constant variable: r1095617712 
o|substituted constant variable: r1095617712 
o|substituted constant variable: r1164817749 
o|substituted constant variable: mark2539 
o|substituted constant variable: r1161017756 
o|substituted constant variable: r1159317757 
o|substituted constant variable: r1157517758 
o|substituted constant variable: mark2517 
o|substituted constant variable: mark2602 
o|substituted constant variable: r1181117769 
o|substituted constant variable: r1190117775 
o|substituted constant variable: r1185817777 
o|substituted constant variable: r1196517789 
o|substituted constant variable: r1201417790 
o|substituted constant variable: r628417792 
o|substituted constant variable: r1205417800 
o|substituted constant variable: r1216117806 
o|substituted constant variable: r1211517823 
o|substituted constant variable: r1224817837 
o|substituted constant variable: r1228917841 
o|substituted constant variable: r1233117845 
o|substituted constant variable: r1233117845 
o|substituted constant variable: rest28242827 
o|substituted constant variable: mark2826 
o|substituted constant variable: r1251117856 
o|substituted constant variable: r1251117856 
o|substituted constant variable: r1363517933 
o|substituted constant variable: r1366217937 
o|substituted constant variable: r1372817940 
o|converted assignments to bindings: (err3209) 
o|removed side-effect free assignment to unused variable: err3361 
o|substituted constant variable: r1485718059 
o|substituted constant variable: r1491218060 
o|substituted constant variable: r1492718062 
o|substituted constant variable: r1494518064 
o|substituted constant variable: r1494518065 
o|substituted constant variable: r1495318066 
o|substituted constant variable: r1496818068 
o|substituted constant variable: r1496818069 
o|substituted constant variable: r1497618070 
o|substituted constant variable: r1498818072 
o|substituted constant variable: r1498818073 
o|substituted constant variable: r1499618074 
o|substituted constant variable: r1502918078 
o|substituted constant variable: r1504118080 
o|substituted constant variable: r1505318082 
o|substituted constant variable: r1506518084 
o|substituted constant variable: r1507718086 
o|substituted constant variable: r1508918088 
o|substituted constant variable: r1510418090 
o|substituted constant variable: r1511918092 
o|substituted constant variable: r1513718094 
o|substituted constant variable: r1515018096 
o|substituted constant variable: r1517218098 
o|substituted constant variable: r1569718143 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#real-name-max-depth 
o|converted assignments to bindings: (resolve3923) 
o|substituted constant variable: r1613418202 
o|propagated global variable: out39543957 ##sys#standard-output 
o|substituted constant variable: r1622618210 
o|removed side-effect free assignment to unused variable: getsize4074 
o|substituted constant variable: r1652318232 
o|contracted procedure: "(support.scm:1536) chicken.compiler.support#list-tabulate" 
o|substituted constant variable: r617117310 
o|propagated global variable: out41204133 ##sys#standard-output 
o|propagated global variable: out41564159 ##sys#standard-output 
o|propagated global variable: out41654168 ##sys#standard-output 
o|substituted constant variable: r1681418259 
o|substituted constant variable: r1681418259 
o|substituted constant variable: r1693218272 
o|substituted constant variable: r1695618274 
o|substituted constant variable: mark4234 
o|substituted constant variable: mark4250 
o|substituted constant variable: r1704518275 
o|substituted constant variable: mark4297 
o|substituted constant variable: mark4308 
o|substituted constant variable: mark4319 
o|substituted constant variable: r1712418280 
o|simplifications: ((let . 4)) 
o|replaced variables: 136 
o|removed binding forms: 2817 
o|substituted constant variable: r65681732818306 
o|substituted constant variable: r65681732918308 
o|inlining procedure: "(support.scm:406) chicken.compiler.support#alist-cons" 
o|inlining procedure: "(support.scm:446) chicken.compiler.support#alist-cons" 
o|inlining procedure: "(support.scm:454) chicken.compiler.support#alist-cons" 
o|inlining procedure: "(support.scm:713) chicken.compiler.support#alist-cons" 
o|inlining procedure: k11725 
o|inlining procedure: "(support.scm:828) chicken.compiler.support#alist-cons" 
o|inlining procedure: k12059 
o|inlining procedure: k12450 
o|inlining procedure: k13198 
o|inlining procedure: k13625 
o|inlining procedure: k13625 
o|inlining procedure: k13625 
o|inlining procedure: k13652 
o|inlining procedure: k13652 
o|inlining procedure: k13652 
o|inlining procedure: k15743 
o|inlining procedure: k15743 
o|inlining procedure: k16219 
o|inlining procedure: k16219 
o|inlining procedure: "(support.scm:1524) fits?4075" 
o|inlining procedure: "(support.scm:1528) fits?4075" 
o|inlining procedure: "(support.scm:1530) fits?4075" 
o|inlining procedure: "(support.scm:1533) fits?4075" 
o|converted assignments to bindings: (fits?4075) 
o|inlining procedure: "(support.scm:1569) chicken.compiler.support#alist-cons" 
o|inlining procedure: "(support.scm:1569) chicken.compiler.support#alist-cons" 
o|inlining procedure: k16981 
o|inlining procedure: k17001 
o|inlining procedure: k17066 
o|inlining procedure: k17218 
o|simplifications: ((let . 1)) 
o|replaced variables: 108 
o|removed binding forms: 272 
o|removed side-effect free assignment to unused variable: chicken.compiler.support#alist-cons 
o|inlining procedure: k8914 
o|substituted constant variable: r1172618693 
o|substituted constant variable: r1245118717 
o|substituted constant variable: r1362618721 
o|substituted constant variable: r1362618721 
o|substituted constant variable: r1362618721 
o|substituted constant variable: r1362618724 
o|substituted constant variable: r1362618724 
o|substituted constant variable: r1362618724 
o|substituted constant variable: r1362618727 
o|substituted constant variable: r1362618727 
o|substituted constant variable: r1362618727 
o|substituted constant variable: r1365318730 
o|substituted constant variable: r1365318730 
o|substituted constant variable: r1365318730 
o|substituted constant variable: r1365318733 
o|substituted constant variable: r1365318733 
o|substituted constant variable: r1365318733 
o|substituted constant variable: r1365318736 
o|substituted constant variable: r1365318736 
o|substituted constant variable: r1365318736 
o|substituted constant variable: r1622018757 
o|substituted constant variable: r1622018757 
o|substituted constant variable: r1622018757 
o|substituted constant variable: r1622018760 
o|substituted constant variable: r1622018760 
o|substituted constant variable: r1622018760 
o|contracted procedure: k16604 
o|contracted procedure: k16607 
o|substituted constant variable: z36318798 
o|substituted constant variable: r1698218804 
o|substituted constant variable: r1700218805 
o|substituted constant variable: r1706718806 
o|replaced variables: 57 
o|removed binding forms: 116 
o|removed conditional forms: 8 
o|substituted constant variable: r891518867 
o|removed binding forms: 72 
o|removed conditional forms: 1 
o|removed binding forms: 1 
o|simplifications: ((if . 72) (##core#call . 1434)) 
o|  call simplifications:
o|    chicken.base#bignum?
o|    scheme#char=?
o|    scheme#read-char	3
o|    ##sys#size
o|    chicken.fixnum#fx>	2
o|    scheme#write-char	6
o|    chicken.base#flonum?
o|    scheme#procedure?
o|    chicken.fixnum#fx+	3
o|    scheme#string-length	4
o|    scheme#string-ref
o|    scheme#list?	4
o|    scheme#vector-ref	6
o|    scheme#vector	2
o|    ##sys#call-with-values	4
o|    scheme#cddddr
o|    scheme#list-ref
o|    scheme#cdddr
o|    scheme#caar	2
o|    scheme#cadddr	4
o|    scheme#caddr	10
o|    scheme#cadr	37
o|    ##sys#check-structure	12
o|    ##sys#block-ref	9
o|    ##sys#structure?	6
o|    ##sys#make-structure	34
o|    scheme#values	4
o|    scheme#assq	16
o|    scheme#length	6
o|    ##sys#setslot	35
o|    chicken.base#atom?
o|    ##sys#apply	3
o|    ##sys#cons	8
o|    scheme#equal?	3
o|    ##sys#list	139
o|    chicken.base#fixnum?	2
o|    scheme#number?	4
o|    scheme#char?	4
o|    scheme#boolean?	4
o|    scheme#vector?	2
o|    scheme#eq?	351
o|    scheme#eof-object?	7
o|    scheme#member
o|    scheme#cddr	4
o|    scheme#list	49
o|    scheme#string=?	2
o|    ##sys#foreign-fixnum-argument	2
o|    scheme#char-alphabetic?	2
o|    scheme#char-numeric?
o|    scheme#char->integer
o|    chicken.fixnum#fx>=	3
o|    chicken.fixnum#fx<	4
o|    scheme#string->list	3
o|    scheme#list->string
o|    scheme#string?	4
o|    ##sys#check-list	39
o|    ##sys#slot	176
o|    scheme#symbol?	19
o|    scheme#pair?	66
o|    scheme#apply	7
o|    scheme#memq	8
o|    scheme#cdr	24
o|    scheme#null?	47
o|    scheme#not	22
o|    chicken.fixnum#fx<=	7
o|    scheme#car	82
o|    chicken.fixnum#fx-	2
o|    scheme#cons	112
o|contracted procedure: k5264 
o|contracted procedure: k5271 
o|contracted procedure: k5281 
o|contracted procedure: k5528 
o|contracted procedure: k5537 
o|contracted procedure: k5550 
o|contracted procedure: k5565 
o|contracted procedure: k5580 
o|contracted procedure: k5595 
o|contracted procedure: k5606 
o|contracted procedure: k5941 
o|contracted procedure: k5931 
o|contracted procedure: k5990 
o|contracted procedure: k6016 
o|contracted procedure: k5996 
o|contracted procedure: k6010 
o|contracted procedure: k6441 
o|contracted procedure: k6469 
o|contracted procedure: k6505 
o|contracted procedure: k6535 
o|contracted procedure: k6545 
o|contracted procedure: k6549 
o|contracted procedure: k6631 
o|propagated global variable: out747750 chicken.compiler.support#collected-debugging-output 
o|contracted procedure: k6647 
o|contracted procedure: k6657 
o|contracted procedure: k6661 
o|contracted procedure: k6731 
o|contracted procedure: k6749 
o|contracted procedure: k6759 
o|contracted procedure: k6763 
o|contracted procedure: k6802 
o|contracted procedure: k6806 
o|contracted procedure: k6810 
o|contracted procedure: k6824 
o|contracted procedure: k6886 
o|contracted procedure: k6839 
o|contracted procedure: k6845 
o|contracted procedure: k6865 
o|contracted procedure: k6898 
o|contracted procedure: k6904 
o|contracted procedure: k6910 
o|contracted procedure: k6919 
o|contracted procedure: k6929 
o|contracted procedure: k6933 
o|contracted procedure: k6942 
o|contracted procedure: k6948 
o|contracted procedure: k6972 
o|contracted procedure: k6978 
o|contracted procedure: k7013 
o|contracted procedure: k7023 
o|contracted procedure: k7044 
o|contracted procedure: k7061 
o|contracted procedure: k7064 
o|contracted procedure: k7067 
o|contracted procedure: k7073 
o|contracted procedure: k7102 
o|contracted procedure: k7108 
o|contracted procedure: k7124 
o|contracted procedure: k7145 
o|contracted procedure: k7152 
o|contracted procedure: k7155 
o|contracted procedure: k7164 
o|contracted procedure: k7170 
o|contracted procedure: k7190 
o|contracted procedure: k7197 
o|contracted procedure: k7206 
o|contracted procedure: k7221 
o|contracted procedure: k7234 
o|contracted procedure: k7241 
o|contracted procedure: k7250 
o|contracted procedure: k7309 
o|contracted procedure: k7262 
o|contracted procedure: k7305 
o|contracted procedure: k7282 
o|inlining procedure: k7279 
o|inlining procedure: k7279 
o|contracted procedure: k7324 
o|contracted procedure: k7340 
o|contracted procedure: k7401 
o|contracted procedure: k7366 
o|contracted procedure: k7382 
o|contracted procedure: k7398 
o|contracted procedure: k7410 
o|contracted procedure: k7416 
o|contracted procedure: k7422 
o|contracted procedure: k7428 
o|contracted procedure: k7434 
o|contracted procedure: k7446 
o|contracted procedure: k7461 
o|contracted procedure: k7472 
o|contracted procedure: k7478 
o|contracted procedure: k7484 
o|contracted procedure: k7490 
o|contracted procedure: k7508 
o|contracted procedure: k7514 
o|contracted procedure: k7520 
o|contracted procedure: k7526 
o|contracted procedure: k7535 
o|contracted procedure: k7548 
o|contracted procedure: k7554 
o|contracted procedure: k7575 
o|contracted procedure: k7591 
o|contracted procedure: k7613 
o|contracted procedure: k7671 
o|contracted procedure: k7619 
o|contracted procedure: k7627 
o|contracted procedure: k7652 
o|contracted procedure: k7642 
o|contracted procedure: k7731 
o|contracted procedure: k7745 
o|contracted procedure: k7737 
o|contracted procedure: k7763 
o|contracted procedure: k7777 
o|contracted procedure: k7813 
o|contracted procedure: k7819 
o|contracted procedure: k7828 
o|contracted procedure: k7838 
o|contracted procedure: k7842 
o|contracted procedure: k7907 
o|contracted procedure: k7903 
o|contracted procedure: k7875 
o|contracted procedure: k7899 
o|contracted procedure: k7895 
o|contracted procedure: k7879 
o|contracted procedure: k7891 
o|contracted procedure: k7887 
o|contracted procedure: k7883 
o|contracted procedure: k7871 
o|contracted procedure: k575618583 
o|propagated global variable: z36318580 chicken.compiler.support#profile-lambda-list 
o|contracted procedure: k7996 
o|contracted procedure: k7988 
o|contracted procedure: k7992 
o|contracted procedure: k7984 
o|contracted procedure: k7917 
o|contracted procedure: k7921 
o|contracted procedure: k7943 
o|contracted procedure: k7955 
o|contracted procedure: k7958 
o|contracted procedure: k7961 
o|contracted procedure: k7969 
o|contracted procedure: k7977 
o|contracted procedure: k7940 
o|contracted procedure: k7930 
o|contracted procedure: k7934 
o|propagated global variable: g11681172 chicken.compiler.support#profile-lambda-list 
o|contracted procedure: k8008 
o|contracted procedure: k5806 
o|contracted procedure: k5818 
o|contracted procedure: k5841 
o|contracted procedure: k5849 
o|contracted procedure: k8044 
o|contracted procedure: k8064 
o|contracted procedure: k575618594 
o|contracted procedure: k8078 
o|contracted procedure: k8074 
o|contracted procedure: k8090 
o|contracted procedure: k8104 
o|contracted procedure: k8100 
o|contracted procedure: k8115 
o|contracted procedure: k8119 
o|contracted procedure: k575618601 
o|contracted procedure: k8130 
o|contracted procedure: k8126 
o|contracted procedure: k8149 
o|contracted procedure: k8155 
o|contracted procedure: k8173 
o|contracted procedure: k8177 
o|contracted procedure: k8190 
o|contracted procedure: k8221 
o|contracted procedure: k8224 
o|contracted procedure: k8236 
o|contracted procedure: k8258 
o|contracted procedure: k8254 
o|contracted procedure: k8239 
o|contracted procedure: k8242 
o|contracted procedure: k8250 
o|contracted procedure: k8280 
o|contracted procedure: k8289 
o|contracted procedure: k8298 
o|contracted procedure: k8307 
o|contracted procedure: k8316 
o|contracted procedure: k8325 
o|contracted procedure: k8352 
o|contracted procedure: k8367 
o|contracted procedure: k8379 
o|contracted procedure: k8393 
o|contracted procedure: k9553 
o|contracted procedure: k8399 
o|contracted procedure: k9549 
o|contracted procedure: k8408 
o|contracted procedure: k8415 
o|contracted procedure: k8418 
o|contracted procedure: k8432 
o|contracted procedure: k8436 
o|contracted procedure: k8448 
o|contracted procedure: k8451 
o|contracted procedure: k8454 
o|contracted procedure: k8462 
o|contracted procedure: k8470 
o|contracted procedure: k8479 
o|contracted procedure: k8482 
o|contracted procedure: k8505 
o|contracted procedure: k8511 
o|contracted procedure: k8522 
o|contracted procedure: k8525 
o|contracted procedure: k8528 
o|contracted procedure: k8534 
o|contracted procedure: k8557 
o|contracted procedure: k8566 
o|contracted procedure: k8569 
o|contracted procedure: k8572 
o|contracted procedure: k8579 
o|contracted procedure: k8592 
o|contracted procedure: k8595 
o|contracted procedure: k8598 
o|contracted procedure: k8606 
o|contracted procedure: k8614 
o|contracted procedure: k5871 
o|contracted procedure: k5879 
o|contracted procedure: k5891 
o|contracted procedure: k5913 
o|contracted procedure: k5909 
o|contracted procedure: k5894 
o|contracted procedure: k5897 
o|contracted procedure: k5905 
o|contracted procedure: k8623 
o|contracted procedure: k8626 
o|contracted procedure: k8654 
o|contracted procedure: k8638 
o|contracted procedure: k8642 
o|contracted procedure: k8650 
o|contracted procedure: k8660 
o|contracted procedure: k8688 
o|contracted procedure: k8692 
o|contracted procedure: k8672 
o|contracted procedure: k8676 
o|contracted procedure: k8684 
o|contracted procedure: k8698 
o|contracted procedure: k8705 
o|contracted procedure: k8709 
o|contracted procedure: k8718 
o|contracted procedure: k8751 
o|contracted procedure: k8730 
o|contracted procedure: k8747 
o|contracted procedure: k8738 
o|contracted procedure: k8830 
o|contracted procedure: k8761 
o|contracted procedure: k8793 
o|contracted procedure: k8773 
o|contracted procedure: k8781 
o|contracted procedure: k8801 
o|contracted procedure: k8826 
o|contracted procedure: k8810 
o|contracted procedure: k8814 
o|contracted procedure: k8844 
o|contracted procedure: k8847 
o|contracted procedure: k8865 
o|contracted procedure: k8870 
o|contracted procedure: k8882 
o|contracted procedure: k8885 
o|contracted procedure: k8888 
o|contracted procedure: k8896 
o|contracted procedure: k8904 
o|contracted procedure: k8920 
o|contracted procedure: k8914 
o|contracted procedure: k8911 
o|contracted procedure: k8931 
o|contracted procedure: k8998 
o|contracted procedure: k8948 
o|contracted procedure: k8952 
o|contracted procedure: k8957 
o|contracted procedure: k8969 
o|contracted procedure: k8972 
o|contracted procedure: k8975 
o|contracted procedure: k8983 
o|contracted procedure: k8991 
o|contracted procedure: k9004 
o|contracted procedure: k9022 
o|contracted procedure: k9038 
o|contracted procedure: k9034 
o|contracted procedure: k9044 
o|contracted procedure: k9047 
o|contracted procedure: k9109 
o|contracted procedure: k9059 
o|contracted procedure: k9063 
o|contracted procedure: k9068 
o|contracted procedure: k9080 
o|contracted procedure: k9083 
o|contracted procedure: k9086 
o|contracted procedure: k9094 
o|contracted procedure: k9102 
o|contracted procedure: k9115 
o|contracted procedure: k9170 
o|contracted procedure: k9118 
o|contracted procedure: k9166 
o|contracted procedure: k9146 
o|contracted procedure: k9162 
o|contracted procedure: k9150 
o|contracted procedure: k9154 
o|contracted procedure: k9130 
o|contracted procedure: k9134 
o|contracted procedure: k9142 
o|contracted procedure: k5711 
o|contracted procedure: k9176 
o|contracted procedure: k9191 
o|contracted procedure: k9195 
o|contracted procedure: k9199 
o|contracted procedure: k9202 
o|contracted procedure: k9205 
o|contracted procedure: k9217 
o|contracted procedure: k9220 
o|contracted procedure: k9223 
o|contracted procedure: k9231 
o|contracted procedure: k9239 
o|contracted procedure: k9248 
o|contracted procedure: k9260 
o|contracted procedure: k9264 
o|contracted procedure: k9268 
o|contracted procedure: k9280 
o|contracted procedure: k9283 
o|contracted procedure: k9286 
o|contracted procedure: k9294 
o|contracted procedure: k9302 
o|contracted procedure: k9329 
o|contracted procedure: k9333 
o|contracted procedure: k9336 
o|contracted procedure: k9348 
o|contracted procedure: k9351 
o|contracted procedure: k9354 
o|contracted procedure: k9362 
o|contracted procedure: k9370 
o|contracted procedure: k9412 
o|contracted procedure: k9418 
o|contracted procedure: k9424 
o|contracted procedure: k9456 
o|contracted procedure: k9504 
o|contracted procedure: k9508 
o|contracted procedure: k9520 
o|contracted procedure: k9523 
o|contracted procedure: k9526 
o|contracted procedure: k9534 
o|contracted procedure: k9542 
o|contracted procedure: k9580 
o|contracted procedure: k9588 
o|contracted procedure: k9596 
o|contracted procedure: k9602 
o|contracted procedure: k9612 
o|contracted procedure: k9615 
o|contracted procedure: k9627 
o|contracted procedure: k9630 
o|contracted procedure: k9633 
o|contracted procedure: k9641 
o|contracted procedure: k9649 
o|contracted procedure: k9658 
o|contracted procedure: k9669 
o|contracted procedure: k9672 
o|contracted procedure: k9665 
o|contracted procedure: k9684 
o|contracted procedure: k9687 
o|contracted procedure: k9690 
o|contracted procedure: k9698 
o|contracted procedure: k9706 
o|contracted procedure: k9715 
o|contracted procedure: k9724 
o|contracted procedure: k9727 
o|contracted procedure: k9733 
o|inlining procedure: k9736 
o|contracted procedure: k9744 
o|inlining procedure: k9736 
o|contracted procedure: k9750 
o|inlining procedure: k9736 
o|contracted procedure: k9762 
o|contracted procedure: k9769 
o|contracted procedure: k9772 
o|contracted procedure: k9781 
o|contracted procedure: k9784 
o|contracted procedure: k9840 
o|contracted procedure: k9804 
o|contracted procedure: k9830 
o|contracted procedure: k9834 
o|contracted procedure: k9826 
o|contracted procedure: k9807 
o|contracted procedure: k9810 
o|contracted procedure: k9818 
o|contracted procedure: k9822 
o|contracted procedure: k9852 
o|contracted procedure: k9855 
o|contracted procedure: k9858 
o|contracted procedure: k9866 
o|contracted procedure: k9874 
o|contracted procedure: k9883 
o|contracted procedure: k9905 
o|contracted procedure: k9890 
o|contracted procedure: k9894 
o|contracted procedure: k9902 
o|contracted procedure: k9911 
o|contracted procedure: k9918 
o|contracted procedure: k9926 
o|contracted procedure: k9932 
o|contracted procedure: k9939 
o|contracted procedure: k9945 
o|contracted procedure: k9952 
o|contracted procedure: k9964 
o|contracted procedure: k9968 
o|contracted procedure: k9977 
o|contracted procedure: k9983 
o|contracted procedure: k9990 
o|contracted procedure: k9998 
o|contracted procedure: k10017 
o|contracted procedure: k10005 
o|contracted procedure: k10025 
o|contracted procedure: k10029 
o|contracted procedure: k10035 
o|contracted procedure: k10038 
o|contracted procedure: k10041 
o|contracted procedure: k10053 
o|contracted procedure: k10056 
o|contracted procedure: k10059 
o|contracted procedure: k10067 
o|contracted procedure: k10075 
o|contracted procedure: k10084 
o|contracted procedure: k10091 
o|contracted procedure: k10095 
o|contracted procedure: k10098 
o|contracted procedure: k10110 
o|contracted procedure: k10113 
o|contracted procedure: k10116 
o|contracted procedure: k10124 
o|contracted procedure: k10132 
o|contracted procedure: k10141 
o|contracted procedure: k10150 
o|contracted procedure: k10157 
o|contracted procedure: k10179 
o|contracted procedure: k10189 
o|contracted procedure: k10193 
o|contracted procedure: k10205 
o|contracted procedure: k10219 
o|contracted procedure: k10223 
o|contracted procedure: k10235 
o|contracted procedure: k10238 
o|contracted procedure: k10241 
o|contracted procedure: k10249 
o|contracted procedure: k10257 
o|contracted procedure: k10264 
o|contracted procedure: k10270 
o|contracted procedure: k10273 
o|contracted procedure: k10280 
o|contracted procedure: k10283 
o|contracted procedure: k10295 
o|contracted procedure: k10298 
o|contracted procedure: k10301 
o|contracted procedure: k10309 
o|contracted procedure: k10317 
o|contracted procedure: k10331 
o|contracted procedure: k10334 
o|contracted procedure: k10346 
o|contracted procedure: k10349 
o|contracted procedure: k10352 
o|contracted procedure: k10360 
o|contracted procedure: k10368 
o|contracted procedure: k10381 
o|contracted procedure: k10387 
o|contracted procedure: k10428 
o|contracted procedure: k10492 
o|contracted procedure: k10455 
o|contracted procedure: k10470 
o|contracted procedure: k10484 
o|contracted procedure: k10488 
o|contracted procedure: k5322 
o|contracted procedure: k5336 
o|contracted procedure: k5346 
o|contracted procedure: k5340 
o|contracted procedure: k10535 
o|contracted procedure: k10550 
o|contracted procedure: k10554 
o|contracted procedure: k10561 
o|contracted procedure: k10582 
o|contracted procedure: k10576 
o|contracted procedure: k10618 
o|contracted procedure: k10598 
o|contracted procedure: k10606 
o|contracted procedure: k10602 
o|contracted procedure: k10670 
o|contracted procedure: k10673 
o|contracted procedure: k10676 
o|contracted procedure: k10696 
o|contracted procedure: k10704 
o|contracted procedure: k10712 
o|contracted procedure: k10718 
o|contracted procedure: k10732 
o|contracted procedure: k10735 
o|contracted procedure: k10757 
o|contracted procedure: k10769 
o|contracted procedure: k10773 
o|contracted procedure: k10781 
o|contracted procedure: k10789 
o|contracted procedure: k10795 
o|contracted procedure: k10798 
o|contracted procedure: k10822 
o|contracted procedure: k10826 
o|contracted procedure: k10834 
o|contracted procedure: k575618664 
o|contracted procedure: k10838 
o|contracted procedure: k10844 
o|contracted procedure: k10851 
o|contracted procedure: k10857 
o|contracted procedure: k10868 
o|contracted procedure: k10943 
o|contracted procedure: k10951 
o|contracted procedure: k10886 
o|contracted procedure: k10890 
o|contracted procedure: k10898 
o|contracted procedure: k10910 
o|contracted procedure: k10913 
o|contracted procedure: k10916 
o|contracted procedure: k10924 
o|contracted procedure: k10932 
o|contracted procedure: k10962 
o|contracted procedure: k10965 
o|contracted procedure: k11013 
o|contracted procedure: k10977 
o|contracted procedure: k11003 
o|contracted procedure: k11007 
o|contracted procedure: k10999 
o|contracted procedure: k10980 
o|contracted procedure: k10983 
o|contracted procedure: k10991 
o|contracted procedure: k10995 
o|contracted procedure: k11025 
o|contracted procedure: k11028 
o|contracted procedure: k11031 
o|contracted procedure: k11039 
o|contracted procedure: k11047 
o|contracted procedure: k11066 
o|contracted procedure: k11074 
o|contracted procedure: k11086 
o|contracted procedure: k11089 
o|contracted procedure: k11092 
o|contracted procedure: k11100 
o|contracted procedure: k11108 
o|contracted procedure: k11169 
o|contracted procedure: k11133 
o|contracted procedure: k11159 
o|contracted procedure: k11163 
o|contracted procedure: k11155 
o|contracted procedure: k11136 
o|contracted procedure: k11139 
o|contracted procedure: k11147 
o|contracted procedure: k11151 
o|contracted procedure: k10624 
o|contracted procedure: k10627 
o|contracted procedure: k10639 
o|contracted procedure: k10642 
o|contracted procedure: k10645 
o|contracted procedure: k10653 
o|contracted procedure: k10661 
o|contracted procedure: k11187 
o|contracted procedure: k11222 
o|contracted procedure: k11231 
o|contracted procedure: k11240 
o|contracted procedure: k11261 
o|contracted procedure: k11270 
o|contracted procedure: k11279 
o|contracted procedure: k11462 
o|contracted procedure: k11474 
o|contracted procedure: k11484 
o|contracted procedure: k11488 
o|contracted procedure: k11491 
o|contracted procedure: k11497 
o|contracted procedure: k11535 
o|contracted procedure: k11545 
o|contracted procedure: k11549 
o|contracted procedure: k11565 
o|contracted procedure: k11687 
o|contracted procedure: k11571 
o|contracted procedure: k11577 
o|contracted procedure: k11580 
o|contracted procedure: k11589 
o|contracted procedure: k11667 
o|contracted procedure: k11600 
o|contracted procedure: k11606 
o|contracted procedure: k11627 
o|contracted procedure: k11635 
o|contracted procedure: k11631 
o|contracted procedure: k11300 
o|contracted procedure: k11313 
o|contracted procedure: k11317 
o|contracted procedure: k11325 
o|contracted procedure: k11328 
o|contracted procedure: k11304 
o|contracted procedure: k11340 
o|contracted procedure: k11343 
o|contracted procedure: k11346 
o|contracted procedure: k11354 
o|contracted procedure: k11362 
o|contracted procedure: k11644 
o|contracted procedure: k11650 
o|contracted procedure: k11654 
o|contracted procedure: k11678 
o|contracted procedure: k11674 
o|contracted procedure: k11720 
o|contracted procedure: k11744 
o|contracted procedure: k11731 
o|contracted procedure: k11725 
o|contracted procedure: k11752 
o|contracted procedure: k11386 
o|contracted procedure: k11390 
o|contracted procedure: k11394 
o|contracted procedure: k11399 
o|contracted procedure: k11411 
o|contracted procedure: k11414 
o|contracted procedure: k11417 
o|contracted procedure: k11425 
o|contracted procedure: k11433 
o|contracted procedure: k11761 
o|contracted procedure: k11773 
o|contracted procedure: k11782 
o|contracted procedure: k575618706 
o|contracted procedure: k11836 
o|contracted procedure: k11798 
o|contracted procedure: k11832 
o|contracted procedure: k11807 
o|contracted procedure: k11824 
o|contracted procedure: k11828 
o|contracted procedure: k11958 
o|contracted procedure: k11845 
o|contracted procedure: k11950 
o|contracted procedure: k11954 
o|contracted procedure: k11854 
o|contracted procedure: k11872 
o|contracted procedure: k11876 
o|contracted procedure: k11885 
o|contracted procedure: k11928 
o|contracted procedure: k11894 
o|contracted procedure: k11903 
o|contracted procedure: k11920 
o|contracted procedure: k11924 
o|contracted procedure: k11937 
o|contracted procedure: k11941 
o|contracted procedure: k11976 
o|contracted procedure: k11985 
o|contracted procedure: k12002 
o|contracted procedure: k12010 
o|contracted procedure: k12016 
o|contracted procedure: k12025 
o|contracted procedure: k12050 
o|contracted procedure: k12028 
o|contracted procedure: k6286 
o|contracted procedure: k6302 
o|contracted procedure: k12056 
o|contracted procedure: k12059 
o|contracted procedure: k12074 
o|contracted procedure: k12080 
o|contracted procedure: k12105 
o|contracted procedure: k12108 
o|contracted procedure: k12217 
o|contracted procedure: k12111 
o|contracted procedure: k12120 
o|contracted procedure: k12134 
o|contracted procedure: k12140 
o|contracted procedure: k12148 
o|contracted procedure: k12151 
o|contracted procedure: k12192 
o|contracted procedure: k12157 
o|contracted procedure: k12183 
o|contracted procedure: k12174 
o|contracted procedure: k12163 
o|contracted procedure: k12170 
o|contracted procedure: k12198 
o|contracted procedure: k12210 
o|contracted procedure: k12244 
o|contracted procedure: k12250 
o|contracted procedure: k12257 
o|contracted procedure: k12285 
o|contracted procedure: k12291 
o|contracted procedure: k12340 
o|contracted procedure: k12313 
o|contracted procedure: k12316 
o|contracted procedure: k12337 
o|contracted procedure: k12330 
o|inlining procedure: k12326 
o|inlining procedure: k12326 
o|contracted procedure: k12368 
o|contracted procedure: k12399 
o|contracted procedure: k12408 
o|contracted procedure: k12417 
o|contracted procedure: k12426 
o|contracted procedure: k12435 
o|contracted procedure: k12445 
o|contracted procedure: k12456 
o|contracted procedure: k12450 
o|contracted procedure: k12531 
o|contracted procedure: k12486 
o|contracted procedure: k12525 
o|contracted procedure: k12489 
o|contracted procedure: k12519 
o|contracted procedure: k12492 
o|contracted procedure: k12513 
o|contracted procedure: k12495 
o|contracted procedure: k12506 
o|contracted procedure: k12502 
o|contracted procedure: k12561 
o|contracted procedure: k12564 
o|contracted procedure: k12576 
o|contracted procedure: k12591 
o|contracted procedure: k12606 
o|contracted procedure: k12609 
o|contracted procedure: k12638 
o|contracted procedure: k12619 
o|contracted procedure: k12627 
o|contracted procedure: k12631 
o|contracted procedure: k12623 
o|contracted procedure: k12644 
o|contracted procedure: k12647 
o|contracted procedure: k12659 
o|contracted procedure: k12692 
o|contracted procedure: k12669 
o|contracted procedure: k12681 
o|contracted procedure: k12673 
o|contracted procedure: k12688 
o|contracted procedure: k12698 
o|contracted procedure: k12708 
o|contracted procedure: k12714 
o|contracted procedure: k12750 
o|contracted procedure: k12727 
o|contracted procedure: k12739 
o|contracted procedure: k12731 
o|contracted procedure: k12746 
o|contracted procedure: k12756 
o|contracted procedure: k12773 
o|contracted procedure: k12769 
o|contracted procedure: k12782 
o|contracted procedure: k12788 
o|contracted procedure: k12816 
o|contracted procedure: k12825 
o|contracted procedure: k12863 
o|contracted procedure: k12831 
o|contracted procedure: k12859 
o|contracted procedure: k12869 
o|contracted procedure: k12898 
o|contracted procedure: k12882 
o|contracted procedure: k12890 
o|contracted procedure: k12894 
o|contracted procedure: k12886 
o|contracted procedure: k12904 
o|contracted procedure: k12913 
o|contracted procedure: k12952 
o|contracted procedure: k12926 
o|contracted procedure: k12938 
o|contracted procedure: k12930 
o|contracted procedure: k12948 
o|contracted procedure: k12958 
o|contracted procedure: k12974 
o|contracted procedure: k12980 
o|contracted procedure: k12990 
o|contracted procedure: k13001 
o|contracted procedure: k12997 
o|contracted procedure: k13016 
o|contracted procedure: k13025 
o|contracted procedure: k13032 
o|contracted procedure: k13061 
o|contracted procedure: k13045 
o|contracted procedure: k13053 
o|contracted procedure: k13057 
o|contracted procedure: k13049 
o|contracted procedure: k13067 
o|contracted procedure: k13070 
o|contracted procedure: k13100 
o|contracted procedure: k13080 
o|contracted procedure: k13096 
o|contracted procedure: k13088 
o|contracted procedure: k13092 
o|contracted procedure: k13084 
o|contracted procedure: k13106 
o|contracted procedure: k13135 
o|contracted procedure: k13116 
o|contracted procedure: k13124 
o|contracted procedure: k13128 
o|contracted procedure: k13120 
o|contracted procedure: k13141 
o|contracted procedure: k13153 
o|contracted procedure: k13160 
o|contracted procedure: k13166 
o|contracted procedure: k13173 
o|contracted procedure: k13179 
o|contracted procedure: k13189 
o|contracted procedure: k13195 
o|contracted procedure: k13198 
o|contracted procedure: k13228 
o|contracted procedure: k13234 
o|contracted procedure: k13251 
o|contracted procedure: k13259 
o|contracted procedure: k13274 
o|contracted procedure: k13280 
o|contracted procedure: k13299 
o|contracted procedure: k13314 
o|contracted procedure: k13320 
o|contracted procedure: k13326 
o|contracted procedure: k13332 
o|contracted procedure: k13353 
o|contracted procedure: k13359 
o|contracted procedure: k13365 
o|contracted procedure: k13371 
o|contracted procedure: k13392 
o|contracted procedure: k13398 
o|contracted procedure: k13404 
o|contracted procedure: k13410 
o|contracted procedure: k13416 
o|contracted procedure: k13422 
o|contracted procedure: k13428 
o|contracted procedure: k13434 
o|contracted procedure: k13463 
o|contracted procedure: k13469 
o|contracted procedure: k13475 
o|contracted procedure: k13481 
o|contracted procedure: k13487 
o|contracted procedure: k13493 
o|contracted procedure: k13499 
o|contracted procedure: k13505 
o|contracted procedure: k13552 
o|contracted procedure: k13567 
o|contracted procedure: k13573 
o|contracted procedure: k13579 
o|contracted procedure: k13585 
o|contracted procedure: k13622 
o|contracted procedure: k13637 
o|contracted procedure: k13625 
o|contracted procedure: k13649 
o|contracted procedure: k13664 
o|contracted procedure: k13652 
o|contracted procedure: k13694 
o|contracted procedure: k13700 
o|contracted procedure: k13730 
o|contracted procedure: k13739 
o|contracted procedure: k13751 
o|contracted procedure: k13763 
o|contracted procedure: k13775 
o|contracted procedure: k13796 
o|contracted procedure: k13805 
o|contracted procedure: k13812 
o|contracted procedure: k13824 
o|contracted procedure: k13831 
o|contracted procedure: k13837 
o|contracted procedure: k13850 
o|contracted procedure: k13856 
o|contracted procedure: k13862 
o|contracted procedure: k13868 
o|contracted procedure: k13874 
o|contracted procedure: k13880 
o|contracted procedure: k13886 
o|contracted procedure: k13916 
o|contracted procedure: k13922 
o|contracted procedure: k13928 
o|contracted procedure: k13945 
o|contracted procedure: k13960 
o|contracted procedure: k13966 
o|contracted procedure: k13972 
o|contracted procedure: k13978 
o|contracted procedure: k13999 
o|contracted procedure: k14005 
o|contracted procedure: k14011 
o|contracted procedure: k14017 
o|contracted procedure: k14023 
o|contracted procedure: k14029 
o|contracted procedure: k14035 
o|contracted procedure: k14041 
o|contracted procedure: k14047 
o|contracted procedure: k14053 
o|contracted procedure: k14086 
o|contracted procedure: k14092 
o|contracted procedure: k14098 
o|contracted procedure: k14104 
o|contracted procedure: k14110 
o|contracted procedure: k14116 
o|contracted procedure: k14122 
o|contracted procedure: k14128 
o|contracted procedure: k14134 
o|contracted procedure: k14140 
o|contracted procedure: k14146 
o|contracted procedure: k14205 
o|contracted procedure: k14217 
o|contracted procedure: k14238 
o|contracted procedure: k14247 
o|contracted procedure: k14254 
o|contracted procedure: k14266 
o|contracted procedure: k14273 
o|contracted procedure: k14281 
o|contracted procedure: k14287 
o|contracted procedure: k14293 
o|contracted procedure: k14299 
o|contracted procedure: k14305 
o|contracted procedure: k14311 
o|contracted procedure: k14317 
o|contracted procedure: k14347 
o|contracted procedure: k14353 
o|contracted procedure: k14359 
o|contracted procedure: k14365 
o|contracted procedure: k14384 
o|contracted procedure: k14390 
o|contracted procedure: k14396 
o|contracted procedure: k14402 
o|contracted procedure: k14408 
o|contracted procedure: k14414 
o|contracted procedure: k14420 
o|contracted procedure: k14426 
o|contracted procedure: k14432 
o|contracted procedure: k14438 
o|contracted procedure: k14444 
o|contracted procedure: k14450 
o|contracted procedure: k14456 
o|contracted procedure: k14462 
o|contracted procedure: k14468 
o|contracted procedure: k14474 
o|contracted procedure: k14480 
o|contracted procedure: k14486 
o|contracted procedure: k14492 
o|contracted procedure: k14498 
o|contracted procedure: k14504 
o|contracted procedure: k14510 
o|contracted procedure: k14516 
o|contracted procedure: k14522 
o|contracted procedure: k14528 
o|contracted procedure: k14534 
o|contracted procedure: k14540 
o|contracted procedure: k14546 
o|contracted procedure: k14552 
o|contracted procedure: k14558 
o|contracted procedure: k14646 
o|contracted procedure: k14649 
o|contracted procedure: k14656 
o|contracted procedure: k14662 
o|contracted procedure: k14669 
o|contracted procedure: k14675 
o|contracted procedure: k14678 
o|contracted procedure: k14685 
o|contracted procedure: k14691 
o|contracted procedure: k14694 
o|contracted procedure: k14701 
o|contracted procedure: k14707 
o|contracted procedure: k14718 
o|contracted procedure: k14714 
o|contracted procedure: k14724 
o|contracted procedure: k14731 
o|contracted procedure: k14737 
o|contracted procedure: k14744 
o|contracted procedure: k14750 
o|contracted procedure: k14763 
o|contracted procedure: k14850 
o|contracted procedure: k14769 
o|contracted procedure: k14772 
o|contracted procedure: k14778 
o|contracted procedure: k14781 
o|contracted procedure: k14819 
o|contracted procedure: k14791 
o|contracted procedure: k14815 
o|contracted procedure: k14799 
o|contracted procedure: k14807 
o|contracted procedure: k14811 
o|contracted procedure: k14803 
o|contracted procedure: k14795 
o|contracted procedure: k14825 
o|contracted procedure: k14832 
o|contracted procedure: k14836 
o|contracted procedure: k14873 
o|contracted procedure: k14853 
o|contracted procedure: k14869 
o|contracted procedure: k14859 
o|contracted procedure: k14863 
o|contracted procedure: k14914 
o|contracted procedure: k14920 
o|contracted procedure: k14923 
o|contracted procedure: k14929 
o|contracted procedure: k14938 
o|contracted procedure: k14941 
o|contracted procedure: k14947 
o|contracted procedure: k14955 
o|contracted procedure: k14958 
o|contracted procedure: k14964 
o|contracted procedure: k14970 
o|contracted procedure: k14978 
o|contracted procedure: k14984 
o|contracted procedure: k14990 
o|contracted procedure: k14998 
o|contracted procedure: k15004 
o|contracted procedure: k15013 
o|contracted procedure: k15020 
o|contracted procedure: k15031 
o|contracted procedure: k15037 
o|contracted procedure: k15043 
o|contracted procedure: k15049 
o|contracted procedure: k15055 
o|contracted procedure: k15061 
o|contracted procedure: k15067 
o|contracted procedure: k15073 
o|contracted procedure: k15079 
o|contracted procedure: k15085 
o|contracted procedure: k15091 
o|contracted procedure: k15100 
o|contracted procedure: k15106 
o|contracted procedure: k15112 
o|contracted procedure: k15121 
o|contracted procedure: k15124 
o|contracted procedure: k15130 
o|contracted procedure: k15139 
o|contracted procedure: k15145 
o|contracted procedure: k15152 
o|contracted procedure: k15161 
o|contracted procedure: k15168 
o|contracted procedure: k15174 
o|contracted procedure: k15180 
o|contracted procedure: k15183 
o|contracted procedure: k15197 
o|contracted procedure: k15203 
o|contracted procedure: k15222 
o|contracted procedure: k15244 
o|contracted procedure: k15250 
o|contracted procedure: k15271 
o|contracted procedure: k15277 
o|contracted procedure: k15283 
o|contracted procedure: k15289 
o|contracted procedure: k15295 
o|contracted procedure: k15301 
o|contracted procedure: k15307 
o|contracted procedure: k15354 
o|contracted procedure: k15360 
o|contracted procedure: k15366 
o|contracted procedure: k15372 
o|contracted procedure: k15378 
o|contracted procedure: k15384 
o|contracted procedure: k15390 
o|contracted procedure: k15396 
o|contracted procedure: k15447 
o|contracted procedure: k15453 
o|contracted procedure: k15459 
o|contracted procedure: k15465 
o|contracted procedure: k15471 
o|contracted procedure: k15477 
o|contracted procedure: k15525 
o|contracted procedure: k15533 
o|contracted procedure: k15539 
o|contracted procedure: k15542 
o|contracted procedure: k15603 
o|contracted procedure: k15545 
o|contracted procedure: k15551 
o|contracted procedure: k15563 
o|contracted procedure: k15573 
o|contracted procedure: k15577 
o|contracted procedure: k15584 
o|contracted procedure: k15587 
o|contracted procedure: k15594 
o|contracted procedure: k15609 
o|contracted procedure: k15615 
o|contracted procedure: k15627 
o|contracted procedure: k15637 
o|contracted procedure: k15641 
o|contracted procedure: k15644 
o|contracted procedure: k15677 
o|contracted procedure: k15685 
o|contracted procedure: k15693 
o|contracted procedure: k15699 
o|contracted procedure: k15708 
o|contracted procedure: k15711 
o|contracted procedure: k15717 
o|contracted procedure: k15737 
o|contracted procedure: k15740 
o|contracted procedure: k15753 
o|contracted procedure: k1575018748 
o|contracted procedure: k1575018752 
o|contracted procedure: k15763 
o|contracted procedure: k15773 
o|contracted procedure: k15781 
o|contracted procedure: k15787 
o|contracted procedure: k15794 
o|contracted procedure: k15804 
o|contracted procedure: k15822 
o|contracted procedure: k15828 
o|contracted procedure: k15834 
o|contracted procedure: k15861 
o|contracted procedure: k15873 
o|contracted procedure: k15883 
o|contracted procedure: k15887 
o|contracted procedure: k15900 
o|contracted procedure: k15915 
o|contracted procedure: k15935 
o|contracted procedure: k15978 
o|inlining procedure: k15975 
o|contracted procedure: k16032 
o|contracted procedure: k16041 
o|contracted procedure: k16049 
o|contracted procedure: k16072 
o|contracted procedure: k16084 
o|contracted procedure: k16098 
o|contracted procedure: k16102 
o|contracted procedure: k16169 
o|contracted procedure: k16172 
o|contracted procedure: k16175 
o|contracted procedure: k16192 
o|contracted procedure: k16201 
o|contracted procedure: k16228 
o|contracted procedure: k16231 
o|contracted procedure: k16234 
o|contracted procedure: k16247 
o|contracted procedure: k16240 
o|contracted procedure: k16253 
o|contracted procedure: k16270 
o|contracted procedure: k16410 
o|contracted procedure: k16418 
o|contracted procedure: k16276 
o|contracted procedure: k16279 
o|contracted procedure: k16285 
o|contracted procedure: k16302 
o|contracted procedure: k16321 
o|contracted procedure: k16327 
o|contracted procedure: k16351 
o|contracted procedure: k16339 
o|contracted procedure: k16346 
o|contracted procedure: k16430 
o|contracted procedure: k16452 
o|contracted procedure: k16448 
o|contracted procedure: k16433 
o|contracted procedure: k16436 
o|contracted procedure: k16444 
o|contracted procedure: k16464 
o|contracted procedure: k16467 
o|contracted procedure: k16470 
o|contracted procedure: k16478 
o|contracted procedure: k16486 
o|contracted procedure: k16267 
o|contracted procedure: k16529 
o|contracted procedure: k16575 
o|contracted procedure: k16584 
o|contracted procedure: k16587 
o|contracted procedure: k16594 
o|contracted procedure: k16613 
o|contracted procedure: k6173 
o|contracted procedure: k6188 
o|contracted procedure: k16646 
o|contracted procedure: k16654 
o|contracted procedure: k16662 
o|contracted procedure: k16696 
o|contracted procedure: k16702 
o|contracted procedure: k16711 
o|contracted procedure: k16735 
o|contracted procedure: k16751 
o|contracted procedure: k16755 
o|contracted procedure: k16759 
o|contracted procedure: k16768 
o|contracted procedure: k16778 
o|contracted procedure: k16782 
o|contracted procedure: k16798 
o|contracted procedure: k575618794 
o|contracted procedure: k575618801 
o|contracted procedure: k16818 
o|contracted procedure: k16825 
o|contracted procedure: k16840 
o|contracted procedure: k16853 
o|contracted procedure: k16877 
o|contracted procedure: k16905 
o|contracted procedure: k16934 
o|contracted procedure: k16943 
o|contracted procedure: k16958 
o|contracted procedure: k16964 
o|contracted procedure: k16987 
o|contracted procedure: k16981 
o|contracted procedure: k17007 
o|contracted procedure: k17001 
o|contracted procedure: k17047 
o|contracted procedure: k17053 
o|contracted procedure: k17072 
o|contracted procedure: k17066 
o|contracted procedure: k17157 
o|contracted procedure: k17169 
o|contracted procedure: k17179 
o|contracted procedure: k17183 
o|contracted procedure: k17131 
o|contracted procedure: k17145 
o|contracted procedure: k17149 
o|contracted procedure: k17231 
o|contracted procedure: k17215 
o|contracted procedure: k17282 
o|contracted procedure: k17291 
o|simplifications: ((let . 151)) 
o|removed binding forms: 1172 
o|inlining procedure: k10558 
o|replaced variables: 418 
o|removed binding forms: 3 
o|inlining procedure: k8060 
o|inlining procedure: k8111 
o|inlining procedure: k11786 
o|inlining procedure: k16802 
o|inlining procedure: k16802 
o|simplifications: ((if . 17)) 
o|replaced variables: 7 
o|removed binding forms: 274 
o|contracted procedure: k7862 
o|contracted procedure: k7973 
o|contracted procedure: k9158 
o|contracted procedure: k10807 
o|contracted procedure: k16482 
o|removed binding forms: 10 
o|replaced variables: 13 
o|removed binding forms: 6 
o|direct leaf routine/allocation: loop444 0 
o|direct leaf routine/allocation: loop1123 0 
o|direct leaf routine/allocation: g404405 3 
o|direct leaf routine/allocation: g26272628 0 
o|converted assignments to bindings: (loop444) 
o|converted assignments to bindings: (loop1123) 
o|simplifications: ((let . 2)) 
o|customizable procedures: (for-each-loop43384353 loop4202 k16791 g41264140 for-each-loop41254150 doloop41624163 loop4103 loop539 tmp15112 tmp25113 map-loop39884009 map-loop40194040 k16216 resolve3923 loop3935 k15906 g38573864 for-each-loop38563867 k15702 walkeach3812 walk3811 chicken.compiler.support#lset-adjoin/eq? k15612 for-each-loop37893799 k15580 k15548 for-each-loop37643775 k14932 k15007 k15094 k15115 k15133 k15155 k14756 k14208 k14220 k14257 g34833484 k13733 k13742 k13754 k13766 k13778 k13815 err3209 g33253326 g32043205 chicken.compiler.support#follow-without-loop k12579 k12594 k12717 k12759 k12785 k12828 k12872 k12916 k12961 k13035 repeat2865 g31173118 k12934 k12735 k12677 k12359 k12276 k12235 k12019 loop567 matchn2618 loop2647 match12617 resolve2616 map-loop24642481 loop2593 k11583 k11620 map-loop24252445 for-each-loop25442556 for-each-loop25662584 rec2376 map-loop21002117 map-loop21532172 g23462355 map-loop23402365 g22402249 map-loop22342254 map-loop22642283 g23072316 map-loop23012326 walk2183 loop2125 loop211 fold2077 k9605 k10208 map-loop20492066 map-loop20232040 map-loop19942011 loop1975 map-loop19511968 chicken.compiler.support#cons* map-loop19251942 loop1916 map-loop18761893 map-loop18551900 chicken.compiler.support#last map-loop18131830 map-loop17841801 map-loop17271744 k8934 k9179 k9377 map-loop16961713 map-loop16501667 map-loop16191636 map-loop15701587 map-loop15261543 k8861 map-loop14891506 loop1456 map-loop417435 g14241433 map-loop14181436 k8492 map-loop13811398 map-loop12511268 k8161 g12391240 foldr389392 g394395 map-loop11561177 tmp14754 tmp24755 loop1106 k7630 loop1077 k7502 doloop993994 loop973 fold966 k7224 chicken.compiler.support#every k7076 k7083 loop909 loop893 loop845 err844 loop833 k6720 g781806 for-each-loop780816 collect732 g737744 for-each-loop736755 text681 chicken.compiler.support#test-debugging-mode dump682 for-each-loop685702 chicken.compiler.support#any loop461 loop321 loop308 loop295 chicken.compiler.support#take) 
o|calls to known targets: 503 
o|identified direct recursive calls: f_5259 1 
o|identified direct recursive calls: f_5590 1 
o|identified direct recursive calls: f_5926 1 
o|identified direct recursive calls: f_5985 2 
o|identified direct recursive calls: f_6893 1 
o|identified direct recursive calls: f_7007 1 
o|identified direct recursive calls: f_7273 1 
o|identified direct recursive calls: f_7808 1 
o|identified direct recursive calls: f_7950 1 
o|identified direct recursive calls: f_5813 1 
o|identified direct recursive calls: f_8231 1 
o|identified direct recursive calls: f_5886 1 
o|identified direct recursive calls: f_8374 4 
o|identified direct recursive calls: f_9799 1 
o|identified direct recursive calls: f_5317 1 
o|identified direct recursive calls: f_10530 1 
o|identified direct recursive calls: f_10972 1 
o|identified direct recursive calls: f_10689 1 
o|identified direct recursive calls: f_11128 1 
o|identified direct recursive calls: f_11182 1 
o|identified direct recursive calls: f_11793 1 
o|identified direct recursive calls: f_16425 1 
o|identified direct recursive calls: f_16459 1 
o|fast box initializations: 88 
o|fast global references: 55 
o|fast global assignments: 20 
o|dropping unused closure argument: f_16012 
o|dropping unused closure argument: f_5259 
o|dropping unused closure argument: f_5520 
o|dropping unused closure argument: f_5554 
o|dropping unused closure argument: f_5584 
o|dropping unused closure argument: f_5920 
o|dropping unused closure argument: f_5926 
o|dropping unused closure argument: f_5979 
o|dropping unused closure argument: f_6464 
o|dropping unused closure argument: f_7313 
o|dropping unused closure argument: f_7808 
*/
/* end of file */

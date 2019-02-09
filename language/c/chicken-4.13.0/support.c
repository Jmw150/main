/* Generated from support.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:51
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: support.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -extend private-namespace.scm -no-trace -output-file support.c
   unit: support
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[569];
static double C_possibly_force_alignment;


#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub3735(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word lit=(C_word )(C_a0);
return(C_header_size(lit));
C_ret:
#undef return

return C_r;}

/* from k5687 */
C_regparm static C_word C_fcall stub346(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_wordstobytes(t0));
return C_r;}

/* from k5680 */
C_regparm static C_word C_fcall stub341(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_bytestowords(t0));
return C_r;}

C_noret_decl(f_5546)
static void C_ccall f_5546(C_word c,C_word *av) C_noret;
C_noret_decl(f_5548)
static void C_fcall f_5548(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_15391)
static void C_ccall f_15391(C_word c,C_word *av) C_noret;
C_noret_decl(f_5542)
static void C_ccall f_5542(C_word c,C_word *av) C_noret;
C_noret_decl(f_6815)
static void C_ccall f_6815(C_word c,C_word *av) C_noret;
C_noret_decl(f_6817)
static void C_fcall f_6817(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12115)
static void C_fcall f_12115(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15384)
static void C_ccall f_15384(C_word c,C_word *av) C_noret;
C_noret_decl(f_10391)
static void C_ccall f_10391(C_word c,C_word *av) C_noret;
C_noret_decl(f_10395)
static void C_ccall f_10395(C_word c,C_word *av) C_noret;
C_noret_decl(f_5530)
static void C_ccall f_5530(C_word c,C_word *av) C_noret;
C_noret_decl(f_6882)
static void C_ccall f_6882(C_word c,C_word *av) C_noret;
C_noret_decl(f_16307)
static void C_ccall f_16307(C_word c,C_word *av) C_noret;
C_noret_decl(f_16319)
static void C_ccall f_16319(C_word c,C_word *av) C_noret;
C_noret_decl(f_12162)
static void C_ccall f_12162(C_word c,C_word *av) C_noret;
C_noret_decl(f_12118)
static void C_ccall f_12118(C_word c,C_word *av) C_noret;
C_noret_decl(f_6957)
static void C_fcall f_6957(C_word t0,C_word t1) C_noret;
C_noret_decl(f_16332)
static void C_ccall f_16332(C_word c,C_word *av) C_noret;
C_noret_decl(f_16335)
static void C_ccall f_16335(C_word c,C_word *av) C_noret;
C_noret_decl(f_10215)
static void C_fcall f_10215(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_16325)
static void C_ccall f_16325(C_word c,C_word *av) C_noret;
C_noret_decl(f_16338)
static void C_ccall f_16338(C_word c,C_word *av) C_noret;
C_noret_decl(f_12177)
static void C_fcall f_12177(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5585)
static void C_ccall f_5585(C_word c,C_word *av) C_noret;
C_noret_decl(f_5581)
static void C_ccall f_5581(C_word c,C_word *av) C_noret;
C_noret_decl(f_9173)
static void C_ccall f_9173(C_word c,C_word *av) C_noret;
C_noret_decl(f_6926)
static void C_ccall f_6926(C_word c,C_word *av) C_noret;
C_noret_decl(f_9177)
static void C_ccall f_9177(C_word c,C_word *av) C_noret;
C_noret_decl(f_6920)
static void C_fcall f_6920(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5570)
static void C_fcall f_5570(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5577)
static void C_fcall f_5577(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12159)
static void C_fcall f_12159(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9974)
static void C_ccall f_9974(C_word c,C_word *av) C_noret;
C_noret_decl(f_14280)
static void C_fcall f_14280(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10301)
static void C_ccall f_10301(C_word c,C_word *av) C_noret;
C_noret_decl(f_6802)
static void C_ccall f_6802(C_word c,C_word *av) C_noret;
C_noret_decl(f_10323)
static void C_fcall f_10323(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_14298)
static void C_fcall f_14298(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12358)
static void C_ccall f_12358(C_word c,C_word *av) C_noret;
C_noret_decl(f_15942)
static void C_ccall f_15942(C_word c,C_word *av) C_noret;
C_noret_decl(f_15948)
static void C_ccall f_15948(C_word c,C_word *av) C_noret;
C_noret_decl(f_4892)
static void C_ccall f_4892(C_word c,C_word *av) C_noret;
C_noret_decl(f_4894)
static void C_ccall f_4894(C_word c,C_word *av) C_noret;
C_noret_decl(f_4897)
static void C_fcall f_4897(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4861)
static void C_ccall f_4861(C_word c,C_word *av) C_noret;
C_noret_decl(f_8523)
static void C_ccall f_8523(C_word c,C_word *av) C_noret;
C_noret_decl(f_15677)
static void C_ccall f_15677(C_word c,C_word *av) C_noret;
C_noret_decl(f_8541)
static void C_ccall f_8541(C_word c,C_word *av) C_noret;
C_noret_decl(f_9982)
static void C_ccall f_9982(C_word c,C_word *av) C_noret;
C_noret_decl(f_14685)
static void C_fcall f_14685(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5404)
static void C_ccall f_5404(C_word c,C_word *av) C_noret;
C_noret_decl(f_9998)
static void C_ccall f_9998(C_word c,C_word *av) C_noret;
C_noret_decl(f_5434)
static void C_ccall f_5434(C_word c,C_word *av) C_noret;
C_noret_decl(f_8535)
static void C_ccall f_8535(C_word c,C_word *av) C_noret;
C_noret_decl(f_12284)
static void C_fcall f_12284(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12287)
static void C_ccall f_12287(C_word c,C_word *av) C_noret;
C_noret_decl(f_5429)
static void C_ccall f_5429(C_word c,C_word *av) C_noret;
C_noret_decl(f_4875)
static void C_ccall f_4875(C_word c,C_word *av) C_noret;
C_noret_decl(f_5423)
static void C_ccall f_5423(C_word c,C_word *av) C_noret;
C_noret_decl(f_8564)
static void C_ccall f_8564(C_word c,C_word *av) C_noret;
C_noret_decl(f_8566)
static void C_fcall f_8566(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4872)
static void C_ccall f_4872(C_word c,C_word *av) C_noret;
C_noret_decl(f_9815)
static void C_ccall f_9815(C_word c,C_word *av) C_noret;
C_noret_decl(f_9829)
static void C_fcall f_9829(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_16003)
static void C_ccall f_16003(C_word c,C_word *av) C_noret;
C_noret_decl(f_15547)
static void C_ccall f_15547(C_word c,C_word *av) C_noret;
C_noret_decl(f_15545)
static void C_ccall f_15545(C_word c,C_word *av) C_noret;
C_noret_decl(f_12247)
static void C_ccall f_12247(C_word c,C_word *av) C_noret;
C_noret_decl(f_6994)
static void C_fcall f_6994(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8407)
static void C_fcall f_8407(C_word t0,C_word t1) C_noret;
C_noret_decl(f_14259)
static void C_fcall f_14259(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15531)
static void C_ccall f_15531(C_word c,C_word *av) C_noret;
C_noret_decl(f_15537)
static void C_ccall f_15537(C_word c,C_word *av) C_noret;
C_noret_decl(f_12251)
static void C_fcall f_12251(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8435)
static void C_fcall f_8435(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8433)
static void C_ccall f_8433(C_word c,C_word *av) C_noret;
C_noret_decl(f_15565)
static void C_ccall f_15565(C_word c,C_word *av) C_noret;
C_noret_decl(f_9854)
static void C_ccall f_9854(C_word c,C_word *av) C_noret;
C_noret_decl(f_12322)
static void C_ccall f_12322(C_word c,C_word *av) C_noret;
C_noret_decl(f_6894)
static void C_ccall f_6894(C_word c,C_word *av) C_noret;
C_noret_decl(f_15559)
static void C_ccall f_15559(C_word c,C_word *av) C_noret;
C_noret_decl(f_15553)
static void C_ccall f_15553(C_word c,C_word *av) C_noret;
C_noret_decl(f_12204)
static void C_fcall f_12204(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15571)
static void C_ccall f_15571(C_word c,C_word *av) C_noret;
C_noret_decl(f_14717)
static void C_fcall f_14717(C_word t0,C_word t1) C_noret;
C_noret_decl(f_14703)
static void C_ccall f_14703(C_word c,C_word *av) C_noret;
C_noret_decl(f_15593)
static void C_ccall f_15593(C_word c,C_word *av) C_noret;
C_noret_decl(f_15595)
static void C_fcall f_15595(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14767)
static void C_ccall f_14767(C_word c,C_word *av) C_noret;
C_noret_decl(f_15663)
static void C_ccall f_15663(C_word c,C_word *av) C_noret;
C_noret_decl(f_14757)
static void C_fcall f_14757(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14749)
static void C_fcall f_14749(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15797)
static void C_ccall f_15797(C_word c,C_word *av) C_noret;
C_noret_decl(f_10783)
static void C_fcall f_10783(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15791)
static void C_ccall f_15791(C_word c,C_word *av) C_noret;
C_noret_decl(f_15794)
static void C_ccall f_15794(C_word c,C_word *av) C_noret;
C_noret_decl(f_10478)
static void C_ccall f_10478(C_word c,C_word *av) C_noret;
C_noret_decl(f_11728)
static void C_ccall f_11728(C_word c,C_word *av) C_noret;
C_noret_decl(f_11722)
static void C_ccall f_11722(C_word c,C_word *av) C_noret;
C_noret_decl(f_14320)
static void C_fcall f_14320(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10446)
static void C_ccall f_10446(C_word c,C_word *av) C_noret;
C_noret_decl(f_5809)
static void C_fcall f_5809(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10449)
static void C_ccall f_10449(C_word c,C_word *av) C_noret;
C_noret_decl(f_5803)
static void C_ccall f_5803(C_word c,C_word *av) C_noret;
C_noret_decl(f_15629)
static void C_fcall f_15629(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10443)
static void C_ccall f_10443(C_word c,C_word *av) C_noret;
C_noret_decl(f_15751)
static void C_fcall f_15751(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10439)
static void C_ccall f_10439(C_word c,C_word *av) C_noret;
C_noret_decl(f_10717)
static void C_ccall f_10717(C_word c,C_word *av) C_noret;
C_noret_decl(f_10711)
static void C_ccall f_10711(C_word c,C_word *av) C_noret;
C_noret_decl(f_5848)
static void C_ccall f_5848(C_word c,C_word *av) C_noret;
C_noret_decl(f_10401)
static void C_ccall f_10401(C_word c,C_word *av) C_noret;
C_noret_decl(f_5840)
static void C_ccall f_5840(C_word c,C_word *av) C_noret;
C_noret_decl(f_6094)
static void C_ccall f_6094(C_word c,C_word *av) C_noret;
C_noret_decl(f_9115)
static void C_ccall f_9115(C_word c,C_word *av) C_noret;
C_noret_decl(f_5591)
static void C_ccall f_5591(C_word c,C_word *av) C_noret;
C_noret_decl(f_5834)
static void C_ccall f_5834(C_word c,C_word *av) C_noret;
C_noret_decl(f_10706)
static void C_ccall f_10706(C_word c,C_word *av) C_noret;
C_noret_decl(f_10702)
static void C_ccall f_10702(C_word c,C_word *av) C_noret;
C_noret_decl(f_9139)
static void C_ccall f_9139(C_word c,C_word *av) C_noret;
C_noret_decl(f_5854)
static void C_ccall f_5854(C_word c,C_word *av) C_noret;
C_noret_decl(f_5852)
static void C_ccall f_5852(C_word c,C_word *av) C_noret;
C_noret_decl(f_10759)
static void C_ccall f_10759(C_word c,C_word *av) C_noret;
C_noret_decl(f_15742)
static void C_ccall f_15742(C_word c,C_word *av) C_noret;
C_noret_decl(f_10752)
static void C_ccall f_10752(C_word c,C_word *av) C_noret;
C_noret_decl(f_15746)
static void C_ccall f_15746(C_word c,C_word *av) C_noret;
C_noret_decl(f_10750)
static void C_ccall f_10750(C_word c,C_word *av) C_noret;
C_noret_decl(f_6054)
static void C_fcall f_6054(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5888)
static void C_ccall f_5888(C_word c,C_word *av) C_noret;
C_noret_decl(f_10725)
static void C_fcall f_10725(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_15736)
static void C_ccall f_15736(C_word c,C_word *av) C_noret;
C_noret_decl(f_15734)
static void C_ccall f_15734(C_word c,C_word *av) C_noret;
C_noret_decl(f_10720)
static void C_ccall f_10720(C_word c,C_word *av) C_noret;
C_noret_decl(f_6048)
static void C_ccall f_6048(C_word c,C_word *av) C_noret;
C_noret_decl(f_6046)
static void C_ccall f_6046(C_word c,C_word *av) C_noret;
C_noret_decl(f_5824)
static void C_ccall f_5824(C_word c,C_word *av) C_noret;
C_noret_decl(f_11775)
static void C_ccall f_11775(C_word c,C_word *av) C_noret;
C_noret_decl(f_11781)
static void C_ccall f_11781(C_word c,C_word *av) C_noret;
C_noret_decl(f_10484)
static void C_ccall f_10484(C_word c,C_word *av) C_noret;
C_noret_decl(f_11792)
static void C_fcall f_11792(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11692)
static void C_ccall f_11692(C_word c,C_word *av) C_noret;
C_noret_decl(f_11695)
static void C_ccall f_11695(C_word c,C_word *av) C_noret;
C_noret_decl(f_11698)
static void C_ccall f_11698(C_word c,C_word *av) C_noret;
C_noret_decl(f_7641)
static void C_ccall f_7641(C_word c,C_word *av) C_noret;
C_noret_decl(f_6078)
static void C_fcall f_6078(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15248)
static void C_ccall f_15248(C_word c,C_word *av) C_noret;
C_noret_decl(f_5342)
static void C_fcall f_5342(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7616)
static void C_fcall f_7616(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7614)
static void C_ccall f_7614(C_word c,C_word *av) C_noret;
C_noret_decl(f_9945)
static void C_ccall f_9945(C_word c,C_word *av) C_noret;
C_noret_decl(f_9942)
static void C_ccall f_9942(C_word c,C_word *av) C_noret;
C_noret_decl(f_11760)
static void C_ccall f_11760(C_word c,C_word *av) C_noret;
C_noret_decl(f_7677)
static void C_ccall f_7677(C_word c,C_word *av) C_noret;
C_noret_decl(f_11767)
static void C_ccall f_11767(C_word c,C_word *av) C_noret;
C_noret_decl(f_11764)
static void C_ccall f_11764(C_word c,C_word *av) C_noret;
C_noret_decl(f_11661)
static void C_ccall f_11661(C_word c,C_word *av) C_noret;
C_noret_decl(f_11667)
static void C_ccall f_11667(C_word c,C_word *av) C_noret;
C_noret_decl(f_15296)
static void C_ccall f_15296(C_word c,C_word *av) C_noret;
C_noret_decl(f_15291)
static void C_ccall f_15291(C_word c,C_word *av) C_noret;
C_noret_decl(f_7670)
static void C_ccall f_7670(C_word c,C_word *av) C_noret;
C_noret_decl(f_7667)
static void C_fcall f_7667(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15788)
static void C_ccall f_15788(C_word c,C_word *av) C_noret;
C_noret_decl(f_8591)
static void C_ccall f_8591(C_word c,C_word *av) C_noret;
C_noret_decl(f_11673)
static void C_ccall f_11673(C_word c,C_word *av) C_noret;
C_noret_decl(f_11704)
static void C_ccall f_11704(C_word c,C_word *av) C_noret;
C_noret_decl(f_11707)
static void C_ccall f_11707(C_word c,C_word *av) C_noret;
C_noret_decl(f_11680)
static void C_ccall f_11680(C_word c,C_word *av) C_noret;
C_noret_decl(f_15779)
static void C_ccall f_15779(C_word c,C_word *av) C_noret;
C_noret_decl(f_11689)
static void C_ccall f_11689(C_word c,C_word *av) C_noret;
C_noret_decl(f_11686)
static void C_ccall f_11686(C_word c,C_word *av) C_noret;
C_noret_decl(f_15276)
static void C_ccall f_15276(C_word c,C_word *av) C_noret;
C_noret_decl(f_5370)
static void C_ccall f_5370(C_word c,C_word *av) C_noret;
C_noret_decl(f_5376)
static void C_fcall f_5376(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11716)
static void C_ccall f_11716(C_word c,C_word *av) C_noret;
C_noret_decl(f_11719)
static void C_ccall f_11719(C_word c,C_word *av) C_noret;
C_noret_decl(f_11710)
static void C_ccall f_11710(C_word c,C_word *av) C_noret;
C_noret_decl(f_15261)
static void C_ccall f_15261(C_word c,C_word *av) C_noret;
C_noret_decl(f_10601)
static void C_fcall f_10601(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12842)
static void C_ccall f_12842(C_word c,C_word *av) C_noret;
C_noret_decl(f_15099)
static void C_ccall f_15099(C_word c,C_word *av) C_noret;
C_noret_decl(f_11734)
static void C_ccall f_11734(C_word c,C_word *av) C_noret;
C_noret_decl(f_11731)
static void C_ccall f_11731(C_word c,C_word *av) C_noret;
C_noret_decl(f_11638)
static void C_fcall f_11638(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11746)
static void C_ccall f_11746(C_word c,C_word *av) C_noret;
C_noret_decl(f_11743)
static void C_ccall f_11743(C_word c,C_word *av) C_noret;
C_noret_decl(f_11740)
static void C_ccall f_11740(C_word c,C_word *av) C_noret;
C_noret_decl(f_9935)
static void C_ccall f_9935(C_word c,C_word *av) C_noret;
C_noret_decl(f_11755)
static void C_ccall f_11755(C_word c,C_word *av) C_noret;
C_noret_decl(f_11752)
static void C_ccall f_11752(C_word c,C_word *av) C_noret;
C_noret_decl(f_15059)
static void C_ccall f_15059(C_word c,C_word *av) C_noret;
C_noret_decl(f_15287)
static void C_ccall f_15287(C_word c,C_word *av) C_noret;
C_noret_decl(f_5627)
static void C_ccall f_5627(C_word c,C_word *av) C_noret;
C_noret_decl(f_15280)
static void C_ccall f_15280(C_word c,C_word *av) C_noret;
C_noret_decl(f_10862)
static void C_ccall f_10862(C_word c,C_word *av) C_noret;
C_noret_decl(f_5611)
static void C_ccall f_5611(C_word c,C_word *av) C_noret;
C_noret_decl(f_15068)
static void C_fcall f_15068(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_15013)
static void C_ccall f_15013(C_word c,C_word *av) C_noret;
C_noret_decl(f_9433)
static void C_ccall f_9433(C_word c,C_word *av) C_noret;
C_noret_decl(f_15042)
static void C_fcall f_15042(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5631)
static void C_ccall f_5631(C_word c,C_word *av) C_noret;
C_noret_decl(f_9444)
static void C_ccall f_9444(C_word c,C_word *av) C_noret;
C_noret_decl(f_9446)
static void C_fcall f_9446(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11144)
static void C_ccall f_11144(C_word c,C_word *av) C_noret;
C_noret_decl(f_9582)
static void C_ccall f_9582(C_word c,C_word *av) C_noret;
C_noret_decl(f_9286)
static void C_ccall f_9286(C_word c,C_word *av) C_noret;
C_noret_decl(f_11150)
static void C_ccall f_11150(C_word c,C_word *av) C_noret;
C_noret_decl(f_5652)
static void C_ccall f_5652(C_word c,C_word *av) C_noret;
C_noret_decl(f_15027)
static void C_ccall f_15027(C_word c,C_word *av) C_noret;
C_noret_decl(f_5093)
static void C_ccall f_5093(C_word c,C_word *av) C_noret;
C_noret_decl(f_5684)
static void C_ccall f_5684(C_word c,C_word *av) C_noret;
C_noret_decl(f_9471)
static void C_ccall f_9471(C_word c,C_word *av) C_noret;
C_noret_decl(f_9261)
static void C_fcall f_9261(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11170)
static void C_ccall f_11170(C_word c,C_word *av) C_noret;
C_noret_decl(f_5046)
static void C_ccall f_5046(C_word c,C_word *av) C_noret;
C_noret_decl(f_11176)
static void C_ccall f_11176(C_word c,C_word *av) C_noret;
C_noret_decl(f_5675)
static void C_ccall f_5675(C_word c,C_word *av) C_noret;
C_noret_decl(f_15003)
static void C_fcall f_15003(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5677)
static void C_ccall f_5677(C_word c,C_word *av) C_noret;
C_noret_decl(f_9236)
static void C_ccall f_9236(C_word c,C_word *av) C_noret;
C_noret_decl(f_11100)
static void C_ccall f_11100(C_word c,C_word *av) C_noret;
C_noret_decl(f_5032)
static void C_ccall f_5032(C_word c,C_word *av) C_noret;
C_noret_decl(f_15032)
static void C_ccall f_15032(C_word c,C_word *av) C_noret;
C_noret_decl(f_10895)
static void C_ccall f_10895(C_word c,C_word *av) C_noret;
C_noret_decl(f_10897)
static void C_ccall f_10897(C_word c,C_word *av) C_noret;
C_noret_decl(f_9545)
static void C_ccall f_9545(C_word c,C_word *av) C_noret;
C_noret_decl(f_8101)
static void C_ccall f_8101(C_word c,C_word *av) C_noret;
C_noret_decl(f_8103)
static void C_fcall f_8103(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5061)
static void C_ccall f_5061(C_word c,C_word *av) C_noret;
C_noret_decl(f_11953)
static void C_fcall f_11953(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11413)
static void C_fcall f_11413(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11416)
static void C_ccall f_11416(C_word c,C_word *av) C_noret;
C_noret_decl(f_5081)
static void C_ccall f_5081(C_word c,C_word *av) C_noret;
C_noret_decl(f_5084)
static void C_ccall f_5084(C_word c,C_word *av) C_noret;
C_noret_decl(f_5087)
static void C_ccall f_5087(C_word c,C_word *av) C_noret;
C_noret_decl(f_9531)
static void C_ccall f_9531(C_word c,C_word *av) C_noret;
C_noret_decl(f_9415)
static void C_ccall f_9415(C_word c,C_word *av) C_noret;
C_noret_decl(f_6277)
static void C_ccall f_6277(C_word c,C_word *av) C_noret;
C_noret_decl(f_11439)
static void C_ccall f_11439(C_word c,C_word *av) C_noret;
C_noret_decl(f_5990)
static void C_ccall f_5990(C_word c,C_word *av) C_noret;
C_noret_decl(f_5992)
static void C_ccall f_5992(C_word c,C_word *av) C_noret;
C_noret_decl(f_5078)
static void C_ccall f_5078(C_word c,C_word *av) C_noret;
C_noret_decl(f_9426)
static void C_fcall f_9426(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9555)
static void C_ccall f_9555(C_word c,C_word *av) C_noret;
C_noret_decl(f_11447)
static void C_ccall f_11447(C_word c,C_word *av) C_noret;
C_noret_decl(f_11441)
static void C_ccall f_11441(C_word c,C_word *av) C_noret;
C_noret_decl(f_9557)
static void C_fcall f_9557(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11279)
static void C_ccall f_11279(C_word c,C_word *av) C_noret;
C_noret_decl(f_11457)
static void C_ccall f_11457(C_word c,C_word *av) C_noret;
C_noret_decl(f_11454)
static void C_fcall f_11454(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6029)
static void C_ccall f_6029(C_word c,C_word *av) C_noret;
C_noret_decl(f_6014)
static void C_ccall f_6014(C_word c,C_word *av) C_noret;
C_noret_decl(f_10817)
static void C_ccall f_10817(C_word c,C_word *av) C_noret;
C_noret_decl(f_11216)
static void C_ccall f_11216(C_word c,C_word *av) C_noret;
C_noret_decl(f_8386)
static void C_ccall f_8386(C_word c,C_word *av) C_noret;
C_noret_decl(f_11478)
static void C_ccall f_11478(C_word c,C_word *av) C_noret;
C_noret_decl(f_11476)
static void C_ccall f_11476(C_word c,C_word *av) C_noret;
C_noret_decl(f_6008)
static void C_ccall f_6008(C_word c,C_word *av) C_noret;
C_noret_decl(f_4987)
static void C_ccall f_4987(C_word c,C_word *av) C_noret;
C_noret_decl(f_4984)
static void C_ccall f_4984(C_word c,C_word *av) C_noret;
C_noret_decl(f_6495)
static void C_ccall f_6495(C_word c,C_word *av) C_noret;
C_noret_decl(f_11224)
static void C_ccall f_11224(C_word c,C_word *av) C_noret;
C_noret_decl(f_8835)
static void C_ccall f_8835(C_word c,C_word *av) C_noret;
C_noret_decl(f_8837)
static void C_fcall f_8837(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11484)
static void C_ccall f_11484(C_word c,C_word *av) C_noret;
C_noret_decl(f_4981)
static void C_ccall f_4981(C_word c,C_word *av) C_noret;
C_noret_decl(f_5051)
static void C_fcall f_5051(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4919)
static void C_ccall f_4919(C_word c,C_word *av) C_noret;
C_noret_decl(f_6485)
static void C_fcall f_6485(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8822)
static void C_fcall f_8822(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11497)
static void C_ccall f_11497(C_word c,C_word *av) C_noret;
C_noret_decl(f_4910)
static void C_ccall f_4910(C_word c,C_word *av) C_noret;
C_noret_decl(f_8050)
static void C_ccall f_8050(C_word c,C_word *av) C_noret;
C_noret_decl(f_6281)
static void C_ccall f_6281(C_word c,C_word *av) C_noret;
C_noret_decl(f_6472)
static void C_ccall f_6472(C_word c,C_word *av) C_noret;
C_noret_decl(f_4969)
static void C_ccall f_4969(C_word c,C_word *av) C_noret;
C_noret_decl(f_9087)
static void C_ccall f_9087(C_word c,C_word *av) C_noret;
C_noret_decl(f_4962)
static void C_fcall f_4962(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8062)
static void C_ccall f_8062(C_word c,C_word *av) C_noret;
C_noret_decl(f_6462)
static void C_fcall f_6462(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4972)
static void C_ccall f_4972(C_word c,C_word *av) C_noret;
C_noret_decl(f_5916)
static void C_ccall f_5916(C_word c,C_word *av) C_noret;
C_noret_decl(f_5336)
static void C_ccall f_5336(C_word c,C_word *av) C_noret;
C_noret_decl(f_8089)
static void C_fcall f_8089(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7496)
static void C_ccall f_7496(C_word c,C_word *av) C_noret;
C_noret_decl(f_5900)
static void C_ccall f_5900(C_word c,C_word *av) C_noret;
C_noret_decl(f_9062)
static void C_fcall f_9062(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8862)
static void C_ccall f_8862(C_word c,C_word *av) C_noret;
C_noret_decl(f_7487)
static void C_ccall f_7487(C_word c,C_word *av) C_noret;
C_noret_decl(f_8215)
static void C_ccall f_8215(C_word c,C_word *av) C_noret;
C_noret_decl(f_8370)
static void C_ccall f_8370(C_word c,C_word *av) C_noret;
C_noret_decl(f_16106)
static void C_ccall f_16106(C_word c,C_word *av) C_noret;
C_noret_decl(f_11029)
static void C_fcall f_11029(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4996)
static void C_ccall f_4996(C_word c,C_word *av) C_noret;
C_noret_decl(f_8128)
static void C_ccall f_8128(C_word c,C_word *av) C_noret;
C_noret_decl(f_4993)
static void C_ccall f_4993(C_word c,C_word *av) C_noret;
C_noret_decl(f_4990)
static void C_ccall f_4990(C_word c,C_word *av) C_noret;
C_noret_decl(f_9224)
static void C_ccall f_9224(C_word c,C_word *av) C_noret;
C_noret_decl(f_9008)
static void C_ccall f_9008(C_word c,C_word *av) C_noret;
C_noret_decl(f_9004)
static void C_ccall f_9004(C_word c,C_word *av) C_noret;
C_noret_decl(f_6753)
static void C_fcall f_6753(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9504)
static void C_ccall f_9504(C_word c,C_word *av) C_noret;
C_noret_decl(f_9506)
static void C_fcall f_9506(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6780)
static void C_ccall f_6780(C_word c,C_word *av) C_noret;
C_noret_decl(f_6786)
static void C_ccall f_6786(C_word c,C_word *av) C_noret;
C_noret_decl(f_9209)
static void C_ccall f_9209(C_word c,C_word *av) C_noret;
C_noret_decl(f_5029)
static void C_ccall f_5029(C_word c,C_word *av) C_noret;
C_noret_decl(f_5026)
static void C_ccall f_5026(C_word c,C_word *av) C_noret;
C_noret_decl(f_8366)
static void C_ccall f_8366(C_word c,C_word *av) C_noret;
C_noret_decl(f_6724)
static void C_ccall f_6724(C_word c,C_word *av) C_noret;
C_noret_decl(f_6729)
static void C_ccall f_6729(C_word c,C_word *av) C_noret;
C_noret_decl(f_6720)
static void C_ccall f_6720(C_word c,C_word *av) C_noret;
C_noret_decl(f_5014)
static void C_ccall f_5014(C_word c,C_word *av) C_noret;
C_noret_decl(f_5012)
static void C_ccall f_5012(C_word c,C_word *av) C_noret;
C_noret_decl(f_5019)
static void C_fcall f_5019(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5017)
static void C_fcall f_5017(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7478)
static void C_ccall f_7478(C_word c,C_word *av) C_noret;
C_noret_decl(f17665)
static void C_ccall f17665(C_word c,C_word *av) C_noret;
C_noret_decl(f_7460)
static void C_ccall f_7460(C_word c,C_word *av) C_noret;
C_noret_decl(f_7163)
static void C_ccall f_7163(C_word c,C_word *av) C_noret;
C_noret_decl(f_7160)
static void C_ccall f_7160(C_word c,C_word *av) C_noret;
C_noret_decl(f_7469)
static void C_ccall f_7469(C_word c,C_word *av) C_noret;
C_noret_decl(f_6749)
static void C_fcall f_6749(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6746)
static void C_ccall f_6746(C_word c,C_word *av) C_noret;
C_noret_decl(f_8046)
static void C_ccall f_8046(C_word c,C_word *av) C_noret;
C_noret_decl(f_7151)
static void C_fcall f_7151(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7451)
static void C_ccall f_7451(C_word c,C_word *av) C_noret;
C_noret_decl(f_7157)
static void C_ccall f_7157(C_word c,C_word *av) C_noret;
C_noret_decl(f_6739)
static void C_ccall f_6739(C_word c,C_word *av) C_noret;
C_noret_decl(f_7445)
static void C_ccall f_7445(C_word c,C_word *av) C_noret;
C_noret_decl(C_support_toplevel)
C_externexport void C_ccall C_support_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_5002)
static void C_ccall f_5002(C_word c,C_word *av) C_noret;
C_noret_decl(f_5005)
static void C_ccall f_5005(C_word c,C_word *av) C_noret;
C_noret_decl(f_8005)
static void C_ccall f_8005(C_word c,C_word *av) C_noret;
C_noret_decl(f_4847)
static void C_ccall f_4847(C_word c,C_word *av) C_noret;
C_noret_decl(f_14085)
static void C_ccall f_14085(C_word c,C_word *av) C_noret;
C_noret_decl(f_14081)
static void C_ccall f_14081(C_word c,C_word *av) C_noret;
C_noret_decl(f_6142)
static void C_ccall f_6142(C_word c,C_word *av) C_noret;
C_noret_decl(f_4842)
static void C_ccall f_4842(C_word c,C_word *av) C_noret;
C_noret_decl(f_6148)
static void C_ccall f_6148(C_word c,C_word *av) C_noret;
C_noret_decl(f_6435)
static void C_ccall f_6435(C_word c,C_word *av) C_noret;
C_noret_decl(f_9692)
static void C_ccall f_9692(C_word c,C_word *av) C_noret;
C_noret_decl(f_9696)
static void C_ccall f_9696(C_word c,C_word *av) C_noret;
C_noret_decl(f_6167)
static void C_ccall f_6167(C_word c,C_word *av) C_noret;
C_noret_decl(f_6169)
static void C_fcall f_6169(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4949)
static void C_ccall f_4949(C_word c,C_word *av) C_noret;
C_noret_decl(f_9660)
static void C_ccall f_9660(C_word c,C_word *av) C_noret;
C_noret_decl(f_9666)
static void C_fcall f_9666(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4838)
static void C_ccall f_4838(C_word c,C_word *av) C_noret;
C_noret_decl(f_4835)
static void C_ccall f_4835(C_word c,C_word *av) C_noret;
C_noret_decl(f_4832)
static void C_ccall f_4832(C_word c,C_word *av) C_noret;
C_noret_decl(f_6156)
static void C_ccall f_6156(C_word c,C_word *av) C_noret;
C_noret_decl(f_6159)
static void C_ccall f_6159(C_word c,C_word *av) C_noret;
C_noret_decl(f_5691)
static void C_ccall f_5691(C_word c,C_word *av) C_noret;
C_noret_decl(f_11406)
static void C_ccall f_11406(C_word c,C_word *av) C_noret;
C_noret_decl(f_11400)
static void C_ccall f_11400(C_word c,C_word *av) C_noret;
C_noret_decl(f_6406)
static void C_ccall f_6406(C_word c,C_word *av) C_noret;
C_noret_decl(f_4927)
static void C_ccall f_4927(C_word c,C_word *av) C_noret;
C_noret_decl(f_13961)
static void C_ccall f_13961(C_word c,C_word *av) C_noret;
C_noret_decl(f_6210)
static void C_fcall f_6210(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5283)
static void C_ccall f_5283(C_word c,C_word *av) C_noret;
C_noret_decl(f_6216)
static void C_ccall f_6216(C_word c,C_word *av) C_noret;
C_noret_decl(f_8025)
static void C_ccall f_8025(C_word c,C_word *av) C_noret;
C_noret_decl(f_4939)
static void C_fcall f_4939(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4934)
static void C_ccall f_4934(C_word c,C_word *av) C_noret;
C_noret_decl(f_6201)
static void C_ccall f_6201(C_word c,C_word *av) C_noret;
C_noret_decl(f_10088)
static void C_fcall f_10088(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7437)
static void C_ccall f_7437(C_word c,C_word *av) C_noret;
C_noret_decl(f_8017)
static void C_ccall f_8017(C_word c,C_word *av) C_noret;
C_noret_decl(f_6209)
static void C_ccall f_6209(C_word c,C_word *av) C_noret;
C_noret_decl(f_8013)
static void C_ccall f_8013(C_word c,C_word *av) C_noret;
C_noret_decl(f_4903)
static void C_ccall f_4903(C_word c,C_word *av) C_noret;
C_noret_decl(f_4907)
static void C_ccall f_4907(C_word c,C_word *av) C_noret;
C_noret_decl(f_7439)
static void C_ccall f_7439(C_word c,C_word *av) C_noret;
C_noret_decl(f_10098)
static void C_ccall f_10098(C_word c,C_word *av) C_noret;
C_noret_decl(f_6195)
static void C_ccall f_6195(C_word c,C_word *av) C_noret;
C_noret_decl(f_5292)
static void C_fcall f_5292(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10062)
static void C_ccall f_10062(C_word c,C_word *av) C_noret;
C_noret_decl(f_15332)
static void C_ccall f_15332(C_word c,C_word *av) C_noret;
C_noret_decl(f_10068)
static void C_ccall f_10068(C_word c,C_word *av) C_noret;
C_noret_decl(f_15321)
static void C_ccall f_15321(C_word c,C_word *av) C_noret;
C_noret_decl(f_10071)
static void C_ccall f_10071(C_word c,C_word *av) C_noret;
C_noret_decl(f_15324)
static void C_ccall f_15324(C_word c,C_word *av) C_noret;
C_noret_decl(f_15327)
static void C_ccall f_15327(C_word c,C_word *av) C_noret;
C_noret_decl(f_13933)
static void C_fcall f_13933(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6233)
static void C_ccall f_6233(C_word c,C_word *av) C_noret;
C_noret_decl(f_6230)
static void C_ccall f_6230(C_word c,C_word *av) C_noret;
C_noret_decl(f_10055)
static void C_fcall f_10055(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10050)
static void C_ccall f_10050(C_word c,C_word *av) C_noret;
C_noret_decl(f_6239)
static C_word C_fcall f_6239(C_word t0,C_word t1);
C_noret_decl(f_10059)
static void C_ccall f_10059(C_word c,C_word *av) C_noret;
C_noret_decl(f_9012)
static void C_ccall f_9012(C_word c,C_word *av) C_noret;
C_noret_decl(f_9014)
static void C_fcall f_9014(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8498)
static void C_fcall f_8498(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8496)
static void C_ccall f_8496(C_word c,C_word *av) C_noret;
C_noret_decl(f_10027)
static void C_ccall f_10027(C_word c,C_word *av) C_noret;
C_noret_decl(f_14894)
static void C_ccall f_14894(C_word c,C_word *av) C_noret;
C_noret_decl(f_6227)
static void C_ccall f_6227(C_word c,C_word *av) C_noret;
C_noret_decl(f_7740)
static void C_ccall f_7740(C_word c,C_word *av) C_noret;
C_noret_decl(f_7743)
static void C_ccall f_7743(C_word c,C_word *av) C_noret;
C_noret_decl(f_7747)
static void C_ccall f_7747(C_word c,C_word *av) C_noret;
C_noret_decl(f_5279)
static void C_ccall f_5279(C_word c,C_word *av) C_noret;
C_noret_decl(f_6173)
static void C_ccall f_6173(C_word c,C_word *av) C_noret;
C_noret_decl(f_5271)
static void C_fcall f_5271(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10001)
static void C_ccall f_10001(C_word c,C_word *av) C_noret;
C_noret_decl(f_10007)
static void C_ccall f_10007(C_word c,C_word *av) C_noret;
C_noret_decl(f_15921)
static void C_ccall f_15921(C_word c,C_word *av) C_noret;
C_noret_decl(f_15925)
static void C_ccall f_15925(C_word c,C_word *av) C_noret;
C_noret_decl(f_8732)
static void C_fcall f_8732(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14864)
static void C_ccall f_14864(C_word c,C_word *av) C_noret;
C_noret_decl(f_14868)
static void C_ccall f_14868(C_word c,C_word *av) C_noret;
C_noret_decl(f_8730)
static void C_ccall f_8730(C_word c,C_word *av) C_noret;
C_noret_decl(f_14858)
static void C_ccall f_14858(C_word c,C_word *av) C_noret;
C_noret_decl(f_8757)
static void C_ccall f_8757(C_word c,C_word *av) C_noret;
C_noret_decl(f_7777)
static void C_ccall f_7777(C_word c,C_word *av) C_noret;
C_noret_decl(f_7779)
static void C_fcall f_7779(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8788)
static void C_ccall f_8788(C_word c,C_word *av) C_noret;
C_noret_decl(f_15814)
static void C_ccall f_15814(C_word c,C_word *av) C_noret;
C_noret_decl(f_5268)
static void C_ccall f_5268(C_word c,C_word *av) C_noret;
C_noret_decl(f_15961)
static void C_ccall f_15961(C_word c,C_word *av) C_noret;
C_noret_decl(f_8782)
static void C_ccall f_8782(C_word c,C_word *av) C_noret;
C_noret_decl(f_7769)
static void C_ccall f_7769(C_word c,C_word *av) C_noret;
C_noret_decl(f_6796)
static void C_ccall f_6796(C_word c,C_word *av) C_noret;
C_noret_decl(f_6799)
static void C_ccall f_6799(C_word c,C_word *av) C_noret;
C_noret_decl(f_5260)
static void C_ccall f_5260(C_word c,C_word *av) C_noret;
C_noret_decl(f_8774)
static void C_ccall f_8774(C_word c,C_word *av) C_noret;
C_noret_decl(f_11552)
static void C_ccall f_11552(C_word c,C_word *av) C_noret;
C_noret_decl(f_11557)
static void C_ccall f_11557(C_word c,C_word *av) C_noret;
C_noret_decl(f_11559)
static C_word C_fcall f_11559(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_8771)
static void C_ccall f_8771(C_word c,C_word *av) C_noret;
C_noret_decl(f_15958)
static void C_ccall f_15958(C_word c,C_word *av) C_noret;
C_noret_decl(f_5950)
static void C_fcall f_5950(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7752)
static void C_fcall f_7752(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5256)
static void C_ccall f_5256(C_word c,C_word *av) C_noret;
C_noret_decl(f_11525)
static void C_ccall f_11525(C_word c,C_word *av) C_noret;
C_noret_decl(f_11527)
static void C_ccall f_11527(C_word c,C_word *av) C_noret;
C_noret_decl(f_5946)
static void C_ccall f_5946(C_word c,C_word *av) C_noret;
C_noret_decl(f_15903)
static void C_ccall f_15903(C_word c,C_word *av) C_noret;
C_noret_decl(f_15906)
static void C_fcall f_15906(C_word t0,C_word t1) C_noret;
C_noret_decl(f_16029)
static void C_ccall f_16029(C_word c,C_word *av) C_noret;
C_noret_decl(f_16026)
static void C_ccall f_16026(C_word c,C_word *av) C_noret;
C_noret_decl(f_15820)
static void C_ccall f_15820(C_word c,C_word *av) C_noret;
C_noret_decl(f_8460)
static void C_ccall f_8460(C_word c,C_word *av) C_noret;
C_noret_decl(f_14805)
static void C_fcall f_14805(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_14802)
static void C_ccall f_14802(C_word c,C_word *av) C_noret;
C_noret_decl(f_16014)
static void C_ccall f_16014(C_word c,C_word *av) C_noret;
C_noret_decl(f_8894)
static void C_fcall f_8894(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13409)
static void C_fcall f_13409(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13405)
static void C_ccall f_13405(C_word c,C_word *av) C_noret;
C_noret_decl(f_11548)
static void C_ccall f_11548(C_word c,C_word *av) C_noret;
C_noret_decl(f_8892)
static void C_ccall f_8892(C_word c,C_word *av) C_noret;
C_noret_decl(f_16042)
static void C_ccall f_16042(C_word c,C_word *av) C_noret;
C_noret_decl(f_15886)
static void C_ccall f_15886(C_word c,C_word *av) C_noret;
C_noret_decl(f_16037)
static void C_ccall f_16037(C_word c,C_word *av) C_noret;
C_noret_decl(f_16066)
static void C_ccall f_16066(C_word c,C_word *av) C_noret;
C_noret_decl(f_11537)
static void C_ccall f_11537(C_word c,C_word *av) C_noret;
C_noret_decl(f_5233)
static void C_fcall f_5233(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14839)
static void C_fcall f_14839(C_word t0,C_word t1) C_noret;
C_noret_decl(f_16086)
static void C_ccall f_16086(C_word c,C_word *av) C_noret;
C_noret_decl(f_15128)
static void C_ccall f_15128(C_word c,C_word *av) C_noret;
C_noret_decl(f_15120)
static void C_ccall f_15120(C_word c,C_word *av) C_noret;
C_noret_decl(f_15843)
static void C_fcall f_15843(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_15111)
static void C_ccall f_15111(C_word c,C_word *av) C_noret;
C_noret_decl(f_15986)
static void C_ccall f_15986(C_word c,C_word *av) C_noret;
C_noret_decl(f_15982)
static void C_fcall f_15982(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15143)
static void C_ccall f_15143(C_word c,C_word *av) C_noret;
C_noret_decl(f_15146)
static void C_ccall f_15146(C_word c,C_word *av) C_noret;
C_noret_decl(f_15140)
static void C_ccall f_15140(C_word c,C_word *av) C_noret;
C_noret_decl(f_15977)
static void C_ccall f_15977(C_word c,C_word *av) C_noret;
C_noret_decl(f_15973)
static void C_ccall f_15973(C_word c,C_word *av) C_noret;
C_noret_decl(f_15134)
static void C_ccall f_15134(C_word c,C_word *av) C_noret;
C_noret_decl(f_10555)
static void C_ccall f_10555(C_word c,C_word *av) C_noret;
C_noret_decl(f_15137)
static void C_ccall f_15137(C_word c,C_word *av) C_noret;
C_noret_decl(f_8630)
static void C_ccall f_8630(C_word c,C_word *av) C_noret;
C_noret_decl(f_15856)
static void C_ccall f_15856(C_word c,C_word *av) C_noret;
C_noret_decl(f_15859)
static void C_ccall f_15859(C_word c,C_word *av) C_noret;
C_noret_decl(f_10564)
static void C_ccall f_10564(C_word c,C_word *av) C_noret;
C_noret_decl(f_15169)
static void C_ccall f_15169(C_word c,C_word *av) C_noret;
C_noret_decl(f_15800)
static void C_ccall f_15800(C_word c,C_word *av) C_noret;
C_noret_decl(f_15803)
static void C_ccall f_15803(C_word c,C_word *av) C_noret;
C_noret_decl(f_15804)
static void C_fcall f_15804(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_15150)
static void C_ccall f_15150(C_word c,C_word *av) C_noret;
C_noret_decl(f_10570)
static void C_ccall f_10570(C_word c,C_word *av) C_noret;
C_noret_decl(f_15158)
static void C_ccall f_15158(C_word c,C_word *av) C_noret;
C_noret_decl(f_15154)
static void C_ccall f_15154(C_word c,C_word *av) C_noret;
C_noret_decl(f_8616)
static void C_ccall f_8616(C_word c,C_word *av) C_noret;
C_noret_decl(f_15832)
static void C_ccall f_15832(C_word c,C_word *av) C_noret;
C_noret_decl(f_15835)
static void C_ccall f_15835(C_word c,C_word *av) C_noret;
C_noret_decl(f_15838)
static void C_ccall f_15838(C_word c,C_word *av) C_noret;
C_noret_decl(f_15189)
static void C_ccall f_15189(C_word c,C_word *av) C_noret;
C_noret_decl(f_15183)
static void C_ccall f_15183(C_word c,C_word *av) C_noret;
C_noret_decl(f_9785)
static void C_ccall f_9785(C_word c,C_word *av) C_noret;
C_noret_decl(f_15179)
static void C_fcall f_15179(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10599)
static void C_ccall f_10599(C_word c,C_word *av) C_noret;
C_noret_decl(f_15176)
static void C_ccall f_15176(C_word c,C_word *av) C_noret;
C_noret_decl(f_15195)
static void C_ccall f_15195(C_word c,C_word *av) C_noret;
C_noret_decl(f_12873)
static void C_ccall f_12873(C_word c,C_word *av) C_noret;
C_noret_decl(f_12879)
static void C_ccall f_12879(C_word c,C_word *av) C_noret;
C_noret_decl(f_6358)
static void C_ccall f_6358(C_word c,C_word *av) C_noret;
C_noret_decl(f_11307)
static void C_ccall f_11307(C_word c,C_word *av) C_noret;
C_noret_decl(f_6136)
static void C_ccall f_6136(C_word c,C_word *av) C_noret;
C_noret_decl(f_9716)
static void C_ccall f_9716(C_word c,C_word *av) C_noret;
C_noret_decl(f_9710)
static void C_ccall f_9710(C_word c,C_word *av) C_noret;
C_noret_decl(f_6131)
static void C_ccall f_6131(C_word c,C_word *av) C_noret;
C_noret_decl(f_12883)
static void C_ccall f_12883(C_word c,C_word *av) C_noret;
C_noret_decl(f_12887)
static void C_fcall f_12887(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10528)
static void C_ccall f_10528(C_word c,C_word *av) C_noret;
C_noret_decl(f_10530)
static void C_fcall f_10530(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11993)
static void C_fcall f_11993(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11996)
static void C_ccall f_11996(C_word c,C_word *av) C_noret;
C_noret_decl(f_6109)
static void C_ccall f_6109(C_word c,C_word *av) C_noret;
C_noret_decl(f_5207)
static void C_ccall f_5207(C_word c,C_word *av) C_noret;
C_noret_decl(f_5204)
static void C_ccall f_5204(C_word c,C_word *av) C_noret;
C_noret_decl(f_5201)
static void C_ccall f_5201(C_word c,C_word *av) C_noret;
C_noret_decl(f_6104)
static void C_ccall f_6104(C_word c,C_word *av) C_noret;
C_noret_decl(f_10735)
static void C_ccall f_10735(C_word c,C_word *av) C_noret;
C_noret_decl(f_6126)
static void C_ccall f_6126(C_word c,C_word *av) C_noret;
C_noret_decl(f_6127)
static void C_ccall f_6127(C_word c,C_word *av) C_noret;
C_noret_decl(f_5227)
static void C_ccall f_5227(C_word c,C_word *av) C_noret;
C_noret_decl(f_5224)
static void C_ccall f_5224(C_word c,C_word *av) C_noret;
C_noret_decl(f_9761)
static void C_fcall f_9761(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9765)
static void C_ccall f_9765(C_word c,C_word *av) C_noret;
C_noret_decl(f_6123)
static void C_ccall f_6123(C_word c,C_word *av) C_noret;
C_noret_decl(f_12811)
static void C_ccall f_12811(C_word c,C_word *av) C_noret;
C_noret_decl(f_7983)
static void C_ccall f_7983(C_word c,C_word *av) C_noret;
C_noret_decl(f_15483)
static void C_ccall f_15483(C_word c,C_word *av) C_noret;
C_noret_decl(f_15486)
static void C_ccall f_15486(C_word c,C_word *av) C_noret;
C_noret_decl(f_15525)
static void C_ccall f_15525(C_word c,C_word *av) C_noret;
C_noret_decl(f_7962)
static void C_ccall f_7962(C_word c,C_word *av) C_noret;
C_noret_decl(f_12805)
static void C_ccall f_12805(C_word c,C_word *av) C_noret;
C_noret_decl(f_15460)
static void C_ccall f_15460(C_word c,C_word *av) C_noret;
C_noret_decl(f_15463)
static void C_ccall f_15463(C_word c,C_word *av) C_noret;
C_noret_decl(f_6387)
static void C_ccall f_6387(C_word c,C_word *av) C_noret;
C_noret_decl(f_12855)
static void C_ccall f_12855(C_word c,C_word *av) C_noret;
C_noret_decl(f_12824)
static void C_ccall f_12824(C_word c,C_word *av) C_noret;
C_noret_decl(f_15445)
static void C_ccall f_15445(C_word c,C_word *av) C_noret;
C_noret_decl(f_6672)
static void C_fcall f_6672(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11938)
static void C_ccall f_11938(C_word c,C_word *av) C_noret;
C_noret_decl(f_15421)
static void C_ccall f_15421(C_word c,C_word *av) C_noret;
C_noret_decl(f_16296)
static void C_ccall f_16296(C_word c,C_word *av) C_noret;
C_noret_decl(f_7908)
static void C_ccall f_7908(C_word c,C_word *av) C_noret;
C_noret_decl(f_15105)
static void C_ccall f_15105(C_word c,C_word *av) C_noret;
C_noret_decl(f_16280)
static void C_ccall f_16280(C_word c,C_word *av) C_noret;
C_noret_decl(f_16282)
static void C_ccall f_16282(C_word c,C_word *av) C_noret;
C_noret_decl(f_16289)
static void C_ccall f_16289(C_word c,C_word *av) C_noret;
C_noret_decl(f_14184)
static void C_fcall f_14184(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6669)
static void C_ccall f_6669(C_word c,C_word *av) C_noret;
C_noret_decl(f_6665)
static void C_ccall f_6665(C_word c,C_word *av) C_noret;
C_noret_decl(f_10964)
static C_word C_fcall f_10964(C_word t0,C_word t1);
C_noret_decl(f_6613)
static void C_ccall f_6613(C_word c,C_word *av) C_noret;
C_noret_decl(f_6617)
static void C_ccall f_6617(C_word c,C_word *av) C_noret;
C_noret_decl(f_16258)
static void C_ccall f_16258(C_word c,C_word *av) C_noret;
C_noret_decl(f_16243)
static void C_ccall f_16243(C_word c,C_word *av) C_noret;
C_noret_decl(f_10656)
static void C_ccall f_10656(C_word c,C_word *av) C_noret;
C_noret_decl(f_16276)
static void C_ccall f_16276(C_word c,C_word *av) C_noret;
C_noret_decl(f_16273)
static void C_ccall f_16273(C_word c,C_word *av) C_noret;
C_noret_decl(f_16270)
static void C_ccall f_16270(C_word c,C_word *av) C_noret;
C_noret_decl(f_10990)
static void C_fcall f_10990(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10664)
static void C_fcall f_10664(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_16264)
static void C_ccall f_16264(C_word c,C_word *av) C_noret;
C_noret_decl(f_16267)
static void C_ccall f_16267(C_word c,C_word *av) C_noret;
C_noret_decl(f_16212)
static void C_ccall f_16212(C_word c,C_word *av) C_noret;
C_noret_decl(f_16216)
static void C_ccall f_16216(C_word c,C_word *av) C_noret;
C_noret_decl(f_16200)
static void C_ccall f_16200(C_word c,C_word *av) C_noret;
C_noret_decl(f_16233)
static void C_fcall f_16233(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14109)
static void C_fcall f_14109(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13359)
static void C_ccall f_13359(C_word c,C_word *av) C_noret;
C_noret_decl(f_16228)
static void C_ccall f_16228(C_word c,C_word *av) C_noret;
C_noret_decl(f_13365)
static void C_ccall f_13365(C_word c,C_word *av) C_noret;
C_noret_decl(f_10909)
static void C_fcall f_10909(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6338)
static void C_ccall f_6338(C_word c,C_word *av) C_noret;
C_noret_decl(f_10903)
static void C_ccall f_10903(C_word c,C_word *av) C_noret;
C_noret_decl(f_5192)
static void C_ccall f_5192(C_word c,C_word *av) C_noret;
C_noret_decl(f_10913)
static void C_ccall f_10913(C_word c,C_word *av) C_noret;
C_noret_decl(f_5186)
static void C_ccall f_5186(C_word c,C_word *av) C_noret;
C_noret_decl(f_5183)
static void C_ccall f_5183(C_word c,C_word *av) C_noret;
C_noret_decl(f_5180)
static void C_ccall f_5180(C_word c,C_word *av) C_noret;
C_noret_decl(f_5189)
static void C_ccall f_5189(C_word c,C_word *av) C_noret;
C_noret_decl(f_13399)
static void C_fcall f_13399(C_word t0,C_word t1) C_noret;
C_noret_decl(f_14989)
static void C_fcall f_14989(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13442)
static void C_fcall f_13442(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10639)
static void C_ccall f_10639(C_word c,C_word *av) C_noret;
C_noret_decl(f_10635)
static void C_ccall f_10635(C_word c,C_word *av) C_noret;
C_noret_decl(f_10936)
static void C_ccall f_10936(C_word c,C_word *av) C_noret;
C_noret_decl(f_10648)
static void C_ccall f_10648(C_word c,C_word *av) C_noret;
C_noret_decl(f_8609)
static void C_ccall f_8609(C_word c,C_word *av) C_noret;
C_noret_decl(f_8606)
static void C_ccall f_8606(C_word c,C_word *av) C_noret;
C_noret_decl(f_10642)
static void C_ccall f_10642(C_word c,C_word *av) C_noret;
C_noret_decl(f_8602)
static void C_fcall f_8602(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10947)
static void C_ccall f_10947(C_word c,C_word *av) C_noret;
C_noret_decl(f_14991)
static void C_fcall f_14991(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10956)
static void C_fcall f_10956(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10953)
static void C_ccall f_10953(C_word c,C_word *av) C_noret;
C_noret_decl(f_10626)
static void C_ccall f_10626(C_word c,C_word *av) C_noret;
C_noret_decl(f_10674)
static void C_ccall f_10674(C_word c,C_word *av) C_noret;
C_noret_decl(f_6334)
static void C_ccall f_6334(C_word c,C_word *av) C_noret;
C_noret_decl(f_12011)
static void C_fcall f_12011(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7072)
static void C_fcall f_7072(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5163)
static void C_ccall f_5163(C_word c,C_word *av) C_noret;
C_noret_decl(f_7078)
static void C_ccall f_7078(C_word c,C_word *av) C_noret;
C_noret_decl(f_13377)
static void C_ccall f_13377(C_word c,C_word *av) C_noret;
C_noret_decl(f_8188)
static void C_ccall f_8188(C_word c,C_word *av) C_noret;
C_noret_decl(f_7061)
static void C_ccall f_7061(C_word c,C_word *av) C_noret;
C_noret_decl(f_13387)
static void C_fcall f_13387(C_word t0,C_word t1) C_noret;
C_noret_decl(f_14903)
static void C_ccall f_14903(C_word c,C_word *av) C_noret;
C_noret_decl(f_7048)
static void C_fcall f_7048(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14933)
static void C_ccall f_14933(C_word c,C_word *av) C_noret;
C_noret_decl(f_10820)
static void C_fcall f_10820(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5153)
static void C_fcall f_5153(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14914)
static void C_ccall f_14914(C_word c,C_word *av) C_noret;
C_noret_decl(f_10836)
static void C_ccall f_10836(C_word c,C_word *av) C_noret;
C_noret_decl(f_5145)
static void C_ccall f_5145(C_word c,C_word *av) C_noret;
C_noret_decl(f_5148)
static void C_ccall f_5148(C_word c,C_word *av) C_noret;
C_noret_decl(f_9728)
static void C_ccall f_9728(C_word c,C_word *av) C_noret;
C_noret_decl(f_9722)
static void C_ccall f_9722(C_word c,C_word *av) C_noret;
C_noret_decl(f_11202)
static void C_fcall f_11202(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9735)
static void C_ccall f_9735(C_word c,C_word *av) C_noret;
C_noret_decl(f_9732)
static void C_ccall f_9732(C_word c,C_word *av) C_noret;
C_noret_decl(f_10125)
static void C_ccall f_10125(C_word c,C_word *av) C_noret;
C_noret_decl(f_9740)
static void C_ccall f_9740(C_word c,C_word *av) C_noret;
C_noret_decl(f_10136)
static void C_ccall f_10136(C_word c,C_word *av) C_noret;
C_noret_decl(f_10144)
static void C_ccall f_10144(C_word c,C_word *av) C_noret;
C_noret_decl(f_12088)
static void C_fcall f_12088(C_word t0,C_word t1) C_noret;
C_noret_decl(f_14647)
static void C_ccall f_14647(C_word c,C_word *av) C_noret;
C_noret_decl(f_6549)
static void C_ccall f_6549(C_word c,C_word *av) C_noret;
C_noret_decl(f_10152)
static void C_ccall f_10152(C_word c,C_word *av) C_noret;
C_noret_decl(f_6535)
static void C_ccall f_6535(C_word c,C_word *av) C_noret;
C_noret_decl(f_8992)
static void C_ccall f_8992(C_word c,C_word *av) C_noret;
C_noret_decl(f_6531)
static void C_ccall f_6531(C_word c,C_word *av) C_noret;
C_noret_decl(f_10165)
static void C_ccall f_10165(C_word c,C_word *av) C_noret;
C_noret_decl(f_10167)
static void C_fcall f_10167(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5125)
static void C_ccall f_5125(C_word c,C_word *av) C_noret;
C_noret_decl(f_5127)
static void C_ccall f_5127(C_word c,C_word *av) C_noret;
C_noret_decl(f_6561)
static void C_ccall f_6561(C_word c,C_word *av) C_noret;
C_noret_decl(f_6567)
static void C_ccall f_6567(C_word c,C_word *av) C_noret;
C_noret_decl(f_8995)
static void C_ccall f_8995(C_word c,C_word *av) C_noret;
C_noret_decl(f_6553)
static void C_ccall f_6553(C_word c,C_word *av) C_noret;
C_noret_decl(f_8190)
static void C_fcall f_8190(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14945)
static void C_ccall f_14945(C_word c,C_word *av) C_noret;
C_noret_decl(f_6571)
static void C_ccall f_6571(C_word c,C_word *av) C_noret;
C_noret_decl(f_12035)
static void C_fcall f_12035(C_word t0,C_word t1) C_noret;
C_noret_decl(f_14651)
static void C_ccall f_14651(C_word c,C_word *av) C_noret;
C_noret_decl(f_14653)
static void C_ccall f_14653(C_word c,C_word *av) C_noret;
C_noret_decl(f_7939)
static void C_fcall f_7939(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9388)
static void C_ccall f_9388(C_word c,C_word *av) C_noret;
C_noret_decl(f_9392)
static void C_ccall f_9392(C_word c,C_word *av) C_noret;
C_noret_decl(f_5704)
static void C_ccall f_5704(C_word c,C_word *av) C_noret;
C_noret_decl(f_14693)
static void C_fcall f_14693(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8919)
static void C_ccall f_8919(C_word c,C_word *av) C_noret;
C_noret_decl(f_10100)
static void C_fcall f_10100(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9343)
static void C_ccall f_9343(C_word c,C_word *av) C_noret;
C_noret_decl(f_6508)
static void C_fcall f_6508(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5716)
static void C_fcall f_5716(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12061)
static void C_fcall f_12061(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9876)
static void C_ccall f_9876(C_word c,C_word *av) C_noret;
C_noret_decl(f_5747)
static void C_ccall f_5747(C_word c,C_word *av) C_noret;
C_noret_decl(f_9884)
static void C_fcall f_9884(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6518)
static void C_ccall f_6518(C_word c,C_word *av) C_noret;
C_noret_decl(f_9374)
static void C_fcall f_9374(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5735)
static void C_ccall f_5735(C_word c,C_word *av) C_noret;
C_noret_decl(f_5488)
static void C_ccall f_5488(C_word c,C_word *av) C_noret;
C_noret_decl(f_11012)
static void C_ccall f_11012(C_word c,C_word *av) C_noret;
C_noret_decl(f_5763)
static void C_fcall f_5763(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5761)
static void C_ccall f_5761(C_word c,C_word *av) C_noret;
C_noret_decl(f_12967)
static void C_fcall f_12967(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9863)
static void C_ccall f_9863(C_word c,C_word *av) C_noret;
C_noret_decl(f_11069)
static void C_fcall f_11069(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_15238)
static void C_ccall f_15238(C_word c,C_word *av) C_noret;
C_noret_decl(f_13807)
static void C_ccall f_13807(C_word c,C_word *av) C_noret;
C_noret_decl(f_12973)
static void C_ccall f_12973(C_word c,C_word *av) C_noret;
C_noret_decl(f_16311)
static void C_ccall f_16311(C_word c,C_word *av) C_noret;
C_noret_decl(f_16314)
static void C_ccall f_16314(C_word c,C_word *av) C_noret;
C_noret_decl(f_12977)
static void C_fcall f_12977(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13010)
static void C_fcall f_13010(C_word t0,C_word t1) C_noret;
C_noret_decl(f_15222)
static void C_ccall f_15222(C_word c,C_word *av) C_noret;
C_noret_decl(f_15224)
static void C_fcall f_15224(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5789)
static void C_ccall f_5789(C_word c,C_word *av) C_noret;
C_noret_decl(f_13813)
static void C_ccall f_13813(C_word c,C_word *av) C_noret;
C_noret_decl(f_13817)
static void C_ccall f_13817(C_word c,C_word *av) C_noret;
C_noret_decl(f_7508)
static void C_ccall f_7508(C_word c,C_word *av) C_noret;
C_noret_decl(f_7506)
static void C_ccall f_7506(C_word c,C_word *av) C_noret;
C_noret_decl(f_11051)
static void C_ccall f_11051(C_word c,C_word *av) C_noret;
C_noret_decl(f_7000)
static void C_ccall f_7000(C_word c,C_word *av) C_noret;
C_noret_decl(f_5118)
static void C_ccall f_5118(C_word c,C_word *av) C_noret;
C_noret_decl(f_5115)
static void C_ccall f_5115(C_word c,C_word *av) C_noret;
C_noret_decl(f_7544)
static void C_ccall f_7544(C_word c,C_word *av) C_noret;
C_noret_decl(f_5111)
static void C_ccall f_5111(C_word c,C_word *av) C_noret;
C_noret_decl(f_8299)
static void C_ccall f_8299(C_word c,C_word *av) C_noret;
C_noret_decl(f_7547)
static void C_ccall f_7547(C_word c,C_word *av) C_noret;
C_noret_decl(f_11888)
static void C_ccall f_11888(C_word c,C_word *av) C_noret;
C_noret_decl(f_12912)
static void C_ccall f_12912(C_word c,C_word *av) C_noret;
C_noret_decl(f_5109)
static void C_ccall f_5109(C_word c,C_word *av) C_noret;
C_noret_decl(f_5102)
static void C_ccall f_5102(C_word c,C_word *av) C_noret;
C_noret_decl(f_5135)
static void C_fcall f_5135(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12918)
static void C_ccall f_12918(C_word c,C_word *av) C_noret;
C_noret_decl(f_5131)
static void C_fcall f_5131(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5134)
static void C_ccall f_5134(C_word c,C_word *av) C_noret;
C_noret_decl(f_7529)
static void C_ccall f_7529(C_word c,C_word *av) C_noret;
C_noret_decl(f_5457)
static void C_ccall f_5457(C_word c,C_word *av) C_noret;
C_noret_decl(f_7514)
static void C_ccall f_7514(C_word c,C_word *av) C_noret;
C_noret_decl(f_11870)
static void C_fcall f_11870(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12943)
static void C_fcall f_12943(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5476)
static void C_ccall f_5476(C_word c,C_word *av) C_noret;
C_noret_decl(f_15352)
static void C_ccall f_15352(C_word c,C_word *av) C_noret;
C_noret_decl(f_15356)
static void C_ccall f_15356(C_word c,C_word *av) C_noret;
C_noret_decl(f_11818)
static void C_ccall f_11818(C_word c,C_word *av) C_noret;
C_noret_decl(f_5463)
static void C_ccall f_5463(C_word c,C_word *av) C_noret;
C_noret_decl(f_12924)
static void C_ccall f_12924(C_word c,C_word *av) C_noret;
C_noret_decl(f_5466)
static void C_ccall f_5466(C_word c,C_word *av) C_noret;
C_noret_decl(f_5478)
static void C_ccall f_5478(C_word c,C_word *av) C_noret;
C_noret_decl(f_15899)
static void C_ccall f_15899(C_word c,C_word *av) C_noret;
C_noret_decl(f_12955)
static void C_fcall f_12955(C_word t0,C_word t1) C_noret;
C_noret_decl(f_16120)
static void C_ccall f_16120(C_word c,C_word *av) C_noret;
C_noret_decl(f_8301)
static void C_fcall f_8301(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12934)
static void C_fcall f_12934(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5494)
static void C_fcall f_5494(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_16116)
static void C_ccall f_16116(C_word c,C_word *av) C_noret;
C_noret_decl(f_5468)
static void C_ccall f_5468(C_word c,C_word *av) C_noret;
C_noret_decl(f_15876)
static void C_fcall f_15876(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_16114)
static void C_ccall f_16114(C_word c,C_word *av) C_noret;
C_noret_decl(f_5486)
static void C_ccall f_5486(C_word c,C_word *av) C_noret;
C_noret_decl(f_10259)
static void C_ccall f_10259(C_word c,C_word *av) C_noret;
C_noret_decl(f_15366)
static void C_ccall f_15366(C_word c,C_word *av) C_noret;
C_noret_decl(f_11802)
static void C_ccall f_11802(C_word c,C_word *av) C_noret;
C_noret_decl(f_16141)
static void C_ccall f_16141(C_word c,C_word *av) C_noret;
C_noret_decl(f_8326)
static void C_ccall f_8326(C_word c,C_word *av) C_noret;
C_noret_decl(f_15314)
static void C_ccall f_15314(C_word c,C_word *av) C_noret;
C_noret_decl(f_11855)
static void C_fcall f_11855(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7838)
static void C_ccall f_7838(C_word c,C_word *av) C_noret;
C_noret_decl(f_6963)
static void C_ccall f_6963(C_word c,C_word *av) C_noret;
C_noret_decl(f_15300)
static void C_ccall f_15300(C_word c,C_word *av) C_noret;
C_noret_decl(f_15308)
static void C_ccall f_15308(C_word c,C_word *av) C_noret;
C_noret_decl(f_11824)
static void C_ccall f_11824(C_word c,C_word *av) C_noret;
C_noret_decl(f_9316)
static void C_ccall f_9316(C_word c,C_word *av) C_noret;
C_noret_decl(f_9318)
static void C_fcall f_9318(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_16162)
static void C_ccall f_16162(C_word c,C_word *av) C_noret;
C_noret_decl(f_7813)
static void C_fcall f_7813(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6870)
static void C_ccall f_6870(C_word c,C_word *av) C_noret;
C_noret_decl(f_16156)
static void C_ccall f_16156(C_word c,C_word *av) C_noret;
C_noret_decl(f_6879)
static void C_ccall f_6879(C_word c,C_word *av) C_noret;
C_noret_decl(f_7804)
static void C_ccall f_7804(C_word c,C_word *av) C_noret;
C_noret_decl(f_6876)
static void C_ccall f_6876(C_word c,C_word *av) C_noret;
C_noret_decl(f_6873)
static void C_ccall f_6873(C_word c,C_word *av) C_noret;
C_noret_decl(f_16188)
static void C_ccall f_16188(C_word c,C_word *av) C_noret;
C_noret_decl(f_6860)
static void C_ccall f_6860(C_word c,C_word *av) C_noret;
C_noret_decl(f_16184)
static void C_ccall f_16184(C_word c,C_word *av) C_noret;
C_noret_decl(f_7874)
static void C_ccall f_7874(C_word c,C_word *av) C_noret;
C_noret_decl(f_10264)
static void C_fcall f_10264(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6851)
static void C_ccall f_6851(C_word c,C_word *av) C_noret;
C_noret_decl(f_16173)
static void C_ccall f_16173(C_word c,C_word *av) C_noret;
C_noret_decl(f_6855)
static void C_fcall f_6855(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10276)
static void C_fcall f_10276(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10274)
static void C_ccall f_10274(C_word c,C_word *av) C_noret;
C_noret_decl(f_16341)
static void C_ccall f_16341(C_word c,C_word *av) C_noret;
C_noret_decl(f_10240)
static void C_ccall f_10240(C_word c,C_word *av) C_noret;
C_noret_decl(f_9185)
static void C_fcall f_9185(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6910)
static void C_ccall f_6910(C_word c,C_word *av) C_noret;
C_noret_decl(f_11830)
static void C_fcall f_11830(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_16194)
static void C_ccall f_16194(C_word c,C_word *av) C_noret;
C_noret_decl(f_5518)
static void C_ccall f_5518(C_word c,C_word *av) C_noret;
C_noret_decl(f_10371)
static void C_ccall f_10371(C_word c,C_word *av) C_noret;
C_noret_decl(f_10377)
static void C_fcall f_10377(C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_5548)
static void C_ccall trf_5548(C_word c,C_word *av) C_noret;
static void C_ccall trf_5548(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5548(t0,t1,t2);}

C_noret_decl(trf_6817)
static void C_ccall trf_6817(C_word c,C_word *av) C_noret;
static void C_ccall trf_6817(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6817(t0,t1,t2);}

C_noret_decl(trf_12115)
static void C_ccall trf_12115(C_word c,C_word *av) C_noret;
static void C_ccall trf_12115(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12115(t0,t1);}

C_noret_decl(trf_6957)
static void C_ccall trf_6957(C_word c,C_word *av) C_noret;
static void C_ccall trf_6957(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6957(t0,t1);}

C_noret_decl(trf_10215)
static void C_ccall trf_10215(C_word c,C_word *av) C_noret;
static void C_ccall trf_10215(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10215(t0,t1,t2);}

C_noret_decl(trf_12177)
static void C_ccall trf_12177(C_word c,C_word *av) C_noret;
static void C_ccall trf_12177(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12177(t0,t1);}

C_noret_decl(trf_6920)
static void C_ccall trf_6920(C_word c,C_word *av) C_noret;
static void C_ccall trf_6920(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6920(t0,t1);}

C_noret_decl(trf_5570)
static void C_ccall trf_5570(C_word c,C_word *av) C_noret;
static void C_ccall trf_5570(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5570(t0,t1);}

C_noret_decl(trf_5577)
static void C_ccall trf_5577(C_word c,C_word *av) C_noret;
static void C_ccall trf_5577(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5577(t0,t1);}

C_noret_decl(trf_12159)
static void C_ccall trf_12159(C_word c,C_word *av) C_noret;
static void C_ccall trf_12159(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12159(t0,t1);}

C_noret_decl(trf_14280)
static void C_ccall trf_14280(C_word c,C_word *av) C_noret;
static void C_ccall trf_14280(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_14280(t0,t1);}

C_noret_decl(trf_10323)
static void C_ccall trf_10323(C_word c,C_word *av) C_noret;
static void C_ccall trf_10323(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10323(t0,t1,t2,t3);}

C_noret_decl(trf_14298)
static void C_ccall trf_14298(C_word c,C_word *av) C_noret;
static void C_ccall trf_14298(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_14298(t0,t1);}

C_noret_decl(trf_4897)
static void C_ccall trf_4897(C_word c,C_word *av) C_noret;
static void C_ccall trf_4897(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4897(t0,t1);}

C_noret_decl(trf_14685)
static void C_ccall trf_14685(C_word c,C_word *av) C_noret;
static void C_ccall trf_14685(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_14685(t0,t1);}

C_noret_decl(trf_12284)
static void C_ccall trf_12284(C_word c,C_word *av) C_noret;
static void C_ccall trf_12284(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12284(t0,t1);}

C_noret_decl(trf_8566)
static void C_ccall trf_8566(C_word c,C_word *av) C_noret;
static void C_ccall trf_8566(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8566(t0,t1,t2);}

C_noret_decl(trf_9829)
static void C_ccall trf_9829(C_word c,C_word *av) C_noret;
static void C_ccall trf_9829(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9829(t0,t1,t2);}

C_noret_decl(trf_6994)
static void C_ccall trf_6994(C_word c,C_word *av) C_noret;
static void C_ccall trf_6994(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6994(t0,t1);}

C_noret_decl(trf_8407)
static void C_ccall trf_8407(C_word c,C_word *av) C_noret;
static void C_ccall trf_8407(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8407(t0,t1);}

C_noret_decl(trf_14259)
static void C_ccall trf_14259(C_word c,C_word *av) C_noret;
static void C_ccall trf_14259(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_14259(t0,t1);}

C_noret_decl(trf_12251)
static void C_ccall trf_12251(C_word c,C_word *av) C_noret;
static void C_ccall trf_12251(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12251(t0,t1,t2);}

C_noret_decl(trf_8435)
static void C_ccall trf_8435(C_word c,C_word *av) C_noret;
static void C_ccall trf_8435(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8435(t0,t1,t2);}

C_noret_decl(trf_12204)
static void C_ccall trf_12204(C_word c,C_word *av) C_noret;
static void C_ccall trf_12204(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12204(t0,t1);}

C_noret_decl(trf_14717)
static void C_ccall trf_14717(C_word c,C_word *av) C_noret;
static void C_ccall trf_14717(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_14717(t0,t1);}

C_noret_decl(trf_15595)
static void C_ccall trf_15595(C_word c,C_word *av) C_noret;
static void C_ccall trf_15595(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_15595(t0,t1,t2);}

C_noret_decl(trf_14757)
static void C_ccall trf_14757(C_word c,C_word *av) C_noret;
static void C_ccall trf_14757(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_14757(t0,t1,t2);}

C_noret_decl(trf_14749)
static void C_ccall trf_14749(C_word c,C_word *av) C_noret;
static void C_ccall trf_14749(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_14749(t0,t1);}

C_noret_decl(trf_10783)
static void C_ccall trf_10783(C_word c,C_word *av) C_noret;
static void C_ccall trf_10783(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10783(t0,t1);}

C_noret_decl(trf_14320)
static void C_ccall trf_14320(C_word c,C_word *av) C_noret;
static void C_ccall trf_14320(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_14320(t0,t1);}

C_noret_decl(trf_5809)
static void C_ccall trf_5809(C_word c,C_word *av) C_noret;
static void C_ccall trf_5809(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5809(t0,t1,t2,t3);}

C_noret_decl(trf_15629)
static void C_ccall trf_15629(C_word c,C_word *av) C_noret;
static void C_ccall trf_15629(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_15629(t0,t1,t2);}

C_noret_decl(trf_15751)
static void C_ccall trf_15751(C_word c,C_word *av) C_noret;
static void C_ccall trf_15751(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_15751(t0,t1,t2,t3);}

C_noret_decl(trf_6054)
static void C_ccall trf_6054(C_word c,C_word *av) C_noret;
static void C_ccall trf_6054(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6054(t0,t1,t2);}

C_noret_decl(trf_10725)
static void C_ccall trf_10725(C_word c,C_word *av) C_noret;
static void C_ccall trf_10725(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10725(t0,t1,t2);}

C_noret_decl(trf_11792)
static void C_ccall trf_11792(C_word c,C_word *av) C_noret;
static void C_ccall trf_11792(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11792(t0,t1,t2);}

C_noret_decl(trf_6078)
static void C_ccall trf_6078(C_word c,C_word *av) C_noret;
static void C_ccall trf_6078(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6078(t0,t1);}

C_noret_decl(trf_5342)
static void C_ccall trf_5342(C_word c,C_word *av) C_noret;
static void C_ccall trf_5342(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5342(t0,t1,t2,t3);}

C_noret_decl(trf_7616)
static void C_ccall trf_7616(C_word c,C_word *av) C_noret;
static void C_ccall trf_7616(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7616(t0,t1,t2);}

C_noret_decl(trf_7667)
static void C_ccall trf_7667(C_word c,C_word *av) C_noret;
static void C_ccall trf_7667(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7667(t0,t1);}

C_noret_decl(trf_5376)
static void C_ccall trf_5376(C_word c,C_word *av) C_noret;
static void C_ccall trf_5376(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5376(t0,t1,t2,t3);}

C_noret_decl(trf_10601)
static void C_ccall trf_10601(C_word c,C_word *av) C_noret;
static void C_ccall trf_10601(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10601(t0,t1,t2);}

C_noret_decl(trf_11638)
static void C_ccall trf_11638(C_word c,C_word *av) C_noret;
static void C_ccall trf_11638(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11638(t0,t1,t2);}

C_noret_decl(trf_15068)
static void C_ccall trf_15068(C_word c,C_word *av) C_noret;
static void C_ccall trf_15068(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_15068(t0,t1,t2);}

C_noret_decl(trf_15042)
static void C_ccall trf_15042(C_word c,C_word *av) C_noret;
static void C_ccall trf_15042(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_15042(t0,t1);}

C_noret_decl(trf_9446)
static void C_ccall trf_9446(C_word c,C_word *av) C_noret;
static void C_ccall trf_9446(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9446(t0,t1,t2);}

C_noret_decl(trf_9261)
static void C_ccall trf_9261(C_word c,C_word *av) C_noret;
static void C_ccall trf_9261(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9261(t0,t1,t2);}

C_noret_decl(trf_15003)
static void C_ccall trf_15003(C_word c,C_word *av) C_noret;
static void C_ccall trf_15003(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_15003(t0,t1,t2);}

C_noret_decl(trf_8103)
static void C_ccall trf_8103(C_word c,C_word *av) C_noret;
static void C_ccall trf_8103(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8103(t0,t1,t2);}

C_noret_decl(trf_11953)
static void C_ccall trf_11953(C_word c,C_word *av) C_noret;
static void C_ccall trf_11953(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11953(t0,t1);}

C_noret_decl(trf_11413)
static void C_ccall trf_11413(C_word c,C_word *av) C_noret;
static void C_ccall trf_11413(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11413(t0,t1);}

C_noret_decl(trf_9426)
static void C_ccall trf_9426(C_word c,C_word *av) C_noret;
static void C_ccall trf_9426(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9426(t0,t1);}

C_noret_decl(trf_9557)
static void C_ccall trf_9557(C_word c,C_word *av) C_noret;
static void C_ccall trf_9557(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9557(t0,t1,t2);}

C_noret_decl(trf_11454)
static void C_ccall trf_11454(C_word c,C_word *av) C_noret;
static void C_ccall trf_11454(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11454(t0,t1);}

C_noret_decl(trf_8837)
static void C_ccall trf_8837(C_word c,C_word *av) C_noret;
static void C_ccall trf_8837(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8837(t0,t1,t2);}

C_noret_decl(trf_5051)
static void C_ccall trf_5051(C_word c,C_word *av) C_noret;
static void C_ccall trf_5051(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5051(t0,t1,t2);}

C_noret_decl(trf_6485)
static void C_ccall trf_6485(C_word c,C_word *av) C_noret;
static void C_ccall trf_6485(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6485(t0,t1,t2);}

C_noret_decl(trf_8822)
static void C_ccall trf_8822(C_word c,C_word *av) C_noret;
static void C_ccall trf_8822(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8822(t0,t1);}

C_noret_decl(trf_4962)
static void C_ccall trf_4962(C_word c,C_word *av) C_noret;
static void C_ccall trf_4962(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4962(t0,t1,t2);}

C_noret_decl(trf_6462)
static void C_ccall trf_6462(C_word c,C_word *av) C_noret;
static void C_ccall trf_6462(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6462(t0,t1,t2);}

C_noret_decl(trf_8089)
static void C_ccall trf_8089(C_word c,C_word *av) C_noret;
static void C_ccall trf_8089(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8089(t0,t1);}

C_noret_decl(trf_9062)
static void C_ccall trf_9062(C_word c,C_word *av) C_noret;
static void C_ccall trf_9062(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9062(t0,t1,t2);}

C_noret_decl(trf_11029)
static void C_ccall trf_11029(C_word c,C_word *av) C_noret;
static void C_ccall trf_11029(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11029(t0,t1,t2,t3);}

C_noret_decl(trf_6753)
static void C_ccall trf_6753(C_word c,C_word *av) C_noret;
static void C_ccall trf_6753(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6753(t0,t1,t2);}

C_noret_decl(trf_9506)
static void C_ccall trf_9506(C_word c,C_word *av) C_noret;
static void C_ccall trf_9506(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9506(t0,t1,t2);}

C_noret_decl(trf_5019)
static void C_ccall trf_5019(C_word c,C_word *av) C_noret;
static void C_ccall trf_5019(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5019(t0,t1,t2);}

C_noret_decl(trf_5017)
static void C_ccall trf_5017(C_word c,C_word *av) C_noret;
static void C_ccall trf_5017(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5017(t0,t1,t2);}

C_noret_decl(trf_6749)
static void C_ccall trf_6749(C_word c,C_word *av) C_noret;
static void C_ccall trf_6749(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6749(t0,t1);}

C_noret_decl(trf_7151)
static void C_ccall trf_7151(C_word c,C_word *av) C_noret;
static void C_ccall trf_7151(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7151(t0,t1);}

C_noret_decl(trf_6169)
static void C_ccall trf_6169(C_word c,C_word *av) C_noret;
static void C_ccall trf_6169(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6169(t0,t1);}

C_noret_decl(trf_9666)
static void C_ccall trf_9666(C_word c,C_word *av) C_noret;
static void C_ccall trf_9666(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9666(t0,t1,t2);}

C_noret_decl(trf_6210)
static void C_ccall trf_6210(C_word c,C_word *av) C_noret;
static void C_ccall trf_6210(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6210(t0,t1,t2);}

C_noret_decl(trf_4939)
static void C_ccall trf_4939(C_word c,C_word *av) C_noret;
static void C_ccall trf_4939(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4939(t0,t1,t2);}

C_noret_decl(trf_10088)
static void C_ccall trf_10088(C_word c,C_word *av) C_noret;
static void C_ccall trf_10088(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10088(t0,t1,t2);}

C_noret_decl(trf_5292)
static void C_ccall trf_5292(C_word c,C_word *av) C_noret;
static void C_ccall trf_5292(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5292(t0,t1,t2,t3);}

C_noret_decl(trf_13933)
static void C_ccall trf_13933(C_word c,C_word *av) C_noret;
static void C_ccall trf_13933(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_13933(t0,t1);}

C_noret_decl(trf_10055)
static void C_ccall trf_10055(C_word c,C_word *av) C_noret;
static void C_ccall trf_10055(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10055(t0,t1,t2);}

C_noret_decl(trf_9014)
static void C_ccall trf_9014(C_word c,C_word *av) C_noret;
static void C_ccall trf_9014(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9014(t0,t1,t2,t3);}

C_noret_decl(trf_8498)
static void C_ccall trf_8498(C_word c,C_word *av) C_noret;
static void C_ccall trf_8498(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8498(t0,t1,t2);}

C_noret_decl(trf_5271)
static void C_ccall trf_5271(C_word c,C_word *av) C_noret;
static void C_ccall trf_5271(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5271(t0,t1);}

C_noret_decl(trf_8732)
static void C_ccall trf_8732(C_word c,C_word *av) C_noret;
static void C_ccall trf_8732(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8732(t0,t1,t2);}

C_noret_decl(trf_7779)
static void C_ccall trf_7779(C_word c,C_word *av) C_noret;
static void C_ccall trf_7779(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7779(t0,t1,t2);}

C_noret_decl(trf_5950)
static void C_ccall trf_5950(C_word c,C_word *av) C_noret;
static void C_ccall trf_5950(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5950(t0,t1);}

C_noret_decl(trf_7752)
static void C_ccall trf_7752(C_word c,C_word *av) C_noret;
static void C_ccall trf_7752(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7752(t0,t1,t2);}

C_noret_decl(trf_15906)
static void C_ccall trf_15906(C_word c,C_word *av) C_noret;
static void C_ccall trf_15906(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_15906(t0,t1);}

C_noret_decl(trf_14805)
static void C_ccall trf_14805(C_word c,C_word *av) C_noret;
static void C_ccall trf_14805(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_14805(t0,t1,t2,t3);}

C_noret_decl(trf_8894)
static void C_ccall trf_8894(C_word c,C_word *av) C_noret;
static void C_ccall trf_8894(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8894(t0,t1,t2);}

C_noret_decl(trf_13409)
static void C_ccall trf_13409(C_word c,C_word *av) C_noret;
static void C_ccall trf_13409(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13409(t0,t1,t2);}

C_noret_decl(trf_5233)
static void C_ccall trf_5233(C_word c,C_word *av) C_noret;
static void C_ccall trf_5233(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5233(t0,t1,t2);}

C_noret_decl(trf_14839)
static void C_ccall trf_14839(C_word c,C_word *av) C_noret;
static void C_ccall trf_14839(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_14839(t0,t1);}

C_noret_decl(trf_15843)
static void C_ccall trf_15843(C_word c,C_word *av) C_noret;
static void C_ccall trf_15843(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_15843(t0,t1,t2);}

C_noret_decl(trf_15982)
static void C_ccall trf_15982(C_word c,C_word *av) C_noret;
static void C_ccall trf_15982(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_15982(t0,t1);}

C_noret_decl(trf_15804)
static void C_ccall trf_15804(C_word c,C_word *av) C_noret;
static void C_ccall trf_15804(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_15804(t0,t1,t2);}

C_noret_decl(trf_15179)
static void C_ccall trf_15179(C_word c,C_word *av) C_noret;
static void C_ccall trf_15179(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_15179(t0,t1);}

C_noret_decl(trf_12887)
static void C_ccall trf_12887(C_word c,C_word *av) C_noret;
static void C_ccall trf_12887(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12887(t0,t1,t2);}

C_noret_decl(trf_10530)
static void C_ccall trf_10530(C_word c,C_word *av) C_noret;
static void C_ccall trf_10530(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10530(t0,t1,t2);}

C_noret_decl(trf_11993)
static void C_ccall trf_11993(C_word c,C_word *av) C_noret;
static void C_ccall trf_11993(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11993(t0,t1);}

C_noret_decl(trf_9761)
static void C_ccall trf_9761(C_word c,C_word *av) C_noret;
static void C_ccall trf_9761(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9761(t0,t1);}

C_noret_decl(trf_6672)
static void C_ccall trf_6672(C_word c,C_word *av) C_noret;
static void C_ccall trf_6672(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6672(t0,t1);}

C_noret_decl(trf_14184)
static void C_ccall trf_14184(C_word c,C_word *av) C_noret;
static void C_ccall trf_14184(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_14184(t0,t1);}

C_noret_decl(trf_10990)
static void C_ccall trf_10990(C_word c,C_word *av) C_noret;
static void C_ccall trf_10990(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10990(t0,t1,t2,t3);}

C_noret_decl(trf_10664)
static void C_ccall trf_10664(C_word c,C_word *av) C_noret;
static void C_ccall trf_10664(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10664(t0,t1,t2);}

C_noret_decl(trf_16233)
static void C_ccall trf_16233(C_word c,C_word *av) C_noret;
static void C_ccall trf_16233(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_16233(t0,t1,t2);}

C_noret_decl(trf_14109)
static void C_ccall trf_14109(C_word c,C_word *av) C_noret;
static void C_ccall trf_14109(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_14109(t0,t1);}

C_noret_decl(trf_10909)
static void C_ccall trf_10909(C_word c,C_word *av) C_noret;
static void C_ccall trf_10909(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10909(t0,t1);}

C_noret_decl(trf_13399)
static void C_ccall trf_13399(C_word c,C_word *av) C_noret;
static void C_ccall trf_13399(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_13399(t0,t1);}

C_noret_decl(trf_14989)
static void C_ccall trf_14989(C_word c,C_word *av) C_noret;
static void C_ccall trf_14989(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_14989(t0,t1,t2,t3);}

C_noret_decl(trf_13442)
static void C_ccall trf_13442(C_word c,C_word *av) C_noret;
static void C_ccall trf_13442(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_13442(t0,t1);}

C_noret_decl(trf_8602)
static void C_ccall trf_8602(C_word c,C_word *av) C_noret;
static void C_ccall trf_8602(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8602(t0,t1);}

C_noret_decl(trf_14991)
static void C_ccall trf_14991(C_word c,C_word *av) C_noret;
static void C_ccall trf_14991(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_14991(t0,t1,t2);}

C_noret_decl(trf_10956)
static void C_ccall trf_10956(C_word c,C_word *av) C_noret;
static void C_ccall trf_10956(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10956(t0,t1,t2,t3);}

C_noret_decl(trf_12011)
static void C_ccall trf_12011(C_word c,C_word *av) C_noret;
static void C_ccall trf_12011(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12011(t0,t1);}

C_noret_decl(trf_7072)
static void C_ccall trf_7072(C_word c,C_word *av) C_noret;
static void C_ccall trf_7072(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7072(t0,t1);}

C_noret_decl(trf_13387)
static void C_ccall trf_13387(C_word c,C_word *av) C_noret;
static void C_ccall trf_13387(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_13387(t0,t1);}

C_noret_decl(trf_7048)
static void C_ccall trf_7048(C_word c,C_word *av) C_noret;
static void C_ccall trf_7048(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7048(t0,t1,t2);}

C_noret_decl(trf_10820)
static void C_ccall trf_10820(C_word c,C_word *av) C_noret;
static void C_ccall trf_10820(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10820(t0,t1);}

C_noret_decl(trf_5153)
static void C_ccall trf_5153(C_word c,C_word *av) C_noret;
static void C_ccall trf_5153(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5153(t0,t1,t2);}

C_noret_decl(trf_11202)
static void C_ccall trf_11202(C_word c,C_word *av) C_noret;
static void C_ccall trf_11202(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11202(t0,t1);}

C_noret_decl(trf_12088)
static void C_ccall trf_12088(C_word c,C_word *av) C_noret;
static void C_ccall trf_12088(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12088(t0,t1);}

C_noret_decl(trf_10167)
static void C_ccall trf_10167(C_word c,C_word *av) C_noret;
static void C_ccall trf_10167(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10167(t0,t1,t2,t3);}

C_noret_decl(trf_8190)
static void C_ccall trf_8190(C_word c,C_word *av) C_noret;
static void C_ccall trf_8190(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8190(t0,t1,t2);}

C_noret_decl(trf_12035)
static void C_ccall trf_12035(C_word c,C_word *av) C_noret;
static void C_ccall trf_12035(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12035(t0,t1);}

C_noret_decl(trf_7939)
static void C_ccall trf_7939(C_word c,C_word *av) C_noret;
static void C_ccall trf_7939(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_7939(t0,t1,t2,t3,t4);}

C_noret_decl(trf_14693)
static void C_ccall trf_14693(C_word c,C_word *av) C_noret;
static void C_ccall trf_14693(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_14693(t0,t1,t2);}

C_noret_decl(trf_10100)
static void C_ccall trf_10100(C_word c,C_word *av) C_noret;
static void C_ccall trf_10100(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10100(t0,t1,t2);}

C_noret_decl(trf_6508)
static void C_ccall trf_6508(C_word c,C_word *av) C_noret;
static void C_ccall trf_6508(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6508(t0,t1,t2);}

C_noret_decl(trf_5716)
static void C_ccall trf_5716(C_word c,C_word *av) C_noret;
static void C_ccall trf_5716(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5716(t0,t1);}

C_noret_decl(trf_12061)
static void C_ccall trf_12061(C_word c,C_word *av) C_noret;
static void C_ccall trf_12061(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12061(t0,t1);}

C_noret_decl(trf_9884)
static void C_ccall trf_9884(C_word c,C_word *av) C_noret;
static void C_ccall trf_9884(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9884(t0,t1,t2,t3);}

C_noret_decl(trf_9374)
static void C_ccall trf_9374(C_word c,C_word *av) C_noret;
static void C_ccall trf_9374(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9374(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5763)
static void C_ccall trf_5763(C_word c,C_word *av) C_noret;
static void C_ccall trf_5763(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5763(t0,t1,t2);}

C_noret_decl(trf_12967)
static void C_ccall trf_12967(C_word c,C_word *av) C_noret;
static void C_ccall trf_12967(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12967(t0,t1);}

C_noret_decl(trf_11069)
static void C_ccall trf_11069(C_word c,C_word *av) C_noret;
static void C_ccall trf_11069(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11069(t0,t1,t2,t3);}

C_noret_decl(trf_12977)
static void C_ccall trf_12977(C_word c,C_word *av) C_noret;
static void C_ccall trf_12977(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12977(t0,t1,t2);}

C_noret_decl(trf_13010)
static void C_ccall trf_13010(C_word c,C_word *av) C_noret;
static void C_ccall trf_13010(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_13010(t0,t1);}

C_noret_decl(trf_15224)
static void C_ccall trf_15224(C_word c,C_word *av) C_noret;
static void C_ccall trf_15224(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_15224(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5135)
static void C_ccall trf_5135(C_word c,C_word *av) C_noret;
static void C_ccall trf_5135(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5135(t0,t1,t2);}

C_noret_decl(trf_5131)
static void C_ccall trf_5131(C_word c,C_word *av) C_noret;
static void C_ccall trf_5131(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5131(t0,t1);}

C_noret_decl(trf_11870)
static void C_ccall trf_11870(C_word c,C_word *av) C_noret;
static void C_ccall trf_11870(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11870(t0,t1);}

C_noret_decl(trf_12943)
static void C_ccall trf_12943(C_word c,C_word *av) C_noret;
static void C_ccall trf_12943(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12943(t0,t1);}

C_noret_decl(trf_12955)
static void C_ccall trf_12955(C_word c,C_word *av) C_noret;
static void C_ccall trf_12955(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12955(t0,t1);}

C_noret_decl(trf_8301)
static void C_ccall trf_8301(C_word c,C_word *av) C_noret;
static void C_ccall trf_8301(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8301(t0,t1,t2);}

C_noret_decl(trf_12934)
static void C_ccall trf_12934(C_word c,C_word *av) C_noret;
static void C_ccall trf_12934(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12934(t0,t1);}

C_noret_decl(trf_5494)
static void C_ccall trf_5494(C_word c,C_word *av) C_noret;
static void C_ccall trf_5494(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5494(t0,t1,t2,t3);}

C_noret_decl(trf_15876)
static void C_ccall trf_15876(C_word c,C_word *av) C_noret;
static void C_ccall trf_15876(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_15876(t0,t1,t2);}

C_noret_decl(trf_11855)
static void C_ccall trf_11855(C_word c,C_word *av) C_noret;
static void C_ccall trf_11855(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11855(t0,t1);}

C_noret_decl(trf_9318)
static void C_ccall trf_9318(C_word c,C_word *av) C_noret;
static void C_ccall trf_9318(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9318(t0,t1,t2);}

C_noret_decl(trf_7813)
static void C_ccall trf_7813(C_word c,C_word *av) C_noret;
static void C_ccall trf_7813(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7813(t0,t1,t2);}

C_noret_decl(trf_10264)
static void C_ccall trf_10264(C_word c,C_word *av) C_noret;
static void C_ccall trf_10264(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10264(t0,t1,t2);}

C_noret_decl(trf_6855)
static void C_ccall trf_6855(C_word c,C_word *av) C_noret;
static void C_ccall trf_6855(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6855(t0,t1);}

C_noret_decl(trf_10276)
static void C_ccall trf_10276(C_word c,C_word *av) C_noret;
static void C_ccall trf_10276(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10276(t0,t1,t2);}

C_noret_decl(trf_9185)
static void C_ccall trf_9185(C_word c,C_word *av) C_noret;
static void C_ccall trf_9185(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9185(t0,t1,t2,t3);}

C_noret_decl(trf_11830)
static void C_ccall trf_11830(C_word c,C_word *av) C_noret;
static void C_ccall trf_11830(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11830(t0,t1,t2);}

C_noret_decl(trf_10377)
static void C_ccall trf_10377(C_word c,C_word *av) C_noret;
static void C_ccall trf_10377(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10377(t0,t1,t2);}

/* k5544 in c-ify-string in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5546,2,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5548,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_5548(t5,((C_word*)t0)[2],t1);}

/* loop in k5544 in c-ify-string in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_5548(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_5548,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[68];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=t3;
t5=C_fix(C_character_code(t4));
t6=t5;
t7=C_fixnum_lessp(t6,C_fix(32));
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5570,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t6,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t7)){
t9=t8;
f_5570(t9,t7);}
else{
t9=C_fixnum_greater_or_equal_p(t6,C_fix(127));
if(C_truep(t9)){
t10=t8;
f_5570(t10,t9);}
else{
t10=C_u_i_memq(t4,lf[75]);
t11=t8;
f_5570(t11,t10);}}}}

/* k15389 in call-info in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_15391,2,av);}
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

/* k5540 in c-ify-string in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5542,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,C_make_character(34),t1);
/* list->string */
t3=*((C_word*)lf[67]+1);{
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

/* k6813 in k6797 in k6794 in a6785 in display-line-number-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6815(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6815,2,av);}
/* support.scm:431: ##sys#print */
t2=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* map-loop740 in k6797 in k6794 in a6785 in display-line-number-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_6817(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6817,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
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

/* k12113 in k12086 in k12059 in k12033 in k11991 in k11868 in k11853 in repeat in a11823 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_12115(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_12115,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12118,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1083: gensym */
t3=*((C_word*)lf[110]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[380]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,lf[379],((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_eqp(((C_word*)t0)[4],lf[381]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12159,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;
f_12159(t5,t3);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[401]);
if(C_truep(t5)){
t6=t4;
f_12159(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[402]);
t7=t4;
f_12159(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[4],lf[403])));}}}}}

/* ##compiler#call-info in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15384(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_15384,4,av);}
a=C_alloc(4);
t4=C_i_cdr(t2);
t5=C_i_pairp(t4);
t6=(C_truep(t5)?C_i_cadr(t2):C_SCHEME_FALSE);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15391,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t6)){
if(C_truep(C_i_listp(t6))){
t8=C_i_car(t6);
t9=C_i_cadr(t6);
/* support.scm:1489: conc */
t10=*((C_word*)lf[507]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=lf[514];
av2[3]=t8;
av2[4]=lf[515];
av2[5]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(6,av2);}}
else{
t8=t3;
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}
else{
t8=t3;
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* k10389 in rec in tree-copy in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10391(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10391,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10395,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* support.scm:760: rec */
t6=((C_word*)((C_word*)t0)[4])[1];
f_10377(t6,t3,t5);}

/* k10393 in k10389 in rec in tree-copy in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10395(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10395,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##compiler#c-ify-string in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5530(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5530,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5542,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5546,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* string->list */
t5=*((C_word*)lf[71]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k6880 in k6877 in k6874 in k6871 in k6868 in a6859 in k6853 in display-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6882,2,av);}
/* support.scm:497: newline */
t2=*((C_word*)lf[15]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##compiler#print-usage in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16307(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_16307,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16311,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1672: print-version */
t3=*((C_word*)lf[558]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##compiler#print-debug-options in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_16319,2,av);}
/* support.scm:1801: display */
t2=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[564];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k12160 in k12157 in k12113 in k12086 in k12059 in k12033 in k11991 in k11868 in k11853 in repeat in a11823 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_12162(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12162,2,av);}
a=C_alloc(26);
t2=t1;
t3=C_a_i_list(&a,2,t2,((C_word*)t0)[2]);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12177,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[353]+1))){
t7=t6;
f_12177(t7,C_a_i_list(&a,2,lf[382],t2));}
else{
t7=C_a_i_list(&a,2,lf[383],t2);
t8=t6;
f_12177(t8,C_a_i_list(&a,2,lf[382],t7));}}

/* k12116 in k12113 in k12086 in k12059 in k12033 in k11991 in k11868 in k11853 in repeat in a11823 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_12118(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12118,2,av);}
a=C_alloc(42);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[379],t1);
t5=C_a_i_list(&a,2,lf[97],C_SCHEME_FALSE);
t6=C_a_i_list(&a,4,lf[225],t1,t4,t5);
t7=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_list(&a,3,lf[109],t3,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k6955 in k6918 in k6871 in k6868 in a6859 in k6853 in display-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_6957(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_6957,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=*((C_word*)lf[16]+1);
t3=*((C_word*)lf[16]+1);
t4=C_i_check_port_2(*((C_word*)lf[16]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[17]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6963,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:492: ##sys#print */
t6=*((C_word*)lf[19]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[167];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6994,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=C_eqp(((C_word*)((C_word*)t0)[5])[1],lf[169]);
t4=t2;
f_6994(t4,C_i_not(t3));}
else{
t3=t2;
f_6994(t3,C_SCHEME_FALSE);}}}

/* k16330 in a16324 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_16332,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16335,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[4];
t4=C_slot(t3,C_fix(1));
/* support.scm:512: ##sys#print */
t5=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k16333 in k16330 in a16324 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_16335,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16338,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:512: ##sys#write-char-0 */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* map-loop1933 in a10049 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_10215(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10215,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10240,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:742: g1939 */
t5=((C_word*)t0)[4];
f_10055(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a16324 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16325(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_16325,4,av);}
a=C_alloc(5);
t4=t3;
t5=C_i_check_port_2(t4,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[24]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16332,a[2]=t1,a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:512: ##sys#print */
t7=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[565];
av2[3]=C_SCHEME_FALSE;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k16336 in k16333 in k16330 in a16324 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16338(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_16338,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16341,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=C_slot(t3,C_fix(2));
/* support.scm:512: ##sys#print */
t5=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k12175 in k12160 in k12157 in k12113 in k12086 in k12059 in k12033 in k11991 in k11868 in k11853 in repeat in a11823 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_12177(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,0,1)))){
C_save_and_reclaim_args((void *)trf_12177,2,t0,t1);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,lf[97],C_SCHEME_FALSE);
t3=C_a_i_list(&a,4,lf[225],((C_word*)t0)[2],t1,t2);
t4=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[109],((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5583 in k5579 in k5575 in k5568 in loop in k5544 in c-ify-string in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5585,2,av);}
/* support.scm:193: append */
t2=*((C_word*)lf[69]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[70];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k5579 in k5575 in k5568 in loop in k5544 in c-ify-string in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5581(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5581,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
t5=C_u_i_cdr(t4);
/* support.scm:198: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_5548(t6,t3,t5);}

/* k9171 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9173(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9173,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9177,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[3]);
t5=C_u_i_cdr(((C_word*)t0)[4]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9185,a[2]=((C_word*)t0)[5],a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_9185(t9,t3,t4,t5);}

/* k6924 in k6918 in k6871 in k6868 in a6859 in k6853 in display-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6926(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6926,2,av);}
a=C_alloc(3);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_slot(t2,C_fix(1));
t4=((C_word*)((C_word*)t0)[2])[1];
t5=C_slot(t4,C_fix(2));
t6=C_a_i_cons(&a,2,t3,t5);
/* support.scm:490: ##sys#print */
t7=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=((C_word*)t0)[3];
av2[2]=t6;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k9175 in k9171 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_9177,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[269],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6918 in k6871 in k6868 in a6859 in k6853 in display-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_6920(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_6920,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=*((C_word*)lf[16]+1);
t3=*((C_word*)lf[16]+1);
t4=C_i_check_port_2(*((C_word*)lf[16]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[17]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6926,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:490: ##sys#print */
t6=*((C_word*)lf[19]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[166];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6957,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=C_eqp(((C_word*)((C_word*)t0)[2])[1],lf[169]);
t4=t2;
f_6957(t4,C_i_not(t3));}
else{
t3=t2;
f_6957(t3,C_SCHEME_FALSE);}}}

/* k5568 in loop in k5544 in c-ify-string in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_5570(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5570,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5577,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[5],C_fix(8)))){
t3=t2;
f_5577(t3,lf[73]);}
else{
t3=C_fixnum_lessp(((C_word*)t0)[5],C_fix(64));
t4=t2;
f_5577(t4,(C_truep(t3)?lf[74]:C_SCHEME_END_OF_LIST));}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5611,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* support.scm:199: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5548(t5,t2,t4);}}

/* k5575 in k5568 in loop in k5544 in c-ify-string in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_5577(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_5577,2,t0,t1);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5581,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5591,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm:197: number->string */
t5=*((C_word*)lf[72]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(8);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k12157 in k12113 in k12086 in k12059 in k12033 in k11991 in k11868 in k11853 in repeat in a11823 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_12159(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_12159,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12162,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1091: gensym */
t3=*((C_word*)lf[110]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[384]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12204,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_12204(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[399]);
t5=t3;
f_12204(t5,(C_truep(t4)?t4:C_eqp(((C_word*)t0)[4],lf[400])));}}}

/* k9972 in k9980 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void *)f_9974,2,av);}
a=C_alloc(8);
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[2];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[211],lf[246],((C_word*)t0)[3],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k14278 in k14257 in k14182 in k14107 in k14083 in foreign-type->scrutiny-type in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_14280(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_14280,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=lf[477];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[404]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[3],lf[405]));
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[478];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(((C_word*)t0)[3],lf[384]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14298,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_14298(t6,t4);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[399]);
t7=t5;
f_14298(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[3],lf[400])));}}}}

/* k10299 in map-loop2039 in k10257 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10301(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10301,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10276(t6,((C_word*)t0)[5],t5);}

/* k6800 in k6797 in k6794 in a6785 in display-line-number-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6802,2,av);}
/* support.scm:431: ##sys#write-char-0 */
t2=*((C_word*)lf[18]+1);{
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

/* map-loop1852 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_10323(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10323,4,t0,t1,t2,t3);}
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

/* k14296 in k14278 in k14257 in k14182 in k14107 in k14083 in foreign-type->scrutiny-type in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_14298(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_14298,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=lf[479];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[385]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[385];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[4];
t4=C_u_i_car(t3);
t5=C_eqp(t4,lf[387]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14320,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_14320(t7,t5);}
else{
t7=C_eqp(t4,lf[396]);
if(C_truep(t7)){
t8=t6;
f_14320(t8,t7);}
else{
t8=C_eqp(t4,lf[397]);
t9=t6;
f_14320(t9,(C_truep(t8)?t8:C_eqp(t4,lf[378])));}}}
else{
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[240];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}}

/* k12356 in k12282 in k12245 in k12202 in k12157 in k12113 in k12086 in k12059 in k12033 in k11991 in k11868 in k11853 in repeat in a11823 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 in ... */
static void C_ccall f_12358(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12358,2,av);}
a=C_alloc(42);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=(C_truep(*((C_word*)lf[353]+1))?t1:C_a_i_list(&a,2,lf[361],t1));
t5=C_a_i_list(&a,2,lf[97],C_SCHEME_FALSE);
t6=C_a_i_list(&a,4,lf[225],t1,t4,t5);
t7=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_list(&a,3,lf[109],t3,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* ##compiler#read/source-info in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_15942,3,av);}
/* support.scm:1578: ##sys#read */
t3=*((C_word*)lf[533]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=*((C_word*)lf[528]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* ##sys#user-read-hook in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_15948,4,av);}
a=C_alloc(4);
if(C_truep(C_i_char_equalp(C_make_character(62),t2))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15958,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* read-char/port */
t5=*((C_word*)lf[538]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* support.scm:1590: old-hook */
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k4890 in test-debugging-mode in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_4892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4892,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_pairp(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##compiler#debugging in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_4894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +17,c,3)))){
C_save_and_reclaim((void*)f_4894,c,av);}
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
t9=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4897,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t10=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4962,a[2]=t2,tmp=(C_word)a,a+=3,tmp));
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4981,a[2]=t1,a[3]=t8,a[4]=t2,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* support.scm:75: test-debugging-mode */
t12=*((C_word*)lf[11]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=t11;
av2[2]=t2;
av2[3]=*((C_word*)lf[1]+1);
((C_proc)(void*)(*((C_word*)t12+1)))(4,av2);}}

/* text in debugging in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_4897(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4897,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4903,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:64: with-output-to-string */
t3=*((C_word*)lf[23]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4859 in bomb in k4836 in k4833 in k4830 */
static void C_ccall f_4861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4861,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=*((C_word*)lf[4]+1);
av2[3]=t1;
av2[4]=t3;
C_apply(5,av2);}}

/* k8521 in map-loop1350 in k8405 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8523(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8523,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8498(t6,((C_word*)t0)[5],t5);}

/* k15675 in encodeable-literal? in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15677(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_15677,2,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_fixnump(((C_word*)t0)[3]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_flonump(((C_word*)t0)[3]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t4=C_slot(((C_word*)t0)[3],C_fix(1));
t5=C_i_string_length(t4);
t6=((C_word*)t0)[2];
t7=C_a_i_arithmetic_shift(&a,2,t5,C_fix(-24));
t8=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_u_i_zerop(t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
if(C_truep(C_byteblockp(((C_word*)t0)[3]))){
t4=((C_word*)t0)[3];
t5=stub3735(C_SCHEME_UNDEFINED,t4);
t6=((C_word*)t0)[2];
t7=C_a_i_arithmetic_shift(&a,2,t5,C_fix(-24));
t8=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_u_i_zerop(t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t4=((C_word*)t0)[3];
t5=stub3735(C_SCHEME_UNDEFINED,t4);
t6=C_a_i_arithmetic_shift(&a,2,t5,C_fix(-24));
if(C_truep(C_u_i_zerop(t6))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15734,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15736,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1538: list-tabulate */
t9=*((C_word*)lf[525]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=t5;
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t7=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}}}}}

/* a8540 in k8405 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8541(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8541,4,av);}
a=C_alloc(11);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8602,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8630,a[2]=((C_word*)t0)[4],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=t2;
/* tweaks.scm:57: ##sys#get */
t7=*((C_word*)lf[255]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=lf[256];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k9980 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9982(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9982,2,av);}
a=C_alloc(7);
t2=C_a_i_list1(&a,1,t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9974,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_car(((C_word*)t0)[3]);
/* support.scm:728: walk */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9884(t6,t4,t5,((C_word*)t0)[5]);}

/* k14683 in walk in scan-used-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_14685(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_14685,2,t0,t1);}
a=C_alloc(6);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_i_check_list_2(((C_word*)t0)[3],lf[35]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14693,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_14693(t7,((C_word*)t0)[4],((C_word*)t0)[3]);}

/* ##compiler#stringify in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5404,3,av);}
a=C_alloc(4);
if(C_truep(C_i_stringp(t2))){
t3=t2;
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
/* support.scm:164: symbol->string */
t3=*((C_word*)lf[51]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5423,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:165: open-output-string */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* k9996 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_9998,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10001,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* support.scm:732: gensym */
t4=*((C_word*)lf[110]+1);{
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

/* ##compiler#symbolify in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5434,3,av);}
a=C_alloc(4);
if(C_truep(C_i_symbolp(t2))){
t3=t2;
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_stringp(t2))){
/* support.scm:169: string->symbol */
t3=*((C_word*)lf[56]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5457,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:170: open-output-string */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* a8534 in k8405 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8535,2,av);}
/* support.scm:604: get-line-2 */
t2=*((C_word*)lf[159]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k12282 in k12245 in k12202 in k12157 in k12113 in k12086 in k12059 in k12033 in k11991 in k11868 in k11853 in repeat in a11823 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_12284(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_12284,2,t0,t1);}
a=C_alloc(15);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12287,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1113: gensym */
t3=*((C_word*)lf[110]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[388]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[389]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12322,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1119: gensym */
t5=*((C_word*)lf[110]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_eqp(((C_word*)t0)[4],lf[360]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12358,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1125: gensym */
t6=*((C_word*)lf[110]+1);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=C_eqp(((C_word*)t0)[4],lf[362]);
if(C_truep(t5)){
if(C_truep(*((C_word*)lf[353]+1))){
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
av2[1]=C_a_i_list(&a,2,lf[361],((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
t6=C_eqp(((C_word*)t0)[4],lf[392]);
if(C_truep(t6)){
t7=C_a_i_list(&a,2,lf[97],lf[390]);
t8=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t8;
av2[1]=C_a_i_list(&a,3,lf[391],((C_word*)t0)[2],t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t7=C_eqp(((C_word*)t0)[4],lf[393]);
if(C_truep(t7)){
t8=C_i_cadr(((C_word*)t0)[5]);
/* support.scm:1138: repeat */
t9=((C_word*)((C_word*)t0)[6])[1];
f_11830(t9,((C_word*)t0)[3],t8);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[394]);
if(C_truep(t8)){
t9=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t9;
av2[1]=(C_truep(*((C_word*)lf[353]+1))?((C_word*)t0)[2]:C_a_i_list(&a,2,lf[371],((C_word*)t0)[2]));
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=C_eqp(((C_word*)t0)[4],lf[395]);
if(C_truep(t9)){
t10=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t10;
av2[1]=(C_truep(t9)?C_a_i_list(&a,2,lf[379],((C_word*)t0)[2]):((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t10=C_eqp(((C_word*)t0)[4],lf[380]);
t11=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t11;
av2[1]=(C_truep(t10)?C_a_i_list(&a,2,lf[379],((C_word*)t0)[2]):((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}}}}}}}}

/* k12285 in k12282 in k12245 in k12202 in k12157 in k12113 in k12086 in k12059 in k12033 in k11991 in k11868 in k11853 in repeat in a11823 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 in ... */
static void C_ccall f_12287(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12287,2,av);}
a=C_alloc(42);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[379],t1);
t5=C_a_i_list(&a,2,lf[97],C_SCHEME_FALSE);
t6=C_a_i_list(&a,4,lf[225],t1,t4,t5);
t7=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_list(&a,3,lf[109],t3,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k5427 in k5421 in stringify in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5429(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5429,2,av);}
/* support.scm:165: get-output-string */
t2=*((C_word*)lf[53]+1);{
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

/* test-debugging-mode in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_4875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4875,4,av);}
a=C_alloc(3);
if(C_truep(C_i_symbolp(t2))){
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_i_memq(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4892,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:60: lset-intersection */
t5=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=*((C_word*)lf[13]+1);
av2[3]=t2;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* k5421 in stringify in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_5423,2,av);}
a=C_alloc(4);
t2=t1;
t3=C_i_check_port_2(t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[52]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5429,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:165: ##sys#print */
t5=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k8562 in k8604 in k8600 in a8540 in k8405 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_8564,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[211],lf[253],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop1396 in k8604 in k8600 in a8540 in k8405 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_8566(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8566,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8591,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:616: g1402 */
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

/* k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_4872(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(61,c,5)))){
C_save_and_reclaim((void *)f_4872,2,av);}
a=C_alloc(61);
t2=C_mutate2((C_word*)lf[8]+1 /* (set! ##compiler#collected-debugging-output ...) */,t1);
t3=C_mutate2((C_word*)lf[9]+1 /* (set! +logged-debugging-modes+ ...) */,lf[10]);
t4=C_mutate2((C_word*)lf[11]+1 /* (set! test-debugging-mode ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4875,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate2((C_word*)lf[14]+1 /* (set! ##compiler#debugging ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4894,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate2((C_word*)lf[26]+1 /* (set! ##compiler#with-debugging-output ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5014,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate2((C_word*)lf[29]+1 /* (set! ##compiler#quit ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5111,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate2((C_word*)lf[33]+1 /* (set! ##sys#syntax-error-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5127,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate2((C_word*)lf[42]+1 /* (set! syntax-error ...) */,*((C_word*)lf[33]+1));
t10=C_mutate2((C_word*)lf[43]+1 /* (set! ##compiler#emit-syntax-trace-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5224,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate2((C_word*)lf[44]+1 /* (set! map-llist ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5227,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate2((C_word*)lf[45]+1 /* (set! ##compiler#check-signature ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5268,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate2((C_word*)lf[48]+1 /* (set! ##compiler#posq ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5336,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate2((C_word*)lf[49]+1 /* (set! ##compiler#posv ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5370,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate2((C_word*)lf[50]+1 /* (set! ##compiler#stringify ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5404,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate2((C_word*)lf[55]+1 /* (set! ##compiler#symbolify ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5434,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate2((C_word*)lf[57]+1 /* (set! ##compiler#backslashify ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5468,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate2((C_word*)lf[61]+1 /* (set! ##compiler#uncommentify ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5478,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate2((C_word*)lf[63]+1 /* (set! ##compiler#build-lambda-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5488,tmp=(C_word)a,a+=2,tmp));
t20=C_mutate2((C_word*)lf[64]+1 /* (set! ##compiler#string->c-identifier ...) */,*((C_word*)lf[65]+1));
t21=C_mutate2((C_word*)lf[66]+1 /* (set! ##compiler#c-ify-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5530,tmp=(C_word)a,a+=2,tmp));
t22=C_mutate2((C_word*)lf[76]+1 /* (set! ##compiler#valid-c-identifier? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5627,tmp=(C_word)a,a+=2,tmp));
t23=C_mutate2((C_word*)lf[78]+1 /* (set! ##compiler#words ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5677,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate2((C_word*)lf[79]+1 /* (set! ##compiler#words->bytes ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5684,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate2((C_word*)lf[80]+1 /* (set! ##compiler#check-and-open-input-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5691,tmp=(C_word)a,a+=2,tmp));
t26=C_mutate2((C_word*)lf[87]+1 /* (set! ##compiler#close-checked-input-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5735,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate2((C_word*)lf[90]+1 /* (set! ##compiler#fold-inner ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5747,tmp=(C_word)a,a+=2,tmp));
t28=C_mutate2((C_word*)lf[92]+1 /* (set! ##compiler#follow-without-loop ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5803,tmp=(C_word)a,a+=2,tmp));
t29=C_mutate2((C_word*)lf[93]+1 /* (set! ##compiler#sort-symbols ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5834,tmp=(C_word)a,a+=2,tmp));
t30=C_mutate2((C_word*)lf[96]+1 /* (set! ##compiler#constant? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5854,tmp=(C_word)a,a+=2,tmp));
t31=C_mutate2((C_word*)lf[100]+1 /* (set! ##compiler#collapsable-literal? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5916,tmp=(C_word)a,a+=2,tmp));
t32=C_mutate2((C_word*)lf[101]+1 /* (set! ##compiler#immediate? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5946,tmp=(C_word)a,a+=2,tmp));
t33=C_mutate2((C_word*)lf[103]+1 /* (set! ##compiler#basic-literal? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5992,tmp=(C_word)a,a+=2,tmp));
t34=C_mutate2((C_word*)lf[106]+1 /* (set! ##compiler#canonicalize-begin-body ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6048,tmp=(C_word)a,a+=2,tmp));
t35=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6123,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:302: condition-predicate */
t36=*((C_word*)lf[568]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t36;
av2[1]=t35;
av2[2]=lf[521];
((C_proc)(void*)(*((C_word*)t36+1)))(3,av2);}}

/* k9813 in k9733 in k9730 in a9727 in a9715 in inline-lambda-bindings in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9815(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(34,c,2)))){
C_save_and_reclaim((void *)f_9815,2,av);}
a=C_alloc(34);
t2=C_a_i_list1(&a,1,t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9785,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
/* support.scm:700: qnode */
t5=*((C_word*)lf[222]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t5=C_i_length(((C_word*)t0)[4]);
t6=C_a_i_times(&a,2,C_fix(3),t5);
t7=C_a_i_list2(&a,2,lf[285],t6);
t8=((C_word*)t0)[4];
t9=C_a_i_record4(&a,4,lf[211],lf[251],t7,t8);
t10=C_a_i_list2(&a,2,t9,((C_word*)t0)[2]);
t11=((C_word*)t0)[3];
f_9761(t11,C_a_i_record4(&a,4,lf[211],lf[109],t3,t10));}}

/* map-loop1800 in a9727 in a9715 in inline-lambda-bindings in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_9829(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9829,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9854,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:690: g1806 */
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

/* k16001 in k15984 in loop in k15975 in scan-sharp-greater-string in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_16003,2,av);}
/* support.scm:1599: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_15982(t2,((C_word*)t0)[3]);}

/* a15546 in a15524 in k15591 in k15443 in constant-form-eval in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_15547,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15553,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15565,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1501: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* k15543 in a15536 in a15530 in a15524 in k15591 in k15443 in constant-form-eval in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_15545,2,av);}
/* support.scm:1502: k */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
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

/* k12245 in k12202 in k12157 in k12113 in k12086 in k12059 in k12033 in k11991 in k11868 in k11853 in repeat in a11823 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_12247,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12251,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1107: g2795 */
t3=t2;
f_12251(t3,((C_word*)t0)[3],t1);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[4];
t3=C_u_i_car(t2);
t4=C_eqp(t3,lf[387]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12284,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t4)){
t6=t5;
f_12284(t6,t4);}
else{
t6=C_eqp(t3,lf[396]);
if(C_truep(t6)){
t7=t5;
f_12284(t7,t6);}
else{
t7=C_eqp(t3,lf[397]);
t8=t5;
f_12284(t8,(C_truep(t7)?t7:C_eqp(t3,lf[378])));}}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* k6992 in k6955 in k6918 in k6871 in k6868 in a6859 in k6853 in display-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_6994(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_6994,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=*((C_word*)lf[16]+1);
t3=*((C_word*)lf[16]+1);
t4=C_i_check_port_2(*((C_word*)lf[16]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[17]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7000,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:494: ##sys#print */
t6=*((C_word*)lf[19]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[168];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_6876(2,av2);}}}

/* k8405 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_8407(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_8407,2,t0,t1);}
a=C_alloc(20);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=C_i_cadr(((C_word*)t0)[2]);
t5=t4;
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=((C_word*)((C_word*)t0)[3])[1];
t11=((C_word*)t0)[2];
t12=C_u_i_cdr(t11);
t13=C_u_i_cdr(t12);
t14=C_i_check_list_2(t13,lf[161]);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8433,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8435,a[2]=t8,a[3]=t17,a[4]=t10,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t19=((C_word*)t17)[1];
f_8435(t19,t15,t13);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[252]);
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
t12=C_i_check_list_2(t11,lf[161]);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8496,a[2]=((C_word*)t0)[4],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8498,a[2]=t7,a[3]=t15,a[4]=t9,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_8498(t17,t13,t11);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8535,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8541,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* support.scm:604: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}}}

/* k14257 in k14182 in k14107 in k14083 in foreign-type->scrutiny-type in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_14259(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_14259,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=lf[426];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[378]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[476];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_eqp(((C_word*)t0)[3],lf[380]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[396];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(((C_word*)t0)[3],lf[381]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14280,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_14280(t6,t4);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[401]);
if(C_truep(t6)){
t7=t5;
f_14280(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[3],lf[402]);
t8=t5;
f_14280(t8,(C_truep(t7)?t7:C_eqp(((C_word*)t0)[3],lf[403])));}}}}}}

/* a15530 in a15524 in k15591 in k15443 in constant-form-eval in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15531(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_15531,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15537,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1501: k3706 */
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a15536 in a15530 in a15524 in k15591 in k15443 in constant-form-eval in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_15537,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15545,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1503: get-condition-property */
t3=*((C_word*)lf[520]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[521];
av2[4]=lf[522];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* g2795 in k12245 in k12202 in k12157 in k12113 in k12086 in k12059 in k12033 in k11991 in k11868 in k11853 in repeat in a11823 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_12251(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_12251,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* support.scm:1109: next */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t2;
/* support.scm:1109: next */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* map-loop1319 in k8405 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_8435(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8435,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8460,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:600: g1325 */
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

/* k8431 in k8405 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8433(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_8433,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[211],((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a15564 in a15546 in a15524 in k15591 in k15443 in constant-form-eval in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_15565,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15571,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1501: k3706 */
t4=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k9852 in map-loop1800 in a9727 in a9715 in inline-lambda-bindings in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9854(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9854,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9829(t6,((C_word*)t0)[5],t5);}

/* k12320 in k12282 in k12245 in k12202 in k12157 in k12113 in k12086 in k12059 in k12033 in k11991 in k11868 in k11853 in repeat in a11823 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 in ... */
static void C_ccall f_12322(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12322,2,av);}
a=C_alloc(51);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[97],lf[390]);
t5=C_a_i_list(&a,3,lf[391],((C_word*)t0)[2],t4);
t6=C_a_i_list(&a,2,lf[97],C_SCHEME_FALSE);
t7=C_a_i_list(&a,4,lf[225],t1,t5,t6);
t8=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_a_i_list(&a,3,lf[109],t3,t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k6892 in k6877 in k6874 in k6871 in k6868 in a6859 in k6853 in display-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6894,2,av);}
t2=C_i_length(((C_word*)((C_word*)t0)[2])[1]);
/* support.scm:496: ##sys#print */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* a15558 in a15552 in a15546 in a15524 in k15591 in k15443 in constant-form-eval in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_15559,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* a15552 in a15546 in a15524 in k15591 in k15443 in constant-form-eval in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_15553,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15559,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1501: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=*((C_word*)lf[523]+1);
C_call_with_values(4,av2);}}

/* k12202 in k12157 in k12113 in k12086 in k12059 in k12033 in k11991 in k11868 in k11853 in repeat in a11823 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_12204(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,3)))){
C_save_and_reclaim_args((void *)trf_12204,2,t0,t1);}
a=C_alloc(18);
if(C_truep(t1)){
if(C_truep(*((C_word*)lf[353]+1))){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,lf[382],((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_a_i_list(&a,2,lf[383],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,lf[382],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[385]);
if(C_truep(t2)){
if(C_truep(*((C_word*)lf[353]+1))){
t3=C_a_i_list(&a,2,lf[386],((C_word*)t0)[3]);
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[382],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_a_i_list(&a,2,lf[386],((C_word*)t0)[3]);
t4=C_a_i_list(&a,2,lf[383],t3);
t5=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_list(&a,2,lf[382],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12247,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[6]))){
/* support.scm:1107: ##sys#hash-table-ref */
t4=*((C_word*)lf[149]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[398]+1);
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_12247(2,av2);}}}}}

/* a15570 in a15564 in a15546 in a15524 in k15591 in k15443 in constant-form-eval in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_15571,2,av);}{
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

/* k14715 in walk in scan-used-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_14717(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,1)))){
C_save_and_reclaim_args((void *)trf_14717,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];
f_14685(t4,t3);}
else{
t2=((C_word*)t0)[4];
f_14685(t2,C_SCHEME_UNDEFINED);}}

/* k14701 in for-each-loop3418 in k14683 in walk in scan-used-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_14703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_14703,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_14693(t3,((C_word*)t0)[4],t2);}

/* k15591 in k15443 in constant-form-eval in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15593(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_15593,2,av);}
a=C_alloc(14);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=C_slot(((C_word*)t0)[2],C_fix(0));
t5=t4;
if(C_truep(C_i_closurep(t5))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15460,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15525,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:1501: call-with-current-continuation */
t8=*((C_word*)lf[123]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
/* support.scm:1515: bomb */
t6=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[524];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* map-loop3676 in k15443 in constant-form-eval in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_15595(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_15595,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,lf[97],t3);
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

/* k14765 in for-each-loop3442 in k14747 in walk in scan-used-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_14767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_14767,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_14757(t3,((C_word*)t0)[4],t2);}

/* ##compiler#encodeable-literal? in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_15663,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15677,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1525: immediate? */
t4=*((C_word*)lf[101]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* for-each-loop3442 in k14747 in walk in scan-used-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_14757(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_14757,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14767,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:1345: g3443 */
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

/* k14747 in walk in scan-used-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_14749(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_14749,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)((C_word*)t0)[3])[1];
t3=C_i_check_list_2(((C_word*)t0)[4],lf[35]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14757,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_14757(t7,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* k15795 in k15792 in k15789 in k15786 in k15777 in loop in dump-nodes in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15797(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_15797,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_15800,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* support.scm:1544: ##sys#write-char-0 */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k10781 in k10893 in k10757 in a10751 in emit-global-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_10783(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_10783,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
if(C_truep(C_i_assq(lf[199],((C_word*)t0)[2]))){
t2=C_i_cdr(((C_word*)t0)[3]);
t3=C_slot(t2,C_fix(2));
t4=t3;
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10862,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[3],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* support.scm:797: get */
t6=*((C_word*)lf[148]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[206];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t5=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k15789 in k15786 in k15777 in loop in dump-nodes in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_15791,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_15794,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* support.scm:1544: ##sys#write-char-0 */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(60);
av2[3]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k15792 in k15789 in k15786 in k15777 in loop in dump-nodes in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15794(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_15794,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_15797,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* support.scm:1544: ##sys#print */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* ##compiler#node->sexpr in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10478(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10478,3,av);}
a=C_alloc(5);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10484,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
f_10484(3,av2);}}

/* k11726 in k11720 in k11717 in k11714 in k11708 in k11705 in k11702 in k11696 in k11693 in k11690 in k11687 in k11684 in k11678 in a11672 in print-program-statistics in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 in ... */
static void C_ccall f_11728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_11728,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11731,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:995: ##sys#print */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11720 in k11717 in k11714 in k11708 in k11705 in k11702 in k11696 in k11693 in k11690 in k11687 in k11684 in k11678 in a11672 in print-program-statistics in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11722(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11722,2,av);}
a=C_alloc(7);
t2=*((C_word*)lf[16]+1);
t3=*((C_word*)lf[16]+1);
t4=C_i_check_port_2(*((C_word*)lf[16]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[17]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11728,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* support.scm:995: ##sys#print */
t6=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[338];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k14318 in k14296 in k14278 in k14257 in k14182 in k14107 in k14083 in foreign-type->scrutiny-type in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_14320(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_14320,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=lf[480];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[393]);
if(C_truep(t2)){
t3=C_i_cadr(((C_word*)t0)[4]);
/* support.scm:1325: foreign-type->scrutiny-type */
t4=*((C_word*)lf[461]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=C_eqp(((C_word*)t0)[3],lf[394]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[426];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(((C_word*)t0)[3],lf[395]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t5;
av2[1]=(C_truep(t4)?lf[396]:lf[240]);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eqp(((C_word*)t0)[3],lf[380]);
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=(C_truep(t5)?lf[396]:lf[240]);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}}}}

/* k10444 in k10441 in copy-node! in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10446(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_10446,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10449,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=C_slot(t3,C_fix(3));
/* support.scm:771: node-subexpressions-set! */
t5=*((C_word*)lf[219]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* loop in follow-without-loop in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_5809(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_5809,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_member(t2,t3))){
/* support.scm:242: abort */
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5824,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:243: proc */
t5=((C_word*)t0)[4];{
C_word av2[4];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k10447 in k10444 in k10441 in copy-node! in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10449,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##compiler#follow-without-loop in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5803(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5803,5,av);}
a=C_alloc(7);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5809,a[2]=t4,a[3]=t6,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_5809(t8,t1,t2,C_SCHEME_END_OF_LIST);}

/* map-loop3645 in constant-form-eval in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_15629(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_15629,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_slot(t3,C_fix(2));
t5=C_i_car(t4);
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

/* k10441 in copy-node! in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10443(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_10443,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10446,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[4];
t4=C_slot(t3,C_fix(2));
/* support.scm:770: node-parameters-set! */
t5=*((C_word*)lf[217]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* loop in dump-nodes in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_15751(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_15751,4,t0,t1,t2,t3);}
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
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_15779,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t12,a[5]=t3,a[6]=t1,a[7]=t9,a[8]=t6,tmp=(C_word)a,a+=9,tmp);
/* support.scm:1549: make-string */
t14=*((C_word*)lf[510]+1);{
C_word av2[4];
av2[0]=t14;
av2[1]=t13;
av2[2]=t2;
av2[3]=C_make_character(32);
((C_proc)(void*)(*((C_word*)t14+1)))(4,av2);}}

/* ##compiler#copy-node! in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10439(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10439,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10443,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=C_slot(t5,C_fix(1));
/* support.scm:769: node-class-set! */
t7=*((C_word*)lf[214]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t4;
av2[2]=t3;
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k10715 in k10704 in a10701 in k10637 in emit-global-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10717(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10717,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10720,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10725,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_10725(t6,t2,t1);}

/* k10709 in for-each-loop2224 in k10715 in k10704 in a10701 in k10637 in emit-global-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10711,2,av);}
/* support.scm:815: newline */
t2=*((C_word*)lf[15]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5846 in a5839 in sort-symbols in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5848,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5852,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:246: symbol->string */
t4=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* copy-node in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10401(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10401,3,av);}
a=C_alloc(5);
t3=t2;
t4=C_slot(t3,C_fix(1));
t5=t2;
t6=C_slot(t5,C_fix(2));
t7=t2;
t8=C_slot(t7,C_fix(3));
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_a_i_record4(&a,4,lf[211],t4,t6,t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* a5839 in sort-symbols in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5840,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5848,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:246: symbol->string */
t5=*((C_word*)lf[51]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k6092 in k6102 in k6076 in loop in canonicalize-begin-body in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_6094,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[109],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9113 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9115,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list3(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5589 in k5575 in k5568 in loop in k5544 in c-ify-string in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5591,2,av);}
/* string->list */
t2=*((C_word*)lf[71]+1);{
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

/* ##compiler#sort-symbols in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_5834,3,av);}
a=C_alloc(2);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5840,tmp=(C_word)a,a+=2,tmp);
/* support.scm:246: sort */
t4=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k10704 in a10701 in k10637 in emit-global-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10706,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10717,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:816: reverse */
t3=*((C_word*)lf[91]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a10701 in k10637 in emit-global-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_10702,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10706,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10750,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:810: chicken-version */
t4=*((C_word*)lf[307]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k9137 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9139,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[267],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##compiler#constant? in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5854(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5854,3,av);}
a=C_alloc(4);
t3=C_i_numberp(t2);
if(C_truep(t3)){
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_charp(t2);
if(C_truep(t4)){
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_stringp(t2);
if(C_truep(t5)){
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_booleanp(t2);
if(C_truep(t6)){
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_eofp(t2);
if(C_truep(t7)){
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5888,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:257: blob? */
t9=*((C_word*)lf[99]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}}}}}

/* k5850 in k5846 in a5839 in sort-symbols in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5852(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5852,2,av);}
/* support.scm:246: string<? */
t2=*((C_word*)lf[94]+1);{
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

/* k10757 in a10751 in emit-global-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10759(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10759,2,av);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_i_assq(lf[173],((C_word*)t0)[2]);
t3=t2;
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10895,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t5=((C_word*)t0)[4];
/* tweaks.scm:57: ##sys#get */
t6=*((C_word*)lf[255]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
av2[3]=lf[313];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* ##compiler#dump-nodes in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15742(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_15742,3,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15746,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15751,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_15751(t7,t3,C_fix(0),t2);}

/* a10751 in emit-global-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_10752,4,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10759,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* support.scm:789: variable-visible? */
t5=*((C_word*)lf[314]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k15744 in dump-nodes in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_15746,2,av);}
/* support.scm:1561: newline */
t2=*((C_word*)lf[15]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10748 in a10701 in k10637 in emit-global-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10750(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_10750,2,av);}
/* support.scm:810: print */
t2=*((C_word*)lf[296]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[303];
av2[3]=t1;
av2[4]=lf[304];
av2[5]=*((C_word*)lf[305]+1);
av2[6]=lf[306];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* loop in canonicalize-begin-body in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_6054(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6054,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[107];
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
t6=C_i_equalp(t5,lf[108]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6078,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t6)){
t8=t7;
f_6078(t8,t6);}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6109,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* support.scm:295: constant? */
t9=*((C_word*)lf[96]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}}}

/* k5886 in constant? in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5888,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_vectorp(((C_word*)t0)[3]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5900,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:259: ##sys#srfi-4-vector? */
t4=*((C_word*)lf[98]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}}

/* for-each-loop2224 in k10715 in k10704 in a10701 in k10637 in emit-global-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_10725(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_10725,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10735,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10711,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* support.scm:814: pp */
t7=*((C_word*)lf[302]+1);{
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

/* a15735 in k15675 in encodeable-literal? in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_15736,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[2],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k15732 in k15675 in encodeable-literal? in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_15734,2,av);}
/* support.scm:1536: every */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[519]+1);
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k10718 in k10715 in k10704 in a10701 in k10637 in emit-global-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10720,2,av);}
/* support.scm:817: print */
t2=*((C_word*)lf[296]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[301];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* ##compiler#canonicalize-begin-body in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6048(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6048,3,av);}
a=C_alloc(5);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6054,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_6054(t6,t1,t2);}

/* k6044 in k6006 in basic-literal? in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6046,2,av);}
/* support.scm:281: every */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[103]+1);
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a5823 in loop in follow-without-loop in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5824,3,av);}
a=C_alloc(3);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
/* support.scm:243: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_5809(t4,t1,t2,t3);}

/* a11774 in k11762 in pprint-expressions-to-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11775(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11775,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=C_i_check_list_2(t2,lf[35]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11792,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_11792(t7,t1,t2);}

/* k11779 in for-each-loop2562 in a11774 in k11762 in pprint-expressions-to-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11781(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11781,2,av);}
/* support.scm:1009: newline */
t2=*((C_word*)lf[15]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* walk in node->sexpr in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10484(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10484,3,av);}
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
t16=C_i_check_list_2(t15,lf[161]);
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10528,a[2]=t8,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10530,a[2]=t11,a[3]=t19,a[4]=t13,a[5]=t12,tmp=(C_word)a,a+=6,tmp));
t21=((C_word*)t19)[1];
f_10530(t21,t17,t15);}

/* for-each-loop2562 in a11774 in k11762 in pprint-expressions-to-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_11792(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_11792,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11802,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11781,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1008: pretty-print */
t7=*((C_word*)lf[347]+1);{
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

/* k11690 in k11687 in k11684 in k11678 in a11672 in print-program-statistics in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_11692,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11695,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* support.scm:992: ##sys#print */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11693 in k11690 in k11687 in k11684 in k11678 in a11672 in print-program-statistics in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_11695,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11698,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* support.scm:992: ##sys#write-char-0 */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k11696 in k11693 in k11690 in k11687 in k11684 in k11678 in a11672 in print-program-statistics in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11698(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11698,2,av);}
a=C_alloc(9);
t2=*((C_word*)lf[16]+1);
t3=*((C_word*)lf[16]+1);
t4=C_i_check_port_2(*((C_word*)lf[16]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[17]);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11704,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* support.scm:993: ##sys#print */
t6=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[340];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7639 in map-loop1057 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7641(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7641,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7616(t6,((C_word*)t0)[5],t5);}

/* k6076 in loop in canonicalize-begin-body in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_6078(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6078,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* support.scm:297: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6054(t4,((C_word*)t0)[4],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6104,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:298: gensym */
t3=*((C_word*)lf[110]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[111];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k15246 in loop in k15220 in k15289 in k15193 in real-name in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_15248,2,av);}
a=C_alloc(8);
t2=C_eqp(t1,((C_word*)t0)[2]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15261,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1455: reverse */
t4=*((C_word*)lf[91]+1);{
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
else{
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_15280,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* support.scm:1456: symbol->string */
t4=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* loop in posq in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_5342(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_5342,4,t0,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_a_i_plus(&a,2,t3,C_fix(1));
/* support.scm:154: loop */
t10=t1;
t11=t7;
t12=t8;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}}

/* map-loop1057 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_7616(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7616,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7641,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:529: g1063 */
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

/* k7612 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_7614,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[211],((C_word*)t0)[3],C_SCHEME_END_OF_LIST,t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k9943 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9945,2,av);}
if(C_truep(t1)){
/* support.scm:723: cfk */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_9935(2,av2);}}}

/* k9940 in k9933 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9942,2,av);}
/* support.scm:724: varnode */
t2=*((C_word*)lf[220]+1);{
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

/* ##compiler#pprint-expressions-to-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11760,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11764,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
/* support.scm:1003: open-output-file */
t5=*((C_word*)lf[349]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=*((C_word*)lf[16]+1);
f_11764(2,av2);}}}

/* k7675 in k7668 in k7665 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7677,2,av);}
t2=C_i_inexact_to_exact(t1);
/* support.scm:532: qnode */
t3=*((C_word*)lf[222]+1);{
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

/* k11765 in k11762 in pprint-expressions-to-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11767,2,av);}
if(C_truep(((C_word*)t0)[2])){
/* support.scm:1011: close-output-port */
t2=*((C_word*)lf[346]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11762 in pprint-expressions-to-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_11764,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11767,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11775,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1004: with-output-to-port */
t5=*((C_word*)lf[348]+1);{
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

/* ##compiler#print-program-statistics in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,9)))){
C_save_and_reclaim((void *)f_11661,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11667,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11673,tmp=(C_word)a,a+=2,tmp);
/* support.scm:988: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a11666 in print-program-statistics in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11667,2,av);}
/* support.scm:990: compute-database-statistics */
t2=*((C_word*)lf[332]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* ##compiler#real-name2 in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_15296,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15300,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1463: ##sys#hash-table-ref */
t5=*((C_word*)lf[149]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=*((C_word*)lf[497]+1);
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k15289 in k15193 in real-name in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_15291,2,av);}
a=C_alloc(9);
t2=C_a_i_list1(&a,1,t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15222,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* support.scm:1448: get */
t5=*((C_word*)lf[148]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[181];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k7668 in k7665 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7670,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7677,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:538: truncate */
t3=*((C_word*)lf[227]+1);{
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

/* k7665 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_7667(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_7667,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7670,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:536: warning */
t3=*((C_word*)lf[228]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[229];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
/* support.scm:532: qnode */
t2=*((C_word*)lf[222]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k15786 in k15777 in loop in dump-nodes in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_15788,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_15791,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* support.scm:1544: ##sys#print */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8589 in map-loop1396 in k8604 in k8600 in a8540 in k8405 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8591(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8591,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8566(t6,((C_word*)t0)[5],t5);}

/* a11672 in print-program-statistics in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11673(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_11673,9,av);}
a=C_alloc(10);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11680,a[2]=t1,a[3]=t8,a[4]=t7,a[5]=t6,a[6]=t5,a[7]=t4,a[8]=t3,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* support.scm:991: debugging */
t10=*((C_word*)lf[14]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[343];
av2[3]=lf[344];
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}

/* k11702 in k11696 in k11693 in k11690 in k11687 in k11684 in k11678 in a11672 in print-program-statistics in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_11704,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11707,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* support.scm:993: ##sys#print */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11705 in k11702 in k11696 in k11693 in k11690 in k11687 in k11684 in k11678 in a11672 in print-program-statistics in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_11707,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11710,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* support.scm:993: ##sys#write-char-0 */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k11678 in a11672 in print-program-statistics in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11680(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11680,2,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=*((C_word*)lf[16]+1);
t3=*((C_word*)lf[16]+1);
t4=C_i_check_port_2(*((C_word*)lf[16]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[17]);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11686,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* support.scm:992: ##sys#print */
t6=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[342];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k15777 in loop in dump-nodes in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15779(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_15779,2,av);}
a=C_alloc(15);
t2=t1;
t3=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(2));
t4=t3;
t5=*((C_word*)lf[16]+1);
t6=*((C_word*)lf[16]+1);
t7=C_i_check_port_2(*((C_word*)lf[16]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[17]);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_15788,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t5,a[9]=((C_word*)t0)[8],a[10]=t2,tmp=(C_word)a,a+=11,tmp);
/* support.scm:1544: ##sys#write-char-0 */
t9=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* k11687 in k11684 in k11678 in a11672 in print-program-statistics in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_11689,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11692,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* support.scm:992: ##sys#print */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[341];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11684 in k11678 in a11672 in print-program-statistics in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_11686,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11689,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* support.scm:992: ##sys#print */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k15274 in k15278 in k15246 in loop in k15220 in k15289 in k15193 in real-name in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_15276,2,av);}
/* support.scm:1456: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_15224(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* ##compiler#posv in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5370(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5370,4,av);}
a=C_alloc(6);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5376,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5376(t7,t1,t3,C_fix(0));}

/* loop in posv in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_5376(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_5376,4,t0,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
if(C_truep(C_i_eqvp(((C_word*)t0)[2],t4))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=t2;
t6=C_u_i_cdr(t5);
t7=C_a_i_plus(&a,2,t3,C_fix(1));
/* support.scm:160: loop */
t9=t1;
t10=t6;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}}

/* k11714 in k11708 in k11705 in k11702 in k11696 in k11693 in k11690 in k11687 in k11684 in k11678 in a11672 in print-program-statistics in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_11716,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11719,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* support.scm:994: ##sys#print */
t3=*((C_word*)lf[19]+1);{
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

/* k11717 in k11714 in k11708 in k11705 in k11702 in k11696 in k11693 in k11690 in k11687 in k11684 in k11678 in a11672 in print-program-statistics in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11719,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:994: ##sys#write-char-0 */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k11708 in k11705 in k11702 in k11696 in k11693 in k11690 in k11687 in k11684 in k11678 in a11672 in print-program-statistics in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11710(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11710,2,av);}
a=C_alloc(8);
t2=*((C_word*)lf[16]+1);
t3=*((C_word*)lf[16]+1);
t4=C_i_check_port_2(*((C_word*)lf[16]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[17]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11716,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* support.scm:994: ##sys#print */
t6=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[339];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k15259 in k15246 in loop in k15220 in k15289 in k15193 in real-name in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_15261,2,av);}
/* support.scm:1455: string-intersperse */
t2=*((C_word*)lf[499]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[502];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop2163 in walk in sexpr->node in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_10601(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10601,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10626,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:782: g2169 */
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

/* ##compiler#foreign-type-convert-argument in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_12842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_12842,4,av);}
a=C_alloc(4);
if(C_truep(C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12855,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1159: ##sys#hash-table-ref */
t5=*((C_word*)lf[149]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=*((C_word*)lf[398]+1);
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t4=t2;
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* ##compiler#make-block-variable-literal in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_15099,3,av);}
a=C_alloc(3);
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record2(&a,2,lf[489],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11732 in k11729 in k11726 in k11720 in k11717 in k11714 in k11708 in k11705 in k11702 in k11696 in k11693 in k11690 in k11687 in k11684 in k11678 in a11672 in print-program-statistics in k7504 in k6124 in k6121 in k4870 in k4836 in ... */
static void C_ccall f_11734(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11734,2,av);}
a=C_alloc(6);
t2=*((C_word*)lf[16]+1);
t3=*((C_word*)lf[16]+1);
t4=C_i_check_port_2(*((C_word*)lf[16]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[17]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* support.scm:996: ##sys#print */
t6=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[337];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11729 in k11726 in k11720 in k11717 in k11714 in k11708 in k11705 in k11702 in k11696 in k11693 in k11690 in k11687 in k11684 in k11678 in a11672 in print-program-statistics in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in ... */
static void C_ccall f_11731(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11731,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11734,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:995: ##sys#write-char-0 */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* for-each-loop2464 in a11556 in compute-database-statistics in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_11638(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(20,0,2)))){
C_save_and_reclaim_args((void *)trf_11638,3,t0,t1,t2);}
a=C_alloc(20);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* support.scm:967: g2465 */
  f_11559(C_a_i(&a,20),((C_word*)t0)[2],t3)
);
t5=C_slot(t2,C_fix(1));
t7=t1;
t8=t5;
t1=t7;
t2=t8;
goto loop;}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11744 in k11741 in k11738 in k11732 in k11729 in k11726 in k11720 in k11717 in k11714 in k11708 in k11705 in k11702 in k11696 in k11693 in k11690 in k11687 in k11684 in k11678 in a11672 in print-program-statistics in k7504 in k6124 in ... */
static void C_ccall f_11746(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11746,2,av);}
a=C_alloc(5);
t2=*((C_word*)lf[16]+1);
t3=*((C_word*)lf[16]+1);
t4=C_i_check_port_2(*((C_word*)lf[16]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[17]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11752,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:997: ##sys#print */
t6=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[336];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11741 in k11738 in k11732 in k11729 in k11726 in k11720 in k11717 in k11714 in k11708 in k11705 in k11702 in k11696 in k11693 in k11690 in k11687 in k11684 in k11678 in a11672 in print-program-statistics in k7504 in k6124 in k6121 in ... */
static void C_ccall f_11743(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_11743,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11746,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:996: ##sys#write-char-0 */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k11738 in k11732 in k11729 in k11726 in k11720 in k11717 in k11714 in k11708 in k11705 in k11702 in k11696 in k11693 in k11690 in k11687 in k11684 in k11678 in a11672 in print-program-statistics in k7504 in k6124 in k6121 in k4870 in ... */
static void C_ccall f_11740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_11740,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11743,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:996: ##sys#print */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k9933 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_9935,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9942,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];
/* support.scm:712: alist-ref */
t4=*((C_word*)lf[287]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=t3;
av2[4]=*((C_word*)lf[13]+1);
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}

/* k11753 in k11750 in k11744 in k11741 in k11738 in k11732 in k11729 in k11726 in k11720 in k11717 in k11714 in k11708 in k11705 in k11702 in k11696 in k11693 in k11690 in k11687 in k11684 in k11678 in a11672 in print-program-statistics in ... */
static void C_ccall f_11755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11755,2,av);}
/* support.scm:997: ##sys#write-char-0 */
t2=*((C_word*)lf[18]+1);{
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

/* k11750 in k11744 in k11741 in k11738 in k11732 in k11729 in k11726 in k11720 in k11717 in k11714 in k11708 in k11705 in k11702 in k11696 in k11693 in k11690 in k11687 in k11684 in k11678 in a11672 in print-program-statistics in k7504 in ... */
static void C_ccall f_11752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11752,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11755,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:997: ##sys#print */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* ##compiler#chop-extension in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15059(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_15059,3,av);}
a=C_alloc(10);
t3=C_i_string_length(t2);
t4=C_a_i_minus(&a,2,t3,C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15068,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_15068(t8,t1,t4);}

/* k15285 in loop in k15220 in k15289 in k15193 in real-name in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_15287,2,av);}
/* support.scm:1459: string-intersperse */
t2=*((C_word*)lf[499]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[503];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* ##compiler#valid-c-identifier? in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5627,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5631,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5675,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm:202: ->string */
t5=*((C_word*)lf[60]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k15278 in k15246 in loop in k15220 in k15289 in k15193 in real-name in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15280(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_15280,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=t2;
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15276,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* support.scm:1458: get */
t7=*((C_word*)lf[148]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
av2[4]=lf[181];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k10860 in k10781 in k10893 in k10757 in a10751 in emit-global-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_10862,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10817,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[3];
/* tweaks.scm:57: ##sys#get */
t4=*((C_word*)lf[255]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=lf[312];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k5609 in k5568 in loop in k5544 in c-ify-string in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5611,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in chop-extension in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_15068(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_15068,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_zerop(t2))){
t3=((C_word*)t0)[2];
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_i_string_ref(((C_word*)t0)[2],t2);
if(C_truep(C_u_i_char_equalp(C_make_character(46),t3))){
/* support.scm:1400: substring */
t4=*((C_word*)lf[485]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=C_a_i_minus(&a,2,t2,C_fix(1));
/* support.scm:1401: loop */
t6=t1;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}}

/* k15011 in for-each-loop3508 in walkeach in scan-free-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_15013,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_15003(t3,((C_word*)t0)[4],t2);}

/* k9431 in k9424 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9433(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9433,2,av);}
a=C_alloc(19);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)((C_word*)t0)[2])[1];
t8=C_u_i_cdr(((C_word*)t0)[3]);
t9=C_i_check_list_2(t8,lf[161]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9444,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9446,a[2]=t5,a[3]=t12,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_9446(t14,t10,t8);}

/* k15040 in chop-separator in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_15042(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_15042,2,t0,t1);}
if(C_truep(t1)){
/* support.scm:1393: substring */
t2=*((C_word*)lf[485]+1);{
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

/* k5629 in valid-c-identifier? in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5631(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5631,2,av);}
a=C_alloc(2);
if(C_truep(C_i_pairp(t1))){
t2=C_u_i_car(t1);
t3=C_u_i_char_alphabeticp(t2);
t4=(C_truep(t3)?t3:C_u_i_char_equalp(C_make_character(95),t2));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5652,tmp=(C_word)a,a+=2,tmp);
t6=C_u_i_cdr(t1);
/* support.scm:206: any */
t7=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=((C_word*)t0)[2];
av2[2]=t5;
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t5=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k9442 in k9431 in k9424 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9444,2,av);}
/* support.scm:671: cons* */
t2=*((C_word*)lf[270]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* map-loop1694 in k9431 in k9424 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_9446(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9446,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9471,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:671: g1700 */
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

/* k11142 in match-node in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11144(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11144,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11150,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=C_slot(t3,C_fix(1));
t5=((C_word*)t0)[4];
t6=C_slot(t5,C_fix(2));
/* support.scm:869: debugging */
t7=*((C_word*)lf[14]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t7;
av2[1]=t2;
av2[2]=lf[318];
av2[3]=lf[319];
av2[4]=t4;
av2[5]=t6;
av2[6]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t7+1)))(7,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k9580 in map-loop1749 in k9424 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9582(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9582,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9557(t6,((C_word*)t0)[5],t5);}

/* k9284 in map-loop1625 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9286(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9286,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9261(t6,((C_word*)t0)[5],t5);}

/* k11148 in k11142 in match-node in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11150,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a5651 in k5629 in valid-c-identifier? in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5652(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5652,3,av);}
t3=C_u_i_char_alphabeticp(t2);
if(C_truep(t3)){
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_u_i_char_numericp(t2);
if(C_truep(t4)){
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=t2;
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_u_i_char_equalp(C_make_character(95),t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}}

/* k15025 in scan-free-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_15027,2,av);}
/* support.scm:1384: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=((C_word*)((C_word*)t0)[4])[1];
C_values(4,av2);}}

/* k5091 in k5085 in k5082 in k5079 in k5076 in with-debugging-output in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5093,2,av);}
if(C_truep(t1)){
/* support.scm:100: collect */
t2=((C_word*)t0)[2];
f_5017(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* ##compiler#words->bytes in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5684,3,av);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=stub346(C_SCHEME_UNDEFINED,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k9469 in map-loop1694 in k9431 in k9424 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9471(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9471,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9446(t6,((C_word*)t0)[5],t5);}

/* map-loop1625 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_9261(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9261,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9286,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:662: g1631 */
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

/* ##compiler#expression-has-side-effects? in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11170(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11170,4,av);}
a=C_alloc(5);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11176,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t1;
av2[2]=t2;
f_11176(3,av2);}}

/* k5044 in collect in with-debugging-output in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5046,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5051,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5051(t5,((C_word*)t0)[3],t1);}

/* walk in expression-has-side-effects? in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11176(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11176,3,av);}
a=C_alloc(7);
t3=t2;
t4=C_slot(t3,C_fix(3));
t5=t4;
t6=t2;
t7=C_slot(t6,C_fix(1));
t8=t7;
t9=C_eqp(t8,lf[221]);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11202,a[2]=t1,a[3]=t8,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t9)){
t11=t10;
f_11202(t11,t9);}
else{
t11=C_eqp(t8,lf[97]);
if(C_truep(t11)){
t12=t10;
f_11202(t12,t11);}
else{
t12=C_eqp(t8,lf[226]);
t13=t10;
f_11202(t13,(C_truep(t12)?t12:C_eqp(t8,lf[245])));}}}

/* k5673 in valid-c-identifier? in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5675,2,av);}
/* string->list */
t2=*((C_word*)lf[71]+1);{
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

/* for-each-loop3508 in walkeach in scan-free-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_15003(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_15003,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15013,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:1351: g3509 */
t5=((C_word*)t0)[3];
f_14991(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* ##compiler#words in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5677,3,av);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=stub341(C_SCHEME_UNDEFINED,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k9234 in loop in k9171 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9236(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9236,2,av);}
a=C_alloc(10);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9224,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
t7=((C_word*)t0)[5];
t8=C_u_i_cdr(t7);
/* support.scm:660: loop */
t9=((C_word*)((C_word*)t0)[6])[1];
f_9185(t9,t4,t6,t8);}

/* k11098 in loop in k11049 in matchn in match-node in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11100(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11100,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* support.scm:864: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_11069(t6,((C_word*)t0)[5],t3,t5);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5030 in k5027 in k5024 in g104 in collect in with-debugging-output in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5032,2,av);}
/* support.scm:90: ##sys#write-char-0 */
t2=*((C_word*)lf[18]+1);{
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

/* ##compiler#chop-separator in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15032(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_15032,3,av);}
a=C_alloc(9);
t3=C_i_string_length(t2);
t4=C_a_i_minus(&a,2,t3,C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15042,a[2]=t1,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_greaterp(t5,C_fix(0)))){
t7=C_i_string_ref(t2,t5);
t8=t6;
f_15042(t8,C_u_i_memq(t7,lf[486]));}
else{
t7=t6;
f_15042(t7,C_SCHEME_FALSE);}}

/* k10893 in k10757 in a10751 in emit-global-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10895(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10895,2,av);}
a=C_alloc(9);
if(C_truep(C_i_structurep(t1,lf[211]))){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_assq(lf[172],((C_word*)t0)[3]);
t3=C_i_not(t2);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10783,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t5=t4;
f_10783(t5,t3);}
else{
t5=C_i_cdr(t2);
t6=C_eqp(lf[169],t5);
t7=t4;
f_10783(t7,C_i_not(t6));}}}

/* ##compiler#load-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,3)))){
C_save_and_reclaim((void *)f_10897,3,av);}
a=C_alloc(2);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10903,tmp=(C_word)a,a+=2,tmp);
/* support.scm:823: with-input-from-file */
t4=*((C_word*)lf[316]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k9543 in k9424 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9545,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8099 in k8087 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8101(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_8101,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[211],((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop1192 in k8087 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_8103(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8103,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8128,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:581: g1198 */
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

/* k5059 in for-each-loop103 in k5044 in collect in with-debugging-output in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5061(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5061,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5051(t3,((C_word*)t0)[4],t2);}

/* k11951 in k11936 in k11868 in k11853 in repeat in a11823 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_11953(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,0,1)))){
C_save_and_reclaim_args((void *)trf_11953,2,t0,t1);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,lf[97],C_SCHEME_FALSE);
t3=C_a_i_list(&a,4,lf[225],((C_word*)t0)[2],t1,t2);
t4=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[109],((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11411 in a11405 in dump-undefined-globals in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_11413(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_11413,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11416,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:914: write */
t3=*((C_word*)lf[207]+1);{
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

/* k11414 in k11411 in a11405 in dump-undefined-globals in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11416,2,av);}
/* support.scm:915: newline */
t2=*((C_word*)lf[15]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5079 in k5076 in with-debugging-output in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5081(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5081,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5084,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* support.scm:97: display */
t4=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5082 in k5079 in k5076 in with-debugging-output in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5084,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5087,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:98: flush-output */
t3=*((C_word*)lf[25]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5085 in k5082 in k5079 in k5076 in with-debugging-output in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5087(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5087,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5093,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:99: test-debugging-mode */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k9529 in map-loop1723 in k9424 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9531(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9531,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9506(t6,((C_word*)t0)[5],t5);}

/* k9413 in loop in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_9415,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* support.scm:669: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9374(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* ##compiler#expand-profile-lambda in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6277(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6277,5,av);}
a=C_alloc(7);
t5=*((C_word*)lf[129]+1);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6281,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* support.scm:335: gensym */
t7=*((C_word*)lf[110]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k11437 in a11405 in dump-undefined-globals in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11439,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_11413(t2,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_assq(lf[189],((C_word*)t0)[3]))){
t2=C_i_assq(lf[187],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_11413(t3,C_i_not(t2));}
else{
t2=((C_word*)t0)[2];
f_11413(t2,C_SCHEME_FALSE);}}}

/* k5988 in immediate? in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5990,2,av);}
t2=((C_word*)t0)[2];
f_5950(t2,C_i_not(t1));}

/* ##compiler#basic-literal? in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5992(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5992,3,av);}
a=C_alloc(4);
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_symbolp(t2);
if(C_truep(t4)){
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6008,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:280: constant? */
t6=*((C_word*)lf[96]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}}

/* k5076 in with-debugging-output in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5078,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5081,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:96: with-output-to-string */
t3=*((C_word*)lf[23]+1);{
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
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5102,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* support.scm:101: test-debugging-mode */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k9424 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_9426(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_9426,2,t0,t1);}
a=C_alloc(21);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9433,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* support.scm:671: walk */
t4=((C_word*)((C_word*)t0)[2])[1];{
C_word av2[3];
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
f_8788(3,av2);}}
else{
t2=C_eqp(((C_word*)t0)[7],lf[251]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[7],lf[273]));
if(C_truep(t3)){
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=((C_word*)((C_word*)t0)[2])[1];
t9=C_i_check_list_2(((C_word*)t0)[3],lf[161]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9504,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9506,a[2]=t6,a[3]=t12,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_9506(t14,t10,((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9545,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=((C_word*)((C_word*)t0)[2])[1];
t10=C_i_check_list_2(((C_word*)t0)[3],lf[161]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9555,a[2]=t4,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9557,a[2]=t7,a[3]=t13,a[4]=t9,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_9557(t15,t11,((C_word*)t0)[3]);}}}

/* k9553 in k9424 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9555,2,av);}
/* support.scm:674: append */
t2=*((C_word*)lf[69]+1);{
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

/* a11446 in dump-defined-globals in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11447(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11447,4,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11454,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11476,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:921: keyword? */
t6=*((C_word*)lf[326]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* ##compiler#dump-defined-globals in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11441(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_11441,3,av);}
a=C_alloc(2);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11447,tmp=(C_word)a,a+=2,tmp);
/* support.scm:919: ##sys#hash-table-for-each */
t4=*((C_word*)lf[162]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* map-loop1749 in k9424 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_9557(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9557,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9582,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:674: g1755 */
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

/* ##compiler#simple-lambda-node? in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11279(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11279,3,av);}
a=C_alloc(6);
t3=t2;
t4=C_slot(t3,C_fix(2));
t5=C_i_caddr(t4);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_u_i_car(t5):C_SCHEME_FALSE);
t8=t7;
if(C_truep(t8)){
t9=C_u_i_cdr(t4);
if(C_truep(C_u_i_car(t9))){
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11307,a[2]=t8,a[3]=t11,tmp=(C_word)a,a+=4,tmp));
t13=((C_word*)t11)[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=t1;
av2[2]=t2;
f_11307(3,av2);}}
else{
t10=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}
else{
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* k11455 in k11452 in a11446 in dump-defined-globals in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11457,2,av);}
/* support.scm:925: newline */
t2=*((C_word*)lf[15]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11452 in a11446 in dump-defined-globals in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_11454(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_11454,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11457,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:924: write */
t3=*((C_word*)lf[207]+1);{
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

/* k6027 in k6012 in k6006 in basic-literal? in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6029,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* support.scm:284: basic-literal? */
t4=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k6012 in k6006 in basic-literal? in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6014,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6029,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
/* support.scm:283: basic-literal? */
t5=*((C_word*)lf[103]+1);{
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
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* k10815 in k10860 in k10781 in k10893 in k10757 in a10751 in emit-global-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10817(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10817,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10820,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(t1,lf[309]);
if(C_truep(t3)){
t4=t2;
f_10820(t4,C_SCHEME_TRUE);}
else{
t4=C_eqp(t1,lf[310]);
if(C_truep(t4)){
t5=t2;
f_10820(t5,C_SCHEME_FALSE);}
else{
t5=C_i_cadddr(((C_word*)t0)[7]);
t6=t2;
f_10820(t6,C_i_lessp(t5,*((C_word*)lf[311]+1)));}}}

/* a11215 in k11200 in walk in expression-has-side-effects? in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11216,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11224,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:883: foreign-callback-stub-id */
t4=*((C_word*)lf[321]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8384 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8386(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8386,2,av);}
a=C_alloc(20);
t2=C_i_cadr(t1);
t3=C_a_i_list4(&a,4,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8366,a[2]=((C_word*)t0)[5],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8370,a[2]=((C_word*)t0)[6],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* support.scm:597: sixth */
t7=*((C_word*)lf[249]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* ##compiler#dump-global-refs in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_11478,3,av);}
a=C_alloc(2);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11484,tmp=(C_word)a,a+=2,tmp);
/* support.scm:929: ##sys#hash-table-for-each */
t4=*((C_word*)lf[162]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k11474 in a11446 in dump-defined-globals in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11476,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_11454(t2,C_SCHEME_FALSE);}
else{
t2=C_i_assq(lf[189],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_11454(t3,(C_truep(t2)?C_i_assq(lf[187],((C_word*)t0)[3]):C_SCHEME_FALSE));}}

/* k6006 in basic-literal? in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6008,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6014,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_vectorp(((C_word*)t0)[3]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6046,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:281: vector->list */
t4=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_6014(2,av2);}}}}

/* k4985 in k4982 in k4979 in debugging in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_4987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4987,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4990,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:78: flush-output */
t3=*((C_word*)lf[25]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4982 in k4979 in debugging in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_4984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4984,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4987,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* support.scm:77: display */
t4=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6493 in for-each-loop581 in k6385 in initialize-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6495,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6485(t3,((C_word*)t0)[4],t2);}

/* k11222 in a11215 in k11200 in walk in expression-has-side-effects? in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11224,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8833 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8835,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop1484 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_8837(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8837,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8862,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:629: g1490 */
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

/* a11483 in dump-global-refs in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11484,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11525,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:931: keyword? */
t5=*((C_word*)lf[326]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4979 in debugging in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_4981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4981,2,av);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4984,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:76: text */
t3=((C_word*)((C_word*)t0)[5])[1];
f_4897(t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5002,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5005,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* support.scm:83: test-debugging-mode */
t4=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* for-each-loop103 in k5044 in collect in with-debugging-output in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_5051(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5051,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5061,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:87: g104 */
t5=((C_word*)t0)[3];
f_5019(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4917 in k4905 in a4902 in text in debugging in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_4919(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4919,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4939,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4939(t6,((C_word*)t0)[3],t2);}

/* for-each-loop581 in k6385 in initialize-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_6485(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_6485,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6495,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6406,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t8=C_a_i_list(&a,1,lf[146]);
if(C_truep(C_i_nullp(t8))){
/* tweaks.scm:54: ##sys#put! */
t9=*((C_word*)lf[142]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t7;
av2[2]=t6;
av2[3]=lf[143];
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t9=C_i_car(t8);
/* tweaks.scm:54: ##sys#put! */
t10=*((C_word*)lf[142]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t7;
av2[2]=t6;
av2[3]=lf[143];
av2[4]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_8822(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_8822,2,t0,t1);}
a=C_alloc(21);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=((C_word*)((C_word*)t0)[2])[1];
t7=C_i_check_list_2(((C_word*)t0)[3],lf[161]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8835,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8837,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_8837(t12,t8,((C_word*)t0)[3]);}
else{
t2=C_eqp(((C_word*)t0)[6],lf[264]);
if(C_truep(t2)){
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)((C_word*)t0)[2])[1];
t8=C_i_check_list_2(((C_word*)t0)[3],lf[161]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8892,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8894,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_8894(t13,t9,((C_word*)t0)[3]);}
else{
t3=C_eqp(((C_word*)t0)[6],lf[221]);
if(C_truep(t3)){
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_i_car(((C_word*)t0)[7]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(((C_word*)t0)[6],lf[97]);
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
av2[1]=C_a_i_list(&a,2,lf[97],t7);
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
av2[1]=C_a_i_list(&a,2,lf[97],t8);
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
av2[1]=C_a_i_list(&a,2,lf[97],t10);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}}}
else{
t5=C_eqp(((C_word*)t0)[6],lf[109]);
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
t16=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8992,a[2]=t10,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t8,a[7]=t9,a[8]=t13,a[9]=t15,a[10]=t14,tmp=(C_word)a,a+=11,tmp);
/* support.scm:639: butlast */
t17=*((C_word*)lf[266]+1);{
C_word av2[3];
av2[0]=t17;
av2[1]=t16;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t17+1)))(3,av2);}}
else{
t6=C_eqp(((C_word*)t0)[6],lf[133]);
if(C_truep(t6)){
t7=C_i_cadr(((C_word*)t0)[7]);
t8=(C_truep(t7)?lf[235]:lf[133]);
t9=t8;
t10=C_i_caddr(((C_word*)t0)[7]);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9115,a[2]=((C_word*)t0)[4],a[3]=t9,a[4]=t11,tmp=(C_word)a,a+=5,tmp);
t13=C_i_car(((C_word*)t0)[3]);
/* support.scm:646: walk */
t14=((C_word*)((C_word*)t0)[2])[1];{
C_word av2[3];
av2[0]=t14;
av2[1]=t12;
av2[2]=t13;
f_8788(3,av2);}}
else{
t7=C_eqp(((C_word*)t0)[6],lf[236]);
if(C_truep(t7)){
t8=C_i_car(((C_word*)t0)[7]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9139,a[2]=((C_word*)t0)[4],a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=C_i_car(((C_word*)t0)[3]);
/* support.scm:648: walk */
t12=((C_word*)((C_word*)t0)[2])[1];{
C_word av2[3];
av2[0]=t12;
av2[1]=t10;
av2[2]=t11;
f_8788(3,av2);}}
else{
t8=C_eqp(((C_word*)t0)[6],lf[268]);
if(C_truep(t8)){
t9=C_i_car(((C_word*)t0)[3]);
/* support.scm:650: walk */
t10=((C_word*)((C_word*)t0)[2])[1];{
C_word av2[3];
av2[0]=t10;
av2[1]=((C_word*)t0)[4];
av2[2]=t9;
f_8788(3,av2);}}
else{
t9=C_eqp(((C_word*)t0)[6],lf[237]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9173,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t11=C_i_car(((C_word*)t0)[3]);
/* support.scm:653: walk */
t12=((C_word*)((C_word*)t0)[2])[1];{
C_word av2[3];
av2[0]=t12;
av2[1]=t10;
av2[2]=t11;
f_8788(3,av2);}}
else{
t10=C_eqp(((C_word*)t0)[6],lf[253]);
if(C_truep(t10)){
t11=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t12=t11;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=((C_word*)t13)[1];
t15=((C_word*)((C_word*)t0)[2])[1];
t16=C_i_check_list_2(((C_word*)t0)[3],lf[161]);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9261,a[2]=t13,a[3]=t18,a[4]=t15,a[5]=t14,tmp=(C_word)a,a+=6,tmp));
t20=((C_word*)t18)[1];
f_9261(t20,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t11=C_eqp(((C_word*)t0)[6],lf[243]);
if(C_truep(t11)){
t12=C_i_car(((C_word*)t0)[7]);
t13=t12;
t14=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t15=t14;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=((C_word*)t16)[1];
t18=((C_word*)((C_word*)t0)[2])[1];
t19=C_i_check_list_2(((C_word*)t0)[3],lf[161]);
t20=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9316,a[2]=((C_word*)t0)[4],a[3]=t13,tmp=(C_word)a,a+=4,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9318,a[2]=t16,a[3]=t22,a[4]=t18,a[5]=t17,tmp=(C_word)a,a+=6,tmp));
t24=((C_word*)t22)[1];
f_9318(t24,t20,((C_word*)t0)[3]);}
else{
t12=C_eqp(((C_word*)t0)[6],lf[226]);
if(C_truep(t12)){
t13=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t13;
av2[1]=C_a_i_list1(&a,1,((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t13=C_eqp(((C_word*)t0)[6],lf[271]);
if(C_truep(t13)){
t14=C_i_car(((C_word*)t0)[7]);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9374,a[2]=((C_word*)t0)[2],a[3]=t16,tmp=(C_word)a,a+=4,tmp));
t18=((C_word*)t16)[1];
f_9374(t18,((C_word*)t0)[4],t14,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}
else{
t14=C_eqp(((C_word*)t0)[6],lf[272]);
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9426,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t14)){
t16=t15;
f_9426(t16,t14);}
else{
t16=C_eqp(((C_word*)t0)[6],lf[274]);
if(C_truep(t16)){
t17=t15;
f_9426(t17,t16);}
else{
t17=C_eqp(((C_word*)t0)[6],lf[275]);
t18=t15;
f_9426(t18,(C_truep(t17)?t17:C_eqp(((C_word*)t0)[6],lf[276])));}}}}}}}}}}}}}}}}

/* k11495 in k11523 in a11483 in dump-global-refs in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11497,2,av);}
/* support.scm:934: newline */
t2=*((C_word*)lf[15]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4908 in k4905 in a4902 in text in debugging in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_4910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4910,2,av);}
/* support.scm:72: newline */
t2=*((C_word*)lf[15]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8048 in loop in k8060 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8050,2,av);}
/* support.scm:575: walk */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
f_7547(3,av2);}}

/* k6279 in expand-profile-lambda in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6281(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(106,c,1)))){
C_save_and_reclaim((void *)f_6281,2,av);}
a=C_alloc(106);
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]),*((C_word*)lf[130]+1));
t3=C_mutate2((C_word*)lf[130]+1 /* (set! ##compiler#profile-lambda-list ...) */,t2);
t4=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t5=C_mutate2((C_word*)lf[129]+1 /* (set! ##compiler#profile-lambda-index ...) */,t4);
t6=C_a_i_list(&a,2,lf[97],((C_word*)t0)[2]);
t7=C_a_i_list(&a,3,lf[131],t6,*((C_word*)lf[132]+1));
t8=C_a_i_list(&a,3,lf[133],C_SCHEME_END_OF_LIST,t7);
t9=C_a_i_list(&a,3,lf[133],((C_word*)t0)[4],((C_word*)t0)[5]);
t10=C_a_i_list(&a,3,lf[134],t9,t1);
t11=C_a_i_list(&a,3,lf[133],C_SCHEME_END_OF_LIST,t10);
t12=C_a_i_list(&a,2,lf[97],((C_word*)t0)[2]);
t13=C_a_i_list(&a,3,lf[135],t12,*((C_word*)lf[132]+1));
t14=C_a_i_list(&a,3,lf[133],C_SCHEME_END_OF_LIST,t13);
t15=C_a_i_list(&a,4,lf[136],t8,t11,t14);
t16=((C_word*)t0)[6];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t16;
av2[1]=C_a_i_list(&a,3,lf[133],t1,t15);
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}

/* k6470 in for-each-loop628 in k6433 in k6385 in initialize-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6472,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6462(t3,((C_word*)t0)[4],t2);}

/* k4967 in dump in debugging in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_4969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4969,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4972,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:62: ##sys#write-char-0 */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(124);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k9085 in map-loop1576 in k8990 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9087(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9087,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9062(t6,((C_word*)t0)[5],t5);}

/* dump in debugging in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_4962(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_4962,3,t0,t1,t2);}
a=C_alloc(5);
t3=*((C_word*)lf[8]+1);
t4=*((C_word*)lf[8]+1);
t5=C_i_check_port_2(*((C_word*)lf[8]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[24]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4969,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:62: ##sys#print */
t7=*((C_word*)lf[19]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[8]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k8060 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8062(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8062,2,av);}
a=C_alloc(10);
t2=C_a_i_list1(&a,1,t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7939,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_7939(t6,((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_END_OF_LIST,t2);}

/* for-each-loop628 in k6433 in k6385 in initialize-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_6462(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_6462,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6472,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_list(&a,1,lf[141]);
if(C_truep(C_i_nullp(t5))){
/* tweaks.scm:54: ##sys#put! */
t6=*((C_word*)lf[142]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[143];
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t6=C_i_car(t5);
/* tweaks.scm:54: ##sys#put! */
t7=*((C_word*)lf[142]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[143];
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4970 in k4967 in dump in debugging in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_4972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4972,2,av);}
/* support.scm:62: ##sys#print */
t2=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* ##compiler#collapsable-literal? in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5916(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5916,3,av);}
t3=C_booleanp(t2);
if(C_truep(t3)){
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_charp(t2);
if(C_truep(t4)){
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eofp(t2);
if(C_truep(t5)){
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_i_numberp(t2);
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=(C_truep(t6)?t6:C_i_symbolp(t2));
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}}

/* ##compiler#posq in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5336(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5336,4,av);}
a=C_alloc(6);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5342,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5342(t7,t1,t3,C_fix(0));}

/* k8087 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_8089(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_8089,2,t0,t1);}
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
t11=C_i_check_list_2(t10,lf[161]);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8101,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8103,a[2]=t5,a[3]=t14,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_8103(t16,t12,t10);}

/* node-subexpressions-set! in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7496,4,av);}
t4=C_i_check_structure_2(t2,lf[211],C_SCHEME_FALSE);
/* support.scm:505: ##sys#block-set! */
t5=*((C_word*)lf[215]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(3);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k5898 in k5886 in constant? in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5900,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_eqp(lf[97],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* map-loop1576 in k8990 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_9062(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9062,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9087,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:639: g1582 */
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

/* k8860 in map-loop1484 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8862(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8862,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8837(t6,((C_word*)t0)[5],t5);}

/* node-subexpressions in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7487(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7487,3,av);}
t3=C_i_check_structure_2(t2,lf[211],lf[218]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(3));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k8213 in map-loop1226 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8215(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8215,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8190(t6,((C_word*)t0)[5],t5);}

/* k8368 in k8384 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8370(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8370,2,av);}
/* support.scm:597: walk */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
f_7547(3,av2);}}

/* ##compiler#variable-hidden? in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16106(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_16106,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16114,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1631: ##sys#get */
t4=*((C_word*)lf[255]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[541];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* matchn in match-node in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_11029(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_11029,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_i_not_pair_p(t3))){
/* support.scm:855: resolve */
t4=((C_word*)((C_word*)t0)[2])[1];
f_10956(t4,t1,t3,t2);}
else{
t4=t2;
t5=C_slot(t4,C_fix(1));
t6=C_i_car(t3);
t7=C_eqp(t5,t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11051,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t9=t2;
t10=C_slot(t9,C_fix(2));
t11=C_i_cadr(t3);
/* support.scm:857: match1 */
t12=((C_word*)((C_word*)t0)[4])[1];
f_10990(t12,t8,t10,t11);}
else{
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}}

/* k4994 in k4988 in k4985 in k4982 in k4979 in debugging in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_4996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4996,2,av);}
if(C_truep(t1)){
/* support.scm:80: dump */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4962(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k8126 in map-loop1192 in k8087 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8128(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8128,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8103(t6,((C_word*)t0)[5],t5);}

/* k4991 in k4988 in k4985 in k4982 in k4979 in debugging in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_4993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4993,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4988 in k4985 in k4982 in k4979 in debugging in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_4990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4990,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4993,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4996,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* support.scm:79: test-debugging-mode */
t4=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k9222 in k9234 in loop in k9171 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9224,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9006 in k9002 in k8993 in k8990 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9008,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[109],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9002 in k8993 in k8990 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_9004,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9008,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9012,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:640: last */
t5=*((C_word*)lf[265]+1);{
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

/* g727 in k6747 in k6744 in get-line-2 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_6753(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_6753,3,t0,t1,t2);}
t3=C_i_car(((C_word*)t0)[2]);
t4=C_i_cdr(t2);
/* support.scm:425: values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_values(4,av2);}}

/* k9502 in k9424 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9504(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9504,2,av);}
/* support.scm:673: cons* */
t2=*((C_word*)lf[270]+1);{
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

/* map-loop1723 in k9424 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_9506(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9506,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9531,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:673: g1729 */
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

/* ##compiler#display-line-number-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_6780,2,av);}
a=C_alloc(2);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6786,tmp=(C_word)a,a+=2,tmp);
/* support.scm:429: ##sys#hash-table-for-each */
t3=*((C_word*)lf[162]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=*((C_word*)lf[158]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a6785 in display-line-number-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6786(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6786,4,av);}
a=C_alloc(5);
if(C_truep(t3)){
t4=*((C_word*)lf[16]+1);
t5=*((C_word*)lf[16]+1);
t6=C_i_check_port_2(*((C_word*)lf[16]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[17]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6796,a[2]=t1,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:431: ##sys#print */
t8=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k9207 in loop in k9171 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9209,2,av);}
a=C_alloc(9);
t2=C_a_i_list(&a,2,lf[238],t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_list(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5027 in k5024 in g104 in collect in with-debugging-output in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_5029,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5032,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:90: ##sys#print */
t3=*((C_word*)lf[19]+1);{
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
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5024 in g104 in collect in with-debugging-output in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5026,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5029,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:90: ##sys#write-char-0 */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(124);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k8364 in k8384 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void *)f_8366,2,av);}
a=C_alloc(8);
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[2];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[211],lf[248],((C_word*)t0)[3],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6722 in get-list in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6724,2,av);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* ##compiler#get-line in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6729,3,av);}
t3=C_i_car(t2);
/* support.scm:419: get */
t4=*((C_word*)lf[148]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=*((C_word*)lf[158]+1);
av2[3]=t3;
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* ##compiler#get-list in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6720(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6720,5,av);}
a=C_alloc(3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6724,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:412: get */
t6=*((C_word*)lf[148]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* ##compiler#with-debugging-output in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5014(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5014,4,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5017,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5078,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* support.scm:95: test-debugging-mode */
t6=*((C_word*)lf[11]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=*((C_word*)lf[1]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k5010 in k5003 in k4979 in debugging in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5012,2,av);}
/* support.scm:84: dump */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4962(t2,((C_word*)t0)[3],t1);}

/* g104 in collect in with-debugging-output in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_5019(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_5019,3,t0,t1,t2);}
a=C_alloc(5);
t3=*((C_word*)lf[8]+1);
t4=*((C_word*)lf[8]+1);
t5=C_i_check_port_2(*((C_word*)lf[8]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[24]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5026,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t7=((C_word*)t0)[2];
t8=C_u_i_car(t7);
/* support.scm:90: ##sys#print */
t9=*((C_word*)lf[19]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t6;
av2[2]=t8;
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[8]+1);
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t7=((C_word*)t0)[2];
/* support.scm:90: ##sys#print */
t8=*((C_word*)lf[19]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}}

/* collect in with-debugging-output in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_5017(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_5017,3,t0,t1,t2);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5019,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5046,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:94: string-split */
t5=*((C_word*)lf[27]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[28];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* node-parameters-set! in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7478,4,av);}
t4=C_i_check_structure_2(t2,lf[211],C_SCHEME_FALSE);
/* support.scm:505: ##sys#block-set! */
t5=*((C_word*)lf[215]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(2);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* f17665 in print-version in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f17665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f17665,2,av);}
/* support.scm:1669: print */
t2=*((C_word*)lf[296]+1);{
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

/* node-class-set! in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7460(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7460,4,av);}
t4=C_i_check_structure_2(t2,lf[211],C_SCHEME_FALSE);
/* support.scm:505: ##sys#block-set! */
t5=*((C_word*)lf[215]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(1);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k7161 in k7158 in k7155 in k7149 in k7070 in loop in k6868 in a6859 in k6853 in display-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7163,2,av);}
t2=C_i_cdar(((C_word*)t0)[2]);
/* support.scm:482: ##sys#print */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k7158 in k7155 in k7149 in k7070 in loop in k6868 in a6859 in k6853 in display-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7160,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7163,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:482: ##sys#write-char-0 */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(61);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* node-parameters in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7469,3,av);}
t3=C_i_check_structure_2(t2,lf[211],lf[216]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(2));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6747 in k6744 in get-line-2 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_6749(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_6749,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6753,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:421: g727 */
t3=t2;
f_6753(t3,((C_word*)t0)[3],t1);}
else{
/* support.scm:426: values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}

/* k6744 in get-line-2 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6746,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6749,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=C_i_cdr(t2);
t5=t3;
f_6749(t5,C_i_assq(((C_word*)t0)[4],t4));}
else{
t4=t3;
f_6749(t4,C_SCHEME_FALSE);}}

/* k8044 in loop in k8060 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_8046,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* support.scm:573: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7939(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k7149 in k7070 in loop in k6868 in a6859 in k6853 in display-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_7151(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_7151,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=*((C_word*)lf[16]+1);
t3=*((C_word*)lf[16]+1);
t4=C_i_check_port_2(*((C_word*)lf[16]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[17]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7157,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:482: ##sys#write-char-0 */
t6=*((C_word*)lf[18]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_make_character(9);
av2[3]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[176]);
if(C_truep(t2)){
t3=C_i_cdar(((C_word*)t0)[2]);
t4=C_mutate2(((C_word *)((C_word*)t0)[5])+1,t3);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* support.scm:488: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_7048(t7,((C_word*)t0)[7],t6);}
else{
t3=C_eqp(((C_word*)t0)[4],lf[177]);
if(C_truep(t3)){
t4=C_i_cdar(((C_word*)t0)[2]);
t5=C_mutate2(((C_word *)((C_word*)t0)[8])+1,t4);
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
/* support.scm:488: loop */
t8=((C_word*)((C_word*)t0)[6])[1];
f_7048(t8,((C_word*)t0)[7],t7);}
else{
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
/* support.scm:487: bomb */
t6=*((C_word*)lf[3]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[178];
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}}}

/* node-class in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7451,3,av);}
t3=C_i_check_structure_2(t2,lf[211],lf[213]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7155 in k7149 in k7070 in loop in k6868 in a6859 in k6853 in display-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_7157,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7160,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_caar(((C_word*)t0)[2]);
/* support.scm:482: ##sys#print */
t4=*((C_word*)lf[19]+1);{
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

/* ##compiler#get-line-2 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6739(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6739,3,av);}
a=C_alloc(5);
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6746,a[2]=t1,a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:423: ##sys#hash-table-ref */
t6=*((C_word*)lf[149]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=*((C_word*)lf[158]+1);
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* node? in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7445(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7445,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[211]);
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
else C_toplevel_entry(C_text("support_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_support_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(4478))){
C_save(t1);
C_rereclaim2(4478*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,569);
lf[0]=C_h_intern(&lf[0],30,"\010compilercompiler-cleanup-hook");
lf[1]=C_h_intern(&lf[1],26,"\010compilerdebugging-chicken");
lf[2]=C_h_intern(&lf[2],26,"\010compilerdisabled-warnings");
lf[3]=C_h_intern(&lf[3],13,"\010compilerbomb");
lf[4]=C_h_intern(&lf[4],5,"error");
lf[5]=C_h_intern(&lf[5],13,"string-append");
lf[6]=C_decode_literal(C_heaptop,"\376B\000\000\032[internal compiler error] ");
lf[7]=C_decode_literal(C_heaptop,"\376B\000\000\031[internal compiler error]");
lf[8]=C_h_intern(&lf[8],35,"\010compilercollected-debugging-output");
lf[9]=C_h_intern(&lf[9],24,"+logged-debugging-modes+");
lf[10]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001o\376\003\000\000\002\376\001\000\000\001x\376\003\000\000\002\376\001\000\000\001S\376\377\016");
lf[11]=C_h_intern(&lf[11],19,"test-debugging-mode");
lf[12]=C_h_intern(&lf[12],17,"lset-intersection");
lf[13]=C_h_intern(&lf[13],3,"eq\077");
lf[14]=C_h_intern(&lf[14],18,"\010compilerdebugging");
lf[15]=C_h_intern(&lf[15],7,"newline");
lf[16]=C_h_intern(&lf[16],19,"\003sysstandard-output");
lf[17]=C_h_intern(&lf[17],6,"printf");
lf[18]=C_h_intern(&lf[18],16,"\003syswrite-char-0");
lf[19]=C_h_intern(&lf[19],9,"\003sysprint");
lf[20]=C_h_intern(&lf[20],5,"force");
lf[21]=C_h_intern(&lf[21],7,"display");
lf[22]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[23]=C_h_intern(&lf[23],21,"with-output-to-string");
lf[24]=C_h_intern(&lf[24],7,"fprintf");
lf[25]=C_h_intern(&lf[25],12,"flush-output");
lf[26]=C_h_intern(&lf[26],30,"\010compilerwith-debugging-output");
lf[27]=C_h_intern(&lf[27],12,"string-split");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[29]=C_h_intern(&lf[29],13,"\010compilerquit");
lf[30]=C_h_intern(&lf[30],18,"\003sysstandard-error");
lf[31]=C_h_intern(&lf[31],4,"exit");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000\010\012Error: ");
lf[33]=C_h_intern(&lf[33],21,"\003syssyntax-error-hook");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\005\011~s~%");
lf[35]=C_h_intern(&lf[35],8,"for-each");
lf[36]=C_h_intern(&lf[36],16,"print-call-chain");
lf[37]=C_h_intern(&lf[37],18,"\003syscurrent-thread");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\025\012\011Expansion history:\012");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\003): ");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\017\012Syntax error (");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\017\012Syntax error: ");
lf[42]=C_h_intern(&lf[42],12,"syntax-error");
lf[43]=C_h_intern(&lf[43],31,"\010compileremit-syntax-trace-info");
lf[44]=C_h_intern(&lf[44],9,"map-llist");
lf[45]=C_h_intern(&lf[45],24,"\010compilercheck-signature");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000@Arguments to inlined call of `~A\047 do not match parameter-list ~A");
lf[47]=C_h_intern(&lf[47],18,"\010compilerreal-name");
lf[48]=C_h_intern(&lf[48],13,"\010compilerposq");
lf[49]=C_h_intern(&lf[49],13,"\010compilerposv");
lf[50]=C_h_intern(&lf[50],18,"\010compilerstringify");
lf[51]=C_h_intern(&lf[51],14,"symbol->string");
lf[52]=C_h_intern(&lf[52],7,"sprintf");
lf[53]=C_h_intern(&lf[53],17,"get-output-string");
lf[54]=C_h_intern(&lf[54],18,"open-output-string");
lf[55]=C_h_intern(&lf[55],18,"\010compilersymbolify");
lf[56]=C_h_intern(&lf[56],14,"string->symbol");
lf[57]=C_h_intern(&lf[57],21,"\010compilerbackslashify");
lf[58]=C_h_intern(&lf[58],17,"string-translate\052");
lf[59]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\001\134\376B\000\000\002\134\134\376\377\016");
lf[60]=C_h_intern(&lf[60],8,"->string");
lf[61]=C_h_intern(&lf[61],21,"\010compileruncommentify");
lf[62]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\002\052/\376B\000\000\003\052_/\376\377\016");
lf[63]=C_h_intern(&lf[63],26,"\010compilerbuild-lambda-list");
lf[64]=C_h_intern(&lf[64],29,"\010compilerstring->c-identifier");
lf[65]=C_h_intern(&lf[65],24,"\003sysstring->c-identifier");
lf[66]=C_h_intern(&lf[66],21,"\010compilerc-ify-string");
lf[67]=C_h_intern(&lf[67],16,"\003syslist->string");
lf[68]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\042\376\377\016");
lf[69]=C_h_intern(&lf[69],6,"append");
lf[70]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\377\016");
lf[71]=C_h_intern(&lf[71],16,"\003sysstring->list");
lf[72]=C_h_intern(&lf[72],14,"number->string");
lf[73]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\0000\376\003\000\000\002\376\377\012\000\0000\376\377\016");
lf[74]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\0000\376\377\016");
lf[75]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\042\376\003\000\000\002\376\377\012\000\000\047\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000\077\376\003\000\000\002\376\377\012\000\000\052\376\377\016");
lf[76]=C_h_intern(&lf[76],28,"\010compilervalid-c-identifier\077");
lf[77]=C_h_intern(&lf[77],3,"any");
lf[78]=C_h_intern(&lf[78],14,"\010compilerwords");
lf[79]=C_h_intern(&lf[79],21,"\010compilerwords->bytes");
lf[80]=C_h_intern(&lf[80],34,"\010compilercheck-and-open-input-file");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[82]=C_h_intern(&lf[82],18,"\003sysstandard-input");
lf[83]=C_h_intern(&lf[83],15,"open-input-file");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\024Can not open file ~s");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\031(~a) can not open file ~s");
lf[86]=C_h_intern(&lf[86],12,"file-exists\077");
lf[87]=C_h_intern(&lf[87],33,"\010compilerclose-checked-input-file");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[89]=C_h_intern(&lf[89],16,"close-input-port");
lf[90]=C_h_intern(&lf[90],19,"\010compilerfold-inner");
lf[91]=C_h_intern(&lf[91],7,"reverse");
lf[92]=C_h_intern(&lf[92],28,"\010compilerfollow-without-loop");
lf[93]=C_h_intern(&lf[93],21,"\010compilersort-symbols");
lf[94]=C_h_intern(&lf[94],8,"string<\077");
lf[95]=C_h_intern(&lf[95],4,"sort");
lf[96]=C_h_intern(&lf[96],18,"\010compilerconstant\077");
lf[97]=C_h_intern(&lf[97],5,"quote");
lf[98]=C_h_intern(&lf[98],18,"\003syssrfi-4-vector\077");
lf[99]=C_h_intern(&lf[99],5,"blob\077");
lf[100]=C_h_intern(&lf[100],29,"\010compilercollapsable-literal\077");
lf[101]=C_h_intern(&lf[101],19,"\010compilerimmediate\077");
lf[102]=C_h_intern(&lf[102],20,"\010compilerbig-fixnum\077");
lf[103]=C_h_intern(&lf[103],23,"\010compilerbasic-literal\077");
lf[104]=C_h_intern(&lf[104],5,"every");
lf[105]=C_h_intern(&lf[105],12,"vector->list");
lf[106]=C_h_intern(&lf[106],32,"\010compilercanonicalize-begin-body");
lf[107]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[108]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[109]=C_h_intern(&lf[109],3,"let");
lf[110]=C_h_intern(&lf[110],6,"gensym");
lf[111]=C_h_intern(&lf[111],1,"t");
lf[112]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010\003sysvoid\376\377\016");
lf[113]=C_h_intern(&lf[113],21,"\010compilerstring->expr");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot parse expression: ~s [~a]~%");
lf[115]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[116]=C_h_intern(&lf[116],5,"begin");
lf[117]=C_h_intern(&lf[117],4,"read");
lf[118]=C_h_intern(&lf[118],6,"unfold");
lf[119]=C_h_intern(&lf[119],11,"eof-object\077");
lf[120]=C_h_intern(&lf[120],6,"values");
lf[121]=C_h_intern(&lf[121],22,"with-input-from-string");
lf[122]=C_h_intern(&lf[122],22,"with-exception-handler");
lf[123]=C_h_intern(&lf[123],30,"call-with-current-continuation");
lf[124]=C_h_intern(&lf[124],30,"\010compilerdecompose-lambda-list");
lf[125]=C_h_intern(&lf[125],25,"\003sysdecompose-lambda-list");
lf[126]=C_h_intern(&lf[126],21,"\010compilerllist-length");
lf[127]=C_h_intern(&lf[127],21,"\010compilerllist-match\077");
lf[128]=C_h_intern(&lf[128],30,"\010compilerexpand-profile-lambda");
lf[129]=C_h_intern(&lf[129],29,"\010compilerprofile-lambda-index");
lf[130]=C_h_intern(&lf[130],28,"\010compilerprofile-lambda-list");
lf[131]=C_h_intern(&lf[131],17,"\003sysprofile-entry");
lf[132]=C_h_intern(&lf[132],33,"\010compilerprofile-info-vector-name");
lf[133]=C_h_intern(&lf[133],11,"\004corelambda");
lf[134]=C_h_intern(&lf[134],9,"\003sysapply");
lf[135]=C_h_intern(&lf[135],16,"\003sysprofile-exit");
lf[136]=C_h_intern(&lf[136],16,"\003sysdynamic-wind");
lf[137]=C_h_intern(&lf[137],37,"\010compilerinitialize-analysis-database");
lf[138]=C_h_intern(&lf[138],17,"standard-bindings");
lf[139]=C_h_intern(&lf[139],17,"extended-bindings");
lf[140]=C_h_intern(&lf[140],26,"\010compilerinternal-bindings");
lf[141]=C_h_intern(&lf[141],8,"internal");
lf[142]=C_h_intern(&lf[142],8,"\003sysput!");
lf[143]=C_h_intern(&lf[143],18,"\010compilerintrinsic");
lf[144]=C_h_intern(&lf[144],26,"\010compilerfoldable-bindings");
lf[145]=C_h_intern(&lf[145],17,"\010compilerfoldable");
lf[146]=C_h_intern(&lf[146],8,"extended");
lf[147]=C_h_intern(&lf[147],8,"standard");
lf[148]=C_h_intern(&lf[148],12,"\010compilerget");
lf[149]=C_h_intern(&lf[149],18,"\003syshash-table-ref");
lf[150]=C_h_intern(&lf[150],16,"\010compilerget-all");
lf[151]=C_h_intern(&lf[151],10,"filter-map");
lf[152]=C_h_intern(&lf[152],13,"\010compilerput!");
lf[153]=C_h_intern(&lf[153],19,"\003syshash-table-set!");
lf[154]=C_h_intern(&lf[154],17,"\010compilercollect!");
lf[155]=C_h_intern(&lf[155],15,"\010compilercount!");
lf[156]=C_h_intern(&lf[156],17,"\010compilerget-list");
lf[157]=C_h_intern(&lf[157],17,"\010compilerget-line");
lf[158]=C_h_intern(&lf[158],24,"\003sysline-number-database");
lf[159]=C_h_intern(&lf[159],19,"\010compilerget-line-2");
lf[160]=C_h_intern(&lf[160],37,"\010compilerdisplay-line-number-database");
lf[161]=C_h_intern(&lf[161],3,"map");
lf[162]=C_h_intern(&lf[162],23,"\003syshash-table-for-each");
lf[163]=C_h_intern(&lf[163],34,"\010compilerdisplay-analysis-database");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\005\011css=");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\006\011refs=");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\005\011val=");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\006\011lval=");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000\006\011pval=");
lf[169]=C_h_intern(&lf[169],7,"unknown");
lf[170]=C_h_intern(&lf[170],8,"captured");
lf[171]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010captured\376\001\000\000\003cpt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010assigned\376\001\000\000\003set\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005box"
"ed\376\001\000\000\003box\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006global\376\001\000\000\003glo\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020assigned-locally\376\001\000\000\003stl\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\014contractable\376\001\000\000\003con\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020standard-binding\376\001\000\000\003stb\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\006simple\376\001\000\000\003sim\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011inlinable\376\001\000\000\003inl\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013collapsable\376"
"\001\000\000\003col\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011removable\376\001\000\000\003rem\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010constant\376\001\000\000\003con\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\015inline-target\376\001\000\000\003ilt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020inline-transient\376\001\000\000\003itr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011"
"undefined\376\001\000\000\003und\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011replacing\376\001\000\000\003rpg\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006unused\376\001\000\000\003uud\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\020extended-binding\376\001\000\000\003xtb\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015inline-export\376\001\000\000\003ilx\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\013hidden-refs\376\001\000\000\003hrf\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011value-ref\376\001\000\000\003vvf\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014custom"
"izable\376\001\000\000\003cst\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025has-unused-parameters\376\001\000\000\003hup\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012boxed-r"
"est\376\001\000\000\003bxr\376\377\016");
lf[172]=C_h_intern(&lf[172],5,"value");
lf[173]=C_h_intern(&lf[173],11,"local-value");
lf[174]=C_h_intern(&lf[174],15,"potential-value");
lf[175]=C_h_intern(&lf[175],10,"replacable");
lf[176]=C_h_intern(&lf[176],10,"references");
lf[177]=C_h_intern(&lf[177],10,"call-sites");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\020Illegal property");
lf[179]=C_h_intern(&lf[179],4,"home");
lf[180]=C_h_intern(&lf[180],8,"contains");
lf[181]=C_h_intern(&lf[181],12,"contained-in");
lf[182]=C_h_intern(&lf[182],8,"use-expr");
lf[183]=C_h_intern(&lf[183],12,"closure-size");
lf[184]=C_h_intern(&lf[184],14,"rest-parameter");
lf[185]=C_h_intern(&lf[185],18,"captured-variables");
lf[186]=C_h_intern(&lf[186],13,"explicit-rest");
lf[187]=C_h_intern(&lf[187],8,"assigned");
lf[188]=C_h_intern(&lf[188],5,"boxed");
lf[189]=C_h_intern(&lf[189],6,"global");
lf[190]=C_h_intern(&lf[190],12,"contractable");
lf[191]=C_h_intern(&lf[191],16,"standard-binding");
lf[192]=C_h_intern(&lf[192],16,"assigned-locally");
lf[193]=C_h_intern(&lf[193],11,"collapsable");
lf[194]=C_h_intern(&lf[194],9,"removable");
lf[195]=C_h_intern(&lf[195],9,"undefined");
lf[196]=C_h_intern(&lf[196],9,"replacing");
lf[197]=C_h_intern(&lf[197],6,"unused");
lf[198]=C_h_intern(&lf[198],6,"simple");
lf[199]=C_h_intern(&lf[199],9,"inlinable");
lf[200]=C_h_intern(&lf[200],13,"inline-export");
lf[201]=C_h_intern(&lf[201],21,"has-unused-parameters");
lf[202]=C_h_intern(&lf[202],16,"extended-binding");
lf[203]=C_h_intern(&lf[203],12,"customizable");
lf[204]=C_h_intern(&lf[204],8,"constant");
lf[205]=C_h_intern(&lf[205],10,"boxed-rest");
lf[206]=C_h_intern(&lf[206],11,"hidden-refs");
lf[207]=C_h_intern(&lf[207],5,"write");
lf[208]=C_h_intern(&lf[208],34,"\010compilerdefault-standard-bindings");
lf[209]=C_h_intern(&lf[209],34,"\010compilerdefault-extended-bindings");
lf[210]=C_h_intern(&lf[210],9,"make-node");
lf[211]=C_h_intern(&lf[211],4,"node");
lf[212]=C_h_intern(&lf[212],5,"node\077");
lf[213]=C_h_intern(&lf[213],10,"node-class");
lf[214]=C_h_intern(&lf[214],15,"node-class-set!");
lf[215]=C_h_intern(&lf[215],14,"\003sysblock-set!");
lf[216]=C_h_intern(&lf[216],15,"node-parameters");
lf[217]=C_h_intern(&lf[217],20,"node-parameters-set!");
lf[218]=C_h_intern(&lf[218],19,"node-subexpressions");
lf[219]=C_h_intern(&lf[219],24,"node-subexpressions-set!");
lf[220]=C_h_intern(&lf[220],16,"\010compilervarnode");
lf[221]=C_h_intern(&lf[221],13,"\004corevariable");
lf[222]=C_h_intern(&lf[222],14,"\010compilerqnode");
lf[223]=C_h_intern(&lf[223],25,"\010compilerbuild-node-graph");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\016bad expression");
lf[225]=C_h_intern(&lf[225],2,"if");
lf[226]=C_h_intern(&lf[226],14,"\004coreundefined");
lf[227]=C_h_intern(&lf[227],8,"truncate");
lf[228]=C_h_intern(&lf[228],7,"warning");
lf[229]=C_decode_literal(C_heaptop,"\376B\000\0006literal is out of range - will be truncated to integer");
lf[230]=C_h_intern(&lf[230],6,"fixnum");
lf[231]=C_h_intern(&lf[231],11,"number-type");
lf[232]=C_h_intern(&lf[232],4,"\000tmp");
lf[233]=C_decode_literal(C_heaptop,"\376B\000\000\021SHOULD NOT HAPPEN");
lf[234]=C_h_intern(&lf[234],6,"unzip1");
lf[235]=C_h_intern(&lf[235],6,"lambda");
lf[236]=C_h_intern(&lf[236],8,"\004corethe");
lf[237]=C_h_intern(&lf[237],13,"\004coretypecase");
lf[238]=C_h_intern(&lf[238],4,"else");
lf[239]=C_h_intern(&lf[239],5,"cadar");
lf[240]=C_h_intern(&lf[240],1,"\052");
lf[241]=C_h_intern(&lf[241],14,"\004coreprimitive");
lf[242]=C_h_intern(&lf[242],11,"\004coreinline");
lf[243]=C_h_intern(&lf[243],13,"\004corecallunit");
lf[244]=C_h_intern(&lf[244],16,"\004coredebug-event");
lf[245]=C_h_intern(&lf[245],9,"\004coreproc");
lf[246]=C_h_intern(&lf[246],4,"set!");
lf[247]=C_h_intern(&lf[247],9,"\004coreset!");
lf[248]=C_h_intern(&lf[248],29,"\004coreforeign-callback-wrapper");
lf[249]=C_h_intern(&lf[249],5,"sixth");
lf[250]=C_h_intern(&lf[250],5,"fifth");
lf[251]=C_h_intern(&lf[251],20,"\004coreinline_allocate");
lf[252]=C_h_intern(&lf[252],8,"\004coreapp");
lf[253]=C_h_intern(&lf[253],9,"\004corecall");
lf[254]=C_h_intern(&lf[254],28,"\003syssymbol->qualified-string");
lf[255]=C_h_intern(&lf[255],7,"\003sysget");
lf[256]=C_h_intern(&lf[256],34,"\010compileralways-bound-to-procedure");
lf[257]=C_h_intern(&lf[257],15,"\004coreinline_ref");
lf[258]=C_h_intern(&lf[258],18,"\004coreinline_update");
lf[259]=C_h_intern(&lf[259],19,"\004coreinline_loc_ref");
lf[260]=C_h_intern(&lf[260],22,"\004coreinline_loc_update");
lf[261]=C_h_intern(&lf[261],1,"o");
lf[262]=C_decode_literal(C_heaptop,"\376B\000\000\033eliminated procedure checks");
lf[263]=C_h_intern(&lf[263],30,"\010compilerbuild-expression-tree");
lf[264]=C_h_intern(&lf[264],12,"\004coreclosure");
lf[265]=C_h_intern(&lf[265],4,"last");
lf[266]=C_h_intern(&lf[266],7,"butlast");
lf[267]=C_h_intern(&lf[267],3,"the");
lf[268]=C_h_intern(&lf[268],15,"\004corethe/result");
lf[269]=C_h_intern(&lf[269],17,"compiler-typecase");
lf[270]=C_h_intern(&lf[270],5,"cons\052");
lf[271]=C_h_intern(&lf[271],9,"\004corebind");
lf[272]=C_h_intern(&lf[272],10,"\004coreunbox");
lf[273]=C_h_intern(&lf[273],16,"\004corelet_unboxed");
lf[274]=C_h_intern(&lf[274],8,"\004coreref");
lf[275]=C_h_intern(&lf[275],11,"\004coreupdate");
lf[276]=C_h_intern(&lf[276],13,"\004coreupdate_i");
lf[277]=C_h_intern(&lf[277],8,"\004corebox");
lf[278]=C_h_intern(&lf[278],9,"\004corecond");
lf[279]=C_h_intern(&lf[279],21,"\010compilerfold-boolean");
lf[280]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\005C_and\376\377\016");
lf[281]=C_h_intern(&lf[281],31,"\010compilerinline-lambda-bindings");
lf[282]=C_h_intern(&lf[282],8,"split-at");
lf[283]=C_h_intern(&lf[283],10,"fold-right");
lf[284]=C_h_intern(&lf[284],4,"take");
lf[285]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_list");
lf[286]=C_h_intern(&lf[286],34,"\010compilercopy-node-tree-and-rename");
lf[287]=C_h_intern(&lf[287],9,"alist-ref");
lf[288]=C_h_intern(&lf[288],16,"inline-transient");
lf[289]=C_h_intern(&lf[289],1,"f");
lf[290]=C_h_intern(&lf[290],18,"\010compilertree-copy");
lf[291]=C_h_intern(&lf[291],9,"copy-node");
lf[292]=C_h_intern(&lf[292],19,"\010compilercopy-node!");
lf[293]=C_h_intern(&lf[293],20,"\010compilernode->sexpr");
lf[294]=C_h_intern(&lf[294],20,"\010compilersexpr->node");
lf[295]=C_h_intern(&lf[295],32,"\010compileremit-global-inline-file");
lf[296]=C_h_intern(&lf[296],5,"print");
lf[297]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[298]=C_h_intern(&lf[298],1,"i");
lf[299]=C_decode_literal(C_heaptop,"\376B\000\0001the following procedures can be globally inlined:");
lf[300]=C_h_intern(&lf[300],12,"delete-file\052");
lf[301]=C_decode_literal(C_heaptop,"\376B\000\000\015; END OF FILE");
lf[302]=C_h_intern(&lf[302],2,"pp");
lf[303]=C_decode_literal(C_heaptop,"\376B\000\000\027; GENERATED BY CHICKEN ");
lf[304]=C_decode_literal(C_heaptop,"\376B\000\000\006 FROM ");
lf[305]=C_h_intern(&lf[305],24,"\010compilersource-filename");
lf[306]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[307]=C_h_intern(&lf[307],15,"chicken-version");
lf[308]=C_h_intern(&lf[308],19,"with-output-to-file");
lf[309]=C_h_intern(&lf[309],3,"yes");
lf[310]=C_h_intern(&lf[310],2,"no");
lf[311]=C_h_intern(&lf[311],24,"\010compilerinline-max-size");
lf[312]=C_h_intern(&lf[312],15,"\010compilerinline");
lf[313]=C_h_intern(&lf[313],22,"\010compilerinline-global");
lf[314]=C_h_intern(&lf[314],26,"\010compilervariable-visible\077");
lf[315]=C_h_intern(&lf[315],25,"\010compilerload-inline-file");
lf[316]=C_h_intern(&lf[316],20,"with-input-from-file");
lf[317]=C_h_intern(&lf[317],19,"\010compilermatch-node");
lf[318]=C_h_intern(&lf[318],1,"a");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000\007matched");
lf[320]=C_h_intern(&lf[320],37,"\010compilerexpression-has-side-effects\077");
lf[321]=C_h_intern(&lf[321],24,"foreign-callback-stub-id");
lf[322]=C_h_intern(&lf[322],4,"find");
lf[323]=C_h_intern(&lf[323],22,"foreign-callback-stubs");
lf[324]=C_h_intern(&lf[324],28,"\010compilersimple-lambda-node\077");
lf[325]=C_h_intern(&lf[325],31,"\010compilerdump-undefined-globals");
lf[326]=C_h_intern(&lf[326],8,"keyword\077");
lf[327]=C_h_intern(&lf[327],29,"\010compilerdump-defined-globals");
lf[328]=C_h_intern(&lf[328],25,"\010compilerdump-global-refs");
lf[329]=C_h_intern(&lf[329],28,"\003systoplevel-definition-hook");
lf[330]=C_h_intern(&lf[330],22,"\010compilerhide-variable");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000\042hiding nonexported module bindings");
lf[332]=C_h_intern(&lf[332],36,"\010compilercompute-database-statistics");
lf[333]=C_h_intern(&lf[333],29,"\010compilercurrent-program-size");
lf[334]=C_h_intern(&lf[334],30,"\010compileroriginal-program-size");
lf[335]=C_h_intern(&lf[335],33,"\010compilerprint-program-statistics");
lf[336]=C_decode_literal(C_heaptop,"\376B\000\000\027;   database entries: \011");
lf[337]=C_decode_literal(C_heaptop,"\376B\000\000\027;   known call sites: \011");
lf[338]=C_decode_literal(C_heaptop,"\376B\000\000\027;   global variables: \011");
lf[339]=C_decode_literal(C_heaptop,"\376B\000\000\027;   known procedures: \011");
lf[340]=C_decode_literal(C_heaptop,"\376B\000\000\042;   variables with known values: \011");
lf[341]=C_decode_literal(C_heaptop,"\376B\000\000\032 \011original program size: \011");
lf[342]=C_decode_literal(C_heaptop,"\376B\000\000\023;   program size: \011");
lf[343]=C_h_intern(&lf[343],1,"s");
lf[344]=C_decode_literal(C_heaptop,"\376B\000\000\023program statistics:");
lf[345]=C_h_intern(&lf[345],35,"\010compilerpprint-expressions-to-file");
lf[346]=C_h_intern(&lf[346],17,"close-output-port");
lf[347]=C_h_intern(&lf[347],12,"pretty-print");
lf[348]=C_h_intern(&lf[348],19,"with-output-to-port");
lf[349]=C_h_intern(&lf[349],16,"open-output-file");
lf[350]=C_h_intern(&lf[350],27,"\010compilerforeign-type-check");
lf[351]=C_h_intern(&lf[351],4,"char");
lf[352]=C_h_intern(&lf[352],13,"unsigned-char");
lf[353]=C_h_intern(&lf[353],6,"unsafe");
lf[354]=C_h_intern(&lf[354],25,"\003sysforeign-char-argument");
lf[355]=C_h_intern(&lf[355],3,"int");
lf[356]=C_h_intern(&lf[356],27,"\003sysforeign-fixnum-argument");
lf[357]=C_h_intern(&lf[357],5,"float");
lf[358]=C_h_intern(&lf[358],27,"\003sysforeign-flonum-argument");
lf[359]=C_h_intern(&lf[359],4,"blob");
lf[360]=C_h_intern(&lf[360],14,"scheme-pointer");
lf[361]=C_h_intern(&lf[361],26,"\003sysforeign-block-argument");
lf[362]=C_h_intern(&lf[362],22,"nonnull-scheme-pointer");
lf[363]=C_h_intern(&lf[363],12,"nonnull-blob");
lf[364]=C_h_intern(&lf[364],14,"pointer-vector");
lf[365]=C_h_intern(&lf[365],35,"\003sysforeign-struct-wrapper-argument");
lf[366]=C_h_intern(&lf[366],22,"nonnull-pointer-vector");
lf[367]=C_h_intern(&lf[367],8,"u8vector");
lf[368]=C_h_intern(&lf[368],16,"nonnull-u8vector");
lf[369]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020nonnull-u8vector\376\001\000\000\010u8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-u16vector\376\001\000\000"
"\011u16vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020nonnull-s8vector\376\001\000\000\010s8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-s16"
"vector\376\001\000\000\011s16vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-u32vector\376\001\000\000\011u32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\021nonnull-s32vector\376\001\000\000\011s32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-f32vector\376\001\000\000\011f32vector\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-f64vector\376\001\000\000\011f64vector\376\377\016");
lf[370]=C_h_intern(&lf[370],7,"integer");
lf[371]=C_h_intern(&lf[371],28,"\003sysforeign-integer-argument");
lf[372]=C_h_intern(&lf[372],9,"integer64");
lf[373]=C_h_intern(&lf[373],30,"\003sysforeign-integer64-argument");
lf[374]=C_h_intern(&lf[374],16,"unsigned-integer");
lf[375]=C_h_intern(&lf[375],37,"\003sysforeign-unsigned-integer-argument");
lf[376]=C_h_intern(&lf[376],18,"unsigned-integer64");
lf[377]=C_h_intern(&lf[377],39,"\003sysforeign-unsigned-integer64-argument");
lf[378]=C_h_intern(&lf[378],9,"c-pointer");
lf[379]=C_h_intern(&lf[379],28,"\003sysforeign-pointer-argument");
lf[380]=C_h_intern(&lf[380],17,"nonnull-c-pointer");
lf[381]=C_h_intern(&lf[381],8,"c-string");
lf[382]=C_h_intern(&lf[382],17,"\003sysmake-c-string");
lf[383]=C_h_intern(&lf[383],27,"\003sysforeign-string-argument");
lf[384]=C_h_intern(&lf[384],16,"nonnull-c-string");
lf[385]=C_h_intern(&lf[385],6,"symbol");
lf[386]=C_h_intern(&lf[386],18,"\003syssymbol->string");
lf[387]=C_h_intern(&lf[387],3,"ref");
lf[388]=C_h_intern(&lf[388],8,"instance");
lf[389]=C_h_intern(&lf[389],12,"instance-ref");
lf[390]=C_h_intern(&lf[390],4,"this");
lf[391]=C_h_intern(&lf[391],8,"slot-ref");
lf[392]=C_h_intern(&lf[392],16,"nonnull-instance");
lf[393]=C_h_intern(&lf[393],5,"const");
lf[394]=C_h_intern(&lf[394],4,"enum");
lf[395]=C_h_intern(&lf[395],15,"nonnull-pointer");
lf[396]=C_h_intern(&lf[396],7,"pointer");
lf[397]=C_h_intern(&lf[397],8,"function");
lf[398]=C_h_intern(&lf[398],27,"\010compilerforeign-type-table");
lf[399]=C_h_intern(&lf[399],17,"nonnull-c-string\052");
lf[400]=C_h_intern(&lf[400],26,"nonnull-unsigned-c-string\052");
lf[401]=C_h_intern(&lf[401],9,"c-string\052");
lf[402]=C_h_intern(&lf[402],17,"unsigned-c-string");
lf[403]=C_h_intern(&lf[403],18,"unsigned-c-string\052");
lf[404]=C_h_intern(&lf[404],13,"c-string-list");
lf[405]=C_h_intern(&lf[405],14,"c-string-list\052");
lf[406]=C_h_intern(&lf[406],18,"unsigned-integer32");
lf[407]=C_h_intern(&lf[407],13,"unsigned-long");
lf[408]=C_h_intern(&lf[408],4,"long");
lf[409]=C_h_intern(&lf[409],6,"size_t");
lf[410]=C_h_intern(&lf[410],9,"integer32");
lf[411]=C_h_intern(&lf[411],17,"nonnull-u16vector");
lf[412]=C_h_intern(&lf[412],16,"nonnull-s8vector");
lf[413]=C_h_intern(&lf[413],17,"nonnull-s16vector");
lf[414]=C_h_intern(&lf[414],17,"nonnull-u32vector");
lf[415]=C_h_intern(&lf[415],17,"nonnull-s32vector");
lf[416]=C_h_intern(&lf[416],17,"nonnull-f32vector");
lf[417]=C_h_intern(&lf[417],17,"nonnull-f64vector");
lf[418]=C_h_intern(&lf[418],9,"u16vector");
lf[419]=C_h_intern(&lf[419],8,"s8vector");
lf[420]=C_h_intern(&lf[420],9,"s16vector");
lf[421]=C_h_intern(&lf[421],9,"u32vector");
lf[422]=C_h_intern(&lf[422],9,"s32vector");
lf[423]=C_h_intern(&lf[423],9,"f32vector");
lf[424]=C_h_intern(&lf[424],9,"f64vector");
lf[425]=C_h_intern(&lf[425],6,"double");
lf[426]=C_h_intern(&lf[426],6,"number");
lf[427]=C_h_intern(&lf[427],12,"unsigned-int");
lf[428]=C_h_intern(&lf[428],5,"short");
lf[429]=C_h_intern(&lf[429],14,"unsigned-short");
lf[430]=C_h_intern(&lf[430],4,"byte");
lf[431]=C_h_intern(&lf[431],13,"unsigned-byte");
lf[432]=C_h_intern(&lf[432],5,"int32");
lf[433]=C_h_intern(&lf[433],14,"unsigned-int32");
lf[434]=C_decode_literal(C_heaptop,"\376B\000\000\042foreign type `~S\047 refers to itself");
lf[435]=C_h_intern(&lf[435],36,"\010compilerforeign-type-convert-result");
lf[436]=C_h_intern(&lf[436],38,"\010compilerforeign-type-convert-argument");
lf[437]=C_h_intern(&lf[437],27,"\010compilerfinal-foreign-type");
lf[438]=C_decode_literal(C_heaptop,"\376B\000\000\042foreign type `~S\047 refers to itself");
lf[439]=C_h_intern(&lf[439],37,"\010compilerestimate-foreign-result-size");
lf[440]=C_h_intern(&lf[440],4,"bool");
lf[441]=C_h_intern(&lf[441],4,"void");
lf[442]=C_h_intern(&lf[442],13,"scheme-object");
lf[443]=C_decode_literal(C_heaptop,"\376B\000\000\042foreign type `~S\047 refers to itself");
lf[444]=C_h_intern(&lf[444],46,"\010compilerestimate-foreign-result-location-size");
lf[445]=C_decode_literal(C_heaptop,"\376B\000\0005cannot compute size of location for foreign type `~S\047");
lf[446]=C_decode_literal(C_heaptop,"\376B\000\000\042foreign type `~S\047 refers to itself");
lf[447]=C_h_intern(&lf[447],30,"\010compilerfinish-foreign-result");
lf[448]=C_h_intern(&lf[448],17,"\003syspeek-c-string");
lf[449]=C_h_intern(&lf[449],25,"\003syspeek-nonnull-c-string");
lf[450]=C_h_intern(&lf[450],26,"\003syspeek-and-free-c-string");
lf[451]=C_h_intern(&lf[451],34,"\003syspeek-and-free-nonnull-c-string");
lf[452]=C_h_intern(&lf[452],17,"\003sysintern-symbol");
lf[453]=C_h_intern(&lf[453],22,"\003syspeek-c-string-list");
lf[454]=C_h_intern(&lf[454],31,"\003syspeek-and-free-c-string-list");
lf[455]=C_h_intern(&lf[455],17,"\003sysnull-pointer\077");
lf[456]=C_h_intern(&lf[456],3,"not");
lf[457]=C_h_intern(&lf[457],4,"make");
lf[458]=C_h_intern(&lf[458],3,"and");
lf[459]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010c-string\376\003\000\000\002\376\001\000\000\011c-string\052\376\003\000\000\002\376\001\000\000\021unsigned-c-string\376\003\000\000\002\376\001\000\000\022unsign"
"ed-c-string\052\376\003\000\000\002\376\001\000\000\020nonnull-c-string\376\003\000\000\002\376\001\000\000\021nonnull-c-string\052\376\003\000\000\002\376\001\000\000\030nonnu"
"ll-unsigned-string\052\376\377\016");
lf[460]=C_h_intern(&lf[460],16,"\003sysstrip-syntax");
lf[461]=C_h_intern(&lf[461],36,"\010compilerforeign-type->scrutiny-type");
lf[462]=C_h_intern(&lf[462],3,"arg");
lf[463]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\002or\376\003\000\000\002\376\001\000\000\007boolean\376\003\000\000\002\376\001\000\000\004blob\376\377\016");
lf[464]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\002or\376\003\000\000\002\376\001\000\000\007boolean\376\003\000\000\002\376\001\000\000\016pointer-vector\376\377\016");
lf[465]=C_h_intern(&lf[465],6,"struct");
lf[466]=C_h_intern(&lf[466],2,"or");
lf[467]=C_h_intern(&lf[467],7,"boolean");
lf[468]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\010u8vector\376\377\016");
lf[469]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\010s8vector\376\377\016");
lf[470]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011u16vector\376\377\016");
lf[471]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011s16vector\376\377\016");
lf[472]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011u32vector\376\377\016");
lf[473]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011s32vector\376\377\016");
lf[474]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011f32vector\376\377\016");
lf[475]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011f64vector\376\377\016");
lf[476]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\002or\376\003\000\000\002\376\001\000\000\007boolean\376\003\000\000\002\376\001\000\000\007pointer\376\003\000\000\002\376\001\000\000\010locative\376\377\016");
lf[477]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\002or\376\003\000\000\002\376\001\000\000\007boolean\376\003\000\000\002\376\001\000\000\006string\376\377\016");
lf[478]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007list-of\376\003\000\000\002\376\001\000\000\006string\376\377\016");
lf[479]=C_h_intern(&lf[479],6,"string");
lf[480]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\002or\376\003\000\000\002\376\001\000\000\007boolean\376\003\000\000\002\376\001\000\000\007pointer\376\003\000\000\002\376\001\000\000\010locative\376\377\016");
lf[481]=C_h_intern(&lf[481],28,"\010compilerscan-used-variables");
lf[482]=C_h_intern(&lf[482],28,"\010compilerscan-free-variables");
lf[483]=C_h_intern(&lf[483],11,"lset-adjoin");
lf[484]=C_h_intern(&lf[484],23,"\010compilerchop-separator");
lf[485]=C_h_intern(&lf[485],9,"substring");
lf[486]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000/\376\377\016");
lf[487]=C_h_intern(&lf[487],23,"\010compilerchop-extension");
lf[488]=C_h_intern(&lf[488],36,"\010compilermake-block-variable-literal");
lf[489]=C_h_intern(&lf[489],22,"block-variable-literal");
lf[490]=C_h_intern(&lf[490],32,"\010compilerblock-variable-literal\077");
lf[491]=C_h_intern(&lf[491],36,"\010compilerblock-variable-literal-name");
lf[492]=C_h_intern(&lf[492],27,"block-variable-literal-name");
lf[493]=C_h_intern(&lf[493],25,"\010compilermake-random-name");
lf[494]=C_h_intern(&lf[494],6,"random");
lf[495]=C_h_intern(&lf[495],15,"current-seconds");
lf[496]=C_h_intern(&lf[496],23,"\010compilerset-real-name!");
lf[497]=C_h_intern(&lf[497],24,"\010compilerreal-name-table");
lf[498]=C_h_intern(&lf[498],19,"real-name-max-depth");
lf[499]=C_h_intern(&lf[499],18,"string-intersperse");
lf[500]=C_decode_literal(C_heaptop,"\376B\000\000\004 in ");
lf[501]=C_decode_literal(C_heaptop,"\376B\000\000\003...");
lf[502]=C_decode_literal(C_heaptop,"\376B\000\000\004 in ");
lf[503]=C_decode_literal(C_heaptop,"\376B\000\000\004 in ");
lf[504]=C_h_intern(&lf[504],19,"\010compilerreal-name2");
lf[505]=C_h_intern(&lf[505],32,"\010compilerdisplay-real-name-table");
lf[506]=C_h_intern(&lf[506],28,"\010compilersource-info->string");
lf[507]=C_h_intern(&lf[507],4,"conc");
lf[508]=C_decode_literal(C_heaptop,"\376B\000\000\001:");
lf[509]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[510]=C_h_intern(&lf[510],11,"make-string");
lf[511]=C_h_intern(&lf[511],3,"max");
lf[512]=C_h_intern(&lf[512],26,"\010compilersource-info->line");
lf[513]=C_h_intern(&lf[513],18,"\010compilercall-info");
lf[514]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[515]=C_decode_literal(C_heaptop,"\376B\000\000\002) ");
lf[516]=C_h_intern(&lf[516],27,"\010compilerconstant-form-eval");
lf[517]=C_decode_literal(C_heaptop,"\376B\000\000\032folded constant expression");
lf[518]=C_decode_literal(C_heaptop,"\376B\000\000Dattempt to constant-fold call to procedure that has multiple results");
lf[519]=C_h_intern(&lf[519],28,"\010compilerencodeable-literal\077");
lf[520]=C_h_intern(&lf[520],22,"get-condition-property");
lf[521]=C_h_intern(&lf[521],3,"exn");
lf[522]=C_h_intern(&lf[522],7,"message");
lf[523]=C_h_intern(&lf[523],8,"\003syslist");
lf[524]=C_decode_literal(C_heaptop,"\376B\000\000.attempt to constant-fold call to non-procedure");
lf[525]=C_h_intern(&lf[525],13,"list-tabulate");
lf[526]=C_h_intern(&lf[526],19,"\010compilerdump-nodes");
lf[527]=C_h_intern(&lf[527],19,"\003syswrite-char/port");
lf[528]=C_h_intern(&lf[528],23,"\010compilerread-info-hook");
lf[529]=C_h_intern(&lf[529],27,"\003syscurrent-source-filename");
lf[530]=C_decode_literal(C_heaptop,"\376B\000\000\001:");
lf[531]=C_h_intern(&lf[531],9,"list-info");
lf[532]=C_h_intern(&lf[532],25,"\010compilerread/source-info");
lf[533]=C_h_intern(&lf[533],8,"\003sysread");
lf[534]=C_h_intern(&lf[534],18,"\003sysuser-read-hook");
lf[535]=C_h_intern(&lf[535],15,"foreign-declare");
lf[536]=C_h_intern(&lf[536],7,"declare");
lf[537]=C_h_intern(&lf[537],34,"\010compilerscan-sharp-greater-string");
lf[538]=C_h_intern(&lf[538],18,"\003sysread-char/port");
lf[539]=C_decode_literal(C_heaptop,"\376B\000\000&unexpected end of `#> ... <#\047 sequence");
lf[540]=C_h_intern(&lf[540],6,"hidden");
lf[541]=C_h_intern(&lf[541],19,"\010compilervisibility");
lf[542]=C_h_intern(&lf[542],24,"\010compilerexport-variable");
lf[543]=C_h_intern(&lf[543],8,"exported");
lf[544]=C_h_intern(&lf[544],25,"\010compilervariable-hidden\077");
lf[545]=C_h_intern(&lf[545],26,"\010compilerblock-compilation");
lf[546]=C_h_intern(&lf[546],22,"\010compilermark-variable");
lf[547]=C_h_intern(&lf[547],22,"\010compilervariable-mark");
lf[548]=C_h_intern(&lf[548],19,"\010compilerintrinsic\077");
lf[549]=C_h_intern(&lf[549],9,"foldable\077");
lf[550]=C_h_intern(&lf[550],33,"\010compilerload-identifier-database");
lf[551]=C_h_intern(&lf[551],7,"\004coredb");
lf[552]=C_h_intern(&lf[552],9,"read-file");
lf[553]=C_h_intern(&lf[553],1,"p");
lf[554]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[555]=C_decode_literal(C_heaptop,"\376B\000\000\034loading identifier database ");
lf[556]=C_h_intern(&lf[556],13,"make-pathname");
lf[557]=C_h_intern(&lf[557],15,"repository-path");
lf[558]=C_h_intern(&lf[558],22,"\010compilerprint-version");
lf[559]=C_h_intern(&lf[559],6,"print\052");
lf[560]=C_decode_literal(C_heaptop,"\376B\000\000C(c) 2008-2017, The CHICKEN Team\012(c) 2000-2007, Felix L. Winkelmann\012");
lf[561]=C_h_intern(&lf[561],20,"\010compilerprint-usage");
lf[562]=C_decode_literal(C_heaptop,"\376B\000\030\252Usage: chicken FILENAME OPTION ...\012\012  `chicken\047 is the CHICKEN compiler.\012  "
"\012  FILENAME should be a complete source file name with extension, or \042-\042 for\012  s"
"tandard input. OPTION may be one of the following:\012\012  General options:\012\012    -hel"
"p                        display this text and exit\012    -version                "
"     display compiler version and exit\012    -release                     print re"
"lease number and exit\012    -verbose                     display information on co"
"mpilation progress\012\012  File and pathname options:\012\012    -output-file FILENAME     "
"   specifies output-filename, default is \047out.c\047\012    -include-path PATHNAME     "
"  specifies alternative path for included files\012    -to-stdout                  "
" write compiled file to stdout instead of file\012\012  Language options:\012\012    -featur"
"e SYMBOL              register feature identifier\012    -no-feature SYMBOL        "
"   disable built-in feature identifier\012\012  Syntax related options:\012\012    -case-ins"
"ensitive            don\047t preserve case of read symbols\012    -keyword-style STYLE"
"         allow alternative keyword syntax\012                                  (pre"
"fix, suffix or none)\012    -no-parentheses-synonyms     disables list delimiter sy"
"nonyms\012    -no-symbol-escape            disables support for escaped symbols\012   "
" -r5rs-syntax                 disables the CHICKEN extensions to\012               "
"                   R5RS syntax\012    -compile-syntax              macros are made "
"available at run-time\012    -emit-import-library MODULE  write compile-time module"
" information into\012                                  separate file\012    -emit-all-"
"import-libraries   emit import-libraries for all defined modules\012    -no-module-"
"registration      do not generate module registration code\012    -no-compiler-synt"
"ax          disable expansion of compiler-macros\012    -module                    "
"  wrap compiled code into implicit module\012\012  Translation options:\012\012    -explicit"
"-use                do not use units \047library\047 and \047eval\047 by\012                   "
"               default\012    -check-syntax                stop compilation after m"
"acro-expansion\012    -analyze-only                stop compilation after first ana"
"lysis pass\012\012  Debugging options:\012\012    -no-warnings                 disable warni"
"ngs\012    -debug-level NUMBER          set level of available debugging informatio"
"n\012    -no-trace                    disable tracing information\012    -debug-info  "
"                enable debug-information in compiled code for use\012              "
"                    with an external debugger\012    -profile                     e"
"xecutable emits profiling information \012    -profile-name FILENAME       name of "
"the generated profile information file\012    -accumulate-profile          executab"
"le emits profiling information in\012                                  append mode\012"
"    -no-lambda-info              omit additional procedure-information\012    -type"
"s FILENAME              load additional type database\012    -emit-type-file FILENA"
"ME     write type-declaration information into file\012\012  Optimization options:\012\012  "
"  -optimize-level NUMBER       enable certain sets of optimization options\012    -"
"optimize-leaf-routines      enable leaf routine optimization\012    -no-usual-integ"
"rations       standard procedures may be redefined\012    -unsafe                  "
"    disable all safety checks\012    -local                       assume globals ar"
"e only modified in current\012                                  file\012    -block    "
"                   enable block-compilation\012    -disable-interrupts          dis"
"able interrupts in compiled code\012    -fixnum-arithmetic           assume all num"
"bers are fixnums\012    -disable-stack-overflow-checks  disables detection of stack"
"-overflows\012    -inline                      enable inlining\012    -inline-limit LI"
"MIT          set inlining threshold\012    -inline-global               enable cros"
"s-module inlining\012    -specialize                  perform type-based specializa"
"tion of primitive calls\012    -emit-inline-file FILENAME   generate file with glob"
"ally inlinable\012                                  procedures (implies -inline -lo"
"cal)\012    -consult-inline-file FILENAME  explicitly load inline file\012    -no-argc"
"-checks              disable argument count checks\012    -no-bound-checks         "
"    disable bound variable checks\012    -no-procedure-checks         disable proce"
"dure call checks\012    -no-procedure-checks-for-usual-bindings\012                   "
"                disable procedure call checks only for usual\012                   "
"                bindings\012    -no-procedure-checks-for-toplevel-bindings\012        "
"                           disable procedure call checks for toplevel\012          "
"                         bindings\012    -strict-types                assume variab"
"le do not change their type\012    -clustering                  combine groups of l"
"ocal procedures into dispatch\012                                   loop\012    -lfa2 "
"                       perform additional lightweight flow-analysis pass\012\012  Conf"
"iguration options:\012\012    -unit NAME                   compile file as a library u"
"nit\012    -uses NAME                   declare library unit as used.\012    -heap-siz"
"e NUMBER            specifies heap-size of compiled executable\012    -nursery NUMB"
"ER  -stack-size NUMBER\012                                 specifies nursery size o"
"f compiled executable\012    -extend FILENAME             load file before compilat"
"ion commences\012    -prelude EXPRESSION          add expression to front of source"
" file\012    -postlude EXPRESSION         add expression to end of source file\012    "
"-prologue FILENAME           include file before main source file\012    -epilogue "
"FILENAME           include file after main source file\012    -dynamic             "
"        compile as dynamically loadable code\012    -require-extension NAME      re"
"quire and import extension NAME\012\012  Obscure options:\012\012    -debug MODES           "
"      display debugging output for the given modes\012    -raw                     "
"    do not generate implicit init- and exit code                           \012    "
"-emit-external-prototypes-first\012                                 emit prototypes"
" for callbacks before foreign\012                                  declarations\012   "
" -ignore-repository           do not refer to repository for extensions\012    -set"
"up-mode                  prefer the current directory when locating extensions\012");
lf[563]=C_h_intern(&lf[563],28,"\010compilerprint-debug-options");
lf[564]=C_decode_literal(C_heaptop,"\376B\000\007\026\012Available debugging options:\012\012     a          show node-matching during si"
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
"     9          show expressions after closure conversion\012\012");
lf[565]=C_decode_literal(C_heaptop,"\376B\000\000\007#<node ");
lf[566]=C_h_intern(&lf[566],27,"\003sysregister-record-printer");
lf[567]=C_h_intern(&lf[567],27,"condition-property-accessor");
lf[568]=C_h_intern(&lf[568],19,"condition-predicate");
C_register_lf2(lf,569,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4832,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k5000 in k4979 in debugging in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5002,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5003 in k4979 in debugging in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5005,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5012,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:84: text */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4897(t3,t2);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k8003 in k8023 in loop in k8060 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_8005,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[211],lf[237],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##compiler#bomb in k4836 in k4833 in k4830 */
static void C_ccall f_4847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_4847,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4861,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=C_u_i_car(t4);
/* support.scm:49: string-append */
t6=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=lf[6];
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
/* support.scm:50: error */
t3=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[7];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k14083 in foreign-type->scrutiny-type in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_14085(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_14085,2,av);}
a=C_alloc(7);
t2=t1;
t3=t2;
t4=C_eqp(t3,lf[441]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=lf[195];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eqp(t3,lf[351]);
t6=(C_truep(t5)?t5:C_eqp(t3,lf[352]));
if(C_truep(t6)){
t7=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=lf[351];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_eqp(t3,lf[355]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_14109,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t7)){
t9=t8;
f_14109(t9,t7);}
else{
t9=C_eqp(t3,lf[427]);
if(C_truep(t9)){
t10=t8;
f_14109(t10,t9);}
else{
t10=C_eqp(t3,lf[428]);
if(C_truep(t10)){
t11=t8;
f_14109(t11,t10);}
else{
t11=C_eqp(t3,lf[429]);
if(C_truep(t11)){
t12=t8;
f_14109(t12,t11);}
else{
t12=C_eqp(t3,lf[430]);
if(C_truep(t12)){
t13=t8;
f_14109(t13,t12);}
else{
t13=C_eqp(t3,lf[431]);
if(C_truep(t13)){
t14=t8;
f_14109(t14,t13);}
else{
t14=C_eqp(t3,lf[432]);
t15=t8;
f_14109(t15,(C_truep(t14)?t14:C_eqp(t3,lf[433])));}}}}}}}}}

/* ##compiler#foreign-type->scrutiny-type in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_14081(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_14081,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14085,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1275: final-foreign-type */
t5=*((C_word*)lf[437]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* a6141 in a6135 in string->expr in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6142,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6148,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* support.scm:302: k484 */
t4=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* ##compiler#compiler-cleanup-hook in k4836 in k4833 in k4830 */
static void C_ccall f_4842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4842,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a6147 in a6141 in a6135 in string->expr in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6148,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6156,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6159,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:308: exn? */
t4=((C_word*)t0)[5];{
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

/* k6433 in k6385 in initialize-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6435(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6435,2,av);}
a=C_alloc(5);
t2=*((C_word*)lf[140]+1);
t3=C_i_check_list_2(*((C_word*)lf[140]+1),lf[35]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6462,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_6462(t7,((C_word*)t0)[2],*((C_word*)lf[140]+1));}

/* k9690 in fold in fold-boolean in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9692(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9692,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9696,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* support.scm:683: fold */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9666(t6,t3,t5);}

/* k9694 in k9690 in fold in fold-boolean in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_9696,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[211],lf[242],lf[280],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a6166 in a6135 in string->expr in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_6167,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6169,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6210,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6227,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp14370 */
t5=t2;
f_6169(t5,t4);}

/* tmp14370 in a6166 in a6135 in string->expr in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_6169(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_6169,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6173,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6195,tmp=(C_word)a,a+=2,tmp);
/* support.scm:311: with-input-from-string */
t4=*((C_word*)lf[121]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4947 in for-each-loop50 in k4917 in k4905 in a4902 in text in debugging in k4870 in k4836 in k4833 in k4830 */
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

/* ##compiler#fold-boolean in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9660(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9660,4,av);}
a=C_alloc(6);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9666,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_9666(t7,t1,t3);}

/* fold in fold-boolean in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_9666(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_9666,3,t0,t1,t2);}
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
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9692,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=C_u_i_car(t5);
t7=C_i_cadr(t2);
/* support.scm:682: proc */
t8=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t8;
av2[1]=t4;
av2[2]=t6;
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}

/* k4836 in k4833 in k4830 */
static void C_ccall f_4838(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4838,2,av);}
a=C_alloc(7);
t2=C_mutate2((C_word*)lf[0]+1 /* (set! ##compiler#compiler-cleanup-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4842,tmp=(C_word)a,a+=2,tmp));
t3=C_set_block_item(lf[1] /* ##compiler#debugging-chicken */,0,C_SCHEME_END_OF_LIST);
t4=C_set_block_item(lf[2] /* ##compiler#disabled-warnings */,0,C_SCHEME_END_OF_LIST);
t5=C_mutate2((C_word*)lf[3]+1 /* (set! ##compiler#bomb ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4847,tmp=(C_word)a,a+=2,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4872,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:53: open-output-string */
t7=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k4833 in k4830 */
static void C_ccall f_4835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4835,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4838,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

/* k4830 */
static void C_ccall f_4832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4832,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4835,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k6154 in a6147 in a6141 in a6135 in string->expr in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6156,2,av);}
/* support.scm:306: quit */
t2=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[114];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6157 in a6147 in a6141 in a6135 in string->expr in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6159,2,av);}
if(C_truep(t1)){
/* support.scm:309: exn-msg */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
/* support.scm:310: ->string */
t2=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* ##compiler#check-and-open-input-file in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_5691,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
if(C_truep(C_i_string_equal_p(t2,lf[81]))){
t4=*((C_word*)lf[82]+1);
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=*((C_word*)lf[82]+1);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5704,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:222: file-exists? */
t5=*((C_word*)lf[86]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* a11405 in dump-undefined-globals in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11406(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11406,4,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11413,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11439,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:911: keyword? */
t6=*((C_word*)lf[326]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* ##compiler#dump-undefined-globals in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11400(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_11400,3,av);}
a=C_alloc(2);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11406,tmp=(C_word)a,a+=2,tmp);
/* support.scm:909: ##sys#hash-table-for-each */
t4=*((C_word*)lf[162]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6404 in for-each-loop581 in k6385 in initialize-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6406(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6406,2,av);}
a=C_alloc(3);
if(C_truep(C_i_memq(((C_word*)t0)[2],*((C_word*)lf[144]+1)))){
t2=C_a_i_list(&a,1,C_SCHEME_TRUE);
if(C_truep(C_i_nullp(t2))){
/* tweaks.scm:54: ##sys#put! */
t3=*((C_word*)lf[142]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=lf[145];
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=C_i_car(t2);
/* tweaks.scm:54: ##sys#put! */
t4=*((C_word*)lf[142]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=lf[145];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4925 in for-each-loop50 in k4917 in k4905 in a4902 in text in debugging in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_4927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4927,2,av);}
/* support.scm:70: ##sys#write-char-0 */
t2=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k13959 in k13931 in k13815 in finish-foreign-result in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_13961(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_13961,2,av);}
a=C_alloc(60);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[455],t1);
t5=C_a_i_list(&a,2,lf[456],t4);
t6=C_i_caddr(((C_word*)t0)[3]);
t7=C_a_i_list(&a,2,lf[97],lf[390]);
t8=C_a_i_list(&a,4,lf[457],t6,t7,t1);
t9=C_a_i_list(&a,4,lf[458],t1,t5,t8);
t10=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=C_a_i_list(&a,3,lf[109],t3,t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}

/* tmp24371 in a6166 in a6135 in string->expr in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_6210(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_6210,3,t0,t1,t2);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6216,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:302: k484 */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5281 in k5277 in err in check-signature in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5283,2,av);}
/* support.scm:138: quit */
t2=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[46];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a6215 in tmp24371 in a6166 in a6135 in string->expr in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6216,2,av);}{
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

/* k8023 in loop in k8060 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8025(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8025,2,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8005,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8013,a[2]=((C_word*)t0)[4],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8017,a[2]=((C_word*)t0)[5],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* support.scm:572: cadar */
t7=*((C_word*)lf[239]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* for-each-loop50 in k4917 in k4905 in a4902 in text in debugging in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_4939(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4939,3,t0,t1,t2);}
a=C_alloc(13);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4949,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=*((C_word*)lf[16]+1);
t7=*((C_word*)lf[16]+1);
t8=C_i_check_port_2(*((C_word*)lf[16]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[17]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4927,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4934,a[2]=t9,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* support.scm:70: force */
t11=*((C_word*)lf[20]+1);{
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

/* k4932 in for-each-loop50 in k4917 in k4905 in a4902 in text in debugging in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_4934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4934,2,av);}
/* support.scm:70: ##sys#print */
t2=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a6200 in a6194 in tmp14370 in a6166 in a6135 in string->expr in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6201,3,av);}
/* support.scm:313: read */
t3=*((C_word*)lf[117]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* g2006 in k10142 in k10134 in k10069 in k10066 in a10049 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_10088(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_10088,3,t0,t1,t2);}
/* support.scm:753: g2023 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_9884(t3,t1,t2,((C_word*)t0)[3]);}

/* k7435 in display-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7437(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7437,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_6855(t3,t2);}

/* k8015 in k8023 in loop in k8060 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8017,2,av);}
/* support.scm:572: walk */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
f_7547(3,av2);}}

/* k6207 in a6194 in tmp14370 in a6166 in a6135 in string->expr in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6209,2,av);}
/* support.scm:313: unfold */
t2=*((C_word*)lf[118]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[119]+1);
av2[3]=*((C_word*)lf[120]+1);
av2[4]=((C_word*)t0)[3];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k8011 in k8023 in loop in k8060 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8013,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* support.scm:572: reverse */
t3=*((C_word*)lf[91]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a4902 in text in debugging in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_4903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4903,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4907,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:66: display */
t3=*((C_word*)lf[21]+1);{
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

/* k4905 in a4902 in text in debugging in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_4907(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4907,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4910,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4919,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:68: display */
t4=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[22];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* support.scm:72: newline */
t3=*((C_word*)lf[15]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* f_7439 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_7439,5,av);}
a=C_alloc(5);
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_record4(&a,4,lf[211],t2,t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k10096 in k10142 in k10134 in k10069 in k10066 in a10049 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_10098,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[211],lf[133],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a6194 in tmp14370 in a6166 in a6135 in string->expr in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6195,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6201,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6209,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:313: read */
t4=*((C_word*)lf[117]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* loop in check-signature in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_5292(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_5292,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* support.scm:142: err */
t4=((C_word*)t0)[2];
f_5271(t4,t1);}}
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
/* support.scm:144: err */
t5=((C_word*)t0)[2];
f_5271(t5,t1);}
else{
t5=C_i_cdr(t2);
t6=C_i_cdr(t3);
/* support.scm:145: loop */
t8=t1;
t9=t5;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}}}

/* k10060 in k10057 in g1939 in a10049 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10062,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##compiler#source-info->string in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15332(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_15332,3,av);}
a=C_alloc(12);
if(C_truep(C_i_listp(t2))){
t3=C_i_car(t2);
t4=t3;
t5=C_i_cadr(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15352,a[2]=t1,a[3]=t4,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15356,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=C_i_string_length(t4);
t10=C_a_i_minus(&a,2,C_fix(4),t9);
/* support.scm:1476: max */
t11=*((C_word*)lf[511]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10066 in a10049 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10068(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10068,2,av);}
a=C_alloc(25);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10071,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=((C_word*)t0)[8];
t9=C_i_check_list_2(t2,lf[161]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10165,a[2]=t3,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10167,a[2]=t6,a[3]=t12,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_10167(t14,t10,t8,t2);}

/* k15319 in a15313 in display-real-name-table in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_15321,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15324,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1468: ##sys#write-char-0 */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(9);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k10069 in k10066 in a10049 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_10071,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10136,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* support.scm:750: gensym */
t4=*((C_word*)lf[110]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[289];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k15322 in k15319 in a15313 in display-real-name-table in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_15324,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15327,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1468: ##sys#print */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k15325 in k15322 in k15319 in a15313 in display-real-name-table in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15327(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_15327,2,av);}
/* support.scm:1468: ##sys#write-char-0 */
t2=*((C_word*)lf[18]+1);{
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

/* k13931 in k13815 in finish-foreign-result in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_13933(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_13933,2,t0,t1);}
a=C_alloc(18);
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
/* support.scm:1256: finish-foreign-result */
t3=*((C_word*)lf[447]+1);{
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
t5=C_eqp(t4,lf[388]);
t6=(C_truep(t5)?t5:C_eqp(t4,lf[389]));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13961,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1260: gensym */
t8=*((C_word*)lf[110]+1);{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t7=C_eqp(t4,lf[392]);
if(C_truep(t7)){
t8=C_i_caddr(((C_word*)t0)[2]);
t9=C_a_i_list(&a,2,lf[97],lf[390]);
t10=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t10;
av2[1]=C_a_i_list(&a,4,lf[457],t8,t9,((C_word*)t0)[4]);
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

/* ##compiler#llist-match? in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,3)))){
C_save_and_reclaim((void *)f_6233,4,av);}
a=C_alloc(2);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6239,tmp=(C_word)a,a+=2,tmp);
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=(
  f_6239(t2,t3)
);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* ##compiler#llist-length in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6230,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_u_i_length(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* g1939 in a10049 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_10055(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10055,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10059,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:743: gensym */
t4=*((C_word*)lf[110]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a10049 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10050(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10050,5,av);}
a=C_alloc(26);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10055,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t10=t2;
t11=C_i_check_list_2(t10,lf[161]);
t12=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10068,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=t3,a[7]=t4,a[8]=t2,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10215,a[2]=t7,a[3]=t14,a[4]=t9,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_10215(t16,t12,t10);}

/* loop in llist-match? in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static C_word C_fcall f_6239(C_word t1,C_word t2){
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

/* k10057 in g1939 in a10049 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_10059,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10062,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:744: put! */
t4=*((C_word*)lf[152]+1);{
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
av2[4]=lf[288];
av2[5]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}

/* k9010 in k9002 in k8993 in k8990 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9012,2,av);}
/* support.scm:640: walk */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
f_8788(3,av2);}}

/* map-loop1555 in k8993 in k8990 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_9014(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_9014,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
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

/* map-loop1350 in k8405 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_8498(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8498,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8523,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:602: g1356 */
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

/* k8494 in k8405 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_8496,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[211],lf[253],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10025 in k10005 in k9999 in k9996 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_10027,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[211],lf[109],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k14892 in k14837 in walk in scan-free-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_14894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_14894,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_i_car(((C_word*)t0)[3]);
/* support.scm:1369: walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_14805(t4,((C_word*)t0)[5],t3,((C_word*)t0)[6]);}

/* k6225 in a6166 in a6135 in string->expr in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6227,2,av);}
a=C_alloc(3);
/* tmp24371 */
t2=((C_word*)t0)[2];
f_6210(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* k7738 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_7740,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7743,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7813,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_7813(t6,t2,t1);}

/* k7741 in k7738 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7743(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7743,2,av);}
a=C_alloc(25);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7747,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7752,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t9=C_i_cadr(((C_word*)t0)[4]);
t10=C_i_check_list_2(t9,lf[161]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7769,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7779,a[2]=t6,a[3]=t13,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_7779(t15,t11,t9);}

/* k7745 in k7741 in k7738 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_7747,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[211],lf[109],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5277 in err in check-signature in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5279,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5283,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[3]);
/* support.scm:140: map-llist */
t5=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=*((C_word*)lf[47]+1);
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k6171 in tmp14370 in a6166 in a6135 in string->expr in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6173,2,av);}
a=C_alloc(3);
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[115];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(t1);
t3=C_i_nullp(t2);
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(C_truep(t3)?C_u_i_car(t1):C_a_i_cons(&a,2,lf[116],t1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* err in check-signature in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_5271(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_5271,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5279,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:139: real-name */
t3=*((C_word*)lf[47]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k9999 in k9996 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,5)))){
C_save_and_reclaim((void *)f_10001,2,av);}
a=C_alloc(14);
t2=t1;
t3=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],t2),((C_word*)t0)[3]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10007,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* support.scm:734: put! */
t6=*((C_word*)lf[152]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[8];
av2[3]=t2;
av2[4]=lf[288];
av2[5]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}

/* k10005 in k9999 in k9996 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10007(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10007,2,av);}
a=C_alloc(8);
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10027,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=C_i_cadr(((C_word*)t0)[5]);
/* support.scm:737: walk */
t6=((C_word*)((C_word*)t0)[6])[1];
f_9884(t6,t4,t5,((C_word*)t0)[7]);}

/* k15919 in k15904 in read-info-hook in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15921(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_15921,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15925,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
/* support.scm:1573: ##sys#hash-table-ref */
t6=*((C_word*)lf[149]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=*((C_word*)lf[158]+1);
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k15923 in k15919 in k15904 in read-info-hook in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15925(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_15925,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=t1;
t3=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]),t2);
/* support.scm:1568: ##sys#hash-table-set! */
t4=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=*((C_word*)lf[158]+1);
av2[3]=((C_word*)t0)[5];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]),C_SCHEME_END_OF_LIST);
/* support.scm:1568: ##sys#hash-table-set! */
t3=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=*((C_word*)lf[158]+1);
av2[3]=((C_word*)t0)[5];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* map-loop1427 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_8732(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8732,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8757,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:617: g1433 */
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

/* k14862 in k14856 in k14837 in walk in scan-free-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_14864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_14864,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14868,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1365: lset-adjoin */
t3=*((C_word*)lf[483]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=*((C_word*)lf[13]+1);
av2[3]=((C_word*)((C_word*)t0)[3])[1];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k14866 in k14862 in k14856 in k14837 in walk in scan-free-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_14868(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_14868,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8728 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_8730,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[211],lf[253],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k14856 in k14837 in walk in scan-free-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_14858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_14858,2,av);}
a=C_alloc(5);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14864,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1364: variable-visible? */
t4=*((C_word*)lf[314]+1);{
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

/* k8755 in map-loop1427 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8757(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8757,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8732(t6,((C_word*)t0)[5],t5);}

/* k7775 in k7767 in k7741 in k7738 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7777,2,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
/* support.scm:551: append */
t3=*((C_word*)lf[69]+1);{
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

/* map-loop1121 in k7741 in k7738 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_7779(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7779,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7804,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:551: g1127 */
t5=((C_word*)t0)[4];
f_7752(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8788(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8788,3,av);}
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
t13=C_eqp(t12,lf[225]);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8822,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t1,a[5]=t11,a[6]=t12,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t13)){
t15=t14;
f_8822(t15,t13);}
else{
t15=C_eqp(t12,lf[277]);
t16=t14;
f_8822(t16,(C_truep(t15)?t15:C_eqp(t12,lf[278])));}}

/* k15812 in k15801 in k15798 in k15795 in k15792 in k15789 in k15786 in k15777 in loop in dump-nodes in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15814(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_15814,2,av);}
a=C_alloc(9);
t2=C_block_size(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15820,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_greaterp(t3,C_fix(4)))){
t5=*((C_word*)lf[16]+1);
t6=*((C_word*)lf[16]+1);
t7=C_i_check_port_2(*((C_word*)lf[16]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[17]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15832,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* support.scm:1555: ##sys#write-char-0 */
t9=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=C_make_character(91);
av2[3]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
/* write-char/port */
t5=*((C_word*)lf[527]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=C_make_character(62);
av2[3]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* ##compiler#check-signature in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5268(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5268,5,av);}
a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5271,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5292,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_5292(t9,t1,t3,t4);}

/* k15959 in k15956 in user-read-hook in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_15961,2,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,2,lf[535],t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,lf[536],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##compiler#build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8782(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8782,3,av);}
a=C_alloc(5);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8788,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
f_8788(3,av2);}}

/* k7767 in k7741 in k7738 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7769,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7777,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:552: walk */
t4=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
f_7547(3,av2);}}

/* k6794 in a6785 in display-line-number-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6796,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6799,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:431: ##sys#write-char-0 */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6797 in k6794 in a6785 in display-line-number-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6799(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6799,2,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6802,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)t0)[4];
t8=C_i_check_list_2(t7,lf[161]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6815,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6817,a[2]=t5,a[3]=t11,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_6817(t13,t9,t7);}

/* k5258 in k5254 in loop in map-llist in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5260,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8772 in k8769 in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8774,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11550 in compute-database-statistics in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11552(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_11552,2,av);}
/* support.scm:980: values */{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(9);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[333]+1);
av2[3]=*((C_word*)lf[334]+1);
av2[4]=((C_word*)((C_word*)t0)[3])[1];
av2[5]=((C_word*)((C_word*)t0)[4])[1];
av2[6]=((C_word*)((C_word*)t0)[5])[1];
av2[7]=((C_word*)((C_word*)t0)[6])[1];
av2[8]=((C_word*)((C_word*)t0)[7])[1];
C_values(9,av2);}}

/* a11556 in compute-database-statistics in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11557(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_11557,4,av);}
a=C_alloc(13);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11559,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=C_i_check_list_2(t3,lf[35]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11638,a[2]=t4,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_11638(t9,t1,t3);}

/* g2465 in a11556 in compute-database-statistics in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static C_word C_fcall f_11559(C_word *a,C_word t0,C_word t1){
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
C_stack_overflow_check;{}
t2=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_i_car(t1);
t5=C_eqp(t4,lf[189]);
if(C_truep(t5)){
t6=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t6);
return(t7);}
else{
t6=C_eqp(t4,lf[172]);
if(C_truep(t6)){
t7=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[4])[1],C_fix(1));
t8=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t7);
t9=t1;
t10=C_u_i_cdr(t9);
t11=C_slot(t10,C_fix(1));
t12=C_eqp(lf[133],t11);
if(C_truep(t12)){
t13=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[5])[1],C_fix(1));
t14=C_mutate2(((C_word *)((C_word*)t0)[5])+1,t13);
return(t14);}
else{
t13=C_SCHEME_UNDEFINED;
return(t13);}}
else{
t7=C_eqp(t4,lf[177]);
if(C_truep(t7)){
t8=t1;
t9=C_u_i_cdr(t8);
t10=C_i_length(t9);
t11=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[6])[1],t10);
t12=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t11);
return(t12);}
else{
t8=C_SCHEME_UNDEFINED;
return(t8);}}}}

/* k8769 in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_8771,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8774,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_positivep(((C_word*)((C_word*)t0)[3])[1]))){
/* support.scm:620: debugging */
t4=*((C_word*)lf[14]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[261];
av2[3]=lf[262];
av2[4]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k15956 in user-read-hook in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_15958,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15961,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1588: scan-sharp-greater-string */
t3=*((C_word*)lf[537]+1);{
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

/* k5948 in immediate? in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_5950(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_5950,2,t0,t1);}
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

/* g1127 in k7741 in k7738 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_7752(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_7752,3,t0,t1,t2);}
t3=C_i_cadr(t2);
/* support.scm:551: walk */
t4=((C_word*)((C_word*)t0)[2])[1];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
f_7547(3,av2);}}

/* k5254 in loop in map-llist in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5256(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5256,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5260,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* support.scm:134: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_5233(t6,t3,t5);}

/* k11523 in a11483 in dump-global-refs in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11525(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11525,2,av);}
a=C_alloc(9);
t2=(C_truep(t1)?C_SCHEME_FALSE:C_i_assq(lf[189],((C_word*)t0)[2]));
if(C_truep(t2)){
t3=C_i_assq(lf[176],((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11497,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
t5=C_i_cdr(t3);
t6=C_i_length(t5);
t7=C_a_i_list2(&a,2,((C_word*)t0)[4],t6);
/* support.scm:933: write */
t8=*((C_word*)lf[207]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t4;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t5=C_a_i_list2(&a,2,((C_word*)t0)[4],C_fix(0));
/* support.scm:933: write */
t6=*((C_word*)lf[207]+1);{
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
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* ##sys#toplevel-definition-hook in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11527(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11527,6,av);}
a=C_alloc(4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_not(t4));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11537,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:943: debugging */
t8=*((C_word*)lf[14]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[261];
av2[3]=lf[331];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* ##compiler#immediate? in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5946,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5950,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5990,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm:270: big-fixnum? */
t5=*((C_word*)lf[102]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=t3;
f_5950(t4,C_SCHEME_FALSE);}}

/* k15901 in read-info-hook in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_15903,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k15904 in read-info-hook in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_15906(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_15906,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15921,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1572: conc */
t5=*((C_word*)lf[507]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=*((C_word*)lf[529]+1);
av2[3]=lf[530];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k16027 in k16024 in k16012 in k15984 in loop in k15975 in scan-sharp-greater-string in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_16029,2,av);}
/* support.scm:1607: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_15982(t2,((C_word*)t0)[3]);}

/* k16024 in k16012 in k15984 in loop in k15975 in scan-sharp-greater-string in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_16026,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16029,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[527]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k15818 in k15812 in k15801 in k15798 in k15795 in k15792 in k15789 in k15786 in k15777 in loop in dump-nodes in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_15820,2,av);}
/* write-char/port */
t2=*((C_word*)lf[527]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(62);
av2[3]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k8458 in map-loop1319 in k8405 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8460(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8460,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8435(t6,((C_word*)t0)[5],t5);}

/* walk in scan-free-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_14805(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_14805,4,t0,t1,t2,t3);}
a=C_alloc(11);
t4=t2;
t5=C_slot(t4,C_fix(3));
t6=t5;
t7=t2;
t8=C_slot(t7,C_fix(2));
t9=t8;
t10=t2;
t11=C_slot(t10,C_fix(1));
t12=t11;
t13=C_eqp(t12,lf[97]);
t14=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_14839,a[2]=t1,a[3]=t12,a[4]=t9,a[5]=t3,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=t6,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t13)){
t15=t14;
f_14839(t15,t13);}
else{
t15=C_eqp(t12,lf[226]);
if(C_truep(t15)){
t16=t14;
f_14839(t16,t15);}
else{
t16=C_eqp(t12,lf[241]);
if(C_truep(t16)){
t17=t14;
f_14839(t17,t16);}
else{
t17=C_eqp(t12,lf[245]);
t18=t14;
f_14839(t18,(C_truep(t17)?t17:C_eqp(t12,lf[257])));}}}}

/* ##compiler#scan-free-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_14802(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_14802,3,av);}
a=C_alloc(22);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14805,a[2]=t4,a[3]=t6,a[4]=t8,a[5]=t10,tmp=(C_word)a,a+=6,tmp));
t12=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14989,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15027,a[2]=t1,a[3]=t4,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1383: walk */
t14=((C_word*)t8)[1];
f_14805(t14,t13,t2,C_SCHEME_END_OF_LIST);}

/* k16012 in k15984 in loop in k15975 in scan-sharp-greater-string in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_16014,2,av);}
a=C_alloc(6);
t2=t1;
t3=C_eqp(C_make_character(35),t2);
if(C_truep(t3)){
/* support.scm:1603: get-output-string */
t4=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_16026,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t5=*((C_word*)lf[527]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_make_character(60);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* map-loop1513 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_8894(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8894,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8919,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:631: g1519 */
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

/* g3148 in k13403 in k13397 in k13385 in a13376 in estimate-foreign-result-location-size in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_13409(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_13409,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* support.scm:1224: next */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t2;
/* support.scm:1224: next */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k13403 in k13397 in k13385 in a13376 in estimate-foreign-result-location-size in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_13405(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_13405,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13409,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1222: g3148 */
t3=t2;
f_13409(t3,((C_word*)t0)[3],t1);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[4];
t3=C_u_i_car(t2);
t4=C_eqp(t3,lf[387]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13442,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_13442(t6,t4);}
else{
t6=C_eqp(t3,lf[395]);
if(C_truep(t6)){
t7=t5;
f_13442(t7,t6);}
else{
t7=C_eqp(t3,lf[396]);
if(C_truep(t7)){
t8=t5;
f_13442(t8,t7);}
else{
t8=C_eqp(t3,lf[378]);
if(C_truep(t8)){
t9=t5;
f_13442(t9,t8);}
else{
t9=C_eqp(t3,lf[380]);
if(C_truep(t9)){
t10=t5;
f_13442(t10,t9);}
else{
t10=C_eqp(t3,lf[397]);
if(C_truep(t10)){
t11=t5;
f_13442(t11,t10);}
else{
t11=C_eqp(t3,lf[360]);
t12=t5;
f_13442(t12,(C_truep(t11)?t11:C_eqp(t3,lf[362])));}}}}}}}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[4];
/* support.scm:1208: quit */
t4=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[445];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}}

/* ##compiler#compute-database-statistics in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11548(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,4)))){
C_save_and_reclaim((void *)f_11548,3,av);}
a=C_alloc(25);
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_fix(0);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_fix(0);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_fix(0);
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11552,a[2]=t1,a[3]=t6,a[4]=t4,a[5]=t8,a[6]=t12,a[7]=t10,tmp=(C_word)a,a+=8,tmp);
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11557,a[2]=t10,a[3]=t8,a[4]=t6,a[5]=t4,a[6]=t12,tmp=(C_word)a,a+=7,tmp);
/* support.scm:966: ##sys#hash-table-for-each */
t15=*((C_word*)lf[162]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t15;
av2[1]=t13;
av2[2]=t14;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}

/* k8890 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8892,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[264],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##compiler#big-fixnum? in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_16042,3,av);}
if(C_truep(C_fixnump(t2))){
if(C_truep(C_fudge(C_fix(3)))){
t3=C_fixnum_greaterp(t2,C_fix(1073741823));
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(C_truep(t3)?t3:C_fixnum_lessp(t2,C_fix(-1073741824)));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k15884 in for-each-loop3784 in k15801 in k15798 in k15795 in k15792 in k15789 in k15786 in k15777 in loop in dump-nodes in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_15886,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_15876(t3,((C_word*)t0)[4],t2);}

/* k16035 in k15984 in loop in k15975 in scan-sharp-greater-string in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_16037,2,av);}
/* support.scm:1610: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_15982(t2,((C_word*)t0)[3]);}

/* ##compiler#hide-variable in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_16066,3,av);}
a=C_alloc(3);
t3=C_a_i_list(&a,1,lf[540]);
if(C_truep(C_i_nullp(t3))){
/* tweaks.scm:54: ##sys#put! */
t4=*((C_word*)lf[142]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[541];
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=C_i_car(t3);
/* tweaks.scm:54: ##sys#put! */
t5=*((C_word*)lf[142]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[541];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* k11535 in toplevel-definition-hook in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11537,2,av);}
/* support.scm:944: hide-variable */
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

/* loop in map-llist in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_5233(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5233,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
/* support.scm:133: proc */
t3=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5256,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* support.scm:134: proc */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}}

/* k14837 in walk in scan-free-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_14839(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,5)))){
C_save_and_reclaim_args((void *)trf_14839,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[221]);
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
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14858,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[7],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* support.scm:1363: lset-adjoin */
t6=*((C_word*)lf[483]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=*((C_word*)lf[13]+1);
av2[3]=((C_word*)((C_word*)t0)[6])[1];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}
else{
t3=C_eqp(((C_word*)t0)[3],lf[246]);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[4]);
if(C_truep(C_i_memq(t4,((C_word*)t0)[5]))){
t5=C_i_car(((C_word*)t0)[8]);
/* support.scm:1369: walk */
t6=((C_word*)((C_word*)t0)[9])[1];
f_14805(t6,((C_word*)t0)[2],t5,((C_word*)t0)[5]);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_14894,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* support.scm:1368: lset-adjoin */
t6=*((C_word*)lf[483]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=*((C_word*)lf[13]+1);
av2[3]=((C_word*)((C_word*)t0)[6])[1];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}
else{
t4=C_eqp(((C_word*)t0)[3],lf[109]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_14903,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=C_i_car(((C_word*)t0)[8]);
/* support.scm:1371: walk */
t7=((C_word*)((C_word*)t0)[9])[1];
f_14805(t7,t5,t6,((C_word*)t0)[5]);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[133]);
if(C_truep(t5)){
t6=C_i_caddr(((C_word*)t0)[4]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14933,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1374: decompose-lambda-list */
t8=*((C_word*)lf[124]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=((C_word*)t0)[2];
av2[2]=t6;
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
/* support.scm:1378: walkeach */
t6=((C_word*)((C_word*)t0)[10])[1];
f_14989(t6,((C_word*)t0)[2],((C_word*)t0)[8],((C_word*)t0)[5]);}}}}}}

/* ##compiler#export-variable in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_16086,3,av);}
a=C_alloc(3);
t3=C_a_i_list(&a,1,lf[543]);
if(C_truep(C_i_nullp(t3))){
/* tweaks.scm:54: ##sys#put! */
t4=*((C_word*)lf[142]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[541];
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=C_i_car(t3);
/* tweaks.scm:54: ##sys#put! */
t5=*((C_word*)lf[142]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[541];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* k15126 in make-random-name in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15128(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_15128,2,av);}
a=C_alloc(9);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[52]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15134,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=((C_word*)t0)[3];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15158,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t6))){
/* support.scm:1417: gensym */
t8=*((C_word*)lf[110]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_i_car(t6);
/* support.scm:1416: ##sys#print */
t9=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t5;
av2[2]=t8;
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}

/* ##compiler#make-random-name in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_15120,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15128,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1416: open-output-string */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* doloop3815 in k15833 in k15830 in k15812 in k15801 in k15798 in k15795 in k15792 in k15789 in k15786 in k15777 in loop in dump-nodes in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_15843(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_15843,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=*((C_word*)lf[16]+1);
t4=*((C_word*)lf[16]+1);
t5=C_i_check_port_2(*((C_word*)lf[16]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[17]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_15856,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* support.scm:1556: ##sys#write-char-0 */
t7=*((C_word*)lf[18]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=C_make_character(32);
av2[3]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* ##compiler#block-variable-literal-name in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_15111,3,av);}
t3=C_i_check_structure_2(t2,lf[489],lf[492]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k15984 in loop in k15975 in scan-sharp-greater-string in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_15986,2,av);}
a=C_alloc(5);
if(C_truep(C_eofp(t1))){
/* support.scm:1596: quit */
t2=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[539];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
if(C_truep(C_u_i_char_equalp(t1,C_make_character(10)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16003,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1598: newline */
t3=*((C_word*)lf[15]+1);{
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
else{
if(C_truep(C_u_i_char_equalp(t1,C_make_character(60)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16014,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* read-char/port */
t3=*((C_word*)lf[538]+1);{
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
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16037,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[527]+1);{
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
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}}}

/* loop in k15975 in scan-sharp-greater-string in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_15982(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_15982,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15986,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* read-char/port */
t3=*((C_word*)lf[538]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k15141 in k15138 in k15135 in k15132 in k15126 in make-random-name in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_15143,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15146,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1416: get-output-string */
t3=*((C_word*)lf[53]+1);{
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

/* k15144 in k15141 in k15138 in k15135 in k15132 in k15126 in make-random-name in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_15146,2,av);}
/* support.scm:1415: string->symbol */
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

/* k15138 in k15135 in k15132 in k15126 in make-random-name in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_15140,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15143,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15150,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1419: random */
t4=*((C_word*)lf[494]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fix(1000);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k15975 in scan-sharp-greater-string in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15977(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_15977,2,av);}
a=C_alloc(7);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15982,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_15982(t6,((C_word*)t0)[3]);}

/* ##compiler#scan-sharp-greater-string in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_15973,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15977,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1593: open-output-string */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k15132 in k15126 in make-random-name in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15134(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_15134,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15137,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1416: ##sys#write-char-0 */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(45);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k10553 in map-loop2124 in walk in node->sexpr in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10555(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10555,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10530(t6,((C_word*)t0)[5],t5);}

/* k15135 in k15132 in k15126 in make-random-name in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_15137,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15140,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15154,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1418: current-seconds */
t4=*((C_word*)lf[495]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k8628 in a8540 in k8405 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_8630,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
f_8602(t4,C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[3];
f_8602(t2,C_SCHEME_FALSE);}}

/* k15854 in doloop3815 in k15833 in k15830 in k15812 in k15801 in k15798 in k15795 in k15792 in k15789 in k15786 in k15777 in loop in dump-nodes in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_15856,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15859,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[5],((C_word*)t0)[2]);
/* support.scm:1556: ##sys#print */
t4=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k15857 in k15854 in doloop3815 in k15833 in k15830 in k15812 in k15801 in k15798 in k15795 in k15792 in k15789 in k15786 in k15777 in loop in dump-nodes in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 in ... */
static void C_ccall f_15859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_15859,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_15843(t3,((C_word*)t0)[4],t2);}

/* ##compiler#sexpr->node in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10564(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10564,3,av);}
a=C_alloc(5);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10570,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
f_10570(3,av2);}}

/* ##compiler#set-real-name! in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15169(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_15169,4,av);}
/* support.scm:1430: ##sys#hash-table-set! */
t4=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=*((C_word*)lf[497]+1);
av2[3]=t2;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k15798 in k15795 in k15792 in k15789 in k15786 in k15777 in loop in dump-nodes in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_15800,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_15803,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* support.scm:1544: ##sys#print */
t3=*((C_word*)lf[19]+1);{
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
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k15801 in k15798 in k15795 in k15792 in k15789 in k15786 in k15777 in loop in dump-nodes in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15803(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_15803,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15804,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[4],lf[35]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15814,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15876,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_15876(t8,t4,((C_word*)t0)[4]);}

/* g3785 in k15801 in k15798 in k15795 in k15792 in k15789 in k15786 in k15777 in loop in dump-nodes in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_15804(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_15804,3,t0,t1,t2);}
/* support.scm:1552: g3800 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_15751(t3,t1,((C_word*)t0)[3],t2);}

/* k15148 in k15138 in k15135 in k15132 in k15126 in make-random-name in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_15150,2,av);}
/* support.scm:1416: ##sys#print */
t2=*((C_word*)lf[19]+1);{
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

/* walk in sexpr->node in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10570(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10570,3,av);}
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
t15=C_i_check_list_2(t14,lf[161]);
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10599,a[2]=t1,a[3]=t4,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10601,a[2]=t9,a[3]=t18,a[4]=t11,a[5]=t10,tmp=(C_word)a,a+=6,tmp));
t20=((C_word*)t18)[1];
f_10601(t20,t16,t14);}

/* k15156 in k15126 in make-random-name in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_15158,2,av);}
/* support.scm:1416: ##sys#print */
t2=*((C_word*)lf[19]+1);{
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

/* k15152 in k15135 in k15132 in k15126 in make-random-name in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_15154,2,av);}
/* support.scm:1416: ##sys#print */
t2=*((C_word*)lf[19]+1);{
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

/* k8614 in k8607 in k8600 in a8540 in k8405 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8616,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],t1);
f_8606(2,av2);}}

/* k15830 in k15812 in k15801 in k15798 in k15795 in k15792 in k15789 in k15786 in k15777 in loop in dump-nodes in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_15832,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15835,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[4],C_fix(4));
/* support.scm:1555: ##sys#print */
t4=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k15833 in k15830 in k15812 in k15801 in k15798 in k15795 in k15792 in k15789 in k15786 in k15777 in loop in dump-nodes in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15835(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_15835,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15838,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15843,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_15843(t6,t2,C_fix(5));}

/* k15836 in k15833 in k15830 in k15812 in k15801 in k15798 in k15795 in k15792 in k15789 in k15786 in k15777 in loop in dump-nodes in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_15838,2,av);}
/* write-char/port */
t2=*((C_word*)lf[527]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(93);
av2[3]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k15187 in k15181 in resolve in real-name in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_15189,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=(C_truep(t1)?t1:((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k15181 in resolve in real-name in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_15183,2,av);}
a=C_alloc(4);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15189,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1439: ##sys#hash-table-ref */
t4=*((C_word*)lf[149]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[497]+1);
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9783 in k9813 in k9733 in k9730 in a9727 in a9715 in inline-lambda-bindings in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9785(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,1)))){
C_save_and_reclaim((void *)f_9785,2,av);}
a=C_alloc(11);
t2=C_a_i_list2(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_9761(t3,C_a_i_record4(&a,4,lf[211],lf[109],((C_word*)t0)[4],t2));}

/* resolve in real-name in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_15179(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_15179,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15183,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1437: ##sys#hash-table-ref */
t4=*((C_word*)lf[149]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[497]+1);
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k10597 in walk in sexpr->node in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_10599,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[211],((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##compiler#real-name in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,3)))){
C_save_and_reclaim((void*)f_15176,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+8);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15179,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15195,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* support.scm:1442: resolve */
f_15179(t5,t2);}

/* k15193 in real-name in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_15195,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15291,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:1446: ##sys#symbol->qualified-string */
t5=*((C_word*)lf[254]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* support.scm:1460: ##sys#symbol->qualified-string */
t2=*((C_word*)lf[254]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}
else{
/* support.scm:1443: ##sys#symbol->qualified-string */
t2=*((C_word*)lf[254]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* ##compiler#final-foreign-type in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_12873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_12873,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12879,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12912,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1165: follow-without-loop */
t5=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* a12878 in final-foreign-type in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_12879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_12879,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12883,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_symbolp(t2))){
/* support.scm:1168: ##sys#hash-table-ref */
t5=*((C_word*)lf[149]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=*((C_word*)lf[398]+1);
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_12883(2,av2);}}}

/* k6356 in for-each-loop534 in initialize-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6358,2,av);}
a=C_alloc(3);
if(C_truep(C_i_memq(((C_word*)t0)[2],*((C_word*)lf[144]+1)))){
t2=C_a_i_list(&a,1,C_SCHEME_TRUE);
if(C_truep(C_i_nullp(t2))){
/* tweaks.scm:54: ##sys#put! */
t3=*((C_word*)lf[142]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=lf[145];
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=C_i_car(t2);
/* tweaks.scm:54: ##sys#put! */
t4=*((C_word*)lf[142]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=lf[145];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* rec in simple-lambda-node? in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11307(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11307,3,av);}
t3=t2;
t4=C_slot(t3,C_fix(1));
t5=C_eqp(t4,lf[253]);
if(C_truep(t5)){
t6=t2;
t7=C_slot(t6,C_fix(3));
t8=C_i_car(t7);
t9=C_slot(t8,C_fix(1));
t10=C_eqp(lf[221],t9);
if(C_truep(t10)){
t11=C_slot(t8,C_fix(2));
t12=C_i_car(t11);
t13=C_eqp(((C_word*)t0)[2],t12);
if(C_truep(t13)){
t14=C_u_i_cdr(t7);
/* support.scm:901: every */
t15=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t15;
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}
else{
t14=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}}
else{
t11=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}
else{
t6=C_eqp(t4,lf[243]);
if(C_truep(t6)){
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=t2;
t8=C_slot(t7,C_fix(3));
/* support.scm:903: every */
t9=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}}}

/* a6135 in string->expr in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_6136,3,av);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6142,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6167,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:302: with-exception-handler */
t5=*((C_word*)lf[122]+1);{
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

/* a9715 in inline-lambda-bindings in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9716(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9716,5,av);}
a=C_alloc(13);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9722,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9728,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* support.scm:688: ##sys#call-with-values */{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t6;
C_call_with_values(4,av2);}}

/* ##compiler#inline-lambda-bindings in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9710(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9710,8,av);}
a=C_alloc(7);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9716,a[2]=t3,a[3]=t5,a[4]=t4,a[5]=t6,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* support.scm:686: decompose-lambda-list */
t9=*((C_word*)lf[124]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t1;
av2[2]=t2;
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* k6129 in string->expr in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6131(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6131,2,av);}
/* support.scm:302: g488 */
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k12881 in a12878 in final-foreign-type in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_12883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_12883,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12887,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1167: g2872 */
t3=t2;
f_12887(t3,((C_word*)t0)[3],t1);}
else{
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g2872 in k12881 in a12878 in final-foreign-type in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_12887(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_12887,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* support.scm:1170: next */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t2;
/* support.scm:1170: next */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k10526 in walk in node->sexpr in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_10528,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop2124 in walk in node->sexpr in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_10530(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10530,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10555,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:778: g2130 */
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

/* k11991 in k11868 in k11853 in repeat in a11823 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_11993(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_11993,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11996,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1056: gensym */
t3=*((C_word*)lf[110]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[5],lf[368]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12035,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_12035(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[411]);
if(C_truep(t4)){
t5=t3;
f_12035(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[412]);
if(C_truep(t5)){
t6=t3;
f_12035(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[5],lf[413]);
if(C_truep(t6)){
t7=t3;
f_12035(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[5],lf[414]);
if(C_truep(t7)){
t8=t3;
f_12035(t8,t7);}
else{
t8=C_eqp(((C_word*)t0)[5],lf[415]);
if(C_truep(t8)){
t9=t3;
f_12035(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[5],lf[416]);
t10=t3;
f_12035(t10,(C_truep(t9)?t9:C_eqp(((C_word*)t0)[5],lf[417])));}}}}}}}}

/* k11994 in k11991 in k11868 in k11853 in repeat in a11823 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11996(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11996,2,av);}
a=C_alloc(29);
t2=t1;
t3=C_a_i_list(&a,2,t2,((C_word*)t0)[2]);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12011,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[353]+1))){
t7=t6;
f_12011(t7,t2);}
else{
t7=C_a_i_list(&a,2,lf[97],((C_word*)t0)[4]);
t8=t6;
f_12011(t8,C_a_i_list(&a,3,lf[365],t7,t2));}}

/* k6107 in loop in canonicalize-begin-body in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6109,2,av);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_6078(t3,t2);}
else{
t2=((C_word*)t0)[2];
f_6078(t2,C_i_equalp(((C_word*)t0)[3],lf[112]));}}

/* k5205 in k5202 in k5199 in k5129 in syntax-error-hook in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5207,2,av);}
/* support.scm:120: ##sys#write-char-0 */
t2=*((C_word*)lf[18]+1);{
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

/* k5202 in k5199 in k5129 in syntax-error-hook in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5204,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5207,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:120: ##sys#write-char-0 */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5199 in k5129 in syntax-error-hook in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_5201,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5204,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:120: ##sys#print */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6102 in k6076 in loop in canonicalize-begin-body in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6104(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6104,2,av);}
a=C_alloc(13);
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=C_a_i_list(&a,2,t1,t3);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6094,a[2]=((C_word*)t0)[3],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=((C_word*)t0)[2];
t9=C_u_i_cdr(t8);
/* support.scm:299: loop */
t10=((C_word*)((C_word*)t0)[4])[1];
f_6054(t10,t7,t9);}

/* k10733 in for-each-loop2224 in k10715 in k10704 in a10701 in k10637 in emit-global-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10735,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10725(t3,((C_word*)t0)[4],t2);}

/* k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6126(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(59,c,6)))){
C_save_and_reclaim((void *)f_6126,2,av);}
a=C_alloc(59);
t2=t1;
t3=C_mutate2((C_word*)lf[113]+1 /* (set! ##compiler#string->expr ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6127,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t4=C_mutate2((C_word*)lf[124]+1 /* (set! ##compiler#decompose-lambda-list ...) */,*((C_word*)lf[125]+1));
t5=C_mutate2((C_word*)lf[126]+1 /* (set! ##compiler#llist-length ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6230,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate2((C_word*)lf[127]+1 /* (set! ##compiler#llist-match? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6233,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate2((C_word*)lf[128]+1 /* (set! ##compiler#expand-profile-lambda ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6277,tmp=(C_word)a,a+=2,tmp));
t8=C_SCHEME_TRUE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_mutate2((C_word*)lf[137]+1 /* (set! ##compiler#initialize-analysis-database ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6334,a[2]=t9,tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[148]+1 /* (set! ##compiler#get ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6531,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate2((C_word*)lf[150]+1 /* (set! ##compiler#get-all ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6549,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate2((C_word*)lf[152]+1 /* (set! ##compiler#put! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6567,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate2((C_word*)lf[154]+1 /* (set! ##compiler#collect! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6613,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate2((C_word*)lf[155]+1 /* (set! ##compiler#count! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6665,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate2((C_word*)lf[156]+1 /* (set! ##compiler#get-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6720,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate2((C_word*)lf[157]+1 /* (set! ##compiler#get-line ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6729,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate2((C_word*)lf[159]+1 /* (set! ##compiler#get-line-2 ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6739,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate2((C_word*)lf[160]+1 /* (set! ##compiler#display-line-number-database ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6780,tmp=(C_word)a,a+=2,tmp));
t20=C_SCHEME_FALSE;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_mutate2((C_word*)lf[163]+1 /* (set! ##compiler#display-analysis-database ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6851,a[2]=t21,tmp=(C_word)a,a+=3,tmp));
t23=C_mutate2((C_word*)lf[210]+1 /* (set! make-node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7439,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate2((C_word*)lf[212]+1 /* (set! node? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7445,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate2((C_word*)lf[213]+1 /* (set! node-class ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7451,tmp=(C_word)a,a+=2,tmp));
t26=C_mutate2((C_word*)lf[214]+1 /* (set! node-class-set! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7460,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate2((C_word*)lf[216]+1 /* (set! node-parameters ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7469,tmp=(C_word)a,a+=2,tmp));
t28=C_mutate2((C_word*)lf[217]+1 /* (set! node-parameters-set! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7478,tmp=(C_word)a,a+=2,tmp));
t29=C_mutate2((C_word*)lf[218]+1 /* (set! node-subexpressions ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7487,tmp=(C_word)a,a+=2,tmp));
t30=C_mutate2((C_word*)lf[219]+1 /* (set! node-subexpressions-set! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7496,tmp=(C_word)a,a+=2,tmp));
t31=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7506,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t32=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16325,tmp=(C_word)a,a+=2,tmp);
/* support.scm:512: ##sys#register-record-printer */
t33=*((C_word*)lf[566]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t33;
av2[1]=t31;
av2[2]=lf[211];
av2[3]=t32;
((C_proc)(void*)(*((C_word*)t33+1)))(4,av2);}}

/* ##compiler#string->expr in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_6127,3,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6131,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6136,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:302: call-with-current-continuation */
t5=*((C_word*)lf[123]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* map-llist in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5227(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5227,4,av);}
a=C_alloc(6);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5233,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5233(t7,t1,t3);}

/* ##compiler#emit-syntax-trace-info in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5224,4,av);}
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_emit_syntax_trace_info(t2,t3,*((C_word*)lf[37]+1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k9759 in k9733 in k9730 in a9727 in a9715 in inline-lambda-bindings in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_9761(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_9761,2,t0,t1);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9765,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* support.scm:707: take */
t4=*((C_word*)lf[284]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k9763 in k9759 in k9733 in k9730 in a9727 in a9715 in inline-lambda-bindings in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9765,2,av);}
/* support.scm:694: fold-right */
t2=*((C_word*)lf[283]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6123,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6126,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:303: condition-property-accessor */
t4=*((C_word*)lf[567]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[521];
av2[3]=lf[522];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* ##compiler#foreign-type-convert-result in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_12811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_12811,4,av);}
a=C_alloc(4);
if(C_truep(C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12824,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1152: ##sys#hash-table-ref */
t5=*((C_word*)lf[149]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=*((C_word*)lf[398]+1);
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t4=t2;
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k7981 in loop in k8060 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7983(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7983,2,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7962,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_a_i_record4(&a,4,lf[211],lf[226],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[4]);
/* support.scm:566: reverse */
t7=*((C_word*)lf[91]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t4;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k15481 in k15461 in k15458 in k15591 in k15443 in constant-form-eval in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_15483,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15486,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:1509: debugging */
t3=*((C_word*)lf[14]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[261];
av2[3]=lf[517];
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=C_u_i_length(((C_word*)t0)[2]);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
/* support.scm:1512: k */
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
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
/* support.scm:1514: bomb */
t4=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[518];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}}

/* k15484 in k15481 in k15461 in k15458 in k15591 in k15443 in constant-form-eval in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_15486,2,av);}
t2=C_i_car(((C_word*)t0)[2]);
/* support.scm:1510: k */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
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

/* a15524 in k15591 in k15443 in constant-form-eval in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_15525,3,av);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15531,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15547,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1501: with-exception-handler */
t5=*((C_word*)lf[122]+1);{
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

/* k7960 in k7981 in loop in k8060 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_7962,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[211],lf[237],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a12804 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_12805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12805,2,av);}
/* support.scm:1145: quit */
t2=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[434];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k15458 in k15591 in k15443 in constant-form-eval in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15460(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_15460,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15463,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1501: g3710 */
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k15461 in k15458 in k15591 in k15443 in constant-form-eval in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15463(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_15463,2,av);}
a=C_alloc(6);
t2=t1;
if(C_truep(C_i_structurep(t2,lf[211]))){
/* support.scm:1506: k */
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
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
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15483,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_i_length(t2);
t5=C_eqp(C_fix(1),t4);
if(C_truep(t5)){
t6=C_i_car(t2);
/* support.scm:1508: encodeable-literal? */
t7=*((C_word*)lf[519]+1);{
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
av2[1]=C_SCHEME_FALSE;
f_15483(2,av2);}}}}

/* k6385 in initialize-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6387(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6387,2,av);}
a=C_alloc(8);
t2=*((C_word*)lf[139]+1);
t3=C_i_check_list_2(*((C_word*)lf[139]+1),lf[35]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6435,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6485,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_6485(t8,t4,*((C_word*)lf[139]+1));}

/* k12853 in foreign-type-convert-argument in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_12855(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_12855,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
if(C_truep(C_i_vectorp(t1))){
t2=C_i_vector_ref(t1,C_fix(1));
t3=C_a_i_list2(&a,2,t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=((C_word*)t0)[2];
t5=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12822 in foreign-type-convert-result in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_12824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_12824,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
if(C_truep(C_i_vectorp(t1))){
t2=C_i_vector_ref(t1,C_fix(2));
t3=C_a_i_list2(&a,2,t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=((C_word*)t0)[2];
t5=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k15443 in constant-form-eval in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15445(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_15445,2,av);}
a=C_alloc(18);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(t2,lf[161]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15593,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15595,a[2]=t5,a[3]=t10,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_15595(t12,t8,t2);}

/* k6670 in k6667 in count! in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_6672(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_6672,2,t0,t1);}
a=C_alloc(6);
if(C_truep(((C_word*)t0)[2])){
t2=C_i_assq(((C_word*)t0)[3],((C_word*)t0)[2]);
if(C_truep(t2)){
t3=C_slot(t2,C_fix(1));
t4=C_a_i_plus(&a,2,t3,t1);
t5=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t5;
av2[1]=C_i_setslot(t2,C_fix(1),t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1),t3);
t5=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t5;
av2[1]=C_i_setslot(((C_word*)t0)[2],C_fix(1),t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[5]);
t3=C_a_i_list1(&a,1,t2);
/* support.scm:409: ##sys#hash-table-set! */
t4=*((C_word*)lf[153]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k11936 in k11868 in k11853 in repeat in a11823 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11938(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11938,2,av);}
a=C_alloc(29);
t2=t1;
t3=C_a_i_list(&a,2,t2,((C_word*)t0)[2]);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11953,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[353]+1))){
t7=t6;
f_11953(t7,t2);}
else{
t7=C_a_i_list(&a,2,lf[97],lf[364]);
t8=t6;
f_11953(t8,C_a_i_list(&a,3,lf[365],t7,t2));}}

/* ##compiler#constant-form-eval in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15421(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_15421,5,av);}
a=C_alloc(17);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_i_check_list_2(t3,lf[161]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15445,a[2]=t2,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15629,a[2]=t7,a[3]=t12,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_15629(t14,t10,t3);}

/* k16294 in k16287 in print-version in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_16296,2,av);}
/* support.scm:1669: print */
t2=*((C_word*)lf[296]+1);{
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

/* k7906 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void *)f_7908,2,av);}
a=C_alloc(8);
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[2];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[211],lf[236],((C_word*)t0)[3],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* ##compiler#block-variable-literal? in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15105(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_15105,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[489]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k16278 in k16186 in load-identifier-database in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_16280,2,av);}
/* support.scm:1654: file-exists? */
t2=*((C_word*)lf[86]+1);{
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

/* ##compiler#print-version in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +6,c,2)))){
C_save_and_reclaim((void*)f_16282,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+6);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16289,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t4)){
/* support.scm:1668: print* */
t6=*((C_word*)lf[559]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[560];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f17665,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1669: chicken-version */
t7=*((C_word*)lf[307]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k16287 in print-version in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_16289,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16296,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1669: chicken-version */
t3=*((C_word*)lf[307]+1);{
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

/* k14182 in k14107 in k14083 in foreign-type->scrutiny-type in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_14184(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_14184,2,t0,t1);}
a=C_alloc(15);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_eqp(t2,lf[462]);
if(C_truep(t3)){
t4=C_a_i_list(&a,2,lf[465],((C_word*)t0)[3]);
t5=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[466],lf[467],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[465],((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t2=C_eqp(((C_word*)t0)[5],lf[368]);
if(C_truep(t2)){
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[468];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_eqp(((C_word*)t0)[5],lf[412]);
if(C_truep(t3)){
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[469];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(((C_word*)t0)[5],lf[411]);
if(C_truep(t4)){
t5=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t5;
av2[1]=lf[470];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eqp(((C_word*)t0)[5],lf[413]);
if(C_truep(t5)){
t6=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t6;
av2[1]=lf[471];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(((C_word*)t0)[5],lf[414]);
if(C_truep(t6)){
t7=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t7;
av2[1]=lf[472];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_eqp(((C_word*)t0)[5],lf[415]);
if(C_truep(t7)){
t8=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t8;
av2[1]=lf[473];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_eqp(((C_word*)t0)[5],lf[416]);
if(C_truep(t8)){
t9=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t9;
av2[1]=lf[474];
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=C_eqp(((C_word*)t0)[5],lf[417]);
if(C_truep(t9)){
t10=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t10;
av2[1]=lf[475];
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t10=C_eqp(((C_word*)t0)[5],lf[370]);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14259,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t10)){
t12=t11;
f_14259(t12,t10);}
else{
t12=C_eqp(((C_word*)t0)[5],lf[408]);
if(C_truep(t12)){
t13=t11;
f_14259(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[5],lf[409]);
if(C_truep(t13)){
t14=t11;
f_14259(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[5],lf[410]);
if(C_truep(t14)){
t15=t11;
f_14259(t15,t14);}
else{
t15=C_eqp(((C_word*)t0)[5],lf[406]);
if(C_truep(t15)){
t16=t11;
f_14259(t16,t15);}
else{
t16=C_eqp(((C_word*)t0)[5],lf[372]);
if(C_truep(t16)){
t17=t11;
f_14259(t17,t16);}
else{
t17=C_eqp(((C_word*)t0)[5],lf[376]);
t18=t11;
f_14259(t18,(C_truep(t17)?t17:C_eqp(((C_word*)t0)[5],lf[407])));}}}}}}}}}}}}}}}}

/* k6667 in count! in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6669,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6672,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t4=((C_word*)t0)[4];
t5=t3;
f_6672(t5,C_u_i_car(t4));}
else{
t4=t3;
f_6672(t4,C_fix(1));}}

/* ##compiler#count! in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-5)*C_SIZEOF_PAIR +7,c,3)))){
C_save_and_reclaim((void*)f_6665,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+7);
t5=C_build_rest(&a,c,5,av);
C_word t6;
C_word t7;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6669,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* support.scm:403: ##sys#hash-table-ref */
t7=*((C_word*)lf[149]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* g2307 in resolve in match-node in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static C_word C_fcall f_10964(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_cdr(t1);
return(C_i_equalp(((C_word*)t0)[2],t2));}

/* ##compiler#collect! in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6613(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6613,6,av);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6617,a[2]=t4,a[3]=t5,a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* support.scm:395: ##sys#hash-table-ref */
t7=*((C_word*)lf[149]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k6615 in collect! in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6617(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6617,2,av);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_slot(t2,C_fix(1));
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_i_setslot(t2,C_fix(1),t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
t4=C_slot(t1,C_fix(1));
t5=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],t3),t4);
t6=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_i_setslot(t1,C_fix(1),t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list1(&a,1,t2);
/* support.scm:400: ##sys#hash-table-set! */
t4=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k16256 in k16192 in k16186 in load-identifier-database in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16258(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_16258,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[52]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_16264,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* support.scm:1655: ##sys#print */
t6=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[555];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k16241 in for-each-loop3976 in k16226 in k16198 in k16192 in k16186 in load-identifier-database in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16243(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_16243,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_16233(t3,((C_word*)t0)[4],t2);}

/* k10654 in k10646 in k10640 in k10637 in emit-global-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10656(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10656,2,av);}
a=C_alloc(5);
t2=C_i_check_list_2(t1,lf[35]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10664,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_10664(t6,((C_word*)t0)[2],t1);}

/* k16274 in k16271 in k16268 in k16265 in k16262 in k16256 in k16192 in k16186 in load-identifier-database in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_16276,2,av);}
/* support.scm:1655: debugging */
t2=*((C_word*)lf[14]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[553];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k16271 in k16268 in k16265 in k16262 in k16256 in k16192 in k16186 in load-identifier-database in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_16273,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16276,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1655: get-output-string */
t3=*((C_word*)lf[53]+1);{
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

/* k16268 in k16265 in k16262 in k16256 in k16192 in k16186 in load-identifier-database in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_16270,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1655: ##sys#write-char-0 */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* match1 in match-node in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_10990(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_10990,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_not_pair_p(t3))){
/* support.scm:848: resolve */
t4=((C_word*)((C_word*)t0)[2])[1];
f_10956(t4,t1,t3,t2);}
else{
if(C_truep(C_i_not_pair_p(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11012,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t2);
t6=C_i_car(t3);
/* support.scm:850: match1 */
t8=t4;
t9=t5;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}}

/* for-each-loop2246 in k10654 in k10646 in k10640 in k10637 in emit-global-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_10664(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_10664,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10674,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:820: g2262 */
t5=*((C_word*)lf[296]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[297];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k16262 in k16256 in k16192 in k16186 in load-identifier-database in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_16264,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16267,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1655: ##sys#print */
t3=*((C_word*)lf[19]+1);{
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

/* k16265 in k16262 in k16256 in k16192 in k16186 in load-identifier-database in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_16267,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16270,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1655: ##sys#print */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[554];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k16210 in for-each-loop3976 in k16226 in k16198 in k16192 in k16186 in load-identifier-database in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16212(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_16212,2,av);}
/* support.scm:1659: ##sys#put! */
t2=*((C_word*)lf[142]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[551];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k16214 in for-each-loop3976 in k16226 in k16198 in k16192 in k16186 in load-identifier-database in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_16216,2,av);}
a=C_alloc(3);
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_list1(&a,1,t3);
/* support.scm:1661: append */
t5=*((C_word*)lf[69]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k16198 in k16192 in k16186 in load-identifier-database in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_16200,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16228,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1662: read-file */
t3=*((C_word*)lf[552]+1);{
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

/* for-each-loop3976 in k16226 in k16198 in k16192 in k16186 in load-identifier-database in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_16233(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_16233,3,t0,t1,t2);}
a=C_alloc(13);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_16243,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=C_i_car(t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16212,a[2]=t5,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16216,a[2]=t6,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1661: ##sys#get */
t11=*((C_word*)lf[255]+1);{
C_word av2[4];
av2[0]=t11;
av2[1]=t10;
av2[2]=t8;
av2[3]=lf[551];
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k14107 in k14083 in foreign-type->scrutiny-type in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_14109(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_14109,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=lf[230];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[357]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[3],lf[425]));
if(C_truep(t3)){
t4=((C_word*)t0)[4];
t5=C_eqp(t4,lf[462]);
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=(C_truep(t5)?lf[426]:lf[357]);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t4=C_eqp(((C_word*)t0)[3],lf[360]);
t5=(C_truep(t4)?t4:C_eqp(((C_word*)t0)[3],lf[362]));
if(C_truep(t5)){
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=lf[240];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(((C_word*)t0)[3],lf[359]);
if(C_truep(t6)){
t7=((C_word*)t0)[4];
t8=C_eqp(t7,lf[462]);
t9=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t9;
av2[1]=(C_truep(t8)?lf[463]:lf[359]);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t7=C_eqp(((C_word*)t0)[3],lf[363]);
if(C_truep(t7)){
t8=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t8;
av2[1]=lf[359];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_eqp(((C_word*)t0)[3],lf[364]);
if(C_truep(t8)){
t9=((C_word*)t0)[4];
t10=C_eqp(t9,lf[462]);
t11=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t11;
av2[1]=(C_truep(t10)?lf[464]:lf[364]);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t9=C_eqp(((C_word*)t0)[3],lf[366]);
if(C_truep(t9)){
t10=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t10;
av2[1]=lf[364];
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t10=C_eqp(((C_word*)t0)[3],lf[367]);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_14184,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t10)){
t12=t11;
f_14184(t12,t10);}
else{
t12=C_eqp(((C_word*)t0)[3],lf[418]);
if(C_truep(t12)){
t13=t11;
f_14184(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[3],lf[419]);
if(C_truep(t13)){
t14=t11;
f_14184(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[3],lf[420]);
if(C_truep(t14)){
t15=t11;
f_14184(t15,t14);}
else{
t15=C_eqp(((C_word*)t0)[3],lf[421]);
if(C_truep(t15)){
t16=t11;
f_14184(t16,t15);}
else{
t16=C_eqp(((C_word*)t0)[3],lf[422]);
if(C_truep(t16)){
t17=t11;
f_14184(t17,t16);}
else{
t17=C_eqp(((C_word*)t0)[3],lf[423]);
t18=t11;
f_14184(t18,(C_truep(t17)?t17:C_eqp(((C_word*)t0)[3],lf[424])));}}}}}}}}}}}}}}

/* a13358 in estimate-foreign-result-size in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_13359(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_13359,2,av);}
/* support.scm:1204: quit */
t2=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[443];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k16226 in k16198 in k16192 in k16186 in load-identifier-database in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_16228,2,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16233,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_16233(t5,((C_word*)t0)[2],t1);}

/* ##compiler#estimate-foreign-result-location-size in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_13365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_13365,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13377,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13807,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1209: follow-without-loop */
t5=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* loop in a10902 in load-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_10909(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_10909,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10913,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:826: read */
t3=*((C_word*)lf[117]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6336 in initialize-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6338(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6338,2,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a10902 in load-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_10903,2,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10909,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_10909(t5,t1);}

/* k5190 in k5187 in k5184 in k5181 in k5178 in k5129 in syntax-error-hook in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5192,2,av);}
/* support.scm:119: ##sys#write-char-0 */
t2=*((C_word*)lf[18]+1);{
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

/* k10911 in loop in a10902 in load-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10913(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10913,2,av);}
a=C_alloc(8);
if(C_truep(C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10936,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(t1);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10947,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cadr(t1);
/* support.scm:831: sexpr->node */
t7=*((C_word*)lf[294]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k5184 in k5181 in k5178 in k5129 in syntax-error-hook in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_5186,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5189,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:119: ##sys#print */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5181 in k5178 in k5129 in syntax-error-hook in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5183,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5186,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:119: ##sys#print */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[39];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5178 in k5129 in syntax-error-hook in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5180,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5183,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:119: ##sys#print */
t3=*((C_word*)lf[19]+1);{
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
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5187 in k5184 in k5181 in k5178 in k5129 in syntax-error-hook in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5189,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5192,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:119: ##sys#write-char-0 */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k13397 in k13385 in a13376 in estimate-foreign-result-location-size in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_13399(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_13399,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
/* support.scm:1220: words->bytes */
t2=*((C_word*)lf[79]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(2);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13405,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[4]))){
/* support.scm:1222: ##sys#hash-table-ref */
t3=*((C_word*)lf[149]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=*((C_word*)lf[398]+1);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_13405(2,av2);}}}}

/* walkeach in scan-free-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_14989(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_14989,4,t0,t1,t2,t3);}
a=C_alloc(10);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14991,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_check_list_2(t2,lf[35]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15003,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_15003(t9,t1,t2);}

/* k13440 in k13403 in k13397 in k13385 in a13376 in estimate-foreign-result-location-size in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_13442(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_13442,2,t0,t1);}
if(C_truep(t1)){
/* support.scm:1229: words->bytes */
t2=*((C_word*)lf[79]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[393]);
if(C_truep(t2)){
t3=C_i_cadr(((C_word*)t0)[4]);
/* support.scm:1230: next */
t4=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[4];
/* support.scm:1208: quit */
t5=*((C_word*)lf[29]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[445];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}}

/* k10637 in emit-global-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_10639,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10642,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[4])[1]))){
/* support.scm:807: delete-file* */
t3=*((C_word*)lf[300]+1);{
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
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10702,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* support.scm:808: with-output-to-file */
t4=*((C_word*)lf[308]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* ##compiler#emit-global-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10635(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_10635,4,av);}
a=C_alloc(15);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10639,a[2]=t1,a[3]=t5,a[4]=t7,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10752,a[2]=t5,a[3]=t7,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:787: ##sys#hash-table-for-each */
t10=*((C_word*)lf[162]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t8;
av2[2]=t9;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}

/* k10934 in k10911 in loop in a10902 in load-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10936,2,av);}
/* support.scm:832: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_10909(t2,((C_word*)t0)[3]);}

/* k10646 in k10640 in k10637 in emit-global-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10648,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10656,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:820: sort-symbols */
t3=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8607 in k8600 in a8540 in k8405 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_8609,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8616,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t1;
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],t3);
f_8606(2,av2);}}
else{
/* support.scm:614: ##sys#symbol->qualified-string */
t3=*((C_word*)lf[254]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k8604 in k8600 in a8540 in k8405 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8606(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8606,2,av);}
a=C_alloc(23);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=((C_word*)((C_word*)t0)[3])[1];
t9=((C_word*)t0)[4];
t10=C_i_check_list_2(t9,lf[161]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8564,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8566,a[2]=t6,a[3]=t13,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_8566(t15,t11,t9);}

/* k10640 in k10637 in emit-global-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_10642,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10648,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[3])[1]))){
/* support.scm:819: debugging */
t3=*((C_word*)lf[14]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[298];
av2[3]=lf[299];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_10648(2,av2);}}}

/* k8600 in a8540 in k8405 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_8602(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_8602,2,t0,t1);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8606,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8609,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* support.scm:612: real-name */
t5=*((C_word*)lf[47]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* support.scm:615: ##sys#symbol->qualified-string */
t4=*((C_word*)lf[254]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k10945 in k10911 in loop in a10902 in load-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_10947,2,av);}
a=C_alloc(3);
t2=C_a_i_list(&a,1,t1);
if(C_truep(C_i_nullp(t2))){
/* tweaks.scm:54: ##sys#put! */
t3=*((C_word*)lf[142]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[313];
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=C_i_car(t2);
/* tweaks.scm:54: ##sys#put! */
t4=*((C_word*)lf[142]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[313];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* g3509 in walkeach in scan-free-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_14991(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_14991,3,t0,t1,t2);}
/* support.scm:1381: walk */
t3=((C_word*)((C_word*)t0)[2])[1];
f_14805(t3,t1,t2,((C_word*)t0)[3]);}

/* resolve in match-node in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_10956(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10956,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_assq(t2,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10964,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm:837: g2307 */
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=(
  /* support.scm:837: g2307 */
  f_10964(t5,t4)
);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
if(C_truep(C_i_memq(t2,((C_word*)t0)[3]))){
t5=C_a_i_cons(&a,2,C_a_i_cons(&a,2,t2,t3),((C_word*)((C_word*)t0)[2])[1]);
t6=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t5);
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_eqp(t2,t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}}

/* ##compiler#match-node in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10953(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10953,5,av);}
a=C_alloc(27);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10956,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t14=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10990,a[2]=t8,a[3]=t10,tmp=(C_word)a,a+=4,tmp));
t15=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11029,a[2]=t8,a[3]=t12,a[4]=t10,tmp=(C_word)a,a+=5,tmp));
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11144,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* support.scm:866: matchn */
t17=((C_word*)t12)[1];
f_11029(t17,t16,t2,t3);}

/* k10624 in map-loop2163 in walk in sexpr->node in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10626(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10626,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10601(t6,((C_word*)t0)[5],t5);}

/* k10672 in for-each-loop2246 in k10654 in k10646 in k10640 in k10637 in emit-global-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10674(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10674,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10664(t3,((C_word*)t0)[4],t2);}

/* ##compiler#initialize-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6334(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6334,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6338,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=*((C_word*)lf[138]+1);
t4=C_i_check_list_2(*((C_word*)lf[138]+1),lf[35]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6387,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6508,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_6508(t9,t5,*((C_word*)lf[138]+1));}
else{
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k12009 in k11994 in k11991 in k11868 in k11853 in repeat in a11823 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_12011(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,0,1)))){
C_save_and_reclaim_args((void *)trf_12011,2,t0,t1);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,lf[97],C_SCHEME_FALSE);
t3=C_a_i_list(&a,4,lf[225],((C_word*)t0)[2],t1,t2);
t4=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[109],((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7070 in loop in k6868 in a6859 in k6853 in display-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_7072(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_7072,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=*((C_word*)lf[16]+1);
t3=*((C_word*)lf[16]+1);
t4=C_i_check_port_2(*((C_word*)lf[16]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[17]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7078,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:471: ##sys#write-char-0 */
t6=*((C_word*)lf[18]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_make_character(9);
av2[3]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[169]);
if(C_truep(t2)){
t3=C_mutate2(((C_word *)((C_word*)t0)[5])+1,lf[169]);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
/* support.scm:488: loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_7048(t6,((C_word*)t0)[7],t5);}
else{
t3=C_eqp(((C_word*)t0)[4],lf[172]);
if(C_truep(t3)){
t4=C_eqp(((C_word*)((C_word*)t0)[5])[1],lf[169]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* support.scm:488: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_7048(t7,((C_word*)t0)[7],t6);}
else{
t5=C_i_cdar(((C_word*)t0)[2]);
t6=C_mutate2(((C_word *)((C_word*)t0)[5])+1,t5);
t7=((C_word*)t0)[2];
t8=C_u_i_cdr(t7);
/* support.scm:488: loop */
t9=((C_word*)((C_word*)t0)[6])[1];
f_7048(t9,((C_word*)t0)[7],t8);}}
else{
t4=C_eqp(((C_word*)t0)[4],lf[173]);
if(C_truep(t4)){
t5=C_eqp(((C_word*)((C_word*)t0)[5])[1],lf[169]);
if(C_truep(t5)){
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
/* support.scm:488: loop */
t8=((C_word*)((C_word*)t0)[6])[1];
f_7048(t8,((C_word*)t0)[7],t7);}
else{
t6=C_i_cdar(((C_word*)t0)[2]);
t7=C_mutate2(((C_word *)((C_word*)t0)[8])+1,t6);
t8=((C_word*)t0)[2];
t9=C_u_i_cdr(t8);
/* support.scm:488: loop */
t10=((C_word*)((C_word*)t0)[6])[1];
f_7048(t10,((C_word*)t0)[7],t9);}}
else{
t5=C_eqp(((C_word*)t0)[4],lf[174]);
if(C_truep(t5)){
t6=C_i_cdar(((C_word*)t0)[2]);
t7=C_mutate2(((C_word *)((C_word*)t0)[9])+1,t6);
t8=((C_word*)t0)[2];
t9=C_u_i_cdr(t8);
/* support.scm:488: loop */
t10=((C_word*)((C_word*)t0)[6])[1];
f_7048(t10,((C_word*)t0)[7],t9);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[175]);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7151,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t6)){
t8=t7;
f_7151(t8,t6);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[179]);
if(C_truep(t8)){
t9=t7;
f_7151(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[180]);
if(C_truep(t9)){
t10=t7;
f_7151(t10,t9);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[181]);
if(C_truep(t10)){
t11=t7;
f_7151(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[182]);
if(C_truep(t11)){
t12=t7;
f_7151(t12,t11);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[183]);
if(C_truep(t12)){
t13=t7;
f_7151(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[4],lf[184]);
if(C_truep(t13)){
t14=t7;
f_7151(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[185]);
t15=t7;
f_7151(t15,(C_truep(t14)?t14:C_eqp(((C_word*)t0)[4],lf[186])));}}}}}}}}}}}}}

/* k5161 in for-each-loop168 in k5132 in k5129 in syntax-error-hook in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5163,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5153(t3,((C_word*)t0)[4],t2);}

/* k7076 in k7070 in loop in k6868 in a6859 in k6853 in display-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7078,2,av);}
t2=C_i_caar(((C_word*)t0)[2]);
t3=C_i_assq(t2,lf[171]);
t4=C_i_cdr(t3);
/* support.scm:471: ##sys#print */
t5=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* a13376 in estimate-foreign-result-location-size in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_13377(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_13377,4,av);}
a=C_alloc(6);
t4=t2;
t5=C_eqp(t4,lf[351]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13387,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_13387(t7,t5);}
else{
t7=C_eqp(t4,lf[355]);
if(C_truep(t7)){
t8=t6;
f_13387(t8,t7);}
else{
t8=C_eqp(t4,lf[428]);
if(C_truep(t8)){
t9=t6;
f_13387(t9,t8);}
else{
t9=C_eqp(t4,lf[440]);
if(C_truep(t9)){
t10=t6;
f_13387(t10,t9);}
else{
t10=C_eqp(t4,lf[429]);
if(C_truep(t10)){
t11=t6;
f_13387(t11,t10);}
else{
t11=C_eqp(t4,lf[352]);
if(C_truep(t11)){
t12=t6;
f_13387(t12,t11);}
else{
t12=C_eqp(t4,lf[427]);
if(C_truep(t12)){
t13=t6;
f_13387(t13,t12);}
else{
t13=C_eqp(t4,lf[408]);
if(C_truep(t13)){
t14=t6;
f_13387(t14,t13);}
else{
t14=C_eqp(t4,lf[407]);
if(C_truep(t14)){
t15=t6;
f_13387(t15,t14);}
else{
t15=C_eqp(t4,lf[430]);
if(C_truep(t15)){
t16=t6;
f_13387(t16,t15);}
else{
t16=C_eqp(t4,lf[431]);
if(C_truep(t16)){
t17=t6;
f_13387(t17,t16);}
else{
t17=C_eqp(t4,lf[378]);
if(C_truep(t17)){
t18=t6;
f_13387(t18,t17);}
else{
t18=C_eqp(t4,lf[380]);
if(C_truep(t18)){
t19=t6;
f_13387(t19,t18);}
else{
t19=C_eqp(t4,lf[374]);
if(C_truep(t19)){
t20=t6;
f_13387(t20,t19);}
else{
t20=C_eqp(t4,lf[370]);
if(C_truep(t20)){
t21=t6;
f_13387(t21,t20);}
else{
t21=C_eqp(t4,lf[357]);
if(C_truep(t21)){
t22=t6;
f_13387(t22,t21);}
else{
t22=C_eqp(t4,lf[381]);
if(C_truep(t22)){
t23=t6;
f_13387(t23,t22);}
else{
t23=C_eqp(t4,lf[385]);
if(C_truep(t23)){
t24=t6;
f_13387(t24,t23);}
else{
t24=C_eqp(t4,lf[360]);
if(C_truep(t24)){
t25=t6;
f_13387(t25,t24);}
else{
t25=C_eqp(t4,lf[362]);
if(C_truep(t25)){
t26=t6;
f_13387(t26,t25);}
else{
t26=C_eqp(t4,lf[432]);
if(C_truep(t26)){
t27=t6;
f_13387(t27,t26);}
else{
t27=C_eqp(t4,lf[433]);
if(C_truep(t27)){
t28=t6;
f_13387(t28,t27);}
else{
t28=C_eqp(t4,lf[410]);
if(C_truep(t28)){
t29=t6;
f_13387(t29,t28);}
else{
t29=C_eqp(t4,lf[406]);
if(C_truep(t29)){
t30=t6;
f_13387(t30,t29);}
else{
t30=C_eqp(t4,lf[402]);
if(C_truep(t30)){
t31=t6;
f_13387(t31,t30);}
else{
t31=C_eqp(t4,lf[403]);
if(C_truep(t31)){
t32=t6;
f_13387(t32,t31);}
else{
t32=C_eqp(t4,lf[400]);
if(C_truep(t32)){
t33=t6;
f_13387(t33,t32);}
else{
t33=C_eqp(t4,lf[409]);
if(C_truep(t33)){
t34=t6;
f_13387(t34,t33);}
else{
t34=C_eqp(t4,lf[384]);
if(C_truep(t34)){
t35=t6;
f_13387(t35,t34);}
else{
t35=C_eqp(t4,lf[401]);
if(C_truep(t35)){
t36=t6;
f_13387(t36,t35);}
else{
t36=C_eqp(t4,lf[399]);
if(C_truep(t36)){
t37=t6;
f_13387(t37,t36);}
else{
t37=C_eqp(t4,lf[404]);
t38=t6;
f_13387(t38,(C_truep(t37)?t37:C_eqp(t4,lf[405])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k8186 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8188(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_8188,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[211],((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7059 in loop in k6868 in a6859 in k6853 in display-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7061(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7061,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* support.scm:488: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7048(t4,((C_word*)t0)[4],t3);}

/* k13385 in a13376 in estimate-foreign-result-location-size in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_13387(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_13387,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
/* support.scm:1218: words->bytes */
t2=*((C_word*)lf[79]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[425]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13399,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_13399(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[426]);
if(C_truep(t4)){
t5=t3;
f_13399(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[372]);
t6=t3;
f_13399(t6,(C_truep(t5)?t5:C_eqp(((C_word*)t0)[3],lf[376])));}}}}

/* k14901 in k14837 in walk in scan-free-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_14903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_14903,2,av);}
a=C_alloc(5);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14914,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1372: append */
t5=*((C_word*)lf[69]+1);{
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

/* loop in k6868 in a6859 in k6853 in display-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_7048(C_word t0,C_word t1,C_word t2){
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
C_word t25;
C_word t26;
C_word t27;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,0,2)))){
C_save_and_reclaim_args((void *)trf_7048,3,t0,t1,t2);}
a=C_alloc(17);
if(C_truep(C_i_pairp(t2))){
t3=C_i_caar(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7061,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_eqp(t4,lf[170]);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7072,a[2]=t2,a[3]=t5,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],a[7]=t1,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t6)){
t8=t7;
f_7072(t8,t6);}
else{
t8=C_eqp(t4,lf[187]);
if(C_truep(t8)){
t9=t7;
f_7072(t9,t8);}
else{
t9=C_eqp(t4,lf[188]);
if(C_truep(t9)){
t10=t7;
f_7072(t10,t9);}
else{
t10=C_eqp(t4,lf[189]);
if(C_truep(t10)){
t11=t7;
f_7072(t11,t10);}
else{
t11=C_eqp(t4,lf[190]);
if(C_truep(t11)){
t12=t7;
f_7072(t12,t11);}
else{
t12=C_eqp(t4,lf[191]);
if(C_truep(t12)){
t13=t7;
f_7072(t13,t12);}
else{
t13=C_eqp(t4,lf[192]);
if(C_truep(t13)){
t14=t7;
f_7072(t14,t13);}
else{
t14=C_eqp(t4,lf[193]);
if(C_truep(t14)){
t15=t7;
f_7072(t15,t14);}
else{
t15=C_eqp(t4,lf[194]);
if(C_truep(t15)){
t16=t7;
f_7072(t16,t15);}
else{
t16=C_eqp(t4,lf[195]);
if(C_truep(t16)){
t17=t7;
f_7072(t17,t16);}
else{
t17=C_eqp(t4,lf[196]);
if(C_truep(t17)){
t18=t7;
f_7072(t18,t17);}
else{
t18=C_eqp(t4,lf[197]);
if(C_truep(t18)){
t19=t7;
f_7072(t19,t18);}
else{
t19=C_eqp(t4,lf[198]);
if(C_truep(t19)){
t20=t7;
f_7072(t20,t19);}
else{
t20=C_eqp(t4,lf[199]);
if(C_truep(t20)){
t21=t7;
f_7072(t21,t20);}
else{
t21=C_eqp(t4,lf[200]);
if(C_truep(t21)){
t22=t7;
f_7072(t22,t21);}
else{
t22=C_eqp(t4,lf[201]);
if(C_truep(t22)){
t23=t7;
f_7072(t23,t22);}
else{
t23=C_eqp(t4,lf[202]);
if(C_truep(t23)){
t24=t7;
f_7072(t24,t23);}
else{
t24=C_eqp(t4,lf[203]);
if(C_truep(t24)){
t25=t7;
f_7072(t25,t24);}
else{
t25=C_eqp(t4,lf[204]);
if(C_truep(t25)){
t26=t7;
f_7072(t26,t25);}
else{
t26=C_eqp(t4,lf[205]);
t27=t7;
f_7072(t27,(C_truep(t26)?t26:C_eqp(t4,lf[206])));}}}}}}}}}}}}}}}}}}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a14932 in k14837 in walk in scan-free-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_14933(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_14933,5,av);}
a=C_alloc(5);
t5=C_i_car(((C_word*)t0)[2]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14945,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1377: append */
t8=*((C_word*)lf[69]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k10818 in k10815 in k10860 in k10781 in k10893 in k10757 in a10751 in emit-global-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_10820(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_10820,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10836,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_u_i_cdr(((C_word*)t0)[6]);
/* support.scm:804: node->sexpr */
t6=*((C_word*)lf[293]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* for-each-loop168 in k5132 in k5129 in syntax-error-hook in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_5153(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5153,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5163,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:121: g169 */
t5=((C_word*)t0)[3];
f_5135(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k14912 in k14901 in k14837 in walk in scan-free-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_14914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_14914,2,av);}
/* support.scm:1372: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_14805(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k10834 in k10818 in k10815 in k10860 in k10781 in k10893 in k10757 in a10751 in emit-global-inline-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10836,2,av);}
a=C_alloc(9);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k5143 in k5132 in k5129 in syntax-error-hook in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5145,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5148,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:122: print-call-chain */
t3=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(0);
av2[4]=*((C_word*)lf[37]+1);
av2[5]=lf[38];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k5146 in k5143 in k5132 in k5129 in syntax-error-hook in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5148,2,av);}
/* support.scm:123: exit */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(70);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a9727 in a9715 in inline-lambda-bindings in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9728(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_9728,4,av);}
a=C_alloc(25);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9732,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[4])){
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=*((C_word*)lf[110]+1);
t10=((C_word*)t0)[6];
t11=C_i_check_list_2(t10,lf[161]);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9829,a[2]=t7,a[3]=t13,a[4]=t9,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_9829(t15,t4,t10);}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=((C_word*)t0)[6];
f_9732(2,av2);}}}

/* a9721 in a9715 in inline-lambda-bindings in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9722,2,av);}
/* support.scm:689: split-at */
t2=*((C_word*)lf[282]+1);{
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

/* k11200 in walk in expression-has-side-effects? in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_11202(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_11202,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[133]);
if(C_truep(t2)){
t3=((C_word*)t0)[4];
t4=C_slot(t3,C_fix(2));
t5=C_i_car(t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11216,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* support.scm:882: find */
t8=*((C_word*)lf[322]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=((C_word*)t0)[2];
av2[2]=t7;
av2[3]=*((C_word*)lf[323]+1);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t3=C_eqp(((C_word*)t0)[3],lf[225]);
if(C_truep(t3)){
if(C_truep(t3)){
/* support.scm:885: any */
t4=*((C_word*)lf[77]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[5])[1];
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t4=C_eqp(((C_word*)t0)[3],lf[109]);
if(C_truep(t4)){
/* support.scm:885: any */
t5=*((C_word*)lf[77]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[5])[1];
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}}}}

/* k9733 in k9730 in a9727 in a9715 in inline-lambda-bindings in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,5)))){
C_save_and_reclaim((void *)f_9735,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9740,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9761,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9815,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* support.scm:698: last */
t6=*((C_word*)lf[265]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=t4;
f_9761(t5,t2);}}

/* k9730 in a9727 in a9715 in inline-lambda-bindings in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,6)))){
C_save_and_reclaim((void *)f_9732,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9735,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
/* support.scm:692: copy-node-tree-and-rename */
t4=*((C_word*)lf[286]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[9];
av2[4]=t2;
av2[5]=((C_word*)t0)[10];
av2[6]=((C_word*)t0)[11];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=((C_word*)t0)[8];
f_9735(2,av2);}}}

/* k10123 in map-loop2000 in k10142 in k10134 in k10069 in k10066 in a10049 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10125(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10125,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10100(t6,((C_word*)t0)[5],t5);}

/* a9739 in k9733 in k9730 in a9727 in a9715 in inline-lambda-bindings in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9740(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9740,5,av);}
a=C_alloc(14);
t5=C_a_i_list1(&a,1,t2);
t6=C_a_i_list2(&a,2,t3,t4);
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_record4(&a,4,lf[211],lf[109],t5,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k10134 in k10069 in k10066 in a10049 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10136(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10136,2,av);}
a=C_alloc(14);
t2=t1;
t3=C_i_cadr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10144,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10152,a[2]=t5,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[9])){
t7=((C_word*)t0)[9];
/* support.scm:712: alist-ref */
t8=*((C_word*)lf[287]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
av2[3]=((C_word*)t0)[4];
av2[4]=*((C_word*)lf[13]+1);
av2[5]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(6,av2);}}
else{
/* support.scm:751: build-lambda-list */
t7=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[8];
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}}

/* k10142 in k10134 in k10069 in k10066 in a10049 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10144(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10144,2,av);}
a=C_alloc(33);
t2=C_i_cadddr(((C_word*)t0)[2]);
t3=C_a_i_list4(&a,4,((C_word*)t0)[3],((C_word*)t0)[4],t1,t2);
t4=t3;
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10088,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(((C_word*)t0)[7],lf[161]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10098,a[2]=((C_word*)t0)[8],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10100,a[2]=t7,a[3]=t13,a[4]=t9,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_10100(t15,t11,((C_word*)t0)[7]);}

/* k12086 in k12059 in k12033 in k11991 in k11868 in k11853 in repeat in a11823 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_12088(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_12088,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
if(C_truep(*((C_word*)lf[353]+1))){
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
av2[1]=C_a_i_list(&a,2,lf[375],((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[376]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=(C_truep(*((C_word*)lf[353]+1))?((C_word*)t0)[2]:C_a_i_list(&a,2,lf[377],((C_word*)t0)[2]));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_eqp(((C_word*)t0)[4],lf[378]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12115,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;
f_12115(t5,t3);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[404]);
t6=t4;
f_12115(t6,(C_truep(t5)?t5:C_eqp(((C_word*)t0)[4],lf[405])));}}}}

/* ##compiler#scan-used-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_14647(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_14647,4,av);}
a=C_alloc(13);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14651,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14653,a[2]=t8,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t6;
av2[2]=t2;
f_14653(3,av2);}}

/* ##compiler#get-all in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_6549,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6553,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* support.scm:381: ##sys#hash-table-ref */
t6=*((C_word*)lf[149]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k10150 in k10134 in k10069 in k10066 in a10049 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10152,2,av);}
/* support.scm:751: build-lambda-list */
t2=*((C_word*)lf[63]+1);{
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

/* k6533 in get in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6535,2,av);}
if(C_truep(t1)){
t2=C_i_assq(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(C_truep(t2)?C_slot(t2,C_fix(1)):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k8990 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8992(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8992,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8995,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9062,a[2]=((C_word*)t0)[8],a[3]=t4,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_9062(t6,t2,t1);}

/* ##compiler#get in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6531(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6531,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6535,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:375: ##sys#hash-table-ref */
t6=*((C_word*)lf[149]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k10163 in k10066 in a10049 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10165,2,av);}
/* support.scm:747: append */
t2=*((C_word*)lf[69]+1);{
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

/* map-loop1963 in k10066 in a10049 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_10167(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10167,4,t0,t1,t2,t3);}
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

/* k5123 in quit in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5125,2,av);}{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[24]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
av2[5]=((C_word*)t0)[4];
C_apply(6,av2);}}

/* ##sys#syntax-error-hook in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,2)))){
C_save_and_reclaim((void*)f_5127,c,av);}
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
t6=*((C_word*)lf[30]+1);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5131,a[2]=t6,a[3]=t5,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_symbolp(((C_word*)t4)[1]))){
t8=((C_word*)t4)[1];
t9=C_i_car(((C_word*)t5)[1]);
t10=C_set_block_item(t4,0,t9);
t11=C_i_cdr(((C_word*)t5)[1]);
t12=C_set_block_item(t5,0,t11);
t13=t7;
f_5131(t13,t8);}
else{
t8=t7;
f_5131(t8,C_SCHEME_FALSE);}}

/* a6560 in k6551 in get-all in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6561,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_assq(t2,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##compiler#put! in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6567(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6567,6,av);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6571,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* support.scm:387: ##sys#hash-table-ref */
t7=*((C_word*)lf[149]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k8993 in k8990 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8995(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8995,2,av);}
a=C_alloc(12);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[161]);
t3=C_i_check_list_2(t1,lf[161]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9004,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9014,a[2]=((C_word*)t0)[6],a[3]=t6,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_9014(t8,t4,((C_word*)t0)[2],t1);}

/* k6551 in get-all in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6553,2,av);}
a=C_alloc(3);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6561,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:383: filter-map */
t4=*((C_word*)lf[151]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop1226 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_8190(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8190,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8215,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:583: g1232 */
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

/* k14943 in a14932 in k14837 in walk in scan-free-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_14945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_14945,2,av);}
/* support.scm:1377: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_14805(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k6569 in put! in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6571,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_setslot(t2,C_fix(1),((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(((C_word*)t0)[4])){
t3=C_slot(t1,C_fix(1));
t4=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[4]),t3);
t5=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_i_setslot(t1,C_fix(1),t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}
else{
if(C_truep(((C_word*)t0)[4])){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[4]);
t3=C_a_i_list1(&a,1,t2);
/* support.scm:392: ##sys#hash-table-set! */
t4=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* k12033 in k11991 in k11868 in k11853 in repeat in a11823 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_12035(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_12035,2,t0,t1);}
a=C_alloc(15);
if(C_truep(t1)){
if(C_truep(*((C_word*)lf[353]+1))){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[4];
t3=C_u_i_assq(t2,lf[369]);
t4=C_slot(t3,C_fix(1));
t5=C_a_i_list(&a,2,lf[97],t4);
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[365],t5,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
t2=C_eqp(((C_word*)t0)[5],lf[370]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12061,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_12061(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[408]);
if(C_truep(t4)){
t5=t3;
f_12061(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[409]);
t6=t3;
f_12061(t6,(C_truep(t5)?t5:C_eqp(((C_word*)t0)[5],lf[410])));}}}}

/* k14649 in scan-used-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_14651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_14651,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* walk in scan-used-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_14653(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_14653,3,av);}
a=C_alloc(10);
t3=t2;
t4=C_slot(t3,C_fix(3));
t5=t4;
t6=t2;
t7=C_slot(t6,C_fix(1));
t8=C_eqp(t7,lf[221]);
t9=(C_truep(t8)?t8:C_eqp(t7,lf[246]));
if(C_truep(t9)){
t10=t2;
t11=C_slot(t10,C_fix(2));
t12=C_i_car(t11);
t13=t12;
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14685,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14717,a[2]=t13,a[3]=((C_word*)t0)[3],a[4]=t14,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_memq(t13,((C_word*)t0)[4]))){
t16=C_i_memq(t13,((C_word*)((C_word*)t0)[3])[1]);
t17=t15;
f_14717(t17,C_i_not(t16));}
else{
t16=t15;
f_14717(t16,C_SCHEME_FALSE);}}
else{
t10=C_eqp(t7,lf[97]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14749,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t10)){
t12=t11;
f_14749(t12,t10);}
else{
t12=C_eqp(t7,lf[226]);
t13=t11;
f_14749(t13,(C_truep(t12)?t12:C_eqp(t7,lf[241])));}}}

/* loop in k8060 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_7939(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim_args((void *)trf_7939,5,t0,t1,t2,t3,t4);}
a=C_alloc(14);
if(C_truep(C_i_nullp(t2))){
t5=C_i_cadr(((C_word*)t0)[2]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7983,a[2]=t6,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* support.scm:565: reverse */
t8=*((C_word*)lf[91]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t5=C_i_caar(t2);
t6=C_eqp(lf[238],t5);
if(C_truep(t6)){
t7=C_i_cadr(((C_word*)t0)[2]);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8025,a[2]=t8,a[3]=t1,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t10=C_a_i_cons(&a,2,lf[240],t3);
/* support.scm:571: reverse */
t11=*((C_word*)lf[91]+1);{
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
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8046,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t8,a[6]=t11,tmp=(C_word)a,a+=7,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8050,a[2]=((C_word*)t0)[3],a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* support.scm:575: cadar */
t14=*((C_word*)lf[239]+1);{
C_word av2[3];
av2[0]=t14;
av2[1]=t13;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t14+1)))(3,av2);}}}}

/* k9386 in loop in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9388(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9388,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9392,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(((C_word*)t0)[3]);
/* support.scm:668: walk */
t5=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
f_8788(3,av2);}}

/* k9390 in k9386 in loop in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9392(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9392,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[271],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5702 in check-and-open-input-file in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5704,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
/* support.scm:222: open-input-file */
t2=*((C_word*)lf[83]+1);{
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
else{
t2=C_i_nullp(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5716,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_5716(t4,t2);}
else{
t4=C_i_car(((C_word*)t0)[4]);
t5=t3;
f_5716(t5,C_i_not(t4));}}}

/* for-each-loop3418 in k14683 in walk in scan-used-variables in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_14693(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_14693,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14703,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:1343: g3419 */
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

/* k8917 in map-loop1513 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8919(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8919,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8894(t6,((C_word*)t0)[5],t5);}

/* map-loop2000 in k10142 in k10134 in k10069 in k10066 in a10049 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_10100(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10100,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10125,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:753: g2006 */
t5=((C_word*)t0)[4];
f_10088(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9341 in map-loop1651 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9343(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9343,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9318(t6,((C_word*)t0)[5],t5);}

/* for-each-loop534 in initialize-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_6508(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_6508,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6518,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6358,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t8=C_a_i_list(&a,1,lf[147]);
if(C_truep(C_i_nullp(t8))){
/* tweaks.scm:54: ##sys#put! */
t9=*((C_word*)lf[142]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t7;
av2[2]=t6;
av2[3]=lf[143];
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t9=C_i_car(t8);
/* tweaks.scm:54: ##sys#put! */
t10=*((C_word*)lf[142]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t7;
av2[2]=t6;
av2[3]=lf[143];
av2[4]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5714 in k5702 in check-and-open-input-file in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_5716(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5716,2,t0,t1);}
if(C_truep(t1)){
/* support.scm:223: quit */
t2=*((C_word*)lf[29]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[84];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=C_i_car(((C_word*)t0)[4]);
/* support.scm:224: quit */
t3=*((C_word*)lf[29]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[85];
av2[3]=t2;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k12059 in k12033 in k11991 in k11868 in k11853 in repeat in a11823 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_12061(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_12061,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
if(C_truep(*((C_word*)lf[353]+1))){
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
av2[1]=C_a_i_list(&a,2,lf[371],((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[372]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=(C_truep(*((C_word*)lf[353]+1))?((C_word*)t0)[2]:C_a_i_list(&a,2,lf[373],((C_word*)t0)[2]));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_eqp(((C_word*)t0)[4],lf[374]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12088,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;
f_12088(t5,t3);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[406]);
t6=t4;
f_12088(t6,(C_truep(t5)?t5:C_eqp(((C_word*)t0)[4],lf[407])));}}}}

/* k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_9876,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9884,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp));
/* support.scm:755: walk */
t5=((C_word*)t3)[1];
f_9884(t5,((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* ##compiler#fold-inner in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5747(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5747,4,av);}
a=C_alloc(4);
t4=C_i_cdr(t3);
if(C_truep(C_i_nullp(t4))){
t5=t3;
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5761,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:232: reverse */
t6=*((C_word*)lf[91]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_9884(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_9884,4,t0,t1,t2,t3);}
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
t13=C_eqp(t12,lf[97]);
if(C_truep(t13)){
t14=t1;
t15=t14;{
C_word av2[2];
av2[0]=t15;
av2[1]=C_a_i_record4(&a,4,lf[211],t12,t9,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}
else{
t14=C_eqp(t12,lf[221]);
if(C_truep(t14)){
t15=C_i_car(t9);
t16=t15;
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9935,a[2]=t1,a[3]=t3,a[4]=t16,tmp=(C_word)a,a+=5,tmp);
t18=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9945,a[2]=((C_word*)t0)[2],a[3]=t17,a[4]=t16,tmp=(C_word)a,a+=5,tmp);
/* support.scm:722: get */
t19=*((C_word*)lf[148]+1);{
C_word av2[5];
av2[0]=t19;
av2[1]=t18;
av2[2]=((C_word*)t0)[3];
av2[3]=t16;
av2[4]=lf[190];
((C_proc)(void*)(*((C_word*)t19+1)))(5,av2);}}
else{
t15=C_eqp(t12,lf[246]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9982,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t17=C_i_car(t9);
t18=t3;
/* support.scm:712: alist-ref */
t19=*((C_word*)lf[287]+1);{
C_word av2[6];
av2[0]=t19;
av2[1]=t16;
av2[2]=t17;
av2[3]=t18;
av2[4]=*((C_word*)lf[13]+1);
av2[5]=t17;
((C_proc)(void*)(*((C_word*)t19+1)))(6,av2);}}
else{
t16=C_eqp(t12,lf[109]);
if(C_truep(t16)){
t17=C_i_car(t9);
t18=t17;
t19=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9998,a[2]=t18,a[3]=t3,a[4]=t1,a[5]=t6,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t20=C_i_car(t6);
/* support.scm:731: walk */
t22=t19;
t23=t20;
t24=t3;
t1=t22;
t2=t23;
t3=t24;
goto loop;}
else{
t17=C_eqp(t12,lf[133]);
if(C_truep(t17)){
t18=C_i_caddr(t9);
t19=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10050,a[2]=((C_word*)t0)[3],a[3]=t9,a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* support.scm:739: decompose-lambda-list */
t20=*((C_word*)lf[124]+1);{
C_word av2[4];
av2[0]=t20;
av2[1]=t1;
av2[2]=t18;
av2[3]=t19;
((C_proc)(void*)(*((C_word*)t20+1)))(4,av2);}}
else{
t18=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10259,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t6,a[5]=t1,a[6]=t12,tmp=(C_word)a,a+=7,tmp);
/* support.scm:754: tree-copy */
t19=*((C_word*)lf[290]+1);{
C_word av2[3];
av2[0]=t19;
av2[1]=t18;
av2[2]=t9;
((C_proc)(void*)(*((C_word*)t19+1)))(3,av2);}}}}}}}

/* k6516 in for-each-loop534 in initialize-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
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

/* loop in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_9374(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
C_save_and_reclaim_args((void *)trf_9374,5,t0,t1,t2,t3,t4);}
a=C_alloc(11);
if(C_truep(C_i_zerop(t2))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9388,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* support.scm:668: reverse */
t6=*((C_word*)lf[91]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_a_i_minus(&a,2,t2,C_fix(1));
t6=t5;
t7=C_i_cdr(t3);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9415,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t6,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
t10=t3;
t11=C_u_i_car(t10);
/* support.scm:669: walk */
t12=((C_word*)((C_word*)t0)[2])[1];{
C_word av2[3];
av2[0]=t12;
av2[1]=t9;
av2[2]=t11;
f_8788(3,av2);}}}

/* ##compiler#close-checked-input-file in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5735,4,av);}
if(C_truep(C_i_string_equal_p(t3,lf[88]))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* support.scm:227: close-input-port */
t4=*((C_word*)lf[89]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* ##compiler#build-lambda-list in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5488(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5488,5,av);}
a=C_alloc(6);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5494,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_5494(t8,t1,t2,t3);}

/* k11010 in match1 in match-node in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11012(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11012,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* support.scm:850: match1 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_10990(t6,((C_word*)t0)[5],t3,t5);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* fold in k5759 in fold-inner in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_5763(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_5763,3,t0,t1,t2);}
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
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5789,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=C_u_i_cdr(t5);
/* support.scm:237: fold */
t11=t4;
t12=t6;
t1=t11;
t2=t12;
goto loop;}}

/* k5759 in fold-inner in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5761,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5763,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5763(t5,((C_word*)t0)[3],t1);}

/* k12965 in k12953 in k12941 in k12932 in a12923 in estimate-foreign-result-size in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_12967(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_12967,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
/* support.scm:1192: words->bytes */
t2=*((C_word*)lf[79]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(4);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12973,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[4]))){
/* support.scm:1194: ##sys#hash-table-ref */
t3=*((C_word*)lf[149]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=*((C_word*)lf[398]+1);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_12973(2,av2);}}}}

/* ##compiler#copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9863(C_word c,C_word *av){
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
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_9863,7,av);}
a=C_alloc(18);
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=C_i_check_list_2(t3,lf[161]);
t12=C_i_check_list_2(t4,lf[161]);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9876,a[2]=t6,a[3]=t5,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10323,a[2]=t9,a[3]=t15,a[4]=t10,tmp=(C_word)a,a+=5,tmp));
t17=((C_word*)t15)[1];
f_10323(t17,t13,t3,t4);}

/* loop in k11049 in matchn in match-node in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_11069(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_11069,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_i_nullp(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_not_pair_p(t3))){
/* support.scm:861: resolve */
t4=((C_word*)((C_word*)t0)[2])[1];
f_10956(t4,t1,t3,t2);}
else{
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11100,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t2);
t6=C_i_car(t3);
/* support.scm:863: matchn */
t7=((C_word*)((C_word*)t0)[4])[1];
f_11029(t7,t4,t5,t6);}}}}

/* k15236 in loop in k15220 in k15289 in k15193 in real-name in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_15238,2,av);}
/* support.scm:1451: string-intersperse */
t2=*((C_word*)lf[499]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[500];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a13806 in estimate-foreign-result-location-size in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_13807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_13807,2,av);}
/* support.scm:1233: quit */
t2=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[446];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k12971 in k12965 in k12953 in k12941 in k12932 in a12923 in estimate-foreign-result-size in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_12973(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12973,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12977,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1194: g2991 */
t3=t2;
f_12977(t3,((C_word*)t0)[3],t1);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[4];
t3=C_u_i_car(t2);
t4=C_eqp(t3,lf[387]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13010,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_13010(t6,t4);}
else{
t6=C_eqp(t3,lf[395]);
if(C_truep(t6)){
t7=t5;
f_13010(t7,t6);}
else{
t7=C_eqp(t3,lf[396]);
if(C_truep(t7)){
t8=t5;
f_13010(t8,t7);}
else{
t8=C_eqp(t3,lf[378]);
if(C_truep(t8)){
t9=t5;
f_13010(t9,t8);}
else{
t9=C_eqp(t3,lf[380]);
if(C_truep(t9)){
t10=t5;
f_13010(t10,t9);}
else{
t10=C_eqp(t3,lf[397]);
if(C_truep(t10)){
t11=t5;
f_13010(t11,t10);}
else{
t11=C_eqp(t3,lf[388]);
if(C_truep(t11)){
t12=t5;
f_13010(t12,t11);}
else{
t12=C_eqp(t3,lf[389]);
t13=t5;
f_13010(t13,(C_truep(t12)?t12:C_eqp(t3,lf[392])));}}}}}}}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* k16309 in print-usage in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_16311,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16314,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1673: newline */
t3=*((C_word*)lf[15]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k16312 in k16309 in print-usage in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_16314,2,av);}
/* support.scm:1674: display */
t2=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[562];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* g2991 in k12971 in k12965 in k12953 in k12941 in k12932 in a12923 in estimate-foreign-result-size in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_12977(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_12977,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* support.scm:1196: next */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t2;
/* support.scm:1196: next */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k13008 in k12971 in k12965 in k12953 in k12941 in k12932 in a12923 in estimate-foreign-result-size in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_13010(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_13010,2,t0,t1);}
if(C_truep(t1)){
/* support.scm:1200: words->bytes */
t2=*((C_word*)lf[79]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(3);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[393]);
if(C_truep(t2)){
t3=C_i_cadr(((C_word*)t0)[4]);
/* support.scm:1201: next */
t4=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* k15220 in k15289 in k15193 in real-name in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_15222,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15224,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_15224(t5,((C_word*)t0)[4],((C_word*)t0)[5],C_fix(0),t1);}

/* loop in k15220 in k15289 in k15193 in real-name in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_15224(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_15224,5,t0,t1,t2,t3,t4);}
a=C_alloc(8);
if(C_truep(C_i_greaterp(t3,*((C_word*)lf[498]+1)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15238,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_cons(&a,2,lf[501],t2);
/* support.scm:1451: reverse */
t7=*((C_word*)lf[91]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_15248,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* support.scm:1453: resolve */
f_15179(t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15287,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1459: reverse */
t6=*((C_word*)lf[91]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}}

/* k5787 in fold in k5759 in fold-inner in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5789,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=C_a_i_list2(&a,2,t1,t3);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t4;
C_apply(4,av2);}}

/* ##compiler#finish-foreign-result in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_13813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_13813,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13817,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1239: ##sys#strip-syntax */
t5=*((C_word*)lf[460]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k13815 in finish-foreign-result in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_13817(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_13817,2,av);}
a=C_alloc(21);
t2=t1;
t3=C_eqp(t2,lf[381]);
t4=(C_truep(t3)?t3:C_eqp(t2,lf[402]));
if(C_truep(t4)){
t5=C_a_i_list(&a,2,lf[97],C_fix(0));
t6=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[448],((C_word*)t0)[3],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=C_eqp(t2,lf[384]);
if(C_truep(t5)){
t6=C_a_i_list(&a,2,lf[97],C_fix(0));
t7=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_list(&a,3,lf[449],((C_word*)t0)[3],t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=C_eqp(t2,lf[401]);
t7=(C_truep(t6)?t6:C_eqp(t2,lf[403]));
if(C_truep(t7)){
t8=C_a_i_list(&a,2,lf[97],C_fix(0));
t9=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_a_i_list(&a,3,lf[450],((C_word*)t0)[3],t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t8=C_eqp(t2,lf[399]);
t9=(C_truep(t8)?t8:C_eqp(t2,lf[400]));
if(C_truep(t9)){
t10=C_a_i_list(&a,2,lf[97],C_fix(0));
t11=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_a_i_list(&a,3,lf[451],((C_word*)t0)[3],t10);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t10=C_eqp(t2,lf[385]);
if(C_truep(t10)){
t11=C_a_i_list(&a,2,lf[97],C_fix(0));
t12=C_a_i_list(&a,3,lf[448],((C_word*)t0)[3],t11);
t13=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=C_a_i_list(&a,2,lf[452],t12);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t11=C_eqp(t2,lf[404]);
if(C_truep(t11)){
t12=C_a_i_list(&a,2,lf[97],C_SCHEME_FALSE);
t13=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=C_a_i_list(&a,3,lf[453],((C_word*)t0)[3],t12);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t12=C_eqp(t2,lf[405]);
if(C_truep(t12)){
t13=C_a_i_list(&a,2,lf[97],C_SCHEME_FALSE);
t14=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=C_a_i_list(&a,3,lf[454],((C_word*)t0)[3],t13);
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
if(C_truep(C_i_listp(t2))){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13933,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t14=C_i_car(t2);
t15=C_eqp(t14,lf[393]);
if(C_truep(t15)){
t16=C_i_length(t2);
t17=C_eqp(C_fix(2),t16);
if(C_truep(t17)){
t18=C_i_cadr(t2);
t19=C_u_i_memq(t18,lf[459]);
t20=t13;
f_13933(t20,t19);}
else{
t18=t13;
f_13933(t18,C_SCHEME_FALSE);}}
else{
t16=t13;
f_13933(t16,C_SCHEME_FALSE);}}
else{
t13=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}}}}}}}}}

/* make-node in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7508(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_7508,5,av);}
a=C_alloc(5);
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_record4(&a,4,lf[211],t2,t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7506(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(137,c,8)))){
C_save_and_reclaim((void *)f_7506,2,av);}
a=C_alloc(137);
t2=C_mutate2((C_word*)lf[210]+1 /* (set! make-node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7508,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate2((C_word*)lf[220]+1 /* (set! ##compiler#varnode ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7514,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate2((C_word*)lf[222]+1 /* (set! ##compiler#qnode ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7529,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate2((C_word*)lf[223]+1 /* (set! ##compiler#build-node-graph ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7544,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate2((C_word*)lf[263]+1 /* (set! ##compiler#build-expression-tree ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8782,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate2((C_word*)lf[279]+1 /* (set! ##compiler#fold-boolean ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9660,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate2((C_word*)lf[281]+1 /* (set! ##compiler#inline-lambda-bindings ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9710,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate2((C_word*)lf[286]+1 /* (set! ##compiler#copy-node-tree-and-rename ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9863,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate2((C_word*)lf[290]+1 /* (set! ##compiler#tree-copy ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10371,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate2((C_word*)lf[291]+1 /* (set! copy-node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10401,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate2((C_word*)lf[292]+1 /* (set! ##compiler#copy-node! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10439,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate2((C_word*)lf[293]+1 /* (set! ##compiler#node->sexpr ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10478,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate2((C_word*)lf[294]+1 /* (set! ##compiler#sexpr->node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10564,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate2((C_word*)lf[295]+1 /* (set! ##compiler#emit-global-inline-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10635,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate2((C_word*)lf[315]+1 /* (set! ##compiler#load-inline-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10897,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate2((C_word*)lf[317]+1 /* (set! ##compiler#match-node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10953,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate2((C_word*)lf[320]+1 /* (set! ##compiler#expression-has-side-effects? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11170,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate2((C_word*)lf[324]+1 /* (set! ##compiler#simple-lambda-node? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11279,tmp=(C_word)a,a+=2,tmp));
t20=C_mutate2((C_word*)lf[325]+1 /* (set! ##compiler#dump-undefined-globals ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11400,tmp=(C_word)a,a+=2,tmp));
t21=C_mutate2((C_word*)lf[327]+1 /* (set! ##compiler#dump-defined-globals ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11441,tmp=(C_word)a,a+=2,tmp));
t22=C_mutate2((C_word*)lf[328]+1 /* (set! ##compiler#dump-global-refs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11478,tmp=(C_word)a,a+=2,tmp));
t23=C_mutate2((C_word*)lf[329]+1 /* (set! ##sys#toplevel-definition-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11527,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate2((C_word*)lf[332]+1 /* (set! ##compiler#compute-database-statistics ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11548,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate2((C_word*)lf[335]+1 /* (set! ##compiler#print-program-statistics ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11661,tmp=(C_word)a,a+=2,tmp));
t26=C_mutate2((C_word*)lf[345]+1 /* (set! ##compiler#pprint-expressions-to-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11760,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate2((C_word*)lf[350]+1 /* (set! ##compiler#foreign-type-check ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11818,tmp=(C_word)a,a+=2,tmp));
t28=C_mutate2((C_word*)lf[435]+1 /* (set! ##compiler#foreign-type-convert-result ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12811,tmp=(C_word)a,a+=2,tmp));
t29=C_mutate2((C_word*)lf[436]+1 /* (set! ##compiler#foreign-type-convert-argument ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12842,tmp=(C_word)a,a+=2,tmp));
t30=C_mutate2((C_word*)lf[437]+1 /* (set! ##compiler#final-foreign-type ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12873,tmp=(C_word)a,a+=2,tmp));
t31=C_mutate2((C_word*)lf[439]+1 /* (set! ##compiler#estimate-foreign-result-size ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12918,tmp=(C_word)a,a+=2,tmp));
t32=C_mutate2((C_word*)lf[444]+1 /* (set! ##compiler#estimate-foreign-result-location-size ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13365,tmp=(C_word)a,a+=2,tmp));
t33=C_mutate2((C_word*)lf[447]+1 /* (set! ##compiler#finish-foreign-result ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13813,tmp=(C_word)a,a+=2,tmp));
t34=C_mutate2((C_word*)lf[461]+1 /* (set! ##compiler#foreign-type->scrutiny-type ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14081,tmp=(C_word)a,a+=2,tmp));
t35=C_mutate2((C_word*)lf[481]+1 /* (set! ##compiler#scan-used-variables ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14647,tmp=(C_word)a,a+=2,tmp));
t36=C_mutate2((C_word*)lf[482]+1 /* (set! ##compiler#scan-free-variables ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14802,tmp=(C_word)a,a+=2,tmp));
t37=C_mutate2((C_word*)lf[484]+1 /* (set! ##compiler#chop-separator ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15032,tmp=(C_word)a,a+=2,tmp));
t38=C_mutate2((C_word*)lf[487]+1 /* (set! ##compiler#chop-extension ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15059,tmp=(C_word)a,a+=2,tmp));
t39=C_mutate2((C_word*)lf[488]+1 /* (set! ##compiler#make-block-variable-literal ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15099,tmp=(C_word)a,a+=2,tmp));
t40=C_mutate2((C_word*)lf[490]+1 /* (set! ##compiler#block-variable-literal? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15105,tmp=(C_word)a,a+=2,tmp));
t41=C_mutate2((C_word*)lf[491]+1 /* (set! ##compiler#block-variable-literal-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15111,tmp=(C_word)a,a+=2,tmp));
t42=C_mutate2((C_word*)lf[493]+1 /* (set! ##compiler#make-random-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15120,tmp=(C_word)a,a+=2,tmp));
t43=C_mutate2((C_word*)lf[496]+1 /* (set! ##compiler#set-real-name! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15169,tmp=(C_word)a,a+=2,tmp));
t44=C_set_block_item(lf[498] /* real-name-max-depth */,0,C_fix(20));
t45=C_mutate2((C_word*)lf[47]+1 /* (set! ##compiler#real-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15176,tmp=(C_word)a,a+=2,tmp));
t46=C_mutate2((C_word*)lf[504]+1 /* (set! ##compiler#real-name2 ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15296,tmp=(C_word)a,a+=2,tmp));
t47=C_mutate2((C_word*)lf[505]+1 /* (set! ##compiler#display-real-name-table ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15308,tmp=(C_word)a,a+=2,tmp));
t48=C_mutate2((C_word*)lf[506]+1 /* (set! ##compiler#source-info->string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15332,tmp=(C_word)a,a+=2,tmp));
t49=C_mutate2((C_word*)lf[512]+1 /* (set! ##compiler#source-info->line ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15366,tmp=(C_word)a,a+=2,tmp));
t50=C_mutate2((C_word*)lf[513]+1 /* (set! ##compiler#call-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15384,tmp=(C_word)a,a+=2,tmp));
t51=C_mutate2((C_word*)lf[516]+1 /* (set! ##compiler#constant-form-eval ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15421,tmp=(C_word)a,a+=2,tmp));
t52=C_mutate2((C_word*)lf[519]+1 /* (set! ##compiler#encodeable-literal? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15663,tmp=(C_word)a,a+=2,tmp));
t53=C_mutate2((C_word*)lf[526]+1 /* (set! ##compiler#dump-nodes ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15742,tmp=(C_word)a,a+=2,tmp));
t54=C_mutate2((C_word*)lf[528]+1 /* (set! ##compiler#read-info-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15899,tmp=(C_word)a,a+=2,tmp));
t55=C_mutate2((C_word*)lf[532]+1 /* (set! ##compiler#read/source-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15942,tmp=(C_word)a,a+=2,tmp));
t56=*((C_word*)lf[534]+1);
t57=C_mutate2((C_word*)lf[534]+1 /* (set! ##sys#user-read-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15948,a[2]=t56,tmp=(C_word)a,a+=3,tmp));
t58=C_mutate2((C_word*)lf[537]+1 /* (set! ##compiler#scan-sharp-greater-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15973,tmp=(C_word)a,a+=2,tmp));
t59=C_mutate2((C_word*)lf[102]+1 /* (set! ##compiler#big-fixnum? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16042,tmp=(C_word)a,a+=2,tmp));
t60=C_mutate2((C_word*)lf[330]+1 /* (set! ##compiler#hide-variable ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16066,tmp=(C_word)a,a+=2,tmp));
t61=C_mutate2((C_word*)lf[542]+1 /* (set! ##compiler#export-variable ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16086,tmp=(C_word)a,a+=2,tmp));
t62=C_mutate2((C_word*)lf[544]+1 /* (set! ##compiler#variable-hidden? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16106,tmp=(C_word)a,a+=2,tmp));
t63=C_mutate2((C_word*)lf[314]+1 /* (set! ##compiler#variable-visible? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16116,tmp=(C_word)a,a+=2,tmp));
t64=C_mutate2((C_word*)lf[546]+1 /* (set! ##compiler#mark-variable ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16141,tmp=(C_word)a,a+=2,tmp));
t65=C_mutate2((C_word*)lf[547]+1 /* (set! ##compiler#variable-mark ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16156,tmp=(C_word)a,a+=2,tmp));
t66=C_mutate2((C_word*)lf[548]+1 /* (set! ##compiler#intrinsic? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16162,tmp=(C_word)a,a+=2,tmp));
t67=C_mutate2((C_word*)lf[549]+1 /* (set! foldable? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16173,tmp=(C_word)a,a+=2,tmp));
t68=C_mutate2((C_word*)lf[550]+1 /* (set! ##compiler#load-identifier-database ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16184,tmp=(C_word)a,a+=2,tmp));
t69=C_mutate2((C_word*)lf[558]+1 /* (set! ##compiler#print-version ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16282,tmp=(C_word)a,a+=2,tmp));
t70=C_mutate2((C_word*)lf[561]+1 /* (set! ##compiler#print-usage ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16307,tmp=(C_word)a,a+=2,tmp));
t71=C_mutate2((C_word*)lf[563]+1 /* (set! ##compiler#print-debug-options ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_16319,tmp=(C_word)a,a+=2,tmp));
t72=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t72;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t72+1)))(2,av2);}}

/* k11049 in matchn in match-node in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11051(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11051,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_slot(t2,C_fix(3));
t4=C_i_cddr(((C_word*)t0)[3]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11069,a[2]=((C_word*)t0)[4],a[3]=t6,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_11069(t8,((C_word*)t0)[6],t3,t4);}
else{
t2=((C_word*)t0)[6];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k6998 in k6992 in k6955 in k6918 in k6871 in k6868 in a6859 in k6853 in display-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7000(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_7000,2,av);}
a=C_alloc(3);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_slot(t2,C_fix(1));
t4=((C_word*)((C_word*)t0)[2])[1];
t5=C_slot(t4,C_fix(2));
t6=C_a_i_cons(&a,2,t3,t5);
/* support.scm:494: ##sys#print */
t7=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=((C_word*)t0)[3];
av2[2]=t6;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k5116 in k5113 in quit in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5118,2,av);}
/* support.scm:108: exit */
t2=*((C_word*)lf[31]+1);{
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

/* k5113 in quit in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5115,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5118,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:107: newline */
t3=*((C_word*)lf[15]+1);{
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

/* ##compiler#build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7544(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7544,3,av);}
a=C_alloc(12);
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7547,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8771,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* support.scm:618: walk */
t9=((C_word*)t6)[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
av2[2]=t2;
f_7547(3,av2);}}

/* ##compiler#quit in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +9,c,3)))){
C_save_and_reclaim((void*)f_5111,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+9);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=*((C_word*)lf[30]+1);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5115,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5125,a[2]=t5,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:106: string-append */
t7=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[32];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k8297 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_8299,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[211],lf[246],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7547(C_word c,C_word *av){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
av[0]=t0;
av[1]=t1;
av[2]=t2;
C_save_and_reclaim((void *)f_7547,3,av);}
a=C_alloc(21);
if(C_truep(C_i_symbolp(t2))){
/* support.scm:524: varnode */
t3=*((C_word*)lf[220]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;
if(C_truep(C_i_structurep(t3,lf[211]))){
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_not_pair_p(t2))){
/* support.scm:526: bomb */
t4=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[224];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=C_i_car(t2);
if(C_truep(C_i_symbolp(t4))){
t5=t2;
t6=C_u_i_car(t5);
t7=C_eqp(t6,lf[225]);
t8=(C_truep(t7)?t7:C_eqp(t6,lf[226]));
if(C_truep(t8)){
t9=t2;
t10=C_u_i_car(t9);
t11=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t12=t11;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=((C_word*)t13)[1];
t15=((C_word*)((C_word*)t0)[2])[1];
t16=t2;
t17=C_u_i_cdr(t16);
t18=C_i_check_list_2(t17,lf[161]);
t19=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7614,a[2]=t1,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7616,a[2]=t13,a[3]=t21,a[4]=t15,a[5]=t14,tmp=(C_word)a,a+=6,tmp));
t23=((C_word*)t21)[1];
f_7616(t23,t19,t17);}
else{
t9=C_eqp(t6,lf[97]);
if(C_truep(t9)){
t10=C_i_cadr(t2);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7667,a[2]=t1,a[3]=t11,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_numberp(t11))){
t13=C_eqp(lf[230],*((C_word*)lf[231]+1));
if(C_truep(t13)){
t14=C_i_integerp(t11);
t15=t12;
f_7667(t15,C_i_not(t14));}
else{
t14=t12;
f_7667(t14,C_SCHEME_FALSE);}}
else{
t13=t12;
f_7667(t13,C_SCHEME_FALSE);}}
else{
t10=C_eqp(t6,lf[109]);
if(C_truep(t10)){
t11=C_i_cadr(t2);
t12=C_i_caddr(t2);
t13=t12;
if(C_truep(C_i_nullp(t11))){
/* support.scm:544: walk */
t39=t1;
t40=t13;
t1=t39;
t2=t40;
c=3;
goto loop;}
else{
t14=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t15=t14;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=((C_word*)t16)[1];
t18=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7740,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t13,a[6]=t16,a[7]=t17,tmp=(C_word)a,a+=8,tmp);
/* support.scm:550: unzip1 */
t19=*((C_word*)lf[234]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t19;
av2[1]=t18;
av2[2]=t11;
((C_proc)(void*)(*((C_word*)t19+1)))(3,av2);}}}
else{
t11=C_eqp(t6,lf[235]);
t12=(C_truep(t11)?t11:C_eqp(t6,lf[133]));
if(C_truep(t12)){
t13=C_i_cadr(t2);
t14=C_a_i_list1(&a,1,t13);
t15=t14;
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7874,a[2]=t1,a[3]=t15,tmp=(C_word)a,a+=4,tmp);
t17=C_i_caddr(t2);
/* support.scm:554: walk */
t39=t16;
t40=t17;
t1=t39;
t2=t40;
c=3;
goto loop;}
else{
t13=C_eqp(t6,lf[236]);
if(C_truep(t13)){
t14=C_i_cadr(t2);
t15=C_i_caddr(t2);
t16=C_a_i_list2(&a,2,t14,t15);
t17=t16;
t18=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7908,a[2]=t1,a[3]=t17,tmp=(C_word)a,a+=4,tmp);
t19=C_i_cadddr(t2);
/* support.scm:558: walk */
t39=t18;
t40=t19;
t1=t39;
t2=t40;
c=3;
goto loop;}
else{
t14=C_eqp(t6,lf[237]);
if(C_truep(t14)){
t15=C_i_cdddr(t2);
t16=t15;
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8062,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t16,tmp=(C_word)a,a+=6,tmp);
t18=t2;
t19=C_u_i_cdr(t18);
t20=C_u_i_cdr(t19);
t21=C_u_i_car(t20);
/* support.scm:561: walk */
t39=t17;
t40=t21;
t1=t39;
t2=t40;
c=3;
goto loop;}
else{
t15=C_eqp(t6,lf[241]);
if(C_truep(t15)){
t16=C_i_cadr(t2);
t17=t2;
t18=C_u_i_car(t17);
t19=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8089,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=t18,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t16))){
t20=C_u_i_car(t16);
t21=C_eqp(lf[97],t20);
if(C_truep(t21)){
t22=C_i_cadr(t16);
t23=t19;
f_8089(t23,C_a_i_list1(&a,1,t22));}
else{
t22=t19;
f_8089(t22,C_a_i_list1(&a,1,t16));}}
else{
t20=t19;
f_8089(t20,C_a_i_list1(&a,1,t16));}}
else{
t16=C_eqp(t6,lf[242]);
t17=(C_truep(t16)?t16:C_eqp(t6,lf[243]));
if(C_truep(t17)){
t18=t2;
t19=C_u_i_car(t18);
t20=C_i_cadr(t2);
t21=C_a_i_list1(&a,1,t20);
t22=t21;
t23=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t24=t23;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=((C_word*)t25)[1];
t27=((C_word*)((C_word*)t0)[2])[1];
t28=t2;
t29=C_u_i_cdr(t28);
t30=C_u_i_cdr(t29);
t31=C_i_check_list_2(t30,lf[161]);
t32=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8188,a[2]=t1,a[3]=t19,a[4]=t22,tmp=(C_word)a,a+=5,tmp);
t33=C_SCHEME_UNDEFINED;
t34=(*a=C_VECTOR_TYPE|1,a[1]=t33,tmp=(C_word)a,a+=2,tmp);
t35=C_set_block_item(t34,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8190,a[2]=t25,a[3]=t34,a[4]=t27,a[5]=t26,tmp=(C_word)a,a+=6,tmp));
t36=((C_word*)t34)[1];
f_8190(t36,t32,t30);}
else{
t18=C_eqp(t6,lf[244]);
if(C_truep(t18)){
t19=t2;
t20=C_u_i_car(t19);
t21=t2;
t22=C_u_i_cdr(t21);
t23=t1;
t24=t23;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t24;
av2[1]=C_a_i_record4(&a,4,lf[211],t20,t22,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t24+1)))(2,av2);}}
else{
t19=C_eqp(t6,lf[245]);
if(C_truep(t19)){
t20=C_i_cadr(t2);
t21=C_a_i_list2(&a,2,t20,C_SCHEME_TRUE);
t22=t1;
t23=t22;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t23;
av2[1]=C_a_i_record4(&a,4,lf[211],lf[245],t21,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t23+1)))(2,av2);}}
else{
t20=C_eqp(t6,lf[246]);
t21=(C_truep(t20)?t20:C_eqp(t6,lf[247]));
if(C_truep(t21)){
t22=C_i_cadr(t2);
t23=C_a_i_list1(&a,1,t22);
t24=t23;
t25=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t26=t25;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=((C_word*)t27)[1];
t29=((C_word*)((C_word*)t0)[2])[1];
t30=t2;
t31=C_u_i_cdr(t30);
t32=C_u_i_cdr(t31);
t33=C_i_check_list_2(t32,lf[161]);
t34=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8299,a[2]=t1,a[3]=t24,tmp=(C_word)a,a+=4,tmp);
t35=C_SCHEME_UNDEFINED;
t36=(*a=C_VECTOR_TYPE|1,a[1]=t35,tmp=(C_word)a,a+=2,tmp);
t37=C_set_block_item(t36,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8301,a[2]=t27,a[3]=t36,a[4]=t29,a[5]=t28,tmp=(C_word)a,a+=6,tmp));
t38=((C_word*)t36)[1];
f_8301(t38,t34,t32);}
else{
t22=C_eqp(t6,lf[248]);
if(C_truep(t22)){
t23=C_i_cadr(t2);
t24=C_i_cadr(t23);
t25=t24;
t26=C_i_caddr(t2);
t27=C_i_cadr(t26);
t28=t27;
t29=C_i_cadddr(t2);
t30=C_i_cadr(t29);
t31=t30;
t32=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8386,a[2]=t25,a[3]=t28,a[4]=t31,a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* support.scm:596: fifth */
t33=*((C_word*)lf[250]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t33;
av2[1]=t32;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t33+1)))(3,av2);}}
else{
t23=C_eqp(t6,lf[251]);
t24=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8407,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t6,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t23)){
t25=t24;
f_8407(t25,t23);}
else{
t25=C_eqp(t6,lf[257]);
if(C_truep(t25)){
t26=t24;
f_8407(t26,t25);}
else{
t26=C_eqp(t6,lf[258]);
if(C_truep(t26)){
t27=t24;
f_8407(t27,t26);}
else{
t27=C_eqp(t6,lf[259]);
t28=t24;
f_8407(t28,(C_truep(t27)?t27:C_eqp(t6,lf[260])));}}}}}}}}}}}}}}}}
else{
t5=C_a_i_list1(&a,1,C_SCHEME_FALSE);
t6=t5;
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=((C_word*)((C_word*)t0)[2])[1];
t12=t2;
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8730,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8732,a[2]=t9,a[3]=t15,a[4]=t11,a[5]=t10,tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_8732(t17,t13,t12);}}}}}

/* k11886 in k11868 in k11853 in repeat in a11823 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11888(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11888,2,av);}
a=C_alloc(42);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=(C_truep(*((C_word*)lf[353]+1))?t1:C_a_i_list(&a,2,lf[361],t1));
t5=C_a_i_list(&a,2,lf[97],C_SCHEME_FALSE);
t6=C_a_i_list(&a,4,lf[225],t1,t4,t5);
t7=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_list(&a,3,lf[109],t3,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* a12911 in final-foreign-type in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_12912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12912,2,av);}
/* support.scm:1172: quit */
t2=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[438];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5107 in k5100 in k5076 in with-debugging-output in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5109,2,av);}
/* support.scm:102: collect */
t2=((C_word*)t0)[2];
f_5017(t2,((C_word*)t0)[3],t1);}

/* k5100 in k5076 in with-debugging-output in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5102,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5109,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:102: with-output-to-string */
t3=*((C_word*)lf[23]+1);{
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
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* g169 in k5132 in k5129 in syntax-error-hook in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_5135(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5135,3,t0,t1,t2);}
/* support.scm:121: g184 */
t3=*((C_word*)lf[24]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[34];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* ##compiler#estimate-foreign-result-size in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_12918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_12918,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12924,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13359,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1178: follow-without-loop */
t5=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k5129 in syntax-error-hook in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_5131(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_5131,2,t0,t1);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5134,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=((C_word*)t0)[2];
t5=C_i_check_port_2(t4,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[24]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5180,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* support.scm:119: ##sys#print */
t7=*((C_word*)lf[19]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[40];
av2[3]=C_SCHEME_FALSE;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t4=((C_word*)t0)[2];
t5=C_i_check_port_2(t4,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[24]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5201,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* support.scm:120: ##sys#print */
t7=*((C_word*)lf[19]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[41];
av2[3]=C_SCHEME_FALSE;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}}

/* k5132 in k5129 in syntax-error-hook in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5134(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5134,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5135,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)((C_word*)t0)[3])[1];
t4=C_i_check_list_2(t3,lf[35]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5145,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5153,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_5153(t9,t5,t3);}

/* ##compiler#qnode in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void *)f_7529,3,av);}
a=C_alloc(8);
t3=C_a_i_list1(&a,1,t2);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[211],lf[97],t3,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5455 in symbolify in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_5457,2,av);}
a=C_alloc(4);
t2=t1;
t3=C_i_check_port_2(t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[52]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5463,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:170: ##sys#print */
t5=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* ##compiler#varnode in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void *)f_7514,3,av);}
a=C_alloc(8);
t3=C_a_i_list1(&a,1,t2);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[211],lf[221],t3,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11868 in k11853 in repeat in a11823 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_11870(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_11870,2,t0,t1);}
a=C_alloc(15);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=(C_truep(*((C_word*)lf[353]+1))?((C_word*)t0)[3]:C_a_i_list(&a,2,lf[358],((C_word*)t0)[3]));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[359]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[360]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11888,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1032: gensym */
t5=*((C_word*)lf[110]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_eqp(((C_word*)t0)[4],lf[362]);
t5=(C_truep(t4)?t4:C_eqp(((C_word*)t0)[4],lf[363]));
if(C_truep(t5)){
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=(C_truep(*((C_word*)lf[353]+1))?((C_word*)t0)[3]:C_a_i_list(&a,2,lf[361],((C_word*)t0)[3]));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(((C_word*)t0)[4],lf[364]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11938,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1044: gensym */
t8=*((C_word*)lf[110]+1);{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t7=C_eqp(((C_word*)t0)[4],lf[366]);
if(C_truep(t7)){
if(C_truep(*((C_word*)lf[353]+1))){
t8=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t8;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_a_i_list(&a,2,lf[97],lf[364]);
t9=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t9;
av2[1]=C_a_i_list(&a,3,lf[365],t8,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}
else{
t8=C_eqp(((C_word*)t0)[4],lf[367]);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11993,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t8)){
t10=t9;
f_11993(t10,t8);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[418]);
if(C_truep(t10)){
t11=t9;
f_11993(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[419]);
if(C_truep(t11)){
t12=t9;
f_11993(t12,t11);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[420]);
if(C_truep(t12)){
t13=t9;
f_11993(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[4],lf[421]);
if(C_truep(t13)){
t14=t9;
f_11993(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[422]);
if(C_truep(t14)){
t15=t9;
f_11993(t15,t14);}
else{
t15=C_eqp(((C_word*)t0)[4],lf[423]);
t16=t9;
f_11993(t16,(C_truep(t15)?t15:C_eqp(((C_word*)t0)[4],lf[424])));}}}}}}}}}}}}

/* k12941 in k12932 in a12923 in estimate-foreign-result-size in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_12943(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_12943,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
/* support.scm:1188: words->bytes */
t2=*((C_word*)lf[79]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(3);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[374]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12955,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_12955(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[408]);
if(C_truep(t4)){
t5=t3;
f_12955(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[370]);
if(C_truep(t5)){
t6=t3;
f_12955(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[409]);
if(C_truep(t6)){
t7=t3;
f_12955(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[3],lf[407]);
if(C_truep(t7)){
t8=t3;
f_12955(t8,t7);}
else{
t8=C_eqp(((C_word*)t0)[3],lf[410]);
t9=t3;
f_12955(t9,(C_truep(t8)?t8:C_eqp(((C_word*)t0)[3],lf[406])));}}}}}}}

/* k5474 in backslashify in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5476,2,av);}
/* support.scm:172: string-translate* */
t2=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[59];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k15350 in source-info->string in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_15352,2,av);}
/* support.scm:1476: conc */
t2=*((C_word*)lf[507]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[508];
av2[4]=t1;
av2[5]=lf[509];
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k15354 in source-info->string in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_15356,2,av);}
/* support.scm:1476: make-string */
t2=*((C_word*)lf[510]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_make_character(32);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* ##compiler#foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11818(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_11818,4,av);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11824,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12805,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1022: follow-without-loop */
t6=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5461 in k5455 in symbolify in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5463(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5463,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5466,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:170: get-output-string */
t3=*((C_word*)lf[53]+1);{
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

/* a12923 in estimate-foreign-result-size in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_12924(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_12924,4,av);}
a=C_alloc(6);
t4=t2;
t5=C_eqp(t4,lf[351]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12934,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_12934(t7,t5);}
else{
t7=C_eqp(t4,lf[355]);
if(C_truep(t7)){
t8=t6;
f_12934(t8,t7);}
else{
t8=C_eqp(t4,lf[428]);
if(C_truep(t8)){
t9=t6;
f_12934(t9,t8);}
else{
t9=C_eqp(t4,lf[440]);
if(C_truep(t9)){
t10=t6;
f_12934(t10,t9);}
else{
t10=C_eqp(t4,lf[441]);
if(C_truep(t10)){
t11=t6;
f_12934(t11,t10);}
else{
t11=C_eqp(t4,lf[429]);
if(C_truep(t11)){
t12=t6;
f_12934(t12,t11);}
else{
t12=C_eqp(t4,lf[442]);
if(C_truep(t12)){
t13=t6;
f_12934(t13,t12);}
else{
t13=C_eqp(t4,lf[352]);
if(C_truep(t13)){
t14=t6;
f_12934(t14,t13);}
else{
t14=C_eqp(t4,lf[427]);
if(C_truep(t14)){
t15=t6;
f_12934(t15,t14);}
else{
t15=C_eqp(t4,lf[430]);
if(C_truep(t15)){
t16=t6;
f_12934(t16,t15);}
else{
t16=C_eqp(t4,lf[431]);
if(C_truep(t16)){
t17=t6;
f_12934(t17,t16);}
else{
t17=C_eqp(t4,lf[432]);
t18=t6;
f_12934(t18,(C_truep(t17)?t17:C_eqp(t4,lf[433])));}}}}}}}}}}}}

/* k5464 in k5461 in k5455 in symbolify in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5466,2,av);}
/* support.scm:170: string->symbol */
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

/* ##compiler#uncommentify in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5478,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5486,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:174: ->string */
t4=*((C_word*)lf[60]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* ##compiler#read-info-hook in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15899(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_15899,5,av);}
a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_15903,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_15906,a[2]=t3,a[3]=t5,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_eqp(lf[531],t2);
if(C_truep(t7)){
t8=C_i_car(t3);
t9=t6;
f_15906(t9,C_i_symbolp(t8));}
else{
t8=t6;
f_15906(t8,C_SCHEME_FALSE);}}

/* k12953 in k12941 in k12932 in a12923 in estimate-foreign-result-size in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_12955(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_12955,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
/* support.scm:1190: words->bytes */
t2=*((C_word*)lf[79]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(4);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[357]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12967,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_12967(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[425]);
if(C_truep(t4)){
t5=t3;
f_12967(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[426]);
if(C_truep(t5)){
t6=t3;
f_12967(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[372]);
t7=t3;
f_12967(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[3],lf[376])));}}}}}

/* k16118 in variable-visible? in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_16120,2,av);}
t2=C_eqp(t1,lf[540]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_eqp(t1,lf[543]);
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(C_truep(t3)?C_SCHEME_TRUE:C_i_not(*((C_word*)lf[545]+1)));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* map-loop1270 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_8301(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8301,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8326,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:591: g1276 */
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

/* k12932 in a12923 in estimate-foreign-result-size in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_12934(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_12934,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],lf[381]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12943,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_12943(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[384]);
if(C_truep(t4)){
t5=t3;
f_12943(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[378]);
if(C_truep(t5)){
t6=t3;
f_12943(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[380]);
if(C_truep(t6)){
t7=t3;
f_12943(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[3],lf[385]);
if(C_truep(t7)){
t8=t3;
f_12943(t8,t7);}
else{
t8=C_eqp(((C_word*)t0)[3],lf[401]);
if(C_truep(t8)){
t9=t3;
f_12943(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[3],lf[399]);
if(C_truep(t9)){
t10=t3;
f_12943(t10,t9);}
else{
t10=C_eqp(((C_word*)t0)[3],lf[402]);
if(C_truep(t10)){
t11=t3;
f_12943(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[3],lf[403]);
if(C_truep(t11)){
t12=t3;
f_12943(t12,t11);}
else{
t12=C_eqp(((C_word*)t0)[3],lf[400]);
if(C_truep(t12)){
t13=t3;
f_12943(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[3],lf[404]);
t14=t3;
f_12943(t14,(C_truep(t13)?t13:C_eqp(((C_word*)t0)[3],lf[405])));}}}}}}}}}}}}

/* loop in build-lambda-list in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_5494(C_word t0,C_word t1,C_word t2,C_word t3){
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
loop:
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_5494,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=C_i_zerop(t3);
t5=(C_truep(t4)?t4:C_i_nullp(t2));
if(C_truep(t5)){
t6=((C_word*)t0)[2];
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=(C_truep(t6)?t6:C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=C_i_car(t2);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5518,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=t2;
t10=C_u_i_cdr(t9);
t11=C_a_i_minus(&a,2,t3,C_fix(1));
/* support.scm:179: loop */
t13=t8;
t14=t10;
t15=t11;
t1=t13;
t2=t14;
t3=t15;
goto loop;}}

/* ##compiler#variable-visible? in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16116(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_16116,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16120,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1634: ##sys#get */
t4=*((C_word*)lf[255]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[541];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* ##compiler#backslashify in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5468,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5476,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:172: ->string */
t4=*((C_word*)lf[60]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* for-each-loop3784 in k15801 in k15798 in k15795 in k15792 in k15789 in k15786 in k15777 in loop in dump-nodes in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_15876(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_15876,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15886,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:1552: g3785 */
t5=((C_word*)t0)[3];
f_15804(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k16112 in variable-hidden? in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_16114,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(t1,lf[540]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5484 in uncommentify in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5486,2,av);}
/* support.scm:174: string-translate* */
t2=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[62];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k10257 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10259(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10259,2,av);}
a=C_alloc(22);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10264,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t8=C_i_check_list_2(((C_word*)t0)[4],lf[161]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10274,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10276,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_10276(t13,t9,((C_word*)t0)[4]);}

/* ##compiler#source-info->line in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_15366,3,av);}
if(C_truep(C_i_listp(t2))){
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(t2)){
/* support.scm:1482: ->string */
t3=*((C_word*)lf[60]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* k11800 in for-each-loop2562 in a11774 in k11762 in pprint-expressions-to-file in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11802,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11792(t3,((C_word*)t0)[4],t2);}

/* ##compiler#mark-variable in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_16141,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+0);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* support.scm:1641: ##sys#put! */
t5=*((C_word*)lf[142]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
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
/* support.scm:1641: ##sys#put! */
t6=*((C_word*)lf[142]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* k8324 in map-loop1270 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_8326(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8326,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8301(t6,((C_word*)t0)[5],t5);}

/* a15313 in display-real-name-table in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15314(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_15314,4,av);}
a=C_alloc(5);
t4=*((C_word*)lf[16]+1);
t5=*((C_word*)lf[16]+1);
t6=C_i_check_port_2(*((C_word*)lf[16]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[17]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_15321,a[2]=t1,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1468: ##sys#print */
t8=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}

/* k11853 in repeat in a11823 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_11855(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_11855,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
if(C_truep(*((C_word*)lf[353]+1))){
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
av2[1]=C_a_i_list(&a,2,lf[356],((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[357]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11870,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_11870(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[425]);
t5=t3;
f_11870(t5,(C_truep(t4)?t4:C_eqp(((C_word*)t0)[4],lf[426])));}}}

/* k7836 in map-loop1094 in k7738 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7838(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7838,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7813(t6,((C_word*)t0)[5],t5);}

/* k6961 in k6955 in k6918 in k6871 in k6868 in a6859 in k6853 in display-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6963(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6963,2,av);}
a=C_alloc(3);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_slot(t2,C_fix(1));
t4=((C_word*)((C_word*)t0)[2])[1];
t5=C_slot(t4,C_fix(2));
t6=C_a_i_cons(&a,2,t3,t5);
/* support.scm:492: ##sys#print */
t7=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=((C_word*)t0)[3];
av2[2]=t6;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k15298 in real-name2 in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_15300,2,av);}
if(C_truep(t1)){
/* support.scm:1464: real-name */
t2=*((C_word*)lf[47]+1);{
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
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* ##compiler#display-real-name-table in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_15308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_15308,2,av);}
a=C_alloc(2);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_15314,tmp=(C_word)a,a+=2,tmp);
/* support.scm:1467: ##sys#hash-table-for-each */
t3=*((C_word*)lf[162]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=*((C_word*)lf[497]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a11823 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_11824(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_11824,4,av);}
a=C_alloc(7);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11830,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_11830(t7,t1,t2);}

/* k9314 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_9316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9316,2,av);}
/* support.scm:663: cons* */
t2=*((C_word*)lf[270]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[243];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* map-loop1651 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_9318(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9318,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9343,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:663: g1657 */
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

/* ##compiler#intrinsic? in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16162(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_16162,3,av);}
/* tweaks.scm:57: ##sys#get */
t3=*((C_word*)lf[255]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[143];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* map-loop1094 in k7738 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_7813(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7813,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7838,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_eqp(lf[232],t4);
if(C_truep(t5)){
/* support.scm:549: error */
t6=*((C_word*)lf[4]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t3;
av2[2]=lf[233];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t6=t3;{
C_word av2[2];
av2[0]=t6;
av2[1]=t4;
f_7838(2,av2);}}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6868 in a6859 in k6853 in display-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6870(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6870,2,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6873,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7048,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_7048(t6,t2,((C_word*)t0)[8]);}

/* ##compiler#variable-mark in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_16156,4,av);}
/* support.scm:1644: ##sys#get */
t4=*((C_word*)lf[255]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6877 in k6874 in k6871 in k6868 in a6859 in k6853 in display-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6879(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_6879,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6882,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[3])[1]))){
t3=*((C_word*)lf[16]+1);
t4=*((C_word*)lf[16]+1);
t5=C_i_check_port_2(*((C_word*)lf[16]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[17]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6894,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:496: ##sys#print */
t7=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[164];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
/* support.scm:497: newline */
t3=*((C_word*)lf[15]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7802 in map-loop1121 in k7741 in k7738 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7804(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7804,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7779(t6,((C_word*)t0)[5],t5);}

/* k6874 in k6871 in k6868 in a6859 in k6853 in display-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6876(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6876,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6879,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[4])[1]))){
t3=*((C_word*)lf[16]+1);
t4=*((C_word*)lf[16]+1);
t5=C_i_check_port_2(*((C_word*)lf[16]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[17]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6910,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:495: ##sys#print */
t7=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[165];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6879(2,av2);}}}

/* k6871 in k6868 in a6859 in k6853 in display-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6873,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6876,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6920,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t4=C_eqp(((C_word*)((C_word*)t0)[5])[1],lf[169]);
t5=t3;
f_6920(t5,C_i_not(t4));}
else{
t4=t3;
f_6920(t4,C_SCHEME_FALSE);}}

/* k16186 in load-identifier-database in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16188(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_16188,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16194,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_16280,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1654: make-pathname */
t4=*((C_word*)lf[556]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a6859 in k6853 in display-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6860(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_6860,4,av);}
a=C_alloc(19);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_END_OF_LIST;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_memq(t2,((C_word*)((C_word*)t0)[2])[1]))){
t14=C_SCHEME_UNDEFINED;
t15=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}
else{
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6870,a[2]=t1,a[3]=t11,a[4]=t13,a[5]=t5,a[6]=t7,a[7]=t9,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
/* support.scm:463: write */
t15=*((C_word*)lf[207]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=t14;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t15+1)))(3,av2);}}}

/* ##compiler#load-identifier-database in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16184(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_16184,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16188,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1653: repository-path */
t4=*((C_word*)lf[557]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7872 in walk in build-node-graph in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_7874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void *)f_7874,2,av);}
a=C_alloc(8);
t2=C_a_i_list1(&a,1,t1);
t3=((C_word*)t0)[2];
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[211],lf[235],((C_word*)t0)[3],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* g2045 in k10257 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_10264(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_10264,3,t0,t1,t2);}
/* support.scm:754: g2062 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_9884(t3,t1,t2,((C_word*)t0)[3]);}

/* ##compiler#display-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_6851,3,av);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6855,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_6855(t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7437,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:452: append */
t5=*((C_word*)lf[69]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=*((C_word*)lf[208]+1);
av2[3]=*((C_word*)lf[209]+1);
av2[4]=*((C_word*)lf[140]+1);
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* foldable? in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_16173,3,av);}
/* tweaks.scm:57: ##sys#get */
t3=*((C_word*)lf[255]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[145];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6853 in display-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_6855(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_6855,2,t0,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6860,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:455: ##sys#hash-table-for-each */
t3=*((C_word*)lf[162]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* map-loop2039 in k10257 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_10276(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10276,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10301,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:754: g2045 */
t5=((C_word*)t0)[4];
f_10264(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10272 in k10257 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_10274,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record4(&a,4,lf[211],((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k16339 in k16336 in k16333 in k16330 in a16324 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_16341,2,av);}
/* support.scm:512: ##sys#write-char-0 */
t2=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(62);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k10238 in map-loop1933 in a10049 in walk in k9874 in copy-node-tree-and-rename in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10240(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10240,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10215(t6,((C_word*)t0)[5],t5);}

/* loop in k9171 in k8820 in walk in build-expression-tree in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_9185(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_9185,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9209,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=C_i_car(t3);
/* support.scm:658: walk */
t6=((C_word*)((C_word*)t0)[2])[1];{
C_word av2[3];
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
f_8788(3,av2);}}}
else{
t4=C_i_car(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9236,a[2]=t5,a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t7=C_i_car(t3);
/* support.scm:659: walk */
t8=((C_word*)((C_word*)t0)[2])[1];{
C_word av2[3];
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
f_8788(3,av2);}}}

/* k6908 in k6874 in k6871 in k6868 in a6859 in k6853 in display-analysis-database in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_6910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6910,2,av);}
t2=C_i_length(((C_word*)((C_word*)t0)[2])[1]);
/* support.scm:495: ##sys#print */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* repeat in a11823 in foreign-type-check in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_11830(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_11830,3,t0,t1,t2);}
a=C_alloc(8);
t3=t2;
t4=C_eqp(t3,lf[351]);
t5=(C_truep(t4)?t4:C_eqp(t3,lf[352]));
if(C_truep(t5)){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=(C_truep(*((C_word*)lf[353]+1))?((C_word*)t0)[2]:C_a_i_list(&a,2,lf[354],((C_word*)t0)[2]));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(t3,lf[355]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11855,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t6)){
t8=t7;
f_11855(t8,t6);}
else{
t8=C_eqp(t3,lf[427]);
if(C_truep(t8)){
t9=t7;
f_11855(t9,t8);}
else{
t9=C_eqp(t3,lf[428]);
if(C_truep(t9)){
t10=t7;
f_11855(t10,t9);}
else{
t10=C_eqp(t3,lf[429]);
if(C_truep(t10)){
t11=t7;
f_11855(t11,t10);}
else{
t11=C_eqp(t3,lf[430]);
if(C_truep(t11)){
t12=t7;
f_11855(t12,t11);}
else{
t12=C_eqp(t3,lf[431]);
if(C_truep(t12)){
t13=t7;
f_11855(t13,t12);}
else{
t13=C_eqp(t3,lf[432]);
t14=t7;
f_11855(t14,(C_truep(t13)?t13:C_eqp(t3,lf[433])));}}}}}}}}

/* k16192 in k16186 in load-identifier-database in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_16194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_16194,2,av);}
a=C_alloc(8);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16200,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_16258,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1655: open-output-string */
t5=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5516 in loop in build-lambda-list in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_5518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5518,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##compiler#tree-copy in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_ccall f_10371(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10371,3,av);}
a=C_alloc(5);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10377,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_10377(t6,t1,t2);}

/* rec in tree-copy in k7504 in k6124 in k6121 in k4870 in k4836 in k4833 in k4830 */
static void C_fcall f_10377(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10377,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10391,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_u_i_car(t4);
/* support.scm:760: rec */
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

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[762] = {
{"f_5546:support_2escm",(void*)f_5546},
{"f_5548:support_2escm",(void*)f_5548},
{"f_15391:support_2escm",(void*)f_15391},
{"f_5542:support_2escm",(void*)f_5542},
{"f_6815:support_2escm",(void*)f_6815},
{"f_6817:support_2escm",(void*)f_6817},
{"f_12115:support_2escm",(void*)f_12115},
{"f_15384:support_2escm",(void*)f_15384},
{"f_10391:support_2escm",(void*)f_10391},
{"f_10395:support_2escm",(void*)f_10395},
{"f_5530:support_2escm",(void*)f_5530},
{"f_6882:support_2escm",(void*)f_6882},
{"f_16307:support_2escm",(void*)f_16307},
{"f_16319:support_2escm",(void*)f_16319},
{"f_12162:support_2escm",(void*)f_12162},
{"f_12118:support_2escm",(void*)f_12118},
{"f_6957:support_2escm",(void*)f_6957},
{"f_16332:support_2escm",(void*)f_16332},
{"f_16335:support_2escm",(void*)f_16335},
{"f_10215:support_2escm",(void*)f_10215},
{"f_16325:support_2escm",(void*)f_16325},
{"f_16338:support_2escm",(void*)f_16338},
{"f_12177:support_2escm",(void*)f_12177},
{"f_5585:support_2escm",(void*)f_5585},
{"f_5581:support_2escm",(void*)f_5581},
{"f_9173:support_2escm",(void*)f_9173},
{"f_6926:support_2escm",(void*)f_6926},
{"f_9177:support_2escm",(void*)f_9177},
{"f_6920:support_2escm",(void*)f_6920},
{"f_5570:support_2escm",(void*)f_5570},
{"f_5577:support_2escm",(void*)f_5577},
{"f_12159:support_2escm",(void*)f_12159},
{"f_9974:support_2escm",(void*)f_9974},
{"f_14280:support_2escm",(void*)f_14280},
{"f_10301:support_2escm",(void*)f_10301},
{"f_6802:support_2escm",(void*)f_6802},
{"f_10323:support_2escm",(void*)f_10323},
{"f_14298:support_2escm",(void*)f_14298},
{"f_12358:support_2escm",(void*)f_12358},
{"f_15942:support_2escm",(void*)f_15942},
{"f_15948:support_2escm",(void*)f_15948},
{"f_4892:support_2escm",(void*)f_4892},
{"f_4894:support_2escm",(void*)f_4894},
{"f_4897:support_2escm",(void*)f_4897},
{"f_4861:support_2escm",(void*)f_4861},
{"f_8523:support_2escm",(void*)f_8523},
{"f_15677:support_2escm",(void*)f_15677},
{"f_8541:support_2escm",(void*)f_8541},
{"f_9982:support_2escm",(void*)f_9982},
{"f_14685:support_2escm",(void*)f_14685},
{"f_5404:support_2escm",(void*)f_5404},
{"f_9998:support_2escm",(void*)f_9998},
{"f_5434:support_2escm",(void*)f_5434},
{"f_8535:support_2escm",(void*)f_8535},
{"f_12284:support_2escm",(void*)f_12284},
{"f_12287:support_2escm",(void*)f_12287},
{"f_5429:support_2escm",(void*)f_5429},
{"f_4875:support_2escm",(void*)f_4875},
{"f_5423:support_2escm",(void*)f_5423},
{"f_8564:support_2escm",(void*)f_8564},
{"f_8566:support_2escm",(void*)f_8566},
{"f_4872:support_2escm",(void*)f_4872},
{"f_9815:support_2escm",(void*)f_9815},
{"f_9829:support_2escm",(void*)f_9829},
{"f_16003:support_2escm",(void*)f_16003},
{"f_15547:support_2escm",(void*)f_15547},
{"f_15545:support_2escm",(void*)f_15545},
{"f_12247:support_2escm",(void*)f_12247},
{"f_6994:support_2escm",(void*)f_6994},
{"f_8407:support_2escm",(void*)f_8407},
{"f_14259:support_2escm",(void*)f_14259},
{"f_15531:support_2escm",(void*)f_15531},
{"f_15537:support_2escm",(void*)f_15537},
{"f_12251:support_2escm",(void*)f_12251},
{"f_8435:support_2escm",(void*)f_8435},
{"f_8433:support_2escm",(void*)f_8433},
{"f_15565:support_2escm",(void*)f_15565},
{"f_9854:support_2escm",(void*)f_9854},
{"f_12322:support_2escm",(void*)f_12322},
{"f_6894:support_2escm",(void*)f_6894},
{"f_15559:support_2escm",(void*)f_15559},
{"f_15553:support_2escm",(void*)f_15553},
{"f_12204:support_2escm",(void*)f_12204},
{"f_15571:support_2escm",(void*)f_15571},
{"f_14717:support_2escm",(void*)f_14717},
{"f_14703:support_2escm",(void*)f_14703},
{"f_15593:support_2escm",(void*)f_15593},
{"f_15595:support_2escm",(void*)f_15595},
{"f_14767:support_2escm",(void*)f_14767},
{"f_15663:support_2escm",(void*)f_15663},
{"f_14757:support_2escm",(void*)f_14757},
{"f_14749:support_2escm",(void*)f_14749},
{"f_15797:support_2escm",(void*)f_15797},
{"f_10783:support_2escm",(void*)f_10783},
{"f_15791:support_2escm",(void*)f_15791},
{"f_15794:support_2escm",(void*)f_15794},
{"f_10478:support_2escm",(void*)f_10478},
{"f_11728:support_2escm",(void*)f_11728},
{"f_11722:support_2escm",(void*)f_11722},
{"f_14320:support_2escm",(void*)f_14320},
{"f_10446:support_2escm",(void*)f_10446},
{"f_5809:support_2escm",(void*)f_5809},
{"f_10449:support_2escm",(void*)f_10449},
{"f_5803:support_2escm",(void*)f_5803},
{"f_15629:support_2escm",(void*)f_15629},
{"f_10443:support_2escm",(void*)f_10443},
{"f_15751:support_2escm",(void*)f_15751},
{"f_10439:support_2escm",(void*)f_10439},
{"f_10717:support_2escm",(void*)f_10717},
{"f_10711:support_2escm",(void*)f_10711},
{"f_5848:support_2escm",(void*)f_5848},
{"f_10401:support_2escm",(void*)f_10401},
{"f_5840:support_2escm",(void*)f_5840},
{"f_6094:support_2escm",(void*)f_6094},
{"f_9115:support_2escm",(void*)f_9115},
{"f_5591:support_2escm",(void*)f_5591},
{"f_5834:support_2escm",(void*)f_5834},
{"f_10706:support_2escm",(void*)f_10706},
{"f_10702:support_2escm",(void*)f_10702},
{"f_9139:support_2escm",(void*)f_9139},
{"f_5854:support_2escm",(void*)f_5854},
{"f_5852:support_2escm",(void*)f_5852},
{"f_10759:support_2escm",(void*)f_10759},
{"f_15742:support_2escm",(void*)f_15742},
{"f_10752:support_2escm",(void*)f_10752},
{"f_15746:support_2escm",(void*)f_15746},
{"f_10750:support_2escm",(void*)f_10750},
{"f_6054:support_2escm",(void*)f_6054},
{"f_5888:support_2escm",(void*)f_5888},
{"f_10725:support_2escm",(void*)f_10725},
{"f_15736:support_2escm",(void*)f_15736},
{"f_15734:support_2escm",(void*)f_15734},
{"f_10720:support_2escm",(void*)f_10720},
{"f_6048:support_2escm",(void*)f_6048},
{"f_6046:support_2escm",(void*)f_6046},
{"f_5824:support_2escm",(void*)f_5824},
{"f_11775:support_2escm",(void*)f_11775},
{"f_11781:support_2escm",(void*)f_11781},
{"f_10484:support_2escm",(void*)f_10484},
{"f_11792:support_2escm",(void*)f_11792},
{"f_11692:support_2escm",(void*)f_11692},
{"f_11695:support_2escm",(void*)f_11695},
{"f_11698:support_2escm",(void*)f_11698},
{"f_7641:support_2escm",(void*)f_7641},
{"f_6078:support_2escm",(void*)f_6078},
{"f_15248:support_2escm",(void*)f_15248},
{"f_5342:support_2escm",(void*)f_5342},
{"f_7616:support_2escm",(void*)f_7616},
{"f_7614:support_2escm",(void*)f_7614},
{"f_9945:support_2escm",(void*)f_9945},
{"f_9942:support_2escm",(void*)f_9942},
{"f_11760:support_2escm",(void*)f_11760},
{"f_7677:support_2escm",(void*)f_7677},
{"f_11767:support_2escm",(void*)f_11767},
{"f_11764:support_2escm",(void*)f_11764},
{"f_11661:support_2escm",(void*)f_11661},
{"f_11667:support_2escm",(void*)f_11667},
{"f_15296:support_2escm",(void*)f_15296},
{"f_15291:support_2escm",(void*)f_15291},
{"f_7670:support_2escm",(void*)f_7670},
{"f_7667:support_2escm",(void*)f_7667},
{"f_15788:support_2escm",(void*)f_15788},
{"f_8591:support_2escm",(void*)f_8591},
{"f_11673:support_2escm",(void*)f_11673},
{"f_11704:support_2escm",(void*)f_11704},
{"f_11707:support_2escm",(void*)f_11707},
{"f_11680:support_2escm",(void*)f_11680},
{"f_15779:support_2escm",(void*)f_15779},
{"f_11689:support_2escm",(void*)f_11689},
{"f_11686:support_2escm",(void*)f_11686},
{"f_15276:support_2escm",(void*)f_15276},
{"f_5370:support_2escm",(void*)f_5370},
{"f_5376:support_2escm",(void*)f_5376},
{"f_11716:support_2escm",(void*)f_11716},
{"f_11719:support_2escm",(void*)f_11719},
{"f_11710:support_2escm",(void*)f_11710},
{"f_15261:support_2escm",(void*)f_15261},
{"f_10601:support_2escm",(void*)f_10601},
{"f_12842:support_2escm",(void*)f_12842},
{"f_15099:support_2escm",(void*)f_15099},
{"f_11734:support_2escm",(void*)f_11734},
{"f_11731:support_2escm",(void*)f_11731},
{"f_11638:support_2escm",(void*)f_11638},
{"f_11746:support_2escm",(void*)f_11746},
{"f_11743:support_2escm",(void*)f_11743},
{"f_11740:support_2escm",(void*)f_11740},
{"f_9935:support_2escm",(void*)f_9935},
{"f_11755:support_2escm",(void*)f_11755},
{"f_11752:support_2escm",(void*)f_11752},
{"f_15059:support_2escm",(void*)f_15059},
{"f_15287:support_2escm",(void*)f_15287},
{"f_5627:support_2escm",(void*)f_5627},
{"f_15280:support_2escm",(void*)f_15280},
{"f_10862:support_2escm",(void*)f_10862},
{"f_5611:support_2escm",(void*)f_5611},
{"f_15068:support_2escm",(void*)f_15068},
{"f_15013:support_2escm",(void*)f_15013},
{"f_9433:support_2escm",(void*)f_9433},
{"f_15042:support_2escm",(void*)f_15042},
{"f_5631:support_2escm",(void*)f_5631},
{"f_9444:support_2escm",(void*)f_9444},
{"f_9446:support_2escm",(void*)f_9446},
{"f_11144:support_2escm",(void*)f_11144},
{"f_9582:support_2escm",(void*)f_9582},
{"f_9286:support_2escm",(void*)f_9286},
{"f_11150:support_2escm",(void*)f_11150},
{"f_5652:support_2escm",(void*)f_5652},
{"f_15027:support_2escm",(void*)f_15027},
{"f_5093:support_2escm",(void*)f_5093},
{"f_5684:support_2escm",(void*)f_5684},
{"f_9471:support_2escm",(void*)f_9471},
{"f_9261:support_2escm",(void*)f_9261},
{"f_11170:support_2escm",(void*)f_11170},
{"f_5046:support_2escm",(void*)f_5046},
{"f_11176:support_2escm",(void*)f_11176},
{"f_5675:support_2escm",(void*)f_5675},
{"f_15003:support_2escm",(void*)f_15003},
{"f_5677:support_2escm",(void*)f_5677},
{"f_9236:support_2escm",(void*)f_9236},
{"f_11100:support_2escm",(void*)f_11100},
{"f_5032:support_2escm",(void*)f_5032},
{"f_15032:support_2escm",(void*)f_15032},
{"f_10895:support_2escm",(void*)f_10895},
{"f_10897:support_2escm",(void*)f_10897},
{"f_9545:support_2escm",(void*)f_9545},
{"f_8101:support_2escm",(void*)f_8101},
{"f_8103:support_2escm",(void*)f_8103},
{"f_5061:support_2escm",(void*)f_5061},
{"f_11953:support_2escm",(void*)f_11953},
{"f_11413:support_2escm",(void*)f_11413},
{"f_11416:support_2escm",(void*)f_11416},
{"f_5081:support_2escm",(void*)f_5081},
{"f_5084:support_2escm",(void*)f_5084},
{"f_5087:support_2escm",(void*)f_5087},
{"f_9531:support_2escm",(void*)f_9531},
{"f_9415:support_2escm",(void*)f_9415},
{"f_6277:support_2escm",(void*)f_6277},
{"f_11439:support_2escm",(void*)f_11439},
{"f_5990:support_2escm",(void*)f_5990},
{"f_5992:support_2escm",(void*)f_5992},
{"f_5078:support_2escm",(void*)f_5078},
{"f_9426:support_2escm",(void*)f_9426},
{"f_9555:support_2escm",(void*)f_9555},
{"f_11447:support_2escm",(void*)f_11447},
{"f_11441:support_2escm",(void*)f_11441},
{"f_9557:support_2escm",(void*)f_9557},
{"f_11279:support_2escm",(void*)f_11279},
{"f_11457:support_2escm",(void*)f_11457},
{"f_11454:support_2escm",(void*)f_11454},
{"f_6029:support_2escm",(void*)f_6029},
{"f_6014:support_2escm",(void*)f_6014},
{"f_10817:support_2escm",(void*)f_10817},
{"f_11216:support_2escm",(void*)f_11216},
{"f_8386:support_2escm",(void*)f_8386},
{"f_11478:support_2escm",(void*)f_11478},
{"f_11476:support_2escm",(void*)f_11476},
{"f_6008:support_2escm",(void*)f_6008},
{"f_4987:support_2escm",(void*)f_4987},
{"f_4984:support_2escm",(void*)f_4984},
{"f_6495:support_2escm",(void*)f_6495},
{"f_11224:support_2escm",(void*)f_11224},
{"f_8835:support_2escm",(void*)f_8835},
{"f_8837:support_2escm",(void*)f_8837},
{"f_11484:support_2escm",(void*)f_11484},
{"f_4981:support_2escm",(void*)f_4981},
{"f_5051:support_2escm",(void*)f_5051},
{"f_4919:support_2escm",(void*)f_4919},
{"f_6485:support_2escm",(void*)f_6485},
{"f_8822:support_2escm",(void*)f_8822},
{"f_11497:support_2escm",(void*)f_11497},
{"f_4910:support_2escm",(void*)f_4910},
{"f_8050:support_2escm",(void*)f_8050},
{"f_6281:support_2escm",(void*)f_6281},
{"f_6472:support_2escm",(void*)f_6472},
{"f_4969:support_2escm",(void*)f_4969},
{"f_9087:support_2escm",(void*)f_9087},
{"f_4962:support_2escm",(void*)f_4962},
{"f_8062:support_2escm",(void*)f_8062},
{"f_6462:support_2escm",(void*)f_6462},
{"f_4972:support_2escm",(void*)f_4972},
{"f_5916:support_2escm",(void*)f_5916},
{"f_5336:support_2escm",(void*)f_5336},
{"f_8089:support_2escm",(void*)f_8089},
{"f_7496:support_2escm",(void*)f_7496},
{"f_5900:support_2escm",(void*)f_5900},
{"f_9062:support_2escm",(void*)f_9062},
{"f_8862:support_2escm",(void*)f_8862},
{"f_7487:support_2escm",(void*)f_7487},
{"f_8215:support_2escm",(void*)f_8215},
{"f_8370:support_2escm",(void*)f_8370},
{"f_16106:support_2escm",(void*)f_16106},
{"f_11029:support_2escm",(void*)f_11029},
{"f_4996:support_2escm",(void*)f_4996},
{"f_8128:support_2escm",(void*)f_8128},
{"f_4993:support_2escm",(void*)f_4993},
{"f_4990:support_2escm",(void*)f_4990},
{"f_9224:support_2escm",(void*)f_9224},
{"f_9008:support_2escm",(void*)f_9008},
{"f_9004:support_2escm",(void*)f_9004},
{"f_6753:support_2escm",(void*)f_6753},
{"f_9504:support_2escm",(void*)f_9504},
{"f_9506:support_2escm",(void*)f_9506},
{"f_6780:support_2escm",(void*)f_6780},
{"f_6786:support_2escm",(void*)f_6786},
{"f_9209:support_2escm",(void*)f_9209},
{"f_5029:support_2escm",(void*)f_5029},
{"f_5026:support_2escm",(void*)f_5026},
{"f_8366:support_2escm",(void*)f_8366},
{"f_6724:support_2escm",(void*)f_6724},
{"f_6729:support_2escm",(void*)f_6729},
{"f_6720:support_2escm",(void*)f_6720},
{"f_5014:support_2escm",(void*)f_5014},
{"f_5012:support_2escm",(void*)f_5012},
{"f_5019:support_2escm",(void*)f_5019},
{"f_5017:support_2escm",(void*)f_5017},
{"f_7478:support_2escm",(void*)f_7478},
{"f17665:support_2escm",(void*)f17665},
{"f_7460:support_2escm",(void*)f_7460},
{"f_7163:support_2escm",(void*)f_7163},
{"f_7160:support_2escm",(void*)f_7160},
{"f_7469:support_2escm",(void*)f_7469},
{"f_6749:support_2escm",(void*)f_6749},
{"f_6746:support_2escm",(void*)f_6746},
{"f_8046:support_2escm",(void*)f_8046},
{"f_7151:support_2escm",(void*)f_7151},
{"f_7451:support_2escm",(void*)f_7451},
{"f_7157:support_2escm",(void*)f_7157},
{"f_6739:support_2escm",(void*)f_6739},
{"f_7445:support_2escm",(void*)f_7445},
{"toplevel:support_2escm",(void*)C_support_toplevel},
{"f_5002:support_2escm",(void*)f_5002},
{"f_5005:support_2escm",(void*)f_5005},
{"f_8005:support_2escm",(void*)f_8005},
{"f_4847:support_2escm",(void*)f_4847},
{"f_14085:support_2escm",(void*)f_14085},
{"f_14081:support_2escm",(void*)f_14081},
{"f_6142:support_2escm",(void*)f_6142},
{"f_4842:support_2escm",(void*)f_4842},
{"f_6148:support_2escm",(void*)f_6148},
{"f_6435:support_2escm",(void*)f_6435},
{"f_9692:support_2escm",(void*)f_9692},
{"f_9696:support_2escm",(void*)f_9696},
{"f_6167:support_2escm",(void*)f_6167},
{"f_6169:support_2escm",(void*)f_6169},
{"f_4949:support_2escm",(void*)f_4949},
{"f_9660:support_2escm",(void*)f_9660},
{"f_9666:support_2escm",(void*)f_9666},
{"f_4838:support_2escm",(void*)f_4838},
{"f_4835:support_2escm",(void*)f_4835},
{"f_4832:support_2escm",(void*)f_4832},
{"f_6156:support_2escm",(void*)f_6156},
{"f_6159:support_2escm",(void*)f_6159},
{"f_5691:support_2escm",(void*)f_5691},
{"f_11406:support_2escm",(void*)f_11406},
{"f_11400:support_2escm",(void*)f_11400},
{"f_6406:support_2escm",(void*)f_6406},
{"f_4927:support_2escm",(void*)f_4927},
{"f_13961:support_2escm",(void*)f_13961},
{"f_6210:support_2escm",(void*)f_6210},
{"f_5283:support_2escm",(void*)f_5283},
{"f_6216:support_2escm",(void*)f_6216},
{"f_8025:support_2escm",(void*)f_8025},
{"f_4939:support_2escm",(void*)f_4939},
{"f_4934:support_2escm",(void*)f_4934},
{"f_6201:support_2escm",(void*)f_6201},
{"f_10088:support_2escm",(void*)f_10088},
{"f_7437:support_2escm",(void*)f_7437},
{"f_8017:support_2escm",(void*)f_8017},
{"f_6209:support_2escm",(void*)f_6209},
{"f_8013:support_2escm",(void*)f_8013},
{"f_4903:support_2escm",(void*)f_4903},
{"f_4907:support_2escm",(void*)f_4907},
{"f_7439:support_2escm",(void*)f_7439},
{"f_10098:support_2escm",(void*)f_10098},
{"f_6195:support_2escm",(void*)f_6195},
{"f_5292:support_2escm",(void*)f_5292},
{"f_10062:support_2escm",(void*)f_10062},
{"f_15332:support_2escm",(void*)f_15332},
{"f_10068:support_2escm",(void*)f_10068},
{"f_15321:support_2escm",(void*)f_15321},
{"f_10071:support_2escm",(void*)f_10071},
{"f_15324:support_2escm",(void*)f_15324},
{"f_15327:support_2escm",(void*)f_15327},
{"f_13933:support_2escm",(void*)f_13933},
{"f_6233:support_2escm",(void*)f_6233},
{"f_6230:support_2escm",(void*)f_6230},
{"f_10055:support_2escm",(void*)f_10055},
{"f_10050:support_2escm",(void*)f_10050},
{"f_6239:support_2escm",(void*)f_6239},
{"f_10059:support_2escm",(void*)f_10059},
{"f_9012:support_2escm",(void*)f_9012},
{"f_9014:support_2escm",(void*)f_9014},
{"f_8498:support_2escm",(void*)f_8498},
{"f_8496:support_2escm",(void*)f_8496},
{"f_10027:support_2escm",(void*)f_10027},
{"f_14894:support_2escm",(void*)f_14894},
{"f_6227:support_2escm",(void*)f_6227},
{"f_7740:support_2escm",(void*)f_7740},
{"f_7743:support_2escm",(void*)f_7743},
{"f_7747:support_2escm",(void*)f_7747},
{"f_5279:support_2escm",(void*)f_5279},
{"f_6173:support_2escm",(void*)f_6173},
{"f_5271:support_2escm",(void*)f_5271},
{"f_10001:support_2escm",(void*)f_10001},
{"f_10007:support_2escm",(void*)f_10007},
{"f_15921:support_2escm",(void*)f_15921},
{"f_15925:support_2escm",(void*)f_15925},
{"f_8732:support_2escm",(void*)f_8732},
{"f_14864:support_2escm",(void*)f_14864},
{"f_14868:support_2escm",(void*)f_14868},
{"f_8730:support_2escm",(void*)f_8730},
{"f_14858:support_2escm",(void*)f_14858},
{"f_8757:support_2escm",(void*)f_8757},
{"f_7777:support_2escm",(void*)f_7777},
{"f_7779:support_2escm",(void*)f_7779},
{"f_8788:support_2escm",(void*)f_8788},
{"f_15814:support_2escm",(void*)f_15814},
{"f_5268:support_2escm",(void*)f_5268},
{"f_15961:support_2escm",(void*)f_15961},
{"f_8782:support_2escm",(void*)f_8782},
{"f_7769:support_2escm",(void*)f_7769},
{"f_6796:support_2escm",(void*)f_6796},
{"f_6799:support_2escm",(void*)f_6799},
{"f_5260:support_2escm",(void*)f_5260},
{"f_8774:support_2escm",(void*)f_8774},
{"f_11552:support_2escm",(void*)f_11552},
{"f_11557:support_2escm",(void*)f_11557},
{"f_11559:support_2escm",(void*)f_11559},
{"f_8771:support_2escm",(void*)f_8771},
{"f_15958:support_2escm",(void*)f_15958},
{"f_5950:support_2escm",(void*)f_5950},
{"f_7752:support_2escm",(void*)f_7752},
{"f_5256:support_2escm",(void*)f_5256},
{"f_11525:support_2escm",(void*)f_11525},
{"f_11527:support_2escm",(void*)f_11527},
{"f_5946:support_2escm",(void*)f_5946},
{"f_15903:support_2escm",(void*)f_15903},
{"f_15906:support_2escm",(void*)f_15906},
{"f_16029:support_2escm",(void*)f_16029},
{"f_16026:support_2escm",(void*)f_16026},
{"f_15820:support_2escm",(void*)f_15820},
{"f_8460:support_2escm",(void*)f_8460},
{"f_14805:support_2escm",(void*)f_14805},
{"f_14802:support_2escm",(void*)f_14802},
{"f_16014:support_2escm",(void*)f_16014},
{"f_8894:support_2escm",(void*)f_8894},
{"f_13409:support_2escm",(void*)f_13409},
{"f_13405:support_2escm",(void*)f_13405},
{"f_11548:support_2escm",(void*)f_11548},
{"f_8892:support_2escm",(void*)f_8892},
{"f_16042:support_2escm",(void*)f_16042},
{"f_15886:support_2escm",(void*)f_15886},
{"f_16037:support_2escm",(void*)f_16037},
{"f_16066:support_2escm",(void*)f_16066},
{"f_11537:support_2escm",(void*)f_11537},
{"f_5233:support_2escm",(void*)f_5233},
{"f_14839:support_2escm",(void*)f_14839},
{"f_16086:support_2escm",(void*)f_16086},
{"f_15128:support_2escm",(void*)f_15128},
{"f_15120:support_2escm",(void*)f_15120},
{"f_15843:support_2escm",(void*)f_15843},
{"f_15111:support_2escm",(void*)f_15111},
{"f_15986:support_2escm",(void*)f_15986},
{"f_15982:support_2escm",(void*)f_15982},
{"f_15143:support_2escm",(void*)f_15143},
{"f_15146:support_2escm",(void*)f_15146},
{"f_15140:support_2escm",(void*)f_15140},
{"f_15977:support_2escm",(void*)f_15977},
{"f_15973:support_2escm",(void*)f_15973},
{"f_15134:support_2escm",(void*)f_15134},
{"f_10555:support_2escm",(void*)f_10555},
{"f_15137:support_2escm",(void*)f_15137},
{"f_8630:support_2escm",(void*)f_8630},
{"f_15856:support_2escm",(void*)f_15856},
{"f_15859:support_2escm",(void*)f_15859},
{"f_10564:support_2escm",(void*)f_10564},
{"f_15169:support_2escm",(void*)f_15169},
{"f_15800:support_2escm",(void*)f_15800},
{"f_15803:support_2escm",(void*)f_15803},
{"f_15804:support_2escm",(void*)f_15804},
{"f_15150:support_2escm",(void*)f_15150},
{"f_10570:support_2escm",(void*)f_10570},
{"f_15158:support_2escm",(void*)f_15158},
{"f_15154:support_2escm",(void*)f_15154},
{"f_8616:support_2escm",(void*)f_8616},
{"f_15832:support_2escm",(void*)f_15832},
{"f_15835:support_2escm",(void*)f_15835},
{"f_15838:support_2escm",(void*)f_15838},
{"f_15189:support_2escm",(void*)f_15189},
{"f_15183:support_2escm",(void*)f_15183},
{"f_9785:support_2escm",(void*)f_9785},
{"f_15179:support_2escm",(void*)f_15179},
{"f_10599:support_2escm",(void*)f_10599},
{"f_15176:support_2escm",(void*)f_15176},
{"f_15195:support_2escm",(void*)f_15195},
{"f_12873:support_2escm",(void*)f_12873},
{"f_12879:support_2escm",(void*)f_12879},
{"f_6358:support_2escm",(void*)f_6358},
{"f_11307:support_2escm",(void*)f_11307},
{"f_6136:support_2escm",(void*)f_6136},
{"f_9716:support_2escm",(void*)f_9716},
{"f_9710:support_2escm",(void*)f_9710},
{"f_6131:support_2escm",(void*)f_6131},
{"f_12883:support_2escm",(void*)f_12883},
{"f_12887:support_2escm",(void*)f_12887},
{"f_10528:support_2escm",(void*)f_10528},
{"f_10530:support_2escm",(void*)f_10530},
{"f_11993:support_2escm",(void*)f_11993},
{"f_11996:support_2escm",(void*)f_11996},
{"f_6109:support_2escm",(void*)f_6109},
{"f_5207:support_2escm",(void*)f_5207},
{"f_5204:support_2escm",(void*)f_5204},
{"f_5201:support_2escm",(void*)f_5201},
{"f_6104:support_2escm",(void*)f_6104},
{"f_10735:support_2escm",(void*)f_10735},
{"f_6126:support_2escm",(void*)f_6126},
{"f_6127:support_2escm",(void*)f_6127},
{"f_5227:support_2escm",(void*)f_5227},
{"f_5224:support_2escm",(void*)f_5224},
{"f_9761:support_2escm",(void*)f_9761},
{"f_9765:support_2escm",(void*)f_9765},
{"f_6123:support_2escm",(void*)f_6123},
{"f_12811:support_2escm",(void*)f_12811},
{"f_7983:support_2escm",(void*)f_7983},
{"f_15483:support_2escm",(void*)f_15483},
{"f_15486:support_2escm",(void*)f_15486},
{"f_15525:support_2escm",(void*)f_15525},
{"f_7962:support_2escm",(void*)f_7962},
{"f_12805:support_2escm",(void*)f_12805},
{"f_15460:support_2escm",(void*)f_15460},
{"f_15463:support_2escm",(void*)f_15463},
{"f_6387:support_2escm",(void*)f_6387},
{"f_12855:support_2escm",(void*)f_12855},
{"f_12824:support_2escm",(void*)f_12824},
{"f_15445:support_2escm",(void*)f_15445},
{"f_6672:support_2escm",(void*)f_6672},
{"f_11938:support_2escm",(void*)f_11938},
{"f_15421:support_2escm",(void*)f_15421},
{"f_16296:support_2escm",(void*)f_16296},
{"f_7908:support_2escm",(void*)f_7908},
{"f_15105:support_2escm",(void*)f_15105},
{"f_16280:support_2escm",(void*)f_16280},
{"f_16282:support_2escm",(void*)f_16282},
{"f_16289:support_2escm",(void*)f_16289},
{"f_14184:support_2escm",(void*)f_14184},
{"f_6669:support_2escm",(void*)f_6669},
{"f_6665:support_2escm",(void*)f_6665},
{"f_10964:support_2escm",(void*)f_10964},
{"f_6613:support_2escm",(void*)f_6613},
{"f_6617:support_2escm",(void*)f_6617},
{"f_16258:support_2escm",(void*)f_16258},
{"f_16243:support_2escm",(void*)f_16243},
{"f_10656:support_2escm",(void*)f_10656},
{"f_16276:support_2escm",(void*)f_16276},
{"f_16273:support_2escm",(void*)f_16273},
{"f_16270:support_2escm",(void*)f_16270},
{"f_10990:support_2escm",(void*)f_10990},
{"f_10664:support_2escm",(void*)f_10664},
{"f_16264:support_2escm",(void*)f_16264},
{"f_16267:support_2escm",(void*)f_16267},
{"f_16212:support_2escm",(void*)f_16212},
{"f_16216:support_2escm",(void*)f_16216},
{"f_16200:support_2escm",(void*)f_16200},
{"f_16233:support_2escm",(void*)f_16233},
{"f_14109:support_2escm",(void*)f_14109},
{"f_13359:support_2escm",(void*)f_13359},
{"f_16228:support_2escm",(void*)f_16228},
{"f_13365:support_2escm",(void*)f_13365},
{"f_10909:support_2escm",(void*)f_10909},
{"f_6338:support_2escm",(void*)f_6338},
{"f_10903:support_2escm",(void*)f_10903},
{"f_5192:support_2escm",(void*)f_5192},
{"f_10913:support_2escm",(void*)f_10913},
{"f_5186:support_2escm",(void*)f_5186},
{"f_5183:support_2escm",(void*)f_5183},
{"f_5180:support_2escm",(void*)f_5180},
{"f_5189:support_2escm",(void*)f_5189},
{"f_13399:support_2escm",(void*)f_13399},
{"f_14989:support_2escm",(void*)f_14989},
{"f_13442:support_2escm",(void*)f_13442},
{"f_10639:support_2escm",(void*)f_10639},
{"f_10635:support_2escm",(void*)f_10635},
{"f_10936:support_2escm",(void*)f_10936},
{"f_10648:support_2escm",(void*)f_10648},
{"f_8609:support_2escm",(void*)f_8609},
{"f_8606:support_2escm",(void*)f_8606},
{"f_10642:support_2escm",(void*)f_10642},
{"f_8602:support_2escm",(void*)f_8602},
{"f_10947:support_2escm",(void*)f_10947},
{"f_14991:support_2escm",(void*)f_14991},
{"f_10956:support_2escm",(void*)f_10956},
{"f_10953:support_2escm",(void*)f_10953},
{"f_10626:support_2escm",(void*)f_10626},
{"f_10674:support_2escm",(void*)f_10674},
{"f_6334:support_2escm",(void*)f_6334},
{"f_12011:support_2escm",(void*)f_12011},
{"f_7072:support_2escm",(void*)f_7072},
{"f_5163:support_2escm",(void*)f_5163},
{"f_7078:support_2escm",(void*)f_7078},
{"f_13377:support_2escm",(void*)f_13377},
{"f_8188:support_2escm",(void*)f_8188},
{"f_7061:support_2escm",(void*)f_7061},
{"f_13387:support_2escm",(void*)f_13387},
{"f_14903:support_2escm",(void*)f_14903},
{"f_7048:support_2escm",(void*)f_7048},
{"f_14933:support_2escm",(void*)f_14933},
{"f_10820:support_2escm",(void*)f_10820},
{"f_5153:support_2escm",(void*)f_5153},
{"f_14914:support_2escm",(void*)f_14914},
{"f_10836:support_2escm",(void*)f_10836},
{"f_5145:support_2escm",(void*)f_5145},
{"f_5148:support_2escm",(void*)f_5148},
{"f_9728:support_2escm",(void*)f_9728},
{"f_9722:support_2escm",(void*)f_9722},
{"f_11202:support_2escm",(void*)f_11202},
{"f_9735:support_2escm",(void*)f_9735},
{"f_9732:support_2escm",(void*)f_9732},
{"f_10125:support_2escm",(void*)f_10125},
{"f_9740:support_2escm",(void*)f_9740},
{"f_10136:support_2escm",(void*)f_10136},
{"f_10144:support_2escm",(void*)f_10144},
{"f_12088:support_2escm",(void*)f_12088},
{"f_14647:support_2escm",(void*)f_14647},
{"f_6549:support_2escm",(void*)f_6549},
{"f_10152:support_2escm",(void*)f_10152},
{"f_6535:support_2escm",(void*)f_6535},
{"f_8992:support_2escm",(void*)f_8992},
{"f_6531:support_2escm",(void*)f_6531},
{"f_10165:support_2escm",(void*)f_10165},
{"f_10167:support_2escm",(void*)f_10167},
{"f_5125:support_2escm",(void*)f_5125},
{"f_5127:support_2escm",(void*)f_5127},
{"f_6561:support_2escm",(void*)f_6561},
{"f_6567:support_2escm",(void*)f_6567},
{"f_8995:support_2escm",(void*)f_8995},
{"f_6553:support_2escm",(void*)f_6553},
{"f_8190:support_2escm",(void*)f_8190},
{"f_14945:support_2escm",(void*)f_14945},
{"f_6571:support_2escm",(void*)f_6571},
{"f_12035:support_2escm",(void*)f_12035},
{"f_14651:support_2escm",(void*)f_14651},
{"f_14653:support_2escm",(void*)f_14653},
{"f_7939:support_2escm",(void*)f_7939},
{"f_9388:support_2escm",(void*)f_9388},
{"f_9392:support_2escm",(void*)f_9392},
{"f_5704:support_2escm",(void*)f_5704},
{"f_14693:support_2escm",(void*)f_14693},
{"f_8919:support_2escm",(void*)f_8919},
{"f_10100:support_2escm",(void*)f_10100},
{"f_9343:support_2escm",(void*)f_9343},
{"f_6508:support_2escm",(void*)f_6508},
{"f_5716:support_2escm",(void*)f_5716},
{"f_12061:support_2escm",(void*)f_12061},
{"f_9876:support_2escm",(void*)f_9876},
{"f_5747:support_2escm",(void*)f_5747},
{"f_9884:support_2escm",(void*)f_9884},
{"f_6518:support_2escm",(void*)f_6518},
{"f_9374:support_2escm",(void*)f_9374},
{"f_5735:support_2escm",(void*)f_5735},
{"f_5488:support_2escm",(void*)f_5488},
{"f_11012:support_2escm",(void*)f_11012},
{"f_5763:support_2escm",(void*)f_5763},
{"f_5761:support_2escm",(void*)f_5761},
{"f_12967:support_2escm",(void*)f_12967},
{"f_9863:support_2escm",(void*)f_9863},
{"f_11069:support_2escm",(void*)f_11069},
{"f_15238:support_2escm",(void*)f_15238},
{"f_13807:support_2escm",(void*)f_13807},
{"f_12973:support_2escm",(void*)f_12973},
{"f_16311:support_2escm",(void*)f_16311},
{"f_16314:support_2escm",(void*)f_16314},
{"f_12977:support_2escm",(void*)f_12977},
{"f_13010:support_2escm",(void*)f_13010},
{"f_15222:support_2escm",(void*)f_15222},
{"f_15224:support_2escm",(void*)f_15224},
{"f_5789:support_2escm",(void*)f_5789},
{"f_13813:support_2escm",(void*)f_13813},
{"f_13817:support_2escm",(void*)f_13817},
{"f_7508:support_2escm",(void*)f_7508},
{"f_7506:support_2escm",(void*)f_7506},
{"f_11051:support_2escm",(void*)f_11051},
{"f_7000:support_2escm",(void*)f_7000},
{"f_5118:support_2escm",(void*)f_5118},
{"f_5115:support_2escm",(void*)f_5115},
{"f_7544:support_2escm",(void*)f_7544},
{"f_5111:support_2escm",(void*)f_5111},
{"f_8299:support_2escm",(void*)f_8299},
{"f_7547:support_2escm",(void*)f_7547},
{"f_11888:support_2escm",(void*)f_11888},
{"f_12912:support_2escm",(void*)f_12912},
{"f_5109:support_2escm",(void*)f_5109},
{"f_5102:support_2escm",(void*)f_5102},
{"f_5135:support_2escm",(void*)f_5135},
{"f_12918:support_2escm",(void*)f_12918},
{"f_5131:support_2escm",(void*)f_5131},
{"f_5134:support_2escm",(void*)f_5134},
{"f_7529:support_2escm",(void*)f_7529},
{"f_5457:support_2escm",(void*)f_5457},
{"f_7514:support_2escm",(void*)f_7514},
{"f_11870:support_2escm",(void*)f_11870},
{"f_12943:support_2escm",(void*)f_12943},
{"f_5476:support_2escm",(void*)f_5476},
{"f_15352:support_2escm",(void*)f_15352},
{"f_15356:support_2escm",(void*)f_15356},
{"f_11818:support_2escm",(void*)f_11818},
{"f_5463:support_2escm",(void*)f_5463},
{"f_12924:support_2escm",(void*)f_12924},
{"f_5466:support_2escm",(void*)f_5466},
{"f_5478:support_2escm",(void*)f_5478},
{"f_15899:support_2escm",(void*)f_15899},
{"f_12955:support_2escm",(void*)f_12955},
{"f_16120:support_2escm",(void*)f_16120},
{"f_8301:support_2escm",(void*)f_8301},
{"f_12934:support_2escm",(void*)f_12934},
{"f_5494:support_2escm",(void*)f_5494},
{"f_16116:support_2escm",(void*)f_16116},
{"f_5468:support_2escm",(void*)f_5468},
{"f_15876:support_2escm",(void*)f_15876},
{"f_16114:support_2escm",(void*)f_16114},
{"f_5486:support_2escm",(void*)f_5486},
{"f_10259:support_2escm",(void*)f_10259},
{"f_15366:support_2escm",(void*)f_15366},
{"f_11802:support_2escm",(void*)f_11802},
{"f_16141:support_2escm",(void*)f_16141},
{"f_8326:support_2escm",(void*)f_8326},
{"f_15314:support_2escm",(void*)f_15314},
{"f_11855:support_2escm",(void*)f_11855},
{"f_7838:support_2escm",(void*)f_7838},
{"f_6963:support_2escm",(void*)f_6963},
{"f_15300:support_2escm",(void*)f_15300},
{"f_15308:support_2escm",(void*)f_15308},
{"f_11824:support_2escm",(void*)f_11824},
{"f_9316:support_2escm",(void*)f_9316},
{"f_9318:support_2escm",(void*)f_9318},
{"f_16162:support_2escm",(void*)f_16162},
{"f_7813:support_2escm",(void*)f_7813},
{"f_6870:support_2escm",(void*)f_6870},
{"f_16156:support_2escm",(void*)f_16156},
{"f_6879:support_2escm",(void*)f_6879},
{"f_7804:support_2escm",(void*)f_7804},
{"f_6876:support_2escm",(void*)f_6876},
{"f_6873:support_2escm",(void*)f_6873},
{"f_16188:support_2escm",(void*)f_16188},
{"f_6860:support_2escm",(void*)f_6860},
{"f_16184:support_2escm",(void*)f_16184},
{"f_7874:support_2escm",(void*)f_7874},
{"f_10264:support_2escm",(void*)f_10264},
{"f_6851:support_2escm",(void*)f_6851},
{"f_16173:support_2escm",(void*)f_16173},
{"f_6855:support_2escm",(void*)f_6855},
{"f_10276:support_2escm",(void*)f_10276},
{"f_10274:support_2escm",(void*)f_10274},
{"f_16341:support_2escm",(void*)f_16341},
{"f_10240:support_2escm",(void*)f_10240},
{"f_9185:support_2escm",(void*)f_9185},
{"f_6910:support_2escm",(void*)f_6910},
{"f_11830:support_2escm",(void*)f_11830},
{"f_16194:support_2escm",(void*)f_16194},
{"f_5518:support_2escm",(void*)f_5518},
{"f_10371:support_2escm",(void*)f_10371},
{"f_10377:support_2escm",(void*)f_10377},
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
S|  map		30
S|  sprintf		4
S|  fprintf		5
S|  printf		19
S|  for-each		15
o|eliminated procedure checks: 438 
o|specializations:
o|  1 (eqv? (not float) *)
o|  1 (zero? number)
o|  1 (length list)
o|  4 (= fixnum fixnum)
o|  1 (assq * (list-of pair))
o|  1 (current-output-port)
o|  1 (second (pair * pair))
o|  3 (first pair)
o|  5 (cddr (pair * pair))
o|  1 (caddr (pair * (pair * pair)))
o|  356 (eqv? * (not float))
o|  1 (##sys#call-with-values (procedure () *) *)
o|  1 (cadr (pair * pair))
o|  1 (current-input-port)
o|  5 (char=? char char)
o|  3 (memq * list)
o|  1 (>= fixnum fixnum)
o|  3 (< fixnum fixnum)
o|  2 (current-error-port)
o|  8 (##sys#check-list (or pair list) *)
o|  28 (##sys#check-output-port * * *)
o|  32 (cdr pair)
o|  28 (car pair)
(o e)|safe calls: 1532 
(o e)|assignments to immediate values: 3 
o|safe globals: (##compiler#bomb ##compiler#disabled-warnings ##compiler#debugging-chicken ##compiler#compiler-cleanup-hook constant25 constant22) 
o|Removed `not' forms: 7 
o|removed side-effect free assignment to unused variable: constant22 
o|inlining procedure: k4849 
o|inlining procedure: k4849 
o|inlining procedure: k4877 
o|inlining procedure: k4877 
o|inlining procedure: k4908 
o|inlining procedure: k4941 
o|contracted procedure: "(support.scm:69) g5158" 
o|propagated global variable: out6165 ##sys#standard-output 
o|substituted constant variable: a4923 
o|substituted constant variable: a4924 
o|inlining procedure: k4941 
o|inlining procedure: k4908 
o|propagated global variable: out7781 ##compiler#collected-debugging-output 
o|substituted constant variable: a4965 
o|substituted constant variable: a4966 
o|propagated global variable: out7781 ##compiler#collected-debugging-output 
o|inlining procedure: k4976 
o|inlining procedure: k4976 
o|propagated global variable: out114118 ##compiler#collected-debugging-output 
o|substituted constant variable: a5022 
o|substituted constant variable: a5023 
o|inlining procedure: k5037 
o|inlining procedure: k5037 
o|inlining procedure: k5053 
o|inlining procedure: k5053 
o|inlining procedure: k5073 
o|inlining procedure: k5073 
o|inlining procedure: k5155 
o|inlining procedure: k5155 
o|substituted constant variable: a5176 
o|substituted constant variable: a5177 
o|substituted constant variable: a5197 
o|substituted constant variable: a5198 
o|inlining procedure: k5235 
o|inlining procedure: k5235 
o|inlining procedure: k5294 
o|inlining procedure: k5294 
o|inlining procedure: k5315 
o|inlining procedure: k5315 
o|inlining procedure: k5344 
o|inlining procedure: k5344 
o|inlining procedure: k5378 
o|inlining procedure: k5378 
o|inlining procedure: k5406 
o|inlining procedure: k5406 
o|substituted constant variable: a5425 
o|substituted constant variable: a5426 
o|inlining procedure: k5436 
o|inlining procedure: k5436 
o|substituted constant variable: a5459 
o|substituted constant variable: a5460 
o|inlining procedure: k5496 
o|inlining procedure: k5496 
o|inlining procedure: k5550 
o|inlining procedure: k5550 
o|inlining procedure: k5595 
o|inlining procedure: k5595 
o|substituted constant variable: a5602 
o|substituted constant variable: a5604 
o|inlining procedure: k5617 
o|inlining procedure: k5617 
o|substituted constant variable: a5621 
o|substituted constant variable: a5623 
o|substituted constant variable: a5625 
o|inlining procedure: k5632 
o|inlining procedure: k5657 
o|inlining procedure: k5657 
o|substituted constant variable: a5666 
o|substituted constant variable: a5670 
o|inlining procedure: k5632 
o|inlining procedure: k5693 
o|propagated global variable: r569416417 ##sys#standard-input 
o|inlining procedure: k5693 
o|inlining procedure: k5708 
o|inlining procedure: k5708 
o|inlining procedure: k5737 
o|inlining procedure: k5737 
o|inlining procedure: k5749 
o|inlining procedure: k5749 
o|inlining procedure: k5769 
o|inlining procedure: k5769 
o|inlining procedure: k5811 
o|inlining procedure: k5811 
o|inlining procedure: k5859 
o|inlining procedure: k5859 
o|inlining procedure: k5871 
o|inlining procedure: k5871 
o|inlining procedure: k5883 
o|inlining procedure: k5883 
o|inlining procedure: k5895 
o|inlining procedure: k5895 
o|inlining procedure: k5904 
o|inlining procedure: k5904 
o|inlining procedure: k5921 
o|inlining procedure: k5921 
o|inlining procedure: k5933 
o|inlining procedure: k5933 
o|inlining procedure: k5951 
o|inlining procedure: k5951 
o|inlining procedure: k5963 
o|inlining procedure: k5963 
o|inlining procedure: k5975 
o|inlining procedure: k5975 
o|inlining procedure: k5997 
o|inlining procedure: k5997 
o|inlining procedure: k6009 
o|inlining procedure: k6009 
o|inlining procedure: k6018 
o|inlining procedure: k6018 
o|inlining procedure: k6056 
o|inlining procedure: k6056 
o|inlining procedure: k6069 
o|inlining procedure: k6069 
o|inlining procedure: k6110 
o|inlining procedure: k6110 
o|inlining procedure: k6154 
o|inlining procedure: k6154 
o|inlining procedure: k6174 
o|inlining procedure: k6174 
o|merged explicitly consed rest parameter: args485501 
o|consed rest parameter at call site: tmp24371 1 
o|inlining procedure: k6241 
o|inlining procedure: k6241 
o|inlining procedure: k6256 
o|inlining procedure: k6256 
o|inlining procedure: k6336 
o|inlining procedure: k6464 
o|contracted procedure: "(support.scm:368) g629636" 
o|contracted procedure: "(support.scm:370) g639640" 
o|inlining procedure: k6464 
o|propagated global variable: g635637 ##compiler#internal-bindings 
o|inlining procedure: k6487 
o|contracted procedure: "(support.scm:362) g582589" 
o|inlining procedure: k6407 
o|contracted procedure: "(support.scm:366) g606607" 
o|inlining procedure: k6407 
o|contracted procedure: "(support.scm:364) g592593" 
o|inlining procedure: k6487 
o|propagated global variable: g588590 extended-bindings 
o|inlining procedure: k6510 
o|contracted procedure: "(support.scm:356) g535542" 
o|inlining procedure: k6359 
o|contracted procedure: "(support.scm:360) g559560" 
o|inlining procedure: k6359 
o|contracted procedure: "(support.scm:358) g545546" 
o|inlining procedure: k6510 
o|propagated global variable: g541543 standard-bindings 
o|inlining procedure: k6336 
o|inlining procedure: k6536 
o|inlining procedure: k6536 
o|inlining procedure: k6554 
o|inlining procedure: k6554 
o|inlining procedure: k6572 
o|inlining procedure: k6584 
o|inlining procedure: k6584 
o|inlining procedure: k6572 
o|inlining procedure: k6618 
o|inlining procedure: k6618 
o|inlining procedure: k6673 
o|inlining procedure: k6673 
o|inlining procedure: k6725 
o|inlining procedure: k6725 
o|inlining procedure: k6750 
o|inlining procedure: k6750 
o|propagated global variable: out733737 ##sys#standard-output 
o|substituted constant variable: a6792 
o|substituted constant variable: a6793 
o|inlining procedure: k6788 
o|inlining procedure: k6819 
o|inlining procedure: k6819 
o|propagated global variable: out733737 ##sys#standard-output 
o|inlining procedure: k6788 
o|inlining procedure: k6862 
o|inlining procedure: k6862 
o|propagated global variable: out942946 ##sys#standard-output 
o|substituted constant variable: a6890 
o|substituted constant variable: a6891 
o|propagated global variable: out942946 ##sys#standard-output 
o|propagated global variable: out935939 ##sys#standard-output 
o|substituted constant variable: a6906 
o|substituted constant variable: a6907 
o|propagated global variable: out935939 ##sys#standard-output 
o|propagated global variable: out894898 ##sys#standard-output 
o|substituted constant variable: a6922 
o|substituted constant variable: a6923 
o|contracted procedure: "(support.scm:490) g902903" 
o|contracted procedure: "(support.scm:490) g899900" 
o|propagated global variable: out894898 ##sys#standard-output 
o|propagated global variable: out908912 ##sys#standard-output 
o|substituted constant variable: a6959 
o|substituted constant variable: a6960 
o|inlining procedure: k6952 
o|contracted procedure: "(support.scm:492) g916917" 
o|contracted procedure: "(support.scm:492) g913914" 
o|propagated global variable: out908912 ##sys#standard-output 
o|inlining procedure: k6952 
o|propagated global variable: out922926 ##sys#standard-output 
o|substituted constant variable: a6996 
o|substituted constant variable: a6997 
o|contracted procedure: "(support.scm:494) g930931" 
o|contracted procedure: "(support.scm:494) g927928" 
o|propagated global variable: out922926 ##sys#standard-output 
o|inlining procedure: k7050 
o|propagated global variable: out847851 ##sys#standard-output 
o|substituted constant variable: a7074 
o|substituted constant variable: a7075 
o|substituted constant variable: names769 
o|propagated global variable: out847851 ##sys#standard-output 
o|inlining procedure: k7094 
o|inlining procedure: k7094 
o|inlining procedure: k7107 
o|inlining procedure: k7107 
o|inlining procedure: k7117 
o|inlining procedure: k7117 
o|propagated global variable: out878882 ##sys#standard-output 
o|substituted constant variable: a7153 
o|substituted constant variable: a7154 
o|inlining procedure: k7143 
o|propagated global variable: out878882 ##sys#standard-output 
o|inlining procedure: k7143 
o|inlining procedure: k7185 
o|inlining procedure: k7185 
o|substituted constant variable: a7201 
o|substituted constant variable: a7203 
o|inlining procedure: k7207 
o|inlining procedure: k7207 
o|inlining procedure: k7219 
o|inlining procedure: k7219 
o|inlining procedure: k7231 
o|inlining procedure: k7231 
o|inlining procedure: k7243 
o|inlining procedure: k7243 
o|substituted constant variable: a7250 
o|substituted constant variable: a7252 
o|substituted constant variable: a7254 
o|substituted constant variable: a7256 
o|substituted constant variable: a7258 
o|substituted constant variable: a7260 
o|substituted constant variable: a7262 
o|substituted constant variable: a7264 
o|substituted constant variable: a7266 
o|substituted constant variable: a7268 
o|substituted constant variable: a7270 
o|substituted constant variable: a7272 
o|substituted constant variable: a7274 
o|inlining procedure: k7278 
o|inlining procedure: k7278 
o|inlining procedure: k7290 
o|inlining procedure: k7290 
o|inlining procedure: k7302 
o|inlining procedure: k7302 
o|inlining procedure: k7314 
o|inlining procedure: k7314 
o|inlining procedure: k7326 
o|inlining procedure: k7326 
o|inlining procedure: k7338 
o|inlining procedure: k7338 
o|inlining procedure: k7350 
o|inlining procedure: k7350 
o|inlining procedure: k7362 
o|inlining procedure: k7362 
o|inlining procedure: k7374 
o|inlining procedure: k7374 
o|inlining procedure: k7386 
o|inlining procedure: k7386 
o|substituted constant variable: a7393 
o|substituted constant variable: a7395 
o|substituted constant variable: a7397 
o|substituted constant variable: a7399 
o|substituted constant variable: a7401 
o|substituted constant variable: a7403 
o|substituted constant variable: a7405 
o|substituted constant variable: a7407 
o|substituted constant variable: a7409 
o|substituted constant variable: a7411 
o|substituted constant variable: a7413 
o|substituted constant variable: a7415 
o|substituted constant variable: a7417 
o|substituted constant variable: a7419 
o|substituted constant variable: a7421 
o|substituted constant variable: a7423 
o|substituted constant variable: a7425 
o|substituted constant variable: a7427 
o|substituted constant variable: a7429 
o|substituted constant variable: a7431 
o|substituted constant variable: a7433 
o|inlining procedure: k7050 
o|contracted procedure: "(support.scm:518) g10171018" 
o|contracted procedure: "(support.scm:519) g10241025" 
o|inlining procedure: k7549 
o|inlining procedure: k7549 
o|inlining procedure: k7569 
o|inlining procedure: k7569 
o|inlining procedure: k7585 
o|contracted procedure: "(support.scm:529) g10501051" 
o|inlining procedure: k7618 
o|inlining procedure: k7618 
o|inlining procedure: k7585 
o|inlining procedure: k7662 
o|inlining procedure: k7662 
o|inlining procedure: k7681 
o|inlining procedure: k7681 
o|inlining procedure: k7694 
o|contracted procedure: "(support.scm:545) g10871088" 
o|inlining procedure: k7781 
o|inlining procedure: k7781 
o|inlining procedure: k7815 
o|contracted procedure: "(support.scm:547) g11001109" 
o|inlining procedure: k7729 
o|inlining procedure: k7729 
o|inlining procedure: k7815 
o|inlining procedure: k7694 
o|contracted procedure: "(support.scm:554) g11491150" 
o|inlining procedure: k7883 
o|contracted procedure: "(support.scm:556) g11541155" 
o|inlining procedure: k7883 
o|inlining procedure: k7941 
o|contracted procedure: "(support.scm:563) g11671168" 
o|contracted procedure: "(support.scm:567) g11721173" 
o|inlining procedure: k7941 
o|contracted procedure: "(support.scm:569) g11771178" 
o|inlining procedure: k8067 
o|contracted procedure: "(support.scm:578) g11841185" 
o|inlining procedure: k8105 
o|inlining procedure: k8105 
o|inlining procedure: k8137 
o|inlining procedure: k8137 
o|inlining procedure: k8067 
o|contracted procedure: "(support.scm:583) g12191220" 
o|inlining procedure: k8192 
o|inlining procedure: k8192 
o|inlining procedure: k8227 
o|contracted procedure: "(support.scm:585) g12501251" 
o|inlining procedure: k8227 
o|contracted procedure: "(support.scm:587) g12551256" 
o|inlining procedure: k8267 
o|contracted procedure: "(support.scm:589) g12631264" 
o|inlining procedure: k8303 
o|inlining procedure: k8303 
o|inlining procedure: k8267 
o|contracted procedure: "(support.scm:594) g12951296" 
o|inlining procedure: k8399 
o|contracted procedure: "(support.scm:600) g13121313" 
o|inlining procedure: k8437 
o|inlining procedure: k8437 
o|inlining procedure: k8399 
o|contracted procedure: "(support.scm:602) g13431344" 
o|inlining procedure: k8500 
o|inlining procedure: k8500 
o|contracted procedure: "(support.scm:605) g13761377" 
o|inlining procedure: k8568 
o|inlining procedure: k8568 
o|inlining procedure: k8604 
o|inlining procedure: k8614 
o|inlining procedure: k8614 
o|inlining procedure: k8604 
o|contracted procedure: "(support.scm:607) g13851386" 
o|substituted constant variable: a8636 
o|inlining procedure: k8640 
o|inlining procedure: k8640 
o|inlining procedure: k8652 
o|inlining procedure: k8652 
o|substituted constant variable: a8659 
o|substituted constant variable: a8661 
o|substituted constant variable: a8663 
o|substituted constant variable: a8665 
o|substituted constant variable: a8667 
o|substituted constant variable: a8669 
o|substituted constant variable: a8674 
o|substituted constant variable: a8676 
o|substituted constant variable: a8678 
o|substituted constant variable: a8680 
o|substituted constant variable: a8685 
o|substituted constant variable: a8687 
o|substituted constant variable: a8689 
o|substituted constant variable: a8691 
o|substituted constant variable: a8693 
o|substituted constant variable: a8698 
o|substituted constant variable: a8700 
o|substituted constant variable: a8702 
o|substituted constant variable: a8704 
o|substituted constant variable: a8709 
o|substituted constant variable: a8711 
o|contracted procedure: "(support.scm:617) g14201421" 
o|inlining procedure: k8734 
o|inlining procedure: k8734 
o|contracted procedure: "(support.scm:525) g10381039" 
o|inlining procedure: k8772 
o|inlining procedure: k8772 
o|inlining procedure: k8814 
o|inlining procedure: k8839 
o|inlining procedure: k8839 
o|inlining procedure: k8814 
o|inlining procedure: k8896 
o|inlining procedure: k8896 
o|inlining procedure: k8927 
o|inlining procedure: k8927 
o|inlining procedure: k8945 
o|inlining procedure: k8945 
o|inlining procedure: k8962 
o|inlining procedure: k8962 
o|inlining procedure: k8974 
o|inlining procedure: k9016 
o|inlining procedure: k9016 
o|inlining procedure: k9064 
o|inlining procedure: k9064 
o|inlining procedure: k8974 
o|inlining procedure: k9123 
o|inlining procedure: k9123 
o|inlining procedure: k9157 
o|inlining procedure: k9187 
o|inlining procedure: k9187 
o|inlining procedure: k9157 
o|inlining procedure: k9263 
o|inlining procedure: k9263 
o|inlining procedure: k9294 
o|inlining procedure: k9320 
o|inlining procedure: k9320 
o|inlining procedure: k9294 
o|inlining procedure: k9360 
o|inlining procedure: k9376 
o|inlining procedure: k9376 
o|inlining procedure: k9360 
o|inlining procedure: k9448 
o|inlining procedure: k9448 
o|inlining procedure: k9483 
o|inlining procedure: k9508 
o|inlining procedure: k9508 
o|inlining procedure: k9483 
o|inlining procedure: k9559 
o|inlining procedure: k9559 
o|substituted constant variable: a9594 
o|substituted constant variable: a9596 
o|inlining procedure: k9600 
o|inlining procedure: k9600 
o|substituted constant variable: a9613 
o|substituted constant variable: a9615 
o|substituted constant variable: a9617 
o|substituted constant variable: a9619 
o|substituted constant variable: a9621 
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
o|inlining procedure: k9647 
o|inlining procedure: k9647 
o|substituted constant variable: a9654 
o|substituted constant variable: a9656 
o|substituted constant variable: a9658 
o|contracted procedure: "(support.scm:627) g14671468" 
o|contracted procedure: "(support.scm:626) g14641465" 
o|contracted procedure: "(support.scm:625) g14611462" 
o|inlining procedure: k9668 
o|inlining procedure: k9668 
o|contracted procedure: "(support.scm:680) g17791780" 
o|contracted procedure: "(support.scm:695) g18281829" 
o|contracted procedure: "(support.scm:697) g18331834" 
o|inlining procedure: k9783 
o|inlining procedure: k9783 
o|contracted procedure: "(support.scm:701) g18381839" 
o|inlining procedure: k9831 
o|inlining procedure: k9831 
o|inlining procedure: k9910 
o|contracted procedure: "(support.scm:719) g19051906" 
o|inlining procedure: k9910 
o|inlining procedure: "(support.scm:724) rename1881" 
o|inlining procedure: k9949 
o|contracted procedure: "(support.scm:726) g19121913" 
o|inlining procedure: "(support.scm:727) rename1881" 
o|inlining procedure: k9949 
o|contracted procedure: "(support.scm:735) g19211922" 
o|inlining procedure: k10036 
o|contracted procedure: "(support.scm:748) g19921993" 
o|inlining procedure: k10102 
o|inlining procedure: k10102 
o|inlining procedure: k10150 
o|inlining procedure: "(support.scm:751) rename1881" 
o|inlining procedure: k10150 
o|inlining procedure: k10169 
o|inlining procedure: k10169 
o|inlining procedure: k10217 
o|inlining procedure: k10217 
o|inlining procedure: k10036 
o|contracted procedure: "(support.scm:754) g20322033" 
o|inlining procedure: k10278 
o|inlining procedure: k10278 
o|substituted constant variable: a10310 
o|substituted constant variable: a10312 
o|substituted constant variable: a10314 
o|substituted constant variable: a10316 
o|substituted constant variable: a10318 
o|contracted procedure: "(support.scm:716) g18961897" 
o|contracted procedure: "(support.scm:715) g18931894" 
o|contracted procedure: "(support.scm:714) g18901891" 
o|inlining procedure: k10325 
o|inlining procedure: k10325 
o|inlining procedure: k10379 
o|inlining procedure: k10379 
o|contracted procedure: "(support.scm:764) g20802081" 
o|contracted procedure: "(support.scm:766) g20912092" 
o|contracted procedure: "(support.scm:765) g20882089" 
o|contracted procedure: "(support.scm:764) g20852086" 
o|contracted procedure: "(support.scm:771) g21032104" 
o|contracted procedure: "(support.scm:770) g21002101" 
o|contracted procedure: "(support.scm:769) g20972098" 
o|inlining procedure: k10532 
o|inlining procedure: k10532 
o|contracted procedure: "(support.scm:778) g21412142" 
o|contracted procedure: "(support.scm:777) g21192120" 
o|contracted procedure: "(support.scm:776) g21162117" 
o|contracted procedure: "(support.scm:782) g21562157" 
o|inlining procedure: k10603 
o|inlining procedure: k10603 
o|inlining procedure: k10643 
o|inlining procedure: k10666 
o|contracted procedure: "(support.scm:820) g22472254" 
o|inlining procedure: k10666 
o|inlining procedure: k10643 
o|inlining procedure: k10727 
o|contracted procedure: "(support.scm:812) g22252232" 
o|inlining procedure: k10727 
o|inlining procedure: k10754 
o|contracted procedure: k10769 
o|inlining procedure: k10766 
o|inlining procedure: k10766 
o|inlining procedure: k10784 
o|contracted procedure: k10804 
o|inlining procedure: k10801 
o|inlining procedure: k10801 
o|inlining procedure: k10842 
o|inlining procedure: k10842 
o|substituted constant variable: a10856 
o|substituted constant variable: a10858 
o|contracted procedure: "(support.scm:798) g22172218" 
o|contracted procedure: "(support.scm:796) g22082209" 
o|inlining procedure: k10784 
o|contracted procedure: "(support.scm:791) g21962197" 
o|contracted procedure: "(support.scm:791) g21992200" 
o|inlining procedure: k10754 
o|inlining procedure: k10914 
o|inlining procedure: k10914 
o|contracted procedure: "(support.scm:828) g22752276" 
o|inlining procedure: k10961 
o|inlining procedure: k10961 
o|inlining procedure: k10992 
o|inlining procedure: k10992 
o|inlining procedure: k11007 
o|inlining procedure: k11007 
o|inlining procedure: k11031 
o|inlining procedure: k11031 
o|inlining procedure: k11046 
o|inlining procedure: k11071 
o|inlining procedure: k11071 
o|inlining procedure: k11089 
o|inlining procedure: k11089 
o|contracted procedure: "(support.scm:858) g23362337" 
o|inlining procedure: k11046 
o|contracted procedure: "(support.scm:857) g23242325" 
o|contracted procedure: "(support.scm:856) g23202321" 
o|inlining procedure: k11145 
o|contracted procedure: "(support.scm:869) g23442345" 
o|contracted procedure: "(support.scm:869) g23412342" 
o|inlining procedure: k11145 
o|inlining procedure: k11194 
o|inlining procedure: k11194 
o|contracted procedure: "(support.scm:881) g23792380" 
o|inlining procedure: k11234 
o|inlining procedure: k11234 
o|substituted constant variable: a11250 
o|substituted constant variable: a11252 
o|substituted constant variable: a11254 
o|inlining procedure: k11258 
o|inlining procedure: k11258 
o|substituted constant variable: a11271 
o|substituted constant variable: a11273 
o|substituted constant variable: a11275 
o|substituted constant variable: a11277 
o|contracted procedure: "(support.scm:878) g23662367" 
o|contracted procedure: "(support.scm:877) g23572358" 
o|inlining procedure: k11295 
o|inlining procedure: k11317 
o|inlining procedure: k11340 
o|inlining procedure: k11340 
o|contracted procedure: "(support.scm:900) g24192420" 
o|contracted procedure: "(support.scm:899) g24152416" 
o|contracted procedure: "(support.scm:897) g24102411" 
o|inlining procedure: k11317 
o|contracted procedure: "(support.scm:903) g24222423" 
o|substituted constant variable: a11392 
o|substituted constant variable: a11394 
o|contracted procedure: "(support.scm:895) g24062407" 
o|inlining procedure: k11295 
o|contracted procedure: "(support.scm:889) g23902391" 
o|inlining procedure: k11408 
o|inlining procedure: k11408 
o|contracted procedure: k11420 
o|inlining procedure: k11423 
o|inlining procedure: k11423 
o|inlining procedure: k11449 
o|inlining procedure: k11449 
o|contracted procedure: k11461 
o|inlining procedure: k11464 
o|inlining procedure: k11464 
o|inlining procedure: k11486 
o|inlining procedure: k11506 
o|inlining procedure: k11506 
o|inlining procedure: k11486 
o|contracted procedure: k11516 
o|inlining procedure: k11529 
o|inlining procedure: k11529 
o|contracted procedure: k11541 
o|inlining procedure: k11568 
o|inlining procedure: k11568 
o|inlining procedure: k11588 
o|inlining procedure: k11588 
o|contracted procedure: "(support.scm:975) g24812482" 
o|inlining procedure: k11609 
o|inlining procedure: k11609 
o|substituted constant variable: a11626 
o|substituted constant variable: a11628 
o|substituted constant variable: a11630 
o|inlining procedure: k11640 
o|inlining procedure: k11640 
o|propagated global variable: out25012505 ##sys#standard-output 
o|substituted constant variable: a11682 
o|substituted constant variable: a11683 
o|propagated global variable: out25112515 ##sys#standard-output 
o|substituted constant variable: a11700 
o|substituted constant variable: a11701 
o|propagated global variable: out25192523 ##sys#standard-output 
o|substituted constant variable: a11712 
o|substituted constant variable: a11713 
o|propagated global variable: out25272531 ##sys#standard-output 
o|substituted constant variable: a11724 
o|substituted constant variable: a11725 
o|propagated global variable: out25352539 ##sys#standard-output 
o|substituted constant variable: a11736 
o|substituted constant variable: a11737 
o|propagated global variable: out25432547 ##sys#standard-output 
o|substituted constant variable: a11748 
o|substituted constant variable: a11749 
o|inlining procedure: k11675 
o|propagated global variable: out25432547 ##sys#standard-output 
o|propagated global variable: out25352539 ##sys#standard-output 
o|propagated global variable: out25272531 ##sys#standard-output 
o|propagated global variable: out25192523 ##sys#standard-output 
o|propagated global variable: out25112515 ##sys#standard-output 
o|propagated global variable: out25012505 ##sys#standard-output 
o|inlining procedure: k11675 
o|inlining procedure: k11768 
o|inlining procedure: k11768 
o|inlining procedure: k11794 
o|contracted procedure: "(support.scm:1005) g25632570" 
o|inlining procedure: k11794 
o|inlining procedure: k11832 
o|inlining procedure: k11832 
o|inlining procedure: k11856 
o|inlining procedure: k11856 
o|inlining procedure: k11862 
o|inlining procedure: k11862 
o|inlining procedure: k11915 
o|inlining procedure: k11915 
o|inlining procedure: k11969 
o|inlining procedure: k11969 
o|inlining procedure: k12027 
o|substituted constant variable: tmap2581 
o|substituted constant variable: tmap2581 
o|inlining procedure: k12027 
o|inlining procedure: k12062 
o|inlining procedure: k12062 
o|inlining procedure: k12068 
o|inlining procedure: k12068 
o|inlining procedure: k12089 
o|inlining procedure: k12089 
o|inlining procedure: k12095 
o|inlining procedure: k12095 
o|inlining procedure: k12142 
o|inlining procedure: k12142 
o|inlining procedure: k12196 
o|inlining procedure: k12196 
o|inlining procedure: k12224 
o|inlining procedure: k12224 
o|inlining procedure: k12257 
o|inlining procedure: k12257 
o|inlining procedure: k12248 
o|inlining procedure: k12248 
o|inlining procedure: k12276 
o|inlining procedure: k12276 
o|inlining procedure: k12350 
o|inlining procedure: k12350 
o|inlining procedure: k12391 
o|inlining procedure: k12391 
o|inlining procedure: k12397 
o|inlining procedure: k12397 
o|inlining procedure: k12423 
o|inlining procedure: k12423 
o|substituted constant variable: a12451 
o|substituted constant variable: a12453 
o|substituted constant variable: a12455 
o|substituted constant variable: a12457 
o|substituted constant variable: a12459 
o|substituted constant variable: a12461 
o|substituted constant variable: a12463 
o|substituted constant variable: a12468 
o|substituted constant variable: a12470 
o|inlining procedure: k12474 
o|inlining procedure: k12474 
o|substituted constant variable: a12487 
o|substituted constant variable: a12489 
o|substituted constant variable: a12491 
o|substituted constant variable: a12493 
o|substituted constant variable: a12501 
o|inlining procedure: k12505 
o|inlining procedure: k12505 
o|substituted constant variable: a12512 
o|substituted constant variable: a12514 
o|substituted constant variable: a12516 
o|inlining procedure: k12520 
o|inlining procedure: k12520 
o|substituted constant variable: a12533 
o|substituted constant variable: a12535 
o|substituted constant variable: a12537 
o|substituted constant variable: a12539 
o|substituted constant variable: a12541 
o|inlining procedure: k12545 
o|inlining procedure: k12545 
o|substituted constant variable: a12552 
o|substituted constant variable: a12554 
o|substituted constant variable: a12556 
o|substituted constant variable: a12558 
o|inlining procedure: k12562 
o|inlining procedure: k12562 
o|substituted constant variable: a12569 
o|substituted constant variable: a12571 
o|substituted constant variable: a12573 
o|substituted constant variable: a12575 
o|inlining procedure: k12579 
o|inlining procedure: k12579 
o|substituted constant variable: a12592 
o|substituted constant variable: a12594 
o|substituted constant variable: a12596 
o|substituted constant variable: a12598 
o|inlining procedure: k12602 
o|inlining procedure: k12602 
o|inlining procedure: k12614 
o|inlining procedure: k12614 
o|inlining procedure: k12626 
o|inlining procedure: k12626 
o|substituted constant variable: a12639 
o|substituted constant variable: a12641 
o|substituted constant variable: a12643 
o|substituted constant variable: a12645 
o|substituted constant variable: a12647 
o|substituted constant variable: a12649 
o|substituted constant variable: a12651 
o|substituted constant variable: a12653 
o|inlining procedure: k12657 
o|inlining procedure: k12657 
o|inlining procedure: k12669 
o|inlining procedure: k12669 
o|inlining procedure: k12681 
o|inlining procedure: k12681 
o|substituted constant variable: a12694 
o|substituted constant variable: a12696 
o|substituted constant variable: a12698 
o|substituted constant variable: a12700 
o|substituted constant variable: a12702 
o|substituted constant variable: a12704 
o|substituted constant variable: a12706 
o|substituted constant variable: a12708 
o|substituted constant variable: a12710 
o|substituted constant variable: a12712 
o|substituted constant variable: a12717 
o|substituted constant variable: a12719 
o|substituted constant variable: a12724 
o|substituted constant variable: a12726 
o|inlining procedure: k12730 
o|inlining procedure: k12730 
o|substituted constant variable: a12737 
o|substituted constant variable: a12739 
o|substituted constant variable: a12741 
o|inlining procedure: k12745 
o|inlining procedure: k12745 
o|inlining procedure: k12757 
o|inlining procedure: k12757 
o|inlining procedure: k12769 
o|inlining procedure: k12769 
o|substituted constant variable: a12782 
o|substituted constant variable: a12784 
o|substituted constant variable: a12786 
o|substituted constant variable: a12788 
o|substituted constant variable: a12790 
o|substituted constant variable: a12792 
o|substituted constant variable: a12794 
o|substituted constant variable: a12796 
o|substituted constant variable: a12801 
o|substituted constant variable: a12803 
o|inlining procedure: k12816 
o|inlining procedure: k12816 
o|inlining procedure: k12825 
o|inlining procedure: k12825 
o|inlining procedure: k12847 
o|inlining procedure: k12847 
o|inlining procedure: k12856 
o|inlining procedure: k12856 
o|inlining procedure: k12893 
o|inlining procedure: k12893 
o|inlining procedure: k12884 
o|inlining procedure: k12884 
o|inlining procedure: k12926 
o|inlining procedure: k12926 
o|inlining procedure: k12947 
o|inlining procedure: k12947 
o|inlining procedure: k12983 
o|inlining procedure: k12983 
o|inlining procedure: k12974 
o|inlining procedure: k12974 
o|inlining procedure: k13002 
o|inlining procedure: k13002 
o|substituted constant variable: a13028 
o|inlining procedure: k13032 
o|inlining procedure: k13032 
o|inlining procedure: k13044 
o|inlining procedure: k13044 
o|inlining procedure: k13056 
o|inlining procedure: k13056 
o|inlining procedure: k13068 
o|inlining procedure: k13068 
o|substituted constant variable: a13075 
o|substituted constant variable: a13077 
o|substituted constant variable: a13079 
o|substituted constant variable: a13081 
o|substituted constant variable: a13083 
o|substituted constant variable: a13085 
o|substituted constant variable: a13087 
o|substituted constant variable: a13089 
o|substituted constant variable: a13091 
o|inlining procedure: k13101 
o|inlining procedure: k13101 
o|inlining procedure: k13113 
o|inlining procedure: k13113 
o|substituted constant variable: a13120 
o|substituted constant variable: a13122 
o|substituted constant variable: a13124 
o|substituted constant variable: a13126 
o|substituted constant variable: a13128 
o|inlining procedure: k13132 
o|inlining procedure: k13132 
o|inlining procedure: k13144 
o|inlining procedure: k13144 
o|inlining procedure: k13156 
o|inlining procedure: k13156 
o|substituted constant variable: a13163 
o|substituted constant variable: a13165 
o|substituted constant variable: a13167 
o|substituted constant variable: a13169 
o|substituted constant variable: a13171 
o|substituted constant variable: a13173 
o|substituted constant variable: a13175 
o|inlining procedure: k13179 
o|inlining procedure: k13179 
o|inlining procedure: k13191 
o|inlining procedure: k13191 
o|inlining procedure: k13203 
o|inlining procedure: k13203 
o|inlining procedure: k13215 
o|inlining procedure: k13215 
o|inlining procedure: k13227 
o|inlining procedure: k13227 
o|substituted constant variable: a13240 
o|substituted constant variable: a13242 
o|substituted constant variable: a13244 
o|substituted constant variable: a13246 
o|substituted constant variable: a13248 
o|substituted constant variable: a13250 
o|substituted constant variable: a13252 
o|substituted constant variable: a13254 
o|substituted constant variable: a13256 
o|substituted constant variable: a13258 
o|substituted constant variable: a13260 
o|substituted constant variable: a13262 
o|inlining procedure: k13266 
o|inlining procedure: k13266 
o|inlining procedure: k13278 
o|inlining procedure: k13278 
o|inlining procedure: k13290 
o|inlining procedure: k13290 
o|inlining procedure: k13302 
o|inlining procedure: k13302 
o|inlining procedure: k13314 
o|inlining procedure: k13314 
o|inlining procedure: k13326 
o|inlining procedure: k13326 
o|substituted constant variable: a13333 
o|substituted constant variable: a13335 
o|substituted constant variable: a13337 
o|substituted constant variable: a13339 
o|substituted constant variable: a13341 
o|substituted constant variable: a13343 
o|substituted constant variable: a13345 
o|substituted constant variable: a13347 
o|substituted constant variable: a13349 
o|substituted constant variable: a13351 
o|substituted constant variable: a13353 
o|substituted constant variable: a13355 
o|substituted constant variable: a13357 
o|inlining procedure: k13379 
o|inlining procedure: k13379 
o|inlining procedure: k13415 
o|inlining procedure: k13415 
o|inlining procedure: k13406 
o|inlining procedure: k13406 
o|inlining procedure: k13434 
o|inlining procedure: k13434 
o|inlining procedure: "(support.scm:1231) err3026" 
o|substituted constant variable: a13463 
o|inlining procedure: k13467 
o|inlining procedure: k13467 
o|inlining procedure: k13479 
o|inlining procedure: k13479 
o|inlining procedure: k13491 
o|inlining procedure: k13491 
o|substituted constant variable: a13504 
o|substituted constant variable: a13506 
o|substituted constant variable: a13508 
o|substituted constant variable: a13510 
o|substituted constant variable: a13512 
o|substituted constant variable: a13514 
o|substituted constant variable: a13516 
o|substituted constant variable: a13518 
o|inlining procedure: "(support.scm:1232) err3026" 
o|inlining procedure: k13531 
o|inlining procedure: k13531 
o|substituted constant variable: a13544 
o|substituted constant variable: a13546 
o|substituted constant variable: a13548 
o|substituted constant variable: a13550 
o|inlining procedure: k13554 
o|inlining procedure: k13554 
o|inlining procedure: k13566 
o|inlining procedure: k13566 
o|inlining procedure: k13578 
o|inlining procedure: k13578 
o|inlining procedure: k13590 
o|inlining procedure: k13590 
o|inlining procedure: k13602 
o|inlining procedure: k13602 
o|inlining procedure: k13614 
o|inlining procedure: k13614 
o|inlining procedure: k13626 
o|inlining procedure: k13626 
o|inlining procedure: k13638 
o|inlining procedure: k13638 
o|inlining procedure: k13650 
o|inlining procedure: k13650 
o|inlining procedure: k13662 
o|inlining procedure: k13662 
o|inlining procedure: k13674 
o|inlining procedure: k13674 
o|inlining procedure: k13686 
o|inlining procedure: k13686 
o|inlining procedure: k13698 
o|inlining procedure: k13698 
o|inlining procedure: k13710 
o|inlining procedure: k13710 
o|inlining procedure: k13722 
o|inlining procedure: k13722 
o|inlining procedure: k13734 
o|inlining procedure: k13734 
o|substituted constant variable: a13741 
o|substituted constant variable: a13743 
o|substituted constant variable: a13745 
o|substituted constant variable: a13747 
o|substituted constant variable: a13749 
o|substituted constant variable: a13751 
o|substituted constant variable: a13753 
o|substituted constant variable: a13755 
o|substituted constant variable: a13757 
o|substituted constant variable: a13759 
o|substituted constant variable: a13761 
o|substituted constant variable: a13763 
o|substituted constant variable: a13765 
o|substituted constant variable: a13767 
o|substituted constant variable: a13769 
o|substituted constant variable: a13771 
o|substituted constant variable: a13773 
o|substituted constant variable: a13775 
o|substituted constant variable: a13777 
o|substituted constant variable: a13779 
o|substituted constant variable: a13781 
o|substituted constant variable: a13783 
o|substituted constant variable: a13785 
o|substituted constant variable: a13787 
o|substituted constant variable: a13789 
o|substituted constant variable: a13791 
o|substituted constant variable: a13793 
o|substituted constant variable: a13795 
o|substituted constant variable: a13797 
o|substituted constant variable: a13799 
o|substituted constant variable: a13801 
o|substituted constant variable: a13803 
o|substituted constant variable: a13805 
o|inlining procedure: k13818 
o|inlining procedure: k13818 
o|inlining procedure: k13847 
o|inlining procedure: k13847 
o|inlining procedure: k13879 
o|inlining procedure: k13879 
o|inlining procedure: k13909 
o|inlining procedure: k13909 
o|inlining procedure: k13928 
o|inlining procedure: k13928 
o|inlining procedure: k13950 
o|inlining procedure: k13950 
o|substituted constant variable: a14015 
o|substituted constant variable: a14020 
o|substituted constant variable: a14022 
o|substituted constant variable: a14023 
o|inlining procedure: k14031 
o|substituted constant variable: a14041 
o|inlining procedure: k14031 
o|substituted constant variable: a14042 
o|substituted constant variable: a14052 
o|substituted constant variable: a14054 
o|substituted constant variable: a14056 
o|substituted constant variable: a14061 
o|substituted constant variable: a14063 
o|substituted constant variable: a14068 
o|substituted constant variable: a14070 
o|substituted constant variable: a14072 
o|substituted constant variable: a14077 
o|substituted constant variable: a14079 
o|inlining procedure: k14086 
o|inlining procedure: k14086 
o|inlining procedure: k14101 
o|inlining procedure: k14101 
o|inlining procedure: k14119 
o|inlining procedure: k14119 
o|substituted constant variable: a14126 
o|inlining procedure: k14127 
o|inlining procedure: k14127 
o|inlining procedure: k14142 
o|inlining procedure: k14142 
o|substituted constant variable: a14149 
o|inlining procedure: k14150 
o|inlining procedure: k14150 
o|inlining procedure: k14162 
o|inlining procedure: k14162 
o|substituted constant variable: a14169 
o|inlining procedure: k14170 
o|inlining procedure: k14170 
o|inlining procedure: k14185 
o|inlining procedure: k14185 
o|substituted constant variable: a14202 
o|inlining procedure: k14203 
o|inlining procedure: k14203 
o|inlining procedure: k14215 
o|inlining procedure: k14215 
o|inlining procedure: k14227 
o|inlining procedure: k14227 
o|inlining procedure: k14239 
o|inlining procedure: k14239 
o|inlining procedure: k14251 
o|inlining procedure: k14251 
o|inlining procedure: k14266 
o|inlining procedure: k14266 
o|inlining procedure: k14281 
o|inlining procedure: k14281 
o|inlining procedure: k14299 
o|inlining procedure: k14299 
o|inlining procedure: k14312 
o|inlining procedure: k14312 
o|inlining procedure: k14334 
o|inlining procedure: k14334 
o|inlining procedure: k14346 
o|inlining procedure: k14346 
o|substituted constant variable: a14353 
o|substituted constant variable: a14355 
o|substituted constant variable: a14357 
o|substituted constant variable: a14359 
o|inlining procedure: k14363 
o|inlining procedure: k14363 
o|substituted constant variable: a14376 
o|substituted constant variable: a14378 
o|substituted constant variable: a14380 
o|substituted constant variable: a14382 
o|substituted constant variable: a14384 
o|inlining procedure: k14388 
o|inlining procedure: k14388 
o|substituted constant variable: a14395 
o|substituted constant variable: a14397 
o|substituted constant variable: a14399 
o|substituted constant variable: a14404 
o|substituted constant variable: a14406 
o|inlining procedure: k14410 
o|inlining procedure: k14410 
o|substituted constant variable: a14423 
o|substituted constant variable: a14425 
o|substituted constant variable: a14427 
o|substituted constant variable: a14429 
o|substituted constant variable: a14431 
o|substituted constant variable: a14433 
o|inlining procedure: k14437 
o|inlining procedure: k14437 
o|inlining procedure: k14449 
o|inlining procedure: k14449 
o|inlining procedure: k14461 
o|inlining procedure: k14461 
o|substituted constant variable: a14474 
o|substituted constant variable: a14476 
o|substituted constant variable: a14478 
o|substituted constant variable: a14480 
o|substituted constant variable: a14482 
o|substituted constant variable: a14484 
o|substituted constant variable: a14486 
o|substituted constant variable: a14488 
o|substituted constant variable: a14490 
o|substituted constant variable: a14492 
o|substituted constant variable: a14494 
o|substituted constant variable: a14496 
o|substituted constant variable: a14498 
o|substituted constant variable: a14500 
o|substituted constant variable: a14502 
o|substituted constant variable: a14504 
o|inlining procedure: k14508 
o|inlining procedure: k14508 
o|inlining procedure: k14520 
o|inlining procedure: k14520 
o|inlining procedure: k14532 
o|inlining procedure: k14532 
o|substituted constant variable: a14545 
o|substituted constant variable: a14547 
o|substituted constant variable: a14549 
o|substituted constant variable: a14551 
o|substituted constant variable: a14553 
o|substituted constant variable: a14555 
o|substituted constant variable: a14557 
o|substituted constant variable: a14559 
o|substituted constant variable: a14561 
o|substituted constant variable: a14563 
o|substituted constant variable: a14565 
o|substituted constant variable: a14567 
o|substituted constant variable: a14572 
o|substituted constant variable: a14574 
o|substituted constant variable: a14579 
o|substituted constant variable: a14581 
o|inlining procedure: k14585 
o|inlining procedure: k14585 
o|inlining procedure: k14597 
o|inlining procedure: k14597 
o|inlining procedure: k14609 
o|inlining procedure: k14609 
o|substituted constant variable: a14622 
o|substituted constant variable: a14624 
o|substituted constant variable: a14626 
o|substituted constant variable: a14628 
o|substituted constant variable: a14630 
o|substituted constant variable: a14632 
o|substituted constant variable: a14634 
o|substituted constant variable: a14636 
o|substituted constant variable: a14641 
o|substituted constant variable: a14643 
o|substituted constant variable: a14645 
o|inlining procedure: k14671 
o|inlining procedure: k14695 
o|inlining procedure: k14695 
o|contracted procedure: "(support.scm:1340) g34123413" 
o|inlining procedure: k14671 
o|inlining procedure: k14759 
o|inlining procedure: k14759 
o|inlining procedure: k14782 
o|inlining procedure: k14782 
o|substituted constant variable: a14789 
o|substituted constant variable: a14791 
o|substituted constant variable: a14793 
o|substituted constant variable: a14798 
o|substituted constant variable: a14800 
o|contracted procedure: "(support.scm:1338) g34053406" 
o|contracted procedure: "(support.scm:1337) g33963397" 
o|inlining procedure: k14831 
o|inlining procedure: k14831 
o|inlining procedure: k14849 
o|inlining procedure: k14849 
o|inlining procedure: k14869 
o|inlining procedure: k14869 
o|inlining procedure: k14919 
o|inlining procedure: k14919 
o|substituted constant variable: a14950 
o|substituted constant variable: a14952 
o|substituted constant variable: a14954 
o|substituted constant variable: a14956 
o|inlining procedure: k14960 
o|inlining procedure: k14960 
o|inlining procedure: k14972 
o|inlining procedure: k14972 
o|substituted constant variable: a14979 
o|substituted constant variable: a14981 
o|substituted constant variable: a14983 
o|substituted constant variable: a14985 
o|substituted constant variable: a14987 
o|contracted procedure: "(support.scm:1358) g34813482" 
o|contracted procedure: "(support.scm:1357) g34723473" 
o|contracted procedure: "(support.scm:1356) g34693470" 
o|inlining procedure: k15005 
o|inlining procedure: k15005 
o|inlining procedure: k15037 
o|inlining procedure: k15037 
o|substituted constant variable: a15053 
o|inlining procedure: k15070 
o|inlining procedure: k15070 
o|substituted constant variable: a15079 
o|substituted constant variable: a15130 
o|substituted constant variable: a15131 
o|inlining procedure: k15156 
o|inlining procedure: k15156 
o|inlining procedure: k15184 
o|inlining procedure: k15184 
o|contracted procedure: k15199 
o|inlining procedure: k15196 
o|inlining procedure: k15226 
o|inlining procedure: k15226 
o|inlining procedure: k15249 
o|inlining procedure: k15249 
o|inlining procedure: k15196 
o|inlining procedure: k15301 
o|inlining procedure: k15301 
o|propagated global variable: out36113615 ##sys#standard-output 
o|substituted constant variable: a15317 
o|substituted constant variable: a15318 
o|propagated global variable: out36113615 ##sys#standard-output 
o|inlining procedure: k15334 
o|inlining procedure: k15334 
o|inlining procedure: k15368 
o|inlining procedure: k15368 
o|inlining procedure: k15392 
o|inlining procedure: k15392 
o|inlining procedure: k15395 
o|inlining procedure: k15395 
o|inlining procedure: k15452 
o|inlining procedure: k15478 
o|inlining procedure: k15478 
o|substituted constant variable: a15506 
o|substituted constant variable: a15519 
o|contracted procedure: "(support.scm:1505) g37193720" 
o|inlining procedure: k15452 
o|inlining procedure: k15597 
o|contracted procedure: "(support.scm:1497) g36823691" 
o|inlining procedure: k15597 
o|inlining procedure: k15631 
o|contracted procedure: "(support.scm:1496) g36513660" 
o|contracted procedure: "(support.scm:1496) g36633664" 
o|inlining procedure: k15631 
o|inlining procedure: k15678 
o|inlining procedure: k15678 
o|inlining procedure: k15690 
o|inlining procedure: k15690 
o|inlining procedure: "(support.scm:1530) fits?3733" 
o|inlining procedure: k15709 
o|inlining procedure: "(support.scm:1532) fits?3733" 
o|inlining procedure: "(support.scm:1532) getsize3732" 
o|inlining procedure: k15709 
o|inlining procedure: "(support.scm:1535) fits?3733" 
o|inlining procedure: "(support.scm:1534) getsize3732" 
o|propagated global variable: out37713775 ##sys#standard-output 
o|substituted constant variable: a15784 
o|substituted constant variable: a15785 
o|propagated global variable: out38083812 ##sys#standard-output 
o|substituted constant variable: a15828 
o|substituted constant variable: a15829 
o|inlining procedure: k15818 
o|inlining procedure: k15845 
o|propagated global variable: out38183822 ##sys#standard-output 
o|substituted constant variable: a15852 
o|substituted constant variable: a15853 
o|inlining procedure: k15845 
o|propagated global variable: out38183822 ##sys#standard-output 
o|propagated global variable: out38083812 ##sys#standard-output 
o|inlining procedure: k15818 
o|inlining procedure: k15878 
o|inlining procedure: k15878 
o|propagated global variable: out37713775 ##sys#standard-output 
o|contracted procedure: "(support.scm:1548) g37683769" 
o|contracted procedure: "(support.scm:1547) g37653766" 
o|contracted procedure: "(support.scm:1546) g37623763" 
o|inlining procedure: k15901 
o|inlining procedure: k15926 
o|inlining procedure: k15926 
o|inlining procedure: k15901 
o|inlining procedure: k15950 
o|inlining procedure: k15950 
o|inlining procedure: k15987 
o|inlining procedure: k15987 
o|substituted constant variable: a16000 
o|substituted constant variable: a16011 
o|inlining procedure: k16007 
o|substituted constant variable: a16033 
o|inlining procedure: k16007 
o|inlining procedure: k16044 
o|inlining procedure: k16059 
o|inlining procedure: k16059 
o|inlining procedure: k16044 
o|contracted procedure: "(support.scm:1625) g38773878" 
o|contracted procedure: "(support.scm:1628) g38933894" 
o|inlining procedure: k16121 
o|inlining procedure: k16121 
o|substituted constant variable: a16137 
o|substituted constant variable: a16139 
o|contracted procedure: "(support.scm:1646) g39413942" 
o|contracted procedure: "(support.scm:1647) g39523953" 
o|inlining procedure: k16189 
o|inlining procedure: k16235 
o|contracted procedure: "(support.scm:1656) g39773984" 
o|inlining procedure: k16235 
o|substituted constant variable: a16260 
o|substituted constant variable: a16261 
o|inlining procedure: k16189 
o|substituted constant variable: constant25 
o|substituted constant variable: a16328 
o|substituted constant variable: a16329 
o|contracted procedure: "(support.scm:513) g10031004" 
o|contracted procedure: "(support.scm:513) g10001001" 
o|replaced variables: 2947 
o|removed binding forms: 629 
o|removed side-effect free assignment to unused variable: constant25 
o|propagated global variable: out6165 ##sys#standard-output 
o|propagated global variable: out7781 ##compiler#collected-debugging-output 
o|substituted constant variable: r497716379 
o|inlining procedure: k4991 
o|substituted constant variable: r497716380 
o|inlining procedure: k5000 
o|propagated global variable: out114118 ##compiler#collected-debugging-output 
o|converted assignments to bindings: (collect99) 
o|substituted constant variable: r523616391 
o|converted assignments to bindings: (err211) 
o|substituted constant variable: r534516397 
o|substituted constant variable: r537916399 
o|substituted constant variable: r555116407 
o|substituted constant variable: r559616409 
o|substituted constant variable: r559616410 
o|substituted constant variable: r563316416 
o|substituted constant variable: r590516440 
o|substituted constant variable: r601916456 
o|substituted constant variable: r605716457 
o|substituted constant variable: r617516467 
o|substituted constant variable: mark646 
o|substituted constant variable: mark613 
o|substituted constant variable: mark599 
o|substituted constant variable: mark566 
o|substituted constant variable: mark552 
o|substituted constant variable: r653716490 
o|substituted constant variable: r655516492 
o|substituted constant variable: r672616502 
o|propagated global variable: out733737 ##sys#standard-output 
o|propagated global variable: out942946 ##sys#standard-output 
o|inlining procedure: k6880 
o|propagated global variable: out935939 ##sys#standard-output 
o|propagated global variable: out894898 ##sys#standard-output 
o|propagated global variable: out908912 ##sys#standard-output 
o|propagated global variable: out922926 ##sys#standard-output 
o|propagated global variable: out847851 ##sys#standard-output 
o|propagated global variable: out878882 ##sys#standard-output 
o|substituted constant variable: c1019 
o|substituted constant variable: s1021 
o|substituted constant variable: c1026 
o|substituted constant variable: s1028 
o|substituted constant variable: p1053 
o|substituted constant variable: r768216566 
o|substituted constant variable: c1089 
o|substituted constant variable: c1151 
o|substituted constant variable: c1156 
o|substituted constant variable: c1169 
o|substituted constant variable: c1174 
o|substituted constant variable: p1175 
o|substituted constant variable: s1176 
o|substituted constant variable: c1179 
o|substituted constant variable: s1254 
o|substituted constant variable: c1257 
o|substituted constant variable: s1259 
o|substituted constant variable: c1265 
o|substituted constant variable: c1297 
o|substituted constant variable: c1345 
o|substituted constant variable: c1378 
o|substituted constant variable: mark1388 
o|substituted constant variable: c1422 
o|substituted constant variable: c1781 
o|substituted constant variable: p1782 
o|substituted constant variable: c1830 
o|substituted constant variable: c1835 
o|substituted constant variable: c1840 
o|removed side-effect free assignment to unused variable: rename1881 
o|substituted constant variable: s1909 
o|substituted constant variable: c1914 
o|substituted constant variable: c1923 
o|substituted constant variable: c1994 
o|substituted constant variable: r1015116702 
o|substituted constant variable: r1015116702 
o|substituted constant variable: r1076716726 
o|substituted constant variable: r1080216729 
o|substituted constant variable: r1084316731 
o|substituted constant variable: mark2220 
o|substituted constant variable: r1078516733 
o|substituted constant variable: mark2202 
o|substituted constant variable: mark2282 
o|substituted constant variable: r1100816742 
o|substituted constant variable: r1109016748 
o|substituted constant variable: r1104716750 
o|substituted constant variable: r1114616752 
o|substituted constant variable: r1119516753 
o|substituted constant variable: r1123516756 
o|substituted constant variable: r1134116762 
o|substituted constant variable: r1129616764 
o|substituted constant variable: r1142416768 
o|substituted constant variable: r1146516772 
o|substituted constant variable: r1150716776 
o|substituted constant variable: r1150716776 
o|propagated global variable: out25012505 ##sys#standard-output 
o|propagated global variable: out25112515 ##sys#standard-output 
o|propagated global variable: out25192523 ##sys#standard-output 
o|propagated global variable: out25272531 ##sys#standard-output 
o|propagated global variable: out25352539 ##sys#standard-output 
o|propagated global variable: out25432547 ##sys#standard-output 
o|substituted constant variable: r1282616872 
o|substituted constant variable: r1285716876 
o|substituted constant variable: r1292716883 
o|removed side-effect free assignment to unused variable: err3026 
o|substituted constant variable: r1403217008 
o|substituted constant variable: r1408717009 
o|substituted constant variable: r1410217011 
o|substituted constant variable: r1412017013 
o|substituted constant variable: r1412017014 
o|substituted constant variable: r1412817015 
o|substituted constant variable: r1414317017 
o|substituted constant variable: r1414317018 
o|substituted constant variable: r1415117019 
o|substituted constant variable: r1416317021 
o|substituted constant variable: r1416317022 
o|substituted constant variable: r1417117023 
o|substituted constant variable: r1420417027 
o|substituted constant variable: r1421617029 
o|substituted constant variable: r1422817031 
o|substituted constant variable: r1424017033 
o|substituted constant variable: r1425217035 
o|substituted constant variable: r1426717037 
o|substituted constant variable: r1428217039 
o|substituted constant variable: r1430017041 
o|substituted constant variable: r1431317043 
o|substituted constant variable: r1433517045 
o|substituted constant variable: r1483217081 
o|converted assignments to bindings: (resolve3581) 
o|substituted constant variable: r1530217112 
o|propagated global variable: out36113615 ##sys#standard-output 
o|substituted constant variable: r1539617120 
o|removed side-effect free assignment to unused variable: getsize3732 
o|removed side-effect free assignment to unused variable: fits?3733 
o|propagated global variable: out37713775 ##sys#standard-output 
o|propagated global variable: out38083812 ##sys#standard-output 
o|propagated global variable: out38183822 ##sys#standard-output 
o|substituted constant variable: r1592717175 
o|substituted constant variable: r1592717175 
o|substituted constant variable: r1604517188 
o|substituted constant variable: mark3884 
o|substituted constant variable: mark3900 
o|substituted constant variable: r1612217189 
o|substituted constant variable: mark3944 
o|substituted constant variable: mark3955 
o|substituted constant variable: r1619017194 
o|simplifications: ((let . 3)) 
o|replaced variables: 78 
o|removed binding forms: 2871 
o|substituted constant variable: r49771637917200 
o|substituted constant variable: r49771638017202 
o|inlining procedure: k6440 
o|inlining procedure: k6415 
o|inlining procedure: k6392 
o|inlining procedure: k6367 
o|inlining procedure: k6344 
o|inlining procedure: k7059 
o|inlining procedure: k7059 
o|inlining procedure: k7059 
o|inlining procedure: k7059 
o|inlining procedure: k7059 
o|inlining procedure: k7059 
o|inlining procedure: k7059 
o|inlining procedure: k7059 
o|inlining procedure: k10922 
o|inlining procedure: k11240 
o|inlining procedure: k12441 
o|inlining procedure: k12813 
o|inlining procedure: k12813 
o|inlining procedure: k12813 
o|inlining procedure: k12844 
o|inlining procedure: k12844 
o|inlining procedure: k12844 
o|inlining procedure: k14878 
o|inlining procedure: k14878 
o|inlining procedure: k15389 
o|inlining procedure: k15389 
o|inlining procedure: k16070 
o|inlining procedure: k16090 
o|inlining procedure: k16143 
o|inlining procedure: k16287 
o|replaced variables: 108 
o|removed binding forms: 206 
o|substituted constant variable: r644117465 
o|substituted constant variable: r641617468 
o|substituted constant variable: r639317469 
o|substituted constant variable: r636817472 
o|substituted constant variable: r634517473 
o|inlining procedure: k8140 
o|substituted constant variable: r1092317584 
o|substituted constant variable: r1281417602 
o|substituted constant variable: r1281417602 
o|substituted constant variable: r1281417602 
o|substituted constant variable: r1281417605 
o|substituted constant variable: r1281417605 
o|substituted constant variable: r1281417605 
o|substituted constant variable: r1281417608 
o|substituted constant variable: r1281417608 
o|substituted constant variable: r1281417608 
o|substituted constant variable: r1284517611 
o|substituted constant variable: r1284517611 
o|substituted constant variable: r1284517611 
o|substituted constant variable: r1284517614 
o|substituted constant variable: r1284517614 
o|substituted constant variable: r1284517614 
o|substituted constant variable: r1284517617 
o|substituted constant variable: r1284517617 
o|substituted constant variable: r1284517617 
o|substituted constant variable: r1539017640 
o|substituted constant variable: r1539017640 
o|substituted constant variable: r1539017640 
o|substituted constant variable: r1539017643 
o|substituted constant variable: r1539017643 
o|substituted constant variable: r1539017643 
o|contracted procedure: k15716 
o|contracted procedure: k15719 
o|substituted constant variable: r1607117658 
o|substituted constant variable: r1609117659 
o|substituted constant variable: r1614417660 
o|replaced variables: 3 
o|removed binding forms: 124 
o|removed conditional forms: 8 
o|substituted constant variable: r814117713 
o|removed binding forms: 21 
o|removed conditional forms: 1 
o|removed binding forms: 1 
o|simplifications: ((if . 70) (##core#call . 1455)) 
o|  call simplifications:
o|    ##sys#fudge
o|    char=?
o|    read-char	3
o|    ##sys#size
o|    fx>	2
o|    write-char	6
o|    flonum?
o|    arithmetic-shift	3
o|    procedure?
o|    fx+	2
o|    string-length	4
o|    >	2
o|    string-ref	2
o|    list?	4
o|    vector-ref	6
o|    <
o|    *
o|    -	2
o|    first	19
o|    positive?
o|    not-pair?	5
o|    ##sys#call-with-values	5
o|    cdddr
o|    second	10
o|    third	6
o|    fourth	4
o|    caddr	4
o|    cadr	26
o|    integer?
o|    inexact->exact
o|    ##sys#check-structure	7
o|    ##sys#block-ref	4
o|    ##sys#structure?	5
o|    ##sys#make-structure	33
o|    cdar	6
o|    caar	5
o|    length	8
o|    values	4
o|    +	7
o|    ##sys#setslot	36
o|    assq	17
o|    alist-cons	8
o|    atom?
o|    ##sys#apply	2
o|    ##sys#cons	7
o|    equal?	3
o|    ##sys#list	131
o|    fixnum?	3
o|    number?	4
o|    char?	4
o|    boolean?	4
o|    eof-object?	5
o|    vector?	8
o|    member
o|    cddr	3
o|    list	50
o|    string=?	2
o|    not	12
o|    ##sys#foreign-fixnum-argument	2
o|    char-alphabetic?	2
o|    char-numeric?
o|    char->integer
o|    fx>=	2
o|    fx<	4
o|    string->list	3
o|    list->string
o|    zero?	3
o|    sub1	4
o|    string?	4
o|    eqv?
o|    eq?	384
o|    add1	4
o|    null?	41
o|    cons	91
o|    car	52
o|    cdr	20
o|    ##sys#check-list	40
o|    ##sys#slot	187
o|    symbol?	19
o|    memq	9
o|    pair?	69
o|    apply	5
o|contracted procedure: k4852 
o|contracted procedure: k4880 
o|contracted procedure: k4914 
o|contracted procedure: k4944 
o|contracted procedure: k4954 
o|contracted procedure: k4958 
o|contracted procedure: k5040 
o|propagated global variable: out114118 ##compiler#collected-debugging-output 
o|contracted procedure: k5056 
o|contracted procedure: k5066 
o|contracted procedure: k5070 
o|contracted procedure: k5140 
o|contracted procedure: k5158 
o|contracted procedure: k5168 
o|contracted procedure: k5172 
o|contracted procedure: k5211 
o|contracted procedure: k5215 
o|contracted procedure: k5219 
o|contracted procedure: k5238 
o|contracted procedure: k5244 
o|contracted procedure: k5264 
o|contracted procedure: k5285 
o|contracted procedure: k5297 
o|contracted procedure: k5303 
o|contracted procedure: k5309 
o|contracted procedure: k5318 
o|contracted procedure: k5328 
o|contracted procedure: k5332 
o|contracted procedure: k5347 
o|contracted procedure: k5366 
o|contracted procedure: k5353 
o|contracted procedure: k5362 
o|contracted procedure: k5381 
o|contracted procedure: k5400 
o|contracted procedure: k5387 
o|contracted procedure: k5396 
o|contracted procedure: k5409 
o|contracted procedure: k5415 
o|contracted procedure: k5439 
o|contracted procedure: k5445 
o|contracted procedure: k5499 
o|contracted procedure: k5502 
o|contracted procedure: k5512 
o|contracted procedure: k5522 
o|contracted procedure: k5536 
o|contracted procedure: k5553 
o|contracted procedure: k5556 
o|contracted procedure: k5559 
o|contracted procedure: k5565 
o|contracted procedure: k5592 
o|contracted procedure: k5598 
o|contracted procedure: k5614 
o|contracted procedure: k5635 
o|contracted procedure: k5642 
o|contracted procedure: k5645 
o|contracted procedure: k5654 
o|contracted procedure: k5660 
o|contracted procedure: k5680 
o|contracted procedure: k5687 
o|contracted procedure: k5696 
o|contracted procedure: k5711 
o|contracted procedure: k5724 
o|contracted procedure: k5731 
o|contracted procedure: k5740 
o|contracted procedure: k5799 
o|contracted procedure: k5752 
o|contracted procedure: k5795 
o|contracted procedure: k5772 
o|inlining procedure: k5769 
o|inlining procedure: k5769 
o|contracted procedure: k5814 
o|contracted procedure: k5830 
o|contracted procedure: k5856 
o|contracted procedure: k5862 
o|contracted procedure: k5868 
o|contracted procedure: k5874 
o|contracted procedure: k5880 
o|contracted procedure: k5892 
o|contracted procedure: k5907 
o|contracted procedure: k5918 
o|contracted procedure: k5924 
o|contracted procedure: k5930 
o|contracted procedure: k5936 
o|contracted procedure: k5954 
o|contracted procedure: k5960 
o|contracted procedure: k5966 
o|contracted procedure: k5972 
o|contracted procedure: k5981 
o|contracted procedure: k5994 
o|contracted procedure: k6000 
o|contracted procedure: k6021 
o|contracted procedure: k6037 
o|contracted procedure: k6059 
o|contracted procedure: k6117 
o|contracted procedure: k6065 
o|contracted procedure: k6073 
o|contracted procedure: k6098 
o|contracted procedure: k6088 
o|contracted procedure: k6177 
o|contracted procedure: k6191 
o|contracted procedure: k6183 
o|contracted procedure: k6244 
o|contracted procedure: k6250 
o|contracted procedure: k6259 
o|contracted procedure: k6269 
o|contracted procedure: k6273 
o|contracted procedure: k6283 
o|contracted procedure: k6287 
o|contracted procedure: k6330 
o|contracted procedure: k6326 
o|contracted procedure: k6298 
o|contracted procedure: k6322 
o|contracted procedure: k6318 
o|contracted procedure: k6302 
o|contracted procedure: k6314 
o|contracted procedure: k6310 
o|contracted procedure: k6306 
o|contracted procedure: k6294 
o|contracted procedure: k6382 
o|contracted procedure: k6430 
o|contracted procedure: k6455 
o|contracted procedure: k6467 
o|contracted procedure: k6477 
o|contracted procedure: k6481 
o|contracted procedure: k6446 
o|contracted procedure: k6440 
o|propagated global variable: g635637 ##compiler#internal-bindings 
o|contracted procedure: k6490 
o|contracted procedure: k6500 
o|contracted procedure: k6504 
o|contracted procedure: k6410 
o|contracted procedure: k6421 
o|contracted procedure: k6415 
o|contracted procedure: k6398 
o|contracted procedure: k6392 
o|propagated global variable: g588590 extended-bindings 
o|contracted procedure: k6513 
o|contracted procedure: k6523 
o|contracted procedure: k6527 
o|contracted procedure: k6362 
o|contracted procedure: k6373 
o|contracted procedure: k6367 
o|contracted procedure: k6350 
o|contracted procedure: k6344 
o|propagated global variable: g541543 standard-bindings 
o|contracted procedure: k6539 
o|contracted procedure: k6575 
o|contracted procedure: k6595 
o|contracted procedure: k6591 
o|contracted procedure: k6609 
o|contracted procedure: k6605 
o|contracted procedure: k6621 
o|contracted procedure: k6635 
o|contracted procedure: k6631 
o|contracted procedure: k6646 
o|contracted procedure: k6650 
o|contracted procedure: k6642 
o|contracted procedure: k6661 
o|contracted procedure: k6657 
o|contracted procedure: k6676 
o|contracted procedure: k6690 
o|contracted procedure: k6686 
o|contracted procedure: k6701 
o|contracted procedure: k6697 
o|contracted procedure: k6712 
o|contracted procedure: k6708 
o|contracted procedure: k6715 
o|contracted procedure: k6735 
o|contracted procedure: k6741 
o|contracted procedure: k6759 
o|contracted procedure: k6763 
o|contracted procedure: k6776 
o|contracted procedure: k6807 
o|contracted procedure: k6810 
o|contracted procedure: k6822 
o|contracted procedure: k6844 
o|contracted procedure: k6840 
o|contracted procedure: k6825 
o|contracted procedure: k6828 
o|contracted procedure: k6836 
o|contracted procedure: k6865 
o|contracted procedure: k6886 
o|contracted procedure: k6899 
o|contracted procedure: k6902 
o|contracted procedure: k6915 
o|contracted procedure: k6940 
o|contracted procedure: k6949 
o|contracted procedure: k6931 
o|contracted procedure: k6977 
o|contracted procedure: k6986 
o|contracted procedure: k6968 
o|contracted procedure: k7014 
o|contracted procedure: k7023 
o|contracted procedure: k7005 
o|contracted procedure: k7030 
o|contracted procedure: k7037 
o|contracted procedure: k7044 
o|contracted procedure: k7053 
o|contracted procedure: k7056 
o|contracted procedure: k7067 
o|contracted procedure: k7091 
o|contracted procedure: k7087 
o|contracted procedure: k7083 
o|contracted procedure: k7097 
o|contracted procedure: k7104 
o|contracted procedure: k7110 
o|contracted procedure: k7114 
o|contracted procedure: k7120 
o|contracted procedure: k7126 
o|contracted procedure: k7130 
o|contracted procedure: k7136 
o|contracted procedure: k7140 
o|contracted procedure: k7146 
o|contracted procedure: k7168 
o|contracted procedure: k7172 
o|contracted procedure: k7178 
o|contracted procedure: k7182 
o|contracted procedure: k7188 
o|contracted procedure: k7192 
o|contracted procedure: k7204 
o|contracted procedure: k7210 
o|contracted procedure: k7216 
o|contracted procedure: k7222 
o|contracted procedure: k7228 
o|contracted procedure: k7234 
o|contracted procedure: k7240 
o|contracted procedure: k7275 
o|contracted procedure: k7281 
o|contracted procedure: k7287 
o|contracted procedure: k7293 
o|contracted procedure: k7299 
o|contracted procedure: k7305 
o|contracted procedure: k7311 
o|contracted procedure: k7317 
o|contracted procedure: k7323 
o|contracted procedure: k7329 
o|contracted procedure: k7335 
o|contracted procedure: k7341 
o|contracted procedure: k7347 
o|contracted procedure: k7353 
o|contracted procedure: k7359 
o|contracted procedure: k7365 
o|contracted procedure: k7371 
o|contracted procedure: k7377 
o|contracted procedure: k7383 
o|contracted procedure: k7453 
o|contracted procedure: k7462 
o|contracted procedure: k7471 
o|contracted procedure: k7480 
o|contracted procedure: k7489 
o|contracted procedure: k7498 
o|contracted procedure: k7525 
o|contracted procedure: k7540 
o|contracted procedure: k7552 
o|contracted procedure: k7566 
o|contracted procedure: k7572 
o|contracted procedure: k8766 
o|contracted procedure: k7581 
o|contracted procedure: k7588 
o|contracted procedure: k7591 
o|contracted procedure: k7605 
o|contracted procedure: k7609 
o|contracted procedure: k7621 
o|contracted procedure: k7624 
o|contracted procedure: k7627 
o|contracted procedure: k7635 
o|contracted procedure: k7643 
o|contracted procedure: k7652 
o|contracted procedure: k7655 
o|contracted procedure: k7662 
o|contracted procedure: k7678 
o|contracted procedure: k7684 
o|contracted procedure: k7691 
o|contracted procedure: k7697 
o|contracted procedure: k7700 
o|contracted procedure: k7703 
o|contracted procedure: k7709 
o|contracted procedure: k7724 
o|contracted procedure: k7749 
o|contracted procedure: k7758 
o|contracted procedure: k7761 
o|contracted procedure: k7764 
o|contracted procedure: k7771 
o|contracted procedure: k7784 
o|contracted procedure: k7787 
o|contracted procedure: k7790 
o|contracted procedure: k7798 
o|contracted procedure: k7806 
o|contracted procedure: k7818 
o|contracted procedure: k7821 
o|contracted procedure: k7824 
o|contracted procedure: k7832 
o|contracted procedure: k7840 
o|contracted procedure: k7732 
o|contracted procedure: k7849 
o|contracted procedure: k7852 
o|contracted procedure: k7880 
o|contracted procedure: k7864 
o|contracted procedure: k7868 
o|contracted procedure: k7876 
o|contracted procedure: k7886 
o|contracted procedure: k7914 
o|contracted procedure: k7918 
o|contracted procedure: k7898 
o|contracted procedure: k7902 
o|contracted procedure: k7910 
o|contracted procedure: k7924 
o|contracted procedure: k7931 
o|contracted procedure: k7935 
o|contracted procedure: k7944 
o|contracted procedure: k7977 
o|contracted procedure: k7956 
o|contracted procedure: k7973 
o|contracted procedure: k7964 
o|contracted procedure: k8056 
o|contracted procedure: k7987 
o|contracted procedure: k8019 
o|contracted procedure: k7999 
o|contracted procedure: k8007 
o|contracted procedure: k8027 
o|contracted procedure: k8052 
o|contracted procedure: k8036 
o|contracted procedure: k8040 
o|contracted procedure: k8070 
o|contracted procedure: k8073 
o|contracted procedure: k8091 
o|contracted procedure: k8096 
o|contracted procedure: k8108 
o|contracted procedure: k8111 
o|contracted procedure: k8114 
o|contracted procedure: k8122 
o|contracted procedure: k8130 
o|contracted procedure: k8146 
o|contracted procedure: k8140 
o|contracted procedure: k8137 
o|contracted procedure: k8157 
o|contracted procedure: k8160 
o|contracted procedure: k8224 
o|contracted procedure: k8174 
o|contracted procedure: k8178 
o|contracted procedure: k8183 
o|contracted procedure: k8195 
o|contracted procedure: k8198 
o|contracted procedure: k8201 
o|contracted procedure: k8209 
o|contracted procedure: k8217 
o|contracted procedure: k8230 
o|contracted procedure: k8248 
o|contracted procedure: k8264 
o|contracted procedure: k8260 
o|contracted procedure: k8270 
o|contracted procedure: k8273 
o|contracted procedure: k8335 
o|contracted procedure: k8285 
o|contracted procedure: k8289 
o|contracted procedure: k8294 
o|contracted procedure: k8306 
o|contracted procedure: k8309 
o|contracted procedure: k8312 
o|contracted procedure: k8320 
o|contracted procedure: k8328 
o|contracted procedure: k8341 
o|contracted procedure: k8396 
o|contracted procedure: k8344 
o|contracted procedure: k8392 
o|contracted procedure: k8372 
o|contracted procedure: k8388 
o|contracted procedure: k8376 
o|contracted procedure: k8380 
o|contracted procedure: k8356 
o|contracted procedure: k8360 
o|contracted procedure: k8402 
o|contracted procedure: k8419 
o|contracted procedure: k8423 
o|contracted procedure: k8428 
o|contracted procedure: k8440 
o|contracted procedure: k8443 
o|contracted procedure: k8446 
o|contracted procedure: k8454 
o|contracted procedure: k8462 
o|contracted procedure: k8471 
o|contracted procedure: k8483 
o|contracted procedure: k8487 
o|contracted procedure: k8491 
o|contracted procedure: k8503 
o|contracted procedure: k8506 
o|contracted procedure: k8509 
o|contracted procedure: k8517 
o|contracted procedure: k8525 
o|contracted procedure: k8552 
o|contracted procedure: k8556 
o|contracted procedure: k8559 
o|contracted procedure: k8571 
o|contracted procedure: k8574 
o|contracted procedure: k8577 
o|contracted procedure: k8585 
o|contracted procedure: k8593 
o|contracted procedure: k8632 
o|contracted procedure: k8637 
o|contracted procedure: k8643 
o|contracted procedure: k8649 
o|contracted procedure: k8721 
o|contracted procedure: k8725 
o|contracted procedure: k8737 
o|contracted procedure: k8740 
o|contracted procedure: k8743 
o|contracted procedure: k8751 
o|contracted procedure: k8759 
o|contracted procedure: k8775 
o|contracted procedure: k8795 
o|contracted procedure: k8803 
o|contracted procedure: k8811 
o|contracted procedure: k8817 
o|contracted procedure: k8827 
o|contracted procedure: k8830 
o|contracted procedure: k8842 
o|contracted procedure: k8845 
o|contracted procedure: k8848 
o|contracted procedure: k8856 
o|contracted procedure: k8864 
o|contracted procedure: k8873 
o|contracted procedure: k8884 
o|contracted procedure: k8887 
o|contracted procedure: k8880 
o|contracted procedure: k8899 
o|contracted procedure: k8902 
o|contracted procedure: k8905 
o|contracted procedure: k8913 
o|contracted procedure: k8921 
o|contracted procedure: k8930 
o|contracted procedure: k8939 
o|contracted procedure: k8942 
o|contracted procedure: k8948 
o|inlining procedure: k8951 
o|contracted procedure: k8959 
o|inlining procedure: k8951 
o|contracted procedure: k8965 
o|inlining procedure: k8951 
o|contracted procedure: k8977 
o|contracted procedure: k8984 
o|contracted procedure: k8987 
o|contracted procedure: k8996 
o|contracted procedure: k8999 
o|contracted procedure: k9055 
o|contracted procedure: k9019 
o|contracted procedure: k9045 
o|contracted procedure: k9049 
o|contracted procedure: k9041 
o|contracted procedure: k9022 
o|contracted procedure: k9025 
o|contracted procedure: k9033 
o|contracted procedure: k9037 
o|contracted procedure: k9067 
o|contracted procedure: k9070 
o|contracted procedure: k9073 
o|contracted procedure: k9081 
o|contracted procedure: k9089 
o|contracted procedure: k9098 
o|contracted procedure: k9120 
o|contracted procedure: k9105 
o|contracted procedure: k9109 
o|contracted procedure: k9117 
o|contracted procedure: k9126 
o|contracted procedure: k9133 
o|contracted procedure: k9141 
o|contracted procedure: k9147 
o|contracted procedure: k9154 
o|contracted procedure: k9160 
o|contracted procedure: k9167 
o|contracted procedure: k9179 
o|contracted procedure: k9190 
o|contracted procedure: k9196 
o|contracted procedure: k9203 
o|contracted procedure: k9211 
o|contracted procedure: k9230 
o|contracted procedure: k9218 
o|contracted procedure: k9238 
o|contracted procedure: k9242 
o|contracted procedure: k9248 
o|contracted procedure: k9251 
o|contracted procedure: k9254 
o|contracted procedure: k9266 
o|contracted procedure: k9269 
o|contracted procedure: k9272 
o|contracted procedure: k9280 
o|contracted procedure: k9288 
o|contracted procedure: k9297 
o|contracted procedure: k9304 
o|contracted procedure: k9308 
o|contracted procedure: k9311 
o|contracted procedure: k9323 
o|contracted procedure: k9326 
o|contracted procedure: k9329 
o|contracted procedure: k9337 
o|contracted procedure: k9345 
o|contracted procedure: k9354 
o|contracted procedure: k9363 
o|contracted procedure: k9370 
o|contracted procedure: k9379 
o|contracted procedure: k9394 
o|contracted procedure: k9401 
o|contracted procedure: k9405 
o|contracted procedure: k9409 
o|contracted procedure: k9421 
o|contracted procedure: k9435 
o|contracted procedure: k9439 
o|contracted procedure: k9451 
o|contracted procedure: k9454 
o|contracted procedure: k9457 
o|contracted procedure: k9465 
o|contracted procedure: k9473 
o|contracted procedure: k9480 
o|contracted procedure: k9486 
o|contracted procedure: k9489 
o|contracted procedure: k9496 
o|contracted procedure: k9499 
o|contracted procedure: k9511 
o|contracted procedure: k9514 
o|contracted procedure: k9517 
o|contracted procedure: k9525 
o|contracted procedure: k9533 
o|contracted procedure: k9547 
o|contracted procedure: k9550 
o|contracted procedure: k9562 
o|contracted procedure: k9565 
o|contracted procedure: k9568 
o|contracted procedure: k9576 
o|contracted procedure: k9584 
o|contracted procedure: k9597 
o|contracted procedure: k9603 
o|contracted procedure: k9644 
o|contracted procedure: k9706 
o|contracted procedure: k9671 
o|contracted procedure: k9686 
o|contracted procedure: k9702 
o|contracted procedure: k9751 
o|contracted procedure: k9755 
o|contracted procedure: k9775 
o|contracted procedure: k9779 
o|contracted procedure: k9786 
o|contracted procedure: k9809 
o|contracted procedure: k9805 
o|contracted procedure: k9801 
o|contracted procedure: k9819 
o|contracted procedure: k9822 
o|contracted procedure: k9834 
o|contracted procedure: k9837 
o|contracted procedure: k9840 
o|contracted procedure: k9848 
o|contracted procedure: k9856 
o|contracted procedure: k9865 
o|contracted procedure: k9868 
o|contracted procedure: k9871 
o|contracted procedure: k9891 
o|contracted procedure: k9899 
o|contracted procedure: k9907 
o|contracted procedure: k9913 
o|contracted procedure: k9927 
o|contracted procedure: k9930 
o|contracted procedure: k9952 
o|contracted procedure: k9964 
o|contracted procedure: k9968 
o|contracted procedure: k9976 
o|contracted procedure: k9984 
o|contracted procedure: k9990 
o|contracted procedure: k9993 
o|contracted procedure: k10002 
o|contracted procedure: k10017 
o|contracted procedure: k10021 
o|contracted procedure: k10029 
o|contracted procedure: k10033 
o|contracted procedure: k10039 
o|contracted procedure: k10046 
o|contracted procedure: k10052 
o|contracted procedure: k10063 
o|contracted procedure: k10138 
o|contracted procedure: k10146 
o|contracted procedure: k10081 
o|contracted procedure: k10085 
o|contracted procedure: k10093 
o|contracted procedure: k10105 
o|contracted procedure: k10108 
o|contracted procedure: k10111 
o|contracted procedure: k10119 
o|contracted procedure: k10127 
o|contracted procedure: k10157 
o|contracted procedure: k10160 
o|contracted procedure: k10208 
o|contracted procedure: k10172 
o|contracted procedure: k10198 
o|contracted procedure: k10202 
o|contracted procedure: k10194 
o|contracted procedure: k10175 
o|contracted procedure: k10178 
o|contracted procedure: k10186 
o|contracted procedure: k10190 
o|contracted procedure: k10220 
o|contracted procedure: k10223 
o|contracted procedure: k10226 
o|contracted procedure: k10234 
o|contracted procedure: k10242 
o|contracted procedure: k10261 
o|contracted procedure: k10269 
o|contracted procedure: k10281 
o|contracted procedure: k10284 
o|contracted procedure: k10287 
o|contracted procedure: k10295 
o|contracted procedure: k10303 
o|contracted procedure: k10364 
o|contracted procedure: k10328 
o|contracted procedure: k10354 
o|contracted procedure: k10358 
o|contracted procedure: k10350 
o|contracted procedure: k10331 
o|contracted procedure: k10334 
o|contracted procedure: k10342 
o|contracted procedure: k10346 
o|contracted procedure: k10382 
o|contracted procedure: k10417 
o|contracted procedure: k10426 
o|contracted procedure: k10435 
o|contracted procedure: k10456 
o|contracted procedure: k10465 
o|contracted procedure: k10474 
o|contracted procedure: k10495 
o|contracted procedure: k10508 
o|contracted procedure: k10512 
o|contracted procedure: k10520 
o|contracted procedure: k10523 
o|contracted procedure: k10499 
o|contracted procedure: k10535 
o|contracted procedure: k10538 
o|contracted procedure: k10541 
o|contracted procedure: k10549 
o|contracted procedure: k10557 
o|contracted procedure: k10581 
o|contracted procedure: k10585 
o|contracted procedure: k10589 
o|contracted procedure: k10594 
o|contracted procedure: k10606 
o|contracted procedure: k10609 
o|contracted procedure: k10612 
o|contracted procedure: k10620 
o|contracted procedure: k10628 
o|contracted procedure: k10657 
o|contracted procedure: k10669 
o|contracted procedure: k10679 
o|contracted procedure: k10683 
o|contracted procedure: k10686 
o|contracted procedure: k10692 
o|contracted procedure: k10730 
o|contracted procedure: k10740 
o|contracted procedure: k10744 
o|contracted procedure: k10760 
o|contracted procedure: k10884 
o|contracted procedure: k10775 
o|contracted procedure: k10778 
o|contracted procedure: k10787 
o|contracted procedure: k10864 
o|contracted procedure: k10795 
o|contracted procedure: k10822 
o|contracted procedure: k10830 
o|contracted procedure: k10826 
o|contracted procedure: k10839 
o|contracted procedure: k10845 
o|contracted procedure: k10852 
o|contracted procedure: k10875 
o|contracted procedure: k10871 
o|contracted procedure: k10917 
o|contracted procedure: k10941 
o|contracted procedure: k10928 
o|contracted procedure: k10922 
o|contracted procedure: k10949 
o|contracted procedure: k10958 
o|contracted procedure: k10970 
o|contracted procedure: k10979 
o|contracted procedure: k10983 
o|contracted procedure: k10995 
o|contracted procedure: k11004 
o|contracted procedure: k11021 
o|contracted procedure: k11025 
o|contracted procedure: k11034 
o|contracted procedure: k11135 
o|contracted procedure: k11139 
o|contracted procedure: k11043 
o|contracted procedure: k11061 
o|contracted procedure: k11065 
o|contracted procedure: k11074 
o|contracted procedure: k11083 
o|contracted procedure: k11092 
o|contracted procedure: k11109 
o|contracted procedure: k11113 
o|contracted procedure: k11122 
o|contracted procedure: k11126 
o|contracted procedure: k11157 
o|contracted procedure: k11166 
o|contracted procedure: k11183 
o|contracted procedure: k11191 
o|contracted procedure: k11197 
o|contracted procedure: k11206 
o|contracted procedure: k11231 
o|contracted procedure: k11209 
o|contracted procedure: k11237 
o|contracted procedure: k11240 
o|contracted procedure: k11255 
o|contracted procedure: k11261 
o|contracted procedure: k11286 
o|contracted procedure: k11289 
o|contracted procedure: k11395 
o|contracted procedure: k11292 
o|contracted procedure: k11314 
o|contracted procedure: k11320 
o|contracted procedure: k11328 
o|contracted procedure: k11331 
o|contracted procedure: k11370 
o|contracted procedure: k11337 
o|contracted procedure: k11361 
o|contracted procedure: k11352 
o|contracted procedure: k11343 
o|contracted procedure: k11376 
o|contracted procedure: k11388 
o|contracted procedure: k11426 
o|contracted procedure: k11433 
o|contracted procedure: k11467 
o|contracted procedure: k11489 
o|contracted procedure: k11492 
o|contracted procedure: k11513 
o|contracted procedure: k11506 
o|inlining procedure: k11502 
o|inlining procedure: k11502 
o|contracted procedure: k11532 
o|contracted procedure: k11562 
o|contracted procedure: k11565 
o|contracted procedure: k11571 
o|contracted procedure: k11575 
o|contracted procedure: k11581 
o|contracted procedure: k11585 
o|contracted procedure: k11604 
o|contracted procedure: k11591 
o|contracted procedure: k11595 
o|contracted procedure: k11612 
o|contracted procedure: k11620 
o|contracted procedure: k11616 
o|contracted procedure: k11631 
o|contracted procedure: k11643 
o|contracted procedure: k11653 
o|contracted procedure: k11657 
o|contracted procedure: k11785 
o|contracted procedure: k11797 
o|contracted procedure: k11807 
o|contracted procedure: k11811 
o|contracted procedure: k11835 
o|contracted procedure: k11838 
o|contracted procedure: k11850 
o|contracted procedure: k11865 
o|contracted procedure: k11880 
o|contracted procedure: k11883 
o|contracted procedure: k11912 
o|contracted procedure: k11893 
o|contracted procedure: k11901 
o|contracted procedure: k11905 
o|contracted procedure: k11897 
o|contracted procedure: k11918 
o|contracted procedure: k11921 
o|contracted procedure: k11933 
o|contracted procedure: k11966 
o|contracted procedure: k11943 
o|contracted procedure: k11955 
o|contracted procedure: k11947 
o|contracted procedure: k11962 
o|contracted procedure: k11972 
o|contracted procedure: k11982 
o|contracted procedure: k11988 
o|contracted procedure: k12024 
o|contracted procedure: k12001 
o|contracted procedure: k12013 
o|contracted procedure: k12005 
o|contracted procedure: k12020 
o|contracted procedure: k12030 
o|contracted procedure: k12047 
o|contracted procedure: k12043 
o|contracted procedure: k12056 
o|contracted procedure: k12071 
o|contracted procedure: k12083 
o|contracted procedure: k12098 
o|contracted procedure: k12110 
o|contracted procedure: k12139 
o|contracted procedure: k12123 
o|contracted procedure: k12131 
o|contracted procedure: k12135 
o|contracted procedure: k12127 
o|contracted procedure: k12145 
o|contracted procedure: k12154 
o|contracted procedure: k12193 
o|contracted procedure: k12167 
o|contracted procedure: k12179 
o|contracted procedure: k12171 
o|contracted procedure: k12189 
o|contracted procedure: k12199 
o|contracted procedure: k12215 
o|contracted procedure: k12221 
o|contracted procedure: k12231 
o|contracted procedure: k12242 
o|contracted procedure: k12238 
o|contracted procedure: k12260 
o|contracted procedure: k12257 
o|contracted procedure: k12272 
o|contracted procedure: k12279 
o|contracted procedure: k12308 
o|contracted procedure: k12292 
o|contracted procedure: k12300 
o|contracted procedure: k12304 
o|contracted procedure: k12296 
o|contracted procedure: k12314 
o|contracted procedure: k12317 
o|contracted procedure: k12347 
o|contracted procedure: k12327 
o|contracted procedure: k12343 
o|contracted procedure: k12335 
o|contracted procedure: k12339 
o|contracted procedure: k12331 
o|contracted procedure: k12353 
o|contracted procedure: k12382 
o|contracted procedure: k12363 
o|contracted procedure: k12371 
o|contracted procedure: k12375 
o|contracted procedure: k12367 
o|contracted procedure: k12388 
o|contracted procedure: k12400 
o|contracted procedure: k12407 
o|contracted procedure: k12413 
o|contracted procedure: k12420 
o|contracted procedure: k12426 
o|contracted procedure: k12438 
o|contracted procedure: k12441 
o|contracted procedure: k12471 
o|contracted procedure: k12477 
o|contracted procedure: k12494 
o|contracted procedure: k12502 
o|contracted procedure: k12517 
o|contracted procedure: k12523 
o|contracted procedure: k12542 
o|contracted procedure: k12559 
o|contracted procedure: k12576 
o|contracted procedure: k12582 
o|contracted procedure: k12599 
o|contracted procedure: k12605 
o|contracted procedure: k12611 
o|contracted procedure: k12617 
o|contracted procedure: k12623 
o|contracted procedure: k12629 
o|contracted procedure: k12654 
o|contracted procedure: k12660 
o|contracted procedure: k12666 
o|contracted procedure: k12672 
o|contracted procedure: k12678 
o|contracted procedure: k12684 
o|contracted procedure: k12727 
o|contracted procedure: k12742 
o|contracted procedure: k12748 
o|contracted procedure: k12754 
o|contracted procedure: k12760 
o|contracted procedure: k12766 
o|contracted procedure: k12772 
o|contracted procedure: k12819 
o|contracted procedure: k12831 
o|contracted procedure: k12838 
o|contracted procedure: k12813 
o|contracted procedure: k12850 
o|contracted procedure: k12862 
o|contracted procedure: k12869 
o|contracted procedure: k12844 
o|contracted procedure: k12896 
o|contracted procedure: k12893 
o|contracted procedure: k12905 
o|contracted procedure: k12929 
o|contracted procedure: k12938 
o|contracted procedure: k12950 
o|contracted procedure: k12962 
o|contracted procedure: k12986 
o|contracted procedure: k12983 
o|contracted procedure: k12998 
o|contracted procedure: k13005 
o|contracted procedure: k13017 
o|contracted procedure: k13024 
o|contracted procedure: k13029 
o|contracted procedure: k13035 
o|contracted procedure: k13041 
o|contracted procedure: k13047 
o|contracted procedure: k13053 
o|contracted procedure: k13059 
o|contracted procedure: k13065 
o|contracted procedure: k13092 
o|contracted procedure: k13098 
o|contracted procedure: k13104 
o|contracted procedure: k13110 
o|contracted procedure: k13129 
o|contracted procedure: k13135 
o|contracted procedure: k13141 
o|contracted procedure: k13147 
o|contracted procedure: k13153 
o|contracted procedure: k13176 
o|contracted procedure: k13182 
o|contracted procedure: k13188 
o|contracted procedure: k13194 
o|contracted procedure: k13200 
o|contracted procedure: k13206 
o|contracted procedure: k13212 
o|contracted procedure: k13218 
o|contracted procedure: k13224 
o|contracted procedure: k13230 
o|contracted procedure: k13263 
o|contracted procedure: k13269 
o|contracted procedure: k13275 
o|contracted procedure: k13281 
o|contracted procedure: k13287 
o|contracted procedure: k13293 
o|contracted procedure: k13299 
o|contracted procedure: k13305 
o|contracted procedure: k13311 
o|contracted procedure: k13317 
o|contracted procedure: k13323 
o|contracted procedure: k13382 
o|contracted procedure: k13394 
o|contracted procedure: k13418 
o|contracted procedure: k13415 
o|contracted procedure: k13430 
o|contracted procedure: k13437 
o|contracted procedure: k13449 
o|contracted procedure: k13456 
o|contracted procedure: k13464 
o|contracted procedure: k13470 
o|contracted procedure: k13476 
o|contracted procedure: k13482 
o|contracted procedure: k13488 
o|contracted procedure: k13494 
o|contracted procedure: k13522 
o|contracted procedure: k13528 
o|contracted procedure: k13534 
o|contracted procedure: k13551 
o|contracted procedure: k13557 
o|contracted procedure: k13563 
o|contracted procedure: k13569 
o|contracted procedure: k13575 
o|contracted procedure: k13581 
o|contracted procedure: k13587 
o|contracted procedure: k13593 
o|contracted procedure: k13599 
o|contracted procedure: k13605 
o|contracted procedure: k13611 
o|contracted procedure: k13617 
o|contracted procedure: k13623 
o|contracted procedure: k13629 
o|contracted procedure: k13635 
o|contracted procedure: k13641 
o|contracted procedure: k13647 
o|contracted procedure: k13653 
o|contracted procedure: k13659 
o|contracted procedure: k13665 
o|contracted procedure: k13671 
o|contracted procedure: k13677 
o|contracted procedure: k13683 
o|contracted procedure: k13689 
o|contracted procedure: k13695 
o|contracted procedure: k13701 
o|contracted procedure: k13707 
o|contracted procedure: k13713 
o|contracted procedure: k13719 
o|contracted procedure: k13725 
o|contracted procedure: k13731 
o|contracted procedure: k13821 
o|contracted procedure: k13824 
o|contracted procedure: k13831 
o|contracted procedure: k13837 
o|contracted procedure: k13844 
o|contracted procedure: k13850 
o|contracted procedure: k13853 
o|contracted procedure: k13860 
o|contracted procedure: k13866 
o|contracted procedure: k13869 
o|contracted procedure: k13876 
o|contracted procedure: k13882 
o|contracted procedure: k13893 
o|contracted procedure: k13889 
o|contracted procedure: k13899 
o|contracted procedure: k13906 
o|contracted procedure: k13912 
o|contracted procedure: k13919 
o|contracted procedure: k13925 
o|contracted procedure: k13938 
o|contracted procedure: k14025 
o|contracted procedure: k13944 
o|contracted procedure: k13947 
o|contracted procedure: k13953 
o|contracted procedure: k13956 
o|contracted procedure: k13994 
o|contracted procedure: k13966 
o|contracted procedure: k13990 
o|contracted procedure: k13974 
o|contracted procedure: k13982 
o|contracted procedure: k13986 
o|contracted procedure: k13978 
o|contracted procedure: k13970 
o|contracted procedure: k14000 
o|contracted procedure: k14007 
o|contracted procedure: k14011 
o|contracted procedure: k14048 
o|contracted procedure: k14028 
o|contracted procedure: k14044 
o|contracted procedure: k14034 
o|contracted procedure: k14038 
o|contracted procedure: k14089 
o|contracted procedure: k14095 
o|contracted procedure: k14098 
o|contracted procedure: k14104 
o|contracted procedure: k14113 
o|contracted procedure: k14116 
o|contracted procedure: k14122 
o|contracted procedure: k14130 
o|contracted procedure: k14133 
o|contracted procedure: k14139 
o|contracted procedure: k14145 
o|contracted procedure: k14153 
o|contracted procedure: k14159 
o|contracted procedure: k14165 
o|contracted procedure: k14173 
o|contracted procedure: k14179 
o|contracted procedure: k14188 
o|contracted procedure: k14195 
o|contracted procedure: k14206 
o|contracted procedure: k14212 
o|contracted procedure: k14218 
o|contracted procedure: k14224 
o|contracted procedure: k14230 
o|contracted procedure: k14236 
o|contracted procedure: k14242 
o|contracted procedure: k14248 
o|contracted procedure: k14254 
o|contracted procedure: k14263 
o|contracted procedure: k14269 
o|contracted procedure: k14275 
o|contracted procedure: k14284 
o|contracted procedure: k14287 
o|contracted procedure: k14293 
o|contracted procedure: k14302 
o|contracted procedure: k14308 
o|contracted procedure: k14315 
o|contracted procedure: k14324 
o|contracted procedure: k14331 
o|contracted procedure: k14337 
o|contracted procedure: k14343 
o|contracted procedure: k14346 
o|contracted procedure: k14360 
o|contracted procedure: k14366 
o|contracted procedure: k14385 
o|contracted procedure: k14407 
o|contracted procedure: k14413 
o|contracted procedure: k14434 
o|contracted procedure: k14440 
o|contracted procedure: k14446 
o|contracted procedure: k14452 
o|contracted procedure: k14458 
o|contracted procedure: k14464 
o|contracted procedure: k14505 
o|contracted procedure: k14511 
o|contracted procedure: k14517 
o|contracted procedure: k14523 
o|contracted procedure: k14529 
o|contracted procedure: k14535 
o|contracted procedure: k14582 
o|contracted procedure: k14588 
o|contracted procedure: k14594 
o|contracted procedure: k14600 
o|contracted procedure: k14606 
o|contracted procedure: k14612 
o|contracted procedure: k14660 
o|contracted procedure: k14668 
o|contracted procedure: k14674 
o|contracted procedure: k14677 
o|contracted procedure: k14738 
o|contracted procedure: k14680 
o|contracted procedure: k14686 
o|contracted procedure: k14698 
o|contracted procedure: k14708 
o|contracted procedure: k14712 
o|contracted procedure: k14719 
o|contracted procedure: k14722 
o|contracted procedure: k14729 
o|contracted procedure: k14744 
o|contracted procedure: k14750 
o|contracted procedure: k14762 
o|contracted procedure: k14772 
o|contracted procedure: k14776 
o|contracted procedure: k14779 
o|contracted procedure: k14812 
o|contracted procedure: k14820 
o|contracted procedure: k14828 
o|contracted procedure: k14834 
o|contracted procedure: k14843 
o|contracted procedure: k14846 
o|contracted procedure: k14852 
o|contracted procedure: k14872 
o|contracted procedure: k14875 
o|contracted procedure: k14888 
o|contracted procedure: k1488517629 
o|contracted procedure: k1488517633 
o|contracted procedure: k14898 
o|contracted procedure: k14908 
o|contracted procedure: k14916 
o|contracted procedure: k14922 
o|contracted procedure: k14929 
o|contracted procedure: k14939 
o|contracted procedure: k14957 
o|contracted procedure: k14963 
o|contracted procedure: k14969 
o|contracted procedure: k14996 
o|contracted procedure: k15008 
o|contracted procedure: k15018 
o|contracted procedure: k15022 
o|contracted procedure: k15055 
o|contracted procedure: k15034 
o|contracted procedure: k15046 
o|contracted procedure: k15050 
o|contracted procedure: k15095 
o|contracted procedure: k15061 
o|contracted procedure: k15073 
o|contracted procedure: k15081 
o|contracted procedure: k15091 
o|contracted procedure: k15113 
o|contracted procedure: k15159 
o|inlining procedure: k15156 
o|contracted procedure: k15208 
o|contracted procedure: k15216 
o|contracted procedure: k15229 
o|contracted procedure: k15240 
o|contracted procedure: k15252 
o|contracted procedure: k15266 
o|contracted procedure: k15270 
o|contracted procedure: k15337 
o|contracted procedure: k15340 
o|contracted procedure: k15343 
o|contracted procedure: k15362 
o|contracted procedure: k15358 
o|contracted procedure: k15371 
o|contracted procedure: k15417 
o|contracted procedure: k15410 
o|contracted procedure: k15386 
o|contracted procedure: k15398 
o|contracted procedure: k15401 
o|contracted procedure: k15404 
o|contracted procedure: k15423 
o|contracted procedure: k15440 
o|contracted procedure: k15580 
o|contracted procedure: k15588 
o|contracted procedure: k15446 
o|contracted procedure: k15449 
o|contracted procedure: k15455 
o|contracted procedure: k15472 
o|contracted procedure: k15491 
o|contracted procedure: k15497 
o|contracted procedure: k15521 
o|contracted procedure: k15509 
o|contracted procedure: k15516 
o|contracted procedure: k15600 
o|contracted procedure: k15622 
o|contracted procedure: k15618 
o|contracted procedure: k15603 
o|contracted procedure: k15606 
o|contracted procedure: k15614 
o|contracted procedure: k15634 
o|contracted procedure: k15637 
o|contracted procedure: k15640 
o|contracted procedure: k15648 
o|contracted procedure: k15656 
o|contracted procedure: k15437 
o|contracted procedure: k15681 
o|contracted procedure: k15687 
o|contracted procedure: k15696 
o|contracted procedure: k15699 
o|contracted procedure: k15706 
o|contracted procedure: k1567217138 
o|contracted procedure: k1567217145 
o|contracted procedure: k1567217154 
o|contracted procedure: k15758 
o|contracted procedure: k15766 
o|contracted procedure: k15774 
o|contracted procedure: k15780 
o|contracted procedure: k15809 
o|contracted procedure: k15815 
o|contracted procedure: k15824 
o|contracted procedure: k15848 
o|contracted procedure: k15864 
o|contracted procedure: k15868 
o|contracted procedure: k15872 
o|contracted procedure: k15881 
o|contracted procedure: k15891 
o|contracted procedure: k15895 
o|contracted procedure: k15911 
o|inlining procedure: k15915 
o|inlining procedure: k15915 
o|contracted procedure: k15931 
o|contracted procedure: k15938 
o|contracted procedure: k15953 
o|contracted procedure: k15966 
o|contracted procedure: k15990 
o|contracted procedure: k16018 
o|contracted procedure: k16047 
o|contracted procedure: k16053 
o|contracted procedure: k16056 
o|contracted procedure: k16076 
o|contracted procedure: k16070 
o|contracted procedure: k16096 
o|contracted procedure: k16090 
o|contracted procedure: k16124 
o|contracted procedure: k16130 
o|contracted procedure: k16149 
o|contracted procedure: k16143 
o|contracted procedure: k16238 
o|contracted procedure: k16248 
o|contracted procedure: k16252 
o|contracted procedure: k16203 
o|contracted procedure: k16217 
o|contracted procedure: k16221 
o|contracted procedure: k16300 
o|contracted procedure: k16284 
o|contracted procedure: k16351 
o|contracted procedure: k16360 
o|simplifications: ((let . 157)) 
o|removed binding forms: 1213 
o|inlining procedure: k9783 
o|replaced variables: 440 
o|removed binding forms: 4 
o|simplifications: ((if . 18)) 
o|replaced variables: 7 
o|removed binding forms: 279 
o|contracted procedure: k15652 
o|contracted procedure: k15725 
o|simplifications: ((let . 1)) 
o|removed binding forms: 3 
o|replaced variables: 2 
o|removed binding forms: 1 
o|direct leaf routine/allocation: loop508 0 
o|direct leaf routine/allocation: g23072308 0 
o|direct leaf routine/allocation: g24652472 20 
o|converted assignments to bindings: (loop508) 
o|contracted procedure: "(support.scm:967) k11646" 
o|simplifications: ((let . 1)) 
o|removed binding forms: 1 
o|customizable procedures: (for-each-loop39763991 loop3856 k15904 g37853792 for-each-loop37843802 doloop38153816 loop3754 map-loop36453666 map-loop36763697 resolve3581 loop3593 loop3534 k15040 g35093516 for-each-loop35083519 k14837 walkeach3464 walk3463 k14747 for-each-loop34423452 k14715 k14683 for-each-loop34183428 k14107 k14182 k14257 k14278 k14296 k14318 k13931 k13385 k13397 k13440 g31483149 k12932 k12941 k12953 k12965 k13008 g29912992 g28722873 k11853 k11868 k11991 k12033 k12059 k12086 k12113 k12157 k12202 k12282 repeat2586 g27952796 k12175 k12009 k11951 for-each-loop25622574 for-each-loop24642486 k11452 k11411 k11200 matchn2298 loop2327 match12297 resolve2296 loop2273 k10781 k10818 for-each-loop22242236 for-each-loop22462264 map-loop21632180 map-loop21242144 rec2075 map-loop18521871 g20452054 map-loop20392064 g19391948 map-loop19331953 map-loop19631982 g20062015 map-loop20002025 walk1882 map-loop18001817 k9759 fold1777 k8820 k9424 map-loop17491766 map-loop17231740 map-loop16941711 loop1675 map-loop16511668 map-loop16251642 loop1616 map-loop15761593 map-loop15551600 map-loop15131530 map-loop14841501 map-loop14271444 k8405 k8600 map-loop13961413 map-loop13501367 map-loop13191336 map-loop12701287 map-loop12261243 k8087 map-loop11921209 loop1159 map-loop10941112 g11271136 map-loop11211139 k7665 map-loop10571074 k6853 k7070 k7149 loop779 k6918 k6955 k6992 map-loop740757 k6747 g727728 k6670 for-each-loop534574 for-each-loop581621 for-each-loop628653 tmp14370 tmp24371 k6076 loop463 k5948 loop376 fold369 k5714 k5568 k5575 loop305 loop288 loop238 loop227 loop212 err211 loop200 k5129 g169176 for-each-loop168186 collect99 g104111 for-each-loop103123 text46 dump47 for-each-loop5068) 
o|calls to known targets: 498 
o|identified direct recursive calls: f_5292 1 
o|identified direct recursive calls: f_5342 1 
o|identified direct recursive calls: f_5376 1 
o|identified direct recursive calls: f_5494 1 
o|identified direct recursive calls: f_5763 1 
o|identified direct recursive calls: f_6239 1 
o|identified direct recursive calls: f_6817 1 
o|identified direct recursive calls: f_7547 4 
o|identified direct recursive calls: f_9014 1 
o|identified direct recursive calls: f_10167 1 
o|identified direct recursive calls: f_9884 1 
o|identified direct recursive calls: f_10323 1 
o|identified direct recursive calls: f_10377 1 
o|identified direct recursive calls: f_10990 1 
o|identified direct recursive calls: f_11638 1 
o|identified direct recursive calls: f_15068 1 
o|identified direct recursive calls: f_15595 1 
o|identified direct recursive calls: f_15629 1 
o|fast box initializations: 85 
o|dropping unused closure argument: f_6239 
o|dropping unused closure argument: f_15179 
*/
/* end of file */

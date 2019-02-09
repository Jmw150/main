/* Generated from eval.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: eval.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file eval.c -emit-import-library chicken.eval -emit-import-library chicken.load
   unit: eval
   uses: modules library internal expand
*/
#include "chicken.h"


#ifndef C_INSTALL_EGG_HOME
# define C_INSTALL_EGG_HOME    "."
#endif

#ifndef C_INSTALL_SHARE_HOME
# define C_INSTALL_SHARE_HOME NULL
#endif

#ifndef C_BINARY_VERSION
# define C_BINARY_VERSION      0
#endif


#define C_store_result(x, ptr)   (*((C_word *)C_block_item(ptr, 0)) = (x), C_SCHEME_TRUE)


#define C_copy_result_string(str, buf, n)  (C_memcpy((char *)C_block_item(buf, 0), C_c_string(str), C_unfix(n)), ((char *)C_block_item(buf, 0))[ C_unfix(n) ] = '\0', C_SCHEME_TRUE)


C_externexport  void  CHICKEN_get_error_message(char *t0,int t1);

C_externexport  int  CHICKEN_load(char * t0);

C_externexport  int  CHICKEN_read(char * t0,C_word *t1);

C_externexport  int  CHICKEN_apply_to_string(C_word t0,C_word t1,char *t2,int t3);

C_externexport  int  CHICKEN_apply(C_word t0,C_word t1,C_word *t2);

C_externexport  int  CHICKEN_eval_string_to_string(char * t0,char *t1,int t2);

C_externexport  int  CHICKEN_eval_to_string(C_word t0,char *t1,int t2);

C_externexport  int  CHICKEN_eval_string(char * t0,C_word *t1);

C_externexport  int  CHICKEN_eval(C_word t0,C_word *t1);

C_externexport  int  CHICKEN_yield();

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_modules_toplevel)
C_externimport void C_ccall C_modules_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[379];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,15),40,102,105,110,100,45,105,100,32,105,100,32,115,101,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,7),40,97,51,55,52,51,41,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,13),40,97,51,55,52,57,32,46,32,116,109,112,41,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,12),40,114,101,110,97,109,101,32,118,97,114,41,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,8),40,103,50,51,55,32,112,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,101,110,118,115,32,101,105,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,15),40,108,111,111,107,117,112,32,118,97,114,48,32,101,41,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,31),40,101,109,105,116,45,116,114,97,99,101,45,105,110,102,111,32,105,110,102,111,32,99,110,116,114,32,101,32,118,41,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,34),40,101,109,105,116,45,115,121,110,116,97,120,45,116,114,97,99,101,45,105,110,102,111,32,105,110,102,111,32,99,110,116,114,41,0,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,9),40,97,51,54,51,49,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,11),40,97,51,54,52,52,32,112,32,105,41,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,15),40,100,101,99,111,114,97,116,101,32,112,32,108,108,41,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,12),40,102,95,51,56,57,51,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,7),40,97,51,57,48,52,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,10),40,102,95,51,57,51,49,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,12),40,102,95,51,57,52,50,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,12),40,102,95,51,57,52,55,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,10),40,102,95,52,48,48,53,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,10),40,102,95,52,48,50,48,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,10),40,102,95,52,48,51,57,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,10),40,102,95,52,48,54,50,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,10),40,102,95,52,48,56,51,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,11),40,97,51,57,49,48,32,105,32,106,41,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,12),40,102,95,52,49,48,57,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,12),40,102,95,52,49,49,55,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,12),40,102,95,52,49,50,53,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,12),40,102,95,52,49,51,51,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,12),40,102,95,52,49,51,53,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,12),40,102,95,52,49,53,52,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,12),40,102,95,52,49,53,54,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,12),40,102,95,52,49,54,55,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,12),40,102,95,52,50,50,48,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,12),40,102,95,52,50,50,56,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,12),40,102,95,52,50,51,54,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,12),40,102,95,52,50,52,52,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,12),40,102,95,52,50,53,50,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,12),40,102,95,52,50,54,48,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,12),40,102,95,52,50,54,56,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,12),40,102,95,52,50,55,48,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,12),40,102,95,52,50,57,57,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,10),40,102,95,52,51,51,51,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,10),40,102,95,52,51,53,48,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,10),40,102,95,52,52,51,53,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,10),40,102,95,52,52,54,48,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,7),40,97,52,53,50,56,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,10),40,102,95,52,53,53,50,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,10),40,102,95,52,53,54,48,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,10),40,102,95,52,53,57,53,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,10),40,102,95,52,54,48,56,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,11),40,97,52,53,51,52,32,105,32,106,41,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,10),40,102,95,52,54,55,50,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,10),40,102,95,52,55,48,57,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,10),40,102,95,52,55,54,52,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,10),40,102,95,52,56,51,52,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,8),40,103,53,49,57,32,120,41};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,19),40,100,111,108,111,111,112,53,52,48,32,105,32,118,108,105,115,116,41,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,10),40,102,95,52,57,49,50,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,53,49,51,32,103,53,50,53,41,0,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,7),40,97,52,57,57,57,41,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,7),40,97,53,48,49,54,41,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,7),40,97,53,48,51,52,41,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,52,52,53,32,103,52,53,55,41,0,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,52,49,55,32,103,52,50,57,41,0,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,53,56,49,32,103,53,57,51,41,0,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,53,53,52,32,103,53,54,54,41,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,23),40,109,97,112,45,108,111,111,112,55,51,48,32,103,55,52,50,32,103,55,52,51,41,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,23),40,109,97,112,45,108,111,111,112,54,57,55,32,103,55,48,57,32,103,55,49,48,41,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,55,48,32,103,54,56,50,41,0,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,52,48,32,103,54,53,50,41,0,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,49,51,32,103,54,50,53,41,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,11),40,97,53,54,50,53,32,46,32,114,41,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,10),40,102,95,53,54,50,48,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,7),40,97,53,54,52,52,41,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,10),40,102,95,53,54,51,57,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,14),40,97,53,54,54,56,32,97,49,32,46,32,114,41,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,10),40,102,95,53,54,54,51,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,10),40,97,53,54,56,55,32,97,49,41,0,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,10),40,102,95,53,54,56,50,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,17),40,97,53,55,49,53,32,97,49,32,97,50,32,46,32,114,41,0,0,0,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,10),40,102,95,53,55,49,48,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,13),40,97,53,55,51,52,32,97,49,32,97,50,41,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,10),40,102,95,53,55,50,57,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,20),40,97,53,55,54,50,32,97,49,32,97,50,32,97,51,32,46,32,114,41,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,10),40,102,95,53,55,53,55,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,16),40,97,53,55,56,49,32,97,49,32,97,50,32,97,51,41};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,10),40,102,95,53,55,55,54,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,23),40,97,53,56,48,57,32,97,49,32,97,50,32,97,51,32,97,52,32,46,32,114,41,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,10),40,102,95,53,56,48,52,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,19),40,97,53,56,50,56,32,97,49,32,97,50,32,97,51,32,97,52,41,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,10),40,102,95,53,56,50,51,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,26),40,100,111,108,111,111,112,49,50,51,55,32,110,32,99,32,97,114,103,115,32,108,97,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,12),40,97,53,56,53,48,32,46,32,97,115,41,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,10),40,102,95,53,56,52,53,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,12),40,97,53,56,55,51,32,46,32,97,115,41,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,10),40,102,95,53,56,54,56,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,7),40,97,53,57,49,49,41,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,7),40,97,53,57,50,56,41,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,7),40,97,53,57,52,50,41,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,55,56,49,32,103,55,57,51,41,0,0,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,22),40,97,53,53,57,48,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,7),40,97,53,57,57,54,41,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,24),40,97,54,48,48,54,32,108,108,105,115,116,55,55,48,32,98,111,100,121,55,55,49,41};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,7),40,97,54,48,51,49,41,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,7),40,97,54,48,52,56,41,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,7),40,97,54,48,54,54,41,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,56,54,32,103,56,57,56,41,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,6),40,103,57,53,48,41,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,18),40,102,111,114,45,101,97,99,104,45,108,111,111,112,57,52,57,41,0,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,7),40,97,54,50,50,52,41,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,7),40,97,54,50,52,49,41,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,7),40,97,54,50,53,57,41,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,57,50,49,32,103,57,51,51,41,0,0,0,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,13),40,97,54,52,51,51,32,102,111,114,109,115,41,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,7),40,97,54,52,57,56,41,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,19),40,109,97,112,45,108,111,111,112,57,57,53,32,103,49,48,48,55,41,0,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,7),40,97,54,53,55,54,41,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,50,32,120,115,41,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,10),40,102,95,54,54,54,54,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,98,111,100,121,32,120,115,41,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,7),40,97,54,54,51,56,41,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,7),40,97,54,54,51,50,41,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,7),40,97,54,55,50,56,41,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,11),40,103,49,48,51,56,32,101,120,112,41,0,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,48,51,50,32,103,49,48,52,52,41,0,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,7),40,97,54,57,51,52,41,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,21),40,97,54,57,52,48,32,101,120,112,49,49,54,49,32,95,49,49,54,51,41,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,10),40,103,49,50,49,57,32,99,108,41,0,0,0,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,7),40,97,55,49,48,57,41,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,7),40,97,55,49,49,52,41,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,7),40,97,55,49,50,52,41,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,27),40,99,111,109,112,105,108,101,32,120,32,101,32,104,32,116,102,32,99,110,116,114,32,116,108,63,41,0,0,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,110,41};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,10),40,102,95,55,52,54,51,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,10),40,102,95,55,52,56,51,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,10),40,102,95,55,53,49,52,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,10),40,102,95,55,53,53,51,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,10),40,102,95,55,54,48,48,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,9),40,103,49,51,49,48,32,97,41,0,0,0,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,9),40,103,49,51,51,56,32,97,41,0,0,0,0,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,51,50,32,103,49,51,52,52,41,0,0,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,10),40,102,95,55,54,52,56,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,48,52,32,103,49,51,49,54,41,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,12),40,102,95,55,55,53,56,32,46,32,95,41,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,26),40,99,111,109,112,105,108,101,45,99,97,108,108,32,120,32,101,32,116,102,32,99,110,116,114,41,0,0,0,0,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,101,118,97,108,35,99,111,109,112,105,108,101,45,116,111,45,99,108,111,115,117,114,101,32,101,120,112,32,101,110,118,32,114,101,115,116,41,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,7),40,97,55,56,51,56,41,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,7),40,97,55,56,56,55,41,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,7),40,97,55,56,57,54,41,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,7),40,97,55,56,56,49,41,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,7),40,97,55,57,49,51,41,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,22),40,35,35,115,121,115,35,101,118,97,108,47,109,101,116,97,32,102,111,114,109,41,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,21),40,115,99,104,101,109,101,35,101,118,97,108,32,120,32,46,32,101,110,118,41,0,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,101,118,97,108,35,109,111,100,117,108,101,45,101,110,118,105,114,111,110,109,101,110,116,32,110,97,109,101,41,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,5),40,101,114,114,41,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,108,108,105,115,116,32,118,97,114,115,32,97,114,103,99,41,0,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,38),40,35,35,115,121,115,35,100,101,99,111,109,112,111,115,101,45,108,97,109,98,100,97,45,108,105,115,116,32,108,108,105,115,116,48,32,107,41,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,32),40,115,99,104,101,109,101,35,105,110,116,101,114,97,99,116,105,111,110,45,101,110,118,105,114,111,110,109,101,110,116,41};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,17),40,102,111,108,100,114,49,53,51,54,32,103,49,53,51,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,10),40,115,116,114,105,112,32,115,101,41,0,0,0,0,0,0};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,36),40,115,99,104,101,109,101,35,115,99,104,101,109,101,45,114,101,112,111,114,116,45,101,110,118,105,114,111,110,109,101,110,116,32,110,41,0,0,0,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,27),40,115,99,104,101,109,101,35,110,117,108,108,45,101,110,118,105,114,111,110,109,101,110,116,32,110,41,0,0,0,0,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,27),40,99,104,105,99,107,101,110,46,108,111,97,100,35,97,110,121,32,112,114,101,100,32,108,115,116,41,0,0,0,0,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,18),40,35,35,115,121,115,35,112,114,111,118,105,100,101,32,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,20),40,35,35,115,121,115,35,112,114,111,118,105,100,101,100,63,32,105,100,41,0,0,0,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,108,111,97,100,35,112,97,116,104,45,115,101,112,97,114,97,116,111,114,45,105,110,100,101,120,47,114,105,103,104,116,32,115,41,0,0,0,0,0};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,108,111,97,100,35,109,97,107,101,45,114,101,108,97,116,105,118,101,45,112,97,116,104,110,97,109,101,32,102,114,111,109,32,102,105,108,101,41,0};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,109,111,100,101,41,0,0,0,0,0};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,108,111,97,100,35,115,101,116,45,100,121,110,97,109,105,99,45,108,111,97,100,45,109,111,100,101,33,32,109,111,100,101,41,0,0,0,0,0,0};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,108,111,97,100,35,99,45,116,111,112,108,101,118,101,108,32,110,97,109,101,32,108,111,99,41,0,0,0,0,0,0};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,13),40,102,95,57,55,50,55,32,112,97,116,104,41,0,0,0};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,7),40,97,57,55,56,53,41,0};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,7),40,97,57,56,48,51,41,0};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,7),40,97,57,56,53,53,41,0};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,11),40,97,57,56,54,49,32,46,32,116,41,0,0,0,0,0};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,7),40,97,57,56,52,51,41,0};
static C_char C_TLS li179[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,51,54,49,32,103,50,51,54,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li180[] C_aligned={C_lihdr(0,0,17),40,97,57,56,55,55,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li181[] C_aligned={C_lihdr(0,0,14),40,100,111,108,111,111,112,50,51,53,49,32,120,41,0,0};
static C_char C_TLS li182[] C_aligned={C_lihdr(0,0,7),40,97,57,56,48,54,41,0};
static C_char C_TLS li183[] C_aligned={C_lihdr(0,0,7),40,97,57,57,52,49,41,0};
static C_char C_TLS li184[] C_aligned={C_lihdr(0,0,7),40,97,57,55,57,52,41,0};
static C_char C_TLS li185[] C_aligned={C_lihdr(0,0,7),40,97,57,57,53,48,41,0};
static C_char C_TLS li186[] C_aligned={C_lihdr(0,0,7),40,97,57,55,55,57,41,0};
static C_char C_TLS li187[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,108,111,97,100,35,108,111,97,100,47,105,110,116,101,114,110,97,108,32,105,110,112,117,116,32,101,118,97,108,117,97,116,111,114,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li188[] C_aligned={C_lihdr(0,0,29),40,115,99,104,101,109,101,35,108,111,97,100,32,102,105,108,101,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li189[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,108,111,97,100,35,108,111,97,100,45,114,101,108,97,116,105,118,101,32,102,105,108,101,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li190[] C_aligned={C_lihdr(0,0,8),40,97,49,48,49,51,55,41};
static C_char C_TLS li191[] C_aligned={C_lihdr(0,0,8),40,97,49,48,49,52,48,41};
static C_char C_TLS li192[] C_aligned={C_lihdr(0,0,8),40,97,49,48,49,52,51,41};
static C_char C_TLS li193[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,108,111,97,100,35,108,111,97,100,45,110,111,105,115,105,108,121,32,102,105,108,101,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li194[] C_aligned={C_lihdr(0,0,16),40,99,111,109,112,108,101,116,101,32,103,50,52,51,53,41};
static C_char C_TLS li195[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,108,105,98,115,41,0,0,0,0,0};
static C_char C_TLS li196[] C_aligned={C_lihdr(0,0,50),40,99,104,105,99,107,101,110,46,108,111,97,100,35,108,111,97,100,45,108,105,98,114,97,114,121,47,105,110,116,101,114,110,97,108,32,117,110,97,109,101,32,108,105,98,32,108,111,99,41,0,0,0,0,0,0};
static C_char C_TLS li197[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,108,111,97,100,45,108,105,98,114,97,114,121,32,117,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li198[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,108,111,97,100,35,108,111,97,100,45,108,105,98,114,97,114,121,32,117,110,97,109,101,32,46,32,114,101,115,116,41};
static C_char C_TLS li199[] C_aligned={C_lihdr(0,0,8),40,97,49,48,51,51,55,41};
static C_char C_TLS li200[] C_aligned={C_lihdr(0,0,17),40,100,111,108,111,111,112,50,53,51,55,32,120,32,120,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li201[] C_aligned={C_lihdr(0,0,8),40,97,49,48,51,52,50,41};
static C_char C_TLS li202[] C_aligned={C_lihdr(0,0,8),40,97,49,48,51,55,57,41};
static C_char C_TLS li203[] C_aligned={C_lihdr(0,0,8),40,97,49,48,51,51,49,41};
static C_char C_TLS li204[] C_aligned={C_lihdr(0,0,49),40,35,35,115,121,115,35,105,110,99,108,117,100,101,45,102,111,114,109,115,45,102,114,111,109,45,102,105,108,101,32,102,105,108,101,110,97,109,101,32,115,111,117,114,99,101,32,107,41,0,0,0,0,0,0,0};
static C_char C_TLS li205[] C_aligned={C_lihdr(0,0,5),40,101,114,114,41,0,0,0};
static C_char C_TLS li206[] C_aligned={C_lihdr(0,0,6),40,115,101,112,63,41,0,0};
static C_char C_TLS li207[] C_aligned={C_lihdr(0,0,9),40,99,104,101,99,107,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li208[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,105,100,41,0,0,0,0,0,0,0};
static C_char C_TLS li209[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,99,97,110,111,110,105,99,97,108,105,122,101,45,101,120,116,101,110,115,105,111,110,45,112,97,116,104,32,105,100,32,108,111,99,41,0,0,0,0,0,0};
static C_char C_TLS li210[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,108,111,97,100,35,102,105,108,101,45,101,120,105,115,116,115,63,32,110,97,109,101,41};
static C_char C_TLS li211[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,108,111,97,100,35,102,105,110,100,45,102,105,108,101,32,110,97,109,101,32,115,101,97,114,99,104,45,112,97,116,104,41,0,0,0,0,0,0,0};
static C_char C_TLS li212[] C_aligned={C_lihdr(0,0,12),40,99,104,101,99,107,32,112,97,116,104,41,0,0,0,0};
static C_char C_TLS li213[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,112,97,116,104,115,41,0,0,0,0};
static C_char C_TLS li214[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,108,111,97,100,35,102,105,110,100,45,100,121,110,97,109,105,99,45,101,120,116,101,110,115,105,111,110,32,112,97,116,104,32,105,110,99,63,41,0};
static C_char C_TLS li215[] C_aligned={C_lihdr(0,0,11),40,103,50,54,51,54,32,101,120,116,41,0,0,0,0,0};
static C_char C_TLS li216[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,108,111,97,100,35,108,111,97,100,45,101,120,116,101,110,115,105,111,110,32,105,100,32,97,108,116,101,114,110,97,116,101,115,32,108,111,99,41,0};
static C_char C_TLS li217[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,54,52,57,41,0,0,0,0,0};
static C_char C_TLS li218[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,54,53,57,32,103,50,54,54,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li219[] C_aligned={C_lihdr(0,0,28),40,99,104,105,99,107,101,110,46,108,111,97,100,35,114,101,113,117,105,114,101,32,46,32,105,100,115,41,0,0,0,0};
static C_char C_TLS li220[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,55,48,50,41,0,0,0,0,0};
static C_char C_TLS li221[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,55,49,50,32,103,50,55,49,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li222[] C_aligned={C_lihdr(0,0,28),40,99,104,105,99,107,101,110,46,108,111,97,100,35,112,114,111,118,105,100,101,32,46,32,105,100,115,41,0,0,0,0};
static C_char C_TLS li223[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,55,53,53,41,0,0,0,0,0};
static C_char C_TLS li224[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li225[] C_aligned={C_lihdr(0,0,30),40,99,104,105,99,107,101,110,46,108,111,97,100,35,112,114,111,118,105,100,101,100,63,32,46,32,105,100,115,41,0,0};
static C_char C_TLS li226[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,108,111,97,100,35,102,105,110,100,45,115,116,97,116,105,99,45,101,120,116,101,110,115,105,111,110,32,105,100,41,0};
static C_char C_TLS li227[] C_aligned={C_lihdr(0,0,14),40,97,49,49,48,57,49,32,103,50,56,50,49,41,0,0};
static C_char C_TLS li228[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,112,114,111,99,101,115,115,45,114,101,113,117,105,114,101,32,108,105,98,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li229[] C_aligned={C_lihdr(0,0,27),40,116,101,115,116,45,101,120,116,101,110,115,105,111,110,115,32,102,110,97,109,101,32,108,115,116,41,0,0,0,0,0};
static C_char C_TLS li230[] C_aligned={C_lihdr(0,0,12),40,116,101,115,116,32,102,110,97,109,101,41,0,0,0,0};
static C_char C_TLS li231[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,112,97,116,104,115,41,0,0,0,0};
static C_char C_TLS li232[] C_aligned={C_lihdr(0,0,55),40,35,35,115,121,115,35,114,101,115,111,108,118,101,45,105,110,99,108,117,100,101,45,102,105,108,101,110,97,109,101,32,102,110,97,109,101,32,101,120,116,115,32,114,101,112,111,32,115,111,117,114,99,101,41,0};
static C_char C_TLS li233[] C_aligned={C_lihdr(0,0,8),40,97,49,49,51,49,53,41};
static C_char C_TLS li234[] C_aligned={C_lihdr(0,0,11),40,97,49,49,51,48,57,32,101,120,41,0,0,0,0,0};
static C_char C_TLS li235[] C_aligned={C_lihdr(0,0,8),40,97,49,49,51,51,52,41};
static C_char C_TLS li236[] C_aligned={C_lihdr(0,0,8),40,97,49,49,51,52,54,41};
static C_char C_TLS li237[] C_aligned={C_lihdr(0,0,15),40,97,49,49,51,52,48,32,46,32,97,114,103,115,41,0};
static C_char C_TLS li238[] C_aligned={C_lihdr(0,0,8),40,97,49,49,51,50,56,41};
static C_char C_TLS li239[] C_aligned={C_lihdr(0,0,10),40,97,49,49,51,48,51,32,107,41,0,0,0,0,0,0};
static C_char C_TLS li240[] C_aligned={C_lihdr(0,0,16),40,114,117,110,45,115,97,102,101,32,116,104,117,110,107,41};
static C_char C_TLS li241[] C_aligned={C_lihdr(0,0,23),40,115,116,111,114,101,45,114,101,115,117,108,116,32,120,32,114,101,115,117,108,116,41,0};
static C_char C_TLS li242[] C_aligned={C_lihdr(0,0,8),40,97,49,49,51,54,55,41};
static C_char C_TLS li243[] C_aligned={C_lihdr(0,0,15),40,67,72,73,67,75,69,78,95,121,105,101,108,100,41,0};
static C_char C_TLS li244[] C_aligned={C_lihdr(0,0,8),40,97,49,49,51,55,57,41};
static C_char C_TLS li245[] C_aligned={C_lihdr(0,0,25),40,67,72,73,67,75,69,78,95,101,118,97,108,32,101,120,112,32,114,101,115,117,108,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li246[] C_aligned={C_lihdr(0,0,8),40,97,49,49,51,57,56,41};
static C_char C_TLS li247[] C_aligned={C_lihdr(0,0,32),40,67,72,73,67,75,69,78,95,101,118,97,108,95,115,116,114,105,110,103,32,115,116,114,32,114,101,115,117,108,116,41};
static C_char C_TLS li248[] C_aligned={C_lihdr(0,0,26),40,115,116,111,114,101,45,115,116,114,105,110,103,32,98,117,102,115,105,122,101,32,98,117,102,41,0,0,0,0,0,0};
static C_char C_TLS li249[] C_aligned={C_lihdr(0,0,8),40,97,49,49,52,51,52,41};
static C_char C_TLS li250[] C_aligned={C_lihdr(0,0,40),40,67,72,73,67,75,69,78,95,101,118,97,108,95,116,111,95,115,116,114,105,110,103,32,101,120,112,32,98,117,102,32,98,117,102,115,105,122,101,41};
static C_char C_TLS li251[] C_aligned={C_lihdr(0,0,8),40,97,49,49,52,54,51,41};
static C_char C_TLS li252[] C_aligned={C_lihdr(0,0,47),40,67,72,73,67,75,69,78,95,101,118,97,108,95,115,116,114,105,110,103,95,116,111,95,115,116,114,105,110,103,32,115,116,114,32,98,117,102,32,98,117,102,115,105,122,101,41,0};
static C_char C_TLS li253[] C_aligned={C_lihdr(0,0,8),40,97,49,49,52,57,55,41};
static C_char C_TLS li254[] C_aligned={C_lihdr(0,0,32),40,67,72,73,67,75,69,78,95,97,112,112,108,121,32,102,117,110,99,32,97,114,103,115,32,114,101,115,117,108,116,41};
static C_char C_TLS li255[] C_aligned={C_lihdr(0,0,8),40,97,49,49,53,49,51,41};
static C_char C_TLS li256[] C_aligned={C_lihdr(0,0,47),40,67,72,73,67,75,69,78,95,97,112,112,108,121,95,116,111,95,115,116,114,105,110,103,32,102,117,110,99,32,97,114,103,115,32,98,117,102,32,98,117,102,115,105,122,101,41,0};
static C_char C_TLS li257[] C_aligned={C_lihdr(0,0,8),40,97,49,49,53,52,50,41};
static C_char C_TLS li258[] C_aligned={C_lihdr(0,0,25),40,67,72,73,67,75,69,78,95,114,101,97,100,32,115,116,114,32,114,101,115,117,108,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li259[] C_aligned={C_lihdr(0,0,8),40,97,49,49,53,54,52,41};
static C_char C_TLS li260[] C_aligned={C_lihdr(0,0,18),40,67,72,73,67,75,69,78,95,108,111,97,100,32,115,116,114,41,0,0,0,0,0,0};
static C_char C_TLS li261[] C_aligned={C_lihdr(0,0,39),40,67,72,73,67,75,69,78,95,103,101,116,95,101,114,114,111,114,95,109,101,115,115,97,103,101,32,98,117,102,32,98,117,102,115,105,122,101,41,0};
static C_char C_TLS li262[] C_aligned={C_lihdr(0,0,10),40,97,49,49,53,57,49,32,120,41,0,0,0,0,0,0};
static C_char C_TLS li263[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,52,50,32,103,50,52,53,52,41,0,0,0,0};
static C_char C_TLS li264[] C_aligned={C_lihdr(0,0,12),40,97,49,49,55,51,50,32,101,32,112,41,0,0,0,0};
static C_char C_TLS li265[] C_aligned={C_lihdr(0,0,21),40,97,49,49,55,53,52,32,115,121,109,32,112,114,111,112,32,118,97,108,41,0,0,0};
static C_char C_TLS li266[] C_aligned={C_lihdr(0,0,8),40,97,49,49,55,56,49,41};
static C_char C_TLS li267[] C_aligned={C_lihdr(0,0,12),40,100,111,108,111,111,112,49,52,57,54,41,0,0,0,0};
static C_char C_TLS li268[] C_aligned={C_lihdr(0,0,8),40,97,49,49,55,56,54,41};
static C_char C_TLS li269[] C_aligned={C_lihdr(0,0,14),40,97,49,49,55,55,53,32,116,104,117,110,107,41,0,0};
static C_char C_TLS li270[] C_aligned={C_lihdr(0,0,8),40,97,49,49,55,52,56,41};
static C_char C_TLS li271[] C_aligned={C_lihdr(0,0,51),40,97,49,49,56,49,54,32,112,117,116,47,114,101,115,116,111,114,101,33,49,52,56,51,32,119,105,116,104,45,112,114,111,112,101,114,116,121,45,114,101,115,116,111,114,101,49,52,56,52,41,0,0,0,0,0};
static C_char C_TLS li272[] C_aligned={C_lihdr(0,0,8),40,97,49,49,56,53,49,41};
static C_char C_TLS li273[] C_aligned={C_lihdr(0,0,8),40,97,49,49,56,56,49,41};
static C_char C_TLS li274[] C_aligned={C_lihdr(0,0,8),40,97,49,49,56,57,49,41};
static C_char C_TLS li275[] C_aligned={C_lihdr(0,0,17),40,97,49,49,56,50,49,32,120,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li276[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_10000)
static void C_ccall f_10000(C_word c,C_word *av) C_noret;
C_noret_decl(f_10003)
static void C_ccall f_10003(C_word c,C_word *av) C_noret;
C_noret_decl(f_10006)
static void C_fcall f_10006(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10012)
static void C_ccall f_10012(C_word c,C_word *av) C_noret;
C_noret_decl(f_10024)
static void C_ccall f_10024(C_word c,C_word *av) C_noret;
C_noret_decl(f_10030)
static void C_ccall f_10030(C_word c,C_word *av) C_noret;
C_noret_decl(f_10090)
static void C_ccall f_10090(C_word c,C_word *av) C_noret;
C_noret_decl(f_10105)
static void C_ccall f_10105(C_word c,C_word *av) C_noret;
C_noret_decl(f_10112)
static void C_ccall f_10112(C_word c,C_word *av) C_noret;
C_noret_decl(f_10123)
static void C_ccall f_10123(C_word c,C_word *av) C_noret;
C_noret_decl(f_10127)
static void C_ccall f_10127(C_word c,C_word *av) C_noret;
C_noret_decl(f_10130)
static void C_ccall f_10130(C_word c,C_word *av) C_noret;
C_noret_decl(f_10133)
static void C_ccall f_10133(C_word c,C_word *av) C_noret;
C_noret_decl(f_10138)
static void C_ccall f_10138(C_word c,C_word *av) C_noret;
C_noret_decl(f_10141)
static void C_ccall f_10141(C_word c,C_word *av) C_noret;
C_noret_decl(f_10144)
static void C_ccall f_10144(C_word c,C_word *av) C_noret;
C_noret_decl(f_10149)
static void C_ccall f_10149(C_word c,C_word *av) C_noret;
C_noret_decl(f_10151)
static void C_ccall f_10151(C_word c,C_word *av) C_noret;
C_noret_decl(f_10158)
static void C_ccall f_10158(C_word c,C_word *av) C_noret;
C_noret_decl(f_10160)
static void C_fcall f_10160(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10164)
static void C_fcall f_10164(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10167)
static void C_ccall f_10167(C_word c,C_word *av) C_noret;
C_noret_decl(f_10170)
static void C_ccall f_10170(C_word c,C_word *av) C_noret;
C_noret_decl(f_10175)
static void C_fcall f_10175(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10189)
static void C_ccall f_10189(C_word c,C_word *av) C_noret;
C_noret_decl(f_10192)
static void C_ccall f_10192(C_word c,C_word *av) C_noret;
C_noret_decl(f_10206)
static void C_ccall f_10206(C_word c,C_word *av) C_noret;
C_noret_decl(f_10213)
static void C_ccall f_10213(C_word c,C_word *av) C_noret;
C_noret_decl(f_10216)
static void C_ccall f_10216(C_word c,C_word *av) C_noret;
C_noret_decl(f_10219)
static void C_ccall f_10219(C_word c,C_word *av) C_noret;
C_noret_decl(f_10232)
static void C_ccall f_10232(C_word c,C_word *av) C_noret;
C_noret_decl(f_10236)
static void C_ccall f_10236(C_word c,C_word *av) C_noret;
C_noret_decl(f_10242)
static void C_ccall f_10242(C_word c,C_word *av) C_noret;
C_noret_decl(f_10261)
static void C_ccall f_10261(C_word c,C_word *av) C_noret;
C_noret_decl(f_10264)
static void C_ccall f_10264(C_word c,C_word *av) C_noret;
C_noret_decl(f_10290)
static void C_ccall f_10290(C_word c,C_word *av) C_noret;
C_noret_decl(f_10317)
static void C_ccall f_10317(C_word c,C_word *av) C_noret;
C_noret_decl(f_10321)
static void C_ccall f_10321(C_word c,C_word *av) C_noret;
C_noret_decl(f_10324)
static void C_ccall f_10324(C_word c,C_word *av) C_noret;
C_noret_decl(f_10327)
static void C_ccall f_10327(C_word c,C_word *av) C_noret;
C_noret_decl(f_10332)
static void C_ccall f_10332(C_word c,C_word *av) C_noret;
C_noret_decl(f_10338)
static void C_ccall f_10338(C_word c,C_word *av) C_noret;
C_noret_decl(f_10343)
static void C_ccall f_10343(C_word c,C_word *av) C_noret;
C_noret_decl(f_10351)
static void C_ccall f_10351(C_word c,C_word *av) C_noret;
C_noret_decl(f_10353)
static void C_fcall f_10353(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10367)
static void C_ccall f_10367(C_word c,C_word *av) C_noret;
C_noret_decl(f_10374)
static void C_ccall f_10374(C_word c,C_word *av) C_noret;
C_noret_decl(f_10380)
static void C_ccall f_10380(C_word c,C_word *av) C_noret;
C_noret_decl(f_10386)
static void C_ccall f_10386(C_word c,C_word *av) C_noret;
C_noret_decl(f_10397)
static void C_ccall f_10397(C_word c,C_word *av) C_noret;
C_noret_decl(f_10400)
static void C_fcall f_10400(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10406)
static C_word C_fcall f_10406(C_word t0);
C_noret_decl(f_10418)
static void C_ccall f_10418(C_word c,C_word *av) C_noret;
C_noret_decl(f_10423)
static void C_fcall f_10423(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10449)
static void C_ccall f_10449(C_word c,C_word *av) C_noret;
C_noret_decl(f_10462)
static void C_ccall f_10462(C_word c,C_word *av) C_noret;
C_noret_decl(f_10499)
static void C_fcall f_10499(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10516)
static void C_ccall f_10516(C_word c,C_word *av) C_noret;
C_noret_decl(f_10524)
static void C_ccall f_10524(C_word c,C_word *av) C_noret;
C_noret_decl(f_10553)
static void C_fcall f_10553(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10560)
static void C_ccall f_10560(C_word c,C_word *av) C_noret;
C_noret_decl(f_10562)
static void C_ccall f_10562(C_word c,C_word *av) C_noret;
C_noret_decl(f_10591)
static void C_ccall f_10591(C_word c,C_word *av) C_noret;
C_noret_decl(f_10603)
static void C_ccall f_10603(C_word c,C_word *av) C_noret;
C_noret_decl(f_10609)
static void C_ccall f_10609(C_word c,C_word *av) C_noret;
C_noret_decl(f_10613)
static void C_ccall f_10613(C_word c,C_word *av) C_noret;
C_noret_decl(f_10616)
static void C_ccall f_10616(C_word c,C_word *av) C_noret;
C_noret_decl(f_10618)
static void C_fcall f_10618(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10622)
static void C_ccall f_10622(C_word c,C_word *av) C_noret;
C_noret_decl(f_10625)
static void C_ccall f_10625(C_word c,C_word *av) C_noret;
C_noret_decl(f_10635)
static void C_ccall f_10635(C_word c,C_word *av) C_noret;
C_noret_decl(f_10647)
static void C_ccall f_10647(C_word c,C_word *av) C_noret;
C_noret_decl(f_10654)
static void C_ccall f_10654(C_word c,C_word *av) C_noret;
C_noret_decl(f_10661)
static void C_ccall f_10661(C_word c,C_word *av) C_noret;
C_noret_decl(f_10663)
static void C_fcall f_10663(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10676)
static void C_ccall f_10676(C_word c,C_word *av) C_noret;
C_noret_decl(f_10708)
static void C_ccall f_10708(C_word c,C_word *av) C_noret;
C_noret_decl(f_10714)
static void C_ccall f_10714(C_word c,C_word *av) C_noret;
C_noret_decl(f_10729)
static void C_ccall f_10729(C_word c,C_word *av) C_noret;
C_noret_decl(f_10733)
static void C_fcall f_10733(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10737)
static void C_ccall f_10737(C_word c,C_word *av) C_noret;
C_noret_decl(f_10748)
static void C_ccall f_10748(C_word c,C_word *av) C_noret;
C_noret_decl(f_10752)
static void C_ccall f_10752(C_word c,C_word *av) C_noret;
C_noret_decl(f_10754)
static void C_ccall f_10754(C_word c,C_word *av) C_noret;
C_noret_decl(f_10773)
static void C_fcall f_10773(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10783)
static void C_ccall f_10783(C_word c,C_word *av) C_noret;
C_noret_decl(f_10796)
static C_word C_fcall f_10796(C_word t0);
C_noret_decl(f_10819)
static void C_ccall f_10819(C_word c,C_word *av) C_noret;
C_noret_decl(f_10838)
static void C_fcall f_10838(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10848)
static void C_ccall f_10848(C_word c,C_word *av) C_noret;
C_noret_decl(f_10861)
static C_word C_fcall f_10861(C_word t0);
C_noret_decl(f_10884)
static void C_ccall f_10884(C_word c,C_word *av) C_noret;
C_noret_decl(f_10898)
static C_word C_fcall f_10898(C_word t0);
C_noret_decl(f_10921)
static void C_ccall f_10921(C_word c,C_word *av) C_noret;
C_noret_decl(f_10925)
static void C_ccall f_10925(C_word c,C_word *av) C_noret;
C_noret_decl(f_10932)
static void C_ccall f_10932(C_word c,C_word *av) C_noret;
C_noret_decl(f_10936)
static void C_ccall f_10936(C_word c,C_word *av) C_noret;
C_noret_decl(f_10941)
static void C_ccall f_10941(C_word c,C_word *av) C_noret;
C_noret_decl(f_10975)
static void C_ccall f_10975(C_word c,C_word *av) C_noret;
C_noret_decl(f_11017)
static void C_ccall f_11017(C_word c,C_word *av) C_noret;
C_noret_decl(f_11060)
static void C_ccall f_11060(C_word c,C_word *av) C_noret;
C_noret_decl(f_11092)
static void C_ccall f_11092(C_word c,C_word *av) C_noret;
C_noret_decl(f_11162)
static void C_ccall f_11162(C_word c,C_word *av) C_noret;
C_noret_decl(f_11165)
static void C_fcall f_11165(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11178)
static void C_ccall f_11178(C_word c,C_word *av) C_noret;
C_noret_decl(f_11181)
static void C_ccall f_11181(C_word c,C_word *av) C_noret;
C_noret_decl(f_11184)
static void C_ccall f_11184(C_word c,C_word *av) C_noret;
C_noret_decl(f_11198)
static void C_fcall f_11198(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11234)
static void C_ccall f_11234(C_word c,C_word *av) C_noret;
C_noret_decl(f_11237)
static void C_ccall f_11237(C_word c,C_word *av) C_noret;
C_noret_decl(f_11247)
static void C_ccall f_11247(C_word c,C_word *av) C_noret;
C_noret_decl(f_11249)
static void C_fcall f_11249(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11259)
static void C_ccall f_11259(C_word c,C_word *av) C_noret;
C_noret_decl(f_11273)
static void C_ccall f_11273(C_word c,C_word *av) C_noret;
C_noret_decl(f_11284)
static void C_ccall f_11284(C_word c,C_word *av) C_noret;
C_noret_decl(f_11291)
static void C_ccall f_11291(C_word c,C_word *av) C_noret;
C_noret_decl(f_11294)
static void C_fcall f_11294(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11299)
static void C_ccall f_11299(C_word c,C_word *av) C_noret;
C_noret_decl(f_11304)
static void C_ccall f_11304(C_word c,C_word *av) C_noret;
C_noret_decl(f_11310)
static void C_ccall f_11310(C_word c,C_word *av) C_noret;
C_noret_decl(f_11316)
static void C_ccall f_11316(C_word c,C_word *av) C_noret;
C_noret_decl(f_11320)
static void C_ccall f_11320(C_word c,C_word *av) C_noret;
C_noret_decl(f_11323)
static void C_ccall f_11323(C_word c,C_word *av) C_noret;
C_noret_decl(f_11327)
static void C_ccall f_11327(C_word c,C_word *av) C_noret;
C_noret_decl(f_11329)
static void C_ccall f_11329(C_word c,C_word *av) C_noret;
C_noret_decl(f_11335)
static void C_ccall f_11335(C_word c,C_word *av) C_noret;
C_noret_decl(f_11341)
static void C_ccall f_11341(C_word c,C_word *av) C_noret;
C_noret_decl(f_11347)
static void C_ccall f_11347(C_word c,C_word *av) C_noret;
C_noret_decl(f_11353)
static void C_fcall f_11353(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11357)
static void C_ccall f_11357(C_word c,C_word *av) C_noret;
C_noret_decl(f_11362)
static void C_ccall f_11362(C_word c,C_word *av) C_noret;
C_noret_decl(f_11368)
static void C_ccall f_11368(C_word c,C_word *av) C_noret;
C_noret_decl(f_11372)
static void C_ccall f_11372(C_word c,C_word *av) C_noret;
C_noret_decl(f_11374)
static void C_ccall f_11374(C_word c,C_word *av) C_noret;
C_noret_decl(f_11380)
static void C_ccall f_11380(C_word c,C_word *av) C_noret;
C_noret_decl(f_11388)
static void C_ccall f_11388(C_word c,C_word *av) C_noret;
C_noret_decl(f_11390)
static void C_ccall f_11390(C_word c,C_word *av) C_noret;
C_noret_decl(f_11394)
static void C_ccall f_11394(C_word c,C_word *av) C_noret;
C_noret_decl(f_11399)
static void C_ccall f_11399(C_word c,C_word *av) C_noret;
C_noret_decl(f_11403)
static void C_ccall f_11403(C_word c,C_word *av) C_noret;
C_noret_decl(f_11410)
static void C_ccall f_11410(C_word c,C_word *av) C_noret;
C_noret_decl(f_11414)
static void C_ccall f_11414(C_word c,C_word *av) C_noret;
C_noret_decl(f_11416)
static C_word C_fcall f_11416(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_11429)
static void C_ccall f_11429(C_word c,C_word *av) C_noret;
C_noret_decl(f_11435)
static void C_ccall f_11435(C_word c,C_word *av) C_noret;
C_noret_decl(f_11439)
static void C_ccall f_11439(C_word c,C_word *av) C_noret;
C_noret_decl(f_11442)
static void C_ccall f_11442(C_word c,C_word *av) C_noret;
C_noret_decl(f_11449)
static void C_ccall f_11449(C_word c,C_word *av) C_noret;
C_noret_decl(f_11453)
static void C_ccall f_11453(C_word c,C_word *av) C_noret;
C_noret_decl(f_11455)
static void C_ccall f_11455(C_word c,C_word *av) C_noret;
C_noret_decl(f_11459)
static void C_ccall f_11459(C_word c,C_word *av) C_noret;
C_noret_decl(f_11464)
static void C_ccall f_11464(C_word c,C_word *av) C_noret;
C_noret_decl(f_11468)
static void C_ccall f_11468(C_word c,C_word *av) C_noret;
C_noret_decl(f_11471)
static void C_ccall f_11471(C_word c,C_word *av) C_noret;
C_noret_decl(f_11478)
static void C_ccall f_11478(C_word c,C_word *av) C_noret;
C_noret_decl(f_11482)
static void C_ccall f_11482(C_word c,C_word *av) C_noret;
C_noret_decl(f_11486)
static void C_ccall f_11486(C_word c,C_word *av) C_noret;
C_noret_decl(f_11490)
static void C_ccall f_11490(C_word c,C_word *av) C_noret;
C_noret_decl(f_11492)
static void C_ccall f_11492(C_word c,C_word *av) C_noret;
C_noret_decl(f_11498)
static void C_ccall f_11498(C_word c,C_word *av) C_noret;
C_noret_decl(f_11506)
static void C_ccall f_11506(C_word c,C_word *av) C_noret;
C_noret_decl(f_11508)
static void C_ccall f_11508(C_word c,C_word *av) C_noret;
C_noret_decl(f_11514)
static void C_ccall f_11514(C_word c,C_word *av) C_noret;
C_noret_decl(f_11518)
static void C_ccall f_11518(C_word c,C_word *av) C_noret;
C_noret_decl(f_11521)
static void C_ccall f_11521(C_word c,C_word *av) C_noret;
C_noret_decl(f_11528)
static void C_ccall f_11528(C_word c,C_word *av) C_noret;
C_noret_decl(f_11532)
static void C_ccall f_11532(C_word c,C_word *av) C_noret;
C_noret_decl(f_11534)
static void C_ccall f_11534(C_word c,C_word *av) C_noret;
C_noret_decl(f_11538)
static void C_ccall f_11538(C_word c,C_word *av) C_noret;
C_noret_decl(f_11543)
static void C_ccall f_11543(C_word c,C_word *av) C_noret;
C_noret_decl(f_11547)
static void C_ccall f_11547(C_word c,C_word *av) C_noret;
C_noret_decl(f_11554)
static void C_ccall f_11554(C_word c,C_word *av) C_noret;
C_noret_decl(f_11556)
static void C_ccall f_11556(C_word c,C_word *av) C_noret;
C_noret_decl(f_11560)
static void C_ccall f_11560(C_word c,C_word *av) C_noret;
C_noret_decl(f_11565)
static void C_ccall f_11565(C_word c,C_word *av) C_noret;
C_noret_decl(f_11569)
static void C_ccall f_11569(C_word c,C_word *av) C_noret;
C_noret_decl(f_11571)
static void C_ccall f_11571(C_word c,C_word *av) C_noret;
C_noret_decl(f_11583)
static void C_ccall f_11583(C_word c,C_word *av) C_noret;
C_noret_decl(f_11590)
static void C_ccall f_11590(C_word c,C_word *av) C_noret;
C_noret_decl(f_11592)
static void C_ccall f_11592(C_word c,C_word *av) C_noret;
C_noret_decl(f_11598)
static void C_fcall f_11598(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11623)
static void C_ccall f_11623(C_word c,C_word *av) C_noret;
C_noret_decl(f_11637)
static void C_ccall f_11637(C_word c,C_word *av) C_noret;
C_noret_decl(f_11649)
static void C_ccall f_11649(C_word c,C_word *av) C_noret;
C_noret_decl(f_11653)
static void C_ccall f_11653(C_word c,C_word *av) C_noret;
C_noret_decl(f_11680)
static void C_ccall f_11680(C_word c,C_word *av) C_noret;
C_noret_decl(f_11684)
static void C_ccall f_11684(C_word c,C_word *av) C_noret;
C_noret_decl(f_11688)
static void C_ccall f_11688(C_word c,C_word *av) C_noret;
C_noret_decl(f_11692)
static void C_ccall f_11692(C_word c,C_word *av) C_noret;
C_noret_decl(f_11699)
static void C_ccall f_11699(C_word c,C_word *av) C_noret;
C_noret_decl(f_11703)
static void C_ccall f_11703(C_word c,C_word *av) C_noret;
C_noret_decl(f_11711)
static void C_ccall f_11711(C_word c,C_word *av) C_noret;
C_noret_decl(f_11719)
static void C_ccall f_11719(C_word c,C_word *av) C_noret;
C_noret_decl(f_11727)
static void C_ccall f_11727(C_word c,C_word *av) C_noret;
C_noret_decl(f_11733)
static void C_ccall f_11733(C_word c,C_word *av) C_noret;
C_noret_decl(f_11737)
static void C_ccall f_11737(C_word c,C_word *av) C_noret;
C_noret_decl(f_11740)
static void C_ccall f_11740(C_word c,C_word *av) C_noret;
C_noret_decl(f_11749)
static void C_ccall f_11749(C_word c,C_word *av) C_noret;
C_noret_decl(f_11755)
static void C_ccall f_11755(C_word c,C_word *av) C_noret;
C_noret_decl(f_11759)
static void C_fcall f_11759(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11762)
static void C_ccall f_11762(C_word c,C_word *av) C_noret;
C_noret_decl(f_11774)
static void C_ccall f_11774(C_word c,C_word *av) C_noret;
C_noret_decl(f_11776)
static void C_ccall f_11776(C_word c,C_word *av) C_noret;
C_noret_decl(f_11782)
static void C_ccall f_11782(C_word c,C_word *av) C_noret;
C_noret_decl(f_11787)
static void C_ccall f_11787(C_word c,C_word *av) C_noret;
C_noret_decl(f_11791)
static void C_ccall f_11791(C_word c,C_word *av) C_noret;
C_noret_decl(f_11794)
static void C_fcall f_11794(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11804)
static void C_ccall f_11804(C_word c,C_word *av) C_noret;
C_noret_decl(f_11817)
static void C_ccall f_11817(C_word c,C_word *av) C_noret;
C_noret_decl(f_11822)
static void C_ccall f_11822(C_word c,C_word *av) C_noret;
C_noret_decl(f_11829)
static void C_ccall f_11829(C_word c,C_word *av) C_noret;
C_noret_decl(f_11832)
static void C_ccall f_11832(C_word c,C_word *av) C_noret;
C_noret_decl(f_11844)
static void C_ccall f_11844(C_word c,C_word *av) C_noret;
C_noret_decl(f_11852)
static void C_ccall f_11852(C_word c,C_word *av) C_noret;
C_noret_decl(f_11856)
static void C_ccall f_11856(C_word c,C_word *av) C_noret;
C_noret_decl(f_11859)
static void C_ccall f_11859(C_word c,C_word *av) C_noret;
C_noret_decl(f_11863)
static void C_ccall f_11863(C_word c,C_word *av) C_noret;
C_noret_decl(f_11867)
static void C_ccall f_11867(C_word c,C_word *av) C_noret;
C_noret_decl(f_11870)
static void C_ccall f_11870(C_word c,C_word *av) C_noret;
C_noret_decl(f_11873)
static void C_ccall f_11873(C_word c,C_word *av) C_noret;
C_noret_decl(f_11882)
static void C_ccall f_11882(C_word c,C_word *av) C_noret;
C_noret_decl(f_11892)
static void C_ccall f_11892(C_word c,C_word *av) C_noret;
C_noret_decl(f_11896)
static void C_ccall f_11896(C_word c,C_word *av) C_noret;
C_noret_decl(f_11899)
static void C_ccall f_11899(C_word c,C_word *av) C_noret;
C_noret_decl(f_11902)
static void C_ccall f_11902(C_word c,C_word *av) C_noret;
C_noret_decl(f_11905)
static void C_ccall f_11905(C_word c,C_word *av) C_noret;
C_noret_decl(f_11913)
static void C_ccall f_11913(C_word c,C_word *av) C_noret;
C_noret_decl(f_11922)
static void C_ccall f_11922(C_word c,C_word *av) C_noret;
C_noret_decl(f_3615)
static void C_ccall f_3615(C_word c,C_word *av) C_noret;
C_noret_decl(f_3618)
static void C_ccall f_3618(C_word c,C_word *av) C_noret;
C_noret_decl(f_3621)
static void C_ccall f_3621(C_word c,C_word *av) C_noret;
C_noret_decl(f_3624)
static void C_ccall f_3624(C_word c,C_word *av) C_noret;
C_noret_decl(f_3632)
static void C_ccall f_3632(C_word c,C_word *av) C_noret;
C_noret_decl(f_3645)
static void C_ccall f_3645(C_word c,C_word *av) C_noret;
C_noret_decl(f_3653)
static void C_ccall f_3653(C_word c,C_word *av) C_noret;
C_noret_decl(f_3657)
static void C_ccall f_3657(C_word c,C_word *av) C_noret;
C_noret_decl(f_3660)
static void C_ccall f_3660(C_word c,C_word *av) C_noret;
C_noret_decl(f_3663)
static void C_ccall f_3663(C_word c,C_word *av) C_noret;
C_noret_decl(f_3668)
static void C_ccall f_3668(C_word c,C_word *av) C_noret;
C_noret_decl(f_3670)
static void C_fcall f_3670(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3697)
static void C_fcall f_3697(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3710)
static void C_fcall f_3710(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3732)
static void C_fcall f_3732(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3736)
static void C_ccall f_3736(C_word c,C_word *av) C_noret;
C_noret_decl(f_3744)
static void C_ccall f_3744(C_word c,C_word *av) C_noret;
C_noret_decl(f_3750)
static void C_ccall f_3750(C_word c,C_word *av) C_noret;
C_noret_decl(f_3757)
static void C_ccall f_3757(C_word c,C_word *av) C_noret;
C_noret_decl(f_3764)
static void C_ccall f_3764(C_word c,C_word *av) C_noret;
C_noret_decl(f_3766)
static void C_fcall f_3766(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3770)
static void C_ccall f_3770(C_word c,C_word *av) C_noret;
C_noret_decl(f_3778)
static void C_fcall f_3778(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3795)
static void C_fcall f_3795(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3825)
static C_word C_fcall f_3825(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3855)
static C_word C_fcall f_3855(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4);
C_noret_decl(f_3869)
static C_word C_fcall f_3869(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3879)
static void C_fcall f_3879(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3885)
static void C_fcall f_3885(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_3892)
static void C_ccall f_3892(C_word c,C_word *av) C_noret;
C_noret_decl(f_3893)
static void C_ccall f_3893(C_word c,C_word *av) C_noret;
C_noret_decl(f_3905)
static void C_ccall f_3905(C_word c,C_word *av) C_noret;
C_noret_decl(f_3911)
static void C_ccall f_3911(C_word c,C_word *av) C_noret;
C_noret_decl(f_3921)
static void C_ccall f_3921(C_word c,C_word *av) C_noret;
C_noret_decl(f_3924)
static void C_fcall f_3924(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3931)
static void C_ccall f_3931(C_word c,C_word *av) C_noret;
C_noret_decl(f_3941)
static void C_ccall f_3941(C_word c,C_word *av) C_noret;
C_noret_decl(f_3942)
static void C_ccall f_3942(C_word c,C_word *av) C_noret;
C_noret_decl(f_3947)
static void C_ccall f_3947(C_word c,C_word *av) C_noret;
C_noret_decl(f_3951)
static void C_fcall f_3951(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3972)
static void C_ccall f_3972(C_word c,C_word *av) C_noret;
C_noret_decl(f_3994)
static void C_ccall f_3994(C_word c,C_word *av) C_noret;
C_noret_decl(f_4005)
static void C_ccall f_4005(C_word c,C_word *av) C_noret;
C_noret_decl(f_4020)
static void C_ccall f_4020(C_word c,C_word *av) C_noret;
C_noret_decl(f_4039)
static void C_ccall f_4039(C_word c,C_word *av) C_noret;
C_noret_decl(f_4062)
static void C_ccall f_4062(C_word c,C_word *av) C_noret;
C_noret_decl(f_4083)
static void C_ccall f_4083(C_word c,C_word *av) C_noret;
C_noret_decl(f_4102)
static void C_ccall f_4102(C_word c,C_word *av) C_noret;
C_noret_decl(f_4109)
static void C_ccall f_4109(C_word c,C_word *av) C_noret;
C_noret_decl(f_4117)
static void C_ccall f_4117(C_word c,C_word *av) C_noret;
C_noret_decl(f_4125)
static void C_ccall f_4125(C_word c,C_word *av) C_noret;
C_noret_decl(f_4133)
static void C_ccall f_4133(C_word c,C_word *av) C_noret;
C_noret_decl(f_4135)
static void C_ccall f_4135(C_word c,C_word *av) C_noret;
C_noret_decl(f_4154)
static void C_ccall f_4154(C_word c,C_word *av) C_noret;
C_noret_decl(f_4156)
static void C_ccall f_4156(C_word c,C_word *av) C_noret;
C_noret_decl(f_4166)
static void C_ccall f_4166(C_word c,C_word *av) C_noret;
C_noret_decl(f_4167)
static void C_ccall f_4167(C_word c,C_word *av) C_noret;
C_noret_decl(f_4189)
static void C_ccall f_4189(C_word c,C_word *av) C_noret;
C_noret_decl(f_4204)
static void C_ccall f_4204(C_word c,C_word *av) C_noret;
C_noret_decl(f_4213)
static void C_ccall f_4213(C_word c,C_word *av) C_noret;
C_noret_decl(f_4220)
static void C_ccall f_4220(C_word c,C_word *av) C_noret;
C_noret_decl(f_4228)
static void C_ccall f_4228(C_word c,C_word *av) C_noret;
C_noret_decl(f_4236)
static void C_ccall f_4236(C_word c,C_word *av) C_noret;
C_noret_decl(f_4244)
static void C_ccall f_4244(C_word c,C_word *av) C_noret;
C_noret_decl(f_4252)
static void C_ccall f_4252(C_word c,C_word *av) C_noret;
C_noret_decl(f_4260)
static void C_ccall f_4260(C_word c,C_word *av) C_noret;
C_noret_decl(f_4268)
static void C_ccall f_4268(C_word c,C_word *av) C_noret;
C_noret_decl(f_4270)
static void C_ccall f_4270(C_word c,C_word *av) C_noret;
C_noret_decl(f_4299)
static void C_ccall f_4299(C_word c,C_word *av) C_noret;
C_noret_decl(f_4333)
static void C_ccall f_4333(C_word c,C_word *av) C_noret;
C_noret_decl(f_4343)
static void C_ccall f_4343(C_word c,C_word *av) C_noret;
C_noret_decl(f_4346)
static void C_ccall f_4346(C_word c,C_word *av) C_noret;
C_noret_decl(f_4349)
static void C_ccall f_4349(C_word c,C_word *av) C_noret;
C_noret_decl(f_4350)
static void C_ccall f_4350(C_word c,C_word *av) C_noret;
C_noret_decl(f_4357)
static void C_ccall f_4357(C_word c,C_word *av) C_noret;
C_noret_decl(f_4431)
static void C_ccall f_4431(C_word c,C_word *av) C_noret;
C_noret_decl(f_4434)
static void C_ccall f_4434(C_word c,C_word *av) C_noret;
C_noret_decl(f_4435)
static void C_ccall f_4435(C_word c,C_word *av) C_noret;
C_noret_decl(f_4439)
static void C_ccall f_4439(C_word c,C_word *av) C_noret;
C_noret_decl(f_4453)
static void C_ccall f_4453(C_word c,C_word *av) C_noret;
C_noret_decl(f_4456)
static void C_ccall f_4456(C_word c,C_word *av) C_noret;
C_noret_decl(f_4459)
static void C_ccall f_4459(C_word c,C_word *av) C_noret;
C_noret_decl(f_4460)
static void C_ccall f_4460(C_word c,C_word *av) C_noret;
C_noret_decl(f_4464)
static void C_ccall f_4464(C_word c,C_word *av) C_noret;
C_noret_decl(f_4467)
static void C_ccall f_4467(C_word c,C_word *av) C_noret;
C_noret_decl(f_4505)
static void C_ccall f_4505(C_word c,C_word *av) C_noret;
C_noret_decl(f_4529)
static void C_ccall f_4529(C_word c,C_word *av) C_noret;
C_noret_decl(f_4535)
static void C_ccall f_4535(C_word c,C_word *av) C_noret;
C_noret_decl(f_4539)
static void C_ccall f_4539(C_word c,C_word *av) C_noret;
C_noret_decl(f_4548)
static void C_ccall f_4548(C_word c,C_word *av) C_noret;
C_noret_decl(f_4552)
static void C_ccall f_4552(C_word c,C_word *av) C_noret;
C_noret_decl(f_4559)
static void C_ccall f_4559(C_word c,C_word *av) C_noret;
C_noret_decl(f_4560)
static void C_ccall f_4560(C_word c,C_word *av) C_noret;
C_noret_decl(f_4564)
static void C_ccall f_4564(C_word c,C_word *av) C_noret;
C_noret_decl(f_4590)
static void C_ccall f_4590(C_word c,C_word *av) C_noret;
C_noret_decl(f_4595)
static void C_ccall f_4595(C_word c,C_word *av) C_noret;
C_noret_decl(f_4607)
static void C_ccall f_4607(C_word c,C_word *av) C_noret;
C_noret_decl(f_4608)
static void C_ccall f_4608(C_word c,C_word *av) C_noret;
C_noret_decl(f_4617)
static void C_ccall f_4617(C_word c,C_word *av) C_noret;
C_noret_decl(f_4644)
static void C_ccall f_4644(C_word c,C_word *av) C_noret;
C_noret_decl(f_4653)
static void C_ccall f_4653(C_word c,C_word *av) C_noret;
C_noret_decl(f_4659)
static void C_ccall f_4659(C_word c,C_word *av) C_noret;
C_noret_decl(f_4662)
static void C_ccall f_4662(C_word c,C_word *av) C_noret;
C_noret_decl(f_4671)
static void C_ccall f_4671(C_word c,C_word *av) C_noret;
C_noret_decl(f_4672)
static void C_ccall f_4672(C_word c,C_word *av) C_noret;
C_noret_decl(f_4688)
static void C_ccall f_4688(C_word c,C_word *av) C_noret;
C_noret_decl(f_4692)
static void C_ccall f_4692(C_word c,C_word *av) C_noret;
C_noret_decl(f_4705)
static void C_ccall f_4705(C_word c,C_word *av) C_noret;
C_noret_decl(f_4708)
static void C_ccall f_4708(C_word c,C_word *av) C_noret;
C_noret_decl(f_4709)
static void C_ccall f_4709(C_word c,C_word *av) C_noret;
C_noret_decl(f_4725)
static void C_ccall f_4725(C_word c,C_word *av) C_noret;
C_noret_decl(f_4729)
static void C_ccall f_4729(C_word c,C_word *av) C_noret;
C_noret_decl(f_4733)
static void C_ccall f_4733(C_word c,C_word *av) C_noret;
C_noret_decl(f_4741)
static void C_ccall f_4741(C_word c,C_word *av) C_noret;
C_noret_decl(f_4754)
static void C_ccall f_4754(C_word c,C_word *av) C_noret;
C_noret_decl(f_4757)
static void C_ccall f_4757(C_word c,C_word *av) C_noret;
C_noret_decl(f_4763)
static void C_ccall f_4763(C_word c,C_word *av) C_noret;
C_noret_decl(f_4764)
static void C_ccall f_4764(C_word c,C_word *av) C_noret;
C_noret_decl(f_4780)
static void C_ccall f_4780(C_word c,C_word *av) C_noret;
C_noret_decl(f_4784)
static void C_ccall f_4784(C_word c,C_word *av) C_noret;
C_noret_decl(f_4788)
static void C_ccall f_4788(C_word c,C_word *av) C_noret;
C_noret_decl(f_4792)
static void C_ccall f_4792(C_word c,C_word *av) C_noret;
C_noret_decl(f_4800)
static void C_ccall f_4800(C_word c,C_word *av) C_noret;
C_noret_decl(f_4808)
static void C_ccall f_4808(C_word c,C_word *av) C_noret;
C_noret_decl(f_4821)
static void C_ccall f_4821(C_word c,C_word *av) C_noret;
C_noret_decl(f_4824)
static void C_ccall f_4824(C_word c,C_word *av) C_noret;
C_noret_decl(f_4830)
static void C_ccall f_4830(C_word c,C_word *av) C_noret;
C_noret_decl(f_4833)
static void C_ccall f_4833(C_word c,C_word *av) C_noret;
C_noret_decl(f_4834)
static void C_ccall f_4834(C_word c,C_word *av) C_noret;
C_noret_decl(f_4850)
static void C_ccall f_4850(C_word c,C_word *av) C_noret;
C_noret_decl(f_4854)
static void C_ccall f_4854(C_word c,C_word *av) C_noret;
C_noret_decl(f_4858)
static void C_ccall f_4858(C_word c,C_word *av) C_noret;
C_noret_decl(f_4862)
static void C_ccall f_4862(C_word c,C_word *av) C_noret;
C_noret_decl(f_4866)
static void C_ccall f_4866(C_word c,C_word *av) C_noret;
C_noret_decl(f_4874)
static void C_ccall f_4874(C_word c,C_word *av) C_noret;
C_noret_decl(f_4882)
static void C_ccall f_4882(C_word c,C_word *av) C_noret;
C_noret_decl(f_4890)
static void C_ccall f_4890(C_word c,C_word *av) C_noret;
C_noret_decl(f_4898)
static void C_fcall f_4898(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4911)
static void C_ccall f_4911(C_word c,C_word *av) C_noret;
C_noret_decl(f_4912)
static void C_ccall f_4912(C_word c,C_word *av) C_noret;
C_noret_decl(f_4916)
static void C_ccall f_4916(C_word c,C_word *av) C_noret;
C_noret_decl(f_4919)
static void C_ccall f_4919(C_word c,C_word *av) C_noret;
C_noret_decl(f_4928)
static void C_fcall f_4928(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4953)
static void C_ccall f_4953(C_word c,C_word *av) C_noret;
C_noret_decl(f_4958)
static void C_fcall f_4958(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4983)
static void C_ccall f_4983(C_word c,C_word *av) C_noret;
C_noret_decl(f_5000)
static void C_ccall f_5000(C_word c,C_word *av) C_noret;
C_noret_decl(f_5004)
static void C_ccall f_5004(C_word c,C_word *av) C_noret;
C_noret_decl(f_5008)
static void C_ccall f_5008(C_word c,C_word *av) C_noret;
C_noret_decl(f_5011)
static void C_ccall f_5011(C_word c,C_word *av) C_noret;
C_noret_decl(f_5017)
static void C_ccall f_5017(C_word c,C_word *av) C_noret;
C_noret_decl(f_5025)
static void C_ccall f_5025(C_word c,C_word *av) C_noret;
C_noret_decl(f_5033)
static void C_ccall f_5033(C_word c,C_word *av) C_noret;
C_noret_decl(f_5035)
static void C_ccall f_5035(C_word c,C_word *av) C_noret;
C_noret_decl(f_5039)
static void C_ccall f_5039(C_word c,C_word *av) C_noret;
C_noret_decl(f_5042)
static void C_ccall f_5042(C_word c,C_word *av) C_noret;
C_noret_decl(f_5047)
static void C_ccall f_5047(C_word c,C_word *av) C_noret;
C_noret_decl(f_5049)
static void C_fcall f_5049(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5074)
static void C_ccall f_5074(C_word c,C_word *av) C_noret;
C_noret_decl(f_5083)
static void C_fcall f_5083(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5156)
static void C_ccall f_5156(C_word c,C_word *av) C_noret;
C_noret_decl(f_5160)
static void C_ccall f_5160(C_word c,C_word *av) C_noret;
C_noret_decl(f_5180)
static void C_ccall f_5180(C_word c,C_word *av) C_noret;
C_noret_decl(f_5194)
static void C_fcall f_5194(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5228)
static void C_fcall f_5228(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5278)
static void C_ccall f_5278(C_word c,C_word *av) C_noret;
C_noret_decl(f_5287)
static void C_ccall f_5287(C_word c,C_word *av) C_noret;
C_noret_decl(f_5313)
static void C_ccall f_5313(C_word c,C_word *av) C_noret;
C_noret_decl(f_5340)
static void C_ccall f_5340(C_word c,C_word *av) C_noret;
C_noret_decl(f_5344)
static void C_ccall f_5344(C_word c,C_word *av) C_noret;
C_noret_decl(f_5356)
static void C_ccall f_5356(C_word c,C_word *av) C_noret;
C_noret_decl(f_5370)
static void C_fcall f_5370(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5418)
static void C_fcall f_5418(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5466)
static void C_fcall f_5466(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5500)
static void C_fcall f_5500(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5525)
static void C_ccall f_5525(C_word c,C_word *av) C_noret;
C_noret_decl(f_5534)
static void C_fcall f_5534(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5575)
static void C_ccall f_5575(C_word c,C_word *av) C_noret;
C_noret_decl(f_5586)
static void C_ccall f_5586(C_word c,C_word *av) C_noret;
C_noret_decl(f_5591)
static void C_ccall f_5591(C_word c,C_word *av) C_noret;
C_noret_decl(f_5601)
static void C_ccall f_5601(C_word c,C_word *av) C_noret;
C_noret_decl(f_5604)
static void C_ccall f_5604(C_word c,C_word *av) C_noret;
C_noret_decl(f_5610)
static void C_ccall f_5610(C_word c,C_word *av) C_noret;
C_noret_decl(f_5620)
static void C_ccall f_5620(C_word c,C_word *av) C_noret;
C_noret_decl(f_5626)
static void C_ccall f_5626(C_word c,C_word *av) C_noret;
C_noret_decl(f_5639)
static void C_ccall f_5639(C_word c,C_word *av) C_noret;
C_noret_decl(f_5645)
static void C_ccall f_5645(C_word c,C_word *av) C_noret;
C_noret_decl(f_5663)
static void C_ccall f_5663(C_word c,C_word *av) C_noret;
C_noret_decl(f_5669)
static void C_ccall f_5669(C_word c,C_word *av) C_noret;
C_noret_decl(f_5682)
static void C_ccall f_5682(C_word c,C_word *av) C_noret;
C_noret_decl(f_5688)
static void C_ccall f_5688(C_word c,C_word *av) C_noret;
C_noret_decl(f_5710)
static void C_ccall f_5710(C_word c,C_word *av) C_noret;
C_noret_decl(f_5716)
static void C_ccall f_5716(C_word c,C_word *av) C_noret;
C_noret_decl(f_5729)
static void C_ccall f_5729(C_word c,C_word *av) C_noret;
C_noret_decl(f_5735)
static void C_ccall f_5735(C_word c,C_word *av) C_noret;
C_noret_decl(f_5757)
static void C_ccall f_5757(C_word c,C_word *av) C_noret;
C_noret_decl(f_5763)
static void C_ccall f_5763(C_word c,C_word *av) C_noret;
C_noret_decl(f_5776)
static void C_ccall f_5776(C_word c,C_word *av) C_noret;
C_noret_decl(f_5782)
static void C_ccall f_5782(C_word c,C_word *av) C_noret;
C_noret_decl(f_5804)
static void C_ccall f_5804(C_word c,C_word *av) C_noret;
C_noret_decl(f_5810)
static void C_ccall f_5810(C_word c,C_word *av) C_noret;
C_noret_decl(f_5823)
static void C_ccall f_5823(C_word c,C_word *av) C_noret;
C_noret_decl(f_5829)
static void C_ccall f_5829(C_word c,C_word *av) C_noret;
C_noret_decl(f_5841)
static void C_ccall f_5841(C_word c,C_word *av) C_noret;
C_noret_decl(f_5845)
static void C_ccall f_5845(C_word c,C_word *av) C_noret;
C_noret_decl(f_5851)
static void C_ccall f_5851(C_word c,C_word *av) C_noret;
C_noret_decl(f_5863)
static void C_ccall f_5863(C_word c,C_word *av) C_noret;
C_noret_decl(f_5867)
static void C_ccall f_5867(C_word c,C_word *av) C_noret;
C_noret_decl(f_5868)
static void C_ccall f_5868(C_word c,C_word *av) C_noret;
C_noret_decl(f_5874)
static void C_ccall f_5874(C_word c,C_word *av) C_noret;
C_noret_decl(f_5896)
static void C_ccall f_5896(C_word c,C_word *av) C_noret;
C_noret_decl(f_5912)
static void C_ccall f_5912(C_word c,C_word *av) C_noret;
C_noret_decl(f_5916)
static void C_ccall f_5916(C_word c,C_word *av) C_noret;
C_noret_decl(f_5920)
static void C_ccall f_5920(C_word c,C_word *av) C_noret;
C_noret_decl(f_5923)
static void C_ccall f_5923(C_word c,C_word *av) C_noret;
C_noret_decl(f_5929)
static void C_ccall f_5929(C_word c,C_word *av) C_noret;
C_noret_decl(f_5937)
static void C_ccall f_5937(C_word c,C_word *av) C_noret;
C_noret_decl(f_5943)
static void C_ccall f_5943(C_word c,C_word *av) C_noret;
C_noret_decl(f_5947)
static void C_ccall f_5947(C_word c,C_word *av) C_noret;
C_noret_decl(f_5950)
static void C_ccall f_5950(C_word c,C_word *av) C_noret;
C_noret_decl(f_5955)
static void C_ccall f_5955(C_word c,C_word *av) C_noret;
C_noret_decl(f_5957)
static void C_fcall f_5957(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5982)
static void C_ccall f_5982(C_word c,C_word *av) C_noret;
C_noret_decl(f_5992)
static void C_ccall f_5992(C_word c,C_word *av) C_noret;
C_noret_decl(f_5997)
static void C_ccall f_5997(C_word c,C_word *av) C_noret;
C_noret_decl(f_6005)
static void C_ccall f_6005(C_word c,C_word *av) C_noret;
C_noret_decl(f_6007)
static void C_ccall f_6007(C_word c,C_word *av) C_noret;
C_noret_decl(f_6018)
static void C_ccall f_6018(C_word c,C_word *av) C_noret;
C_noret_decl(f_6027)
static void C_ccall f_6027(C_word c,C_word *av) C_noret;
C_noret_decl(f_6032)
static void C_ccall f_6032(C_word c,C_word *av) C_noret;
C_noret_decl(f_6036)
static void C_ccall f_6036(C_word c,C_word *av) C_noret;
C_noret_decl(f_6040)
static void C_ccall f_6040(C_word c,C_word *av) C_noret;
C_noret_decl(f_6043)
static void C_ccall f_6043(C_word c,C_word *av) C_noret;
C_noret_decl(f_6049)
static void C_ccall f_6049(C_word c,C_word *av) C_noret;
C_noret_decl(f_6057)
static void C_ccall f_6057(C_word c,C_word *av) C_noret;
C_noret_decl(f_6065)
static void C_ccall f_6065(C_word c,C_word *av) C_noret;
C_noret_decl(f_6067)
static void C_ccall f_6067(C_word c,C_word *av) C_noret;
C_noret_decl(f_6071)
static void C_ccall f_6071(C_word c,C_word *av) C_noret;
C_noret_decl(f_6074)
static void C_ccall f_6074(C_word c,C_word *av) C_noret;
C_noret_decl(f_6092)
static void C_ccall f_6092(C_word c,C_word *av) C_noret;
C_noret_decl(f_6096)
static void C_ccall f_6096(C_word c,C_word *av) C_noret;
C_noret_decl(f_6100)
static void C_ccall f_6100(C_word c,C_word *av) C_noret;
C_noret_decl(f_6104)
static void C_ccall f_6104(C_word c,C_word *av) C_noret;
C_noret_decl(f_6119)
static void C_ccall f_6119(C_word c,C_word *av) C_noret;
C_noret_decl(f_6123)
static void C_ccall f_6123(C_word c,C_word *av) C_noret;
C_noret_decl(f_6125)
static void C_fcall f_6125(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6150)
static void C_ccall f_6150(C_word c,C_word *av) C_noret;
C_noret_decl(f_6179)
static void C_ccall f_6179(C_word c,C_word *av) C_noret;
C_noret_decl(f_6183)
static void C_ccall f_6183(C_word c,C_word *av) C_noret;
C_noret_decl(f_6187)
static void C_ccall f_6187(C_word c,C_word *av) C_noret;
C_noret_decl(f_6202)
static void C_ccall f_6202(C_word c,C_word *av) C_noret;
C_noret_decl(f_6205)
static void C_ccall f_6205(C_word c,C_word *av) C_noret;
C_noret_decl(f_6206)
static C_word C_fcall f_6206(C_word t0,C_word t1);
C_noret_decl(f_6225)
static void C_ccall f_6225(C_word c,C_word *av) C_noret;
C_noret_decl(f_6229)
static void C_ccall f_6229(C_word c,C_word *av) C_noret;
C_noret_decl(f_6233)
static void C_ccall f_6233(C_word c,C_word *av) C_noret;
C_noret_decl(f_6236)
static void C_ccall f_6236(C_word c,C_word *av) C_noret;
C_noret_decl(f_6242)
static void C_ccall f_6242(C_word c,C_word *av) C_noret;
C_noret_decl(f_6250)
static void C_ccall f_6250(C_word c,C_word *av) C_noret;
C_noret_decl(f_6258)
static void C_ccall f_6258(C_word c,C_word *av) C_noret;
C_noret_decl(f_6260)
static void C_ccall f_6260(C_word c,C_word *av) C_noret;
C_noret_decl(f_6264)
static void C_ccall f_6264(C_word c,C_word *av) C_noret;
C_noret_decl(f_6267)
static void C_ccall f_6267(C_word c,C_word *av) C_noret;
C_noret_decl(f_6270)
static C_word C_fcall f_6270(C_word t0,C_word t1);
C_noret_decl(f_6295)
static void C_ccall f_6295(C_word c,C_word *av) C_noret;
C_noret_decl(f_6297)
static void C_fcall f_6297(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6322)
static void C_ccall f_6322(C_word c,C_word *av) C_noret;
C_noret_decl(f_6344)
static void C_ccall f_6344(C_word c,C_word *av) C_noret;
C_noret_decl(f_6347)
static void C_ccall f_6347(C_word c,C_word *av) C_noret;
C_noret_decl(f_6350)
static void C_ccall f_6350(C_word c,C_word *av) C_noret;
C_noret_decl(f_6353)
static void C_ccall f_6353(C_word c,C_word *av) C_noret;
C_noret_decl(f_6360)
static void C_ccall f_6360(C_word c,C_word *av) C_noret;
C_noret_decl(f_6364)
static void C_ccall f_6364(C_word c,C_word *av) C_noret;
C_noret_decl(f_6368)
static void C_ccall f_6368(C_word c,C_word *av) C_noret;
C_noret_decl(f_6385)
static void C_ccall f_6385(C_word c,C_word *av) C_noret;
C_noret_decl(f_6407)
static void C_ccall f_6407(C_word c,C_word *av) C_noret;
C_noret_decl(f_6415)
static void C_ccall f_6415(C_word c,C_word *av) C_noret;
C_noret_decl(f_6434)
static void C_ccall f_6434(C_word c,C_word *av) C_noret;
C_noret_decl(f_6442)
static void C_ccall f_6442(C_word c,C_word *av) C_noret;
C_noret_decl(f_6452)
static void C_ccall f_6452(C_word c,C_word *av) C_noret;
C_noret_decl(f_6456)
static void C_ccall f_6456(C_word c,C_word *av) C_noret;
C_noret_decl(f_6485)
static void C_ccall f_6485(C_word c,C_word *av) C_noret;
C_noret_decl(f_6497)
static void C_ccall f_6497(C_word c,C_word *av) C_noret;
C_noret_decl(f_6499)
static void C_ccall f_6499(C_word c,C_word *av) C_noret;
C_noret_decl(f_6513)
static void C_fcall f_6513(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6538)
static void C_ccall f_6538(C_word c,C_word *av) C_noret;
C_noret_decl(f_6554)
static void C_ccall f_6554(C_word c,C_word *av) C_noret;
C_noret_decl(f_6563)
static void C_ccall f_6563(C_word c,C_word *av) C_noret;
C_noret_decl(f_6566)
static void C_ccall f_6566(C_word c,C_word *av) C_noret;
C_noret_decl(f_6569)
static void C_ccall f_6569(C_word c,C_word *av) C_noret;
C_noret_decl(f_6572)
static void C_ccall f_6572(C_word c,C_word *av) C_noret;
C_noret_decl(f_6577)
static void C_ccall f_6577(C_word c,C_word *av) C_noret;
C_noret_decl(f_6581)
static void C_ccall f_6581(C_word c,C_word *av) C_noret;
C_noret_decl(f_6584)
static void C_ccall f_6584(C_word c,C_word *av) C_noret;
C_noret_decl(f_6587)
static void C_ccall f_6587(C_word c,C_word *av) C_noret;
C_noret_decl(f_6590)
static void C_ccall f_6590(C_word c,C_word *av) C_noret;
C_noret_decl(f_6594)
static void C_ccall f_6594(C_word c,C_word *av) C_noret;
C_noret_decl(f_6598)
static void C_ccall f_6598(C_word c,C_word *av) C_noret;
C_noret_decl(f_6602)
static void C_ccall f_6602(C_word c,C_word *av) C_noret;
C_noret_decl(f_6606)
static void C_ccall f_6606(C_word c,C_word *av) C_noret;
C_noret_decl(f_6609)
static void C_ccall f_6609(C_word c,C_word *av) C_noret;
C_noret_decl(f_6612)
static void C_ccall f_6612(C_word c,C_word *av) C_noret;
C_noret_decl(f_6615)
static void C_ccall f_6615(C_word c,C_word *av) C_noret;
C_noret_decl(f_6618)
static void C_ccall f_6618(C_word c,C_word *av) C_noret;
C_noret_decl(f_6633)
static void C_ccall f_6633(C_word c,C_word *av) C_noret;
C_noret_decl(f_6639)
static void C_ccall f_6639(C_word c,C_word *av) C_noret;
C_noret_decl(f_6649)
static void C_fcall f_6649(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6659)
static void C_ccall f_6659(C_word c,C_word *av) C_noret;
C_noret_decl(f_6662)
static void C_ccall f_6662(C_word c,C_word *av) C_noret;
C_noret_decl(f_6665)
static void C_ccall f_6665(C_word c,C_word *av) C_noret;
C_noret_decl(f_6666)
static void C_ccall f_6666(C_word c,C_word *av) C_noret;
C_noret_decl(f_6672)
static void C_fcall f_6672(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6695)
static void C_ccall f_6695(C_word c,C_word *av) C_noret;
C_noret_decl(f_6706)
static void C_ccall f_6706(C_word c,C_word *av) C_noret;
C_noret_decl(f_6710)
static void C_ccall f_6710(C_word c,C_word *av) C_noret;
C_noret_decl(f_6725)
static void C_ccall f_6725(C_word c,C_word *av) C_noret;
C_noret_decl(f_6729)
static void C_ccall f_6729(C_word c,C_word *av) C_noret;
C_noret_decl(f_6733)
static void C_ccall f_6733(C_word c,C_word *av) C_noret;
C_noret_decl(f_6736)
static void C_ccall f_6736(C_word c,C_word *av) C_noret;
C_noret_decl(f_6739)
static void C_ccall f_6739(C_word c,C_word *av) C_noret;
C_noret_decl(f_6742)
static void C_ccall f_6742(C_word c,C_word *av) C_noret;
C_noret_decl(f_6745)
static void C_ccall f_6745(C_word c,C_word *av) C_noret;
C_noret_decl(f_6748)
static void C_ccall f_6748(C_word c,C_word *av) C_noret;
C_noret_decl(f_6751)
static void C_ccall f_6751(C_word c,C_word *av) C_noret;
C_noret_decl(f_6754)
static void C_ccall f_6754(C_word c,C_word *av) C_noret;
C_noret_decl(f_6761)
static void C_ccall f_6761(C_word c,C_word *av) C_noret;
C_noret_decl(f_6768)
static void C_fcall f_6768(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6781)
static void C_fcall f_6781(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6792)
static C_word C_fcall f_6792(C_word t0);
C_noret_decl(f_6825)
static void C_fcall f_6825(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6850)
static void C_ccall f_6850(C_word c,C_word *av) C_noret;
C_noret_decl(f_6878)
static void C_ccall f_6878(C_word c,C_word *av) C_noret;
C_noret_decl(f_6912)
static void C_ccall f_6912(C_word c,C_word *av) C_noret;
C_noret_decl(f_6935)
static void C_ccall f_6935(C_word c,C_word *av) C_noret;
C_noret_decl(f_6941)
static void C_ccall f_6941(C_word c,C_word *av) C_noret;
C_noret_decl(f_6957)
static void C_ccall f_6957(C_word c,C_word *av) C_noret;
C_noret_decl(f_6998)
static void C_ccall f_6998(C_word c,C_word *av) C_noret;
C_noret_decl(f_7021)
static void C_ccall f_7021(C_word c,C_word *av) C_noret;
C_noret_decl(f_7034)
static void C_fcall f_7034(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7054)
static void C_ccall f_7054(C_word c,C_word *av) C_noret;
C_noret_decl(f_7080)
static void C_fcall f_7080(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7098)
static void C_ccall f_7098(C_word c,C_word *av) C_noret;
C_noret_decl(f_7110)
static void C_ccall f_7110(C_word c,C_word *av) C_noret;
C_noret_decl(f_7115)
static void C_ccall f_7115(C_word c,C_word *av) C_noret;
C_noret_decl(f_7123)
static void C_ccall f_7123(C_word c,C_word *av) C_noret;
C_noret_decl(f_7125)
static void C_ccall f_7125(C_word c,C_word *av) C_noret;
C_noret_decl(f_7300)
static void C_ccall f_7300(C_word c,C_word *av) C_noret;
C_noret_decl(f_7310)
static void C_ccall f_7310(C_word c,C_word *av) C_noret;
C_noret_decl(f_7333)
static void C_ccall f_7333(C_word c,C_word *av) C_noret;
C_noret_decl(f_7362)
static void C_fcall f_7362(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7391)
static void C_ccall f_7391(C_word c,C_word *av) C_noret;
C_noret_decl(f_7408)
static C_word C_fcall f_7408(C_word t0,C_word t1);
C_noret_decl(f_7434)
static void C_fcall f_7434(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7441)
static void C_ccall f_7441(C_word c,C_word *av) C_noret;
C_noret_decl(f_7463)
static void C_ccall f_7463(C_word c,C_word *av) C_noret;
C_noret_decl(f_7470)
static void C_ccall f_7470(C_word c,C_word *av) C_noret;
C_noret_decl(f_7482)
static void C_ccall f_7482(C_word c,C_word *av) C_noret;
C_noret_decl(f_7483)
static void C_ccall f_7483(C_word c,C_word *av) C_noret;
C_noret_decl(f_7490)
static void C_ccall f_7490(C_word c,C_word *av) C_noret;
C_noret_decl(f_7497)
static void C_ccall f_7497(C_word c,C_word *av) C_noret;
C_noret_decl(f_7510)
static void C_ccall f_7510(C_word c,C_word *av) C_noret;
C_noret_decl(f_7513)
static void C_ccall f_7513(C_word c,C_word *av) C_noret;
C_noret_decl(f_7514)
static void C_ccall f_7514(C_word c,C_word *av) C_noret;
C_noret_decl(f_7521)
static void C_ccall f_7521(C_word c,C_word *av) C_noret;
C_noret_decl(f_7528)
static void C_ccall f_7528(C_word c,C_word *av) C_noret;
C_noret_decl(f_7532)
static void C_ccall f_7532(C_word c,C_word *av) C_noret;
C_noret_decl(f_7546)
static void C_ccall f_7546(C_word c,C_word *av) C_noret;
C_noret_decl(f_7549)
static void C_ccall f_7549(C_word c,C_word *av) C_noret;
C_noret_decl(f_7552)
static void C_ccall f_7552(C_word c,C_word *av) C_noret;
C_noret_decl(f_7553)
static void C_ccall f_7553(C_word c,C_word *av) C_noret;
C_noret_decl(f_7560)
static void C_ccall f_7560(C_word c,C_word *av) C_noret;
C_noret_decl(f_7567)
static void C_ccall f_7567(C_word c,C_word *av) C_noret;
C_noret_decl(f_7571)
static void C_ccall f_7571(C_word c,C_word *av) C_noret;
C_noret_decl(f_7575)
static void C_ccall f_7575(C_word c,C_word *av) C_noret;
C_noret_decl(f_7590)
static void C_ccall f_7590(C_word c,C_word *av) C_noret;
C_noret_decl(f_7593)
static void C_ccall f_7593(C_word c,C_word *av) C_noret;
C_noret_decl(f_7596)
static void C_ccall f_7596(C_word c,C_word *av) C_noret;
C_noret_decl(f_7599)
static void C_ccall f_7599(C_word c,C_word *av) C_noret;
C_noret_decl(f_7600)
static void C_ccall f_7600(C_word c,C_word *av) C_noret;
C_noret_decl(f_7607)
static void C_ccall f_7607(C_word c,C_word *av) C_noret;
C_noret_decl(f_7614)
static void C_ccall f_7614(C_word c,C_word *av) C_noret;
C_noret_decl(f_7618)
static void C_ccall f_7618(C_word c,C_word *av) C_noret;
C_noret_decl(f_7622)
static void C_ccall f_7622(C_word c,C_word *av) C_noret;
C_noret_decl(f_7626)
static void C_ccall f_7626(C_word c,C_word *av) C_noret;
C_noret_decl(f_7637)
static void C_fcall f_7637(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7647)
static void C_ccall f_7647(C_word c,C_word *av) C_noret;
C_noret_decl(f_7648)
static void C_ccall f_7648(C_word c,C_word *av) C_noret;
C_noret_decl(f_7659)
static void C_ccall f_7659(C_word c,C_word *av) C_noret;
C_noret_decl(f_7664)
static void C_fcall f_7664(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7674)
static void C_ccall f_7674(C_word c,C_word *av) C_noret;
C_noret_decl(f_7676)
static void C_fcall f_7676(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7701)
static void C_ccall f_7701(C_word c,C_word *av) C_noret;
C_noret_decl(f_7710)
static void C_fcall f_7710(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7735)
static void C_ccall f_7735(C_word c,C_word *av) C_noret;
C_noret_decl(f_7758)
static void C_ccall f_7758(C_word c,C_word *av) C_noret;
C_noret_decl(f_7777)
static void C_ccall f_7777(C_word c,C_word *av) C_noret;
C_noret_decl(f_7827)
static void C_ccall f_7827(C_word c,C_word *av) C_noret;
C_noret_decl(f_7831)
static void C_ccall f_7831(C_word c,C_word *av) C_noret;
C_noret_decl(f_7834)
static void C_ccall f_7834(C_word c,C_word *av) C_noret;
C_noret_decl(f_7839)
static void C_ccall f_7839(C_word c,C_word *av) C_noret;
C_noret_decl(f_7843)
static void C_ccall f_7843(C_word c,C_word *av) C_noret;
C_noret_decl(f_7846)
static void C_ccall f_7846(C_word c,C_word *av) C_noret;
C_noret_decl(f_7849)
static void C_ccall f_7849(C_word c,C_word *av) C_noret;
C_noret_decl(f_7853)
static void C_ccall f_7853(C_word c,C_word *av) C_noret;
C_noret_decl(f_7857)
static void C_ccall f_7857(C_word c,C_word *av) C_noret;
C_noret_decl(f_7861)
static void C_ccall f_7861(C_word c,C_word *av) C_noret;
C_noret_decl(f_7864)
static void C_ccall f_7864(C_word c,C_word *av) C_noret;
C_noret_decl(f_7867)
static void C_ccall f_7867(C_word c,C_word *av) C_noret;
C_noret_decl(f_7870)
static void C_ccall f_7870(C_word c,C_word *av) C_noret;
C_noret_decl(f_7882)
static void C_ccall f_7882(C_word c,C_word *av) C_noret;
C_noret_decl(f_7888)
static void C_ccall f_7888(C_word c,C_word *av) C_noret;
C_noret_decl(f_7892)
static void C_ccall f_7892(C_word c,C_word *av) C_noret;
C_noret_decl(f_7897)
static void C_ccall f_7897(C_word c,C_word *av) C_noret;
C_noret_decl(f_7901)
static void C_ccall f_7901(C_word c,C_word *av) C_noret;
C_noret_decl(f_7908)
static void C_ccall f_7908(C_word c,C_word *av) C_noret;
C_noret_decl(f_7912)
static void C_ccall f_7912(C_word c,C_word *av) C_noret;
C_noret_decl(f_7914)
static void C_ccall f_7914(C_word c,C_word *av) C_noret;
C_noret_decl(f_7918)
static void C_ccall f_7918(C_word c,C_word *av) C_noret;
C_noret_decl(f_7921)
static void C_ccall f_7921(C_word c,C_word *av) C_noret;
C_noret_decl(f_7924)
static void C_ccall f_7924(C_word c,C_word *av) C_noret;
C_noret_decl(f_7927)
static void C_ccall f_7927(C_word c,C_word *av) C_noret;
C_noret_decl(f_7930)
static void C_ccall f_7930(C_word c,C_word *av) C_noret;
C_noret_decl(f_7933)
static void C_ccall f_7933(C_word c,C_word *av) C_noret;
C_noret_decl(f_7940)
static void C_ccall f_7940(C_word c,C_word *av) C_noret;
C_noret_decl(f_7942)
static void C_ccall f_7942(C_word c,C_word *av) C_noret;
C_noret_decl(f_7950)
static void C_ccall f_7950(C_word c,C_word *av) C_noret;
C_noret_decl(f_7952)
static void C_ccall f_7952(C_word c,C_word *av) C_noret;
C_noret_decl(f_7959)
static void C_ccall f_7959(C_word c,C_word *av) C_noret;
C_noret_decl(f_7961)
static void C_ccall f_7961(C_word c,C_word *av) C_noret;
C_noret_decl(f_7964)
static void C_fcall f_7964(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7974)
static void C_fcall f_7974(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7988)
static void C_ccall f_7988(C_word c,C_word *av) C_noret;
C_noret_decl(f_8007)
static void C_ccall f_8007(C_word c,C_word *av) C_noret;
C_noret_decl(f_8046)
static void C_ccall f_8046(C_word c,C_word *av) C_noret;
C_noret_decl(f_8050)
static void C_ccall f_8050(C_word c,C_word *av) C_noret;
C_noret_decl(f_8053)
static void C_ccall f_8053(C_word c,C_word *av) C_noret;
C_noret_decl(f_8056)
static void C_ccall f_8056(C_word c,C_word *av) C_noret;
C_noret_decl(f_8059)
static void C_ccall f_8059(C_word c,C_word *av) C_noret;
C_noret_decl(f_8062)
static void C_ccall f_8062(C_word c,C_word *av) C_noret;
C_noret_decl(f_8064)
static void C_fcall f_8064(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8073)
static void C_fcall f_8073(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8104)
static void C_ccall f_8104(C_word c,C_word *av) C_noret;
C_noret_decl(f_8122)
static void C_ccall f_8122(C_word c,C_word *av) C_noret;
C_noret_decl(f_8126)
static void C_ccall f_8126(C_word c,C_word *av) C_noret;
C_noret_decl(f_8147)
static void C_ccall f_8147(C_word c,C_word *av) C_noret;
C_noret_decl(f_8151)
static void C_ccall f_8151(C_word c,C_word *av) C_noret;
C_noret_decl(f_8547)
static void C_fcall f_8547(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8569)
static void C_ccall f_8569(C_word c,C_word *av) C_noret;
C_noret_decl(f_8575)
static void C_fcall f_8575(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8581)
static void C_fcall f_8581(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8591)
static void C_ccall f_8591(C_word c,C_word *av) C_noret;
C_noret_decl(f_9467)
static void C_fcall f_9467(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9473)
static void C_ccall f_9473(C_word c,C_word *av) C_noret;
C_noret_decl(f_9476)
static void C_fcall f_9476(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9478)
static void C_ccall f_9478(C_word c,C_word *av) C_noret;
C_noret_decl(f_9481)
static void C_ccall f_9481(C_word c,C_word *av) C_noret;
C_noret_decl(f_9488)
static void C_fcall f_9488(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9498)
static C_word C_fcall f_9498(C_word t0,C_word t1);
C_noret_decl(f_9523)
static void C_fcall f_9523(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9527)
static void C_ccall f_9527(C_word c,C_word *av) C_noret;
C_noret_decl(f_9540)
static void C_ccall f_9540(C_word c,C_word *av) C_noret;
C_noret_decl(f_9566)
static void C_ccall f_9566(C_word c,C_word *av) C_noret;
C_noret_decl(f_9570)
static void C_ccall f_9570(C_word c,C_word *av) C_noret;
C_noret_decl(f_9577)
static void C_ccall f_9577(C_word c,C_word *av) C_noret;
C_noret_decl(f_9582)
static void C_fcall f_9582(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9595)
static void C_ccall f_9595(C_word c,C_word *av) C_noret;
C_noret_decl(f_9664)
static void C_ccall f_9664(C_word c,C_word *av) C_noret;
C_noret_decl(f_9670)
static void C_fcall f_9670(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9678)
static void C_ccall f_9678(C_word c,C_word *av) C_noret;
C_noret_decl(f_9682)
static void C_ccall f_9682(C_word c,C_word *av) C_noret;
C_noret_decl(f_9684)
static void C_fcall f_9684(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9722)
static void C_ccall f_9722(C_word c,C_word *av) C_noret;
C_noret_decl(f_9727)
static void C_fcall f_9727(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9731)
static void C_ccall f_9731(C_word c,C_word *av) C_noret;
C_noret_decl(f_9734)
static void C_ccall f_9734(C_word c,C_word *av) C_noret;
C_noret_decl(f_9750)
static void C_ccall f_9750(C_word c,C_word *av) C_noret;
C_noret_decl(f_9754)
static void C_ccall f_9754(C_word c,C_word *av) C_noret;
C_noret_decl(f_9758)
static void C_ccall f_9758(C_word c,C_word *av) C_noret;
C_noret_decl(f_9762)
static void C_ccall f_9762(C_word c,C_word *av) C_noret;
C_noret_decl(f_9766)
static void C_ccall f_9766(C_word c,C_word *av) C_noret;
C_noret_decl(f_9769)
static void C_ccall f_9769(C_word c,C_word *av) C_noret;
C_noret_decl(f_9772)
static void C_ccall f_9772(C_word c,C_word *av) C_noret;
C_noret_decl(f_9775)
static void C_ccall f_9775(C_word c,C_word *av) C_noret;
C_noret_decl(f_9780)
static void C_fcall f_9780(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9786)
static void C_ccall f_9786(C_word c,C_word *av) C_noret;
C_noret_decl(f_9795)
static void C_ccall f_9795(C_word c,C_word *av) C_noret;
C_noret_decl(f_9799)
static void C_ccall f_9799(C_word c,C_word *av) C_noret;
C_noret_decl(f_9804)
static void C_ccall f_9804(C_word c,C_word *av) C_noret;
C_noret_decl(f_9807)
static void C_ccall f_9807(C_word c,C_word *av) C_noret;
C_noret_decl(f_9811)
static void C_ccall f_9811(C_word c,C_word *av) C_noret;
C_noret_decl(f_9814)
static void C_ccall f_9814(C_word c,C_word *av) C_noret;
C_noret_decl(f_9817)
static void C_ccall f_9817(C_word c,C_word *av) C_noret;
C_noret_decl(f_9822)
static void C_fcall f_9822(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9832)
static void C_ccall f_9832(C_word c,C_word *av) C_noret;
C_noret_decl(f_9835)
static void C_ccall f_9835(C_word c,C_word *av) C_noret;
C_noret_decl(f_9842)
static void C_ccall f_9842(C_word c,C_word *av) C_noret;
C_noret_decl(f_9844)
static void C_ccall f_9844(C_word c,C_word *av) C_noret;
C_noret_decl(f_9851)
static void C_ccall f_9851(C_word c,C_word *av) C_noret;
C_noret_decl(f_9856)
static void C_ccall f_9856(C_word c,C_word *av) C_noret;
C_noret_decl(f_9862)
static void C_ccall f_9862(C_word c,C_word *av) C_noret;
C_noret_decl(f_9866)
static void C_ccall f_9866(C_word c,C_word *av) C_noret;
C_noret_decl(f_9873)
static void C_ccall f_9873(C_word c,C_word *av) C_noret;
C_noret_decl(f_9878)
static void C_ccall f_9878(C_word c,C_word *av) C_noret;
C_noret_decl(f_9887)
static void C_ccall f_9887(C_word c,C_word *av) C_noret;
C_noret_decl(f_9895)
static void C_fcall f_9895(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9905)
static void C_ccall f_9905(C_word c,C_word *av) C_noret;
C_noret_decl(f_9929)
static void C_ccall f_9929(C_word c,C_word *av) C_noret;
C_noret_decl(f_9933)
static void C_ccall f_9933(C_word c,C_word *av) C_noret;
C_noret_decl(f_9942)
static void C_ccall f_9942(C_word c,C_word *av) C_noret;
C_noret_decl(f_9951)
static void C_ccall f_9951(C_word c,C_word *av) C_noret;
C_noret_decl(f_9970)
static void C_ccall f_9970(C_word c,C_word *av) C_noret;
C_noret_decl(f_9973)
static void C_ccall f_9973(C_word c,C_word *av) C_noret;
C_noret_decl(f_9976)
static void C_ccall f_9976(C_word c,C_word *av) C_noret;
C_noret_decl(f_9982)
static void C_ccall f_9982(C_word c,C_word *av) C_noret;
C_noret_decl(f_9985)
static void C_ccall f_9985(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externexport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;

/* from CHICKEN_get_error_message */
 void  CHICKEN_get_error_message(char *t0,int t1){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_fix((C_word)t1);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t0);
C_save(x);C_callback_wrapper((void *)f_11571,2);}

/* from CHICKEN_load */
 int  CHICKEN_load(char * t0){
C_word x,s=0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0))),*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_mpointer(&a,(void*)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11556,1));}

/* from CHICKEN_read */
 int  CHICKEN_read(char * t0,C_word *t1){
C_word x,s=0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0)))+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
x=C_mpointer(&a,(void*)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11534,2));}

/* from CHICKEN_apply_to_string */
 int  CHICKEN_apply_to_string(C_word t0,C_word t1,char *t2,int t3){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_fix((C_word)t3);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t2);
C_save(x);
x=((C_word)t1);
C_save(x);
x=((C_word)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11508,4));}

/* from CHICKEN_apply */
 int  CHICKEN_apply(C_word t0,C_word t1,C_word *t2){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_mpointer_or_false(&a,(void*)t2);
C_save(x);
x=((C_word)t1);
C_save(x);
x=((C_word)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11492,3));}

/* from CHICKEN_eval_string_to_string */
 int  CHICKEN_eval_string_to_string(char * t0,char *t1,int t2){
C_word x,s=0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0)))+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_fix((C_word)t2);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
x=C_mpointer(&a,(void*)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11455,3));}

/* from CHICKEN_eval_to_string */
 int  CHICKEN_eval_to_string(C_word t0,char *t1,int t2){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_fix((C_word)t2);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
x=((C_word)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11429,3));}

/* from CHICKEN_eval_string */
 int  CHICKEN_eval_string(char * t0,C_word *t1){
C_word x,s=0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0)))+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
x=C_mpointer(&a,(void*)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11390,2));}

/* from CHICKEN_eval */
 int  CHICKEN_eval(C_word t0,C_word *t1){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
x=((C_word)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11374,2));}

/* from CHICKEN_yield */
 int  CHICKEN_yield(){
C_word x,s=0,*a=C_stack_pointer;
C_callback_adjust_stack(a,s);
return C_truep(C_callback_wrapper((void *)f_11362,0));}

C_noret_decl(trf_10006)
static void C_ccall trf_10006(C_word c,C_word *av) C_noret;
static void C_ccall trf_10006(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10006(t0,t1);}

C_noret_decl(trf_10160)
static void C_ccall trf_10160(C_word c,C_word *av) C_noret;
static void C_ccall trf_10160(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10160(t0,t1,t2,t3);}

C_noret_decl(trf_10164)
static void C_ccall trf_10164(C_word c,C_word *av) C_noret;
static void C_ccall trf_10164(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10164(t0,t1);}

C_noret_decl(trf_10175)
static void C_ccall trf_10175(C_word c,C_word *av) C_noret;
static void C_ccall trf_10175(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10175(t0,t1,t2);}

C_noret_decl(trf_10353)
static void C_ccall trf_10353(C_word c,C_word *av) C_noret;
static void C_ccall trf_10353(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10353(t0,t1,t2,t3);}

C_noret_decl(trf_10400)
static void C_ccall trf_10400(C_word c,C_word *av) C_noret;
static void C_ccall trf_10400(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10400(t0,t1);}

C_noret_decl(trf_10423)
static void C_ccall trf_10423(C_word c,C_word *av) C_noret;
static void C_ccall trf_10423(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10423(t0,t1,t2);}

C_noret_decl(trf_10499)
static void C_ccall trf_10499(C_word c,C_word *av) C_noret;
static void C_ccall trf_10499(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10499(t0,t1,t2);}

C_noret_decl(trf_10553)
static void C_ccall trf_10553(C_word c,C_word *av) C_noret;
static void C_ccall trf_10553(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10553(t0,t1);}

C_noret_decl(trf_10618)
static void C_ccall trf_10618(C_word c,C_word *av) C_noret;
static void C_ccall trf_10618(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10618(t0,t1,t2);}

C_noret_decl(trf_10663)
static void C_ccall trf_10663(C_word c,C_word *av) C_noret;
static void C_ccall trf_10663(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10663(t0,t1,t2);}

C_noret_decl(trf_10733)
static void C_ccall trf_10733(C_word c,C_word *av) C_noret;
static void C_ccall trf_10733(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10733(t0,t1,t2);}

C_noret_decl(trf_10773)
static void C_ccall trf_10773(C_word c,C_word *av) C_noret;
static void C_ccall trf_10773(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10773(t0,t1,t2);}

C_noret_decl(trf_10838)
static void C_ccall trf_10838(C_word c,C_word *av) C_noret;
static void C_ccall trf_10838(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10838(t0,t1,t2);}

C_noret_decl(trf_11165)
static void C_ccall trf_11165(C_word c,C_word *av) C_noret;
static void C_ccall trf_11165(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11165(t0,t1,t2,t3);}

C_noret_decl(trf_11198)
static void C_ccall trf_11198(C_word c,C_word *av) C_noret;
static void C_ccall trf_11198(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11198(t0,t1,t2);}

C_noret_decl(trf_11249)
static void C_ccall trf_11249(C_word c,C_word *av) C_noret;
static void C_ccall trf_11249(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11249(t0,t1,t2);}

C_noret_decl(trf_11294)
static void C_ccall trf_11294(C_word c,C_word *av) C_noret;
static void C_ccall trf_11294(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11294(t0,t1);}

C_noret_decl(trf_11353)
static void C_ccall trf_11353(C_word c,C_word *av) C_noret;
static void C_ccall trf_11353(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11353(t0,t1,t2);}

C_noret_decl(trf_11598)
static void C_ccall trf_11598(C_word c,C_word *av) C_noret;
static void C_ccall trf_11598(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11598(t0,t1,t2);}

C_noret_decl(trf_11759)
static void C_ccall trf_11759(C_word c,C_word *av) C_noret;
static void C_ccall trf_11759(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11759(t0,t1);}

C_noret_decl(trf_11794)
static void C_ccall trf_11794(C_word c,C_word *av) C_noret;
static void C_ccall trf_11794(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11794(t0,t1);}

C_noret_decl(trf_3670)
static void C_ccall trf_3670(C_word c,C_word *av) C_noret;
static void C_ccall trf_3670(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3670(t0,t1,t2,t3);}

C_noret_decl(trf_3697)
static void C_ccall trf_3697(C_word c,C_word *av) C_noret;
static void C_ccall trf_3697(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3697(t0,t1,t2,t3);}

C_noret_decl(trf_3710)
static void C_ccall trf_3710(C_word c,C_word *av) C_noret;
static void C_ccall trf_3710(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3710(t0,t1);}

C_noret_decl(trf_3732)
static void C_ccall trf_3732(C_word c,C_word *av) C_noret;
static void C_ccall trf_3732(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3732(t0,t1,t2);}

C_noret_decl(trf_3766)
static void C_ccall trf_3766(C_word c,C_word *av) C_noret;
static void C_ccall trf_3766(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3766(t0,t1,t2,t3);}

C_noret_decl(trf_3778)
static void C_ccall trf_3778(C_word c,C_word *av) C_noret;
static void C_ccall trf_3778(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3778(t0,t1,t2,t3);}

C_noret_decl(trf_3795)
static void C_ccall trf_3795(C_word c,C_word *av) C_noret;
static void C_ccall trf_3795(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3795(t0,t1,t2);}

C_noret_decl(trf_3879)
static void C_ccall trf_3879(C_word c,C_word *av) C_noret;
static void C_ccall trf_3879(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3879(t0,t1,t2);}

C_noret_decl(trf_3885)
static void C_ccall trf_3885(C_word c,C_word *av) C_noret;
static void C_ccall trf_3885(C_word c,C_word *av){
C_word t0=av[7];
C_word t1=av[6];
C_word t2=av[5];
C_word t3=av[4];
C_word t4=av[3];
C_word t5=av[2];
C_word t6=av[1];
C_word t7=av[0];
f_3885(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_3924)
static void C_ccall trf_3924(C_word c,C_word *av) C_noret;
static void C_ccall trf_3924(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3924(t0,t1);}

C_noret_decl(trf_3951)
static void C_ccall trf_3951(C_word c,C_word *av) C_noret;
static void C_ccall trf_3951(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3951(t0,t1);}

C_noret_decl(trf_4898)
static void C_ccall trf_4898(C_word c,C_word *av) C_noret;
static void C_ccall trf_4898(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4898(t0,t1,t2);}

C_noret_decl(trf_4928)
static void C_ccall trf_4928(C_word c,C_word *av) C_noret;
static void C_ccall trf_4928(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4928(t0,t1,t2,t3);}

C_noret_decl(trf_4958)
static void C_ccall trf_4958(C_word c,C_word *av) C_noret;
static void C_ccall trf_4958(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4958(t0,t1,t2);}

C_noret_decl(trf_5049)
static void C_ccall trf_5049(C_word c,C_word *av) C_noret;
static void C_ccall trf_5049(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5049(t0,t1,t2);}

C_noret_decl(trf_5083)
static void C_ccall trf_5083(C_word c,C_word *av) C_noret;
static void C_ccall trf_5083(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5083(t0,t1,t2);}

C_noret_decl(trf_5194)
static void C_ccall trf_5194(C_word c,C_word *av) C_noret;
static void C_ccall trf_5194(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5194(t0,t1,t2);}

C_noret_decl(trf_5228)
static void C_ccall trf_5228(C_word c,C_word *av) C_noret;
static void C_ccall trf_5228(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5228(t0,t1,t2);}

C_noret_decl(trf_5370)
static void C_ccall trf_5370(C_word c,C_word *av) C_noret;
static void C_ccall trf_5370(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5370(t0,t1,t2,t3);}

C_noret_decl(trf_5418)
static void C_ccall trf_5418(C_word c,C_word *av) C_noret;
static void C_ccall trf_5418(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5418(t0,t1,t2,t3);}

C_noret_decl(trf_5466)
static void C_ccall trf_5466(C_word c,C_word *av) C_noret;
static void C_ccall trf_5466(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5466(t0,t1,t2);}

C_noret_decl(trf_5500)
static void C_ccall trf_5500(C_word c,C_word *av) C_noret;
static void C_ccall trf_5500(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5500(t0,t1,t2);}

C_noret_decl(trf_5534)
static void C_ccall trf_5534(C_word c,C_word *av) C_noret;
static void C_ccall trf_5534(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5534(t0,t1,t2);}

C_noret_decl(trf_5957)
static void C_ccall trf_5957(C_word c,C_word *av) C_noret;
static void C_ccall trf_5957(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5957(t0,t1,t2);}

C_noret_decl(trf_6125)
static void C_ccall trf_6125(C_word c,C_word *av) C_noret;
static void C_ccall trf_6125(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6125(t0,t1,t2);}

C_noret_decl(trf_6297)
static void C_ccall trf_6297(C_word c,C_word *av) C_noret;
static void C_ccall trf_6297(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6297(t0,t1,t2);}

C_noret_decl(trf_6513)
static void C_ccall trf_6513(C_word c,C_word *av) C_noret;
static void C_ccall trf_6513(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6513(t0,t1,t2);}

C_noret_decl(trf_6649)
static void C_ccall trf_6649(C_word c,C_word *av) C_noret;
static void C_ccall trf_6649(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6649(t0,t1,t2,t3);}

C_noret_decl(trf_6672)
static void C_ccall trf_6672(C_word c,C_word *av) C_noret;
static void C_ccall trf_6672(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6672(t0,t1,t2);}

C_noret_decl(trf_6768)
static void C_ccall trf_6768(C_word c,C_word *av) C_noret;
static void C_ccall trf_6768(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6768(t0,t1,t2);}

C_noret_decl(trf_6781)
static void C_ccall trf_6781(C_word c,C_word *av) C_noret;
static void C_ccall trf_6781(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6781(t0,t1);}

C_noret_decl(trf_6825)
static void C_ccall trf_6825(C_word c,C_word *av) C_noret;
static void C_ccall trf_6825(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6825(t0,t1,t2);}

C_noret_decl(trf_7034)
static void C_ccall trf_7034(C_word c,C_word *av) C_noret;
static void C_ccall trf_7034(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7034(t0,t1);}

C_noret_decl(trf_7080)
static void C_ccall trf_7080(C_word c,C_word *av) C_noret;
static void C_ccall trf_7080(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7080(t0,t1,t2);}

C_noret_decl(trf_7362)
static void C_ccall trf_7362(C_word c,C_word *av) C_noret;
static void C_ccall trf_7362(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_7362(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_7434)
static void C_ccall trf_7434(C_word c,C_word *av) C_noret;
static void C_ccall trf_7434(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_7434(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_7637)
static void C_ccall trf_7637(C_word c,C_word *av) C_noret;
static void C_ccall trf_7637(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7637(t0,t1,t2);}

C_noret_decl(trf_7664)
static void C_ccall trf_7664(C_word c,C_word *av) C_noret;
static void C_ccall trf_7664(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7664(t0,t1,t2);}

C_noret_decl(trf_7676)
static void C_ccall trf_7676(C_word c,C_word *av) C_noret;
static void C_ccall trf_7676(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7676(t0,t1,t2);}

C_noret_decl(trf_7710)
static void C_ccall trf_7710(C_word c,C_word *av) C_noret;
static void C_ccall trf_7710(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7710(t0,t1,t2);}

C_noret_decl(trf_7964)
static void C_ccall trf_7964(C_word c,C_word *av) C_noret;
static void C_ccall trf_7964(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7964(t0,t1);}

C_noret_decl(trf_7974)
static void C_ccall trf_7974(C_word c,C_word *av) C_noret;
static void C_ccall trf_7974(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_7974(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8064)
static void C_ccall trf_8064(C_word c,C_word *av) C_noret;
static void C_ccall trf_8064(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8064(t0,t1);}

C_noret_decl(trf_8073)
static void C_ccall trf_8073(C_word c,C_word *av) C_noret;
static void C_ccall trf_8073(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8073(t0,t1,t2);}

C_noret_decl(trf_8547)
static void C_ccall trf_8547(C_word c,C_word *av) C_noret;
static void C_ccall trf_8547(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8547(t0,t1,t2);}

C_noret_decl(trf_8575)
static void C_ccall trf_8575(C_word c,C_word *av) C_noret;
static void C_ccall trf_8575(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8575(t0,t1,t2);}

C_noret_decl(trf_8581)
static void C_ccall trf_8581(C_word c,C_word *av) C_noret;
static void C_ccall trf_8581(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8581(t0,t1,t2);}

C_noret_decl(trf_9467)
static void C_ccall trf_9467(C_word c,C_word *av) C_noret;
static void C_ccall trf_9467(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9467(t0,t1);}

C_noret_decl(trf_9476)
static void C_ccall trf_9476(C_word c,C_word *av) C_noret;
static void C_ccall trf_9476(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9476(t0,t1);}

C_noret_decl(trf_9488)
static void C_ccall trf_9488(C_word c,C_word *av) C_noret;
static void C_ccall trf_9488(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9488(t0,t1);}

C_noret_decl(trf_9523)
static void C_ccall trf_9523(C_word c,C_word *av) C_noret;
static void C_ccall trf_9523(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9523(t0,t1,t2);}

C_noret_decl(trf_9582)
static void C_ccall trf_9582(C_word c,C_word *av) C_noret;
static void C_ccall trf_9582(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9582(t0,t1,t2);}

C_noret_decl(trf_9670)
static void C_ccall trf_9670(C_word c,C_word *av) C_noret;
static void C_ccall trf_9670(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9670(t0,t1,t2);}

C_noret_decl(trf_9684)
static void C_ccall trf_9684(C_word c,C_word *av) C_noret;
static void C_ccall trf_9684(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9684(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9727)
static void C_ccall trf_9727(C_word c,C_word *av) C_noret;
static void C_ccall trf_9727(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9727(t0,t1,t2);}

C_noret_decl(trf_9780)
static void C_ccall trf_9780(C_word c,C_word *av) C_noret;
static void C_ccall trf_9780(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9780(t0,t1);}

C_noret_decl(trf_9822)
static void C_ccall trf_9822(C_word c,C_word *av) C_noret;
static void C_ccall trf_9822(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9822(t0,t1,t2);}

C_noret_decl(trf_9895)
static void C_ccall trf_9895(C_word c,C_word *av) C_noret;
static void C_ccall trf_9895(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9895(t0,t1,t2);}

/* k9998 in k9983 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_10000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_10000,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_9766(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10003,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1053: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[220]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[220]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[194]+1);
tp(4,av2);}}}

/* k10001 in k9998 in k9983 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_10003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_10003,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10006,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10030,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1054: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[250]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[250]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[227];
tp(6,av2);}}
else{
t4=t3;
f_10006(t4,C_SCHEME_FALSE);}}

/* k10004 in k10001 in k9998 in k9983 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_fcall f_10006(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_10006,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
f_9766(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10012,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1055: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[220]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[220]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[187];
tp(4,av2);}}}

/* k10010 in k10004 in k10001 in k9998 in k9983 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in ... */
static void C_ccall f_10012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_10012,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10024,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1056: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[250]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[250]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[227];
tp(6,av2);}}

/* k10022 in k10010 in k10004 in k10001 in k9998 in k9983 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_10024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10024,2,av);}
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
f_9766(2,av2);}}
else{
/* eval.scm:1058: ##sys#signal-hook */
t2=*((C_word*)lf[215]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[248];
av2[3]=lf[227];
av2[4]=lf[249];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}
else{
/* eval.scm:1058: ##sys#signal-hook */
t2=*((C_word*)lf[215]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[248];
av2[3]=lf[227];
av2[4]=lf[249];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k10028 in k10001 in k9998 in k9983 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_10030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10030,2,av);}
t2=((C_word*)t0)[2];
f_10006(t2,(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE));}

/* scheme#load in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 in ... */
static void C_ccall f_10090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_10090,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
if(C_truep(C_i_nullp(t3))){
/* eval.scm:1106: load/internal */
t4=lf[225];
f_9684(t4,t1,t2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);}
else{
t4=C_i_car(t3);
/* eval.scm:1106: load/internal */
t5=lf[225];
f_9684(t5,t1,t2,t4,C_SCHEME_END_OF_LIST);}}

/* chicken.load#load-relative in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 in ... */
static void C_ccall f_10105(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_10105,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10112,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1109: make-relative-pathname */
f_9523(t7,*((C_word*)lf[207]+1),t2);}

/* k10110 in chicken.load#load-relative in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in ... */
static void C_ccall f_10112(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10112,2,av);}
/* eval.scm:1110: load/internal */
t2=lf[225];
f_9684(t2,((C_word*)t0)[2],t1,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}

/* chicken.load#load-noisily in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 in ... */
static void C_ccall f_10123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,4)))){
C_save_and_reclaim((void*)f_10123,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+8);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10127,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10144,a[2]=((C_word)li192),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1112: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[257]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[257]+1);
av2[1]=t4;
av2[2]=lf[260];
av2[3]=t3;
av2[4]=t5;
tp(5,av2);}}

/* k10125 in chicken.load#load-noisily in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in ... */
static void C_ccall f_10127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_10127,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10130,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10141,a[2]=((C_word)li191),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1112: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[257]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[257]+1);
av2[1]=t3;
av2[2]=lf[259];
av2[3]=((C_word*)t0)[4];
av2[4]=t4;
tp(5,av2);}}

/* k10128 in k10125 in chicken.load#load-noisily in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in ... */
static void C_ccall f_10130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_10130,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10133,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10138,a[2]=((C_word)li190),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1112: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[257]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[257]+1);
av2[1]=t3;
av2[2]=lf[258];
av2[3]=((C_word*)t0)[5];
av2[4]=t4;
tp(5,av2);}}

/* k10131 in k10128 in k10125 in chicken.load#load-noisily in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_10133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_10133,2,av);}
a=C_alloc(9);
/* eval.scm:1113: load/internal */
t2=lf[225];
f_9684(t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],C_a_i_list(&a,3,C_SCHEME_TRUE,((C_word*)t0)[5],t1));}

/* a10137 in k10128 in k10125 in chicken.load#load-noisily in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_10138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10138,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a10140 in k10125 in chicken.load#load-noisily in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in ... */
static void C_ccall f_10141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10141,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a10143 in chicken.load#load-noisily in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in ... */
static void C_ccall f_10144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10144,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 in ... */
static void C_ccall f_10149(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_10149,2,av);}
a=C_alloc(24);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10151,a[2]=t2,a[3]=((C_word)li194),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10158,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=t3;
t10=lf[195];
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11590,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11598,a[2]=t7,a[3]=t13,a[4]=t9,a[5]=t8,a[6]=((C_word)li263),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_11598(t15,t11,lf[195]);}

/* complete in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in ... */
static void C_ccall f_10151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10151,3,av);}
t3=*((C_word*)lf[220]+1);
/* eval.scm:1124: g2438 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[220]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[220]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}

/* k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in ... */
static void C_ccall f_10158(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(46,c,5)))){
C_save_and_reclaim((void *)f_10158,2,av);}
a=C_alloc(46);
t2=C_mutate((C_word*)lf[261]+1 /* (set! chicken.load#dynamic-load-libraries ...) */,t1);
t3=C_mutate(&lf[262] /* (set! chicken.load#load-library/internal ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10160,a[2]=((C_word)li196),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[267]+1 /* (set! ##sys#load-library ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10242,a[2]=((C_word)li197),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[268]+1 /* (set! chicken.load#load-library ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10290,a[2]=((C_word)li198),tmp=(C_word)a,a+=3,tmp));
t6=*((C_word*)lf[269]+1);
t7=C_mutate((C_word*)lf[83]+1 /* (set! ##sys#include-forms-from-file ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10317,a[2]=t6,a[3]=((C_word)li204),tmp=(C_word)a,a+=4,tmp));
t8=C_mutate((C_word*)lf[276]+1 /* (set! ##sys#canonicalize-extension-path ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10397,a[2]=((C_word)li209),tmp=(C_word)a,a+=3,tmp));
t9=C_set_block_item(lf[282] /* ##sys#setup-mode */,0,C_SCHEME_FALSE);
t10=C_mutate(&lf[283] /* (set! chicken.load#file-exists? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10553,a[2]=((C_word)li210),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[284]+1 /* (set! chicken.load#find-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10562,a[2]=((C_word)li211),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[286]+1 /* (set! chicken.load#find-dynamic-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10609,a[2]=((C_word)li214),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[106]+1 /* (set! chicken.load#load-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10748,a[2]=((C_word)li216),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[293]+1 /* (set! chicken.load#require ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10754,a[2]=((C_word)li219),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[294]+1 /* (set! chicken.load#provide ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10819,a[2]=((C_word)li222),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[296]+1 /* (set! chicken.load#provided? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10884,a[2]=((C_word)li225),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[298]+1 /* (set! chicken.load#find-static-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10921,a[2]=((C_word)li226),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[284]+1 /* (set! chicken.load#find-file ...) */,*((C_word*)lf[284]+1));
t19=C_mutate((C_word*)lf[298]+1 /* (set! chicken.load#find-static-extension ...) */,*((C_word*)lf[298]+1));
t20=C_mutate((C_word*)lf[286]+1 /* (set! chicken.load#find-dynamic-extension ...) */,*((C_word*)lf[286]+1));
t21=C_mutate((C_word*)lf[109]+1 /* (set! ##sys#process-require ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10941,a[2]=((C_word)li228),tmp=(C_word)a,a+=3,tmp));
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11583,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1318: chicken.platform#chicken-home */
t23=*((C_word*)lf[346]+1);{
C_word *av2=av;
av2[0]=t23;
av2[1]=t22;
((C_proc)(void*)(*((C_word*)t23+1)))(2,av2);}}

/* chicken.load#load-library/internal in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in ... */
static void C_fcall f_10160(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_10160,4,t1,t2,t3,t4);}
a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10164,a[2]=t4,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t6=t5;
f_10164(t6,C_a_i_list(&a,1,t3));}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10232,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_slot(t2,C_fix(1));
/* eval.scm:1137: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[220]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[220]+1);
av2[1]=t6;
av2[2]=t7;
av2[3]=lf[193];
tp(4,av2);}}}

/* k10162 in chicken.load#load-library/internal in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_fcall f_10164(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_10164,2,t0,t1);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10167,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1140: c-toplevel */
f_9670(t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k10165 in k10162 in chicken.load#load-library/internal in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_10167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_10167,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10170,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10213,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1141: load-verbose */
t5=*((C_word*)lf[206]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k10168 in k10165 in k10162 in chicken.load#load-library/internal in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_10170(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_10170,2,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10175,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word)li195),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_10175(t5,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* loop in k10168 in k10165 in k10162 in chicken.load#load-library/internal in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in ... */
static void C_fcall f_10175(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_10175,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10189,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[238]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_dlerror);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10192,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10206,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t5=C_slot(t2,C_fix(0));
/* eval.scm:1148: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[219]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[219]+1);
av2[1]=t4;
av2[2]=t5;
av2[3]=lf[264];
tp(4,av2);}}}

/* k10187 in loop in k10168 in k10165 in k10162 in chicken.load#load-library/internal in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_10189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10189,2,av);}
/* eval.scm:1147: ##sys#error */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[263];
av2[4]=((C_word*)t0)[4];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k10190 in loop in k10168 in k10165 in k10162 in chicken.load#load-library/internal in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_10192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10192,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* eval.scm:1150: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_10175(t3,((C_word*)t0)[2],t2);}}

/* k10204 in loop in k10168 in k10165 in k10162 in chicken.load#load-library/internal in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_10206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10206,2,av);}
/* eval.scm:1148: ##sys#dload */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[226]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[226]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k10211 in k10165 in k10162 in chicken.load#load-library/internal in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_10213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10213,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10216,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1142: display */
t3=*((C_word*)lf[243]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[266];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_10170(2,av2);}}}

/* k10214 in k10211 in k10165 in k10162 in chicken.load#load-library/internal in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in ... */
static void C_ccall f_10216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10216,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10219,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1143: display */
t3=*((C_word*)lf[243]+1);{
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

/* k10217 in k10214 in k10211 in k10165 in k10162 in chicken.load#load-library/internal in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_10219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10219,2,av);}
/* eval.scm:1144: display */
t2=*((C_word*)lf[243]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[265];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k10230 in chicken.load#load-library/internal in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_10232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10232,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10236,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1138: dynamic-load-libraries */
t4=*((C_word*)lf[261]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10234 in k10230 in chicken.load#load-library/internal in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_10236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10236,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_10164(t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* ##sys#load-library in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in ... */
static void C_ccall f_10242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +6,c,2)))){
C_save_and_reclaim((void*)f_10242,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+6);
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
C_word t14;
C_word t15;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=t10;
t12=C_i_nullp(t8);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10261,a[2]=t1,a[3]=t2,a[4]=t6,a[5]=t11,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1153: ##sys#provided? */
t15=*((C_word*)lf[196]+1);{
C_word *av2=av;
av2[0]=t15;
av2[1]=t14;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t15+1)))(3,av2);}}

/* k10259 in load-library in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_10261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_10261,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10264,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1154: load-library/internal */
f_10160(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}}

/* k10262 in k10259 in load-library in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_10264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10264,2,av);}
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.load#load-library in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in ... */
static void C_ccall f_10290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_10290,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_check_symbol_2(t2,lf[264]);
if(C_truep(C_i_not(t5))){
/* eval.scm:1160: ##sys#load-library */
t7=*((C_word*)lf[267]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t1;
av2[2]=t2;
av2[3]=t5;
av2[4]=lf[264];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t7=C_i_check_string_2(t5,lf[264]);
/* eval.scm:1160: ##sys#load-library */
t8=*((C_word*)lf[267]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t1;
av2[2]=t2;
av2[3]=t5;
av2[4]=lf[264];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}}

/* ##sys#include-forms-from-file in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in ... */
static void C_ccall f_10317(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_10317,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10321,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1167: ##sys#resolve-include-filename */
t6=*((C_word*)lf[275]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
av2[5]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}

/* k10319 in include-forms-from-file in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_10321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_10321,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10324,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_not(t2))){
/* eval.scm:1169: ##sys#signal-hook */
t4=*((C_word*)lf[215]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[248];
av2[3]=lf[273];
av2[4]=lf[274];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_10324(2,av2);}}}

/* k10322 in k10319 in include-forms-from-file in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_10324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_10324,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10327,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10386,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1170: load-verbose */
t4=*((C_word*)lf[206]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10325 in k10322 in k10319 in include-forms-from-file in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_10327(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_10327,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10332,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li203),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1172: with-input-from-file */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a10331 in k10325 in k10322 in k10319 in include-forms-from-file in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in ... */
static void C_ccall f_10332(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_10332,2,av);}
a=C_alloc(18);
t2=((C_word*)t0)[2];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10338,a[2]=t5,a[3]=t3,a[4]=((C_word)li199),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10343,a[2]=((C_word*)t0)[3],a[3]=((C_word)li201),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10380,a[2]=t3,a[3]=t5,a[4]=((C_word)li202),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1174: ##sys#dynamic-wind */
t9=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t1;
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a10337 in a10331 in k10325 in k10322 in k10319 in include-forms-from-file in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_10338(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10338,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[230]+1));
t3=C_mutate((C_word*)lf[230]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a10342 in a10331 in k10325 in k10322 in k10319 in include-forms-from-file in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_10343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10343,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10351,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1175: read */
t3=*((C_word*)lf[231]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10349 in a10342 in a10331 in k10325 in k10322 in k10319 in include-forms-from-file in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in ... */
static void C_ccall f_10351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_10351,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10353,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li200),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_10353(t5,((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* doloop2537 in k10349 in a10342 in a10331 in k10325 in k10322 in k10319 in include-forms-from-file in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in ... */
static void C_fcall f_10353(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10353,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eofp(t2))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10367,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1178: reverse */
t5=*((C_word*)lf[96]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10374,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1175: read */
t5=*((C_word*)lf[231]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k10365 in doloop2537 in k10349 in a10342 in a10331 in k10325 in k10322 in k10319 in include-forms-from-file in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in ... */
static void C_ccall f_10367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10367,2,av);}
/* eval.scm:1178: k */
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
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k10372 in doloop2537 in k10349 in a10342 in a10331 in k10325 in k10322 in k10319 in include-forms-from-file in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in ... */
static void C_ccall f_10374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_10374,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)((C_word*)t0)[4])[1];
f_10353(t3,((C_word*)t0)[5],t1,t2);}

/* a10379 in a10331 in k10325 in k10322 in k10319 in include-forms-from-file in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_10380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10380,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[230]+1));
t3=C_mutate((C_word*)lf[230]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10384 in k10322 in k10319 in include-forms-from-file in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_10386(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10386,2,av);}
if(C_truep(t1)){
/* eval.scm:1171: chicken.base#print */
t2=*((C_word*)lf[270]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[271];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[272];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_10327(2,av2);}}}

/* ##sys#canonicalize-extension-path in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in ... */
static void C_ccall f_10397(C_word c,C_word *av){
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
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_10397,4,av);}
a=C_alloc(24);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10400,a[2]=t3,a[3]=t2,a[4]=((C_word)li205),tmp=(C_word)a,a+=5,tmp));
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10406,a[2]=((C_word)li206),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10418,a[2]=t5,a[3]=t7,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_stringp(t2))){
t11=t10;{
C_word *av2=av;
av2[0]=t11;
av2[1]=t2;
f_10418(2,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
/* eval.scm:1189: ##sys#symbol->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[278]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[278]+1);
av2[1]=t10;
av2[2]=t2;
tp(3,av2);}}
else{
if(C_truep(C_i_listp(t2))){
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10499,a[2]=t12,a[3]=t5,a[4]=((C_word)li208),tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_10499(t14,t10,t2);}
else{
t11=t10;{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_SCHEME_UNDEFINED;
f_10418(2,av2);}}}}}

/* err in canonicalize-extension-path in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_fcall f_10400(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_10400,2,t0,t1);}
/* eval.scm:1186: ##sys#error */
t2=*((C_word*)lf[17]+1);{
C_word av2[5];
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[277];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* sep? in canonicalize-extension-path in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static C_word C_fcall f_10406(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;{}
t2=C_i_char_equalp(C_make_character(92),t1);
if(C_truep(t2)){
return(t2);}
else{
t3=t1;
t4=C_u_i_char_equalp(C_make_character(47),t3);
return(t4);}}

/* k10416 in canonicalize-extension-path in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_10418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_10418,2,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10423,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word)li207),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_10423(t5,((C_word*)t0)[4],t1);}

/* check in k10416 in canonicalize-extension-path in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_fcall f_10423(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_10423,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_block_size(t2);
t4=C_eqp(C_fix(0),t3);
if(C_truep(t4)){
/* eval.scm:1205: err */
t5=((C_word*)((C_word*)t0)[2])[1];
f_10400(t5,t1);}
else{
t5=C_i_string_ref(t2,C_fix(0));
t6=(
  /* eval.scm:1206: sep? */
  f_10406(t5)
);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10449,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1207: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[205]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[205]+1);
av2[1]=t7;
av2[2]=t2;
av2[3]=C_fix(1);
av2[4]=t3;
tp(5,av2);}}
else{
t7=t2;
t8=C_fixnum_difference(t3,C_fix(1));
t9=C_i_string_ref(t7,t8);
t10=(
  /* eval.scm:1208: sep? */
  f_10406(t9)
);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10462,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t12=C_fixnum_difference(t3,C_fix(1));
/* eval.scm:1209: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[205]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[205]+1);
av2[1]=t11;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=t12;
tp(5,av2);}}
else{
t11=t2;
t12=t1;{
C_word av2[2];
av2[0]=t12;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}}}}

/* k10447 in check in k10416 in canonicalize-extension-path in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_10449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10449,2,av);}
/* eval.scm:1207: check */
t2=((C_word*)((C_word*)t0)[2])[1];
f_10423(t2,((C_word*)t0)[3],t1);}

/* k10460 in check in k10416 in canonicalize-extension-path in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_10462(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10462,2,av);}
/* eval.scm:1209: check */
t2=((C_word*)((C_word*)t0)[2])[1];
f_10423(t2,((C_word*)t0)[3],t1);}

/* loop in canonicalize-extension-path in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_fcall f_10499(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10499,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[279];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10516,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_symbolp(t3))){
/* eval.scm:1196: ##sys#symbol->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[278]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[278]+1);
av2[1]=t4;
av2[2]=t3;
tp(3,av2);}}
else{
if(C_truep(C_i_stringp(t3))){
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=t3;
f_10516(2,av2);}}
else{
/* eval.scm:1198: err */
t5=((C_word*)((C_word*)t0)[3])[1];
f_10400(t5,t4);}}}}

/* k10514 in loop in canonicalize-extension-path in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_10516(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_10516,2,av);}
a=C_alloc(5);
t2=t1;
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=C_i_nullp(t3);
t5=(C_truep(t4)?lf[280]:lf[281]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10524,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=C_slot(((C_word*)t0)[2],C_fix(1));
/* eval.scm:1202: loop */
t9=((C_word*)((C_word*)t0)[4])[1];
f_10499(t9,t7,t8);}

/* k10522 in k10514 in loop in canonicalize-extension-path in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_10524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10524,2,av);}
/* eval.scm:1194: string-append */
t2=*((C_word*)lf[203]+1);{
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

/* chicken.load#file-exists? in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in ... */
static void C_fcall f_10553(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_10553,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10560,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1216: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[250]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[250]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
av2[5]=C_SCHEME_FALSE;
tp(6,av2);}}

/* k10558 in chicken.load#file-exists? in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_10560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10560,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.load#find-file in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in ... */
static void C_ccall f_10562(C_word c,C_word *av){
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
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_10562,4,av);}
a=C_alloc(8);
if(C_truep(C_i_not(t3))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_stringp(t3))){
t4=C_a_i_list1(&a,1,t3);
/* eval.scm:1221: find-file */
t5=*((C_word*)lf[284]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10591,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10603,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_i_car(t3);
/* eval.scm:1222: scheme#string-append */
t7=*((C_word*)lf[203]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=lf[285];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}}}}

/* k10589 in chicken.load#find-file in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_10591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10591,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* eval.scm:1223: find-file */
t4=*((C_word*)lf[284]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[4];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k10601 in chicken.load#find-file in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_10603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10603,2,av);}
/* eval.scm:1222: file-exists? */
f_10553(((C_word*)t0)[2],t1);}

/* chicken.load#find-dynamic-extension in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in ... */
static void C_ccall f_10609(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_10609,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10613,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1228: ##sys#canonicalize-extension-path */
t5=*((C_word*)lf[276]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k10611 in chicken.load#find-dynamic-extension in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_10613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_10613,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10616,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1229: chicken.platform#repository-path */
t4=*((C_word*)lf[291]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10614 in k10611 in chicken.load#find-dynamic-extension in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_10616(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_10616,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10618,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li212),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10661,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(C_truep(*((C_word*)lf[282]+1))?lf[288]:C_SCHEME_END_OF_LIST);
t6=(C_truep(t2)?t2:C_SCHEME_END_OF_LIST);
t7=(C_truep(((C_word*)t0)[4])?*((C_word*)lf[289]+1):C_SCHEME_END_OF_LIST);
if(C_truep(*((C_word*)lf[282]+1))){
/* eval.scm:1237: ##sys#append */
t8=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t8;
av2[1]=t4;
av2[2]=t5;
av2[3]=t6;
av2[4]=t7;
av2[5]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t8+1)))(6,av2);}}
else{
/* eval.scm:1237: ##sys#append */
t8=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t8;
av2[1]=t4;
av2[2]=t5;
av2[3]=t6;
av2[4]=t7;
av2[5]=lf[290];
((C_proc)(void*)(*((C_word*)t8+1)))(6,av2);}}}

/* check in k10614 in k10611 in chicken.load#find-dynamic-extension in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_fcall f_10618(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_10618,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10622,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1231: string-append */
t4=*((C_word*)lf[203]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[287];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k10620 in check in k10614 in k10611 in chicken.load#find-dynamic-extension in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in ... */
static void C_ccall f_10622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_10622,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10625,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
if(C_truep(C_i_not(*((C_word*)lf[208]+1)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10647,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1234: chicken.platform#feature? */
t5=*((C_word*)lf[252]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[253];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_10625(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_10625(2,av2);}}}

/* k10623 in k10620 in check in k10614 in k10611 in chicken.load#find-dynamic-extension in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_10625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_10625,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10635,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1236: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[220]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[220]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[187];
tp(4,av2);}}}

/* k10633 in k10623 in k10620 in check in k10614 in k10611 in chicken.load#find-dynamic-extension in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in ... */
static void C_ccall f_10635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10635,2,av);}
/* eval.scm:1236: file-exists? */
f_10553(((C_word*)t0)[2],t1);}

/* k10645 in k10620 in check in k10614 in k10611 in chicken.load#find-dynamic-extension in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_10647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_10647,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10654,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1235: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[220]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[220]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[194]+1);
tp(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_10625(2,av2);}}}

/* k10652 in k10645 in k10620 in check in k10614 in k10611 in chicken.load#find-dynamic-extension in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in ... */
static void C_ccall f_10654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10654,2,av);}
/* eval.scm:1235: file-exists? */
f_10553(((C_word*)t0)[2],t1);}

/* k10659 in k10614 in k10611 in chicken.load#find-dynamic-extension in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_10661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_10661,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10663,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li213),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_10663(t5,((C_word*)t0)[3],t1);}

/* loop in k10659 in k10614 in k10611 in chicken.load#find-dynamic-extension in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in ... */
static void C_fcall f_10663(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10663,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10676,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1244: check */
t5=((C_word*)t0)[3];
f_10618(t5,t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10674 in loop in k10659 in k10614 in k10611 in chicken.load#find-dynamic-extension in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_10676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10676,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* eval.scm:1245: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_10663(t3,((C_word*)t0)[2],t2);}}

/* k10706 in chicken.load#load-extension in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_10708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_10708,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10714,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1249: any */
f_8575(t2,*((C_word*)lf[196]+1),((C_word*)t0)[5]);}}

/* k10712 in k10706 in chicken.load#load-extension in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_10714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10714,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_memq(((C_word*)t0)[3],lf[183]))){
/* eval.scm:1251: load-library/internal */
f_10160(((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10729,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1252: find-dynamic-extension */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[286]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[286]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}}}

/* k10727 in k10712 in k10706 in chicken.load#load-extension in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_10729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_10729,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10733,a[2]=((C_word*)t0)[2],a[3]=((C_word)li215),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1248: g2636 */
t3=t2;
f_10733(t3,((C_word*)t0)[3],t1);}
else{
/* eval.scm:1257: ##sys#error */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[292];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* g2636 in k10727 in k10712 in k10706 in chicken.load#load-extension in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in ... */
static void C_fcall f_10733(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,4)))){
C_save_and_reclaim_args((void *)trf_10733,3,t0,t1,t2);}
a=C_alloc(16);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10737,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1254: load/internal */
t4=lf[225];
f_9684(t4,t3,t2,C_SCHEME_FALSE,C_a_i_list(&a,4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]));}

/* k10735 in g2636 in k10727 in k10712 in k10706 in chicken.load#load-extension in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_10737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10737,2,av);}
/* eval.scm:1255: ##sys#provide */
t2=*((C_word*)lf[93]+1);{
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

/* chicken.load#load-extension in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in ... */
static void C_ccall f_10748(C_word c,C_word *av){
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
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_10748,5,av);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10752,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=t5;
t7=t2;
t8=t3;
t9=t4;
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10708,a[2]=t6,a[3]=t7,a[4]=t9,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1248: ##sys#provided? */
t11=*((C_word*)lf[196]+1);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}

/* k10750 in chicken.load#load-extension in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_10752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10752,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.load#require in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in ... */
static void C_ccall f_10754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +9,c,3)))){
C_save_and_reclaim((void*)f_10754,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+9);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
t3=t2;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10796,a[2]=((C_word)li217),tmp=(C_word)a,a+=3,tmp);
t5=(
  f_10796(t3)
);
t6=t2;
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10773,a[2]=t8,a[3]=((C_word)li218),tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_10773(t10,t1,t6);}

/* for-each-loop2659 in chicken.load#require in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_fcall f_10773(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_10773,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10783,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[106]+1);
/* eval.scm:1265: g2690 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[106]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[106]+1);
av2[1]=t3;
av2[2]=t4;
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=lf[107];
tp(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10781 in for-each-loop2659 in chicken.load#require in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_10783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10783,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10773(t3,((C_word*)t0)[4],t2);}

/* for-each-loop2649 in chicken.load#require in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static C_word C_fcall f_10796(C_word t1){
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
t3=C_i_check_symbol_2(t2,lf[107]);
t4=C_slot(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* chicken.load#provide in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in ... */
static void C_ccall f_10819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +9,c,3)))){
C_save_and_reclaim((void*)f_10819,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+9);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
t3=t2;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10861,a[2]=((C_word)li220),tmp=(C_word)a,a+=3,tmp);
t5=(
  f_10861(t3)
);
t6=t2;
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10838,a[2]=t8,a[3]=((C_word)li221),tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_10838(t10,t1,t6);}

/* for-each-loop2712 in chicken.load#provide in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_fcall f_10838(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10838,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10848,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[93]+1);
/* eval.scm:1269: g2743 */
t6=*((C_word*)lf[93]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10846 in for-each-loop2712 in chicken.load#provide in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_10848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10848,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10838(t3,((C_word*)t0)[4],t2);}

/* for-each-loop2702 in chicken.load#provide in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static C_word C_fcall f_10861(C_word t1){
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
t3=C_i_check_symbol_2(t2,lf[295]);
t4=C_slot(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* chicken.load#provided? in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in ... */
static void C_ccall f_10884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +10,c,3)))){
C_save_and_reclaim((void*)f_10884,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+10);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t3=t2;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10898,a[2]=((C_word)li223),tmp=(C_word)a,a+=3,tmp);
t5=(
  f_10898(t3)
);
t6=*((C_word*)lf[196]+1);
t7=t2;
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8547,a[2]=t9,a[3]=t6,a[4]=((C_word)li224),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_8547(t11,t1,t7);}

/* for-each-loop2755 in chicken.load#provided? in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static C_word C_fcall f_10898(C_word t1){
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
t3=C_i_check_symbol_2(t2,lf[297]);
t4=C_slot(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* chicken.load#find-static-extension in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in ... */
static void C_ccall f_10921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_10921,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10925,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1276: ##sys#canonicalize-extension-path */
t4=*((C_word*)lf[276]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k10923 in chicken.load#find-static-extension in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_10925(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_10925,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10932,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1277: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[220]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[220]+1);
av2[1]=t2;
av2[2]=t1;
av2[3]=lf[192];
tp(4,av2);}}

/* k10930 in k10923 in chicken.load#find-static-extension in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_10932(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10932,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10936,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1278: chicken.platform#repository-path */
t4=*((C_word*)lf[291]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10934 in k10930 in k10923 in chicken.load#find-static-extension in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_10936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10936,2,av);}
/* eval.scm:1277: find-file */
t2=*((C_word*)lf[284]+1);{
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

/* ##sys#process-require in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in ... */
static void C_ccall f_10941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,2)))){
C_save_and_reclaim((void*)f_10941,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+8);
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_car(t8));
t11=t10;
t12=C_i_nullp(t8);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_car(t13));
t16=t15;
t17=C_i_nullp(t13);
t18=(C_truep(t17)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t19=C_i_nullp(t18);
t20=(C_truep(t19)?C_SCHEME_FALSE:C_i_car(t18));
t21=t20;
t22=C_i_nullp(t18);
t23=(C_truep(t22)?C_SCHEME_END_OF_LIST:C_i_cdr(t18));
t24=C_i_nullp(t23);
t25=(C_truep(t24)?C_SCHEME_FALSE:C_i_car(t23));
t26=t25;
t27=C_i_nullp(t23);
t28=(C_truep(t27)?C_SCHEME_END_OF_LIST:C_i_cdr(t23));
t29=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10975,a[2]=t1,a[3]=t16,a[4]=t6,a[5]=t21,a[6]=t26,a[7]=t11,tmp=(C_word)a,a+=8,tmp);
/* eval.scm:1292: chicken.internal#library-id */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[322]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[322]+1);
av2[1]=t29;
av2[2]=t2;
tp(3,av2);}}

/* k10973 in process-require in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_10975(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_10975,2,av);}
a=C_alloc(12);
t2=t1;
t3=C_i_assq(t2,lf[299]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
t5=C_i_cdr(t3);
/* eval.scm:1295: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t4;
av2[2]=t5;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}
else{
if(C_truep((C_truep(C_eqp(t2,lf[300]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[301]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[302]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[303]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[304]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[305]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[306]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[307]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[308]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[309]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[310]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[311]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[312]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[313]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[314]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[315]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))))))))))))))){
/* eval.scm:1297: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[316];
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}
else{
if(C_truep(C_i_memq(t2,((C_word*)t0)[3]))){
/* eval.scm:1299: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[317];
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11017,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11092,a[2]=((C_word*)t0)[3],a[3]=((C_word)li227),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1300: any */
f_8575(t4,t5,((C_word*)t0)[7]);}}}}

/* k11015 in k10973 in process-require in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_11017(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(30,c,3)))){
C_save_and_reclaim((void *)f_11017,2,av);}
a=C_alloc(30);
if(C_truep(t1)){
/* eval.scm:1301: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[318];
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}
else{
if(C_truep(C_i_memq(((C_word*)t0)[3],lf[183]))){
if(C_truep(((C_word*)t0)[4])){
t2=C_a_i_list(&a,2,lf[319],((C_word*)t0)[3]);
t3=C_a_i_list(&a,2,lf[117],t2);
/* eval.scm:1304: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}
else{
t2=C_a_i_list(&a,2,lf[23],((C_word*)t0)[3]);
t3=C_a_i_list(&a,2,lf[267],t2);
/* eval.scm:1305: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}
else{
t2=(C_truep(((C_word*)t0)[4])?((C_word*)t0)[5]:C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11060,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1307: mark-static */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
t3=C_a_i_list(&a,2,lf[23],((C_word*)t0)[3]);
t4=C_a_i_list(&a,2,lf[23],((C_word*)t0)[7]);
t5=C_a_i_list(&a,2,lf[23],lf[107]);
t6=C_a_i_list(&a,4,lf[106],t3,t4,t5);
/* eval.scm:1310: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t6;
av2[3]=lf[321];
C_values(4,av2);}}}}}

/* k11058 in k11015 in k10973 in process-require in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_11060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_11060,2,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,2,lf[319],((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[117],t2);
/* eval.scm:1308: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
av2[3]=lf[320];
C_values(4,av2);}}

/* a11091 in k10973 in process-require in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_11092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11092,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_memq(t2,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##sys#resolve-include-filename in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_11162(C_word c,C_word *av){
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
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_11162,6,av);}
a=C_alloc(23);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11165,a[2]=t7,a[3]=((C_word)li229),tmp=(C_word)a,a+=4,tmp));
t11=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11198,a[2]=t3,a[3]=t7,a[4]=((C_word)li230),tmp=(C_word)a,a+=5,tmp));
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11237,a[2]=t1,a[3]=t9,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11291,a[2]=t9,a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1339: make-relative-pathname */
f_9523(t13,t5,t2);}

/* test-extensions in resolve-include-filename in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_fcall f_11165(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_11165,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11178,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1325: file-exists? */
f_10553(t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11181,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t3);
/* eval.scm:1326: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[220]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[220]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=t5;
tp(4,av2);}}}

/* k11176 in test-extensions in resolve-include-filename in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_11178(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11178,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11179 in test-extensions in resolve-include-filename in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_11181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11181,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11184,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1327: file-exists? */
f_10553(t2,t1);}

/* k11182 in k11179 in test-extensions in resolve-include-filename in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in ... */
static void C_ccall f_11184(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11184,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* eval.scm:1328: test-extensions */
t4=((C_word*)((C_word*)t0)[4])[1];
f_11165(t4,((C_word*)t0)[2],((C_word*)t0)[5],t3);}}

/* test in resolve-include-filename in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_fcall f_11198(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_11198,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t3=((C_word*)t0)[2];
/* eval.scm:1330: test-extensions */
t4=((C_word*)((C_word*)t0)[3])[1];
f_11165(t4,t1,t2,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11234,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1333: chicken.platform#feature? */
t4=*((C_word*)lf[252]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[253];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k11232 in test in resolve-include-filename in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_11234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11234,2,av);}
a=C_alloc(6);
if(C_truep(C_i_not(t1))){
t2=C_a_i_list1(&a,1,lf[187]);
/* eval.scm:1330: test-extensions */
t3=((C_word*)((C_word*)t0)[2])[1];
f_11165(t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}
else{
t2=C_i_not(((C_word*)t0)[5]);
t3=(C_truep(t2)?C_a_i_list2(&a,2,*((C_word*)lf[194]+1),lf[187]):C_a_i_list2(&a,2,lf[187],*((C_word*)lf[194]+1)));
/* eval.scm:1330: test-extensions */
t4=((C_word*)((C_word*)t0)[2])[1];
f_11165(t4,((C_word*)t0)[3],((C_word*)t0)[4],t3);}}

/* k11235 in resolve-include-filename in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_11237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_11237,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11247,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11284,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1343: chicken.platform#repository-path */
t4=*((C_word*)lf[291]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=*((C_word*)lf[289]+1);
f_11247(2,av2);}}}}

/* k11245 in k11235 in resolve-include-filename in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_11247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_11247,2,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11249,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li231),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_11249(t5,((C_word*)t0)[4],t1);}

/* loop in k11245 in k11235 in resolve-include-filename in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in ... */
static void C_fcall f_11249(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_11249,3,t0,t1,t2);}
a=C_alloc(9);
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11259,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11273,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_slot(t2,C_fix(0));
/* eval.scm:1346: string-append */
t7=*((C_word*)lf[203]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=lf[323];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}}

/* k11257 in loop in k11245 in k11235 in resolve-include-filename in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_11259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11259,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* eval.scm:1349: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_11249(t3,((C_word*)t0)[2],t2);}}

/* k11271 in loop in k11245 in k11235 in resolve-include-filename in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_11273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11273,2,av);}
/* eval.scm:1346: test */
t2=((C_word*)((C_word*)t0)[2])[1];
f_11198(t2,((C_word*)t0)[3],t1);}

/* k11282 in k11235 in resolve-include-filename in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_11284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11284,2,av);}
if(C_truep(t1)){
t2=t1;
/* eval.scm:1341: ##sys#append */
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[289]+1);
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
/* eval.scm:1341: ##sys#append */
t2=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[289]+1);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k11289 in resolve-include-filename in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_11291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11291,2,av);}
/* eval.scm:1339: test */
t2=((C_word*)((C_word*)t0)[2])[1];
f_11198(t2,((C_word*)t0)[3],t1);}

/* run-safe in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_fcall f_11294(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_11294,2,t1,t2);}
a=C_alloc(7);
t3=lf[324] /* last-error */ =C_SCHEME_FALSE;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11299,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11304,a[2]=t2,a[3]=((C_word)li239),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1369: scheme#call-with-current-continuation */
t6=*((C_word*)lf[328]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k11297 in run-safe in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_11299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11299,2,av);}
/* eval.scm:1367: g2952 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a11303 in run-safe in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_11304(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_11304,3,av);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11310,a[2]=t2,a[3]=((C_word)li234),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11329,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li238),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1369: chicken.condition#with-exception-handler */
t5=*((C_word*)lf[327]+1);{
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

/* a11309 in a11303 in run-safe in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_11310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11310,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11316,a[2]=t2,a[3]=((C_word)li233),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1369: k2949 */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a11315 in a11309 in a11303 in run-safe in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in ... */
static void C_ccall f_11316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11316,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11320,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1370: chicken.base#open-output-string */
t3=*((C_word*)lf[15]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11318 in a11315 in a11309 in a11303 in run-safe in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_11320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_11320,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11323,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1371: chicken.condition#print-error-message */
t4=*((C_word*)lf[326]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k11321 in k11318 in a11315 in a11309 in a11303 in run-safe in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in ... */
static void C_ccall f_11323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11323,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11327,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1372: chicken.base#get-output-string */
t3=*((C_word*)lf[13]+1);{
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

/* k11325 in k11321 in k11318 in a11315 in a11309 in a11303 in run-safe in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in ... */
static void C_ccall f_11327(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11327,2,av);}
t2=C_mutate(&lf[324] /* (set! last-error ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a11328 in a11303 in run-safe in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_11329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_11329,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11335,a[2]=((C_word*)t0)[2],a[3]=((C_word)li235),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11341,a[2]=((C_word*)t0)[3],a[3]=((C_word)li237),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1369: ##sys#call-with-values */{
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

/* a11334 in a11328 in a11303 in run-safe in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in ... */
static void C_ccall f_11335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11335,2,av);}
/* eval.scm:1374: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a11340 in a11328 in a11303 in run-safe in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in ... */
static void C_ccall f_11341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_11341,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11347,a[2]=t2,a[3]=((C_word)li236),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1369: k2949 */
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
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a11346 in a11340 in a11328 in a11303 in run-safe in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_11347(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11347,2,av);}{
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

/* store-result in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_fcall f_11353(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_11353,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11357,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1381: ##sys#gc */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[330]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[330]+1);
av2[1]=t4;
av2[2]=C_SCHEME_FALSE;
tp(3,av2);}}

/* k11355 in store-result in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_11357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11357,2,av);}
if(C_truep(((C_word*)t0)[2])){
t2=C_store_result(((C_word*)t0)[3],((C_word*)t0)[2]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* CHICKEN_yield in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_11362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11362,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11368,a[2]=((C_word)li242),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1387: run-safe */
f_11294(t1,t2);}

/* a11367 in CHICKEN_yield in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_11368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11368,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11372,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1387: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[332]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[332]+1);
av2[1]=t2;
tp(2,av2);}}

/* k11370 in a11367 in CHICKEN_yield in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_11372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11372,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* CHICKEN_eval in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_11374(C_word c,C_word *av){
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
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11374,4,av);}
a=C_alloc(5);
t4=t2;
t5=t3;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11380,a[2]=t5,a[3]=t4,a[4]=((C_word)li244),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1390: run-safe */
f_11294(t1,t6);}

/* a11379 in CHICKEN_eval in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_11380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11380,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11388,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1392: scheme#eval */
t3=*((C_word*)lf[153]+1);{
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

/* k11386 in a11379 in CHICKEN_eval in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_11388(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11388,2,av);}
/* eval.scm:1392: store-result */
f_11353(((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* CHICKEN_eval_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_11390(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_11390,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11394,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1394: ##sys#peek-c-string */
t5=*((C_word*)lf[238]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k11392 in CHICKEN_eval_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_11394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11394,2,av);}
a=C_alloc(5);
t2=t1;
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11399,a[2]=t3,a[3]=t2,a[4]=((C_word)li246),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1395: run-safe */
f_11294(((C_word*)t0)[3],t4);}

/* a11398 in k11392 in CHICKEN_eval_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_11399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11399,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11403,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1397: chicken.base#open-input-string */
t3=*((C_word*)lf[335]+1);{
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

/* k11401 in a11398 in k11392 in CHICKEN_eval_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in ... */
static void C_ccall f_11403(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11403,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11410,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11414,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1398: scheme#read */
t4=*((C_word*)lf[231]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k11408 in k11401 in a11398 in k11392 in CHICKEN_eval_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_11410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11410,2,av);}
/* eval.scm:1398: store-result */
f_11353(((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k11412 in k11401 in a11398 in k11392 in CHICKEN_eval_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_11414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11414,2,av);}
/* eval.scm:1398: scheme#eval */
t2=*((C_word*)lf[153]+1);{
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

/* store-string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static C_word C_fcall f_11416(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;{}
t4=C_block_size(t1);
if(C_truep(C_fixnum_greater_or_equal_p(t4,t2))){
t5=C_mutate(&lf[324] /* (set! last-error ...) */,lf[337]);
return(C_SCHEME_FALSE);}
else{
t5=C_copy_result_string(t1,t3,t4);
return(t5);}}

/* CHICKEN_eval_to_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_11429(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11429,5,av);}
a=C_alloc(6);
t5=t2;
t6=t3;
t7=t4;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11435,a[2]=t7,a[3]=t6,a[4]=t5,a[5]=((C_word)li249),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1414: run-safe */
f_11294(t1,t8);}

/* a11434 in CHICKEN_eval_to_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_11435(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11435,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11439,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1416: chicken.base#open-output-string */
t3=*((C_word*)lf[15]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11437 in a11434 in CHICKEN_eval_to_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_11439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11439,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11442,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11453,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1417: scheme#eval */
t5=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k11440 in k11437 in a11434 in CHICKEN_eval_to_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in ... */
static void C_ccall f_11442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11442,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11449,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1418: chicken.base#get-output-string */
t3=*((C_word*)lf[13]+1);{
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

/* k11447 in k11440 in k11437 in a11434 in CHICKEN_eval_to_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_11449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11449,2,av);}
/* eval.scm:1418: store-string */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(
  /* eval.scm:1418: store-string */
  f_11416(t1,((C_word*)t0)[3],((C_word*)t0)[4])
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11451 in k11437 in a11434 in CHICKEN_eval_to_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in ... */
static void C_ccall f_11453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11453,2,av);}
/* eval.scm:1417: scheme#write */
t2=*((C_word*)lf[14]+1);{
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

/* CHICKEN_eval_string_to_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_11455(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11455,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11459,a[2]=t3,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1420: ##sys#peek-c-string */
t6=*((C_word*)lf[238]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k11457 in CHICKEN_eval_string_to_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_11459(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11459,2,av);}
a=C_alloc(6);
t2=t1;
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11464,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=((C_word)li251),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1423: run-safe */
f_11294(((C_word*)t0)[4],t5);}

/* a11463 in k11457 in CHICKEN_eval_string_to_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_11464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11464,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11468,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1425: chicken.base#open-output-string */
t3=*((C_word*)lf[15]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11466 in a11463 in k11457 in CHICKEN_eval_string_to_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in ... */
static void C_ccall f_11468(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_11468,2,av);}
a=C_alloc(16);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11471,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11482,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11486,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11490,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1426: chicken.base#open-input-string */
t7=*((C_word*)lf[335]+1);{
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

/* k11469 in k11466 in a11463 in k11457 in CHICKEN_eval_string_to_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_11471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11471,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11478,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1427: chicken.base#get-output-string */
t3=*((C_word*)lf[13]+1);{
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

/* k11476 in k11469 in k11466 in a11463 in k11457 in CHICKEN_eval_string_to_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in ... */
static void C_ccall f_11478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11478,2,av);}
/* eval.scm:1427: store-string */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(
  /* eval.scm:1427: store-string */
  f_11416(t1,((C_word*)t0)[3],((C_word*)t0)[4])
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11480 in k11466 in a11463 in k11457 in CHICKEN_eval_string_to_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_11482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11482,2,av);}
/* eval.scm:1426: scheme#write */
t2=*((C_word*)lf[14]+1);{
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

/* k11484 in k11466 in a11463 in k11457 in CHICKEN_eval_string_to_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_11486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11486,2,av);}
/* eval.scm:1426: scheme#eval */
t2=*((C_word*)lf[153]+1);{
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

/* k11488 in k11466 in a11463 in k11457 in CHICKEN_eval_string_to_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_11490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11490,2,av);}
/* eval.scm:1426: scheme#read */
t2=*((C_word*)lf[231]+1);{
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

/* CHICKEN_apply in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_11492(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11492,5,av);}
a=C_alloc(6);
t5=t2;
t6=t3;
t7=t4;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11498,a[2]=t7,a[3]=t5,a[4]=t6,a[5]=((C_word)li253),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1432: run-safe */
f_11294(t1,t8);}

/* a11497 in CHICKEN_apply in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_11498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_11498,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11506,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
C_apply(4,av2);}}

/* k11504 in a11497 in CHICKEN_apply in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_11506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11506,2,av);}
/* eval.scm:1432: store-result */
f_11353(((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* CHICKEN_apply_to_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_11508(C_word c,C_word *av){
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
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11508,6,av);}
a=C_alloc(7);
t6=t2;
t7=t3;
t8=t4;
t9=t5;
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11514,a[2]=t9,a[3]=t8,a[4]=t6,a[5]=t7,a[6]=((C_word)li255),tmp=(C_word)a,a+=7,tmp);
/* eval.scm:1437: run-safe */
f_11294(t1,t10);}

/* a11513 in CHICKEN_apply_to_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_11514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11514,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11518,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:1439: chicken.base#open-output-string */
t3=*((C_word*)lf[15]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11516 in a11513 in CHICKEN_apply_to_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_11518(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11518,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11521,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11532,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
C_apply(4,av2);}}

/* k11519 in k11516 in a11513 in CHICKEN_apply_to_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in ... */
static void C_ccall f_11521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11521,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11528,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1441: chicken.base#get-output-string */
t3=*((C_word*)lf[13]+1);{
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

/* k11526 in k11519 in k11516 in a11513 in CHICKEN_apply_to_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_11528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11528,2,av);}
/* eval.scm:1441: store-string */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(
  /* eval.scm:1441: store-string */
  f_11416(t1,((C_word*)t0)[3],((C_word*)t0)[4])
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11530 in k11516 in a11513 in CHICKEN_apply_to_string in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in ... */
static void C_ccall f_11532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11532,2,av);}
/* eval.scm:1440: scheme#write */
t2=*((C_word*)lf[14]+1);{
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

/* CHICKEN_read in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_11534(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_11534,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11538,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1443: ##sys#peek-c-string */
t5=*((C_word*)lf[238]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k11536 in CHICKEN_read in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_11538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11538,2,av);}
a=C_alloc(5);
t2=t1;
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11543,a[2]=t3,a[3]=t2,a[4]=((C_word)li257),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1444: run-safe */
f_11294(((C_word*)t0)[3],t4);}

/* a11542 in k11536 in CHICKEN_read in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_11543(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11543,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11547,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1446: chicken.base#open-input-string */
t3=*((C_word*)lf[335]+1);{
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

/* k11545 in a11542 in k11536 in CHICKEN_read in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in ... */
static void C_ccall f_11547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11547,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11554,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1447: scheme#read */
t3=*((C_word*)lf[231]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11552 in k11545 in a11542 in k11536 in CHICKEN_read in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_11554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11554,2,av);}
/* eval.scm:1447: store-result */
f_11353(((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* CHICKEN_load in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_11556(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_11556,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11560,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1449: ##sys#peek-c-string */
t4=*((C_word*)lf[238]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k11558 in CHICKEN_load in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_11560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11560,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11565,a[2]=t2,a[3]=((C_word)li259),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1450: run-safe */
f_11294(((C_word*)t0)[2],t3);}

/* a11564 in k11558 in CHICKEN_load in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_11565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11565,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11569,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1450: scheme#load */
t3=*((C_word*)lf[254]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11567 in a11564 in k11558 in CHICKEN_load in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in ... */
static void C_ccall f_11569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11569,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* CHICKEN_get_error_message in k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_11571(C_word c,C_word *av){
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
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11571,4,av);}
t4=lf[324];
if(C_truep(lf[324])){
t5=lf[324];
t6=lf[324];
/* eval.scm:1453: store-string */
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=(
  /* eval.scm:1453: store-string */
  f_11416(lf[324],t3,t2)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
/* eval.scm:1453: store-string */
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=(
  /* eval.scm:1453: store-string */
  f_11416(lf[345],t3,t2)
);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k11581 in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in ... */
static void C_ccall f_11583(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(45,c,6)))){
C_save_and_reclaim((void *)f_11583,2,av);}
a=C_alloc(45);
t2=C_a_i_list1(&a,1,t1);
t3=C_mutate((C_word*)lf[289]+1 /* (set! ##sys#include-pathnames ...) */,t2);
t4=C_mutate((C_word*)lf[275]+1 /* (set! ##sys#resolve-include-filename ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11162,a[2]=((C_word)li232),tmp=(C_word)a,a+=3,tmp));
t5=lf[324] /* last-error */ =C_SCHEME_FALSE;;
t6=C_mutate(&lf[325] /* (set! run-safe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11294,a[2]=((C_word)li240),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate(&lf[329] /* (set! store-result ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11353,a[2]=((C_word)li241),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate(&lf[331] /* (set! CHICKEN_yield ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11362,a[2]=((C_word)li243),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate(&lf[333] /* (set! CHICKEN_eval ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11374,a[2]=((C_word)li245),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate(&lf[334] /* (set! CHICKEN_eval_string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11390,a[2]=((C_word)li247),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate(&lf[336] /* (set! store-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11416,a[2]=((C_word)li248),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate(&lf[338] /* (set! CHICKEN_eval_to_string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11429,a[2]=((C_word)li250),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate(&lf[339] /* (set! CHICKEN_eval_string_to_string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11455,a[2]=((C_word)li252),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate(&lf[340] /* (set! CHICKEN_apply ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11492,a[2]=((C_word)li254),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate(&lf[341] /* (set! CHICKEN_apply_to_string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11508,a[2]=((C_word)li256),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate(&lf[342] /* (set! CHICKEN_read ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11534,a[2]=((C_word)li258),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate(&lf[343] /* (set! CHICKEN_load ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11556,a[2]=((C_word)li260),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate(&lf[344] /* (set! CHICKEN_get_error_message ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11571,a[2]=((C_word)li261),tmp=(C_word)a,a+=3,tmp));
t19=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t19;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t19+1)))(2,av2);}}

/* k11588 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in ... */
static void C_ccall f_11590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_11590,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11592,a[2]=((C_word)li262),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1125: chicken.base#make-parameter */
t3=*((C_word*)lf[347]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a11591 in k11588 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in ... */
static void C_ccall f_11592(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11592,3,av);}
t3=C_i_check_list(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop2442 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in ... */
static void C_fcall f_11598(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11598,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11623,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* eval.scm:1126: g2448 */
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

/* k11621 in map-loop2442 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in ... */
static void C_ccall f_11623(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11623,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_11598(t6,((C_word*)t0)[5],t5);}

/* k11635 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 in ... */
static void C_ccall f_11637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11637,2,av);}
/* eval.scm:1118: scheme#string-append */
t2=*((C_word*)lf[203]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[193];
av2[3]=lf[348];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11647 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11649,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_9476(t2,C_a_i_list(&a,1,t1));}

/* k11651 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11653,2,av);}
/* eval.scm:953: scheme#string-append */
t2=*((C_word*)lf[203]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[352];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k11678 in k11682 in k11686 in k11690 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11680,2,av);}
t2=C_eqp(t1,lf[358]);
t3=((C_word*)t0)[2];
f_9467(t3,(C_truep(t2)?lf[359]:lf[185]));}

/* k11682 in k11686 in k11690 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11684,2,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[357]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11680,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:938: chicken.platform#machine-type */
t4=*((C_word*)lf[360]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=((C_word*)t0)[2];
f_9467(t3,lf[185]);}}

/* k11686 in k11690 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11688,2,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[355]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_9467(t3,lf[356]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11684,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:937: chicken.platform#software-version */
t4=*((C_word*)lf[353]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11690 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11692,2,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[189]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_9467(t3,lf[354]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11688,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:936: chicken.platform#software-version */
t4=*((C_word*)lf[353]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11699(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11699,2,av);}
a=C_alloc(6);
t2=C_eqp(t1,lf[189]);
t3=(C_truep(t2)?lf[190]:lf[191]);
t4=C_mutate(&lf[192] /* (set! chicken.load#object-file-extension ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9467,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11692,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:935: chicken.platform#software-type */
t7=*((C_word*)lf[361]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11703(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,4)))){
C_save_and_reclaim((void *)f_11703,2,av);}
a=C_alloc(24);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(2),t1);
t3=C_mutate((C_word*)lf[174]+1 /* (set! scheme#scheme-report-environment ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8122,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li161),tmp=(C_word)a,a+=5,tmp));
t4=C_mutate((C_word*)lf[178]+1 /* (set! scheme#null-environment ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8147,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word)li162),tmp=(C_word)a,a+=5,tmp));
t5=C_a_i_provide(&a,1,lf[181]);
t6=C_mutate(&lf[182] /* (set! chicken.load#any ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8575,a[2]=((C_word)li164),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate(&lf[183] /* (set! chicken.load#constant2100 ...) */,lf[184]);
t8=C_mutate(&lf[185] /* (set! chicken.load#constant2130 ...) */,lf[186]);
t9=C_mutate(&lf[187] /* (set! chicken.load#constant2139 ...) */,lf[188]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11699,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:931: chicken.platform#software-type */
t11=*((C_word*)lf[361]+1);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}

/* k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11711,2,av);}
a=C_alloc(7);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(2),t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11703,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(((C_word*)t0)[3],C_fix(2));
/* eval.scm:857: strip */
f_8064(t3,t4);}

/* k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_11719,2,av);}
a=C_alloc(8);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(2),t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11711,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=C_slot(((C_word*)t0)[3],C_fix(2));
/* eval.scm:856: strip */
f_8064(t3,t4);}

/* k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_11727,2,av);}
a=C_alloc(8);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(2),t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11719,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=C_slot(((C_word*)t0)[3],C_fix(2));
/* eval.scm:855: strip */
f_8064(t3,t4);}

/* a11732 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11733(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_11733,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11737,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:823: ##sys#print */
t5=*((C_word*)lf[371]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[372];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k11735 in a11732 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11737,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
/* eval.scm:824: ##sys#print */
t4=*((C_word*)lf[371]+1);{
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
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k11738 in k11735 in a11732 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11740,2,av);}
/* eval.scm:825: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[370]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[370]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(62);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* a11748 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11749(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,5)))){
C_save_and_reclaim((void *)f_11749,2,av);}
a=C_alloc(14);
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11755,a[2]=t5,a[3]=t3,a[4]=((C_word)li265),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11776,a[2]=t5,a[3]=t3,a[4]=((C_word)li269),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:778: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t6;
av2[3]=t7;
C_values(4,av2);}}

/* a11754 in a11748 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11755(C_word c,C_word *av){
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
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_11755,5,av);}
a=C_alloc(12);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11759,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11774,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:781: ##sys#get */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=t3;
tp(4,av2);}}
else{
t6=t5;
f_11759(t6,C_SCHEME_UNDEFINED);}}

/* k11757 in a11754 in a11748 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_11759(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_11759,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11762,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:782: ##sys#put! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[375]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[375]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}

/* k11760 in k11757 in a11754 in a11748 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11762(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11762,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11772 in a11754 in a11748 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_11774,2,av);}
a=C_alloc(12);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,t3);
t5=((C_word*)t0)[5];
f_11759(t5,t4);}

/* a11775 in a11748 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11776(C_word c,C_word *av){
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
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_11776,3,av);}
a=C_alloc(15);
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)((C_word*)t0)[2])[1];
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11782,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word)li266),tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11787,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word)li268),tmp=(C_word)a,a+=7,tmp);
/* eval.scm:787: scheme#dynamic-wind */
t8=*((C_word*)lf[150]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t1;
av2[2]=t6;
av2[3]=t2;
av2[4]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}

/* a11781 in a11775 in a11748 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11782,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_TRUE);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a11786 in a11775 in a11748 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_11787,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11791,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11794,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t4,a[5]=((C_word)li267),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_11794(t6,t2);}

/* k11789 in a11786 in a11775 in a11748 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11791,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop1496 in a11786 in a11775 in a11748 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_11794(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_11794,2,t0,t1);}
a=C_alloc(5);
t2=C_eqp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11804,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(((C_word*)((C_word*)t0)[3])[1]);{
C_word av2[4];
av2[0]=0;
av2[1]=t3;
av2[2]=*((C_word*)lf[375]+1);
av2[3]=t4;
C_apply(4,av2);}}}

/* k11802 in doloop1496 in a11786 in a11775 in a11748 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11804,2,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)((C_word*)t0)[3])[1];
f_11794(t4,((C_word*)t0)[4]);}

/* a11816 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11817(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11817,4,av);}
t4=C_mutate((C_word*)lf[376]+1 /* (set! ##sys#put/restore! ...) */,t2);
t5=C_mutate((C_word*)lf[97]+1 /* (set! ##sys#with-property-restore ...) */,t3);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* a11821 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_11822,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11829,a[2]=t6,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:741: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t7;
tp(2,av2);}}

/* k11827 in a11821 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11829(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,4)))){
C_save_and_reclaim((void *)f_11829,2,av);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11832,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t1))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11922,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[167],*((C_word*)lf[377]+1));
t5=C_a_i_cons(&a,2,lf[166],*((C_word*)lf[378]+1));
t6=C_a_i_list(&a,3,lf[31],t4,t5);
/* eval.scm:747: compile-to-closure */
f_3670(t3,t6,C_SCHEME_END_OF_LIST,C_a_i_list(&a,4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_TRUE));}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_11832(2,av2);}}}

/* k11830 in k11827 in a11821 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11832(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_11832,2,av);}
a=C_alloc(29);
if(C_truep(((C_word*)t0)[2])){
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[158],lf[0]);
t3=C_slot(((C_word*)t0)[2],C_fix(2));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11844,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
t5=*((C_word*)lf[89]+1);
t6=*((C_word*)lf[9]+1);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=t3;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_TRUE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11852,a[2]=t8,a[3]=t10,a[4]=t12,a[5]=t6,a[6]=t5,a[7]=((C_word)li272),tmp=(C_word)a,a+=8,tmp);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11882,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word)li273),tmp=(C_word)a,a+=5,tmp);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11892,a[2]=t8,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li274),tmp=(C_word)a,a+=7,tmp);
/* eval.scm:755: ##sys#dynamic-wind */
t16=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t16;
av2[1]=t4;
av2[2]=t13;
av2[3]=t14;
av2[4]=t15;
((C_proc)(void*)(*((C_word*)t16+1)))(5,av2);}}
else{
/* eval.scm:758: compile-to-closure */
f_3670(t4,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,C_a_i_list(&a,4,C_SCHEME_FALSE,((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_TRUE));}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11913,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:761: compile-to-closure */
f_3670(t2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,C_a_i_list(&a,4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_TRUE));}}

/* k11842 in k11830 in k11827 in a11821 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11844,2,av);}
/* eval.scm:753: g1442 */
t2=t1;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* a11851 in k11830 in k11827 in a11821 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11852(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_11852,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11856,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
/* eval.scm:755: macro-environment14451446 */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_11856(2,av2);}}}

/* k11854 in a11851 in k11830 in k11827 in a11821 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_11856,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11859,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
/* eval.scm:755: current-environment14471448 */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
f_11859(2,av2);}}}

/* k11857 in k11854 in a11851 in k11830 in k11827 in a11821 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11859,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11863,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:755: macro-environment14451446 */
t4=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k11861 in k11857 in k11854 in a11851 in k11830 in k11827 in a11821 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_11863,2,av);}
a=C_alloc(9);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11867,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:755: current-environment14471448 */
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k11865 in k11861 in k11857 in k11854 in a11851 in k11830 in k11827 in a11821 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_11867,2,av);}
a=C_alloc(6);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11870,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:755: macro-environment14451446 */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k11868 in k11865 in k11861 in k11857 in k11854 in a11851 in k11830 in k11827 in a11821 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11870,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11873,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:755: current-environment14471448 */
t3=((C_word*)t0)[4];{
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
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k11871 in k11868 in k11865 in k11861 in k11857 in k11854 in a11851 in k11830 in k11827 in a11821 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11873,2,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a11881 in k11830 in k11827 in a11821 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_11882,2,av);}
a=C_alloc(12);
t2=C_slot(((C_word*)t0)[2],C_fix(3));
/* eval.scm:757: compile-to-closure */
f_3670(t1,((C_word*)t0)[3],C_SCHEME_END_OF_LIST,C_a_i_list(&a,4,C_SCHEME_FALSE,((C_word*)t0)[2],t2,C_SCHEME_TRUE));}

/* a11891 in k11830 in k11827 in a11821 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11892,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11896,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:755: macro-environment14451446 */
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k11894 in a11891 in k11830 in k11827 in a11821 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_11896,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11899,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:755: current-environment14471448 */
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k11897 in k11894 in a11891 in k11830 in k11827 in a11821 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_11899,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11902,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:755: macro-environment14451446 */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k11900 in k11897 in k11894 in a11891 in k11830 in k11827 in a11821 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_11902,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11905,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:755: current-environment14471448 */
t3=((C_word*)t0)[7];{
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
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k11903 in k11900 in k11897 in k11894 in a11891 in k11830 in k11827 in a11821 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11905,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[5]);
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11911 in k11830 in k11827 in a11821 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11913,2,av);}
/* eval.scm:751: g1476 */
t2=t1;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k11920 in k11827 in a11821 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_11922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11922,2,av);}
/* eval.scm:746: g1436 */
t2=t1;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k3613 */
static void C_ccall f_3615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3615,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3618,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k3616 in k3613 */
static void C_ccall f_3618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3618,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3621,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k3619 in k3616 in k3613 */
static void C_ccall f_3621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3621,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3624,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_3624(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_3624,2,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=C_set_block_item(lf[2] /* ##sys#unbound-in-eval */,0,C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3668,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:79: chicken.base#make-parameter */
t6=*((C_word*)lf[347]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* a3631 in decorate in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_3632(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3632,3,av);}
t3=C_immp(t2);
if(C_truep(C_i_not(t3))){
t4=C_lambdainfop(t2);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a3644 in decorate in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_3645(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3645,4,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3653,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3657,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:73: chicken.base#open-output-string */
t6=*((C_word*)lf[15]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k3651 in a3644 in decorate in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_3653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3653,2,av);}
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3655 in a3644 in decorate in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_3657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3657,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3660,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:74: scheme#write */
t4=*((C_word*)lf[14]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3658 in k3655 in a3644 in decorate in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_3660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3660,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3663,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:75: chicken.base#get-output-string */
t3=*((C_word*)lf[13]+1);{
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

/* k3661 in k3658 in k3655 in a3644 in decorate in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_3663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3663,2,av);}
/* eval.scm:72: ##sys#make-lambda-info */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_3668(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_3668,2,av);}
a=C_alloc(12);
t2=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#eval-debug-level ...) */,t1);
t3=C_mutate(&lf[4] /* (set! chicken.eval#compile-to-closure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3670,a[2]=((C_word)li146),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[70]+1 /* (set! ##sys#eval/meta ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7827,a[2]=((C_word)li152),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7940,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11822,a[2]=((C_word)li275),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:739: chicken.base#make-parameter */
t7=*((C_word*)lf[347]+1);{
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

/* chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_3670(C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(61,0,8)))){
C_save_and_reclaim_args((void *)trf_3670,4,t1,t2,t3,t4);}
a=C_alloc(61);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_i_nullp(t14);
t16=(C_truep(t15)?C_SCHEME_FALSE:C_i_car(t14));
t17=t16;
t18=C_i_nullp(t14);
t19=(C_truep(t18)?C_SCHEME_END_OF_LIST:C_i_cdr(t14));
t20=C_i_nullp(t19);
t21=(C_truep(t20)?C_SCHEME_FALSE:C_i_car(t19));
t22=t21;
t23=C_i_nullp(t19);
t24=(C_truep(t23)?C_SCHEME_END_OF_LIST:C_i_cdr(t19));
t25=C_SCHEME_UNDEFINED;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_SCHEME_UNDEFINED;
t28=(*a=C_VECTOR_TYPE|1,a[1]=t27,tmp=(C_word)a,a+=2,tmp);
t29=C_SCHEME_UNDEFINED;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=C_SCHEME_UNDEFINED;
t32=(*a=C_VECTOR_TYPE|1,a[1]=t31,tmp=(C_word)a,a+=2,tmp);
t33=C_SCHEME_UNDEFINED;
t34=(*a=C_VECTOR_TYPE|1,a[1]=t33,tmp=(C_word)a,a+=2,tmp);
t35=C_SCHEME_UNDEFINED;
t36=(*a=C_VECTOR_TYPE|1,a[1]=t35,tmp=(C_word)a,a+=2,tmp);
t37=C_SCHEME_UNDEFINED;
t38=(*a=C_VECTOR_TYPE|1,a[1]=t37,tmp=(C_word)a,a+=2,tmp);
t39=C_SCHEME_UNDEFINED;
t40=(*a=C_VECTOR_TYPE|1,a[1]=t39,tmp=(C_word)a,a+=2,tmp);
t41=C_set_block_item(t26,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3697,a[2]=t26,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp));
t42=C_set_block_item(t28,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3732,a[2]=t26,a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp));
t43=C_set_block_item(t30,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3766,a[2]=t28,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp));
t44=C_set_block_item(t32,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3855,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t45=C_set_block_item(t34,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3869,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t46=C_set_block_item(t36,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3879,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t47=C_set_block_item(t38,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3885,a[2]=t30,a[3]=t17,a[4]=t34,a[5]=t38,a[6]=t12,a[7]=t36,a[8]=t28,a[9]=t40,a[10]=((C_word)li132),tmp=(C_word)a,a+=11,tmp));
t48=C_set_block_item(t40,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7434,a[2]=t32,a[3]=t38,a[4]=((C_word)li145),tmp=(C_word)a,a+=5,tmp));
t49=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7777,a[2]=t38,a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t7,a[7]=t22,tmp=(C_word)a,a+=8,tmp);
/* eval.scm:712: ##sys#eval-debug-level */
t50=*((C_word*)lf[3]+1);{
C_word av2[2];
av2[0]=t50;
av2[1]=t49;
((C_proc)(void*)(*((C_word*)t50+1)))(2,av2);}}

/* find-id in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_3697(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3697,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3710,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=C_i_caar(t3);
t6=C_eqp(t2,t5);
if(C_truep(t6)){
t7=t3;
t8=C_u_i_car(t7);
t9=C_u_i_cdr(t8);
t10=t4;
f_3710(t10,C_i_symbolp(t9));}
else{
t7=t4;
f_3710(t7,C_SCHEME_FALSE);}}}

/* k3708 in find-id in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_3710(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_3710,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_u_i_cdr(t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* eval.scm:91: find-id */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3697(t4,((C_word*)t0)[3],((C_word*)t0)[5],t3);}}

/* rename in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_3732(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_3732,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3736,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3764,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:94: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
tp(2,av2);}}

/* k3734 in rename in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_3736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3736,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3744,a[2]=((C_word*)t0)[3],a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3750,a[2]=((C_word*)t0)[3],a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:94: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}}

/* a3743 in k3734 in rename in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_3744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3744,2,av);}
/* eval.scm:95: ##sys#get */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[6];
tp(4,av2);}}

/* a3749 in k3734 in rename in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_3750(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_3750,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3757,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t3;
av2[2]=*((C_word*)lf[8]+1);
av2[3]=t2;
C_apply(4,av2);}}

/* k3755 in a3749 in k3734 in rename in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_3757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3757,2,av);}
if(C_truep(t1)){{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[7]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}
else{
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3762 in rename in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_3764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3764,2,av);}
/* eval.scm:94: find-id */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3697(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* lookup in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_3766(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3766,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3770,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:99: rename */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3732(t5,t4,t2);}

/* k3768 in lookup in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_3770(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3770,2,av);}
a=C_alloc(7);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3778,a[2]=t2,a[3]=t4,a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_3778(t6,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* loop in k3768 in lookup in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_3778(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_3778,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
/* eval.scm:102: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)t0)[2];
C_values(4,av2);}}
else{
t4=C_slot(t2,C_fix(0));
t5=((C_word*)t0)[2];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3825,a[2]=t5,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp);
t7=(
  f_3825(t6,t4,C_fix(0))
);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3795,a[2]=t3,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:102: g237 */
t9=t8;
f_3795(t9,t1,t7);}
else{
t8=C_slot(t2,C_fix(1));
t9=C_fixnum_plus(t3,C_fix(1));
/* eval.scm:104: loop */
t11=t1;
t12=t8;
t13=t9;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}}

/* g237 in loop in k3768 in lookup in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_3795(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_3795,3,t0,t1,t2);}
/* eval.scm:103: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
C_values(4,av2);}}

/* loop in loop in k3768 in lookup in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static C_word C_fcall f_3825(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t1))){
return(C_SCHEME_FALSE);}
else{
t3=C_slot(t1,C_fix(0));
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
return(t2);}
else{
t5=C_slot(t1,C_fix(1));
t6=C_fixnum_plus(t2,C_fix(1));
t8=t5;
t9=t6;
t1=t8;
t2=t9;
goto loop;}}}

/* emit-trace-info in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static C_word C_fcall f_3855(C_word *a,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;{}
if(C_truep(t1)){
t6=C_a_i_record4(&a,4,lf[10],t3,t4,t5);
t7=C_slot(*((C_word*)lf[11]+1),C_fix(14));
t8=C_emit_eval_trace_info(t2,t6,t7);
return(t8);}
else{
t6=C_SCHEME_UNDEFINED;
return(t6);}}

/* emit-syntax-trace-info in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static C_word C_fcall f_3869(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;{}
if(C_truep(t1)){
t4=C_slot(*((C_word*)lf[11]+1),C_fix(14));
t5=C_emit_syntax_trace_info(t2,t3,t4);
return(t5);}
else{
t4=C_SCHEME_UNDEFINED;
return(t4);}}

/* decorate in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_3879(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_3879,3,t1,t2,t3);}
a=C_alloc(7);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3632,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3645,a[2]=t4,a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:66: ##sys#decorate-lambda */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t5;
av2[4]=t6;
tp(5,av2);}}

/* compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_3885(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,0,2)))){
C_save_and_reclaim_args((void *)trf_3885,8,t0,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(17);
t8=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_3892,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t6,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=t5,a[10]=((C_word*)t0)[5],a[11]=t4,a[12]=t7,a[13]=((C_word*)t0)[6],a[14]=((C_word*)t0)[7],a[15]=((C_word*)t0)[8],a[16]=((C_word*)t0)[9],tmp=(C_word)a,a+=17,tmp);
/* eval.scm:132: chicken.keyword#keyword? */
t9=*((C_word*)lf[146]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_3892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_3892,2,av);}
a=C_alloc(17);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3893,a[2]=((C_word*)t0)[2],a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3905,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word)li14),tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3911,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word)li23),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:134: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4102,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[4],a[12]=((C_word*)t0)[7],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* eval.scm:172: ##sys#number? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[145]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[145]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}}

/* f_3893 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_3893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3893,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3904 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_3905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3905,2,av);}
/* eval.scm:134: lookup */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3766(t2,t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* a3910 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_3911(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_3911,4,av);}
a=C_alloc(12);
if(C_truep(C_i_not(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3921,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=C_i_symbolp(t3);
if(C_truep(C_i_not(t5))){
t6=t4;{
C_word *av2=av;
av2[0]=t6;
av2[1]=((C_word*)t0)[2];
f_3921(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3994,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:137: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t6;
tp(2,av2);}}}
else{
t4=t2;
switch(t4){
case C_fix(0):
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4005,a[2]=t3,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}
case C_fix(1):
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4020,a[2]=t3,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}
case C_fix(2):
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4039,a[2]=t3,a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}
case C_fix(3):
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4062,a[2]=t3,a[3]=((C_word)li21),tmp=(C_word)a,a+=4,tmp);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}
default:
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4083,a[2]=t2,a[3]=t3,a[4]=((C_word)li22),tmp=(C_word)a,a+=5,tmp);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}}

/* k3919 in a3910 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_3921,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3924,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3951,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[2]+1))){
t5=C_i_not(t2);
if(C_truep(t5)){
t6=t4;
f_3951(t6,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3972,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:143: ##sys#symbol-has-toplevel-binding? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[19]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t6;
av2[2]=t2;
tp(3,av2);}}}
else{
t5=t4;
f_3951(t5,C_SCHEME_FALSE);}}

/* k3922 in k3919 in a3910 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_3924(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_3924,2,t0,t1);}
a=C_alloc(4);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3931,a[2]=((C_word*)t0)[4],a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3941,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:149: ##sys#symbol-has-toplevel-binding? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[19]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}

/* f_3931 in k3922 in k3919 in a3910 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_3931(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3931,3,av);}
/* eval.scm:148: ##sys#error */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[18];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3939 in k3922 in k3919 in a3910 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_3941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3941,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3942,a[2]=((C_word*)t0)[2],a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3947,a[2]=((C_word*)t0)[2],a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* f_3942 in k3939 in k3922 in k3919 in a3910 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_3942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3942,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[2],C_fix(0));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_3947 in k3939 in k3922 in k3919 in a3910 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_3947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3947,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fast_retrieve(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3949 in k3919 in a3910 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_3951(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,1)))){
C_save_and_reclaim_args((void *)trf_3951,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,*((C_word*)lf[2]+1));
t4=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#unbound-in-eval ...) */,t3);
t5=((C_word*)t0)[4];
f_3924(t5,t4);}
else{
t2=((C_word*)t0)[4];
f_3924(t2,C_SCHEME_UNDEFINED);}}

/* k3970 in k3919 in a3910 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_3972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3972,2,av);}
t2=((C_word*)t0)[2];
f_3951(t2,C_i_not(t1));}

/* k3992 in a3910 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_3994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3994,2,av);}
if(C_truep(C_i_assq(((C_word*)t0)[2],t1))){
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_3921(2,av2);}}
else{
if(C_truep(C_i_not(((C_word*)t0)[5]))){
/* eval.scm:139: ##sys#alias-global-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[6];
tp(5,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_3921(2,av2);}}}}

/* f_4005 in a3910 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4005(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4005,3,av);}
t3=C_slot(t2,C_fix(0));
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t3,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f_4020 in a3910 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4020,3,av);}
t3=C_slot(t2,C_fix(1));
t4=C_slot(t3,C_fix(0));
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_slot(t4,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* f_4039 in a3910 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4039,3,av);}
t3=C_slot(t2,C_fix(1));
t4=C_slot(t3,C_fix(1));
t5=C_slot(t4,C_fix(0));
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_slot(t5,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* f_4062 in a3910 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4062(C_word c,C_word *av){
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
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4062,3,av);}
t3=C_slot(t2,C_fix(1));
t4=C_slot(t3,C_fix(1));
t5=C_slot(t4,C_fix(1));
t6=C_slot(t5,C_fix(0));
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_slot(t6,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* f_4083 in a3910 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4083(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4083,3,av);}
t3=C_u_i_list_ref(t2,((C_word*)t0)[2]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t3,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4102(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_4102,2,av);}
a=C_alloc(21);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
switch(t2){
case C_fix(-1):
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4109,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
case C_fix(0):
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4117,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}
case C_fix(1):
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4125,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
case C_fix(2):
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4133,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}
default:
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4135,a[2]=((C_word*)t0)[2],a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
if(C_truep(C_booleanp(((C_word*)t0)[2]))){
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4154,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4156,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
t2=C_charp(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4166,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
if(C_truep(t2)){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
f_4166(2,av2);}}
else{
t4=C_eofp(((C_word*)t0)[2]);
if(C_truep(t4)){
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_4166(2,av2);}}
else{
t5=C_i_stringp(((C_word*)t0)[2]);
if(C_truep(t5)){
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
f_4166(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7333,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:186: chicken.blob#blob? */
t7=*((C_word*)lf[144]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}}}}}

/* f_4109 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4109,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4117 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4117,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4125 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4125,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4133 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4133,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(2);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4135 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4135,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4154 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4154,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4156 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4156,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4166(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_4166,2,av);}
a=C_alloc(20);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4167,a[2]=((C_word*)t0)[2],a[3]=((C_word)li31),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_i_pairp(((C_word*)t0)[2]);
if(C_truep(C_i_not(t2))){
/* eval.scm:191: ##sys#syntax-error/context */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[22];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}
else{
t3=C_slot(((C_word*)t0)[2],C_fix(0));
if(C_truep(C_i_symbolp(t3))){
t4=(
  /* eval.scm:193: emit-syntax-trace-info */
  f_3869(((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)t0)[6])
);
t5=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4189,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],tmp=(C_word)a,a+=16,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7300,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:194: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t6;
tp(2,av2);}}
else{
t4=(
  /* eval.scm:649: emit-syntax-trace-info */
  f_3869(((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)t0)[6])
);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7310,a[2]=((C_word*)t0)[16],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:650: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t5;
tp(2,av2);}}}}}

/* f_4167 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4167,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,7)))){
C_save_and_reclaim((void *)f_4189,2,av);}
a=C_alloc(16);
t2=C_eqp(t1,((C_word*)t0)[2]);
if(C_truep(C_i_not(t2))){
/* eval.scm:197: compile */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3885(t3,((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}
else{
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4204,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
t4=C_slot(((C_word*)t0)[2],C_fix(0));
/* eval.scm:198: rename */
t5=((C_word*)((C_word*)t0)[14])[1];
f_3732(t5,t3,t4);}}

/* k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4204(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,7)))){
C_save_and_reclaim((void *)f_4204,2,av);}
a=C_alloc(25);
t2=t1;
t3=t2;
t4=C_eqp(t3,lf[23]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4213,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=C_i_cadr(((C_word*)t0)[3]);
/* eval.scm:204: chicken.syntax#strip-syntax */
t7=*((C_word*)lf[24]+1);{
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
t5=C_eqp(t3,lf[25]);
if(C_truep(t5)){
t6=C_i_cadr(((C_word*)t0)[3]);
t7=t6;
t8=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t8;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4299,a[2]=t7,a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t6=C_eqp(t3,lf[26]);
if(C_truep(t6)){
t7=C_i_cadr(((C_word*)t0)[3]);
/* eval.scm:220: compile */
t8=((C_word*)((C_word*)t0)[4])[1];
f_3885(t8,((C_word*)t0)[2],t7,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
t7=C_eqp(t3,lf[27]);
if(C_truep(t7)){
t8=C_i_cadr(((C_word*)t0)[3]);
/* eval.scm:223: compile */
t9=((C_word*)((C_word*)t0)[4])[1];
f_3885(t9,((C_word*)t0)[2],t8,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
t8=C_eqp(t3,lf[28]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4333,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp);
t10=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t9=C_eqp(t3,lf[29]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4343,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t11=C_i_cadr(((C_word*)t0)[3]);
/* eval.scm:228: compile */
t12=((C_word*)((C_word*)t0)[4])[1];
f_3885(t12,t10,t11,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
t10=C_eqp(t3,lf[31]);
if(C_truep(t10)){
t11=C_slot(((C_word*)t0)[3],C_fix(1));
t12=t11;
t13=C_i_length(t12);
switch(t13){
case C_fix(0):
/* eval.scm:239: compile */
t14=((C_word*)((C_word*)t0)[4])[1];
f_3885(t14,((C_word*)t0)[2],lf[32],((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);
case C_fix(1):
t14=C_slot(t12,C_fix(0));
/* eval.scm:240: compile */
t15=((C_word*)((C_word*)t0)[4])[1];
f_3885(t15,((C_word*)t0)[2],t14,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);
case C_fix(2):
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4431,a[2]=((C_word*)t0)[2],a[3]=t12,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t15=C_slot(t12,C_fix(0));
/* eval.scm:241: compile */
t16=((C_word*)((C_word*)t0)[4])[1];
f_3885(t16,t14,t15,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);
default:
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4453,a[2]=((C_word*)t0)[2],a[3]=t12,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t15=C_slot(t12,C_fix(0));
/* eval.scm:245: compile */
t16=((C_word*)((C_word*)t0)[4])[1];
f_3885(t16,t14,t15,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}}
else{
t11=C_eqp(t3,lf[33]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4505,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[9])){
/* eval.scm:253: compile */
t13=((C_word*)((C_word*)t0)[4])[1];
f_3885(t13,((C_word*)t0)[2],lf[34],((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
t13=C_i_cadr(((C_word*)t0)[3]);
/* eval.scm:252: ##sys#error */
t14=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t14;
av2[1]=t12;
av2[2]=lf[35];
av2[3]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(4,av2);}}}
else{
t12=C_eqp(t3,lf[36]);
if(C_truep(t12)){
t13=C_i_cadr(((C_word*)t0)[3]);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4529,a[2]=((C_word*)t0)[10],a[3]=t14,a[4]=((C_word*)t0)[5],a[5]=((C_word)li45),tmp=(C_word)a,a+=6,tmp);
t16=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4535,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],a[4]=t14,a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[7],a[10]=((C_word)li50),tmp=(C_word)a,a+=11,tmp);
/* eval.scm:258: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t15;
av2[3]=t16;
C_call_with_values(4,av2);}}
else{
t13=C_eqp(t3,lf[41]);
if(C_truep(t13)){
t14=C_i_cadr(((C_word*)t0)[3]);
t15=t14;
t16=C_i_length(t15);
t17=t16;
t18=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t19=t18;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=((C_word*)t20)[1];
t22=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4644,a[2]=((C_word*)t0)[5],a[3]=t17,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t15,a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[3],tmp=(C_word)a,a+=12,tmp);
t23=C_SCHEME_UNDEFINED;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=C_set_block_item(t24,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5083,a[2]=t20,a[3]=t24,a[4]=t21,a[5]=((C_word)li63),tmp=(C_word)a,a+=6,tmp));
t26=((C_word*)t24)[1];
f_5083(t26,t22,t15);}
else{
t14=C_eqp(t3,lf[50]);
if(C_truep(t14)){
t15=C_i_cadr(((C_word*)t0)[3]);
t16=t15;
t17=((C_word*)t0)[3];
t18=C_u_i_cdr(t17);
t19=C_u_i_cdr(t18);
t20=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t21=t20;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=((C_word*)t22)[1];
t24=C_i_check_list_2(t16,lf[42]);
t25=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5156,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t19,a[9]=t16,tmp=(C_word)a,a+=10,tmp);
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5228,a[2]=t22,a[3]=t27,a[4]=t23,a[5]=((C_word)li65),tmp=(C_word)a,a+=6,tmp));
t29=((C_word*)t27)[1];
f_5228(t29,t25,t16);}
else{
t15=C_eqp(t3,lf[53]);
if(C_truep(t15)){
t16=C_i_cadr(((C_word*)t0)[3]);
t17=t16;
t18=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t19=t18;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=((C_word*)t20)[1];
t22=C_i_check_list_2(t17,lf[42]);
t23=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5278,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t17,tmp=(C_word)a,a+=10,tmp);
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5534,a[2]=t20,a[3]=t25,a[4]=t21,a[5]=((C_word)li70),tmp=(C_word)a,a+=6,tmp));
t27=((C_word*)t25)[1];
f_5534(t27,t23,t17);}
else{
t16=C_eqp(t3,lf[55]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5575,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[2],tmp=(C_word)a,a+=10,tmp);
t18=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6018,a[2]=t17,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:361: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t18;
tp(2,av2);}}
else{
t17=C_eqp(t3,lf[67]);
if(C_truep(t17)){
t18=*((C_word*)lf[9]+1);
t19=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6027,a[2]=t18,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t20=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t21=t20;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=((C_word*)t22)[1];
t24=C_i_cadr(((C_word*)t0)[3]);
t25=C_i_check_list_2(t24,lf[42]);
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6119,a[2]=t19,tmp=(C_word)a,a+=3,tmp);
t27=C_SCHEME_UNDEFINED;
t28=(*a=C_VECTOR_TYPE|1,a[1]=t27,tmp=(C_word)a,a+=2,tmp);
t29=C_set_block_item(t28,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6125,a[2]=t22,a[3]=t28,a[4]=t23,a[5]=((C_word)li106),tmp=(C_word)a,a+=6,tmp));
t30=((C_word*)t28)[1];
f_6125(t30,t26,t24);}
else{
t18=C_eqp(t3,lf[71]);
if(C_truep(t18)){
t19=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t20=t19;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=((C_word*)t21)[1];
t23=C_i_cadr(((C_word*)t0)[3]);
t24=C_i_check_list_2(t23,lf[42]);
t25=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6202,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6297,a[2]=t21,a[3]=t27,a[4]=t22,a[5]=((C_word)li112),tmp=(C_word)a,a+=6,tmp));
t29=((C_word*)t27)[1];
f_6297(t29,t25,t23);}
else{
t19=C_eqp(t3,lf[73]);
if(C_truep(t19)){
t20=C_i_cadr(((C_word*)t0)[3]);
t21=t20;
t22=C_i_caddr(((C_word*)t0)[3]);
t23=t22;
t24=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6344,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t23,a[8]=((C_word*)t0)[11],a[9]=t21,a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:493: rename */
t25=((C_word*)((C_word*)t0)[14])[1];
f_3732(t25,t24,t21);}
else{
t20=C_eqp(t3,lf[79]);
if(C_truep(t20)){
/* eval.scm:506: compile */
t21=((C_word*)((C_word*)t0)[4])[1];
f_3885(t21,((C_word*)t0)[2],lf[80],((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
t21=C_eqp(t3,lf[81]);
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6407,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t23=C_i_cddr(((C_word*)t0)[3]);
t24=t23;
t25=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6415,a[2]=t22,a[3]=t24,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:510: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t25;
tp(2,av2);}}
else{
t22=C_eqp(t3,lf[82]);
if(C_truep(t22)){
t23=C_i_cadr(((C_word*)t0)[3]);
t24=C_i_caddr(((C_word*)t0)[3]);
t25=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6434,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[3],a[8]=((C_word)li113),tmp=(C_word)a,a+=9,tmp);
/* eval.scm:514: ##sys#include-forms-from-file */
t26=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t26;
av2[1]=((C_word*)t0)[2];
av2[2]=t23;
av2[3]=t24;
av2[4]=t25;
((C_proc)(void*)(*((C_word*)t26+1)))(5,av2);}}
else{
t23=C_eqp(t3,lf[84]);
if(C_truep(t23)){
t24=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t25=t24;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=((C_word*)t26)[1];
t28=C_i_cadr(((C_word*)t0)[3]);
t29=C_i_check_list_2(t28,lf[42]);
t30=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6497,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t31=C_SCHEME_UNDEFINED;
t32=(*a=C_VECTOR_TYPE|1,a[1]=t31,tmp=(C_word)a,a+=2,tmp);
t33=C_set_block_item(t32,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6513,a[2]=t26,a[3]=t32,a[4]=t27,a[5]=((C_word)li115),tmp=(C_word)a,a+=6,tmp));
t34=((C_word*)t32)[1];
f_6513(t34,t30,t28);}
else{
t24=C_eqp(t3,lf[88]);
if(C_truep(t24)){
t25=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6554,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:536: chicken.syntax#strip-syntax */
t26=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t26;
av2[1]=t25;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t26+1)))(3,av2);}}
else{
t25=C_eqp(t3,lf[102]);
if(C_truep(t25)){
t26=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6878,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:588: rename */
t27=((C_word*)((C_word*)t0)[14])[1];
f_3732(t27,t26,lf[65]);}
else{
t26=C_eqp(t3,lf[103]);
if(C_truep(t26)){
t27=C_i_cadr(((C_word*)t0)[3]);
t28=C_a_i_list(&a,2,lf[23],t27);
t29=C_a_i_list(&a,2,lf[93],t28);
/* eval.scm:591: compile */
t30=((C_word*)((C_word*)t0)[4])[1];
f_3885(t30,((C_word*)t0)[2],t29,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
t27=C_eqp(t3,lf[104]);
if(C_truep(t27)){
t28=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6912,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t29=C_i_cadr(((C_word*)t0)[3]);
/* eval.scm:594: chicken.load#load-extension */
t30=*((C_word*)lf[106]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t30;
av2[1]=t28;
av2[2]=t29;
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=lf[107];
((C_proc)(void*)(*((C_word*)t30+1)))(5,av2);}}
else{
t28=C_eqp(t3,lf[108]);
if(C_truep(t28)){
t29=C_i_cadr(((C_word*)t0)[3]);
t30=t29;
t31=((C_word*)t0)[3];
t32=C_u_i_cdr(t31);
t33=C_u_i_cdr(t32);
t34=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6935,a[2]=t30,a[3]=t33,a[4]=((C_word)li126),tmp=(C_word)a,a+=5,tmp);
t35=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6941,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word)li127),tmp=(C_word)a,a+=7,tmp);
/* eval.scm:600: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t34;
av2[3]=t35;
C_call_with_values(4,av2);}}
else{
t29=C_eqp(t3,lf[110]);
t30=(C_truep(t29)?t29:C_eqp(t3,lf[111]));
if(C_truep(t30)){
t31=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6957,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
t32=C_i_cadr(((C_word*)t0)[3]);
/* eval.scm:604: ##sys#eval/meta */
t33=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t33;
av2[1]=t31;
av2[2]=t32;
((C_proc)(void*)(*((C_word*)t33+1)))(3,av2);}}
else{
t31=C_eqp(t3,lf[113]);
if(C_truep(t31)){
t32=C_i_cadr(((C_word*)t0)[3]);
/* eval.scm:608: compile */
t33=((C_word*)((C_word*)t0)[4])[1];
f_3885(t33,((C_word*)t0)[2],t32,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}
else{
t32=C_eqp(t3,lf[114]);
t33=(C_truep(t32)?t32:C_eqp(t3,lf[115]));
if(C_truep(t33)){
/* eval.scm:611: compile */
t34=((C_word*)((C_word*)t0)[4])[1];
f_3885(t34,((C_word*)t0)[2],lf[116],((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}
else{
t34=C_eqp(t3,lf[117]);
if(C_truep(t34)){
t35=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6998,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:614: ##sys#notice */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t35;
av2[2]=lf[119];
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}
else{
t35=C_eqp(t3,lf[120]);
t36=(C_truep(t35)?t35:C_eqp(t3,lf[121]));
if(C_truep(t36)){
t37=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7021,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:618: rename */
t38=((C_word*)((C_word*)t0)[14])[1];
f_3732(t38,t37,lf[122]);}
else{
t37=C_eqp(t3,lf[123]);
t38=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7034,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[15],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[9],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
if(C_truep(t37)){
t39=t38;
f_7034(t39,t37);}
else{
t39=C_eqp(t3,lf[132]);
if(C_truep(t39)){
t40=t38;
f_7034(t40,t39);}
else{
t40=C_eqp(t3,lf[133]);
if(C_truep(t40)){
t41=t38;
f_7034(t41,t40);}
else{
t41=C_eqp(t3,lf[134]);
if(C_truep(t41)){
t42=t38;
f_7034(t42,t41);}
else{
t42=C_eqp(t3,lf[135]);
if(C_truep(t42)){
t43=t38;
f_7034(t43,t42);}
else{
t43=C_eqp(t3,lf[136]);
if(C_truep(t43)){
t44=t38;
f_7034(t44,t43);}
else{
t44=C_eqp(t3,lf[137]);
if(C_truep(t44)){
t45=t38;
f_7034(t45,t44);}
else{
t45=C_eqp(t3,lf[138]);
if(C_truep(t45)){
t46=t38;
f_7034(t46,t45);}
else{
t46=C_eqp(t3,lf[139]);
if(C_truep(t46)){
t47=t38;
f_7034(t47,t46);}
else{
t47=C_eqp(t3,lf[140]);
t48=t38;
f_7034(t48,(C_truep(t47)?t47:C_eqp(t3,lf[141])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k4211 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4213(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4213,2,av);}
a=C_alloc(4);
t2=t1;
switch(t2){
case C_fix(-1):
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4220,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
case C_fix(0):
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4228,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp);
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}
case C_fix(1):
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4236,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
case C_fix(2):
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4244,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp);
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}
case C_SCHEME_TRUE:
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4252,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
case C_SCHEME_FALSE:
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4260,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp);
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}
default:
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4268,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4270,a[2]=t2,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* f_4220 in k4211 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4220,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4228 in k4211 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4228,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4236 in k4211 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4236,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4244 in k4211 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4244,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(2);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4252 in k4211 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4252,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4260 in k4211 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4260,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4268 in k4211 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4268,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4270 in k4211 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4270,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4299 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4299,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4333 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4333,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4341 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,7)))){
C_save_and_reclaim((void *)f_4343,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4346,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=C_i_caddr(((C_word*)t0)[3]);
/* eval.scm:229: compile */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3885(t5,t3,t4,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4344 in k4341 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4346(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,7)))){
C_save_and_reclaim((void *)f_4346,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4349,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_i_cdddr(((C_word*)t0)[4]);
if(C_truep(C_i_pairp(t4))){
t5=C_i_cadddr(((C_word*)t0)[4]);
/* eval.scm:231: compile */
t6=((C_word*)((C_word*)t0)[5])[1];
f_3885(t6,t3,t5,((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
/* eval.scm:232: compile */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3885(t5,t3,lf[30],((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}}

/* k4347 in k4344 in k4341 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4349,2,av);}
a=C_alloc(6);
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4350,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word)li42),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_4350 in k4347 in k4344 in k4341 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4350,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4357,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4355 */
static void C_ccall f_4357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4357,2,av);}
if(C_truep(t1)){
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
t2=((C_word*)t0)[5];{
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

/* k4429 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4431(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,7)))){
C_save_and_reclaim((void *)f_4431,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4434,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(((C_word*)t0)[3]);
/* eval.scm:242: compile */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3885(t5,t3,t4,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k4432 in k4429 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4434,2,av);}
a=C_alloc(5);
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4435,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_4435 in k4432 in k4429 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4435(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4435,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4439,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4437 */
static void C_ccall f_4439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4439,2,av);}
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

/* k4451 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,7)))){
C_save_and_reclaim((void *)f_4453,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4456,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=C_i_cadr(((C_word*)t0)[3]);
/* eval.scm:246: compile */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3885(t5,t3,t4,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k4454 in k4451 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4456(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,7)))){
C_save_and_reclaim((void *)f_4456,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4459,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_slot(((C_word*)t0)[4],C_fix(1));
t5=C_slot(t4,C_fix(1));
t6=C_a_i_cons(&a,2,lf[31],t5);
/* eval.scm:247: compile */
t7=((C_word*)((C_word*)t0)[5])[1];
f_3885(t7,t3,t6,((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}

/* k4457 in k4454 in k4451 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4459(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4459,2,av);}
a=C_alloc(6);
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4460,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li44),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_4460 in k4457 in k4454 in k4451 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4460(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4460,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4464,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4462 */
static void C_ccall f_4464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4464,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4467,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];{
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

/* k4465 in k4462 */
static void C_ccall f_4467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4467,2,av);}
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

/* k4503 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4505(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4505,2,av);}
/* eval.scm:253: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3885(t2,((C_word*)t0)[3],lf[34],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* a4528 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4529,2,av);}
/* eval.scm:258: lookup */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3766(t2,t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* a4534 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4535(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,7)))){
C_save_and_reclaim((void *)f_4535,4,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4539,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t5=C_i_caddr(((C_word*)t0)[6]);
/* eval.scm:259: compile */
t6=((C_word*)((C_word*)t0)[7])[1];
f_3885(t6,t4,t5,((C_word*)t0)[8],((C_word*)t0)[4],((C_word*)t0)[9],((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k4537 in a4534 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4539(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_4539,2,av);}
a=C_alloc(13);
t2=t1;
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4548,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(*((C_word*)lf[38]+1))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4590,a[2]=((C_word*)t0)[6],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:262: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_4548(2,av2);}}}
else{
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(C_i_zerop(t3))?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4595,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word)li48),tmp=(C_word)a,a+=5,tmp):(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4608,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=((C_word)li49),tmp=(C_word)a,a+=6,tmp));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4546 in k4537 in a4534 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4548,2,av);}
a=C_alloc(5);
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4552,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word)li46),tmp=(C_word)a,a+=5,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4559,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:268: ##sys#alias-global-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[8];
tp(5,av2);}}}

/* f_4552 in k4546 in k4537 in a4534 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4552(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4552,3,av);}
/* eval.scm:267: ##sys#error */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[0];
av2[3]=lf[37];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4557 in k4546 in k4537 in a4534 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4559,2,av);}
a=C_alloc(5);
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4560,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_4560 in k4557 in k4546 in k4537 in a4534 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4560,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4564,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4562 */
static void C_ccall f_4564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4564,2,av);}
t2=C_i_persist_symbol(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_setslot(((C_word*)t0)[2],C_fix(0),t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4588 in k4537 in a4534 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4590,2,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_i_cdr(t2);
if(C_truep(C_i_symbolp(t3))){
/* eval.scm:264: ##sys#notice */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[40];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_4548(2,av2);}}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_4548(2,av2);}}}

/* f_4595 in k4537 in a4534 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4595,3,av);}
a=C_alloc(5);
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4607,a[2]=t1,a[3]=t4,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k4605 */
static void C_ccall f_4607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4607,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_setslot(((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4608 in k4537 in a4534 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4608,3,av);}
a=C_alloc(5);
t3=C_u_i_list_ref(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4617,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4615 */
static void C_ccall f_4617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4617,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_setslot(((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
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
C_word t12;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_4644,2,av);}
a=C_alloc(26);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(t2,lf[42]);
t8=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4653,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5049,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li62),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_5049(t12,t8,t2);}

/* k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4653(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,2)))){
C_save_and_reclaim((void *)f_4653,2,av);}
a=C_alloc(22);
t2=t1;
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4659,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t4,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5047,a[2]=t5,a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:285: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t6;
tp(2,av2);}}

/* k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_4659,2,av);}
a=C_alloc(33);
t2=*((C_word*)lf[9]+1);
t3=t1;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_TRUE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4662,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5000,a[2]=t4,a[3]=t6,a[4]=t2,a[5]=((C_word)li59),tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5017,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[13],a[7]=((C_word)li60),tmp=(C_word)a,a+=8,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5035,a[2]=t4,a[3]=t2,a[4]=((C_word)li61),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:286: ##sys#dynamic-wind */
t11=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t11;
av2[1]=t7;
av2[2]=t8;
av2[3]=t9;
av2[4]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}

/* k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4662(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_4662,2,av);}
a=C_alloc(26);
t2=t1;
switch(((C_word*)t0)[2]){
case C_fix(1):
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4671,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4692,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:291: scheme#cadar */
t5=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}
case C_fix(2):
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4705,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4741,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:294: scheme#cadar */
t5=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}
case C_fix(3):
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4754,a[2]=((C_word*)t0)[9],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4808,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:298: scheme#cadar */
t5=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}
case C_fix(4):
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4821,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4890,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:306: scheme#cadar */
t5=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}
default:
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4898,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word)li55),tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4911,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4958,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t6,a[6]=((C_word)li58),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_4958(t12,t8,((C_word*)t0)[9]);}}

/* k4669 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4671,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4672,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li51),tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f_4672 in k4669 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4672,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4688,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4686 */
static void C_ccall f_4688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4688,2,av);}
a=C_alloc(5);
t2=C_a_i_vector1(&a,1,t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4690 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4692,2,av);}
t2=C_i_car(((C_word*)t0)[2]);
/* eval.scm:291: compile */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3885(t3,((C_word*)t0)[4],t1,((C_word*)t0)[5],t2,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4703 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_4705,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4708,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4733,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:295: scheme#cadadr */
t5=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4706 in k4703 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4708,2,av);}
a=C_alloc(6);
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4709,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word)li52),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_4709 in k4706 in k4703 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4709,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4725,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4723 */
static void C_ccall f_4725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4725,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4729,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4727 in k4723 */
static void C_ccall f_4729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4729,2,av);}
a=C_alloc(6);
t2=C_a_i_vector2(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[5];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4731 in k4703 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4733,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
/* eval.scm:295: compile */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3885(t3,((C_word*)t0)[4],t1,((C_word*)t0)[5],t2,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4739 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4741,2,av);}
t2=C_i_car(((C_word*)t0)[2]);
/* eval.scm:294: compile */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3885(t3,((C_word*)t0)[4],t1,((C_word*)t0)[5],t2,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4752 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_4754,2,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4757,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4800,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t3,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:299: scheme#cadadr */
t5=*((C_word*)lf[44]+1);{
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

/* k4755 in k4752 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4757(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_4757,2,av);}
a=C_alloc(14);
t2=t1;
t3=C_i_cddr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4763,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4792,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t4,a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:301: scheme#cadar */
t6=*((C_word*)lf[43]+1);{
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

/* k4761 in k4755 in k4752 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4763,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4764,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li53),tmp=(C_word)a,a+=7,tmp);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f_4764 in k4761 in k4755 in k4752 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4764,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4780,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4778 */
static void C_ccall f_4780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4780,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4784,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4782 in k4778 */
static void C_ccall f_4784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4784,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4788,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=((C_word*)t0)[6];{
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

/* k4786 in k4782 in k4778 */
static void C_ccall f_4788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4788,2,av);}
a=C_alloc(7);
t2=C_a_i_vector3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[6];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4790 in k4755 in k4752 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4792,2,av);}
t2=C_i_caddr(((C_word*)t0)[2]);
/* eval.scm:301: compile */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3885(t3,((C_word*)t0)[4],t1,((C_word*)t0)[5],t2,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4798 in k4752 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4800,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
/* eval.scm:299: compile */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3885(t3,((C_word*)t0)[4],t1,((C_word*)t0)[5],t2,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4806 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4808,2,av);}
t2=C_i_car(((C_word*)t0)[2]);
/* eval.scm:298: compile */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3885(t3,((C_word*)t0)[4],t1,((C_word*)t0)[5],t2,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4819 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4821(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_4821,2,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4824,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4882,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t3,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:307: scheme#cadadr */
t5=*((C_word*)lf[44]+1);{
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

/* k4822 in k4819 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4824(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_4824,2,av);}
a=C_alloc(20);
t2=t1;
t3=C_i_cddr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4830,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t4,tmp=(C_word)a,a+=12,tmp);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4874,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t5,a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:309: scheme#cadar */
t7=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k4828 in k4822 in k4819 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_4830,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4833,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4866,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t3,a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:310: scheme#cadadr */
t5=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[11];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4831 in k4828 in k4822 in k4819 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4833,2,av);}
a=C_alloc(8);
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4834,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li54),tmp=(C_word)a,a+=8,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_4834 in k4831 in k4828 in k4822 in k4819 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4834,3,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4850,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4848 */
static void C_ccall f_4850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4850,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4854,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4852 in k4848 */
static void C_ccall f_4854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4854,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4858,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=((C_word*)t0)[7];{
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

/* k4856 in k4852 in k4848 */
static void C_ccall f_4858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4858,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4862,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=((C_word*)t0)[7];{
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

/* k4860 in k4856 in k4852 in k4848 */
static void C_ccall f_4862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4862,2,av);}
a=C_alloc(8);
t2=C_a_i_vector4(&a,4,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[5]);
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[7];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4864 in k4828 in k4822 in k4819 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4866,2,av);}
t2=C_i_cadddr(((C_word*)t0)[2]);
/* eval.scm:310: compile */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3885(t3,((C_word*)t0)[4],t1,((C_word*)t0)[5],t2,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4872 in k4822 in k4819 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4874,2,av);}
t2=C_i_caddr(((C_word*)t0)[2]);
/* eval.scm:309: compile */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3885(t3,((C_word*)t0)[4],t1,((C_word*)t0)[5],t2,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4880 in k4819 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4882,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
/* eval.scm:307: compile */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3885(t3,((C_word*)t0)[4],t1,((C_word*)t0)[5],t2,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4888 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4890,2,av);}
t2=C_i_car(((C_word*)t0)[2]);
/* eval.scm:306: compile */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3885(t3,((C_word*)t0)[4],t1,((C_word*)t0)[5],t2,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* g519 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_4898(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,7)))){
C_save_and_reclaim_args((void *)trf_4898,3,t0,t1,t2);}
t3=C_i_cadr(t2);
t4=t2;
t5=C_u_i_car(t4);
/* eval.scm:320: compile */
t6=((C_word*)((C_word*)t0)[2])[1];
f_3885(t6,t1,t3,((C_word*)t0)[3],t5,((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k4909 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4911,2,av);}
a=C_alloc(6);
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4912,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word)li57),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_4912 in k4909 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4912,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4916,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:322: ##sys#make-vector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[45]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[45]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k4914 */
static void C_ccall f_4916(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_4916,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4919,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4928,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word)li56),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_4928(t7,t3,C_fix(0),((C_word*)t0)[6]);}

/* k4917 in k4914 */
static void C_ccall f_4919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4919,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[5];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* doloop540 in k4914 */
static void C_fcall f_4928(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_4928,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4953,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t3,C_fix(0));
t6=t5;{
C_word av2[3];
av2[0]=t6;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k4951 in doloop540 in k4914 */
static void C_ccall f_4953(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4953,2,av);}
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[5])[1];
f_4928(t5,((C_word*)t0)[6],t3,t4);}

/* map-loop513 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_4958(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4958,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4983,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* eval.scm:320: g519 */
t5=((C_word*)t0)[4];
f_4898(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4981 in map-loop513 in k4660 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_4983(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4983,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4958(t6,((C_word*)t0)[5],t5);}

/* a4999 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5000,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5004,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* eval.scm:286: current-environment473474 */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_5004(2,av2);}}}

/* k5002 in a4999 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5004,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5008,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* eval.scm:286: current-environment473474 */
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k5006 in k5002 in a4999 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_5008,2,av);}
a=C_alloc(4);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5011,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:286: current-environment473474 */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k5009 in k5006 in k5002 in a4999 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5011,2,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a5016 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5017,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5025,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_i_cddr(((C_word*)t0)[6]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5033,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:288: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t5;
tp(2,av2);}}

/* k5023 in a5016 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_5025,2,av);}
a=C_alloc(12);
/* eval.scm:287: compile-to-closure */
f_3670(((C_word*)t0)[2],t1,((C_word*)t0)[3],C_a_i_list(&a,4,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE));}

/* k5031 in a5016 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5033,2,av);}
/* eval.scm:288: ##sys#canonicalize-body */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* a5034 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5035,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5039,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:286: current-environment473474 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k5037 in a5034 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5039,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5042,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:286: current-environment473474 */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k5040 in k5037 in a5034 in k4657 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5042,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5045 in k4651 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5047,2,av);}
/* eval.scm:285: ##sys#extend-se */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[48]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[48]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}

/* map-loop445 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_5049(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5049,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5074,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* eval.scm:283: g451 */
t5=*((C_word*)lf[49]+1);{
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

/* k5072 in map-loop445 in k4642 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5074(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5074,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5049(t6,((C_word*)t0)[5],t5);}

/* map-loop417 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_5083(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_5083,3,t0,t1,t2);}
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

/* k5154 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5156(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_5156,2,av);}
a=C_alloc(26);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5160,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5180,a[2]=((C_word*)t0)[8],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5194,a[2]=t6,a[3]=t10,a[4]=t7,a[5]=((C_word)li64),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_5194(t12,t8,((C_word*)t0)[9]);}

/* k5158 in k5154 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,7)))){
C_save_and_reclaim((void *)f_5160,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[41],t2);
/* eval.scm:332: compile */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3885(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}

/* k5178 in k5154 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5180,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[41],t2);
t4=C_a_i_list(&a,1,t3);
/* eval.scm:47: ##sys#append */
t5=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* map-loop581 in k5154 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_5194(C_word t0,C_word t1,C_word t2){
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
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_5194,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_i_cadr(t3);
t6=C_a_i_list(&a,3,lf[36],t4,t5);
t7=C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t7);
t9=C_mutate(((C_word *)((C_word*)t0)[2])+1,t7);
t10=C_slot(t2,C_fix(1));
t12=t1;
t13=t10;
t1=t12;
t2=t13;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop554 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_5228(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_5228,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_list2(&a,2,t4,lf[52]);
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

/* k5276 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5278(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_5278,2,av);}
a=C_alloc(24);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(t2,lf[42]);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5287,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5500,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li69),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_5500(t12,t8,t2);}

/* k5285 in k5276 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5287(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_5287,2,av);}
a=C_alloc(25);
t2=t1;
t3=C_i_cddr(((C_word*)t0)[2]);
t4=t3;
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5313,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t4,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5466,a[2]=t7,a[3]=t11,a[4]=t8,a[5]=((C_word)li68),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_5466(t13,t9,((C_word*)t0)[10]);}

/* k5311 in k5285 in k5276 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5313(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,4)))){
C_save_and_reclaim((void *)f_5313,2,av);}
a=C_alloc(25);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[2],lf[42]);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5340,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[2],tmp=(C_word)a,a+=12,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5418,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li67),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_5418(t12,t8,((C_word*)t0)[2],((C_word*)t0)[11]);}

/* k5338 in k5311 in k5285 in k5276 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5340(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_5340,2,av);}
a=C_alloc(27);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5344,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5356,a[2]=((C_word*)t0)[9],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5370,a[2]=t6,a[3]=t10,a[4]=t7,a[5]=((C_word)li66),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_5370(t12,t8,((C_word*)t0)[10],((C_word*)t0)[11]);}

/* k5342 in k5338 in k5311 in k5285 in k5276 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,7)))){
C_save_and_reclaim((void *)f_5344,2,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[41],t2);
t4=C_a_i_list(&a,3,lf[41],((C_word*)t0)[3],t3);
/* eval.scm:348: compile */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3885(t5,((C_word*)t0)[5],t4,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_FALSE);}

/* k5354 in k5338 in k5311 in k5285 in k5276 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5356,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[41],t2);
t4=C_a_i_list(&a,1,t3);
/* eval.scm:47: ##sys#append */
t5=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* map-loop730 in k5338 in k5311 in k5285 in k5276 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_5370(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_5370,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[36],t6,t7);
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

/* map-loop697 in k5311 in k5285 in k5276 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_5418(C_word t0,C_word t1,C_word t2,C_word t3){
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
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_5418,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_i_cadr(t7);
t9=C_a_i_list2(&a,2,t6,t8);
t10=C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10);
t12=C_mutate(((C_word *)((C_word*)t0)[2])+1,t10);
t13=C_slot(t2,C_fix(1));
t14=C_slot(t3,C_fix(1));
t16=t1;
t17=t13;
t18=t14;
t1=t16;
t2=t17;
t3=t18;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop670 in k5285 in k5276 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_5466(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_5466,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_list2(&a,2,t4,lf[54]);
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

/* map-loop640 in k5276 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_5500(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5500,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5525,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* eval.scm:346: g646 */
t5=*((C_word*)lf[49]+1);{
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

/* k5523 in map-loop640 in k5276 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5525(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5525,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5500(t6,((C_word*)t0)[5],t5);}

/* map-loop613 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_5534(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_5534,3,t0,t1,t2);}
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

/* k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5575(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_5575,2,av);}
a=C_alloc(24);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t0)[3];
t10=(C_truep(t9)?C_a_i_cons(&a,2,t9,((C_word*)t4)[1]):C_a_i_cons(&a,2,lf[56],((C_word*)t4)[1]));
t11=t10;
t12=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5586,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t11,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t8,a[10]=((C_word*)t0)[9],a[11]=t4,tmp=(C_word)a,a+=12,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5992,a[2]=t4,a[3]=t8,a[4]=t12,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:365: ##sys#extended-lambda-list? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[63]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[63]+1);
av2[1]=t13;
av2[2]=((C_word*)t4)[1];
tp(3,av2);}}

/* k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5586(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_5586,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5591,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word)li100),tmp=(C_word)a,a+=11,tmp);
/* eval.scm:370: ##sys#decompose-lambda-list */
t3=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[10];
av2[2]=((C_word*)((C_word*)t0)[11])[1];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5591(C_word c,C_word *av){
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
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_5591,5,av);}
a=C_alloc(27);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=t2;
t10=C_i_check_list_2(t9,lf[42]);
t11=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5601,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=t2,tmp=(C_word)a,a+=14,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5957,a[2]=t7,a[3]=t13,a[4]=t8,a[5]=((C_word)li99),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_5957(t15,t11,t9);}

/* k5599 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_5601,2,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5604,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5955,a[2]=t3,a[3]=((C_word*)t0)[13],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:374: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
tp(2,av2);}}

/* k5602 in k5599 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5604(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(35,c,4)))){
C_save_and_reclaim((void *)f_5604,2,av);}
a=C_alloc(35);
t2=t1;
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=t3;
t5=*((C_word*)lf[9]+1);
t6=t2;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_TRUE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5610,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5912,a[2]=t7,a[3]=t9,a[4]=t5,a[5]=((C_word)li96),tmp=(C_word)a,a+=6,tmp);
t12=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5929,a[2]=((C_word*)t0)[9],a[3]=t4,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],a[8]=t2,a[9]=((C_word)li97),tmp=(C_word)a,a+=10,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5943,a[2]=t7,a[3]=t5,a[4]=((C_word)li98),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:377: ##sys#dynamic-wind */
t14=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t14;
av2[1]=t10;
av2[2]=t11;
av2[3]=t12;
av2[4]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}

/* k5608 in k5602 in k5599 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5610(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5610,2,av);}
a=C_alloc(7);
t2=t1;
t3=((C_word*)t0)[2];
switch(t3){
case C_fix(0):
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(((C_word*)t0)[4])?(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5620,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li72),tmp=(C_word)a,a+=6,tmp):(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5639,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li74),tmp=(C_word)a,a+=6,tmp));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}
case C_fix(1):
if(C_truep(((C_word*)t0)[4])){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5663,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li76),tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5682,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li78),tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
case C_fix(2):
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(((C_word*)t0)[4])?(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5710,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li80),tmp=(C_word)a,a+=6,tmp):(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5729,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li82),tmp=(C_word)a,a+=6,tmp));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}
case C_fix(3):
if(C_truep(((C_word*)t0)[4])){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5757,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li84),tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5776,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li86),tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
default:
t4=C_eqp(t3,C_fix(4));
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=(C_truep(t4)?(C_truep(((C_word*)t0)[4])?(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5804,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li88),tmp=(C_word)a,a+=6,tmp):(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5823,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li90),tmp=(C_word)a,a+=6,tmp)):(C_truep(((C_word*)t0)[4])?(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5845,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li93),tmp=(C_word)a,a+=7,tmp):(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5868,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li95),tmp=(C_word)a,a+=7,tmp)));
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* f_5620 in k5608 in k5602 in k5599 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5620,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5626,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li71),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:384: decorate */
f_3879(t1,t3,((C_word*)t0)[4]);}

/* a5625 */
static void C_ccall f_5626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_5626,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
t3=C_a_i_vector1(&a,1,t2);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
t5=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* f_5639 in k5608 in k5602 in k5599 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5639,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5645,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li73),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:389: decorate */
f_3879(t1,t3,((C_word*)t0)[4]);}

/* a5644 */
static void C_ccall f_5645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5645,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* f_5663 in k5608 in k5602 in k5599 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5663,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5669,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li75),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:394: decorate */
f_3879(t1,t3,((C_word*)t0)[4]);}

/* a5668 */
static void C_ccall f_5669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +6,c,2)))){
C_save_and_reclaim((void*)f_5669,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+6);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=C_a_i_vector2(&a,2,t2,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[2]);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* f_5682 in k5608 in k5602 in k5599 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5682,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5688,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li77),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:399: decorate */
f_3879(t1,t3,((C_word*)t0)[4]);}

/* a5687 */
static void C_ccall f_5688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5688,3,av);}
a=C_alloc(5);
t3=C_a_i_vector1(&a,1,t2);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* f_5710 in k5608 in k5602 in k5599 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5710,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5716,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li79),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:405: decorate */
f_3879(t1,t3,((C_word*)t0)[4]);}

/* a5715 */
static void C_ccall f_5716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +7,c,2)))){
C_save_and_reclaim((void*)f_5716,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+7);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
t5=C_a_i_vector3(&a,3,t2,t3,t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[2]);
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t1;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* f_5729 in k5608 in k5602 in k5599 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5729,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5735,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li81),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:410: decorate */
f_3879(t1,t3,((C_word*)t0)[4]);}

/* a5734 */
static void C_ccall f_5735(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5735,4,av);}
a=C_alloc(6);
t4=C_a_i_vector2(&a,2,t2,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[2]);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* f_5757 in k5608 in k5602 in k5599 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_5757,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5763,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li83),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:416: decorate */
f_3879(t1,t3,((C_word*)t0)[4]);}

/* a5762 */
static void C_ccall f_5763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-5)*C_SIZEOF_PAIR +8,c,2)))){
C_save_and_reclaim((void*)f_5763,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+8);
t5=C_build_rest(&a,c,5,av);
C_word t6;
C_word t7;
C_word t8;
t6=C_a_i_vector4(&a,4,t2,t3,t4,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)t0)[2]);
t8=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t8;
av2[1]=t1;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* f_5776 in k5608 in k5602 in k5599 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_5776,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5782,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li85),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:421: decorate */
f_3879(t1,t3,((C_word*)t0)[4]);}

/* a5781 */
static void C_ccall f_5782(C_word c,C_word *av){
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
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5782,5,av);}
a=C_alloc(7);
t5=C_a_i_vector3(&a,3,t2,t3,t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[2]);
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t1;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* f_5804 in k5608 in k5602 in k5599 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_5804,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5810,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li87),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:427: decorate */
f_3879(t1,t3,((C_word*)t0)[4]);}

/* a5809 */
static void C_ccall f_5810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word *a;
if(c<6) C_bad_min_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-6)*C_SIZEOF_PAIR +9,c,2)))){
C_save_and_reclaim((void*)f_5810,c,av);}
a=C_alloc((c-6)*C_SIZEOF_PAIR+9);
t6=C_build_rest(&a,c,6,av);
C_word t7;
C_word t8;
C_word t9;
t7=C_a_i_vector5(&a,5,t2,t3,t4,t5,t6);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[2]);
t9=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t9;
av2[1]=t1;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* f_5823 in k5608 in k5602 in k5599 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_5823,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5829,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li89),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:432: decorate */
f_3879(t1,t3,((C_word*)t0)[4]);}

/* a5828 */
static void C_ccall f_5829(C_word c,C_word *av){
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
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_5829,6,av);}
a=C_alloc(5);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5841,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:434: ##sys#vector */
t7=*((C_word*)lf[57]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
av2[5]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(6,av2);}}

/* k5839 in a5828 */
static void C_ccall f_5841(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5841,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* f_5845 in k5608 in k5602 in k5599 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5845(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5845,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5851,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li92),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:439: decorate */
f_3879(t1,t3,((C_word*)t0)[5]);}

/* a5850 */
static void C_ccall f_5851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +15,c,6)))){
C_save_and_reclaim((void*)f_5851,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+15);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5863,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5867,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=((C_word*)t0)[4];
t6=t2;
if(C_truep(C_i_nullp(t6))){
t7=C_a_i_list1(&a,1,t6);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t3;
av2[2]=*((C_word*)lf[57]+1);
av2[3]=t7;
C_apply(4,av2);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7362,a[2]=t6,a[3]=t8,a[4]=((C_word)li91),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_7362(t10,t4,t5,C_fix(0),t6,C_SCHEME_FALSE);}}

/* k5861 in a5850 */
static void C_ccall f_5863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5863,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5865 in a5850 */
static void C_ccall f_5867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5867,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[57]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* f_5868 in k5608 in k5602 in k5599 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5868(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5868,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5874,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word)li94),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:446: decorate */
f_3879(t1,t3,((C_word*)t0)[5]);}

/* a5873 */
static void C_ccall f_5874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,4)))){
C_save_and_reclaim((void*)f_5874,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t3=t2;
t4=C_u_i_length(t3);
t5=C_eqp(t4,((C_word*)t0)[2]);
if(C_truep(C_i_not(t5))){
/* eval.scm:450: ##sys#error */
t6=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[59];
av2[3]=((C_word*)t0)[2];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5896,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t6;
av2[2]=*((C_word*)lf[57]+1);
av2[3]=t2;
C_apply(4,av2);}}}

/* k5894 in a5873 */
static void C_ccall f_5896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5896,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a5911 in k5602 in k5599 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5912,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5916,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* eval.scm:377: current-environment809810 */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_5916(2,av2);}}}

/* k5914 in a5911 in k5602 in k5599 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5916,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5920,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* eval.scm:377: current-environment809810 */
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k5918 in k5914 in a5911 in k5602 in k5599 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_5920,2,av);}
a=C_alloc(4);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5923,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:377: current-environment809810 */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k5921 in k5918 in k5914 in a5911 in k5602 in k5599 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5923(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5923,2,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a5928 in k5602 in k5599 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_5929,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5937,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:379: ##sys#canonicalize-body */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[7])[1];
av2[3]=((C_word*)t0)[8];
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k5935 in a5928 in k5602 in k5599 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_5937,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
if(C_truep(t2)){
/* eval.scm:378: compile-to-closure */
f_3670(((C_word*)t0)[3],t1,((C_word*)t0)[4],C_a_i_list(&a,4,t2,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE));}
else{
t3=((C_word*)t0)[7];
/* eval.scm:378: compile-to-closure */
f_3670(((C_word*)t0)[3],t1,((C_word*)t0)[4],C_a_i_list(&a,4,t3,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE));}}

/* a5942 in k5602 in k5599 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5943,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5947,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:377: current-environment809810 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k5945 in a5942 in k5602 in k5599 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5947,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5950,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:377: current-environment809810 */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k5948 in k5945 in a5942 in k5602 in k5599 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5950,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5953 in k5599 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5955,2,av);}
/* eval.scm:374: ##sys#extend-se */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[48]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[48]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}

/* map-loop781 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_5957(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5957,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5982,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* eval.scm:373: g787 */
t5=*((C_word*)lf[49]+1);{
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

/* k5980 in map-loop781 in a5590 in k5584 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5982(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5982,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5957(t6,((C_word*)t0)[5],t5);}

/* k5990 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_5992,2,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5997,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li101),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6007,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li102),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:366: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_5586(2,av2);}}}

/* a5996 in k5990 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_5997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5997,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6005,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:369: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
tp(2,av2);}}

/* k6003 in a5996 in k5990 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6005,2,av);}
/* eval.scm:368: ##sys#expand-extended-lambda-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[61]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[61]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=((C_word*)((C_word*)t0)[4])[1];
av2[4]=*((C_word*)lf[62]+1);
av2[5]=t1;
tp(6,av2);}}

/* a6006 in k5990 in k5573 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6007(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6007,4,av);}
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k6016 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_6018,2,av);}
/* eval.scm:361: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[64]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[64]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[65];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[66];
av2[5]=C_SCHEME_FALSE;
av2[6]=t1;
tp(7,av2);}}

/* k6025 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6027(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_6027,2,av);}
a=C_alloc(23);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_TRUE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6032,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word)li103),tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6049,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li104),tmp=(C_word)a,a+=8,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6067,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li105),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:455: ##sys#dynamic-wind */
t9=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[8];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a6031 in k6025 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6032,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6036,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* eval.scm:455: current-environment876877 */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_6036(2,av2);}}}

/* k6034 in a6031 in k6025 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6036,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6040,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* eval.scm:455: current-environment876877 */
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k6038 in k6034 in a6031 in k6025 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6040,2,av);}
a=C_alloc(4);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6043,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:455: current-environment876877 */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k6041 in k6038 in k6034 in a6031 in k6025 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6043,2,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a6048 in k6025 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6049(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6049,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6057,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_i_cddr(((C_word*)t0)[6]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6065,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:468: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t5;
tp(2,av2);}}

/* k6055 in a6048 in k6025 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6057,2,av);}
/* eval.scm:467: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3885(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k6063 in a6048 in k6025 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6065,2,av);}
/* eval.scm:468: ##sys#canonicalize-body */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* a6066 in k6025 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6067,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6071,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:455: current-environment876877 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6069 in a6066 in k6025 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6071,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6074,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:455: current-environment876877 */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k6072 in k6069 in a6066 in k6025 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6074,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6090 in map-loop886 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6092(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6092,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6096,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6100,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=C_i_cadr(((C_word*)t0)[4]);
/* eval.scm:463: ##sys#eval/meta */
t6=*((C_word*)lf[70]+1);{
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

/* k6094 in k6090 in map-loop886 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_6096,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list3(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6098 in k6090 in map-loop886 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6100,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6104,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_u_i_car(((C_word*)t0)[3]);
/* eval.scm:464: chicken.syntax#strip-syntax */
t5=*((C_word*)lf[24]+1);{
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

/* k6102 in k6098 in k6090 in map-loop886 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6104,2,av);}
/* eval.scm:462: ##sys#ensure-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[69]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[69]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k6117 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6119,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6123,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:466: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6121 in k6117 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6123,2,av);}
/* eval.scm:457: scheme#append */
t2=*((C_word*)lf[68]+1);{
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

/* map-loop886 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_6125(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_6125,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6150,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=C_i_car(t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6092,a[2]=t5,a[3]=t8,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:461: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t9;
tp(2,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6148 in map-loop886 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6150(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6150,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6125(t6,((C_word*)t0)[5],t5);}

/* k6177 in map-loop921 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_6179,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list3(&a,3,((C_word*)t0)[3],C_SCHEME_FALSE,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6181 in map-loop921 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6183,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6187,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_u_i_car(((C_word*)t0)[3]);
/* eval.scm:478: chicken.syntax#strip-syntax */
t5=*((C_word*)lf[24]+1);{
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

/* k6185 in k6181 in map-loop921 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6187,2,av);}
/* eval.scm:476: ##sys#ensure-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[69]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[69]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k6200 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6202,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6205,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6295,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:480: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
tp(2,av2);}}

/* k6203 in k6200 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6205(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_6205,2,av);}
a=C_alloc(31);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6206,a[2]=t2,a[3]=((C_word)li107),tmp=(C_word)a,a+=4,tmp);
t4=C_i_check_list_2(((C_word*)t0)[2],lf[72]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6270,a[2]=t3,a[3]=((C_word)li108),tmp=(C_word)a,a+=4,tmp);
t6=(
  f_6270(t5,((C_word*)t0)[2])
);
t7=*((C_word*)lf[9]+1);
t8=t2;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_TRUE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6225,a[2]=t9,a[3]=t11,a[4]=t7,a[5]=((C_word)li109),tmp=(C_word)a,a+=6,tmp);
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6242,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li110),tmp=(C_word)a,a+=8,tmp);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6260,a[2]=t9,a[3]=t7,a[4]=((C_word)li111),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:485: ##sys#dynamic-wind */
t15=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t15;
av2[1]=((C_word*)t0)[8];
av2[2]=t12;
av2[3]=t13;
av2[4]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(5,av2);}}

/* g950 in k6203 in k6200 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static C_word C_fcall f_6206(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_cdr(t1);
return(C_i_set_car(t2,((C_word*)t0)[2]));}

/* a6224 in k6203 in k6200 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6225,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6229,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* eval.scm:485: current-environment958959 */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_6229(2,av2);}}}

/* k6227 in a6224 in k6203 in k6200 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6229,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6233,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* eval.scm:485: current-environment958959 */
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k6231 in k6227 in a6224 in k6203 in k6200 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6233,2,av);}
a=C_alloc(4);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6236,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:485: current-environment958959 */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k6234 in k6231 in k6227 in a6224 in k6203 in k6200 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6236,2,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a6241 in k6203 in k6200 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6242,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6250,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_i_cddr(((C_word*)t0)[6]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6258,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:487: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t5;
tp(2,av2);}}

/* k6248 in a6241 in k6203 in k6200 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6250(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6250,2,av);}
/* eval.scm:486: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3885(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k6256 in a6241 in k6203 in k6200 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6258,2,av);}
/* eval.scm:487: ##sys#canonicalize-body */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* a6259 in k6203 in k6200 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6260,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6264,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:485: current-environment958959 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6262 in a6259 in k6203 in k6200 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6264,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6267,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:485: current-environment958959 */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k6265 in k6262 in a6259 in k6203 in k6200 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6267,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* for-each-loop949 in k6203 in k6200 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static C_word C_fcall f_6270(C_word t0,C_word t1){
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
t3=(
  /* eval.scm:481: g950 */
  f_6206(((C_word*)t0)[2],t2)
);
t4=C_slot(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* k6293 in k6200 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6295,2,av);}
/* eval.scm:480: scheme#append */
t2=*((C_word*)lf[68]+1);{
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

/* map-loop921 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_6297(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_6297,3,t0,t1,t2);}
a=C_alloc(14);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6322,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=C_i_car(t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6179,a[2]=t5,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6183,a[2]=t9,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t11=C_i_cadr(t6);
/* eval.scm:477: ##sys#eval/meta */
t12=*((C_word*)lf[70]+1);{
C_word av2[3];
av2[0]=t12;
av2[1]=t10;
av2[2]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6320 in map-loop921 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6322(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6322,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6297(t6,((C_word*)t0)[5],t5);}

/* k6342 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6344,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6347,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6385,a[2]=((C_word*)t0)[9],a[3]=t3,a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:494: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6347(2,av2);}}}

/* k6345 in k6342 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6347(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6347,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6350,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6368,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:497: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[77]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[77]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6348 in k6345 in k6342 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6350,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6353,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6360,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:501: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6351 in k6348 in k6345 in k6342 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6353,2,av);}
/* eval.scm:503: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3885(t2,((C_word*)t0)[3],lf[74],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k6358 in k6348 in k6345 in k6342 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6360,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6364,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:502: ##sys#eval/meta */
t4=*((C_word*)lf[70]+1);{
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

/* k6362 in k6358 in k6348 in k6345 in k6342 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6364(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6364,2,av);}
/* eval.scm:499: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[75]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[75]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
tp(5,av2);}}

/* k6366 in k6345 in k6342 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6368,2,av);}
/* eval.scm:496: ##sys#register-syntax-export */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[76]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[76]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}

/* k6383 in k6342 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6385(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6385,2,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(C_i_not(t2))){
/* eval.scm:495: ##sys#error */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[0];
av2[3]=lf[78];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6347(2,av2);}}}

/* k6405 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6407(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6407,2,av);}
/* eval.scm:509: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3885(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k6413 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6415,2,av);}
/* eval.scm:510: ##sys#canonicalize-body */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* a6433 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6434(C_word c,C_word *av){
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
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,7)))){
C_save_and_reclaim((void *)f_6434,3,av);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6442,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_i_cdddr(((C_word*)t0)[7]);
if(C_truep(C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6452,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t6=C_i_cadddr(((C_word*)t0)[7]);
/* eval.scm:521: scheme#append */
t7=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t2;
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t5=C_a_i_cons(&a,2,lf[31],t2);
/* eval.scm:518: compile */
t6=((C_word*)((C_word*)t0)[2])[1];
f_3885(t6,t1,t5,((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}}

/* k6440 in a6433 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6442,2,av);}
/* eval.scm:518: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3885(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k6450 in a6433 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6452,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6456,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:522: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6454 in k6450 in a6433 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6456(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6456,2,av);}
/* eval.scm:520: ##sys#canonicalize-body */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k6483 in map-loop995 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6485(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6485,2,av);}
/* eval.scm:530: chicken.syntax#strip-syntax */
t2=*((C_word*)lf[24]+1);{
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

/* k6495 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_6497,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6499,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li114),tmp=(C_word)a,a+=9,tmp);
/* eval.scm:527: ##sys#with-module-aliases */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[85]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[85]+1);
av2[1]=((C_word*)t0)[8];
av2[2]=t1;
av2[3]=t2;
tp(4,av2);}}

/* a6498 in k6495 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6499(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_6499,2,av);}
a=C_alloc(3);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[31],t2);
/* eval.scm:533: compile */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3885(t4,t1,t3,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* map-loop995 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_6513(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_6513,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6538,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6485,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:529: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[64]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[64]+1);
av2[1]=t7;
av2[2]=lf[86];
av2[3]=t6;
av2[4]=lf[87];
tp(5,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6536 in map-loop995 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6538(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6538,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6513(t6,((C_word*)t0)[5],t5);}

/* k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6554(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_6554,2,av);}
a=C_alloc(26);
t2=t1;
t3=C_i_cadr(t2);
t4=t3;
t5=C_i_caddr(t2);
t6=C_eqp(C_SCHEME_TRUE,t5);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6563,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t6)){
t8=t7;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t6;
f_6563(2,av2);}}
else{
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6768,a[2]=t4,a[3]=((C_word)li124),tmp=(C_word)a,a+=4,tmp);
t13=C_u_i_cdr(t2);
t14=C_u_i_cdr(t13);
t15=C_u_i_car(t14);
t16=C_i_check_list_2(t15,lf[42]);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6825,a[2]=t10,a[3]=t18,a[4]=t12,a[5]=t11,a[6]=((C_word)li125),tmp=(C_word)a,a+=7,tmp));
t20=((C_word*)t18)[1];
f_6825(t20,t7,t15);}}

/* k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6563,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6566,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6761,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:553: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[77]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[77]+1);
av2[1]=t4;
tp(2,av2);}}

/* k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6566(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_6566,2,av);}
a=C_alloc(12);
t2=*((C_word*)lf[77]+1);
t3=*((C_word*)lf[9]+1);
t4=*((C_word*)lf[89]+1);
t5=*((C_word*)lf[90]+1);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6569,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:556: ##sys#register-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[98]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[98]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[8];
tp(5,av2);}}

/* k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6569,2,av);}
a=C_alloc(14);
t2=t1;
t3=*((C_word*)lf[91]+1);
t4=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6572,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
/* eval.scm:561: ##sys#module-alias-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[90]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[90]+1);
av2[1]=t4;
tp(2,av2);}}

/* k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6572(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(41,c,4)))){
C_save_and_reclaim((void *)f_6572,2,av);}
a=C_alloc(41);
t2=((C_word*)t0)[2];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t0)[3];
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=t1;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_TRUE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6577,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=t11,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word)li116),tmp=(C_word)a,a+=12,tmp);
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6633,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=((C_word)li121),tmp=(C_word)a,a+=8,tmp);
t14=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6729,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word)li122),tmp=(C_word)a,a+=11,tmp);
/* eval.scm:555: ##sys#dynamic-wind */
t15=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t15;
av2[1]=((C_word*)t0)[13];
av2[2]=t12;
av2[3]=t13;
av2[4]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(5,av2);}}

/* a6576 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6577(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_6577,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6581,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* eval.scm:555: current-module10701071 */
t3=((C_word*)t0)[10];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_6581(2,av2);}}}

/* k6579 in a6576 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_6581,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6584,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* eval.scm:555: current-environment10721073 */
t4=((C_word*)t0)[10];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
f_6584(2,av2);}}}

/* k6582 in k6579 in a6576 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_6584,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6587,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* eval.scm:555: macro-environment10741075 */
t4=((C_word*)t0)[9];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)((C_word*)t0)[4])[1];
f_6587(2,av2);}}}

/* k6585 in k6582 in k6579 in a6576 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_6587,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6590,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* eval.scm:555: module-alias-environment10761077 */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[5])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)((C_word*)t0)[5])[1];
f_6590(2,av2);}}}

/* k6588 in k6585 in k6582 in k6579 in a6576 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 in ... */
static void C_ccall f_6590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_6590,2,av);}
a=C_alloc(16);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_6594,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* eval.scm:555: current-module10701071 */
t4=((C_word*)t0)[13];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k6592 in k6588 in k6585 in k6582 in k6579 in a6576 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in ... */
static void C_ccall f_6594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_6594,2,av);}
a=C_alloc(15);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6598,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],tmp=(C_word)a,a+=15,tmp);
/* eval.scm:555: current-environment10721073 */
t4=((C_word*)t0)[12];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k6596 in k6592 in k6588 in k6585 in k6582 in k6579 in a6576 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in ... */
static void C_ccall f_6598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6598,2,av);}
a=C_alloc(14);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6602,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
/* eval.scm:555: macro-environment10741075 */
t4=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k6600 in k6596 in k6592 in k6588 in k6585 in k6582 in k6579 in a6576 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in ... */
static void C_ccall f_6602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6602,2,av);}
a=C_alloc(13);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6606,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
/* eval.scm:555: module-alias-environment10761077 */
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k6604 in k6600 in k6596 in k6592 in k6588 in k6585 in k6582 in k6579 in a6576 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in ... */
static void C_ccall f_6606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_6606,2,av);}
a=C_alloc(10);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6609,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:555: current-module10701071 */
t4=((C_word*)t0)[11];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[12];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k6607 in k6604 in k6600 in k6596 in k6592 in k6588 in k6585 in k6582 in k6579 in a6576 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in ... */
static void C_ccall f_6609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_6609,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6612,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:555: current-environment10721073 */
t3=((C_word*)t0)[8];{
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
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k6610 in k6607 in k6604 in k6600 in k6596 in k6592 in k6588 in k6585 in k6582 in k6579 in a6576 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in ... */
static void C_ccall f_6612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6612,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6615,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:555: macro-environment10741075 */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k6613 in k6610 in k6607 in k6604 in k6600 in k6596 in k6592 in k6588 in k6585 in k6582 in k6579 in a6576 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in ... */
static void C_ccall f_6615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6615,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6618,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:555: module-alias-environment10761077 */
t3=((C_word*)t0)[4];{
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
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k6616 in k6613 in k6610 in k6607 in k6604 in k6600 in k6596 in k6592 in k6588 in k6585 in k6582 in k6579 in a6576 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in ... */
static void C_ccall f_6618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6618,2,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a6632 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6633,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6639,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li120),tmp=(C_word)a,a+=8,tmp);
/* eval.scm:562: ##sys#with-property-restore */
t3=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a6638 in a6632 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_6639,2,av);}
a=C_alloc(10);
t2=C_i_cdddr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6649,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li119),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_6649(t6,t1,t2,C_SCHEME_END_OF_LIST);}

/* loop in a6638 in a6632 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_6649(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,7)))){
C_save_and_reclaim_args((void *)trf_6649,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6659,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:566: reverse */
t5=*((C_word*)lf[96]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=C_i_cdr(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6725,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=t2;
t8=C_u_i_car(t7);
/* eval.scm:581: compile */
t9=((C_word*)((C_word*)t0)[4])[1];
f_3885(t9,t6,t8,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_TRUE);}}

/* k6657 in loop in a6638 in a6632 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6659(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6659,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6662,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6710,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:567: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[77]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[77]+1);
av2[1]=t4;
tp(2,av2);}}

/* k6660 in k6657 in loop in a6638 in a6632 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 in ... */
static void C_ccall f_6662(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6662,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6665,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6706,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:568: chicken.internal#module-requirement */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[94]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[94]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k6663 in k6660 in k6657 in loop in a6638 in a6632 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in ... */
static void C_ccall f_6665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6665,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6666,a[2]=((C_word*)t0)[2],a[3]=((C_word)li118),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_6666 in k6663 in k6660 in k6657 in loop in a6638 in a6632 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in ... */
static void C_ccall f_6666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_6666,3,av);}
a=C_alloc(7);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6672,a[2]=t4,a[3]=t2,a[4]=((C_word)li117),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_6672(t6,t1,((C_word*)t0)[2]);}

/* loop2 */
static void C_fcall f_6672(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6672,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=*((C_word*)lf[92]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_cdr(t2);
t4=t3;
if(C_truep(C_i_pairp(t4))){
t5=t2;
t6=C_u_i_car(t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6695,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:574: g1131 */
t8=t6;{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t8))(3,av2);}}
else{
t5=t2;
t6=C_u_i_car(t5);
/* eval.scm:574: g1134 */
t7=t6;{
C_word av2[3];
av2[0]=t7;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}}}

/* k6693 in loop2 */
static void C_ccall f_6695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6695,2,av);}
/* eval.scm:576: loop2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6672(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k6704 in k6660 in k6657 in loop in a6638 in a6632 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in ... */
static void C_ccall f_6706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6706,2,av);}
/* eval.scm:568: ##sys#provide */
t2=*((C_word*)lf[93]+1);{
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

/* k6708 in k6657 in loop in a6638 in a6632 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 in ... */
static void C_ccall f_6710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6710,2,av);}
/* eval.scm:567: ##sys#finalize-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[95]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[95]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k6723 in loop in a6638 in a6632 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6725,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* eval.scm:579: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6649(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2);}

/* a6728 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6729,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6733,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:555: current-module10701071 */
t3=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6731 in a6728 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6733,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6736,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:555: current-environment10721073 */
t4=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k6734 in k6731 in a6728 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6736,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6739,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* eval.scm:555: macro-environment10741075 */
t4=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k6737 in k6734 in k6731 in a6728 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6739,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6742,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* eval.scm:555: module-alias-environment10761077 */
t4=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k6740 in k6737 in k6734 in k6731 in a6728 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 in ... */
static void C_ccall f_6742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_6742,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6745,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* eval.scm:555: current-module10701071 */
t4=((C_word*)t0)[13];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k6743 in k6740 in k6737 in k6734 in k6731 in a6728 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in ... */
static void C_ccall f_6745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_6745,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6748,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* eval.scm:555: current-environment10721073 */
t3=((C_word*)t0)[13];{
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
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k6746 in k6743 in k6740 in k6737 in k6734 in k6731 in a6728 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in ... */
static void C_ccall f_6748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_6748,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6751,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:555: macro-environment10741075 */
t3=((C_word*)t0)[12];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k6749 in k6746 in k6743 in k6740 in k6737 in k6734 in k6731 in a6728 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in ... */
static void C_ccall f_6751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_6751,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6754,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:555: module-alias-environment10761077 */
t3=((C_word*)t0)[11];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[8])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k6752 in k6749 in k6746 in k6743 in k6740 in k6737 in k6734 in k6731 in a6728 in k6570 in k6567 in k6564 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in ... */
static void C_ccall f_6754(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6754,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[5]);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[7]);
t5=C_mutate(((C_word *)((C_word*)t0)[8])+1,((C_word*)t0)[9]);
t6=((C_word*)t0)[10];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k6759 in k6561 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6761,2,av);}
if(C_truep(t1)){
/* eval.scm:554: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[62]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[62]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[99];
av2[3]=lf[100];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_6566(2,av2);}}}

/* g1038 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_6768(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_6768,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_symbolp(t2))){
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6781,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6792,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp);
t5=t3;
f_6781(t5,(
  f_6792(t2)
));}
else{
t4=t3;
f_6781(t4,C_SCHEME_FALSE);}}}

/* k6779 in g1038 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_6781(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_6781,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* eval.scm:549: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[62]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[62]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[99];
av2[3]=lf[101];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[4];
tp(6,av2);}}}

/* loop in g1038 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static C_word C_fcall f_6792(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
t2=C_i_nullp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_i_car(t1);
if(C_truep(C_i_symbolp(t3))){
t4=t1;
t5=C_u_i_cdr(t4);
t7=t5;
t1=t7;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* map-loop1032 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_6825(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6825,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6850,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* eval.scm:540: g1038 */
t5=((C_word*)t0)[4];
f_6768(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6848 in map-loop1032 in k6552 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6850(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6850,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6825(t6,((C_word*)t0)[5],t5);}

/* k6876 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_6878,2,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
/* eval.scm:588: compile */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3885(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k6910 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6912,2,av);}
/* eval.scm:595: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3885(t2,((C_word*)t0)[3],lf[105],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* a6934 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6935,2,av);}
/* eval.scm:600: ##sys#process-require */
t2=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a6940 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6941,4,av);}
/* eval.scm:601: compile */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3885(t4,t1,t2,((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k6955 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6957,2,av);}
/* eval.scm:605: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3885(t2,((C_word*)t0)[3],lf[112],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k6996 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_6998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6998,2,av);}
/* eval.scm:615: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3885(t2,((C_word*)t0)[3],lf[118],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k7019 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_7021,2,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
/* eval.scm:618: compile */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3885(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k7032 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_7034(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(25,0,7)))){
C_save_and_reclaim_args((void *)trf_7034,2,t0,t1);}
a=C_alloc(25);
if(C_truep(t1)){
/* eval.scm:625: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[62]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[62]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[124];
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[125]);
if(C_truep(t2)){
t3=C_i_cdr(((C_word*)t0)[3]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7054,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:628: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t5;
tp(2,av2);}}
else{
t3=C_eqp(((C_word*)t0)[4],lf[126]);
if(C_truep(t3)){
t4=C_i_cadddr(((C_word*)t0)[3]);
/* eval.scm:631: compile */
t5=((C_word*)((C_word*)t0)[9])[1];
f_3885(t5,((C_word*)t0)[2],t4,((C_word*)t0)[6],((C_word*)t0)[10],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[11]);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[127]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7098,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
t6=C_i_cdddr(((C_word*)t0)[3]);
/* eval.scm:635: chicken.syntax#strip-syntax */
t7=*((C_word*)lf[24]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t5=C_a_i_cons(&a,2,((C_word*)t0)[12],*((C_word*)lf[131]+1));
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7110,a[2]=t9,a[3]=t7,a[4]=((C_word)li129),tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7115,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word)li130),tmp=(C_word)a,a+=8,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7125,a[2]=t7,a[3]=t9,a[4]=((C_word)li131),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:645: ##sys#dynamic-wind */
t13=*((C_word*)lf[47]+1);{
C_word av2[5];
av2[0]=t13;
av2[1]=((C_word*)t0)[2];
av2[2]=t10;
av2[3]=t11;
av2[4]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}}}}}

/* k7052 in k7032 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7054,2,av);}
/* eval.scm:628: compile-call */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7434(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* g1219 in k7096 in k7032 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_7080(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,7)))){
C_save_and_reclaim_args((void *)trf_7080,3,t0,t1,t2);}
t3=C_i_cadr(t2);
/* eval.scm:637: compile */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3885(t4,t1,t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k7096 in k7032 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_7098,2,av);}
a=C_alloc(9);
t2=C_i_assq(lf[128],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7080,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li128),tmp=(C_word)a,a+=9,tmp);
/* eval.scm:635: g1219 */
t4=t3;
f_7080(t4,((C_word*)t0)[8],t2);}
else{
/* eval.scm:639: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[62]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[62]+1);
av2[1]=((C_word*)t0)[8];
av2[2]=lf[129];
av2[3]=lf[130];
av2[4]=((C_word*)t0)[9];
tp(5,av2);}}}

/* a7109 in k7032 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7110,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[131]+1));
t3=C_mutate((C_word*)lf[131]+1 /* (set! ##sys#syntax-context ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a7114 in k7032 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7115,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7123,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:646: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
tp(2,av2);}}

/* k7121 in a7114 in k7032 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7123,2,av);}
/* eval.scm:646: compile-call */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7434(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* a7124 in k7032 in k4202 in k4187 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7125,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[131]+1));
t3=C_mutate((C_word*)lf[131]+1 /* (set! ##sys#syntax-context ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7298 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7300,2,av);}
/* eval.scm:194: chicken.syntax#expand */
t2=*((C_word*)lf[142]+1);{
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

/* k7308 in k4164 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7310,2,av);}
/* eval.scm:650: compile-call */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7434(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k7331 in k4100 in k3890 in compile in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7333,2,av);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_4166(2,av2);}}
else{
t2=C_i_vectorp(((C_word*)t0)[3]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_4166(2,av2);}}
else{
/* eval.scm:188: ##sys#srfi-4-vector? */
t3=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}

/* doloop1237 in a5850 */
static void C_fcall f_7362(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,5)))){
C_save_and_reclaim_args((void *)trf_7362,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=C_eqp(t2,C_fix(0));
if(C_truep(t6)){
t7=C_a_i_list1(&a,1,t4);
t8=C_i_setslot(t5,C_fix(1),t7);
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t7=C_fixnum_difference(t2,C_fix(1));
t8=t7;
t9=C_fixnum_plus(t3,C_fix(1));
t10=t9;
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7391,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t8,a[5]=t10,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t12=C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t12)){
/* eval.scm:659: ##sys#error */
t13=*((C_word*)lf[17]+1);{
C_word av2[5];
av2[0]=t13;
av2[1]=t11;
av2[2]=lf[58];
av2[3]=t2;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}
else{
t13=C_slot(t4,C_fix(1));
t15=t1;
t16=t8;
t17=t10;
t18=t13;
t19=t4;
t1=t15;
t2=t16;
t3=t17;
t4=t18;
t5=t19;
goto loop;}}}

/* k7389 in doloop1237 in a5850 */
static void C_ccall f_7391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7391,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7362(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,((C_word*)t0)[6]);}

/* loop in k7439 in compile-call in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static C_word C_fcall f_7408(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t1))){
t3=t2;
return(t3);}
else{
if(C_truep(C_i_pairp(t1))){
t3=C_slot(t1,C_fix(1));
t4=C_fixnum_plus(t2,C_fix(1));
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* compile-call in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_7434(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,7)))){
C_save_and_reclaim_args((void *)trf_7434,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(13);
t6=C_slot(t2,C_fix(0));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7441,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t5,a[7]=t3,a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_closurep(t7))){
t9=t8;{
C_word av2[2];
av2[0]=t9;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7758,a[2]=t7,a[3]=((C_word)li144),tmp=(C_word)a,a+=4,tmp);
f_7441(2,av2);}}
else{
t9=C_slot(t2,C_fix(0));
/* eval.scm:676: compile */
t10=((C_word*)((C_word*)t0)[3])[1];
f_3885(t10,t8,t9,t3,C_SCHEME_FALSE,t4,t5,C_SCHEME_FALSE);}}

/* k7439 in compile-call in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7441(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,7)))){
C_save_and_reclaim((void *)f_7441,2,av);}
a=C_alloc(33);
t2=t1;
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7408,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp);
t6=(
  f_7408(t4,C_fix(0))
);
t7=((C_word*)t0)[2];
switch(t6){
case C_SCHEME_FALSE:
/* eval.scm:681: ##sys#syntax-error/context */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[147];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}
case C_fix(0):
t8=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t8;
av2[1]=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7463,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t7,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t2,a[8]=((C_word)li134),tmp=(C_word)a,a+=9,tmp);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}
case C_fix(1):
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7482,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t7,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t2,a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
t9=C_slot(t4,C_fix(0));
/* eval.scm:685: compile */
t10=((C_word*)((C_word*)t0)[8])[1];
f_3885(t10,t8,t9,((C_word*)t0)[7],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);
case C_fix(2):
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7510,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t7,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=t4,a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
t9=C_slot(t4,C_fix(0));
/* eval.scm:689: compile */
t10=((C_word*)((C_word*)t0)[8])[1];
f_3885(t10,t8,t9,((C_word*)t0)[7],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);
case C_fix(3):
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7546,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t7,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t2,a[8]=((C_word*)t0)[3],a[9]=t4,a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
t9=C_slot(t4,C_fix(0));
/* eval.scm:694: compile */
t10=((C_word*)((C_word*)t0)[8])[1];
f_3885(t10,t8,t9,((C_word*)t0)[7],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);
case C_fix(4):
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7590,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t7,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=t4,a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
t9=C_slot(t4,C_fix(0));
/* eval.scm:700: compile */
t10=((C_word*)((C_word*)t0)[8])[1];
f_3885(t10,t8,t9,((C_word*)t0)[7],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);
default:
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7637,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li139),tmp=(C_word)a,a+=7,tmp);
t13=C_i_check_list_2(t4,lf[42]);
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7647,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t7,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7710,a[2]=t10,a[3]=t16,a[4]=t12,a[5]=t11,a[6]=((C_word)li143),tmp=(C_word)a,a+=7,tmp));
t18=((C_word*)t16)[1];
f_7710(t18,t14,t4);}}

/* f_7463 in k7439 in compile-call in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7463(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7463,3,av);}
a=C_alloc(8);
t3=(
  /* eval.scm:683: emit-trace-info */
  f_3855(C_a_i(&a,5),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2)
);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7470,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7468 */
static void C_ccall f_7470(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7470,2,av);}
/* eval.scm:682: g1272 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* k7480 in k7439 in compile-call in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_7482,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7483,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word)li135),tmp=(C_word)a,a+=10,tmp);
t4=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f_7483 in k7480 in k7439 in compile-call in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7483,3,av);}
a=C_alloc(10);
t3=(
  /* eval.scm:687: emit-trace-info */
  f_3855(C_a_i(&a,5),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2)
);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7490,a[2]=t1,a[3]=((C_word*)t0)[7],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7488 */
static void C_ccall f_7490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7490,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7497,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];{
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

/* k7495 in k7488 */
static void C_ccall f_7497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7497,2,av);}
/* eval.scm:686: g1277 */
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
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k7508 in k7439 in compile-call in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,7)))){
C_save_and_reclaim((void *)f_7510,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7513,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=C_u_i_list_ref(((C_word*)t0)[9],C_fix(1));
/* eval.scm:690: compile */
t5=((C_word*)((C_word*)t0)[10])[1];
f_3885(t5,t3,t4,((C_word*)t0)[7],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k7511 in k7508 in k7439 in compile-call in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_7513,2,av);}
a=C_alloc(11);
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7514,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t2,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word)li136),tmp=(C_word)a,a+=11,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_7514 in k7511 in k7508 in k7439 in compile-call in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_7514,3,av);}
a=C_alloc(11);
t3=(
  /* eval.scm:692: emit-trace-info */
  f_3855(C_a_i(&a,5),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2)
);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7521,a[2]=t1,a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7519 */
static void C_ccall f_7521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7521,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7528,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
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

/* k7526 in k7519 */
static void C_ccall f_7528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7528,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7532,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];{
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

/* k7530 in k7526 in k7519 */
static void C_ccall f_7532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7532,2,av);}
/* eval.scm:691: g1283 */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}

/* k7544 in k7439 in compile-call in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,7)))){
C_save_and_reclaim((void *)f_7546,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7549,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t4=C_u_i_list_ref(((C_word*)t0)[9],C_fix(1));
/* eval.scm:695: compile */
t5=((C_word*)((C_word*)t0)[10])[1];
f_3885(t5,t3,t4,((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k7547 in k7544 in k7439 in compile-call in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,7)))){
C_save_and_reclaim((void *)f_7549,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7552,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t4=C_u_i_list_ref(((C_word*)t0)[10],C_fix(2));
/* eval.scm:696: compile */
t5=((C_word*)((C_word*)t0)[11])[1];
f_3885(t5,t3,t4,((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k7550 in k7547 in k7544 in k7439 in compile-call in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7552(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_7552,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7553,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word)li137),tmp=(C_word)a,a+=12,tmp);
t4=((C_word*)t0)[10];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f_7553 in k7550 in k7547 in k7544 in k7439 in compile-call in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7553,3,av);}
a=C_alloc(12);
t3=(
  /* eval.scm:698: emit-trace-info */
  f_3855(C_a_i(&a,5),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2)
);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7560,a[2]=t1,a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t5=((C_word*)t0)[10];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7558 */
static void C_ccall f_7560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7560,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7567,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=((C_word*)t0)[6];{
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

/* k7565 in k7558 */
static void C_ccall f_7567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7567,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7571,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=((C_word*)t0)[6];{
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

/* k7569 in k7565 in k7558 */
static void C_ccall f_7571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7571,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7575,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[5];{
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

/* k7573 in k7569 in k7565 in k7558 */
static void C_ccall f_7575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7575,2,av);}
/* eval.scm:697: g1290 */
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
av2[4]=t1;
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* k7588 in k7439 in compile-call in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,7)))){
C_save_and_reclaim((void *)f_7590,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7593,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t4=C_u_i_list_ref(((C_word*)t0)[9],C_fix(1));
/* eval.scm:701: compile */
t5=((C_word*)((C_word*)t0)[10])[1];
f_3885(t5,t3,t4,((C_word*)t0)[7],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k7591 in k7588 in k7439 in compile-call in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,7)))){
C_save_and_reclaim((void *)f_7593,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
t4=C_u_i_list_ref(((C_word*)t0)[10],C_fix(2));
/* eval.scm:702: compile */
t5=((C_word*)((C_word*)t0)[11])[1];
f_3885(t5,t3,t4,((C_word*)t0)[7],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k7594 in k7591 in k7588 in k7439 in compile-call in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,7)))){
C_save_and_reclaim((void *)f_7596,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7599,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t4=C_u_i_list_ref(((C_word*)t0)[11],C_fix(3));
/* eval.scm:703: compile */
t5=((C_word*)((C_word*)t0)[12])[1];
f_3885(t5,t3,t4,((C_word*)t0)[7],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k7597 in k7594 in k7591 in k7588 in k7439 in compile-call in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_7599,2,av);}
a=C_alloc(13);
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7600,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t2,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word)li138),tmp=(C_word)a,a+=13,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_7600 in k7597 in k7594 in k7591 in k7588 in k7439 in compile-call in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7600,3,av);}
a=C_alloc(13);
t3=(
  /* eval.scm:705: emit-trace-info */
  f_3855(C_a_i(&a,5),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2)
);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7607,a[2]=t1,a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
t5=((C_word*)t0)[11];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7605 */
static void C_ccall f_7607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7607,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7614,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=((C_word*)t0)[7];{
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

/* k7612 in k7605 */
static void C_ccall f_7614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7614,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7618,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=((C_word*)t0)[7];{
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

/* k7616 in k7612 in k7605 */
static void C_ccall f_7618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7618,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7622,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=((C_word*)t0)[7];{
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

/* k7620 in k7616 in k7612 in k7605 */
static void C_ccall f_7622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7622,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7626,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7624 in k7620 in k7616 in k7612 in k7605 */
static void C_ccall f_7626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7626,2,av);}
/* eval.scm:704: g1298 */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
av2[5]=t1;
((C_proc)C_fast_retrieve_proc(t2))(6,av2);}}

/* g1310 in k7439 in compile-call in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_7637(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,7)))){
C_save_and_reclaim_args((void *)trf_7637,3,t0,t1,t2);}
/* eval.scm:707: compile */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3885(t3,t1,t2,((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k7645 in k7439 in compile-call in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_7647,2,av);}
a=C_alloc(10);
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7648,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t2,a[8]=((C_word*)t0)[8],a[9]=((C_word)li142),tmp=(C_word)a,a+=10,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_7648 in k7645 in k7439 in compile-call in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7648,3,av);}
a=C_alloc(10);
t3=(
  /* eval.scm:709: emit-trace-info */
  f_3855(C_a_i(&a,5),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2)
);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7659,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7657 */
static void C_ccall f_7659(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7659,2,av);}
a=C_alloc(22);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7664,a[2]=((C_word*)t0)[2],a[3]=((C_word)li140),tmp=(C_word)a,a+=4,tmp);
t8=C_i_check_list_2(((C_word*)t0)[3],lf[42]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7674,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7676,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li141),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_7676(t13,t9,((C_word*)t0)[3]);}

/* g1338 in k7657 */
static void C_fcall f_7664(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_7664,3,t0,t1,t2);}
t3=t2;{
C_word av2[3];
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7672 in k7657 */
static void C_ccall f_7674(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7674,2,av);}{
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

/* map-loop1332 in k7657 */
static void C_fcall f_7676(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7676,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7701,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* eval.scm:710: g1338 */
t5=((C_word*)t0)[4];
f_7664(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7699 in map-loop1332 in k7657 */
static void C_ccall f_7701(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7701,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7676(t6,((C_word*)t0)[5],t5);}

/* map-loop1304 in k7439 in compile-call in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_7710(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7710,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7735,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* eval.scm:707: g1310 */
t5=((C_word*)t0)[4];
f_7637(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7733 in map-loop1304 in k7439 in compile-call in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7735(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7735,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7710(t6,((C_word*)t0)[5],t5);}

/* f_7758 in compile-call in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7758,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7775 in chicken.eval#compile-to-closure in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_7777,2,av);}
t2=C_fixnum_greaterp(t1,C_fix(0));
/* eval.scm:712: compile */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3885(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE,t2,((C_word*)t0)[6],((C_word*)t0)[7]);}

/* ##sys#eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7827(C_word c,C_word *av){
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
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7827,3,av);}
a=C_alloc(7);
t3=*((C_word*)lf[77]+1);
t4=*((C_word*)lf[89]+1);
t5=*((C_word*)lf[9]+1);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7831,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* eval.scm:718: ##sys#meta-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[148]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[148]+1);
av2[1]=t6;
tp(2,av2);}}

/* k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7831(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7831,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7834,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:719: ##sys#current-meta-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[149]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[149]+1);
av2[1]=t3;
tp(2,av2);}}

/* k7832 in k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7834(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_7834,2,av);}
a=C_alloc(31);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)t0)[2];
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=t1;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_TRUE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7839,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word)li147),tmp=(C_word)a,a+=10,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7882,a[2]=((C_word*)t0)[6],a[3]=((C_word)li150),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7914,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li151),tmp=(C_word)a,a+=9,tmp);
/* eval.scm:717: ##sys#dynamic-wind */
t13=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t13;
av2[1]=((C_word*)t0)[7];
av2[2]=t10;
av2[3]=t11;
av2[4]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}

/* a7838 in k7832 in k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_7839,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7843,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
/* eval.scm:717: current-module13721373 */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_7843(2,av2);}}}

/* k7841 in a7838 in k7832 in k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_7843,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7846,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
/* eval.scm:717: macro-environment13741375 */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
f_7846(2,av2);}}}

/* k7844 in k7841 in a7838 in k7832 in k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7846(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_7846,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7849,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
/* eval.scm:717: current-environment13761377 */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)((C_word*)t0)[4])[1];
f_7849(2,av2);}}}

/* k7847 in k7844 in k7841 in a7838 in k7832 in k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7849(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7849,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7853,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* eval.scm:717: current-module13721373 */
t4=((C_word*)t0)[10];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k7851 in k7847 in k7844 in k7841 in a7838 in k7832 in k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7853,2,av);}
a=C_alloc(12);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7857,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:717: macro-environment13741375 */
t4=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k7855 in k7851 in k7847 in k7844 in k7841 in a7838 in k7832 in k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_7857,2,av);}
a=C_alloc(11);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7861,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:717: current-environment13761377 */
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k7859 in k7855 in k7851 in k7847 in k7844 in k7841 in a7838 in k7832 in k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_7861,2,av);}
a=C_alloc(8);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7864,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:717: current-module13721373 */
t4=((C_word*)t0)[9];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k7862 in k7859 in k7855 in k7851 in k7847 in k7844 in k7841 in a7838 in k7832 in k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_7864,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7867,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:717: macro-environment13741375 */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k7865 in k7862 in k7859 in k7855 in k7851 in k7847 in k7844 in k7841 in a7838 in k7832 in k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_7867,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7870,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:717: current-environment13761377 */
t3=((C_word*)t0)[4];{
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
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k7868 in k7865 in k7862 in k7859 in k7855 in k7851 in k7847 in k7844 in k7841 in a7838 in k7832 in k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7870,2,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a7881 in k7832 in k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_7882,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7888,a[2]=((C_word*)t0)[2],a[3]=((C_word)li148),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7897,a[2]=((C_word)li149),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:720: scheme#dynamic-wind */
t4=*((C_word*)lf[150]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=*((C_word*)lf[151]+1);
av2[3]=t2;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* a7887 in a7881 in k7832 in k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_7888,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7892,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:723: compile-to-closure */
f_3670(t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST,C_a_i_list(&a,4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_TRUE));}

/* k7890 in a7887 in a7881 in k7832 in k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7892,2,av);}
/* eval.scm:722: g1409 */
t2=t1;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* a7896 in a7881 in k7832 in k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7897,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7901,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7912,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:735: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
tp(2,av2);}}

/* k7899 in a7896 in a7881 in k7832 in k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7901,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7908,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:736: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[89]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[89]+1);
av2[1]=t2;
tp(2,av2);}}

/* k7906 in k7899 in a7896 in a7881 in k7832 in k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7908,2,av);}
/* eval.scm:736: ##sys#meta-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[148]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[148]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k7910 in a7896 in a7881 in k7832 in k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7912,2,av);}
/* eval.scm:735: ##sys#current-meta-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[149]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[149]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* a7913 in k7832 in k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7914,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7918,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:717: current-module13721373 */
t3=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k7916 in a7913 in k7832 in k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7918,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7921,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:717: macro-environment13741375 */
t4=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k7919 in k7916 in a7913 in k7832 in k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_7921,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7924,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:717: current-environment13761377 */
t4=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k7922 in k7919 in k7916 in a7913 in k7832 in k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_7924,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7927,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:717: current-module13721373 */
t4=((C_word*)t0)[10];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k7925 in k7922 in k7919 in k7916 in a7913 in k7832 in k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_7927,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7930,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:717: macro-environment13741375 */
t3=((C_word*)t0)[10];{
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
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k7928 in k7925 in k7922 in k7919 in k7916 in a7913 in k7832 in k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_7930,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7933,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:717: current-environment13761377 */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k7931 in k7928 in k7925 in k7922 in k7919 in k7916 in a7913 in k7832 in k7829 in eval/meta in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7933,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[5]);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[7]);
t5=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7940(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_7940,2,av);}
a=C_alloc(15);
t2=C_mutate((C_word*)lf[152]+1 /* (set! chicken.eval#eval-handler ...) */,t1);
t3=C_mutate((C_word*)lf[153]+1 /* (set! scheme#eval ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7942,a[2]=((C_word)li153),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[154]+1 /* (set! chicken.eval#module-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7952,a[2]=((C_word)li154),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7959,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11749,a[2]=((C_word)li270),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11817,a[2]=((C_word)li271),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:775: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t5;
av2[2]=t6;
av2[3]=t7;
C_call_with_values(4,av2);}}

/* scheme#eval in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_7942,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7950,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:765: eval-handler */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[152]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[152]+1);
av2[1]=t4;
tp(2,av2);}}

/* k7948 in scheme#eval in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7950,2,av);}{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
C_apply(5,av2);}}

/* chicken.eval#module-environment in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7952,3,av);}
/* eval.scm:770: chicken.module#module-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[155]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[155]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7959(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_7959,2,av);}
a=C_alloc(18);
t2=C_mutate((C_word*)lf[60]+1 /* (set! ##sys#decompose-lambda-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7961,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp));
t3=C_a_i_record4(&a,4,lf[158],lf[159],C_SCHEME_FALSE,C_SCHEME_FALSE);
t4=t3;
t5=C_mutate((C_word*)lf[160]+1 /* (set! scheme#interaction-environment ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8046,a[2]=t4,a[3]=((C_word)li158),tmp=(C_word)a,a+=4,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8050,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11733,a[2]=((C_word)li264),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:822: ##sys#register-record-printer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[373]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[373]+1);
av2[1]=t6;
av2[2]=lf[374];
av2[3]=t7;
tp(4,av2);}}

/* ##sys#decompose-lambda-list in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7961(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_7961,4,av);}
a=C_alloc(12);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7964,a[2]=t2,a[3]=((C_word)li155),tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7974,a[2]=t3,a[3]=t4,a[4]=t6,a[5]=((C_word)li156),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_7974(t8,t1,t2,C_SCHEME_END_OF_LIST,C_fix(0));}

/* err in decompose-lambda-list in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_7964(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_7964,2,t0,t1);}
t2=C_set_block_item(lf[156] /* ##sys#syntax-error-culprit */,0,C_SCHEME_FALSE);
/* eval.scm:807: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[62]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[62]+1);
av2[1]=t1;
av2[2]=lf[157];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}

/* loop in decompose-lambda-list in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_7974(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_7974,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7988,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:810: reverse */
t7=*((C_word*)lf[96]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=C_blockp(t2);
if(C_truep(C_i_not(t6))){
/* eval.scm:811: err */
t7=((C_word*)t0)[3];
f_7964(t7,t1);}
else{
if(C_truep(C_symbolp(t2))){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8007,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t8=C_a_i_cons(&a,2,t2,t3);
/* eval.scm:812: reverse */
t9=*((C_word*)lf[96]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t7=C_pairp(t2);
if(C_truep(C_i_not(t7))){
/* eval.scm:813: err */
t8=((C_word*)t0)[3];
f_7964(t8,t1);}
else{
t8=C_slot(t2,C_fix(1));
t9=C_slot(t2,C_fix(0));
t10=C_a_i_cons(&a,2,t9,t3);
t11=C_fixnum_plus(t4,C_fix(1));
/* eval.scm:814: loop */
t13=t1;
t14=t8;
t15=t10;
t16=t11;
t1=t13;
t2=t14;
t3=t15;
t4=t16;
goto loop;}}}}}

/* k7986 in loop in decompose-lambda-list in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_7988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7988,2,av);}
/* eval.scm:810: k */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* k8005 in loop in decompose-lambda-list in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_8007(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8007,2,av);}
/* eval.scm:812: k */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* scheme#interaction-environment in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_8046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8046,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_8050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8050,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8053,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:827: chicken.module#module-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[155]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[155]+1);
av2[1]=t2;
av2[2]=lf[368];
av2[3]=lf[369];
tp(4,av2);}}

/* k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_8053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_8053,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8056,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:828: chicken.module#module-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[155]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[155]+1);
av2[1]=t3;
av2[2]=lf[366];
av2[3]=lf[367];
tp(4,av2);}}

/* k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_8056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_8056,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8059,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:829: chicken.module#module-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[155]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[155]+1);
av2[1]=t3;
av2[2]=lf[364];
av2[3]=lf[365];
tp(4,av2);}}

/* k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_8059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_8059,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8062,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:830: chicken.module#module-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[155]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[155]+1);
av2[1]=t3;
av2[2]=lf[362];
av2[3]=lf[363];
tp(4,av2);}}

/* k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_8062,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8064,a[2]=((C_word)li160),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11727,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t5=C_slot(((C_word*)t0)[2],C_fix(2));
/* eval.scm:854: strip */
f_8064(t4,t5);}

/* strip in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_8064(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_8064,2,t1,t2);}
a=C_alloc(6);
t3=C_i_check_list_2(t2,lf[161]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8073,a[2]=t5,a[3]=((C_word)li159),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_8073(t7,t1,t2);}

/* foldr1536 in strip in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_8073(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_8073,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8104,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
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
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8102 in foldr1536 in strip in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_8104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8104,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_i_car(((C_word*)t0)[3]);
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep((C_truep(C_eqp(t3,lf[162]))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,lf[163]))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,lf[164]))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,lf[165]))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,lf[86]))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,lf[166]))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,lf[167]))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,lf[168]))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,lf[169]))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,lf[170]))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,lf[99]))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,lf[171]))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,lf[172]))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,lf[173]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))))))))))))?t1:C_a_i_cons(&a,2,((C_word*)t0)[3],t1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* scheme#scheme-report-environment in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_8122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_8122,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8126,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:860: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[177]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[177]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[175];
tp(4,av2);}}

/* k8124 in scheme#scheme-report-environment in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_8126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8126,2,av);}
t2=((C_word*)t0)[2];
switch(t2){
case C_fix(4):
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
case C_fix(5):
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
default:
/* eval.scm:865: ##sys#error */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[175];
av2[3]=lf[176];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* scheme#null-environment in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_8147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_8147,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8151,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:870: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[177]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[177]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[179];
tp(4,av2);}}

/* k8149 in scheme#null-environment in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_8151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8151,2,av);}
t2=((C_word*)t0)[2];
switch(t2){
case C_fix(4):
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
case C_fix(5):
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
default:
/* eval.scm:875: ##sys#error */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[179];
av2[3]=lf[180];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* loop in chicken.load#provided? in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_fcall f_8547(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8547,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8569,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_i_car(t2);
/* mini-srfi-1.scm:82: pred */
t6=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}}

/* k8567 in loop in chicken.load#provided? in k10156 in k10147 in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_8569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8569,2,av);}
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
f_8547(t4,((C_word*)t0)[2],t3);}}

/* chicken.load#any in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_8575(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_8575,3,t1,t2,t3);}
a=C_alloc(7);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8581,a[2]=t5,a[3]=t2,a[4]=((C_word)li163),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_8581(t7,t1,t3);}

/* loop in chicken.load#any in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_8581(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8581,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8591,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* mini-srfi-1.scm:88: pred */
t5=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}}

/* k8589 in loop in chicken.load#any in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_8591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8591,2,av);}
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
f_8581(t4,((C_word*)t0)[2],t3);}}

/* k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_9467(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_9467,2,t0,t1);}
a=C_alloc(3);
t2=C_mutate(&lf[193] /* (set! chicken.load#load-library-extension ...) */,t1);
t3=C_mutate((C_word*)lf[194]+1 /* (set! ##sys#load-dynamic-extension ...) */,lf[185]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9473,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:951: chicken.platform#software-version */
t5=*((C_word*)lf[353]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_9473(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_9473,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9476,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_eqp(t1,lf[350]);
if(C_truep(t3)){
t4=t2;
f_9476(t4,lf[351]);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11649,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11653,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[238]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_NAME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_9476(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_9476,2,t0,t1);}
a=C_alloc(15);
t2=C_mutate(&lf[195] /* (set! chicken.load#default-dynamic-load-libraries ...) */,t1);
t3=C_mutate((C_word*)lf[93]+1 /* (set! ##sys#provide ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9478,a[2]=((C_word)li165),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[196]+1 /* (set! ##sys#provided? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9481,a[2]=((C_word)li166),tmp=(C_word)a,a+=3,tmp));
t5=(C_truep(*((C_word*)lf[197]+1))?lf[198]:lf[199]);
t6=C_mutate(&lf[200] /* (set! chicken.load#path-separators ...) */,t5);
t7=C_mutate(&lf[201] /* (set! chicken.load#path-separator-index/right ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9488,a[2]=((C_word)li168),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate(&lf[202] /* (set! chicken.load#make-relative-pathname ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9523,a[2]=((C_word)li169),tmp=(C_word)a,a+=3,tmp));
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9566,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t10=C_i_debug_modep();
/* eval.scm:986: chicken.base#make-parameter */
t11=*((C_word*)lf[347]+1);{
C_word av2[3];
av2[0]=t11;
av2[1]=t9;
av2[2]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}

/* ##sys#provide in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_9478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void *)f_9478,3,av);}
a=C_alloc(8);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_provide(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##sys#provided? in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_9481(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9481,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_providedp(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.load#path-separator-index/right in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_9488(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9488,2,t1,t2);}
a=C_alloc(4);
t3=C_block_size(t2);
t4=C_fixnum_difference(t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9498,a[2]=t2,a[3]=((C_word)li167),tmp=(C_word)a,a+=4,tmp);
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=(
  f_9498(t5,t4)
);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* loop in chicken.load#path-separator-index/right in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 in ... */
static C_word C_fcall f_9498(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:{}
t2=C_subchar(((C_word*)t0)[2],t1);
t3=lf[200];
if(C_truep(C_u_i_memq(t2,lf[200]))){
t4=t1;
return(t4);}
else{
if(C_truep(C_fixnum_lessp(C_fix(0),t1))){
t4=C_fixnum_difference(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* chicken.load#make-relative-pathname in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_fcall f_9523(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_9523,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9527,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_stringp(t2))){
t5=C_block_size(t3);
if(C_truep(C_i_fixnum_positivep(t5))){
t6=C_subchar(t3,C_fix(0));
t7=lf[200];
t8=C_u_i_memq(t6,lf[200]);
if(C_truep(C_i_not(t8))){
/* eval.scm:980: path-separator-index/right */
f_9488(t4,t2);}
else{
t9=t4;{
C_word av2[2];
av2[0]=t9;
av2[1]=C_SCHEME_FALSE;
f_9527(2,av2);}}}
else{
t6=t4;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_9527(2,av2);}}}
else{
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_9527(2,av2);}}}

/* k9525 in chicken.load#make-relative-pathname in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 in ... */
static void C_ccall f_9527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_9527,2,av);}
a=C_alloc(4);
if(C_truep(C_i_not(t1))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9540,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:981: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[205]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[205]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=t1;
tp(5,av2);}}}

/* k9538 in k9525 in chicken.load#make-relative-pathname in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in ... */
static void C_ccall f_9540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9540,2,av);}
/* eval.scm:981: scheme#string-append */
t2=*((C_word*)lf[203]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[204];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 */
static void C_ccall f_9566(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,5)))){
C_save_and_reclaim((void *)f_9566,2,av);}
a=C_alloc(25);
t2=C_mutate((C_word*)lf[206]+1 /* (set! chicken.load#load-verbose ...) */,t1);
t3=C_set_block_item(lf[207] /* ##sys#current-load-filename */,0,C_SCHEME_FALSE);
t4=C_set_block_item(lf[208] /* ##sys#dload-disabled */,0,C_SCHEME_FALSE);
t5=C_mutate((C_word*)lf[209]+1 /* (set! chicken.load#set-dynamic-load-mode! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9570,a[2]=((C_word)li171),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate(&lf[218] /* (set! chicken.load#c-toplevel ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9670,a[2]=((C_word)li172),tmp=(C_word)a,a+=3,tmp));
t7=*((C_word*)lf[153]+1);
t8=C_mutate(&lf[225] /* (set! chicken.load#load/internal ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9684,a[2]=t7,a[3]=((C_word)li187),tmp=(C_word)a,a+=4,tmp));
t9=C_mutate((C_word*)lf[254]+1 /* (set! scheme#load ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10090,a[2]=((C_word)li188),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[255]+1 /* (set! chicken.load#load-relative ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10105,a[2]=((C_word)li189),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[256]+1 /* (set! chicken.load#load-noisily ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10123,a[2]=((C_word)li193),tmp=(C_word)a,a+=3,tmp));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10149,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_mk_bool(C_USES_SONAME))){
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11637,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
t14=C_fix((C_word)C_BINARY_VERSION);
/* ##sys#fixnum->string */
t15=*((C_word*)lf[349]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t15;
av2[1]=t13;
av2[2]=t14;
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}
else{
t13=t12;{
C_word *av2=av;
av2[0]=t13;
av2[1]=lf[193];
f_10149(2,av2);}}}

/* chicken.load#set-dynamic-load-mode! in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 in ... */
static void C_ccall f_9570(C_word c,C_word *av){
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
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_9570,3,av);}
a=C_alloc(20);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?t2:C_a_i_list1(&a,1,t2));
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_TRUE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9577,a[2]=t1,a[3]=t6,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9582,a[2]=t11,a[3]=t8,a[4]=t6,a[5]=((C_word)li170),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_9582(t13,t9,t4);}

/* k9575 in chicken.load#set-dynamic-load-mode! in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in ... */
static void C_ccall f_9577(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9577,2,av);}
/* eval.scm:1006: ##sys#set-dlopen-flags! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[210]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[210]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=((C_word*)((C_word*)t0)[4])[1];
tp(4,av2);}}

/* loop in chicken.load#set-dynamic-load-mode! in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in ... */
static void C_fcall f_9582(C_word t0,C_word t1,C_word t2){
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
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_9582,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9595,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(t3,lf[211]);
if(C_truep(t5)){
t6=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t7=C_slot(t2,C_fix(1));
/* eval.scm:1005: loop */
t12=t1;
t13=t7;
t1=t12;
t2=t13;
goto loop;}
else{
t6=C_eqp(t3,lf[212]);
if(C_truep(t6)){
t7=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_FALSE);
t8=C_slot(t2,C_fix(1));
/* eval.scm:1005: loop */
t12=t1;
t13=t8;
t1=t12;
t2=t13;
goto loop;}
else{
t7=C_eqp(t3,lf[213]);
if(C_truep(t7)){
t8=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_FALSE);
t9=C_slot(t2,C_fix(1));
/* eval.scm:1005: loop */
t12=t1;
t13=t9;
t1=t12;
t2=t13;
goto loop;}
else{
t8=C_eqp(t3,lf[214]);
if(C_truep(t8)){
t9=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_TRUE);
t10=C_slot(t2,C_fix(1));
/* eval.scm:1005: loop */
t12=t1;
t13=t10;
t1=t12;
t2=t13;
goto loop;}
else{
t9=C_slot(t2,C_fix(0));
/* eval.scm:1004: ##sys#signal-hook */
t10=*((C_word*)lf[215]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t4;
av2[2]=lf[216];
av2[3]=lf[217];
av2[4]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}}}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9593 in loop in chicken.load#set-dynamic-load-mode! in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in ... */
static void C_ccall f_9595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9595,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
/* eval.scm:1005: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9582(t3,((C_word*)t0)[4],t2);}

/* k9662 in chicken.load#c-toplevel in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in ... */
static void C_ccall f_9664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9664,2,av);}
/* eval.scm:1011: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[220]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[220]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[223];
tp(4,av2);}}

/* chicken.load#c-toplevel in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 in ... */
static void C_fcall f_9670(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_9670,3,t1,t2,t3);}
a=C_alloc(10);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9678,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9682,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=t5;
if(C_truep(C_i_not(t2))){
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=lf[222];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9664,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=C_slot(t2,C_fix(1));
/* eval.scm:1012: chicken.internal#string->c-identifier */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[224]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[224]+1);
av2[1]=t7;
av2[2]=t8;
tp(3,av2);}}}

/* k9676 in chicken.load#c-toplevel in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in ... */
static void C_ccall f_9678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9678,2,av);}
/* eval.scm:1016: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[219]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[219]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k9680 in chicken.load#c-toplevel in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in ... */
static void C_ccall f_9682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9682,2,av);}
/* eval.scm:1016: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[220]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[220]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[221];
av2[3]=t1;
tp(4,av2);}}

/* chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in k3613 in ... */
static void C_fcall f_9684(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t37;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,0,3)))){
C_save_and_reclaim_args((void *)trf_9684,5,t0,t1,t2,t3,t4);}
a=C_alloc(23);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_i_nullp(t14);
t16=(C_truep(t15)?C_SCHEME_FALSE:C_i_car(t14));
t17=t16;
t18=C_i_nullp(t14);
t19=(C_truep(t18)?C_SCHEME_END_OF_LIST:C_i_cdr(t14));
t20=C_i_nullp(t19);
t21=(C_truep(t20)?C_SCHEME_FALSE:C_i_car(t19));
t22=t21;
t23=C_i_nullp(t19);
t24=(C_truep(t23)?C_SCHEME_END_OF_LIST:C_i_cdr(t19));
t25=C_SCHEME_UNDEFINED;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_SCHEME_UNDEFINED;
t28=(*a=C_VECTOR_TYPE|1,a[1]=t27,tmp=(C_word)a,a+=2,tmp);
t29=C_SCHEME_UNDEFINED;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=C_SCHEME_UNDEFINED;
t32=(*a=C_VECTOR_TYPE|1,a[1]=t31,tmp=(C_word)a,a+=2,tmp);
t33=(C_truep(t3)?t3:((C_word*)t0)[2]);
t34=C_set_block_item(t26,0,t33);
t35=C_set_block_item(t28,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9727,a[2]=t22,a[3]=((C_word)li173),tmp=(C_word)a,a+=4,tmp));
t36=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9762,a[2]=t30,a[3]=t32,a[4]=t1,a[5]=t12,a[6]=t26,a[7]=t7,a[8]=t17,a[9]=t2,a[10]=t28,tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_not(*((C_word*)lf[208]+1)))){
/* eval.scm:1046: chicken.platform#feature? */
t37=*((C_word*)lf[252]+1);{
C_word av2[3];
av2[0]=t37;
av2[1]=t36;
av2[2]=lf[253];
((C_proc)(void*)(*((C_word*)t37+1)))(3,av2);}}
else{
t37=t36;{
C_word av2[2];
av2[0]=t37;
av2[1]=C_SCHEME_FALSE;
f_9762(2,av2);}}}

/* k9720 */
static void C_ccall f_9722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9722,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* eval.scm:1036: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[220]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[220]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[228];
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}}

/* f_9727 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in ... */
static void C_fcall f_9727(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_9727,3,t0,t1,t2);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9731,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9758,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=t2;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9722,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1034: path-separator-index/right */
f_9488(t7,t6);}

/* k9729 */
static void C_ccall f_9731(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_9731,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9734,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9754,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1040: c-toplevel */
f_9670(t4,((C_word*)t0)[3],lf[227]);}

/* k9732 in k9729 */
static void C_ccall f_9734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_9734,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9750,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1042: c-toplevel */
f_9670(t2,C_SCHEME_FALSE,lf[227]);}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* k9748 in k9732 in k9729 */
static void C_ccall f_9750(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9750,2,av);}
/* eval.scm:1042: ##sys#dload */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[226]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[226]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k9752 in k9729 */
static void C_ccall f_9754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9754,2,av);}
/* eval.scm:1040: ##sys#dload */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[226]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[226]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k9756 */
static void C_ccall f_9758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9758,2,av);}
/* eval.scm:1039: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[219]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[219]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[227];
tp(4,av2);}}

/* k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in k3616 in ... */
static void C_ccall f_9762(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_9762,2,av);}
a=C_alloc(16);
t2=C_set_block_item(((C_word*)t0)[2],0,t1);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9766,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[2],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9985,a[2]=t3,a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1049: chicken.base#port? */
t5=*((C_word*)lf[251]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in ... */
static void C_ccall f_9766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_9766,2,av);}
a=C_alloc(15);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9769,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9982,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1060: load-verbose */
t5=*((C_word*)lf[206]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_9769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_9769,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9772,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
if(C_truep(((C_word*)((C_word*)t0)[9])[1])){
/* eval.scm:1066: dload */
t3=((C_word*)((C_word*)t0)[10])[1];
f_9727(t3,t2,((C_word*)((C_word*)t0)[3])[1]);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_9772(2,av2);}}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_9772(2,av2);}}}

/* k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_9772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_9772,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9775,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9780,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word)li186),tmp=(C_word)a,a+=9,tmp);
t4=t3;
f_9780(t4,t2);}}

/* k9773 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_9775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9775,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_fcall f_9780(C_word t0,C_word t1){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(39,0,4)))){
C_save_and_reclaim_args((void *)trf_9780,2,t0,t1);}
a=C_alloc(39);
t2=C_SCHEME_TRUE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)((C_word*)t0)[2])[1];
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)((C_word*)t0)[2])[1];
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9786,a[2]=t9,a[3]=t11,a[4]=t13,a[5]=t3,a[6]=t5,a[7]=t7,a[8]=((C_word)li174),tmp=(C_word)a,a+=9,tmp);
t15=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9795,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word)li184),tmp=(C_word)a,a+=9,tmp);
t16=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9951,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=t11,a[7]=t13,a[8]=((C_word)li185),tmp=(C_word)a,a+=9,tmp);
/* eval.scm:1069: ##sys#dynamic-wind */
t17=*((C_word*)lf[47]+1);{
C_word av2[5];
av2[0]=t17;
av2[1]=t1;
av2[2]=t14;
av2[3]=t15;
av2[4]=t16;
((C_proc)(void*)(*((C_word*)t17+1)))(5,av2);}}

/* a9785 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in ... */
static void C_ccall f_9786(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9786,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[229]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[207]+1));
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,*((C_word*)lf[230]+1));
t5=C_mutate((C_word*)lf[229]+1 /* (set! ##sys#read-error-with-line-number ...) */,((C_word*)((C_word*)t0)[5])[1]);
t6=C_mutate((C_word*)lf[207]+1 /* (set! ##sys#current-load-filename ...) */,((C_word*)((C_word*)t0)[6])[1]);
t7=C_mutate((C_word*)lf[230]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[7])[1]);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* a9794 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in ... */
static void C_ccall f_9795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_9795,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9799,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* eval.scm:1072: open-input-file */
t3=*((C_word*)lf[241]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[7];
f_9799(2,av2);}}}

/* k9797 in a9794 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in ... */
static void C_ccall f_9799(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_9799,2,av);}
a=C_alloc(16);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9804,a[2]=((C_word)li175),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9807,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word)li182),tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9942,a[2]=t2,a[3]=((C_word)li183),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1073: ##sys#dynamic-wind */
t6=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[7];
av2[2]=t3;
av2[3]=t4;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* a9803 in k9797 in a9794 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in ... */
static void C_ccall f_9804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9804,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a9806 in k9797 in a9794 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in ... */
static void C_ccall f_9807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_9807,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9811,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:1076: scheme#peek-char */
t3=*((C_word*)lf[239]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k9809 in a9806 in k9797 in a9794 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in ... */
static void C_ccall f_9811(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_9811,2,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9814,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_eqp(t1,C_make_character(127));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9929,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9933,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[238]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_dlerror);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_9814(2,av2);}}}

/* k9812 in k9809 in a9806 in k9797 in a9794 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in ... */
static void C_ccall f_9814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_9814,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9817,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:1084: read */
t3=*((C_word*)lf[231]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k9815 in k9812 in k9809 in a9806 in k9797 in a9794 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in ... */
static void C_ccall f_9817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_9817,2,av);}
a=C_alloc(11);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9822,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word)li181),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_9822(t5,((C_word*)t0)[7],t1);}

/* doloop2351 in k9815 in k9812 in k9809 in a9806 in k9797 in a9794 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in ... */
static void C_fcall f_9822(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_9822,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_eofp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9832,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[7])){
/* eval.scm:1087: printer */
t4=((C_word*)t0)[7];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_9832(2,av2);}}}}

/* k9830 in doloop2351 in k9815 in k9812 in k9809 in a9806 in k9797 in a9794 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in ... */
static void C_ccall f_9832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_9832,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9835,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9844,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word)li178),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9878,a[2]=((C_word*)t0)[8],a[3]=((C_word)li180),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1088: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t2;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* k9833 in k9830 in doloop2351 in k9815 in k9812 in k9809 in a9806 in k9797 in a9794 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in ... */
static void C_ccall f_9835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9835,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9842,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1085: read */
t3=*((C_word*)lf[231]+1);{
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

/* k9840 in k9833 in k9830 in doloop2351 in k9815 in k9812 in k9809 in a9806 in k9797 in a9794 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in ... */
static void C_ccall f_9842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9842,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_9822(t2,((C_word*)t0)[3],t1);}

/* a9843 in k9830 in doloop2351 in k9815 in k9812 in k9809 in a9806 in k9797 in a9794 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in ... */
static void C_ccall f_9844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_9844,2,av);}
a=C_alloc(5);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9851,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1091: ##sys#start-timer */
t3=*((C_word*)lf[234]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* eval.scm:1092: evalproc */
t2=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}}

/* k9849 in a9843 in k9830 in doloop2351 in k9815 in k9812 in k9809 in a9806 in k9797 in a9794 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in ... */
static void C_ccall f_9851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_9851,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9856,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li176),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9862,a[2]=((C_word)li177),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1091: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a9855 in k9849 in a9843 in k9830 in doloop2351 in k9815 in k9812 in k9809 in a9806 in k9797 in a9794 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in ... */
static void C_ccall f_9856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9856,2,av);}
/* eval.scm:1091: evalproc */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* a9861 in k9849 in a9843 in k9830 in doloop2351 in k9815 in k9812 in k9809 in a9806 in k9797 in a9794 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in ... */
static void C_ccall f_9862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +7,c,2)))){
C_save_and_reclaim((void*)f_9862,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+7);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9866,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9873,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1091: ##sys#stop-timer */
t5=*((C_word*)lf[233]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k9864 in a9861 in k9849 in a9843 in k9830 in doloop2351 in k9815 in k9812 in k9809 in a9806 in k9797 in a9794 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in ... */
static void C_ccall f_9866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9866,2,av);}{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
C_apply_values(3,av2);}}

/* k9871 in a9861 in k9849 in a9843 in k9830 in doloop2351 in k9815 in k9812 in k9809 in a9806 in k9797 in a9794 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in ... */
static void C_ccall f_9873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9873,2,av);}
/* eval.scm:1091: ##sys#display-times */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[232]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[232]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* a9877 in k9830 in doloop2351 in k9815 in k9812 in k9809 in a9806 in k9797 in a9794 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in ... */
static void C_ccall f_9878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_9878,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+6);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
if(C_truep(((C_word*)t0)[2])){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9895,a[2]=t4,a[3]=((C_word)li179),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_9895(t6,t1,t2);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9885 in for-each-loop2361 in a9877 in k9830 in doloop2351 in k9815 in k9812 in k9809 in a9806 in k9797 in a9794 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in ... */
static void C_ccall f_9887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9887,2,av);}
/* eval.scm:1098: newline */
t2=*((C_word*)lf[235]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop2361 in a9877 in k9830 in doloop2351 in k9815 in k9812 in k9809 in a9806 in k9797 in a9794 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in ... */
static void C_fcall f_9895(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_9895,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9905,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9887,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1097: write */
t7=*((C_word*)lf[14]+1);{
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

/* k9903 in for-each-loop2361 in a9877 in k9830 in doloop2351 in k9815 in k9812 in k9809 in a9806 in k9797 in a9794 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in ... */
static void C_ccall f_9905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9905,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_9895(t3,((C_word*)t0)[4],t2);}

/* k9927 in k9809 in a9806 in k9797 in a9794 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in ... */
static void C_ccall f_9929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9929,2,av);}
/* eval.scm:1078: ##sys#error */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[227];
av2[3]=t1;
av2[4]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k9931 in k9809 in a9806 in k9797 in a9794 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in ... */
static void C_ccall f_9933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9933,2,av);}
if(C_truep(t1)){
t2=t1;
/* eval.scm:1080: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[220]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[220]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[236];
av2[3]=t2;
tp(4,av2);}}
else{
/* eval.scm:1080: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[220]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[220]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[236];
av2[3]=lf[237];
tp(4,av2);}}}

/* a9941 in k9797 in a9794 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in ... */
static void C_ccall f_9942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9942,2,av);}
/* eval.scm:1101: close-input-port */
t2=*((C_word*)lf[240]+1);{
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

/* a9950 in a9779 in k9770 in k9767 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in ... */
static void C_ccall f_9951(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9951,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[229]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[207]+1));
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,*((C_word*)lf[230]+1));
t5=C_mutate((C_word*)lf[229]+1 /* (set! ##sys#read-error-with-line-number ...) */,((C_word*)((C_word*)t0)[5])[1]);
t6=C_mutate((C_word*)lf[207]+1 /* (set! ##sys#current-load-filename ...) */,((C_word*)((C_word*)t0)[6])[1]);
t7=C_mutate((C_word*)lf[230]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[7])[1]);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k9968 in k9980 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in ... */
static void C_ccall f_9970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9970,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9973,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1062: display */
t3=*((C_word*)lf[243]+1);{
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

/* k9971 in k9968 in k9980 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in ... */
static void C_ccall f_9973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9973,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9976,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1063: display */
t3=*((C_word*)lf[243]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[244];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k9974 in k9971 in k9968 in k9980 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in ... */
static void C_ccall f_9976(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9976,2,av);}
/* eval.scm:1064: chicken.base#flush-output */
t2=*((C_word*)lf[242]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9980 in k9764 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in ... */
static void C_ccall f_9982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9982,2,av);}
a=C_alloc(4);
t2=(C_truep(t1)?((C_word*)((C_word*)t0)[2])[1]:C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9970,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1061: display */
t4=*((C_word*)lf[243]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[245];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_9769(2,av2);}}}

/* k9983 in k9760 in chicken.load#load/internal in k9564 in k9474 in k9471 in k9465 in k11697 in k11701 in k11709 in k11717 in k11725 in k8060 in k8057 in k8054 in k8051 in k8048 in k7957 in k7938 in k3666 in k3622 in k3619 in ... */
static void C_ccall f_9985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_9985,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_9766(2,av2);}}
else{
t2=C_i_stringp(((C_word*)t0)[3]);
if(C_truep(C_i_not(t2))){
/* eval.scm:1051: ##sys#signal-hook */
t3=*((C_word*)lf[215]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[246];
av2[3]=lf[227];
av2[4]=lf[247];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10000,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1052: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[250]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[250]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[227];
tp(6,av2);}}}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_eval_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("eval"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_eval_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(2444))){
C_save(t1);
C_rereclaim2(2444*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,379);
lf[0]=C_h_intern(&lf[0],4, C_text("eval"));
lf[1]=C_h_intern(&lf[1],13, C_text("chicken.eval#"));
lf[2]=C_h_intern(&lf[2],19, C_text("\003sysunbound-in-eval"));
lf[3]=C_h_intern(&lf[3],20, C_text("\003syseval-debug-level"));
lf[5]=C_h_intern(&lf[5],7, C_text("\003sysget"));
lf[6]=C_h_intern(&lf[6],16, C_text("\004coremacro-alias"));
lf[7]=C_h_intern(&lf[7],13, C_text("scheme#values"));
lf[8]=C_h_intern(&lf[8],14, C_text("scheme#symbol\077"));
lf[9]=C_h_intern(&lf[9],23, C_text("\003syscurrent-environment"));
lf[10]=C_h_intern(&lf[10],9, C_text("frameinfo"));
lf[11]=C_h_intern(&lf[11],18, C_text("\003syscurrent-thread"));
lf[12]=C_h_intern(&lf[12],20, C_text("\003sysmake-lambda-info"));
lf[13]=C_h_intern(&lf[13],30, C_text("chicken.base#get-output-string"));
lf[14]=C_h_intern(&lf[14],12, C_text("scheme#write"));
lf[15]=C_h_intern(&lf[15],31, C_text("chicken.base#open-output-string"));
lf[16]=C_h_intern(&lf[16],19, C_text("\003sysdecorate-lambda"));
lf[17]=C_h_intern(&lf[17],9, C_text("\003syserror"));
lf[18]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020unbound variable"));
lf[19]=C_h_intern(&lf[19],32, C_text("\003syssymbol-has-toplevel-binding\077"));
lf[20]=C_h_intern(&lf[20],21, C_text("\003sysalias-global-hook"));
lf[21]=C_h_intern(&lf[21],24, C_text("\003syssyntax-error/context"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031illegal non-atomic object"));
lf[23]=C_h_intern(&lf[23],10, C_text("\004corequote"));
lf[24]=C_h_intern(&lf[24],27, C_text("chicken.syntax#strip-syntax"));
lf[25]=C_h_intern(&lf[25],11, C_text("\004coresyntax"));
lf[26]=C_h_intern(&lf[26],10, C_text("\004corecheck"));
lf[27]=C_h_intern(&lf[27],14, C_text("\004coreimmutable"));
lf[28]=C_h_intern(&lf[28],14, C_text("\004coreundefined"));
lf[29]=C_h_intern(&lf[29],7, C_text("\004coreif"));
lf[30]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[31]=C_h_intern(&lf[31],10, C_text("\004corebegin"));
lf[32]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[33]=C_h_intern(&lf[33],31, C_text("\004coreensure-toplevel-definition"));
lf[34]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[35]=C_decode_literal(C_heaptop,C_text("\376B\000\0008toplevel definition in non-toplevel context for variable"));
lf[36]=C_h_intern(&lf[36],9, C_text("\004coreset!"));
lf[37]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032environment is not mutable"));
lf[38]=C_h_intern(&lf[38],19, C_text("\003sysnotices-enabled"));
lf[39]=C_h_intern(&lf[39],10, C_text("\003sysnotice"));
lf[40]=C_decode_literal(C_heaptop,C_text("\376B\000\000$assignment to imported value binding"));
lf[41]=C_h_intern(&lf[41],8, C_text("\004corelet"));
lf[42]=C_h_intern(&lf[42],3, C_text("map"));
lf[43]=C_h_intern(&lf[43],12, C_text("scheme#cadar"));
lf[44]=C_h_intern(&lf[44],13, C_text("scheme#cadadr"));
lf[45]=C_h_intern(&lf[45],15, C_text("\003sysmake-vector"));
lf[46]=C_h_intern(&lf[46],21, C_text("\003syscanonicalize-body"));
lf[47]=C_h_intern(&lf[47],16, C_text("\003sysdynamic-wind"));
lf[48]=C_h_intern(&lf[48],13, C_text("\003sysextend-se"));
lf[49]=C_h_intern(&lf[49],19, C_text("chicken.base#gensym"));
lf[50]=C_h_intern(&lf[50],12, C_text("\004coreletrec\052"));
lf[51]=C_h_intern(&lf[51],10, C_text("\003sysappend"));
lf[52]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[53]=C_h_intern(&lf[53],11, C_text("\004coreletrec"));
lf[54]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[55]=C_h_intern(&lf[55],11, C_text("\004corelambda"));
lf[56]=C_h_intern(&lf[56],1, C_text("\077"));
lf[57]=C_h_intern(&lf[57],10, C_text("\003sysvector"));
lf[58]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022bad argument count"));
lf[59]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022bad argument count"));
lf[60]=C_h_intern(&lf[60],25, C_text("\003sysdecompose-lambda-list"));
lf[61]=C_h_intern(&lf[61],31, C_text("\003sysexpand-extended-lambda-list"));
lf[62]=C_h_intern(&lf[62],21, C_text("\003syssyntax-error-hook"));
lf[63]=C_h_intern(&lf[63],25, C_text("\003sysextended-lambda-list\077"));
lf[64]=C_h_intern(&lf[64],16, C_text("\003syscheck-syntax"));
lf[65]=C_h_intern(&lf[65],6, C_text("lambda"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001"));
lf[67]=C_h_intern(&lf[67],15, C_text("\004corelet-syntax"));
lf[68]=C_h_intern(&lf[68],13, C_text("scheme#append"));
lf[69]=C_h_intern(&lf[69],22, C_text("\003sysensure-transformer"));
lf[70]=C_h_intern(&lf[70],13, C_text("\003syseval/meta"));
lf[71]=C_h_intern(&lf[71],18, C_text("\004coreletrec-syntax"));
lf[72]=C_h_intern(&lf[72],8, C_text("for-each"));
lf[73]=C_h_intern(&lf[73],18, C_text("\004coredefine-syntax"));
lf[74]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[75]=C_h_intern(&lf[75],28, C_text("\003sysextend-macro-environment"));
lf[76]=C_h_intern(&lf[76],26, C_text("\003sysregister-syntax-export"));
lf[77]=C_h_intern(&lf[77],18, C_text("\003syscurrent-module"));
lf[78]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032environment is not mutable"));
lf[79]=C_h_intern(&lf[79],27, C_text("\004coredefine-compiler-syntax"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[81]=C_h_intern(&lf[81],24, C_text("\004corelet-compiler-syntax"));
lf[82]=C_h_intern(&lf[82],12, C_text("\004coreinclude"));
lf[83]=C_h_intern(&lf[83],27, C_text("\003sysinclude-forms-from-file"));
lf[84]=C_h_intern(&lf[84],21, C_text("\004corelet-module-alias"));
lf[85]=C_h_intern(&lf[85],23, C_text("\003syswith-module-aliases"));
lf[86]=C_h_intern(&lf[86],7, C_text("functor"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\006symbol\376\377\016"));
lf[88]=C_h_intern(&lf[88],11, C_text("\004coremodule"));
lf[89]=C_h_intern(&lf[89],21, C_text("\003sysmacro-environment"));
lf[90]=C_h_intern(&lf[90],28, C_text("\003sysmodule-alias-environment"));
lf[91]=C_h_intern(&lf[91],29, C_text("\003sysinitial-macro-environment"));
lf[92]=C_h_intern(&lf[92],19, C_text("\003sysundefined-value"));
lf[93]=C_h_intern(&lf[93],11, C_text("\003sysprovide"));
lf[94]=C_h_intern(&lf[94],35, C_text("chicken.internal#module-requirement"));
lf[95]=C_h_intern(&lf[95],19, C_text("\003sysfinalize-module"));
lf[96]=C_h_intern(&lf[96],14, C_text("scheme#reverse"));
lf[97]=C_h_intern(&lf[97],25, C_text("\003syswith-property-restore"));
lf[98]=C_h_intern(&lf[98],19, C_text("\003sysregister-module"));
lf[99]=C_h_intern(&lf[99],6, C_text("module"));
lf[100]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031modules may not be nested"));
lf[101]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025invalid export syntax"));
lf[102]=C_h_intern(&lf[102],16, C_text("\004coreloop-lambda"));
lf[103]=C_h_intern(&lf[103],12, C_text("\004coreprovide"));
lf[104]=C_h_intern(&lf[104],23, C_text("\004corerequire-for-syntax"));
lf[105]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[106]=C_h_intern(&lf[106],27, C_text("chicken.load#load-extension"));
lf[107]=C_h_intern(&lf[107],7, C_text("require"));
lf[108]=C_h_intern(&lf[108],12, C_text("\004corerequire"));
lf[109]=C_h_intern(&lf[109],19, C_text("\003sysprocess-require"));
lf[110]=C_h_intern(&lf[110],24, C_text("\004coreelaborationtimeonly"));
lf[111]=C_h_intern(&lf[111],23, C_text("\004coreelaborationtimetoo"));
lf[112]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[113]=C_h_intern(&lf[113],19, C_text("\004corecompiletimetoo"));
lf[114]=C_h_intern(&lf[114],20, C_text("\004corecompiletimeonly"));
lf[115]=C_h_intern(&lf[115],13, C_text("\004corecallunit"));
lf[116]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[117]=C_h_intern(&lf[117],12, C_text("\004coredeclare"));
lf[118]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[119]=C_decode_literal(C_heaptop,C_text("\376B\000\000,declarations are ignored in interpreted code"));
lf[120]=C_h_intern(&lf[120],18, C_text("\004coredefine-inline"));
lf[121]=C_h_intern(&lf[121],20, C_text("\004coredefine-constant"));
lf[122]=C_h_intern(&lf[122],6, C_text("define"));
lf[123]=C_h_intern(&lf[123],14, C_text("\004coreprimitive"));
lf[124]=C_decode_literal(C_heaptop,C_text("\376B\000\000%cannot evaluate compiler-special-form"));
lf[125]=C_h_intern(&lf[125],8, C_text("\004coreapp"));
lf[126]=C_h_intern(&lf[126],8, C_text("\004corethe"));
lf[127]=C_h_intern(&lf[127],13, C_text("\004coretypecase"));
lf[128]=C_h_intern(&lf[128],4, C_text("else"));
lf[129]=C_h_intern(&lf[129],17, C_text("compiler-typecase"));
lf[130]=C_decode_literal(C_heaptop,C_text("\376B\000\0007no `else-clause\047 in unresolved `compiler-typecase\047 form"));
lf[131]=C_h_intern(&lf[131],18, C_text("\003syssyntax-context"));
lf[132]=C_h_intern(&lf[132],11, C_text("\004coreinline"));
lf[133]=C_h_intern(&lf[133],20, C_text("\004coreinline_allocate"));
lf[134]=C_h_intern(&lf[134],19, C_text("\004coreforeign-lambda"));
lf[135]=C_h_intern(&lf[135],28, C_text("\004coredefine-foreign-variable"));
lf[136]=C_h_intern(&lf[136],29, C_text("\004coredefine-external-variable"));
lf[137]=C_h_intern(&lf[137],17, C_text("\004corelet-location"));
lf[138]=C_h_intern(&lf[138],22, C_text("\004coreforeign-primitive"));
lf[139]=C_h_intern(&lf[139],13, C_text("\004corelocation"));
lf[140]=C_h_intern(&lf[140],20, C_text("\004coreforeign-lambda\052"));
lf[141]=C_h_intern(&lf[141],24, C_text("\004coredefine-foreign-type"));
lf[142]=C_h_intern(&lf[142],21, C_text("chicken.syntax#expand"));
lf[143]=C_h_intern(&lf[143],18, C_text("\003syssrfi-4-vector\077"));
lf[144]=C_h_intern(&lf[144],18, C_text("chicken.blob#blob\077"));
lf[145]=C_h_intern(&lf[145],11, C_text("\003sysnumber\077"));
lf[146]=C_h_intern(&lf[146],24, C_text("chicken.keyword#keyword\077"));
lf[147]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024malformed expression"));
lf[148]=C_h_intern(&lf[148],26, C_text("\003sysmeta-macro-environment"));
lf[149]=C_h_intern(&lf[149],28, C_text("\003syscurrent-meta-environment"));
lf[150]=C_h_intern(&lf[150],19, C_text("scheme#dynamic-wind"));
lf[151]=C_h_intern(&lf[151],17, C_text("chicken.base#void"));
lf[152]=C_h_intern(&lf[152],25, C_text("chicken.eval#eval-handler"));
lf[153]=C_h_intern(&lf[153],11, C_text("scheme#eval"));
lf[154]=C_h_intern(&lf[154],31, C_text("chicken.eval#module-environment"));
lf[155]=C_h_intern(&lf[155],33, C_text("chicken.module#module-environment"));
lf[156]=C_h_intern(&lf[156],24, C_text("\003syssyntax-error-culprit"));
lf[157]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032illegal lambda-list syntax"));
lf[158]=C_h_intern(&lf[158],11, C_text("environment"));
lf[159]=C_h_intern(&lf[159],23, C_text("interaction-environment"));
lf[160]=C_h_intern(&lf[160],30, C_text("scheme#interaction-environment"));
lf[161]=C_h_intern(&lf[161],5, C_text("foldr"));
lf[162]=C_h_intern(&lf[162],11, C_text("cond-expand"));
lf[163]=C_h_intern(&lf[163],16, C_text("define-interface"));
lf[164]=C_h_intern(&lf[164],11, C_text("delay-force"));
lf[165]=C_h_intern(&lf[165],6, C_text("export"));
lf[166]=C_h_intern(&lf[166],6, C_text("import"));
lf[167]=C_h_intern(&lf[167],17, C_text("import-for-syntax"));
lf[168]=C_h_intern(&lf[168],13, C_text("import-syntax"));
lf[169]=C_h_intern(&lf[169],24, C_text("import-syntax-for-syntax"));
lf[170]=C_h_intern(&lf[170],7, C_text("letrec\052"));
lf[171]=C_h_intern(&lf[171],8, C_text("reexport"));
lf[172]=C_h_intern(&lf[172],15, C_text("require-library"));
lf[173]=C_h_intern(&lf[173],6, C_text("syntax"));
lf[174]=C_h_intern(&lf[174],32, C_text("scheme#scheme-report-environment"));
lf[175]=C_h_intern(&lf[175],25, C_text("scheme-report-environment"));
lf[176]=C_decode_literal(C_heaptop,C_text("\376B\000\000-unsupported scheme report environment version"));
lf[177]=C_h_intern(&lf[177],16, C_text("\003syscheck-fixnum"));
lf[178]=C_h_intern(&lf[178],23, C_text("scheme#null-environment"));
lf[179]=C_h_intern(&lf[179],16, C_text("null-environment"));
lf[180]=C_decode_literal(C_heaptop,C_text("\376B\000\000$unsupported null environment version"));
lf[181]=C_h_intern(&lf[181],13, C_text("chicken.load#"));
lf[184]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016chicken-syntax\376\003\000\000\002\376\001\000\000\022chicken-ffi-syntax\376\003\000\000\002\376\001\000\000\014continuation\376\003\000\000\002\376"
"\001\000\000\017data-structures\376\003\000\000\002\376\001\000\000\017debugger-client\376\003\000\000\002\376\001\000\000\004eval\376\003\000\000\002\376\001\000\000\014eval-modules"
"\376\003\000\000\002\376\001\000\000\006expand\376\003\000\000\002\376\001\000\000\006extras\376\003\000\000\002\376\001\000\000\004file\376\003\000\000\002\376\001\000\000\010internal\376\003\000\000\002\376\001\000\000\007irrege"
"x\376\003\000\000\002\376\001\000\000\007library\376\003\000\000\002\376\001\000\000\007lolevel\376\003\000\000\002\376\001\000\000\010pathname\376\003\000\000\002\376\001\000\000\004port\376\003\000\000\002\376\001\000\000\005pos"
"ix\376\003\000\000\002\376\001\000\000\010profiler\376\003\000\000\002\376\001\000\000\013read-syntax\376\003\000\000\002\376\001\000\000\004repl\376\003\000\000\002\376\001\000\000\011scheduler\376\003\000\000\002\376"
"\001\000\000\006srfi-4\376\003\000\000\002\376\001\000\000\003tcp\376\377\016"));
lf[186]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003.so"));
lf[188]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004.scm"));
lf[189]=C_h_intern(&lf[189],7, C_text("windows"));
lf[190]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004.obj"));
lf[191]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002.o"));
lf[194]=C_h_intern(&lf[194],26, C_text("\003sysload-dynamic-extension"));
lf[196]=C_h_intern(&lf[196],13, C_text("\003sysprovided\077"));
lf[197]=C_h_intern(&lf[197],20, C_text("\003syswindows-platform"));
lf[198]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000/\376\377\016"));
lf[199]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000/\376\377\016"));
lf[203]=C_h_intern(&lf[203],20, C_text("scheme#string-append"));
lf[204]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[205]=C_h_intern(&lf[205],13, C_text("\003syssubstring"));
lf[206]=C_h_intern(&lf[206],25, C_text("chicken.load#load-verbose"));
lf[207]=C_h_intern(&lf[207],25, C_text("\003syscurrent-load-filename"));
lf[208]=C_h_intern(&lf[208],18, C_text("\003sysdload-disabled"));
lf[209]=C_h_intern(&lf[209],35, C_text("chicken.load#set-dynamic-load-mode!"));
lf[210]=C_h_intern(&lf[210],21, C_text("\003sysset-dlopen-flags!"));
lf[211]=C_h_intern(&lf[211],6, C_text("global"));
lf[212]=C_h_intern(&lf[212],5, C_text("local"));
lf[213]=C_h_intern(&lf[213],4, C_text("lazy"));
lf[214]=C_h_intern(&lf[214],3, C_text("now"));
lf[215]=C_h_intern(&lf[215],15, C_text("\003syssignal-hook"));
lf[216]=C_h_intern(&lf[216],22, C_text("set-dynamic-load-mode!"));
lf[217]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031invalid dynamic-load mode"));
lf[219]=C_h_intern(&lf[219],17, C_text("\003sysmake-c-string"));
lf[220]=C_h_intern(&lf[220],17, C_text("\003sysstring-append"));
lf[221]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002C_"));
lf[222]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010toplevel"));
lf[223]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011_toplevel"));
lf[224]=C_h_intern(&lf[224],37, C_text("chicken.internal#string->c-identifier"));
lf[226]=C_h_intern(&lf[226],9, C_text("\003sysdload"));
lf[227]=C_h_intern(&lf[227],4, C_text("load"));
lf[228]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002./"));
lf[229]=C_h_intern(&lf[229],31, C_text("\003sysread-error-with-line-number"));
lf[230]=C_h_intern(&lf[230],27, C_text("\003syscurrent-source-filename"));
lf[231]=C_h_intern(&lf[231],11, C_text("scheme#read"));
lf[232]=C_h_intern(&lf[232],17, C_text("\003sysdisplay-times"));
lf[233]=C_h_intern(&lf[233],14, C_text("\003sysstop-timer"));
lf[234]=C_h_intern(&lf[234],15, C_text("\003sysstart-timer"));
lf[235]=C_h_intern(&lf[235],14, C_text("scheme#newline"));
lf[236]=C_decode_literal(C_heaptop,C_text("\376B\000\000!unable to load compiled module - "));
lf[237]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016unknown reason"));
lf[238]=C_h_intern(&lf[238],17, C_text("\003syspeek-c-string"));
lf[239]=C_h_intern(&lf[239],16, C_text("scheme#peek-char"));
lf[240]=C_h_intern(&lf[240],23, C_text("scheme#close-input-port"));
lf[241]=C_h_intern(&lf[241],22, C_text("scheme#open-input-file"));
lf[242]=C_h_intern(&lf[242],25, C_text("chicken.base#flush-output"));
lf[243]=C_h_intern(&lf[243],14, C_text("scheme#display"));
lf[244]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005 ...\012"));
lf[245]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012; loading "));
lf[246]=C_h_intern(&lf[246],11, C_text("\000type-error"));
lf[247]=C_decode_literal(C_heaptop,C_text("\376B\000\000(bad argument type - not a port or string"));
lf[248]=C_h_intern(&lf[248],11, C_text("\000file-error"));
lf[249]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020cannot open file"));
lf[250]=C_h_intern(&lf[250],16, C_text("\003sysfile-exists\077"));
lf[251]=C_h_intern(&lf[251],18, C_text("chicken.base#port\077"));
lf[252]=C_h_intern(&lf[252],25, C_text("chicken.platform#feature\077"));
lf[253]=C_h_intern(&lf[253],6, C_text("\000dload"));
lf[254]=C_h_intern(&lf[254],11, C_text("scheme#load"));
lf[255]=C_h_intern(&lf[255],26, C_text("chicken.load#load-relative"));
lf[256]=C_h_intern(&lf[256],25, C_text("chicken.load#load-noisily"));
lf[257]=C_h_intern(&lf[257],15, C_text("\003sysget-keyword"));
lf[258]=C_h_intern(&lf[258],8, C_text("\000printer"));
lf[259]=C_h_intern(&lf[259],5, C_text("\000time"));
lf[260]=C_h_intern(&lf[260],10, C_text("\000evaluator"));
lf[261]=C_h_intern(&lf[261],35, C_text("chicken.load#dynamic-load-libraries"));
lf[263]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026unable to load library"));
lf[264]=C_h_intern(&lf[264],12, C_text("load-library"));
lf[265]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005 ...\012"));
lf[266]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022; loading library "));
lf[267]=C_h_intern(&lf[267],16, C_text("\003sysload-library"));
lf[268]=C_h_intern(&lf[268],25, C_text("chicken.load#load-library"));
lf[269]=C_h_intern(&lf[269],27, C_text("scheme#with-input-from-file"));
lf[270]=C_h_intern(&lf[270],18, C_text("chicken.base#print"));
lf[271]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014; including "));
lf[272]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004 ..."));
lf[273]=C_h_intern(&lf[273],7, C_text("include"));
lf[274]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020cannot open file"));
lf[275]=C_h_intern(&lf[275],28, C_text("\003sysresolve-include-filename"));
lf[276]=C_h_intern(&lf[276],31, C_text("\003syscanonicalize-extension-path"));
lf[277]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026invalid extension path"));
lf[278]=C_h_intern(&lf[278],18, C_text("\003syssymbol->string"));
lf[279]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[280]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[281]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[282]=C_h_intern(&lf[282],14, C_text("\003syssetup-mode"));
lf[284]=C_h_intern(&lf[284],22, C_text("chicken.load#find-file"));
lf[285]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[286]=C_h_intern(&lf[286],35, C_text("chicken.load#find-dynamic-extension"));
lf[287]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[288]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\001.\376\377\016"));
lf[289]=C_h_intern(&lf[289],21, C_text("\003sysinclude-pathnames"));
lf[290]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\001.\376\377\016"));
lf[291]=C_h_intern(&lf[291],32, C_text("chicken.platform#repository-path"));
lf[292]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025cannot load extension"));
lf[293]=C_h_intern(&lf[293],20, C_text("chicken.load#require"));
lf[294]=C_h_intern(&lf[294],20, C_text("chicken.load#provide"));
lf[295]=C_h_intern(&lf[295],7, C_text("provide"));
lf[296]=C_h_intern(&lf[296],22, C_text("chicken.load#provided\077"));
lf[297]=C_h_intern(&lf[297],9, C_text("provided\077"));
lf[298]=C_h_intern(&lf[298],34, C_text("chicken.load#find-static-extension"));
lf[299]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017chicken.foreign\376\003\000\000\002\376\001\000\000\027\004corerequire-for-syntax\376\003\000\000\002\376\001\000\000\022chicken"
"-ffi-syntax\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021chicken.condition\376\003\000\000\002\376\001\000\000\012\004corebegin\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\027\004corerequire-for-syntax\376\003\000\000\002\376\001\000\000\016chicken-syntax\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\004corerequire\376\003"
"\000\000\002\376\001\000\000\007library\376\377\016\376\377\016\376\377\016"));
lf[300]=C_h_intern(&lf[300],7, C_text("srfi-30"));
lf[301]=C_h_intern(&lf[301],7, C_text("srfi-46"));
lf[302]=C_h_intern(&lf[302],7, C_text("srfi-61"));
lf[303]=C_h_intern(&lf[303],7, C_text("srfi-62"));
lf[304]=C_h_intern(&lf[304],6, C_text("srfi-0"));
lf[305]=C_h_intern(&lf[305],6, C_text("srfi-2"));
lf[306]=C_h_intern(&lf[306],6, C_text("srfi-8"));
lf[307]=C_h_intern(&lf[307],6, C_text("srfi-9"));
lf[308]=C_h_intern(&lf[308],7, C_text("srfi-11"));
lf[309]=C_h_intern(&lf[309],7, C_text("srfi-15"));
lf[310]=C_h_intern(&lf[310],7, C_text("srfi-16"));
lf[311]=C_h_intern(&lf[311],7, C_text("srfi-17"));
lf[312]=C_h_intern(&lf[312],7, C_text("srfi-26"));
lf[313]=C_h_intern(&lf[313],7, C_text("srfi-31"));
lf[314]=C_h_intern(&lf[314],7, C_text("srfi-55"));
lf[315]=C_h_intern(&lf[315],7, C_text("srfi-88"));
lf[316]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[317]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[318]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[319]=C_h_intern(&lf[319],4, C_text("uses"));
lf[320]=C_h_intern(&lf[320],6, C_text("static"));
lf[321]=C_h_intern(&lf[321],7, C_text("dynamic"));
lf[322]=C_h_intern(&lf[322],27, C_text("chicken.internal#library-id"));
lf[323]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[326]=C_h_intern(&lf[326],37, C_text("chicken.condition#print-error-message"));
lf[327]=C_h_intern(&lf[327],40, C_text("chicken.condition#with-exception-handler"));
lf[328]=C_h_intern(&lf[328],37, C_text("scheme#call-with-current-continuation"));
lf[330]=C_h_intern(&lf[330],6, C_text("\003sysgc"));
lf[332]=C_h_intern(&lf[332],17, C_text("\003systhread-yield!"));
lf[335]=C_h_intern(&lf[335],30, C_text("chicken.base#open-input-string"));
lf[337]=C_decode_literal(C_heaptop,C_text("\376B\000\000(Error: not enough room for result string"));
lf[345]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010No error"));
lf[346]=C_h_intern(&lf[346],29, C_text("chicken.platform#chicken-home"));
lf[347]=C_h_intern(&lf[347],27, C_text("chicken.base#make-parameter"));
lf[348]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[349]=C_h_intern(&lf[349],18, C_text("\003sysfixnum->string"));
lf[350]=C_h_intern(&lf[350],6, C_text("cygwin"));
lf[351]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\014cygchicken-0\376\377\016"));
lf[352]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003lib"));
lf[353]=C_h_intern(&lf[353],33, C_text("chicken.platform#software-version"));
lf[354]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004.dll"));
lf[355]=C_h_intern(&lf[355],6, C_text("macosx"));
lf[356]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006.dylib"));
lf[357]=C_h_intern(&lf[357],4, C_text("hpux"));
lf[358]=C_h_intern(&lf[358],4, C_text("hppa"));
lf[359]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003.sl"));
lf[360]=C_h_intern(&lf[360],29, C_text("chicken.platform#machine-type"));
lf[361]=C_h_intern(&lf[361],30, C_text("chicken.platform#software-type"));
lf[362]=C_h_intern(&lf[362],9, C_text("r5rs-null"));
lf[363]=C_h_intern(&lf[363],18, C_text("null-environment/5"));
lf[364]=C_h_intern(&lf[364],9, C_text("r4rs-null"));
lf[365]=C_h_intern(&lf[365],18, C_text("null-environment/4"));
lf[366]=C_h_intern(&lf[366],6, C_text("scheme"));
lf[367]=C_h_intern(&lf[367],27, C_text("scheme-report-environment/5"));
lf[368]=C_h_intern(&lf[368],4, C_text("r4rs"));
lf[369]=C_h_intern(&lf[369],27, C_text("scheme-report-environment/4"));
lf[370]=C_h_intern(&lf[370],16, C_text("\003syswrite-char-0"));
lf[371]=C_h_intern(&lf[371],9, C_text("\003sysprint"));
lf[372]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016#<environment "));
lf[373]=C_h_intern(&lf[373],27, C_text("\003sysregister-record-printer"));
lf[374]=C_h_intern(&lf[374],24, C_text("chicken.eval#environment"));
lf[375]=C_h_intern(&lf[375],8, C_text("\003sysput!"));
lf[376]=C_h_intern(&lf[376],16, C_text("\003sysput/restore!"));
lf[377]=C_h_intern(&lf[377],39, C_text("chicken.internal#default-syntax-imports"));
lf[378]=C_h_intern(&lf[378],32, C_text("chicken.internal#default-imports"));
C_register_lf2(lf,379,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3615,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_modules_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[745] = {
{C_text("f_10000:eval_2escm"),(void*)f_10000},
{C_text("f_10003:eval_2escm"),(void*)f_10003},
{C_text("f_10006:eval_2escm"),(void*)f_10006},
{C_text("f_10012:eval_2escm"),(void*)f_10012},
{C_text("f_10024:eval_2escm"),(void*)f_10024},
{C_text("f_10030:eval_2escm"),(void*)f_10030},
{C_text("f_10090:eval_2escm"),(void*)f_10090},
{C_text("f_10105:eval_2escm"),(void*)f_10105},
{C_text("f_10112:eval_2escm"),(void*)f_10112},
{C_text("f_10123:eval_2escm"),(void*)f_10123},
{C_text("f_10127:eval_2escm"),(void*)f_10127},
{C_text("f_10130:eval_2escm"),(void*)f_10130},
{C_text("f_10133:eval_2escm"),(void*)f_10133},
{C_text("f_10138:eval_2escm"),(void*)f_10138},
{C_text("f_10141:eval_2escm"),(void*)f_10141},
{C_text("f_10144:eval_2escm"),(void*)f_10144},
{C_text("f_10149:eval_2escm"),(void*)f_10149},
{C_text("f_10151:eval_2escm"),(void*)f_10151},
{C_text("f_10158:eval_2escm"),(void*)f_10158},
{C_text("f_10160:eval_2escm"),(void*)f_10160},
{C_text("f_10164:eval_2escm"),(void*)f_10164},
{C_text("f_10167:eval_2escm"),(void*)f_10167},
{C_text("f_10170:eval_2escm"),(void*)f_10170},
{C_text("f_10175:eval_2escm"),(void*)f_10175},
{C_text("f_10189:eval_2escm"),(void*)f_10189},
{C_text("f_10192:eval_2escm"),(void*)f_10192},
{C_text("f_10206:eval_2escm"),(void*)f_10206},
{C_text("f_10213:eval_2escm"),(void*)f_10213},
{C_text("f_10216:eval_2escm"),(void*)f_10216},
{C_text("f_10219:eval_2escm"),(void*)f_10219},
{C_text("f_10232:eval_2escm"),(void*)f_10232},
{C_text("f_10236:eval_2escm"),(void*)f_10236},
{C_text("f_10242:eval_2escm"),(void*)f_10242},
{C_text("f_10261:eval_2escm"),(void*)f_10261},
{C_text("f_10264:eval_2escm"),(void*)f_10264},
{C_text("f_10290:eval_2escm"),(void*)f_10290},
{C_text("f_10317:eval_2escm"),(void*)f_10317},
{C_text("f_10321:eval_2escm"),(void*)f_10321},
{C_text("f_10324:eval_2escm"),(void*)f_10324},
{C_text("f_10327:eval_2escm"),(void*)f_10327},
{C_text("f_10332:eval_2escm"),(void*)f_10332},
{C_text("f_10338:eval_2escm"),(void*)f_10338},
{C_text("f_10343:eval_2escm"),(void*)f_10343},
{C_text("f_10351:eval_2escm"),(void*)f_10351},
{C_text("f_10353:eval_2escm"),(void*)f_10353},
{C_text("f_10367:eval_2escm"),(void*)f_10367},
{C_text("f_10374:eval_2escm"),(void*)f_10374},
{C_text("f_10380:eval_2escm"),(void*)f_10380},
{C_text("f_10386:eval_2escm"),(void*)f_10386},
{C_text("f_10397:eval_2escm"),(void*)f_10397},
{C_text("f_10400:eval_2escm"),(void*)f_10400},
{C_text("f_10406:eval_2escm"),(void*)f_10406},
{C_text("f_10418:eval_2escm"),(void*)f_10418},
{C_text("f_10423:eval_2escm"),(void*)f_10423},
{C_text("f_10449:eval_2escm"),(void*)f_10449},
{C_text("f_10462:eval_2escm"),(void*)f_10462},
{C_text("f_10499:eval_2escm"),(void*)f_10499},
{C_text("f_10516:eval_2escm"),(void*)f_10516},
{C_text("f_10524:eval_2escm"),(void*)f_10524},
{C_text("f_10553:eval_2escm"),(void*)f_10553},
{C_text("f_10560:eval_2escm"),(void*)f_10560},
{C_text("f_10562:eval_2escm"),(void*)f_10562},
{C_text("f_10591:eval_2escm"),(void*)f_10591},
{C_text("f_10603:eval_2escm"),(void*)f_10603},
{C_text("f_10609:eval_2escm"),(void*)f_10609},
{C_text("f_10613:eval_2escm"),(void*)f_10613},
{C_text("f_10616:eval_2escm"),(void*)f_10616},
{C_text("f_10618:eval_2escm"),(void*)f_10618},
{C_text("f_10622:eval_2escm"),(void*)f_10622},
{C_text("f_10625:eval_2escm"),(void*)f_10625},
{C_text("f_10635:eval_2escm"),(void*)f_10635},
{C_text("f_10647:eval_2escm"),(void*)f_10647},
{C_text("f_10654:eval_2escm"),(void*)f_10654},
{C_text("f_10661:eval_2escm"),(void*)f_10661},
{C_text("f_10663:eval_2escm"),(void*)f_10663},
{C_text("f_10676:eval_2escm"),(void*)f_10676},
{C_text("f_10708:eval_2escm"),(void*)f_10708},
{C_text("f_10714:eval_2escm"),(void*)f_10714},
{C_text("f_10729:eval_2escm"),(void*)f_10729},
{C_text("f_10733:eval_2escm"),(void*)f_10733},
{C_text("f_10737:eval_2escm"),(void*)f_10737},
{C_text("f_10748:eval_2escm"),(void*)f_10748},
{C_text("f_10752:eval_2escm"),(void*)f_10752},
{C_text("f_10754:eval_2escm"),(void*)f_10754},
{C_text("f_10773:eval_2escm"),(void*)f_10773},
{C_text("f_10783:eval_2escm"),(void*)f_10783},
{C_text("f_10796:eval_2escm"),(void*)f_10796},
{C_text("f_10819:eval_2escm"),(void*)f_10819},
{C_text("f_10838:eval_2escm"),(void*)f_10838},
{C_text("f_10848:eval_2escm"),(void*)f_10848},
{C_text("f_10861:eval_2escm"),(void*)f_10861},
{C_text("f_10884:eval_2escm"),(void*)f_10884},
{C_text("f_10898:eval_2escm"),(void*)f_10898},
{C_text("f_10921:eval_2escm"),(void*)f_10921},
{C_text("f_10925:eval_2escm"),(void*)f_10925},
{C_text("f_10932:eval_2escm"),(void*)f_10932},
{C_text("f_10936:eval_2escm"),(void*)f_10936},
{C_text("f_10941:eval_2escm"),(void*)f_10941},
{C_text("f_10975:eval_2escm"),(void*)f_10975},
{C_text("f_11017:eval_2escm"),(void*)f_11017},
{C_text("f_11060:eval_2escm"),(void*)f_11060},
{C_text("f_11092:eval_2escm"),(void*)f_11092},
{C_text("f_11162:eval_2escm"),(void*)f_11162},
{C_text("f_11165:eval_2escm"),(void*)f_11165},
{C_text("f_11178:eval_2escm"),(void*)f_11178},
{C_text("f_11181:eval_2escm"),(void*)f_11181},
{C_text("f_11184:eval_2escm"),(void*)f_11184},
{C_text("f_11198:eval_2escm"),(void*)f_11198},
{C_text("f_11234:eval_2escm"),(void*)f_11234},
{C_text("f_11237:eval_2escm"),(void*)f_11237},
{C_text("f_11247:eval_2escm"),(void*)f_11247},
{C_text("f_11249:eval_2escm"),(void*)f_11249},
{C_text("f_11259:eval_2escm"),(void*)f_11259},
{C_text("f_11273:eval_2escm"),(void*)f_11273},
{C_text("f_11284:eval_2escm"),(void*)f_11284},
{C_text("f_11291:eval_2escm"),(void*)f_11291},
{C_text("f_11294:eval_2escm"),(void*)f_11294},
{C_text("f_11299:eval_2escm"),(void*)f_11299},
{C_text("f_11304:eval_2escm"),(void*)f_11304},
{C_text("f_11310:eval_2escm"),(void*)f_11310},
{C_text("f_11316:eval_2escm"),(void*)f_11316},
{C_text("f_11320:eval_2escm"),(void*)f_11320},
{C_text("f_11323:eval_2escm"),(void*)f_11323},
{C_text("f_11327:eval_2escm"),(void*)f_11327},
{C_text("f_11329:eval_2escm"),(void*)f_11329},
{C_text("f_11335:eval_2escm"),(void*)f_11335},
{C_text("f_11341:eval_2escm"),(void*)f_11341},
{C_text("f_11347:eval_2escm"),(void*)f_11347},
{C_text("f_11353:eval_2escm"),(void*)f_11353},
{C_text("f_11357:eval_2escm"),(void*)f_11357},
{C_text("f_11362:eval_2escm"),(void*)f_11362},
{C_text("f_11368:eval_2escm"),(void*)f_11368},
{C_text("f_11372:eval_2escm"),(void*)f_11372},
{C_text("f_11374:eval_2escm"),(void*)f_11374},
{C_text("f_11380:eval_2escm"),(void*)f_11380},
{C_text("f_11388:eval_2escm"),(void*)f_11388},
{C_text("f_11390:eval_2escm"),(void*)f_11390},
{C_text("f_11394:eval_2escm"),(void*)f_11394},
{C_text("f_11399:eval_2escm"),(void*)f_11399},
{C_text("f_11403:eval_2escm"),(void*)f_11403},
{C_text("f_11410:eval_2escm"),(void*)f_11410},
{C_text("f_11414:eval_2escm"),(void*)f_11414},
{C_text("f_11416:eval_2escm"),(void*)f_11416},
{C_text("f_11429:eval_2escm"),(void*)f_11429},
{C_text("f_11435:eval_2escm"),(void*)f_11435},
{C_text("f_11439:eval_2escm"),(void*)f_11439},
{C_text("f_11442:eval_2escm"),(void*)f_11442},
{C_text("f_11449:eval_2escm"),(void*)f_11449},
{C_text("f_11453:eval_2escm"),(void*)f_11453},
{C_text("f_11455:eval_2escm"),(void*)f_11455},
{C_text("f_11459:eval_2escm"),(void*)f_11459},
{C_text("f_11464:eval_2escm"),(void*)f_11464},
{C_text("f_11468:eval_2escm"),(void*)f_11468},
{C_text("f_11471:eval_2escm"),(void*)f_11471},
{C_text("f_11478:eval_2escm"),(void*)f_11478},
{C_text("f_11482:eval_2escm"),(void*)f_11482},
{C_text("f_11486:eval_2escm"),(void*)f_11486},
{C_text("f_11490:eval_2escm"),(void*)f_11490},
{C_text("f_11492:eval_2escm"),(void*)f_11492},
{C_text("f_11498:eval_2escm"),(void*)f_11498},
{C_text("f_11506:eval_2escm"),(void*)f_11506},
{C_text("f_11508:eval_2escm"),(void*)f_11508},
{C_text("f_11514:eval_2escm"),(void*)f_11514},
{C_text("f_11518:eval_2escm"),(void*)f_11518},
{C_text("f_11521:eval_2escm"),(void*)f_11521},
{C_text("f_11528:eval_2escm"),(void*)f_11528},
{C_text("f_11532:eval_2escm"),(void*)f_11532},
{C_text("f_11534:eval_2escm"),(void*)f_11534},
{C_text("f_11538:eval_2escm"),(void*)f_11538},
{C_text("f_11543:eval_2escm"),(void*)f_11543},
{C_text("f_11547:eval_2escm"),(void*)f_11547},
{C_text("f_11554:eval_2escm"),(void*)f_11554},
{C_text("f_11556:eval_2escm"),(void*)f_11556},
{C_text("f_11560:eval_2escm"),(void*)f_11560},
{C_text("f_11565:eval_2escm"),(void*)f_11565},
{C_text("f_11569:eval_2escm"),(void*)f_11569},
{C_text("f_11571:eval_2escm"),(void*)f_11571},
{C_text("f_11583:eval_2escm"),(void*)f_11583},
{C_text("f_11590:eval_2escm"),(void*)f_11590},
{C_text("f_11592:eval_2escm"),(void*)f_11592},
{C_text("f_11598:eval_2escm"),(void*)f_11598},
{C_text("f_11623:eval_2escm"),(void*)f_11623},
{C_text("f_11637:eval_2escm"),(void*)f_11637},
{C_text("f_11649:eval_2escm"),(void*)f_11649},
{C_text("f_11653:eval_2escm"),(void*)f_11653},
{C_text("f_11680:eval_2escm"),(void*)f_11680},
{C_text("f_11684:eval_2escm"),(void*)f_11684},
{C_text("f_11688:eval_2escm"),(void*)f_11688},
{C_text("f_11692:eval_2escm"),(void*)f_11692},
{C_text("f_11699:eval_2escm"),(void*)f_11699},
{C_text("f_11703:eval_2escm"),(void*)f_11703},
{C_text("f_11711:eval_2escm"),(void*)f_11711},
{C_text("f_11719:eval_2escm"),(void*)f_11719},
{C_text("f_11727:eval_2escm"),(void*)f_11727},
{C_text("f_11733:eval_2escm"),(void*)f_11733},
{C_text("f_11737:eval_2escm"),(void*)f_11737},
{C_text("f_11740:eval_2escm"),(void*)f_11740},
{C_text("f_11749:eval_2escm"),(void*)f_11749},
{C_text("f_11755:eval_2escm"),(void*)f_11755},
{C_text("f_11759:eval_2escm"),(void*)f_11759},
{C_text("f_11762:eval_2escm"),(void*)f_11762},
{C_text("f_11774:eval_2escm"),(void*)f_11774},
{C_text("f_11776:eval_2escm"),(void*)f_11776},
{C_text("f_11782:eval_2escm"),(void*)f_11782},
{C_text("f_11787:eval_2escm"),(void*)f_11787},
{C_text("f_11791:eval_2escm"),(void*)f_11791},
{C_text("f_11794:eval_2escm"),(void*)f_11794},
{C_text("f_11804:eval_2escm"),(void*)f_11804},
{C_text("f_11817:eval_2escm"),(void*)f_11817},
{C_text("f_11822:eval_2escm"),(void*)f_11822},
{C_text("f_11829:eval_2escm"),(void*)f_11829},
{C_text("f_11832:eval_2escm"),(void*)f_11832},
{C_text("f_11844:eval_2escm"),(void*)f_11844},
{C_text("f_11852:eval_2escm"),(void*)f_11852},
{C_text("f_11856:eval_2escm"),(void*)f_11856},
{C_text("f_11859:eval_2escm"),(void*)f_11859},
{C_text("f_11863:eval_2escm"),(void*)f_11863},
{C_text("f_11867:eval_2escm"),(void*)f_11867},
{C_text("f_11870:eval_2escm"),(void*)f_11870},
{C_text("f_11873:eval_2escm"),(void*)f_11873},
{C_text("f_11882:eval_2escm"),(void*)f_11882},
{C_text("f_11892:eval_2escm"),(void*)f_11892},
{C_text("f_11896:eval_2escm"),(void*)f_11896},
{C_text("f_11899:eval_2escm"),(void*)f_11899},
{C_text("f_11902:eval_2escm"),(void*)f_11902},
{C_text("f_11905:eval_2escm"),(void*)f_11905},
{C_text("f_11913:eval_2escm"),(void*)f_11913},
{C_text("f_11922:eval_2escm"),(void*)f_11922},
{C_text("f_3615:eval_2escm"),(void*)f_3615},
{C_text("f_3618:eval_2escm"),(void*)f_3618},
{C_text("f_3621:eval_2escm"),(void*)f_3621},
{C_text("f_3624:eval_2escm"),(void*)f_3624},
{C_text("f_3632:eval_2escm"),(void*)f_3632},
{C_text("f_3645:eval_2escm"),(void*)f_3645},
{C_text("f_3653:eval_2escm"),(void*)f_3653},
{C_text("f_3657:eval_2escm"),(void*)f_3657},
{C_text("f_3660:eval_2escm"),(void*)f_3660},
{C_text("f_3663:eval_2escm"),(void*)f_3663},
{C_text("f_3668:eval_2escm"),(void*)f_3668},
{C_text("f_3670:eval_2escm"),(void*)f_3670},
{C_text("f_3697:eval_2escm"),(void*)f_3697},
{C_text("f_3710:eval_2escm"),(void*)f_3710},
{C_text("f_3732:eval_2escm"),(void*)f_3732},
{C_text("f_3736:eval_2escm"),(void*)f_3736},
{C_text("f_3744:eval_2escm"),(void*)f_3744},
{C_text("f_3750:eval_2escm"),(void*)f_3750},
{C_text("f_3757:eval_2escm"),(void*)f_3757},
{C_text("f_3764:eval_2escm"),(void*)f_3764},
{C_text("f_3766:eval_2escm"),(void*)f_3766},
{C_text("f_3770:eval_2escm"),(void*)f_3770},
{C_text("f_3778:eval_2escm"),(void*)f_3778},
{C_text("f_3795:eval_2escm"),(void*)f_3795},
{C_text("f_3825:eval_2escm"),(void*)f_3825},
{C_text("f_3855:eval_2escm"),(void*)f_3855},
{C_text("f_3869:eval_2escm"),(void*)f_3869},
{C_text("f_3879:eval_2escm"),(void*)f_3879},
{C_text("f_3885:eval_2escm"),(void*)f_3885},
{C_text("f_3892:eval_2escm"),(void*)f_3892},
{C_text("f_3893:eval_2escm"),(void*)f_3893},
{C_text("f_3905:eval_2escm"),(void*)f_3905},
{C_text("f_3911:eval_2escm"),(void*)f_3911},
{C_text("f_3921:eval_2escm"),(void*)f_3921},
{C_text("f_3924:eval_2escm"),(void*)f_3924},
{C_text("f_3931:eval_2escm"),(void*)f_3931},
{C_text("f_3941:eval_2escm"),(void*)f_3941},
{C_text("f_3942:eval_2escm"),(void*)f_3942},
{C_text("f_3947:eval_2escm"),(void*)f_3947},
{C_text("f_3951:eval_2escm"),(void*)f_3951},
{C_text("f_3972:eval_2escm"),(void*)f_3972},
{C_text("f_3994:eval_2escm"),(void*)f_3994},
{C_text("f_4005:eval_2escm"),(void*)f_4005},
{C_text("f_4020:eval_2escm"),(void*)f_4020},
{C_text("f_4039:eval_2escm"),(void*)f_4039},
{C_text("f_4062:eval_2escm"),(void*)f_4062},
{C_text("f_4083:eval_2escm"),(void*)f_4083},
{C_text("f_4102:eval_2escm"),(void*)f_4102},
{C_text("f_4109:eval_2escm"),(void*)f_4109},
{C_text("f_4117:eval_2escm"),(void*)f_4117},
{C_text("f_4125:eval_2escm"),(void*)f_4125},
{C_text("f_4133:eval_2escm"),(void*)f_4133},
{C_text("f_4135:eval_2escm"),(void*)f_4135},
{C_text("f_4154:eval_2escm"),(void*)f_4154},
{C_text("f_4156:eval_2escm"),(void*)f_4156},
{C_text("f_4166:eval_2escm"),(void*)f_4166},
{C_text("f_4167:eval_2escm"),(void*)f_4167},
{C_text("f_4189:eval_2escm"),(void*)f_4189},
{C_text("f_4204:eval_2escm"),(void*)f_4204},
{C_text("f_4213:eval_2escm"),(void*)f_4213},
{C_text("f_4220:eval_2escm"),(void*)f_4220},
{C_text("f_4228:eval_2escm"),(void*)f_4228},
{C_text("f_4236:eval_2escm"),(void*)f_4236},
{C_text("f_4244:eval_2escm"),(void*)f_4244},
{C_text("f_4252:eval_2escm"),(void*)f_4252},
{C_text("f_4260:eval_2escm"),(void*)f_4260},
{C_text("f_4268:eval_2escm"),(void*)f_4268},
{C_text("f_4270:eval_2escm"),(void*)f_4270},
{C_text("f_4299:eval_2escm"),(void*)f_4299},
{C_text("f_4333:eval_2escm"),(void*)f_4333},
{C_text("f_4343:eval_2escm"),(void*)f_4343},
{C_text("f_4346:eval_2escm"),(void*)f_4346},
{C_text("f_4349:eval_2escm"),(void*)f_4349},
{C_text("f_4350:eval_2escm"),(void*)f_4350},
{C_text("f_4357:eval_2escm"),(void*)f_4357},
{C_text("f_4431:eval_2escm"),(void*)f_4431},
{C_text("f_4434:eval_2escm"),(void*)f_4434},
{C_text("f_4435:eval_2escm"),(void*)f_4435},
{C_text("f_4439:eval_2escm"),(void*)f_4439},
{C_text("f_4453:eval_2escm"),(void*)f_4453},
{C_text("f_4456:eval_2escm"),(void*)f_4456},
{C_text("f_4459:eval_2escm"),(void*)f_4459},
{C_text("f_4460:eval_2escm"),(void*)f_4460},
{C_text("f_4464:eval_2escm"),(void*)f_4464},
{C_text("f_4467:eval_2escm"),(void*)f_4467},
{C_text("f_4505:eval_2escm"),(void*)f_4505},
{C_text("f_4529:eval_2escm"),(void*)f_4529},
{C_text("f_4535:eval_2escm"),(void*)f_4535},
{C_text("f_4539:eval_2escm"),(void*)f_4539},
{C_text("f_4548:eval_2escm"),(void*)f_4548},
{C_text("f_4552:eval_2escm"),(void*)f_4552},
{C_text("f_4559:eval_2escm"),(void*)f_4559},
{C_text("f_4560:eval_2escm"),(void*)f_4560},
{C_text("f_4564:eval_2escm"),(void*)f_4564},
{C_text("f_4590:eval_2escm"),(void*)f_4590},
{C_text("f_4595:eval_2escm"),(void*)f_4595},
{C_text("f_4607:eval_2escm"),(void*)f_4607},
{C_text("f_4608:eval_2escm"),(void*)f_4608},
{C_text("f_4617:eval_2escm"),(void*)f_4617},
{C_text("f_4644:eval_2escm"),(void*)f_4644},
{C_text("f_4653:eval_2escm"),(void*)f_4653},
{C_text("f_4659:eval_2escm"),(void*)f_4659},
{C_text("f_4662:eval_2escm"),(void*)f_4662},
{C_text("f_4671:eval_2escm"),(void*)f_4671},
{C_text("f_4672:eval_2escm"),(void*)f_4672},
{C_text("f_4688:eval_2escm"),(void*)f_4688},
{C_text("f_4692:eval_2escm"),(void*)f_4692},
{C_text("f_4705:eval_2escm"),(void*)f_4705},
{C_text("f_4708:eval_2escm"),(void*)f_4708},
{C_text("f_4709:eval_2escm"),(void*)f_4709},
{C_text("f_4725:eval_2escm"),(void*)f_4725},
{C_text("f_4729:eval_2escm"),(void*)f_4729},
{C_text("f_4733:eval_2escm"),(void*)f_4733},
{C_text("f_4741:eval_2escm"),(void*)f_4741},
{C_text("f_4754:eval_2escm"),(void*)f_4754},
{C_text("f_4757:eval_2escm"),(void*)f_4757},
{C_text("f_4763:eval_2escm"),(void*)f_4763},
{C_text("f_4764:eval_2escm"),(void*)f_4764},
{C_text("f_4780:eval_2escm"),(void*)f_4780},
{C_text("f_4784:eval_2escm"),(void*)f_4784},
{C_text("f_4788:eval_2escm"),(void*)f_4788},
{C_text("f_4792:eval_2escm"),(void*)f_4792},
{C_text("f_4800:eval_2escm"),(void*)f_4800},
{C_text("f_4808:eval_2escm"),(void*)f_4808},
{C_text("f_4821:eval_2escm"),(void*)f_4821},
{C_text("f_4824:eval_2escm"),(void*)f_4824},
{C_text("f_4830:eval_2escm"),(void*)f_4830},
{C_text("f_4833:eval_2escm"),(void*)f_4833},
{C_text("f_4834:eval_2escm"),(void*)f_4834},
{C_text("f_4850:eval_2escm"),(void*)f_4850},
{C_text("f_4854:eval_2escm"),(void*)f_4854},
{C_text("f_4858:eval_2escm"),(void*)f_4858},
{C_text("f_4862:eval_2escm"),(void*)f_4862},
{C_text("f_4866:eval_2escm"),(void*)f_4866},
{C_text("f_4874:eval_2escm"),(void*)f_4874},
{C_text("f_4882:eval_2escm"),(void*)f_4882},
{C_text("f_4890:eval_2escm"),(void*)f_4890},
{C_text("f_4898:eval_2escm"),(void*)f_4898},
{C_text("f_4911:eval_2escm"),(void*)f_4911},
{C_text("f_4912:eval_2escm"),(void*)f_4912},
{C_text("f_4916:eval_2escm"),(void*)f_4916},
{C_text("f_4919:eval_2escm"),(void*)f_4919},
{C_text("f_4928:eval_2escm"),(void*)f_4928},
{C_text("f_4953:eval_2escm"),(void*)f_4953},
{C_text("f_4958:eval_2escm"),(void*)f_4958},
{C_text("f_4983:eval_2escm"),(void*)f_4983},
{C_text("f_5000:eval_2escm"),(void*)f_5000},
{C_text("f_5004:eval_2escm"),(void*)f_5004},
{C_text("f_5008:eval_2escm"),(void*)f_5008},
{C_text("f_5011:eval_2escm"),(void*)f_5011},
{C_text("f_5017:eval_2escm"),(void*)f_5017},
{C_text("f_5025:eval_2escm"),(void*)f_5025},
{C_text("f_5033:eval_2escm"),(void*)f_5033},
{C_text("f_5035:eval_2escm"),(void*)f_5035},
{C_text("f_5039:eval_2escm"),(void*)f_5039},
{C_text("f_5042:eval_2escm"),(void*)f_5042},
{C_text("f_5047:eval_2escm"),(void*)f_5047},
{C_text("f_5049:eval_2escm"),(void*)f_5049},
{C_text("f_5074:eval_2escm"),(void*)f_5074},
{C_text("f_5083:eval_2escm"),(void*)f_5083},
{C_text("f_5156:eval_2escm"),(void*)f_5156},
{C_text("f_5160:eval_2escm"),(void*)f_5160},
{C_text("f_5180:eval_2escm"),(void*)f_5180},
{C_text("f_5194:eval_2escm"),(void*)f_5194},
{C_text("f_5228:eval_2escm"),(void*)f_5228},
{C_text("f_5278:eval_2escm"),(void*)f_5278},
{C_text("f_5287:eval_2escm"),(void*)f_5287},
{C_text("f_5313:eval_2escm"),(void*)f_5313},
{C_text("f_5340:eval_2escm"),(void*)f_5340},
{C_text("f_5344:eval_2escm"),(void*)f_5344},
{C_text("f_5356:eval_2escm"),(void*)f_5356},
{C_text("f_5370:eval_2escm"),(void*)f_5370},
{C_text("f_5418:eval_2escm"),(void*)f_5418},
{C_text("f_5466:eval_2escm"),(void*)f_5466},
{C_text("f_5500:eval_2escm"),(void*)f_5500},
{C_text("f_5525:eval_2escm"),(void*)f_5525},
{C_text("f_5534:eval_2escm"),(void*)f_5534},
{C_text("f_5575:eval_2escm"),(void*)f_5575},
{C_text("f_5586:eval_2escm"),(void*)f_5586},
{C_text("f_5591:eval_2escm"),(void*)f_5591},
{C_text("f_5601:eval_2escm"),(void*)f_5601},
{C_text("f_5604:eval_2escm"),(void*)f_5604},
{C_text("f_5610:eval_2escm"),(void*)f_5610},
{C_text("f_5620:eval_2escm"),(void*)f_5620},
{C_text("f_5626:eval_2escm"),(void*)f_5626},
{C_text("f_5639:eval_2escm"),(void*)f_5639},
{C_text("f_5645:eval_2escm"),(void*)f_5645},
{C_text("f_5663:eval_2escm"),(void*)f_5663},
{C_text("f_5669:eval_2escm"),(void*)f_5669},
{C_text("f_5682:eval_2escm"),(void*)f_5682},
{C_text("f_5688:eval_2escm"),(void*)f_5688},
{C_text("f_5710:eval_2escm"),(void*)f_5710},
{C_text("f_5716:eval_2escm"),(void*)f_5716},
{C_text("f_5729:eval_2escm"),(void*)f_5729},
{C_text("f_5735:eval_2escm"),(void*)f_5735},
{C_text("f_5757:eval_2escm"),(void*)f_5757},
{C_text("f_5763:eval_2escm"),(void*)f_5763},
{C_text("f_5776:eval_2escm"),(void*)f_5776},
{C_text("f_5782:eval_2escm"),(void*)f_5782},
{C_text("f_5804:eval_2escm"),(void*)f_5804},
{C_text("f_5810:eval_2escm"),(void*)f_5810},
{C_text("f_5823:eval_2escm"),(void*)f_5823},
{C_text("f_5829:eval_2escm"),(void*)f_5829},
{C_text("f_5841:eval_2escm"),(void*)f_5841},
{C_text("f_5845:eval_2escm"),(void*)f_5845},
{C_text("f_5851:eval_2escm"),(void*)f_5851},
{C_text("f_5863:eval_2escm"),(void*)f_5863},
{C_text("f_5867:eval_2escm"),(void*)f_5867},
{C_text("f_5868:eval_2escm"),(void*)f_5868},
{C_text("f_5874:eval_2escm"),(void*)f_5874},
{C_text("f_5896:eval_2escm"),(void*)f_5896},
{C_text("f_5912:eval_2escm"),(void*)f_5912},
{C_text("f_5916:eval_2escm"),(void*)f_5916},
{C_text("f_5920:eval_2escm"),(void*)f_5920},
{C_text("f_5923:eval_2escm"),(void*)f_5923},
{C_text("f_5929:eval_2escm"),(void*)f_5929},
{C_text("f_5937:eval_2escm"),(void*)f_5937},
{C_text("f_5943:eval_2escm"),(void*)f_5943},
{C_text("f_5947:eval_2escm"),(void*)f_5947},
{C_text("f_5950:eval_2escm"),(void*)f_5950},
{C_text("f_5955:eval_2escm"),(void*)f_5955},
{C_text("f_5957:eval_2escm"),(void*)f_5957},
{C_text("f_5982:eval_2escm"),(void*)f_5982},
{C_text("f_5992:eval_2escm"),(void*)f_5992},
{C_text("f_5997:eval_2escm"),(void*)f_5997},
{C_text("f_6005:eval_2escm"),(void*)f_6005},
{C_text("f_6007:eval_2escm"),(void*)f_6007},
{C_text("f_6018:eval_2escm"),(void*)f_6018},
{C_text("f_6027:eval_2escm"),(void*)f_6027},
{C_text("f_6032:eval_2escm"),(void*)f_6032},
{C_text("f_6036:eval_2escm"),(void*)f_6036},
{C_text("f_6040:eval_2escm"),(void*)f_6040},
{C_text("f_6043:eval_2escm"),(void*)f_6043},
{C_text("f_6049:eval_2escm"),(void*)f_6049},
{C_text("f_6057:eval_2escm"),(void*)f_6057},
{C_text("f_6065:eval_2escm"),(void*)f_6065},
{C_text("f_6067:eval_2escm"),(void*)f_6067},
{C_text("f_6071:eval_2escm"),(void*)f_6071},
{C_text("f_6074:eval_2escm"),(void*)f_6074},
{C_text("f_6092:eval_2escm"),(void*)f_6092},
{C_text("f_6096:eval_2escm"),(void*)f_6096},
{C_text("f_6100:eval_2escm"),(void*)f_6100},
{C_text("f_6104:eval_2escm"),(void*)f_6104},
{C_text("f_6119:eval_2escm"),(void*)f_6119},
{C_text("f_6123:eval_2escm"),(void*)f_6123},
{C_text("f_6125:eval_2escm"),(void*)f_6125},
{C_text("f_6150:eval_2escm"),(void*)f_6150},
{C_text("f_6179:eval_2escm"),(void*)f_6179},
{C_text("f_6183:eval_2escm"),(void*)f_6183},
{C_text("f_6187:eval_2escm"),(void*)f_6187},
{C_text("f_6202:eval_2escm"),(void*)f_6202},
{C_text("f_6205:eval_2escm"),(void*)f_6205},
{C_text("f_6206:eval_2escm"),(void*)f_6206},
{C_text("f_6225:eval_2escm"),(void*)f_6225},
{C_text("f_6229:eval_2escm"),(void*)f_6229},
{C_text("f_6233:eval_2escm"),(void*)f_6233},
{C_text("f_6236:eval_2escm"),(void*)f_6236},
{C_text("f_6242:eval_2escm"),(void*)f_6242},
{C_text("f_6250:eval_2escm"),(void*)f_6250},
{C_text("f_6258:eval_2escm"),(void*)f_6258},
{C_text("f_6260:eval_2escm"),(void*)f_6260},
{C_text("f_6264:eval_2escm"),(void*)f_6264},
{C_text("f_6267:eval_2escm"),(void*)f_6267},
{C_text("f_6270:eval_2escm"),(void*)f_6270},
{C_text("f_6295:eval_2escm"),(void*)f_6295},
{C_text("f_6297:eval_2escm"),(void*)f_6297},
{C_text("f_6322:eval_2escm"),(void*)f_6322},
{C_text("f_6344:eval_2escm"),(void*)f_6344},
{C_text("f_6347:eval_2escm"),(void*)f_6347},
{C_text("f_6350:eval_2escm"),(void*)f_6350},
{C_text("f_6353:eval_2escm"),(void*)f_6353},
{C_text("f_6360:eval_2escm"),(void*)f_6360},
{C_text("f_6364:eval_2escm"),(void*)f_6364},
{C_text("f_6368:eval_2escm"),(void*)f_6368},
{C_text("f_6385:eval_2escm"),(void*)f_6385},
{C_text("f_6407:eval_2escm"),(void*)f_6407},
{C_text("f_6415:eval_2escm"),(void*)f_6415},
{C_text("f_6434:eval_2escm"),(void*)f_6434},
{C_text("f_6442:eval_2escm"),(void*)f_6442},
{C_text("f_6452:eval_2escm"),(void*)f_6452},
{C_text("f_6456:eval_2escm"),(void*)f_6456},
{C_text("f_6485:eval_2escm"),(void*)f_6485},
{C_text("f_6497:eval_2escm"),(void*)f_6497},
{C_text("f_6499:eval_2escm"),(void*)f_6499},
{C_text("f_6513:eval_2escm"),(void*)f_6513},
{C_text("f_6538:eval_2escm"),(void*)f_6538},
{C_text("f_6554:eval_2escm"),(void*)f_6554},
{C_text("f_6563:eval_2escm"),(void*)f_6563},
{C_text("f_6566:eval_2escm"),(void*)f_6566},
{C_text("f_6569:eval_2escm"),(void*)f_6569},
{C_text("f_6572:eval_2escm"),(void*)f_6572},
{C_text("f_6577:eval_2escm"),(void*)f_6577},
{C_text("f_6581:eval_2escm"),(void*)f_6581},
{C_text("f_6584:eval_2escm"),(void*)f_6584},
{C_text("f_6587:eval_2escm"),(void*)f_6587},
{C_text("f_6590:eval_2escm"),(void*)f_6590},
{C_text("f_6594:eval_2escm"),(void*)f_6594},
{C_text("f_6598:eval_2escm"),(void*)f_6598},
{C_text("f_6602:eval_2escm"),(void*)f_6602},
{C_text("f_6606:eval_2escm"),(void*)f_6606},
{C_text("f_6609:eval_2escm"),(void*)f_6609},
{C_text("f_6612:eval_2escm"),(void*)f_6612},
{C_text("f_6615:eval_2escm"),(void*)f_6615},
{C_text("f_6618:eval_2escm"),(void*)f_6618},
{C_text("f_6633:eval_2escm"),(void*)f_6633},
{C_text("f_6639:eval_2escm"),(void*)f_6639},
{C_text("f_6649:eval_2escm"),(void*)f_6649},
{C_text("f_6659:eval_2escm"),(void*)f_6659},
{C_text("f_6662:eval_2escm"),(void*)f_6662},
{C_text("f_6665:eval_2escm"),(void*)f_6665},
{C_text("f_6666:eval_2escm"),(void*)f_6666},
{C_text("f_6672:eval_2escm"),(void*)f_6672},
{C_text("f_6695:eval_2escm"),(void*)f_6695},
{C_text("f_6706:eval_2escm"),(void*)f_6706},
{C_text("f_6710:eval_2escm"),(void*)f_6710},
{C_text("f_6725:eval_2escm"),(void*)f_6725},
{C_text("f_6729:eval_2escm"),(void*)f_6729},
{C_text("f_6733:eval_2escm"),(void*)f_6733},
{C_text("f_6736:eval_2escm"),(void*)f_6736},
{C_text("f_6739:eval_2escm"),(void*)f_6739},
{C_text("f_6742:eval_2escm"),(void*)f_6742},
{C_text("f_6745:eval_2escm"),(void*)f_6745},
{C_text("f_6748:eval_2escm"),(void*)f_6748},
{C_text("f_6751:eval_2escm"),(void*)f_6751},
{C_text("f_6754:eval_2escm"),(void*)f_6754},
{C_text("f_6761:eval_2escm"),(void*)f_6761},
{C_text("f_6768:eval_2escm"),(void*)f_6768},
{C_text("f_6781:eval_2escm"),(void*)f_6781},
{C_text("f_6792:eval_2escm"),(void*)f_6792},
{C_text("f_6825:eval_2escm"),(void*)f_6825},
{C_text("f_6850:eval_2escm"),(void*)f_6850},
{C_text("f_6878:eval_2escm"),(void*)f_6878},
{C_text("f_6912:eval_2escm"),(void*)f_6912},
{C_text("f_6935:eval_2escm"),(void*)f_6935},
{C_text("f_6941:eval_2escm"),(void*)f_6941},
{C_text("f_6957:eval_2escm"),(void*)f_6957},
{C_text("f_6998:eval_2escm"),(void*)f_6998},
{C_text("f_7021:eval_2escm"),(void*)f_7021},
{C_text("f_7034:eval_2escm"),(void*)f_7034},
{C_text("f_7054:eval_2escm"),(void*)f_7054},
{C_text("f_7080:eval_2escm"),(void*)f_7080},
{C_text("f_7098:eval_2escm"),(void*)f_7098},
{C_text("f_7110:eval_2escm"),(void*)f_7110},
{C_text("f_7115:eval_2escm"),(void*)f_7115},
{C_text("f_7123:eval_2escm"),(void*)f_7123},
{C_text("f_7125:eval_2escm"),(void*)f_7125},
{C_text("f_7300:eval_2escm"),(void*)f_7300},
{C_text("f_7310:eval_2escm"),(void*)f_7310},
{C_text("f_7333:eval_2escm"),(void*)f_7333},
{C_text("f_7362:eval_2escm"),(void*)f_7362},
{C_text("f_7391:eval_2escm"),(void*)f_7391},
{C_text("f_7408:eval_2escm"),(void*)f_7408},
{C_text("f_7434:eval_2escm"),(void*)f_7434},
{C_text("f_7441:eval_2escm"),(void*)f_7441},
{C_text("f_7463:eval_2escm"),(void*)f_7463},
{C_text("f_7470:eval_2escm"),(void*)f_7470},
{C_text("f_7482:eval_2escm"),(void*)f_7482},
{C_text("f_7483:eval_2escm"),(void*)f_7483},
{C_text("f_7490:eval_2escm"),(void*)f_7490},
{C_text("f_7497:eval_2escm"),(void*)f_7497},
{C_text("f_7510:eval_2escm"),(void*)f_7510},
{C_text("f_7513:eval_2escm"),(void*)f_7513},
{C_text("f_7514:eval_2escm"),(void*)f_7514},
{C_text("f_7521:eval_2escm"),(void*)f_7521},
{C_text("f_7528:eval_2escm"),(void*)f_7528},
{C_text("f_7532:eval_2escm"),(void*)f_7532},
{C_text("f_7546:eval_2escm"),(void*)f_7546},
{C_text("f_7549:eval_2escm"),(void*)f_7549},
{C_text("f_7552:eval_2escm"),(void*)f_7552},
{C_text("f_7553:eval_2escm"),(void*)f_7553},
{C_text("f_7560:eval_2escm"),(void*)f_7560},
{C_text("f_7567:eval_2escm"),(void*)f_7567},
{C_text("f_7571:eval_2escm"),(void*)f_7571},
{C_text("f_7575:eval_2escm"),(void*)f_7575},
{C_text("f_7590:eval_2escm"),(void*)f_7590},
{C_text("f_7593:eval_2escm"),(void*)f_7593},
{C_text("f_7596:eval_2escm"),(void*)f_7596},
{C_text("f_7599:eval_2escm"),(void*)f_7599},
{C_text("f_7600:eval_2escm"),(void*)f_7600},
{C_text("f_7607:eval_2escm"),(void*)f_7607},
{C_text("f_7614:eval_2escm"),(void*)f_7614},
{C_text("f_7618:eval_2escm"),(void*)f_7618},
{C_text("f_7622:eval_2escm"),(void*)f_7622},
{C_text("f_7626:eval_2escm"),(void*)f_7626},
{C_text("f_7637:eval_2escm"),(void*)f_7637},
{C_text("f_7647:eval_2escm"),(void*)f_7647},
{C_text("f_7648:eval_2escm"),(void*)f_7648},
{C_text("f_7659:eval_2escm"),(void*)f_7659},
{C_text("f_7664:eval_2escm"),(void*)f_7664},
{C_text("f_7674:eval_2escm"),(void*)f_7674},
{C_text("f_7676:eval_2escm"),(void*)f_7676},
{C_text("f_7701:eval_2escm"),(void*)f_7701},
{C_text("f_7710:eval_2escm"),(void*)f_7710},
{C_text("f_7735:eval_2escm"),(void*)f_7735},
{C_text("f_7758:eval_2escm"),(void*)f_7758},
{C_text("f_7777:eval_2escm"),(void*)f_7777},
{C_text("f_7827:eval_2escm"),(void*)f_7827},
{C_text("f_7831:eval_2escm"),(void*)f_7831},
{C_text("f_7834:eval_2escm"),(void*)f_7834},
{C_text("f_7839:eval_2escm"),(void*)f_7839},
{C_text("f_7843:eval_2escm"),(void*)f_7843},
{C_text("f_7846:eval_2escm"),(void*)f_7846},
{C_text("f_7849:eval_2escm"),(void*)f_7849},
{C_text("f_7853:eval_2escm"),(void*)f_7853},
{C_text("f_7857:eval_2escm"),(void*)f_7857},
{C_text("f_7861:eval_2escm"),(void*)f_7861},
{C_text("f_7864:eval_2escm"),(void*)f_7864},
{C_text("f_7867:eval_2escm"),(void*)f_7867},
{C_text("f_7870:eval_2escm"),(void*)f_7870},
{C_text("f_7882:eval_2escm"),(void*)f_7882},
{C_text("f_7888:eval_2escm"),(void*)f_7888},
{C_text("f_7892:eval_2escm"),(void*)f_7892},
{C_text("f_7897:eval_2escm"),(void*)f_7897},
{C_text("f_7901:eval_2escm"),(void*)f_7901},
{C_text("f_7908:eval_2escm"),(void*)f_7908},
{C_text("f_7912:eval_2escm"),(void*)f_7912},
{C_text("f_7914:eval_2escm"),(void*)f_7914},
{C_text("f_7918:eval_2escm"),(void*)f_7918},
{C_text("f_7921:eval_2escm"),(void*)f_7921},
{C_text("f_7924:eval_2escm"),(void*)f_7924},
{C_text("f_7927:eval_2escm"),(void*)f_7927},
{C_text("f_7930:eval_2escm"),(void*)f_7930},
{C_text("f_7933:eval_2escm"),(void*)f_7933},
{C_text("f_7940:eval_2escm"),(void*)f_7940},
{C_text("f_7942:eval_2escm"),(void*)f_7942},
{C_text("f_7950:eval_2escm"),(void*)f_7950},
{C_text("f_7952:eval_2escm"),(void*)f_7952},
{C_text("f_7959:eval_2escm"),(void*)f_7959},
{C_text("f_7961:eval_2escm"),(void*)f_7961},
{C_text("f_7964:eval_2escm"),(void*)f_7964},
{C_text("f_7974:eval_2escm"),(void*)f_7974},
{C_text("f_7988:eval_2escm"),(void*)f_7988},
{C_text("f_8007:eval_2escm"),(void*)f_8007},
{C_text("f_8046:eval_2escm"),(void*)f_8046},
{C_text("f_8050:eval_2escm"),(void*)f_8050},
{C_text("f_8053:eval_2escm"),(void*)f_8053},
{C_text("f_8056:eval_2escm"),(void*)f_8056},
{C_text("f_8059:eval_2escm"),(void*)f_8059},
{C_text("f_8062:eval_2escm"),(void*)f_8062},
{C_text("f_8064:eval_2escm"),(void*)f_8064},
{C_text("f_8073:eval_2escm"),(void*)f_8073},
{C_text("f_8104:eval_2escm"),(void*)f_8104},
{C_text("f_8122:eval_2escm"),(void*)f_8122},
{C_text("f_8126:eval_2escm"),(void*)f_8126},
{C_text("f_8147:eval_2escm"),(void*)f_8147},
{C_text("f_8151:eval_2escm"),(void*)f_8151},
{C_text("f_8547:eval_2escm"),(void*)f_8547},
{C_text("f_8569:eval_2escm"),(void*)f_8569},
{C_text("f_8575:eval_2escm"),(void*)f_8575},
{C_text("f_8581:eval_2escm"),(void*)f_8581},
{C_text("f_8591:eval_2escm"),(void*)f_8591},
{C_text("f_9467:eval_2escm"),(void*)f_9467},
{C_text("f_9473:eval_2escm"),(void*)f_9473},
{C_text("f_9476:eval_2escm"),(void*)f_9476},
{C_text("f_9478:eval_2escm"),(void*)f_9478},
{C_text("f_9481:eval_2escm"),(void*)f_9481},
{C_text("f_9488:eval_2escm"),(void*)f_9488},
{C_text("f_9498:eval_2escm"),(void*)f_9498},
{C_text("f_9523:eval_2escm"),(void*)f_9523},
{C_text("f_9527:eval_2escm"),(void*)f_9527},
{C_text("f_9540:eval_2escm"),(void*)f_9540},
{C_text("f_9566:eval_2escm"),(void*)f_9566},
{C_text("f_9570:eval_2escm"),(void*)f_9570},
{C_text("f_9577:eval_2escm"),(void*)f_9577},
{C_text("f_9582:eval_2escm"),(void*)f_9582},
{C_text("f_9595:eval_2escm"),(void*)f_9595},
{C_text("f_9664:eval_2escm"),(void*)f_9664},
{C_text("f_9670:eval_2escm"),(void*)f_9670},
{C_text("f_9678:eval_2escm"),(void*)f_9678},
{C_text("f_9682:eval_2escm"),(void*)f_9682},
{C_text("f_9684:eval_2escm"),(void*)f_9684},
{C_text("f_9722:eval_2escm"),(void*)f_9722},
{C_text("f_9727:eval_2escm"),(void*)f_9727},
{C_text("f_9731:eval_2escm"),(void*)f_9731},
{C_text("f_9734:eval_2escm"),(void*)f_9734},
{C_text("f_9750:eval_2escm"),(void*)f_9750},
{C_text("f_9754:eval_2escm"),(void*)f_9754},
{C_text("f_9758:eval_2escm"),(void*)f_9758},
{C_text("f_9762:eval_2escm"),(void*)f_9762},
{C_text("f_9766:eval_2escm"),(void*)f_9766},
{C_text("f_9769:eval_2escm"),(void*)f_9769},
{C_text("f_9772:eval_2escm"),(void*)f_9772},
{C_text("f_9775:eval_2escm"),(void*)f_9775},
{C_text("f_9780:eval_2escm"),(void*)f_9780},
{C_text("f_9786:eval_2escm"),(void*)f_9786},
{C_text("f_9795:eval_2escm"),(void*)f_9795},
{C_text("f_9799:eval_2escm"),(void*)f_9799},
{C_text("f_9804:eval_2escm"),(void*)f_9804},
{C_text("f_9807:eval_2escm"),(void*)f_9807},
{C_text("f_9811:eval_2escm"),(void*)f_9811},
{C_text("f_9814:eval_2escm"),(void*)f_9814},
{C_text("f_9817:eval_2escm"),(void*)f_9817},
{C_text("f_9822:eval_2escm"),(void*)f_9822},
{C_text("f_9832:eval_2escm"),(void*)f_9832},
{C_text("f_9835:eval_2escm"),(void*)f_9835},
{C_text("f_9842:eval_2escm"),(void*)f_9842},
{C_text("f_9844:eval_2escm"),(void*)f_9844},
{C_text("f_9851:eval_2escm"),(void*)f_9851},
{C_text("f_9856:eval_2escm"),(void*)f_9856},
{C_text("f_9862:eval_2escm"),(void*)f_9862},
{C_text("f_9866:eval_2escm"),(void*)f_9866},
{C_text("f_9873:eval_2escm"),(void*)f_9873},
{C_text("f_9878:eval_2escm"),(void*)f_9878},
{C_text("f_9887:eval_2escm"),(void*)f_9887},
{C_text("f_9895:eval_2escm"),(void*)f_9895},
{C_text("f_9905:eval_2escm"),(void*)f_9905},
{C_text("f_9929:eval_2escm"),(void*)f_9929},
{C_text("f_9933:eval_2escm"),(void*)f_9933},
{C_text("f_9942:eval_2escm"),(void*)f_9942},
{C_text("f_9951:eval_2escm"),(void*)f_9951},
{C_text("f_9970:eval_2escm"),(void*)f_9970},
{C_text("f_9973:eval_2escm"),(void*)f_9973},
{C_text("f_9976:eval_2escm"),(void*)f_9976},
{C_text("f_9982:eval_2escm"),(void*)f_9982},
{C_text("f_9985:eval_2escm"),(void*)f_9985},
{C_text("toplevel:eval_2escm"),(void*)C_eval_toplevel},
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
o|hiding unexported module binding: chicken.eval#d 
o|hiding unexported module binding: chicken.eval#define-alias 
o|hiding unexported module binding: chicken.eval#d 
o|hiding unexported module binding: chicken.eval#eval-decorator 
o|hiding unexported module binding: chicken.eval#compile-to-closure 
o|hiding unexported module binding: chicken.load#partition 
o|hiding unexported module binding: chicken.load#span 
o|hiding unexported module binding: chicken.load#take 
o|hiding unexported module binding: chicken.load#drop 
o|hiding unexported module binding: chicken.load#split-at 
o|hiding unexported module binding: chicken.load#append-map 
o|hiding unexported module binding: chicken.load#every 
o|hiding unexported module binding: chicken.load#any 
o|hiding unexported module binding: chicken.load#cons* 
o|hiding unexported module binding: chicken.load#concatenate 
o|hiding unexported module binding: chicken.load#delete 
o|hiding unexported module binding: chicken.load#first 
o|hiding unexported module binding: chicken.load#second 
o|hiding unexported module binding: chicken.load#third 
o|hiding unexported module binding: chicken.load#fourth 
o|hiding unexported module binding: chicken.load#fifth 
o|hiding unexported module binding: chicken.load#delete-duplicates 
o|hiding unexported module binding: chicken.load#alist-cons 
o|hiding unexported module binding: chicken.load#filter 
o|hiding unexported module binding: chicken.load#filter-map 
o|hiding unexported module binding: chicken.load#remove 
o|hiding unexported module binding: chicken.load#unzip1 
o|hiding unexported module binding: chicken.load#last 
o|hiding unexported module binding: chicken.load#list-index 
o|hiding unexported module binding: chicken.load#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.load#lset-difference/eq? 
o|hiding unexported module binding: chicken.load#lset-union/eq? 
o|hiding unexported module binding: chicken.load#lset-intersection/eq? 
o|hiding unexported module binding: chicken.load#list-tabulate 
o|hiding unexported module binding: chicken.load#lset<=/eq? 
o|hiding unexported module binding: chicken.load#lset=/eq? 
o|hiding unexported module binding: chicken.load#length+ 
o|hiding unexported module binding: chicken.load#find 
o|hiding unexported module binding: chicken.load#find-tail 
o|hiding unexported module binding: chicken.load#iota 
o|hiding unexported module binding: chicken.load#make-list 
o|hiding unexported module binding: chicken.load#posq 
o|hiding unexported module binding: chicken.load#posv 
o|hiding unexported module binding: chicken.load#constant2097 
o|hiding unexported module binding: chicken.load#constant2100 
o|hiding unexported module binding: chicken.load#constant2104 
o|hiding unexported module binding: chicken.load#constant2109 
o|hiding unexported module binding: chicken.load#constant2115 
o|hiding unexported module binding: chicken.load#constant2122 
o|hiding unexported module binding: chicken.load#constant2130 
o|hiding unexported module binding: chicken.load#constant2139 
o|hiding unexported module binding: chicken.load#constant2149 
o|hiding unexported module binding: chicken.load#constant2160 
o|hiding unexported module binding: chicken.load#constant2172 
o|hiding unexported module binding: chicken.load#object-file-extension 
o|hiding unexported module binding: chicken.load#load-library-extension 
o|hiding unexported module binding: chicken.load#constant2197 
o|hiding unexported module binding: chicken.load#default-dynamic-load-libraries 
o|hiding unexported module binding: chicken.load#path-separators 
o|hiding unexported module binding: chicken.load#path-separator-index/right 
o|hiding unexported module binding: chicken.load#make-relative-pathname 
o|hiding unexported module binding: chicken.load#toplevel 
o|hiding unexported module binding: chicken.load#c-toplevel 
o|hiding unexported module binding: chicken.load#load/internal 
o|hiding unexported module binding: chicken.load#load-library/internal 
o|hiding unexported module binding: chicken.load#file-exists? 
o|hiding unexported module binding: chicken.load#find-file 
o|hiding unexported module binding: chicken.load#find-dynamic-extension 
o|hiding unexported module binding: chicken.load#load-extension/internal 
o|hiding unexported module binding: chicken.load#find-static-extension 
S|applied compiler syntax:
S|  foldl		3
S|  foldr		4
S|  for-each		7
S|  ##sys#map		4
S|  map		17
o|eliminated procedure checks: 317 
o|specializations:
o|  1 (scheme#string-ref string fixnum)
o|  1 (scheme#char=? char char)
o|  1 (scheme#number->string fixnum)
o|  1 (##sys#debug-mode?)
o|  1 (scheme#positive? fixnum)
o|  1 (scheme#eqv? * *)
o|  3 (scheme#memq * list)
o|  1 (scheme#caddr (pair * (pair * pair)))
o|  1 (scheme#length list)
o|  3 (scheme#cddr (pair * pair))
o|  13 (scheme#car pair)
o|  17 (##sys#check-list (or pair list) *)
o|  1 (scheme#zero? *)
o|  8 (scheme#eqv? (or eof null fixnum char boolean symbol) *)
o|  81 (scheme#eqv? * (or eof null fixnum char boolean symbol))
o|  26 (scheme#cdr pair)
o|  2 (scheme#cdar (pair pair *))
(o e)|safe calls: 1126 
(o e)|assignments to immediate values: 1 
o|safe globals: (##sys#unbound-in-eval chicken.eval#eval-decorator) 
o|merged explicitly consed rest parameter: rest150153 
o|inlining procedure: k3699 
o|inlining procedure: k3699 
o|inlining procedure: k3737 
o|inlining procedure: k3737 
o|inlining procedure: k3752 
o|inlining procedure: k3752 
o|inlining procedure: k3780 
o|inlining procedure: k3780 
o|contracted procedure: "(eval.scm:103) posq199" 
o|inlining procedure: k3827 
o|inlining procedure: k3827 
o|inlining procedure: k3857 
o|inlining procedure: k3857 
o|inlining procedure: k3871 
o|inlining procedure: k3871 
o|contracted procedure: "(eval.scm:129) chicken.eval#eval-decorator" 
o|inlining procedure: k3634 
o|inlining procedure: k3634 
o|inlining procedure: k3887 
o|inlining procedure: k3887 
o|inlining procedure: k3913 
o|inlining procedure: k3936 
o|inlining procedure: k3936 
o|inlining procedure: k3963 
o|inlining procedure: k3963 
o|inlining procedure: k3976 
o|inlining procedure: k3976 
o|inlining procedure: k3913 
o|inlining procedure: k4014 
o|inlining procedure: k4014 
o|inlining procedure: k4056 
o|inlining procedure: k4056 
o|substituted constant variable: a4090 
o|substituted constant variable: a4092 
o|substituted constant variable: a4094 
o|substituted constant variable: a4096 
o|inlining procedure: k4097 
o|inlining procedure: k4111 
o|inlining procedure: k4111 
o|inlining procedure: k4127 
o|inlining procedure: k4127 
o|substituted constant variable: a4138 
o|substituted constant variable: a4140 
o|substituted constant variable: a4142 
o|substituted constant variable: a4144 
o|inlining procedure: k4097 
o|inlining procedure: k4151 
o|inlining procedure: k4151 
o|inlining procedure: k4158 
o|inlining procedure: k4158 
o|inlining procedure: k4178 
o|inlining procedure: k4205 
o|inlining procedure: k4222 
o|inlining procedure: k4222 
o|inlining procedure: k4238 
o|inlining procedure: k4238 
o|inlining procedure: k4254 
o|inlining procedure: k4254 
o|substituted constant variable: a4273 
o|substituted constant variable: a4275 
o|substituted constant variable: a4277 
o|substituted constant variable: a4279 
o|substituted constant variable: a4281 
o|substituted constant variable: a4283 
o|substituted constant variable: a4285 
o|inlining procedure: k4205 
o|inlining procedure: k4301 
o|inlining procedure: k4301 
o|inlining procedure: k4327 
o|inlining procedure: k4327 
o|inlining procedure: k4352 
o|inlining procedure: k4352 
o|inlining procedure: k4389 
o|inlining procedure: k4410 
o|inlining procedure: k4410 
o|substituted constant variable: a4492 
o|substituted constant variable: a4494 
o|substituted constant variable: a4496 
o|inlining procedure: k4389 
o|inlining procedure: k4516 
o|inlining procedure: k4540 
o|inlining procedure: k4571 
o|inlining procedure: k4571 
o|inlining procedure: k4540 
o|inlining procedure: k4516 
o|inlining procedure: k4663 
o|inlining procedure: k4663 
o|inlining procedure: k4746 
o|inlining procedure: k4746 
o|inlining procedure: k4930 
o|inlining procedure: k4930 
o|inlining procedure: k4960 
o|inlining procedure: k4960 
o|substituted constant variable: a4992 
o|substituted constant variable: a4994 
o|substituted constant variable: a4996 
o|substituted constant variable: a4998 
o|consed rest parameter at call site: "(eval.scm:287) chicken.eval#compile-to-closure" 3 
o|inlining procedure: k5051 
o|inlining procedure: k5051 
o|inlining procedure: k5085 
o|contracted procedure: "(eval.scm:282) g423432" 
o|inlining procedure: k5085 
o|inlining procedure: k5116 
o|inlining procedure: k5196 
o|contracted procedure: "(eval.scm:337) g587596" 
o|inlining procedure: k5196 
o|inlining procedure: k5230 
o|contracted procedure: "(eval.scm:334) g560569" 
o|inlining procedure: k5230 
o|inlining procedure: k5116 
o|inlining procedure: k5372 
o|contracted procedure: "(eval.scm:354) g736746" 
o|inlining procedure: k5372 
o|inlining procedure: k5420 
o|contracted procedure: "(eval.scm:353) g703713" 
o|inlining procedure: k5420 
o|inlining procedure: k5468 
o|contracted procedure: "(eval.scm:350) g676685" 
o|inlining procedure: k5468 
o|inlining procedure: k5502 
o|inlining procedure: k5502 
o|inlining procedure: k5536 
o|inlining procedure: k5536 
o|inlining procedure: k5567 
o|inlining procedure: k5611 
o|inlining procedure: k5611 
o|inlining procedure: k5660 
o|inlining procedure: k5660 
o|inlining procedure: k5701 
o|inlining procedure: k5701 
o|inlining procedure: k5754 
o|inlining procedure: k5754 
o|inlining procedure: k5795 
o|inlining procedure: k5795 
o|contracted procedure: "(eval.scm:443) fudge-argument-list204" 
o|inlining procedure: k7349 
o|inlining procedure: k7349 
o|inlining procedure: k7364 
o|inlining procedure: k7364 
o|inlining procedure: k7389 
o|inlining procedure: k7389 
o|inlining procedure: k5877 
o|inlining procedure: k5877 
o|substituted constant variable: a5902 
o|substituted constant variable: a5904 
o|substituted constant variable: a5906 
o|substituted constant variable: a5908 
o|substituted constant variable: a5910 
o|consed rest parameter at call site: "(eval.scm:378) chicken.eval#compile-to-closure" 3 
o|inlining procedure: k5939 
o|consed rest parameter at call site: "(eval.scm:378) chicken.eval#compile-to-closure" 3 
o|inlining procedure: k5939 
o|consed rest parameter at call site: "(eval.scm:378) chicken.eval#compile-to-closure" 3 
o|inlining procedure: k5959 
o|inlining procedure: k5959 
o|inlining procedure: k6012 
o|inlining procedure: k6012 
o|inlining procedure: k5567 
o|inlining procedure: k6127 
o|contracted procedure: "(eval.scm:458) g892901" 
o|inlining procedure: k6127 
o|inlining procedure: k6158 
o|inlining procedure: k6272 
o|inlining procedure: k6272 
o|inlining procedure: k6299 
o|contracted procedure: "(eval.scm:472) g927936" 
o|inlining procedure: k6299 
o|inlining procedure: k6158 
o|inlining procedure: k6386 
o|inlining procedure: k6386 
o|inlining procedure: k6416 
o|inlining procedure: k6440 
o|inlining procedure: k6440 
o|inlining procedure: k6416 
o|inlining procedure: k6515 
o|contracted procedure: "(eval.scm:528) g10011010" 
o|inlining procedure: k6515 
o|substituted constant variable: saved108010811099 
o|inlining procedure: k6546 
o|inlining procedure: k6651 
o|inlining procedure: k6674 
o|inlining procedure: k6674 
o|inlining procedure: k6651 
o|inlining procedure: k6770 
o|inlining procedure: k6770 
o|inlining procedure: k6797 
o|inlining procedure: k6797 
o|inlining procedure: k6827 
o|inlining procedure: k6827 
o|inlining procedure: k6546 
o|inlining procedure: k6883 
o|inlining procedure: k6883 
o|inlining procedure: k6920 
o|inlining procedure: k6920 
o|inlining procedure: k6965 
o|inlining procedure: k6965 
o|inlining procedure: k6990 
o|inlining procedure: k6990 
o|inlining procedure: k7026 
o|inlining procedure: k7026 
o|removed unused parameter to known procedure: se1258 "(eval.scm:628) compile-call206" 
o|inlining procedure: k7055 
o|inlining procedure: k7055 
o|inlining procedure: k7077 
o|inlining procedure: k7077 
o|removed unused parameter to known procedure: se1258 "(eval.scm:646) compile-call206" 
o|substituted constant variable: a7130 
o|substituted constant variable: a7132 
o|substituted constant variable: a7134 
o|inlining procedure: k7138 
o|inlining procedure: k7138 
o|inlining procedure: k7150 
o|inlining procedure: k7150 
o|inlining procedure: k7162 
o|inlining procedure: k7162 
o|inlining procedure: k7174 
o|inlining procedure: k7174 
o|inlining procedure: k7186 
o|inlining procedure: k7186 
o|substituted constant variable: a7193 
o|substituted constant variable: a7195 
o|substituted constant variable: a7197 
o|substituted constant variable: a7199 
o|substituted constant variable: a7201 
o|substituted constant variable: a7203 
o|substituted constant variable: a7205 
o|substituted constant variable: a7207 
o|substituted constant variable: a7209 
o|substituted constant variable: a7211 
o|substituted constant variable: a7213 
o|substituted constant variable: a7218 
o|substituted constant variable: a7220 
o|substituted constant variable: a7222 
o|substituted constant variable: a7227 
o|substituted constant variable: a7229 
o|substituted constant variable: a7231 
o|substituted constant variable: a7236 
o|substituted constant variable: a7238 
o|substituted constant variable: a7240 
o|substituted constant variable: a7242 
o|substituted constant variable: a7244 
o|substituted constant variable: a7246 
o|substituted constant variable: a7248 
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
o|substituted constant variable: a7276 
o|substituted constant variable: a7278 
o|substituted constant variable: a7280 
o|substituted constant variable: a7282 
o|substituted constant variable: a7284 
o|substituted constant variable: a7286 
o|substituted constant variable: a7288 
o|inlining procedure: k4178 
o|removed unused parameter to known procedure: se1258 "(eval.scm:650) compile-call206" 
o|inlining procedure: k7322 
o|inlining procedure: k7322 
o|inlining procedure: k7334 
o|inlining procedure: k7334 
o|removed unused formal parameters: (se1258) 
o|inlining procedure: k7448 
o|inlining procedure: k7448 
o|inlining procedure: k7474 
o|inlining procedure: k7474 
o|inlining procedure: k7538 
o|inlining procedure: k7538 
o|inlining procedure: k7678 
o|inlining procedure: k7678 
o|inlining procedure: k7712 
o|inlining procedure: k7712 
o|substituted constant variable: a7744 
o|substituted constant variable: a7746 
o|substituted constant variable: a7748 
o|substituted constant variable: a7750 
o|substituted constant variable: a7752 
o|substituted constant variable: a7754 
o|contracted procedure: "(eval.scm:678) checked-length205" 
o|inlining procedure: k7410 
o|inlining procedure: k7410 
o|substituted constant variable: saved137813791393 
o|consed rest parameter at call site: "(eval.scm:723) chicken.eval#compile-to-closure" 3 
o|inlining procedure: k7976 
o|inlining procedure: k7976 
o|inlining procedure: k7998 
o|inlining procedure: k7998 
o|inlining procedure: k8075 
o|contracted procedure: "(eval.scm:832) g15411542" 
o|substituted constant variable: a8090 
o|inlining procedure: k8083 
o|inlining procedure: k8083 
o|inlining procedure: k8075 
o|inlining procedure: k8127 
o|inlining procedure: k8127 
o|substituted constant variable: a8143 
o|substituted constant variable: a8145 
o|inlining procedure: k8152 
o|inlining procedure: k8152 
o|substituted constant variable: a8168 
o|substituted constant variable: a8170 
o|removed side-effect free assignment to unused variable: chicken.load#partition 
o|removed side-effect free assignment to unused variable: chicken.load#span 
o|removed side-effect free assignment to unused variable: chicken.load#drop 
o|removed side-effect free assignment to unused variable: chicken.load#split-at 
o|removed side-effect free assignment to unused variable: chicken.load#append-map 
o|inlining procedure: k8552 
o|inlining procedure: k8552 
o|inlining procedure: k8583 
o|inlining procedure: k8583 
o|removed side-effect free assignment to unused variable: chicken.load#cons* 
o|removed side-effect free assignment to unused variable: chicken.load#concatenate 
o|removed side-effect free assignment to unused variable: chicken.load#first 
o|removed side-effect free assignment to unused variable: chicken.load#second 
o|removed side-effect free assignment to unused variable: chicken.load#third 
o|removed side-effect free assignment to unused variable: chicken.load#fourth 
o|removed side-effect free assignment to unused variable: chicken.load#fifth 
o|removed side-effect free assignment to unused variable: chicken.load#delete-duplicates 
o|removed side-effect free assignment to unused variable: chicken.load#alist-cons 
o|inlining procedure: k8800 
o|inlining procedure: k8800 
o|inlining procedure: k8792 
o|inlining procedure: k8792 
o|removed side-effect free assignment to unused variable: chicken.load#filter-map 
o|removed side-effect free assignment to unused variable: chicken.load#remove 
o|removed side-effect free assignment to unused variable: chicken.load#unzip1 
o|removed side-effect free assignment to unused variable: chicken.load#last 
o|removed side-effect free assignment to unused variable: chicken.load#list-index 
o|removed side-effect free assignment to unused variable: chicken.load#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.load#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.load#lset-union/eq? 
o|removed side-effect free assignment to unused variable: chicken.load#lset-intersection/eq? 
o|inlining procedure: k9191 
o|inlining procedure: k9191 
o|removed side-effect free assignment to unused variable: chicken.load#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.load#lset=/eq? 
o|removed side-effect free assignment to unused variable: chicken.load#length+ 
o|removed side-effect free assignment to unused variable: chicken.load#find 
o|removed side-effect free assignment to unused variable: chicken.load#find-tail 
o|removed side-effect free assignment to unused variable: chicken.load#iota 
o|removed side-effect free assignment to unused variable: chicken.load#make-list 
o|removed side-effect free assignment to unused variable: chicken.load#posq 
o|removed side-effect free assignment to unused variable: chicken.load#posv 
o|removed side-effect free assignment to unused variable: chicken.load#constant2172 
o|inlining procedure: k9500 
o|inlining procedure: k9500 
o|inlining procedure: k9528 
o|inlining procedure: k9528 
o|inlining procedure: k9544 
o|inlining procedure: k9544 
o|inlining procedure: k9584 
o|inlining procedure: k9607 
o|inlining procedure: k9607 
o|inlining procedure: k9621 
o|inlining procedure: k9621 
o|substituted constant variable: a9636 
o|substituted constant variable: a9638 
o|substituted constant variable: a9640 
o|substituted constant variable: a9642 
o|inlining procedure: k9584 
o|contracted procedure: "(eval.scm:1016) chicken.load#toplevel" 
o|inlining procedure: k9652 
o|inlining procedure: k9652 
o|merged explicitly consed rest parameter: rest22622265 
o|inlining procedure: k9717 
o|inlining procedure: k9717 
o|inlining procedure: k9735 
o|inlining procedure: k9735 
o|inlining procedure: k9773 
o|inlining procedure: k9773 
o|inlining procedure: k9824 
o|inlining procedure: k9824 
o|inlining procedure: k9846 
o|inlining procedure: k9846 
o|inlining procedure: k9880 
o|inlining procedure: k9897 
o|inlining procedure: k9897 
o|inlining procedure: k9880 
o|inlining procedure: k9934 
o|inlining procedure: k9934 
o|folded constant expression: (scheme#integer->char (quote 127)) 
o|inlining procedure: k9959 
o|inlining procedure: k9959 
o|inlining procedure: k9986 
o|inlining procedure: k9986 
o|inlining procedure: k10007 
o|inlining procedure: k10007 
o|inlining procedure: k10025 
o|inlining procedure: k10025 
o|consed rest parameter at call site: "(eval.scm:1106) chicken.load#load/internal" 3 
o|inlining procedure: k10092 
o|consed rest parameter at call site: "(eval.scm:1106) chicken.load#load/internal" 3 
o|inlining procedure: k10092 
o|consed rest parameter at call site: "(eval.scm:1106) chicken.load#load/internal" 3 
o|consed rest parameter at call site: "(eval.scm:1110) chicken.load#load/internal" 3 
o|consed rest parameter at call site: "(eval.scm:1113) chicken.load#load/internal" 3 
o|propagated global variable: g24382439 ##sys#string-append 
o|inlining procedure: k10177 
o|inlining procedure: k10177 
o|inlining procedure: k10256 
o|inlining procedure: k10256 
o|inlining procedure: k10355 
o|inlining procedure: k10355 
o|inlining procedure: k10411 
o|inlining procedure: k10411 
o|substituted constant variable: a10414 
o|inlining procedure: k10428 
o|inlining procedure: k10428 
o|inlining procedure: k10450 
o|inlining procedure: k10450 
o|inlining procedure: k10480 
o|inlining procedure: k10480 
o|inlining procedure: k10501 
o|inlining procedure: k10501 
o|inlining procedure: k10542 
o|inlining procedure: k10542 
o|inlining procedure: k10555 
o|inlining procedure: k10555 
o|inlining procedure: k10564 
o|inlining procedure: k10564 
o|inlining procedure: k10576 
o|inlining procedure: k10576 
o|inlining procedure: k10626 
o|inlining procedure: k10626 
o|inlining procedure: k10636 
o|inlining procedure: k10636 
o|inlining procedure: k10665 
o|inlining procedure: k10665 
o|inlining procedure: k10700 
o|inlining procedure: k10700 
o|contracted procedure: "(eval.scm:1260) chicken.load#load-extension/internal" 
o|inlining procedure: k10709 
o|inlining procedure: k10709 
o|inlining procedure: k10718 
o|inlining procedure: k10718 
o|consed rest parameter at call site: "(eval.scm:1254) chicken.load#load/internal" 3 
o|inlining procedure: k10775 
o|contracted procedure: "(eval.scm:1265) g26602682" 
o|propagated global variable: g26902691 chicken.load#load-extension 
o|inlining procedure: k10775 
o|inlining procedure: k10798 
o|contracted procedure: "(eval.scm:1264) g26502667" 
o|inlining procedure: k10798 
o|inlining procedure: k10840 
o|contracted procedure: "(eval.scm:1269) g27132735" 
o|propagated global variable: g27432744 ##sys#provide 
o|inlining procedure: k10840 
o|inlining procedure: k10863 
o|contracted procedure: "(eval.scm:1268) g27032720" 
o|inlining procedure: k10863 
o|inlining procedure: k10900 
o|contracted procedure: "(eval.scm:1272) g27562763" 
o|inlining procedure: k10900 
o|inlining procedure: k10979 
o|contracted procedure: "(eval.scm:1293) g28152816" 
o|inlining procedure: k10979 
o|inlining procedure: k11003 
o|inlining procedure: k11003 
o|inlining procedure: k11021 
o|inlining procedure: k11021 
o|substituted constant variable: chicken.load#constant2197 
o|substituted constant variable: chicken.load#constant2097 
o|inlining procedure: k11167 
o|inlining procedure: k11167 
o|inlining procedure: k11204 
o|inlining procedure: k11204 
o|inlining procedure: k11219 
o|inlining procedure: k11219 
o|inlining procedure: k11238 
o|inlining procedure: k11238 
o|inlining procedure: k11251 
o|inlining procedure: k11251 
o|inlining procedure: k11285 
o|inlining procedure: k11285 
o|inlining procedure: k11358 
o|inlining procedure: k11358 
o|inlining procedure: k11421 
o|inlining procedure: k11421 
o|propagated global variable: tmp30603062 last-error 
o|inlining procedure: k11577 
o|propagated global variable: tmp30603062 last-error 
o|inlining procedure: k11577 
o|inlining procedure: k11600 
o|inlining procedure: k11600 
o|substituted constant variable: chicken.load#constant2104 
o|substituted constant variable: a11655 
o|substituted constant variable: chicken.load#constant2115 
o|inlining procedure: k11659 
o|substituted constant variable: chicken.load#constant2109 
o|propagated global variable: r1166012297 chicken.load#constant2109 
o|inlining procedure: k11659 
o|substituted constant variable: chicken.load#constant2122 
o|inlining procedure: k11668 
o|substituted constant variable: chicken.load#constant2122 
o|inlining procedure: k11668 
o|substituted constant variable: chicken.load#constant2122 
o|substituted constant variable: chicken.load#constant2149 
o|substituted constant variable: chicken.load#constant2160 
o|inlining procedure: k11796 
o|inlining procedure: k11796 
o|inlining procedure: k11833 
o|substituted constant variable: saved144914501459 
o|consed rest parameter at call site: "(eval.scm:757) chicken.eval#compile-to-closure" 3 
o|consed rest parameter at call site: "(eval.scm:758) chicken.eval#compile-to-closure" 3 
o|inlining procedure: k11833 
o|consed rest parameter at call site: "(eval.scm:761) chicken.eval#compile-to-closure" 3 
o|consed rest parameter at call site: "(eval.scm:747) chicken.eval#compile-to-closure" 3 
o|simplifications: ((if . 1)) 
o|replaced variables: 1328 
o|removed binding forms: 466 
o|substituted constant variable: r370011944 
o|substituted constant variable: r382811952 
o|removed call to pure procedure with unused result: "(eval.scm:100) chicken.base#void" 
o|substituted constant variable: r363511959 
o|substituted constant variable: r457212006 
o|substituted constant variable: r601312066 
o|substituted constant variable: r601312066 
o|removed call to pure procedure with unused result: "(eval.scm:195) chicken.base#void" 
o|converted assignments to bindings: (err1509) 
o|substituted constant variable: r807612148 
o|substituted constant variable: r858412155 
o|removed side-effect free assignment to unused variable: chicken.load#filter 
o|removed side-effect free assignment to unused variable: chicken.load#list-tabulate 
o|removed side-effect free assignment to unused variable: chicken.load#constant2097 
o|removed side-effect free assignment to unused variable: chicken.load#constant2104 
o|removed side-effect free assignment to unused variable: chicken.load#constant2115 
o|removed side-effect free assignment to unused variable: chicken.load#constant2122 
o|removed side-effect free assignment to unused variable: chicken.load#constant2149 
o|removed side-effect free assignment to unused variable: chicken.load#constant2160 
o|removed side-effect free assignment to unused variable: chicken.load#constant2197 
o|substituted constant variable: r954512168 
o|substituted constant variable: r965312175 
o|contracted procedure: "(eval.scm:1095) g23622369" 
o|substituted constant variable: r993512195 
o|substituted constant variable: r993512195 
o|contracted procedure: k9938 
o|substituted constant variable: r996012198 
o|substituted constant variable: r1002612204 
o|substituted constant variable: r1009312205 
o|substituted constant variable: r1009312205 
o|inlining procedure: k10298 
o|substituted constant variable: r1050212229 
o|substituted constant variable: r1055612234 
o|substituted constant variable: r1056512235 
o|substituted constant variable: r1063712242 
o|substituted constant variable: r1066612244 
o|substituted constant variable: r1070112245 
o|substituted constant variable: r1070112245 
o|substituted constant variable: r1070112247 
o|substituted constant variable: r1070112247 
o|converted assignments to bindings: (check2599) 
o|contracted procedure: "(eval.scm:1273) chicken.load#every" 
o|substituted constant variable: r1125212279 
o|substituted constant variable: r1128612283 
o|substituted constant variable: r1128612283 
o|substituted constant variable: r1142212289 
o|propagated global variable: r1157812291 last-error 
o|substituted constant variable: r1157812293 
o|substituted constant variable: r1157812293 
o|converted assignments to bindings: (complete2431) 
o|substituted constant variable: chicken.load#constant2109 
o|substituted constant variable: r1166912300 
o|converted assignments to bindings: (strip1530) 
o|simplifications: ((let . 4)) 
o|replaced variables: 23 
o|removed binding forms: 1375 
o|removed conditional forms: 1 
o|contracted procedure: k3771 
o|removed unused formal parameters: (h262 cntr263) 
o|contracted procedure: k4190 
o|inlining procedure: k4503 
o|removed unused parameter to known procedure: h262 "(eval.scm:384) decorate202" 
o|removed unused parameter to known procedure: cntr263 "(eval.scm:384) decorate202" 
o|removed unused parameter to known procedure: h262 "(eval.scm:389) decorate202" 
o|removed unused parameter to known procedure: cntr263 "(eval.scm:389) decorate202" 
o|removed unused parameter to known procedure: h262 "(eval.scm:394) decorate202" 
o|removed unused parameter to known procedure: cntr263 "(eval.scm:394) decorate202" 
o|removed unused parameter to known procedure: h262 "(eval.scm:399) decorate202" 
o|removed unused parameter to known procedure: cntr263 "(eval.scm:399) decorate202" 
o|removed unused parameter to known procedure: h262 "(eval.scm:405) decorate202" 
o|removed unused parameter to known procedure: cntr263 "(eval.scm:405) decorate202" 
o|removed unused parameter to known procedure: h262 "(eval.scm:410) decorate202" 
o|removed unused parameter to known procedure: cntr263 "(eval.scm:410) decorate202" 
o|removed unused parameter to known procedure: h262 "(eval.scm:416) decorate202" 
o|removed unused parameter to known procedure: cntr263 "(eval.scm:416) decorate202" 
o|removed unused parameter to known procedure: h262 "(eval.scm:421) decorate202" 
o|removed unused parameter to known procedure: cntr263 "(eval.scm:421) decorate202" 
o|removed unused parameter to known procedure: h262 "(eval.scm:427) decorate202" 
o|removed unused parameter to known procedure: cntr263 "(eval.scm:427) decorate202" 
o|removed unused parameter to known procedure: h262 "(eval.scm:432) decorate202" 
o|removed unused parameter to known procedure: cntr263 "(eval.scm:432) decorate202" 
o|removed unused parameter to known procedure: h262 "(eval.scm:439) decorate202" 
o|removed unused parameter to known procedure: cntr263 "(eval.scm:439) decorate202" 
o|removed unused parameter to known procedure: h262 "(eval.scm:446) decorate202" 
o|removed unused parameter to known procedure: cntr263 "(eval.scm:446) decorate202" 
o|inlining procedure: k6369 
o|removed side-effect free assignment to unused variable: chicken.load#constant2109 
o|inlining procedure: k9593 
o|inlining procedure: k9593 
o|inlining procedure: k9593 
o|inlining procedure: k9593 
o|substituted constant variable: r9939 
o|inlining procedure: k10013 
o|inlining procedure: k10013 
o|propagated global variable: r1157812291 last-error 
o|replaced variables: 45 
o|removed binding forms: 70 
o|substituted constant variable: r637012498 
o|substituted constant variable: r1001412548 
o|substituted constant variable: r1001412548 
o|replaced variables: 2 
o|removed binding forms: 38 
o|removed conditional forms: 2 
o|removed binding forms: 3 
o|simplifications: ((if . 61) (##core#call . 752)) 
o|  call simplifications:
o|    ##sys#check-structure
o|    scheme#memq	5
o|    scheme#list?
o|    scheme#string-ref
o|    scheme#char=?
o|    ##sys#check-symbol	4
o|    ##sys#check-string
o|    scheme#call-with-current-continuation
o|    ##sys#size	4
o|    chicken.fixnum#fx<
o|    chicken.fixnum#fx>
o|    scheme#procedure?
o|    scheme#boolean?
o|    scheme#char?
o|    scheme#eof-object?	3
o|    scheme#string?	6
o|    scheme#vector?
o|    ##sys#void
o|    scheme#set-car!
o|    chicken.fixnum#fx=	3
o|    chicken.fixnum#fx-	5
o|    scheme#apply	7
o|    scheme#list	14
o|    ##sys#list	20
o|    ##sys#check-list	15
o|    chicken.fixnum#fx>=	2
o|    scheme#cddr	8
o|    scheme#car	37
o|    scheme#vector	12
o|    scheme#cdr	24
o|    scheme#length	2
o|    ##sys#cons	18
o|    scheme#caddr	7
o|    scheme#cdddr	4
o|    scheme#pair?	38
o|    scheme#cadddr	4
o|    scheme#cadr	33
o|    scheme#assq	5
o|    scheme#cons	64
o|    ##sys#setslot	28
o|    ##sys#immediate?
o|    scheme#not	26
o|    ##sys#make-structure	2
o|    ##sys#slot	143
o|    chicken.fixnum#fx+	6
o|    scheme#values	11
o|    ##sys#call-with-values	9
o|    ##sys#apply	4
o|    scheme#null?	50
o|    scheme#caar
o|    scheme#eq?	103
o|    scheme#symbol?	10
o|contracted procedure: k7820 
o|contracted procedure: k3672 
o|contracted procedure: k7814 
o|contracted procedure: k3675 
o|contracted procedure: k7808 
o|contracted procedure: k3678 
o|contracted procedure: k7802 
o|contracted procedure: k3681 
o|contracted procedure: k7796 
o|contracted procedure: k3684 
o|contracted procedure: k7790 
o|contracted procedure: k3687 
o|contracted procedure: k7784 
o|contracted procedure: k3690 
o|contracted procedure: k7778 
o|contracted procedure: k3693 
o|contracted procedure: k3702 
o|contracted procedure: k3728 
o|contracted procedure: k3718 
o|contracted procedure: k3783 
o|contracted procedure: k3807 
o|contracted procedure: k3811 
o|contracted procedure: k3815 
o|contracted procedure: k3830 
o|contracted procedure: k3851 
o|contracted procedure: k3836 
o|contracted procedure: k3843 
o|contracted procedure: k3847 
o|contracted procedure: k3861 
o|contracted procedure: k3865 
o|contracted procedure: k3875 
o|contracted procedure: k3641 
o|contracted procedure: k3637 
o|contracted procedure: k3647 
o|contracted procedure: k3898 
o|contracted procedure: k3916 
o|contracted procedure: k3928 
o|contracted procedure: k3957 
o|contracted procedure: k3953 
o|contracted procedure: k3960 
o|contracted procedure: k3996 
o|contracted procedure: k3973 
o|contracted procedure: k3979 
o|contracted procedure: k3985 
o|contracted procedure: k4002 
o|contracted procedure: k4011 
o|contracted procedure: k4017 
o|contracted procedure: k4030 
o|contracted procedure: k4026 
o|contracted procedure: k4036 
o|contracted procedure: k4053 
o|contracted procedure: k4049 
o|contracted procedure: k4045 
o|contracted procedure: k4059 
o|contracted procedure: k4080 
o|contracted procedure: k4076 
o|contracted procedure: k4072 
o|contracted procedure: k4068 
o|contracted procedure: k4106 
o|contracted procedure: k4114 
o|contracted procedure: k4122 
o|contracted procedure: k4130 
o|contracted procedure: k4148 
o|contracted procedure: k4161 
o|contracted procedure: k7316 
o|contracted procedure: k4172 
o|contracted procedure: k7312 
o|contracted procedure: k4181 
o|contracted procedure: k7294 
o|contracted procedure: k4196 
o|contracted procedure: k4208 
o|contracted procedure: k4217 
o|contracted procedure: k4225 
o|contracted procedure: k4233 
o|contracted procedure: k4241 
o|contracted procedure: k4249 
o|contracted procedure: k4257 
o|contracted procedure: k4265 
o|contracted procedure: k4287 
o|contracted procedure: k4293 
o|contracted procedure: k4296 
o|contracted procedure: k4304 
o|contracted procedure: k4311 
o|contracted procedure: k4317 
o|contracted procedure: k4324 
o|contracted procedure: k4330 
o|contracted procedure: k4338 
o|contracted procedure: k4378 
o|contracted procedure: k4364 
o|contracted procedure: k4371 
o|contracted procedure: k4382 
o|contracted procedure: k4386 
o|contracted procedure: k4392 
o|contracted procedure: k4395 
o|contracted procedure: k4398 
o|contracted procedure: k4404 
o|contracted procedure: k4413 
o|contracted procedure: k4420 
o|contracted procedure: k4426 
o|contracted procedure: k4444 
o|contracted procedure: k4448 
o|contracted procedure: k4480 
o|contracted procedure: k4476 
o|contracted procedure: k4472 
o|contracted procedure: k4484 
o|contracted procedure: k4488 
o|contracted procedure: k4500 
o|contracted procedure: k4513 
o|contracted procedure: k4519 
o|contracted procedure: k4522 
o|contracted procedure: k4543 
o|contracted procedure: k4568 
o|contracted procedure: k4584 
o|contracted procedure: k4574 
o|contracted procedure: k4601 
o|contracted procedure: k4619 
o|contracted procedure: k4625 
o|contracted procedure: k4628 
o|contracted procedure: k4631 
o|contracted procedure: k4634 
o|contracted procedure: k4645 
o|contracted procedure: k4648 
o|contracted procedure: k4654 
o|contracted procedure: k4666 
o|contracted procedure: k4682 
o|contracted procedure: k4678 
o|contracted procedure: k4694 
o|contracted procedure: k4700 
o|contracted procedure: k4719 
o|contracted procedure: k4715 
o|contracted procedure: k4735 
o|contracted procedure: k4743 
o|contracted procedure: k4749 
o|contracted procedure: k4758 
o|contracted procedure: k4774 
o|contracted procedure: k4770 
o|contracted procedure: k4794 
o|contracted procedure: k4802 
o|contracted procedure: k4810 
o|contracted procedure: k4816 
o|contracted procedure: k4825 
o|contracted procedure: k4844 
o|contracted procedure: k4840 
o|contracted procedure: k4868 
o|contracted procedure: k4876 
o|contracted procedure: k4884 
o|contracted procedure: k4892 
o|contracted procedure: k4895 
o|contracted procedure: k4904 
o|contracted procedure: k4924 
o|contracted procedure: k4933 
o|contracted procedure: k4936 
o|contracted procedure: k4943 
o|contracted procedure: k4947 
o|contracted procedure: k4954 
o|contracted procedure: k4963 
o|contracted procedure: k4966 
o|contracted procedure: k4969 
o|contracted procedure: k4977 
o|contracted procedure: k4985 
o|contracted procedure: k5027 
o|contracted procedure: k5054 
o|contracted procedure: k5057 
o|contracted procedure: k5060 
o|contracted procedure: k5068 
o|contracted procedure: k5076 
o|contracted procedure: k5088 
o|contracted procedure: k5110 
o|contracted procedure: k5106 
o|contracted procedure: k5091 
o|contracted procedure: k5094 
o|contracted procedure: k5102 
o|contracted procedure: k5119 
o|contracted procedure: k5122 
o|contracted procedure: k5139 
o|contracted procedure: k5151 
o|contracted procedure: k5135 
o|contracted procedure: k5131 
o|contracted procedure: k5162 
o|contracted procedure: k5190 
o|contracted procedure: k5186 
o|contracted procedure: k5182 
o|contracted procedure: k5199 
o|contracted procedure: k5202 
o|contracted procedure: k5205 
o|contracted procedure: k5213 
o|contracted procedure: k5221 
o|contracted procedure: k5171 
o|contracted procedure: k5175 
o|contracted procedure: k5233 
o|contracted procedure: k5236 
o|contracted procedure: k5239 
o|contracted procedure: k5247 
o|contracted procedure: k5255 
o|contracted procedure: k5148 
o|contracted procedure: k5264 
o|contracted procedure: k5267 
o|contracted procedure: k5270 
o|contracted procedure: k5273 
o|contracted procedure: k5279 
o|contracted procedure: k5282 
o|contracted procedure: k5288 
o|contracted procedure: k5299 
o|contracted procedure: k5323 
o|contracted procedure: k5335 
o|contracted procedure: k5319 
o|contracted procedure: k5315 
o|contracted procedure: k5295 
o|contracted procedure: k5346 
o|contracted procedure: k5366 
o|contracted procedure: k5362 
o|contracted procedure: k5358 
o|contracted procedure: k5411 
o|contracted procedure: k5375 
o|contracted procedure: k5401 
o|contracted procedure: k5405 
o|contracted procedure: k5397 
o|contracted procedure: k5378 
o|contracted procedure: k5381 
o|contracted procedure: k5389 
o|contracted procedure: k5393 
o|contracted procedure: k5459 
o|contracted procedure: k5423 
o|contracted procedure: k5426 
o|contracted procedure: k5429 
o|contracted procedure: k5437 
o|contracted procedure: k5441 
o|contracted procedure: k5449 
o|contracted procedure: k5453 
o|contracted procedure: k5332 
o|contracted procedure: k5471 
o|contracted procedure: k5474 
o|contracted procedure: k5477 
o|contracted procedure: k5485 
o|contracted procedure: k5493 
o|contracted procedure: k5308 
o|contracted procedure: k5505 
o|contracted procedure: k5508 
o|contracted procedure: k5511 
o|contracted procedure: k5519 
o|contracted procedure: k5527 
o|contracted procedure: k5539 
o|contracted procedure: k5561 
o|contracted procedure: k5557 
o|contracted procedure: k5542 
o|contracted procedure: k5545 
o|contracted procedure: k5553 
o|contracted procedure: k5570 
o|contracted procedure: k5576 
o|contracted procedure: k5581 
o|contracted procedure: k5593 
o|contracted procedure: k5596 
o|contracted procedure: k5605 
o|contracted procedure: k5614 
o|contracted procedure: k5636 
o|contracted procedure: k5632 
o|contracted procedure: k5651 
o|contracted procedure: k5657 
o|contracted procedure: k5679 
o|contracted procedure: k5675 
o|contracted procedure: k5698 
o|contracted procedure: k5694 
o|contracted procedure: k5704 
o|contracted procedure: k5726 
o|contracted procedure: k5722 
o|contracted procedure: k5745 
o|contracted procedure: k5741 
o|contracted procedure: k5751 
o|contracted procedure: k5773 
o|contracted procedure: k5769 
o|contracted procedure: k5792 
o|contracted procedure: k5788 
o|contracted procedure: k5798 
o|contracted procedure: k5820 
o|contracted procedure: k5816 
o|contracted procedure: k5835 
o|contracted procedure: k5857 
o|contracted procedure: k7352 
o|contracted procedure: k7367 
o|contracted procedure: k7374 
o|contracted procedure: k7370 
o|contracted procedure: k7381 
o|contracted procedure: k7385 
o|contracted procedure: k7392 
o|inlining procedure: k7389 
o|contracted procedure: k5898 
o|contracted procedure: k5880 
o|contracted procedure: k5890 
o|contracted procedure: k5962 
o|contracted procedure: k5965 
o|contracted procedure: k5968 
o|contracted procedure: k5976 
o|contracted procedure: k5984 
o|contracted procedure: k6022 
o|contracted procedure: k6059 
o|contracted procedure: k6077 
o|contracted procedure: k6111 
o|contracted procedure: k6114 
o|contracted procedure: k6130 
o|contracted procedure: k6133 
o|contracted procedure: k6136 
o|contracted procedure: k6144 
o|contracted procedure: k6152 
o|contracted procedure: k6086 
o|contracted procedure: k6108 
o|contracted procedure: k6161 
o|contracted procedure: k6164 
o|contracted procedure: k6194 
o|contracted procedure: k6197 
o|contracted procedure: k6212 
o|contracted procedure: k6215 
o|contracted procedure: k6252 
o|contracted procedure: k6275 
o|contracted procedure: k6285 
o|contracted procedure: k6289 
o|contracted procedure: k6302 
o|contracted procedure: k6305 
o|contracted procedure: k6308 
o|contracted procedure: k6316 
o|contracted procedure: k6324 
o|contracted procedure: k6173 
o|contracted procedure: k6191 
o|contracted procedure: k6333 
o|contracted procedure: k6336 
o|contracted procedure: k6339 
o|contracted procedure: k6379 
o|contracted procedure: k6369 
o|contracted procedure: k6389 
o|contracted procedure: k6398 
o|contracted procedure: k6409 
o|contracted procedure: k6419 
o|contracted procedure: k6426 
o|contracted procedure: k6430 
o|contracted procedure: k6465 
o|contracted procedure: k6443 
o|contracted procedure: k6458 
o|inlining procedure: k6440 
o|contracted procedure: k6471 
o|contracted procedure: k6478 
o|contracted procedure: k6489 
o|contracted procedure: k6492 
o|contracted procedure: k6509 
o|contracted procedure: k6505 
o|contracted procedure: k6518 
o|contracted procedure: k6521 
o|contracted procedure: k6524 
o|contracted procedure: k6532 
o|contracted procedure: k6540 
o|contracted procedure: k6549 
o|contracted procedure: k6555 
o|contracted procedure: k6859 
o|contracted procedure: k6558 
o|contracted procedure: k6645 
o|contracted procedure: k6654 
o|contracted procedure: k6677 
o|contracted procedure: k6683 
o|contracted procedure: k6689 
o|contracted procedure: k6715 
o|contracted procedure: k6719 
o|contracted procedure: k6765 
o|contracted procedure: k6773 
o|contracted procedure: k6785 
o|contracted procedure: k6794 
o|contracted procedure: k6812 
o|contracted procedure: k6803 
o|contracted procedure: k6818 
o|contracted procedure: k6830 
o|contracted procedure: k6833 
o|contracted procedure: k6836 
o|contracted procedure: k6844 
o|contracted procedure: k6852 
o|contracted procedure: k6865 
o|contracted procedure: k6880 
o|contracted procedure: k6872 
o|contracted procedure: k6886 
o|contracted procedure: k6901 
o|contracted procedure: k6897 
o|contracted procedure: k6893 
o|contracted procedure: k6907 
o|contracted procedure: k6917 
o|contracted procedure: k6923 
o|contracted procedure: k6926 
o|contracted procedure: k6949 
o|contracted procedure: k6952 
o|contracted procedure: k6962 
o|contracted procedure: k6968 
o|contracted procedure: k6975 
o|contracted procedure: k6981 
o|contracted procedure: k6984 
o|contracted procedure: k6993 
o|contracted procedure: k7005 
o|contracted procedure: k7008 
o|contracted procedure: k7023 
o|contracted procedure: k7015 
o|contracted procedure: k7029 
o|contracted procedure: k7041 
o|contracted procedure: k7048 
o|contracted procedure: k7058 
o|contracted procedure: k7065 
o|contracted procedure: k7071 
o|contracted procedure: k7074 
o|contracted procedure: k7086 
o|contracted procedure: k7100 
o|contracted procedure: k7103 
o|contracted procedure: k7135 
o|contracted procedure: k7141 
o|contracted procedure: k7147 
o|contracted procedure: k7153 
o|contracted procedure: k7159 
o|contracted procedure: k7165 
o|contracted procedure: k7171 
o|contracted procedure: k7177 
o|contracted procedure: k7183 
o|contracted procedure: k7290 
o|contracted procedure: k7319 
o|contracted procedure: k7325 
o|contracted procedure: k7337 
o|contracted procedure: k7436 
o|contracted procedure: k7442 
o|contracted procedure: k7451 
o|contracted procedure: k7460 
o|contracted procedure: k7477 
o|contracted procedure: k7499 
o|contracted procedure: k7505 
o|contracted procedure: k7535 
o|contracted procedure: k7541 
o|contracted procedure: k7579 
o|contracted procedure: k7585 
o|contracted procedure: k7631 
o|contracted procedure: k7634 
o|contracted procedure: k7642 
o|contracted procedure: k7661 
o|contracted procedure: k7669 
o|contracted procedure: k7681 
o|contracted procedure: k7684 
o|contracted procedure: k7687 
o|contracted procedure: k7695 
o|contracted procedure: k7703 
o|contracted procedure: k7715 
o|contracted procedure: k7718 
o|contracted procedure: k7721 
o|contracted procedure: k7729 
o|contracted procedure: k7737 
o|contracted procedure: k7413 
o|contracted procedure: k7419 
o|contracted procedure: k7426 
o|contracted procedure: k7430 
o|contracted procedure: k7755 
o|contracted procedure: k7764 
o|contracted procedure: k7771 
o|contracted procedure: k7979 
o|contracted procedure: k7992 
o|contracted procedure: k8009 
o|contracted procedure: k8015 
o|contracted procedure: k8025 
o|contracted procedure: k8037 
o|contracted procedure: k8029 
o|contracted procedure: k8033 
o|contracted procedure: k8043 
o|contracted procedure: k8066 
o|contracted procedure: k8078 
o|contracted procedure: k8098 
o|contracted procedure: k8087 
o|contracted procedure: k8106 
o|contracted procedure: k8109 
o|contracted procedure: k8112 
o|contracted procedure: k8115 
o|contracted procedure: k8118 
o|contracted procedure: k8130 
o|contracted procedure: k8136 
o|contracted procedure: k8155 
o|contracted procedure: k8161 
o|contracted procedure: k8586 
o|contracted procedure: k8601 
o|contracted procedure: k11693 
o|contracted procedure: k9461 
o|contracted procedure: k9484 
o|contracted procedure: k9519 
o|contracted procedure: k9494 
o|contracted procedure: k9508 
o|contracted procedure: k9515 
o|contracted procedure: k9531 
o|contracted procedure: k9541 
o|contracted procedure: k9548 
o|contracted procedure: k9554 
o|contracted procedure: k9643 
o|contracted procedure: k9572 
o|contracted procedure: k9587 
o|contracted procedure: k9590 
o|contracted procedure: k9600 
o|contracted procedure: k9603 
o|contracted procedure: k960012528 
o|contracted procedure: k9610 
o|contracted procedure: k960012532 
o|contracted procedure: k9617 
o|contracted procedure: k960012536 
o|contracted procedure: k9624 
o|contracted procedure: k960012540 
o|contracted procedure: k9632 
o|contracted procedure: k9655 
o|contracted procedure: k9666 
o|contracted procedure: k10083 
o|contracted procedure: k9686 
o|contracted procedure: k10077 
o|contracted procedure: k9689 
o|contracted procedure: k10071 
o|contracted procedure: k9692 
o|contracted procedure: k10065 
o|contracted procedure: k9695 
o|contracted procedure: k10059 
o|contracted procedure: k9698 
o|contracted procedure: k10053 
o|contracted procedure: k9701 
o|contracted procedure: k10047 
o|contracted procedure: k9704 
o|contracted procedure: k10041 
o|contracted procedure: k9707 
o|contracted procedure: k9711 
o|contracted procedure: k9741 
o|removed unused formal parameters: (abrt2320) 
o|contracted procedure: k9827 
o|contracted procedure: k9900 
o|contracted procedure: k9910 
o|contracted procedure: k9914 
o|contracted procedure: k9920 
o|removed unused parameter to known procedure: abrt2320 a9779 
o|contracted procedure: k9965 
o|contracted procedure: k10032 
o|contracted procedure: k9989 
o|contracted procedure: k10035 
o|contracted procedure: k10098 
o|contracted procedure: k10092 
o|contracted procedure: k10116 
o|contracted procedure: k10107 
o|contracted procedure: k10180 
o|contracted procedure: k10200 
o|contracted procedure: k10208 
o|contracted procedure: k10238 
o|contracted procedure: k10283 
o|contracted procedure: k10244 
o|contracted procedure: k10277 
o|contracted procedure: k10247 
o|contracted procedure: k10271 
o|contracted procedure: k10250 
o|contracted procedure: k10265 
o|contracted procedure: k10253 
o|contracted procedure: k10310 
o|contracted procedure: k10292 
o|contracted procedure: k10295 
o|contracted procedure: k10304 
o|contracted procedure: k10298 
o|contracted procedure: k10358 
o|contracted procedure: k10376 
o|contracted procedure: k10390 
o|contracted procedure: k10408 
o|contracted procedure: k10425 
o|contracted procedure: k10431 
o|contracted procedure: k10464 
o|contracted procedure: k10470 
o|contracted procedure: k10474 
o|contracted procedure: k10477 
o|contracted procedure: k10483 
o|contracted procedure: k10492 
o|contracted procedure: k10504 
o|contracted procedure: k10511 
o|contracted procedure: k10533 
o|contracted procedure: k10529 
o|contracted procedure: k10518 
o|contracted procedure: k10526 
o|contracted procedure: k10536 
o|contracted procedure: k10545 
o|contracted procedure: k10567 
o|contracted procedure: k10573 
o|contracted procedure: k10579 
o|contracted procedure: k10586 
o|contracted procedure: k10605 
o|contracted procedure: k10639 
o|contracted procedure: k10668 
o|contracted procedure: k10671 
o|contracted procedure: k10684 
o|contracted procedure: k10688 
o|contracted procedure: k10692 
o|contracted procedure: k10696 
o|contracted procedure: k10721 
o|contracted procedure: k10778 
o|contracted procedure: k10788 
o|contracted procedure: k10792 
o|contracted procedure: k10801 
o|contracted procedure: k10815 
o|contracted procedure: k10804 
o|contracted procedure: k10811 
o|contracted procedure: k10843 
o|contracted procedure: k10853 
o|contracted procedure: k10857 
o|contracted procedure: k10866 
o|contracted procedure: k10880 
o|contracted procedure: k10869 
o|contracted procedure: k10876 
o|contracted procedure: k8549 
o|contracted procedure: k8558 
o|contracted procedure: k8571 
o|contracted procedure: k10903 
o|contracted procedure: k10917 
o|contracted procedure: k10906 
o|contracted procedure: k10913 
o|contracted procedure: k11151 
o|contracted procedure: k10943 
o|contracted procedure: k11145 
o|contracted procedure: k10946 
o|contracted procedure: k11139 
o|contracted procedure: k10949 
o|contracted procedure: k11133 
o|contracted procedure: k10952 
o|contracted procedure: k11127 
o|contracted procedure: k10955 
o|contracted procedure: k11121 
o|contracted procedure: k10958 
o|contracted procedure: k11115 
o|contracted procedure: k10961 
o|contracted procedure: k11109 
o|contracted procedure: k10964 
o|contracted procedure: k11103 
o|contracted procedure: k10967 
o|contracted procedure: k11097 
o|contracted procedure: k10970 
o|contracted procedure: k10976 
o|contracted procedure: k10988 
o|contracted procedure: k10997 
o|contracted procedure: k11006 
o|contracted procedure: k11024 
o|contracted procedure: k11038 
o|contracted procedure: k11034 
o|contracted procedure: k11049 
o|contracted procedure: k11045 
o|contracted procedure: k11055 
o|contracted procedure: k11069 
o|contracted procedure: k11065 
o|contracted procedure: k11080 
o|contracted procedure: k11084 
o|contracted procedure: k11088 
o|contracted procedure: k11076 
o|contracted procedure: k11158 
o|contracted procedure: k11170 
o|contracted procedure: k11194 
o|contracted procedure: k11207 
o|contracted procedure: k11213 
o|inlining procedure: k11204 
o|contracted procedure: k11222 
o|inlining procedure: k11204 
o|contracted procedure: k11254 
o|contracted procedure: k11267 
o|contracted procedure: k11275 
o|contracted procedure: k11418 
o|contracted procedure: k11424 
o|contracted procedure: k11585 
o|contracted procedure: k11594 
o|contracted procedure: k11603 
o|contracted procedure: k11606 
o|contracted procedure: k11609 
o|contracted procedure: k11617 
o|contracted procedure: k11625 
o|contracted procedure: k11640 
o|contracted procedure: k11656 
o|contracted procedure: k11662 
o|contracted procedure: k11671 
o|contracted procedure: k11668 
o|contracted procedure: k11705 
o|contracted procedure: k11713 
o|contracted procedure: k11721 
o|contracted procedure: k11729 
o|contracted procedure: k11745 
o|contracted procedure: k11768 
o|contracted procedure: k11764 
o|contracted procedure: k11799 
o|contracted procedure: k11806 
o|contracted procedure: k11813 
o|contracted procedure: k11938 
o|contracted procedure: k11824 
o|contracted procedure: k11836 
o|contracted procedure: k11839 
o|contracted procedure: k11888 
o|contracted procedure: k11917 
o|contracted procedure: k11931 
o|contracted procedure: k11935 
o|contracted procedure: k11927 
o|simplifications: ((if . 1) (let . 120)) 
o|removed binding forms: 679 
o|contracted procedure: "(eval.scm:1039) dload-path2281" 
o|replaced variables: 231 
o|removed binding forms: 2 
o|inlining procedure: k5865 
o|simplifications: ((if . 1)) 
o|replaced variables: 1 
o|removed binding forms: 117 
o|contracted procedure: k5217 
o|contracted procedure: k5251 
o|contracted procedure: k5445 
o|contracted procedure: k5489 
o|removed binding forms: 5 
o|direct leaf routine/allocation: loop244 0 
o|direct leaf routine/allocation: emit-trace-info200 5 
o|direct leaf routine/allocation: emit-syntax-trace-info201 0 
o|direct leaf routine/allocation: g950964 0 
o|direct leaf routine/allocation: loop1055 0 
o|direct leaf routine/allocation: loop1246 0 
o|direct leaf routine/allocation: loop2216 0 
o|direct leaf routine/allocation: sep?2551 0 
o|direct leaf routine/allocation: for-each-loop26492677 0 
o|direct leaf routine/allocation: for-each-loop27022730 0 
o|direct leaf routine/allocation: for-each-loop27552773 0 
o|direct leaf routine/allocation: store-string 0 
o|contracted procedure: k3789 
o|converted assignments to bindings: (loop244) 
o|contracted procedure: "(eval.scm:193) k4184" 
o|contracted procedure: "(eval.scm:481) k6278" 
o|converted assignments to bindings: (loop1055) 
o|contracted procedure: "(eval.scm:649) k7301" 
o|contracted procedure: k7445 
o|contracted procedure: "(eval.scm:683) k7465" 
o|contracted procedure: "(eval.scm:687) k7485" 
o|contracted procedure: "(eval.scm:692) k7516" 
o|contracted procedure: "(eval.scm:698) k7555" 
o|contracted procedure: "(eval.scm:705) k7602" 
o|contracted procedure: "(eval.scm:709) k7650" 
o|converted assignments to bindings: (loop1246) 
o|converted assignments to bindings: (loop2216) 
o|contracted procedure: "(eval.scm:1206) k10440" 
o|contracted procedure: "(eval.scm:1208) k10453" 
o|contracted procedure: k10761 
o|converted assignments to bindings: (for-each-loop26492677) 
o|contracted procedure: k10826 
o|converted assignments to bindings: (for-each-loop27022730) 
o|contracted procedure: k10891 
o|converted assignments to bindings: (for-each-loop27552773) 
o|simplifications: ((let . 7)) 
o|removed binding forms: 16 
o|replaced variables: 5 
o|removed binding forms: 2 
o|direct leaf routine/allocation: for-each-loop949967 0 
o|contracted procedure: k6218 
o|converted assignments to bindings: (for-each-loop949967) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 1 
o|customizable procedures: (doloop14961497 k11757 strip1530 k9465 k9474 map-loop24422459 store-result run-safe test2850 loop2864 test-extensions2849 loop1733 for-each-loop27122745 for-each-loop26592692 chicken.load#any g26362637 check2599 loop2608 chicken.load#file-exists? loop2561 check2569 err2550 doloop25372538 chicken.load#load-library/internal k10162 loop2478 chicken.load#make-relative-pathname chicken.load#load/internal k10004 dload2282 a9779 for-each-loop23612373 doloop23512352 chicken.load#c-toplevel loop2235 chicken.load#path-separator-index/right loop1746 foldr15361539 loop1511 err1509 g13101319 map-loop13041322 g13381347 map-loop13321350 k7032 g12191220 compile-call206 g10381047 map-loop10321062 k6779 loop1119 loop21124 map-loop9951014 map-loop921939 map-loop886904 map-loop781798 doloop12371238 decorate202 map-loop613630 map-loop640657 map-loop670688 map-loop697718 map-loop730754 map-loop554572 map-loop581602 map-loop417435 map-loop445462 chicken.eval#compile-to-closure g519528 map-loop513531 doloop540541 compile203 k3949 k3922 lookup198 rename197 loop228 g237238 k3708 find-id196) 
o|calls to known targets: 324 
o|identified direct recursive calls: f_3825 1 
o|identified direct recursive calls: f_3778 1 
o|unused rest argument: v274 f_3893 
o|unused rest argument: v295 f_3942 
o|unused rest argument: v296 f_3947 
o|unused rest argument: v315 f_4109 
o|unused rest argument: v316 f_4117 
o|unused rest argument: v317 f_4125 
o|unused rest argument: v318 f_4133 
o|unused rest argument: v319 f_4135 
o|unused rest argument: v320 f_4154 
o|unused rest argument: v321 f_4156 
o|unused rest argument: v337 f_4167 
o|unused rest argument: v354 f_4220 
o|unused rest argument: v355 f_4228 
o|unused rest argument: v356 f_4236 
o|unused rest argument: v357 f_4244 
o|unused rest argument: v358 f_4252 
o|unused rest argument: v359 f_4260 
o|unused rest argument: v360 f_4268 
o|unused rest argument: v361 f_4270 
o|unused rest argument: v363 f_4299 
o|identified direct recursive calls: f_5083 1 
o|identified direct recursive calls: f_5194 1 
o|identified direct recursive calls: f_5228 1 
o|identified direct recursive calls: f_5370 1 
o|identified direct recursive calls: f_5418 1 
o|identified direct recursive calls: f_5466 1 
o|identified direct recursive calls: f_5534 1 
o|identified direct recursive calls: f_7362 1 
o|identified direct recursive calls: f_6270 1 
o|identified direct recursive calls: f_6792 1 
o|identified direct recursive calls: f_7408 1 
o|unused rest argument: _1261 f_7758 
o|identified direct recursive calls: f_7974 1 
o|identified direct recursive calls: f_8073 1 
o|identified direct recursive calls: f_9498 1 
o|identified direct recursive calls: f_9582 4 
o|identified direct recursive calls: f_10796 1 
o|identified direct recursive calls: f_10861 1 
o|identified direct recursive calls: f_10898 1 
o|fast box initializations: 53 
o|fast global references: 72 
o|fast global assignments: 32 
o|dropping unused closure argument: f_10160 
o|dropping unused closure argument: f_10406 
o|dropping unused closure argument: f_10553 
o|dropping unused closure argument: f_10796 
o|dropping unused closure argument: f_10861 
o|dropping unused closure argument: f_10898 
o|dropping unused closure argument: f_11294 
o|dropping unused closure argument: f_11353 
o|dropping unused closure argument: f_11416 
o|dropping unused closure argument: f_3670 
o|dropping unused closure argument: f_3855 
o|dropping unused closure argument: f_3869 
o|dropping unused closure argument: f_3879 
o|dropping unused closure argument: f_6792 
o|dropping unused closure argument: f_7408 
o|dropping unused closure argument: f_8064 
o|dropping unused closure argument: f_8575 
o|dropping unused closure argument: f_9488 
o|dropping unused closure argument: f_9523 
o|dropping unused closure argument: f_9670 
*/
/* end of file */

/* Generated from chicken-syntax.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: chicken-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file chicken-syntax.c
   unit: chicken-syntax
   uses: expand internal library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[285];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,12),40,116,97,107,101,32,108,115,116,32,110,41,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,16),40,97,53,54,55,52,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,16),40,97,53,55,50,51,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,13),40,97,53,56,49,50,32,120,32,114,32,99,41,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,16),40,97,53,56,51,48,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,27),40,108,111,111,112,32,120,115,32,118,97,114,115,32,98,115,32,118,97,108,115,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,16),40,97,53,56,57,53,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,120,115,32,118,97,114,115,32,118,97,108,115,32,114,101,115,116,41};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,16),40,97,54,48,57,48,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,7),40,103,51,48,52,52,41,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,115,108,111,116,115,32,105,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,48,51,56,32,103,51,48,53,48,41,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,48,48,57,32,103,51,48,50,49,41,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,16),40,97,54,50,54,50,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,16),40,97,54,54,54,49,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,11),40,103,101,110,118,97,114,115,32,110,41,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,110,32,112,114,101,118,32,110,111,100,101,41,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,7),40,97,54,57,48,50,41,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,50,57,51,51,32,103,50,57,52,53,32,103,50,57,52,54,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,19),40,98,117,105,108,100,32,118,97,114,115,50,32,118,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,19),40,97,54,57,49,50,32,118,97,114,115,49,32,118,97,114,115,50,41,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,22),40,97,54,56,56,50,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,14),40,103,50,56,57,48,32,99,32,98,111,100,121,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,17),40,102,111,108,100,114,50,56,56,53,32,103,50,56,56,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,22),40,97,55,49,52,52,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,56,52,50,32,103,50,56,53,52,41,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,16),40,97,54,55,55,52,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,32,97,114,103,115,32,118,97,114,100,101,102,115,41,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,16),40,97,55,50,49,56,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,16),40,97,55,51,55,56,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,36),40,114,101,99,117,114,32,118,97,114,115,32,100,101,102,97,117,108,116,101,114,115,32,110,111,110,45,100,101,102,97,117,108,116,115,41,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,45),40,109,97,107,101,45,105,102,45,116,114,101,101,32,118,97,114,115,32,100,101,102,97,117,108,116,101,114,115,32,98,111,100,121,45,112,114,111,99,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,23),40,112,114,101,102,105,120,45,115,121,109,32,112,114,101,102,105,120,32,115,121,109,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,9),40,103,50,54,57,53,32,118,41,0,0,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,11),40,103,50,55,53,50,32,118,97,114,41,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,42),40,114,101,99,117,114,32,118,97,114,115,32,100,101,102,97,117,108,116,101,114,45,110,97,109,101,115,32,100,101,102,115,32,110,101,120,116,45,103,117,121,41,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,55,52,54,32,103,50,55,53,56,41,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,55,49,55,32,103,50,55,50,57,41,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,54,56,57,32,103,50,55,48,49,41,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,54,53,57,32,103,50,54,55,49,41,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,16),40,97,55,52,53,53,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,14),40,102,111,108,100,32,98,115,32,108,97,115,116,41,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,16),40,97,55,57,48,51,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,24),40,113,117,111,116,105,102,121,45,112,114,111,99,50,53,53,57,32,120,115,32,105,100,41};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,16),40,97,56,48,52,53,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,16),40,97,56,49,52,57,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,13),40,97,56,49,57,51,32,120,32,114,32,99,41,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,50,53,48,55,32,103,50,53,49,57,32,103,50,53,50,48,41,0,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,53,57,32,103,50,52,55,49,41,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,13),40,97,56,51,57,49,32,97,32,95,32,95,41,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,23),40,102,111,108,100,108,50,52,56,50,32,103,50,52,56,51,32,103,50,52,56,49,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,51,48,32,103,50,52,52,50,41,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,48,52,32,103,50,52,49,54,41,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,16),40,97,56,50,49,53,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,16),40,102,111,108,100,32,118,98,105,110,100,105,110,103,115,41};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,16),40,97,56,52,55,51,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,18),40,97,112,112,101,110,100,42,50,50,49,48,32,105,108,32,108,41,0,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,17),40,109,97,112,42,50,50,49,49,32,112,114,111,99,32,108,41,0,0,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,9),40,103,50,50,55,49,32,118,41,0,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,10),40,108,111,111,107,117,112,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,9),40,103,50,51,50,50,32,118,41,0,0,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,51,49,54,32,103,50,51,50,56,41,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,26),40,102,111,108,100,32,108,108,105,115,116,115,32,101,120,112,115,32,108,108,105,115,116,115,50,41,0,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,51,53,49,32,103,50,51,54,51,41,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,108,108,105,115,116,115,32,97,99,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,50,54,53,32,103,50,50,55,55,41,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,108,108,105,115,116,115,32,97,99,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,50,50,55,32,103,50,50,51,57,41,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,16),40,97,56,53,50,55,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,49,54,54,32,103,50,49,55,56,41,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,49,53,54,32,103,50,49,54,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,22),40,97,57,48,52,49,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,16),40,97,57,48,48,52,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,16),40,97,57,49,51,52,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,16),40,97,57,49,53,53,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,16),40,97,57,49,56,51,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,7),40,97,57,50,50,50,41,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,48),40,97,57,50,50,56,32,110,97,109,101,50,48,57,51,32,108,105,98,50,48,57,53,32,95,50,48,57,55,32,95,50,48,57,55,32,95,50,48,57,55,32,95,50,48,57,55,41};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,9),40,103,50,48,56,49,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,48,55,53,32,103,50,48,56,55,41,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,13),40,97,57,50,48,55,32,120,32,114,32,99,41,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,9),40,103,49,54,54,54,32,122,41,0,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,7),40,103,49,54,57,52,41,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,7),40,103,49,55,50,50,41,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,14),40,103,49,56,52,53,32,115,32,116,101,109,112,41,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,50,48,51,49,32,103,50,48,52,51,32,103,50,48,52,52,41,0,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,57,57,53,32,103,50,48,48,55,32,103,50,48,48,56,41,0,0,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,32),40,109,97,112,45,108,111,111,112,49,57,53,51,32,103,49,57,54,53,32,103,49,57,54,54,32,103,49,57,54,55,41};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,57,49,55,32,103,49,57,50,57,32,103,49,57,51,48,41,0,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,56,56,49,32,103,49,56,57,51,32,103,49,56,57,52,41,0,0,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,32),40,109,97,112,45,108,111,111,112,49,56,51,57,32,103,49,56,53,49,32,103,49,56,53,50,32,103,49,56,53,51,41};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,56,48,56,32,103,49,56,50,48,32,103,49,56,50,49,41,0,0,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,55,55,55,32,103,49,55,56,57,32,103,49,55,57,48,41,0,0,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,55,52,54,32,103,49,55,53,56,32,103,49,55,53,57,41,0,0,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,55,49,54,32,103,49,55,50,56,41,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,54,56,56,32,103,49,55,48,48,41,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,54,54,48,32,103,49,54,55,50,41,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,54,51,51,32,103,49,54,52,53,41,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,54,48,54,32,103,49,54,49,56,41,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,16),40,97,57,50,57,49,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,7),40,103,49,51,48,57,41,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,7),40,103,49,51,51,55,41,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,53,54,48,32,103,49,53,55,50,32,103,49,53,55,51,41,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,53,50,52,32,103,49,53,51,54,32,103,49,53,51,55,41,0,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,52,56,56,32,103,49,53,48,48,32,103,49,53,48,49,41,0,0,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,52,53,50,32,103,49,52,54,52,32,103,49,52,54,53,41,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,52,49,56,32,103,49,52,51,48,32,103,49,52,51,49,41,0,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,110,41};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,51,54,49,32,103,49,51,55,51,32,103,49,51,55,52,41,0,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,56,50,32,103,49,51,57,52,41,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,51,49,32,103,49,51,52,51,41,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,48,51,32,103,49,51,49,53,41,0,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,50,55,54,32,103,49,50,56,56,41,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,17),40,97,49,48,50,50,49,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,17),40,97,49,48,56,55,52,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,17),40,97,49,48,56,57,49,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,17),40,97,49,48,57,48,56,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,17),40,97,49,48,57,50,57,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,17),40,97,49,48,57,52,51,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,12),40,103,49,49,54,51,32,115,108,111,116,41,0,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,18),40,109,97,112,115,108,111,116,115,32,115,108,111,116,115,32,105,41,0,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,49,53,55,32,103,49,49,54,57,41,0,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,14),40,97,49,49,48,51,54,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,17),40,97,49,49,52,51,49,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,49,48,56,56,32,108,32,108,101,110,41};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,49,48,56,56,32,108,32,108,101,110,41};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,29),40,97,49,49,52,52,56,32,105,110,112,117,116,32,114,101,110,97,109,101,32,99,111,109,112,97,114,101,41,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,29),40,97,49,49,53,57,54,32,105,110,112,117,116,32,114,101,110,97,109,101,32,99,111,109,112,97,114,101,41,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,17),40,97,49,49,54,57,51,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,14),40,97,49,49,55,50,50,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,14),40,97,49,49,55,53,50,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,14),40,97,49,49,55,54,57,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,13),40,103,57,55,52,32,99,108,97,117,115,101,41,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,57,54,56,32,103,57,56,48,41,0,0,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,14),40,97,49,49,56,50,57,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,23),40,109,97,112,45,108,111,111,112,57,49,51,32,103,57,50,53,32,103,57,50,54,41,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,55,57,32,103,56,57,49,41,0,0,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,50,32,97,110,97,109,101,115,32,105,41};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,97,114,103,115,32,97,110,97,109,101,115,32,97,116,121,112,101,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,14),40,97,49,49,57,53,50,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,17),40,97,49,50,51,56,55,32,116,121,112,101,32,118,97,114,41,0,0,0,0,0,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,49,48,32,103,56,50,50,41,0,0,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,55,56,50,32,103,55,57,52,41,0,0,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,55,51,52,32,108,32,108,101,110,41,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,55,51,52,32,108,32,108,101,110,41,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,29),40,97,49,50,51,49,57,32,105,110,112,117,116,32,114,101,110,97,109,101,32,99,111,109,112,97,114,101,41,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,14),40,97,49,50,54,50,56,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,8),40,97,49,50,54,56,54,41};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,32),40,97,49,50,54,57,54,32,116,121,112,101,54,57,49,32,112,114,101,100,54,57,51,32,112,117,114,101,54,57,53,41};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,14),40,97,49,50,54,54,54,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,6),40,103,54,50,51,41,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,49,55,32,103,54,50,57,41,0,0,0,0,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,16),40,112,97,114,115,101,45,99,108,97,117,115,101,32,99,41};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,52,56,32,103,54,54,48,41,0,0,0,0,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,17),40,97,49,50,55,55,55,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,17),40,97,49,51,48,53,48,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_10000)
static void C_fcall f_10000(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10048)
static void C_fcall f_10048(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10073)
static void C_ccall f_10073(C_word c,C_word *av) C_noret;
C_noret_decl(f_10082)
static void C_fcall f_10082(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10107)
static void C_ccall f_10107(C_word c,C_word *av) C_noret;
C_noret_decl(f_10116)
static void C_fcall f_10116(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10141)
static void C_ccall f_10141(C_word c,C_word *av) C_noret;
C_noret_decl(f_10150)
static void C_fcall f_10150(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10184)
static void C_fcall f_10184(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10220)
static void C_ccall f_10220(C_word c,C_word *av) C_noret;
C_noret_decl(f_10222)
static void C_ccall f_10222(C_word c,C_word *av) C_noret;
C_noret_decl(f_10226)
static void C_ccall f_10226(C_word c,C_word *av) C_noret;
C_noret_decl(f_10240)
static void C_ccall f_10240(C_word c,C_word *av) C_noret;
C_noret_decl(f_10244)
static void C_fcall f_10244(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10252)
static void C_ccall f_10252(C_word c,C_word *av) C_noret;
C_noret_decl(f_10255)
static void C_ccall f_10255(C_word c,C_word *av) C_noret;
C_noret_decl(f_10259)
static void C_fcall f_10259(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10267)
static void C_ccall f_10267(C_word c,C_word *av) C_noret;
C_noret_decl(f_10270)
static void C_ccall f_10270(C_word c,C_word *av) C_noret;
C_noret_decl(f_10277)
static void C_ccall f_10277(C_word c,C_word *av) C_noret;
C_noret_decl(f_10301)
static void C_ccall f_10301(C_word c,C_word *av) C_noret;
C_noret_decl(f_10313)
static void C_ccall f_10313(C_word c,C_word *av) C_noret;
C_noret_decl(f_10317)
static void C_ccall f_10317(C_word c,C_word *av) C_noret;
C_noret_decl(f_10329)
static void C_ccall f_10329(C_word c,C_word *av) C_noret;
C_noret_decl(f_10339)
static void C_fcall f_10339(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10387)
static void C_fcall f_10387(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10445)
static void C_ccall f_10445(C_word c,C_word *av) C_noret;
C_noret_decl(f_10460)
static void C_ccall f_10460(C_word c,C_word *av) C_noret;
C_noret_decl(f_10464)
static void C_ccall f_10464(C_word c,C_word *av) C_noret;
C_noret_decl(f_10476)
static void C_ccall f_10476(C_word c,C_word *av) C_noret;
C_noret_decl(f_10486)
static void C_fcall f_10486(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10534)
static void C_fcall f_10534(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10590)
static void C_ccall f_10590(C_word c,C_word *av) C_noret;
C_noret_decl(f_10599)
static void C_ccall f_10599(C_word c,C_word *av) C_noret;
C_noret_decl(f_10606)
static void C_ccall f_10606(C_word c,C_word *av) C_noret;
C_noret_decl(f_10615)
static void C_ccall f_10615(C_word c,C_word *av) C_noret;
C_noret_decl(f_10617)
static void C_fcall f_10617(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10667)
static void C_fcall f_10667(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10681)
static void C_ccall f_10681(C_word c,C_word *av) C_noret;
C_noret_decl(f_10687)
static void C_fcall f_10687(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10735)
static void C_fcall f_10735(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10769)
static void C_fcall f_10769(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10794)
static void C_ccall f_10794(C_word c,C_word *av) C_noret;
C_noret_decl(f_10803)
static void C_fcall f_10803(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10828)
static void C_ccall f_10828(C_word c,C_word *av) C_noret;
C_noret_decl(f_10837)
static void C_fcall f_10837(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10873)
static void C_ccall f_10873(C_word c,C_word *av) C_noret;
C_noret_decl(f_10875)
static void C_ccall f_10875(C_word c,C_word *av) C_noret;
C_noret_decl(f_10879)
static void C_ccall f_10879(C_word c,C_word *av) C_noret;
C_noret_decl(f_10890)
static void C_ccall f_10890(C_word c,C_word *av) C_noret;
C_noret_decl(f_10892)
static void C_ccall f_10892(C_word c,C_word *av) C_noret;
C_noret_decl(f_10896)
static void C_ccall f_10896(C_word c,C_word *av) C_noret;
C_noret_decl(f_10907)
static void C_ccall f_10907(C_word c,C_word *av) C_noret;
C_noret_decl(f_10909)
static void C_ccall f_10909(C_word c,C_word *av) C_noret;
C_noret_decl(f_10913)
static void C_ccall f_10913(C_word c,C_word *av) C_noret;
C_noret_decl(f_10928)
static void C_ccall f_10928(C_word c,C_word *av) C_noret;
C_noret_decl(f_10930)
static void C_ccall f_10930(C_word c,C_word *av) C_noret;
C_noret_decl(f_10942)
static void C_ccall f_10942(C_word c,C_word *av) C_noret;
C_noret_decl(f_10944)
static void C_ccall f_10944(C_word c,C_word *av) C_noret;
C_noret_decl(f_10948)
static void C_ccall f_10948(C_word c,C_word *av) C_noret;
C_noret_decl(f_10970)
static void C_ccall f_10970(C_word c,C_word *av) C_noret;
C_noret_decl(f_10985)
static void C_fcall f_10985(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11035)
static void C_ccall f_11035(C_word c,C_word *av) C_noret;
C_noret_decl(f_11037)
static void C_ccall f_11037(C_word c,C_word *av) C_noret;
C_noret_decl(f_11041)
static void C_ccall f_11041(C_word c,C_word *av) C_noret;
C_noret_decl(f_11047)
static void C_ccall f_11047(C_word c,C_word *av) C_noret;
C_noret_decl(f_11050)
static void C_ccall f_11050(C_word c,C_word *av) C_noret;
C_noret_decl(f_11053)
static void C_ccall f_11053(C_word c,C_word *av) C_noret;
C_noret_decl(f_11059)
static void C_ccall f_11059(C_word c,C_word *av) C_noret;
C_noret_decl(f_11062)
static void C_ccall f_11062(C_word c,C_word *av) C_noret;
C_noret_decl(f_11065)
static void C_ccall f_11065(C_word c,C_word *av) C_noret;
C_noret_decl(f_11069)
static void C_fcall f_11069(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11097)
static void C_ccall f_11097(C_word c,C_word *av) C_noret;
C_noret_decl(f_11129)
static void C_ccall f_11129(C_word c,C_word *av) C_noret;
C_noret_decl(f_11160)
static void C_ccall f_11160(C_word c,C_word *av) C_noret;
C_noret_decl(f_11162)
static void C_fcall f_11162(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11178)
static void C_ccall f_11178(C_word c,C_word *av) C_noret;
C_noret_decl(f_11181)
static void C_ccall f_11181(C_word c,C_word *av) C_noret;
C_noret_decl(f_11184)
static void C_ccall f_11184(C_word c,C_word *av) C_noret;
C_noret_decl(f_11198)
static void C_ccall f_11198(C_word c,C_word *av) C_noret;
C_noret_decl(f_11210)
static void C_ccall f_11210(C_word c,C_word *av) C_noret;
C_noret_decl(f_11214)
static void C_fcall f_11214(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11307)
static void C_ccall f_11307(C_word c,C_word *av) C_noret;
C_noret_decl(f_11311)
static void C_ccall f_11311(C_word c,C_word *av) C_noret;
C_noret_decl(f_11326)
static void C_ccall f_11326(C_word c,C_word *av) C_noret;
C_noret_decl(f_11346)
static void C_ccall f_11346(C_word c,C_word *av) C_noret;
C_noret_decl(f_11352)
static void C_ccall f_11352(C_word c,C_word *av) C_noret;
C_noret_decl(f_11372)
static void C_ccall f_11372(C_word c,C_word *av) C_noret;
C_noret_decl(f_11380)
static void C_fcall f_11380(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11405)
static void C_ccall f_11405(C_word c,C_word *av) C_noret;
C_noret_decl(f_11415)
static void C_ccall f_11415(C_word c,C_word *av) C_noret;
C_noret_decl(f_11422)
static void C_ccall f_11422(C_word c,C_word *av) C_noret;
C_noret_decl(f_11426)
static void C_ccall f_11426(C_word c,C_word *av) C_noret;
C_noret_decl(f_11430)
static void C_ccall f_11430(C_word c,C_word *av) C_noret;
C_noret_decl(f_11432)
static void C_ccall f_11432(C_word c,C_word *av) C_noret;
C_noret_decl(f_11436)
static void C_ccall f_11436(C_word c,C_word *av) C_noret;
C_noret_decl(f_11447)
static void C_ccall f_11447(C_word c,C_word *av) C_noret;
C_noret_decl(f_11449)
static void C_ccall f_11449(C_word c,C_word *av) C_noret;
C_noret_decl(f_11459)
static void C_ccall f_11459(C_word c,C_word *av) C_noret;
C_noret_decl(f_11472)
static void C_ccall f_11472(C_word c,C_word *av) C_noret;
C_noret_decl(f_11488)
static void C_ccall f_11488(C_word c,C_word *av) C_noret;
C_noret_decl(f_11494)
static void C_ccall f_11494(C_word c,C_word *av) C_noret;
C_noret_decl(f_11497)
static void C_ccall f_11497(C_word c,C_word *av) C_noret;
C_noret_decl(f_11503)
static void C_ccall f_11503(C_word c,C_word *av) C_noret;
C_noret_decl(f_11512)
static void C_fcall f_11512(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11519)
static void C_ccall f_11519(C_word c,C_word *av) C_noret;
C_noret_decl(f_11533)
static void C_ccall f_11533(C_word c,C_word *av) C_noret;
C_noret_decl(f_11544)
static void C_ccall f_11544(C_word c,C_word *av) C_noret;
C_noret_decl(f_11547)
static void C_ccall f_11547(C_word c,C_word *av) C_noret;
C_noret_decl(f_11553)
static void C_ccall f_11553(C_word c,C_word *av) C_noret;
C_noret_decl(f_11562)
static void C_fcall f_11562(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11569)
static void C_ccall f_11569(C_word c,C_word *av) C_noret;
C_noret_decl(f_11583)
static void C_ccall f_11583(C_word c,C_word *av) C_noret;
C_noret_decl(f_11595)
static void C_ccall f_11595(C_word c,C_word *av) C_noret;
C_noret_decl(f_11597)
static void C_ccall f_11597(C_word c,C_word *av) C_noret;
C_noret_decl(f_11607)
static void C_fcall f_11607(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11617)
static void C_ccall f_11617(C_word c,C_word *av) C_noret;
C_noret_decl(f_11631)
static void C_fcall f_11631(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11644)
static void C_ccall f_11644(C_word c,C_word *av) C_noret;
C_noret_decl(f_11692)
static void C_ccall f_11692(C_word c,C_word *av) C_noret;
C_noret_decl(f_11694)
static void C_ccall f_11694(C_word c,C_word *av) C_noret;
C_noret_decl(f_11698)
static void C_ccall f_11698(C_word c,C_word *av) C_noret;
C_noret_decl(f_11705)
static void C_ccall f_11705(C_word c,C_word *av) C_noret;
C_noret_decl(f_11713)
static void C_ccall f_11713(C_word c,C_word *av) C_noret;
C_noret_decl(f_11721)
static void C_ccall f_11721(C_word c,C_word *av) C_noret;
C_noret_decl(f_11723)
static void C_ccall f_11723(C_word c,C_word *av) C_noret;
C_noret_decl(f_11727)
static void C_ccall f_11727(C_word c,C_word *av) C_noret;
C_noret_decl(f_11730)
static void C_ccall f_11730(C_word c,C_word *av) C_noret;
C_noret_decl(f_11751)
static void C_ccall f_11751(C_word c,C_word *av) C_noret;
C_noret_decl(f_11753)
static void C_ccall f_11753(C_word c,C_word *av) C_noret;
C_noret_decl(f_11757)
static void C_ccall f_11757(C_word c,C_word *av) C_noret;
C_noret_decl(f_11768)
static void C_ccall f_11768(C_word c,C_word *av) C_noret;
C_noret_decl(f_11770)
static void C_ccall f_11770(C_word c,C_word *av) C_noret;
C_noret_decl(f_11774)
static void C_ccall f_11774(C_word c,C_word *av) C_noret;
C_noret_decl(f_11783)
static void C_ccall f_11783(C_word c,C_word *av) C_noret;
C_noret_decl(f_11786)
static void C_ccall f_11786(C_word c,C_word *av) C_noret;
C_noret_decl(f_11789)
static void C_ccall f_11789(C_word c,C_word *av) C_noret;
C_noret_decl(f_11812)
static void C_ccall f_11812(C_word c,C_word *av) C_noret;
C_noret_decl(f_11828)
static void C_ccall f_11828(C_word c,C_word *av) C_noret;
C_noret_decl(f_11830)
static void C_ccall f_11830(C_word c,C_word *av) C_noret;
C_noret_decl(f_11834)
static void C_ccall f_11834(C_word c,C_word *av) C_noret;
C_noret_decl(f_11840)
static void C_ccall f_11840(C_word c,C_word *av) C_noret;
C_noret_decl(f_11843)
static void C_ccall f_11843(C_word c,C_word *av) C_noret;
C_noret_decl(f_11867)
static void C_fcall f_11867(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11871)
static void C_ccall f_11871(C_word c,C_word *av) C_noret;
C_noret_decl(f_11878)
static void C_ccall f_11878(C_word c,C_word *av) C_noret;
C_noret_decl(f_11905)
static void C_ccall f_11905(C_word c,C_word *av) C_noret;
C_noret_decl(f_11907)
static void C_fcall f_11907(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11932)
static void C_ccall f_11932(C_word c,C_word *av) C_noret;
C_noret_decl(f_11951)
static void C_ccall f_11951(C_word c,C_word *av) C_noret;
C_noret_decl(f_11953)
static void C_ccall f_11953(C_word c,C_word *av) C_noret;
C_noret_decl(f_11963)
static void C_ccall f_11963(C_word c,C_word *av) C_noret;
C_noret_decl(f_11972)
static void C_ccall f_11972(C_word c,C_word *av) C_noret;
C_noret_decl(f_11976)
static void C_ccall f_11976(C_word c,C_word *av) C_noret;
C_noret_decl(f_11979)
static void C_ccall f_11979(C_word c,C_word *av) C_noret;
C_noret_decl(f_11982)
static void C_ccall f_11982(C_word c,C_word *av) C_noret;
C_noret_decl(f_11985)
static void C_ccall f_11985(C_word c,C_word *av) C_noret;
C_noret_decl(f_11993)
static void C_fcall f_11993(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_12003)
static void C_ccall f_12003(C_word c,C_word *av) C_noret;
C_noret_decl(f_12006)
static void C_ccall f_12006(C_word c,C_word *av) C_noret;
C_noret_decl(f_12012)
static void C_ccall f_12012(C_word c,C_word *av) C_noret;
C_noret_decl(f_12047)
static void C_ccall f_12047(C_word c,C_word *av) C_noret;
C_noret_decl(f_12049)
static void C_fcall f_12049(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12107)
static void C_ccall f_12107(C_word c,C_word *av) C_noret;
C_noret_decl(f_12111)
static void C_ccall f_12111(C_word c,C_word *av) C_noret;
C_noret_decl(f_12144)
static void C_ccall f_12144(C_word c,C_word *av) C_noret;
C_noret_decl(f_12146)
static void C_fcall f_12146(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12171)
static void C_ccall f_12171(C_word c,C_word *av) C_noret;
C_noret_decl(f_12188)
static void C_ccall f_12188(C_word c,C_word *av) C_noret;
C_noret_decl(f_12190)
static void C_fcall f_12190(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12208)
static void C_ccall f_12208(C_word c,C_word *av) C_noret;
C_noret_decl(f_12244)
static void C_fcall f_12244(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12261)
static void C_ccall f_12261(C_word c,C_word *av) C_noret;
C_noret_decl(f_12318)
static void C_ccall f_12318(C_word c,C_word *av) C_noret;
C_noret_decl(f_12320)
static void C_ccall f_12320(C_word c,C_word *av) C_noret;
C_noret_decl(f_12330)
static void C_ccall f_12330(C_word c,C_word *av) C_noret;
C_noret_decl(f_12347)
static void C_ccall f_12347(C_word c,C_word *av) C_noret;
C_noret_decl(f_12368)
static void C_ccall f_12368(C_word c,C_word *av) C_noret;
C_noret_decl(f_12378)
static void C_ccall f_12378(C_word c,C_word *av) C_noret;
C_noret_decl(f_12386)
static void C_ccall f_12386(C_word c,C_word *av) C_noret;
C_noret_decl(f_12388)
static void C_ccall f_12388(C_word c,C_word *av) C_noret;
C_noret_decl(f_12404)
static void C_ccall f_12404(C_word c,C_word *av) C_noret;
C_noret_decl(f_12414)
static void C_fcall f_12414(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12448)
static void C_fcall f_12448(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12492)
static void C_ccall f_12492(C_word c,C_word *av) C_noret;
C_noret_decl(f_12498)
static void C_ccall f_12498(C_word c,C_word *av) C_noret;
C_noret_decl(f_12501)
static void C_ccall f_12501(C_word c,C_word *av) C_noret;
C_noret_decl(f_12507)
static void C_ccall f_12507(C_word c,C_word *av) C_noret;
C_noret_decl(f_12516)
static void C_fcall f_12516(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12523)
static void C_ccall f_12523(C_word c,C_word *av) C_noret;
C_noret_decl(f_12537)
static void C_ccall f_12537(C_word c,C_word *av) C_noret;
C_noret_decl(f_12548)
static void C_ccall f_12548(C_word c,C_word *av) C_noret;
C_noret_decl(f_12551)
static void C_ccall f_12551(C_word c,C_word *av) C_noret;
C_noret_decl(f_12557)
static void C_ccall f_12557(C_word c,C_word *av) C_noret;
C_noret_decl(f_12566)
static void C_fcall f_12566(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12573)
static void C_ccall f_12573(C_word c,C_word *av) C_noret;
C_noret_decl(f_12585)
static void C_fcall f_12585(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12596)
static void C_ccall f_12596(C_word c,C_word *av) C_noret;
C_noret_decl(f_12627)
static void C_ccall f_12627(C_word c,C_word *av) C_noret;
C_noret_decl(f_12629)
static void C_ccall f_12629(C_word c,C_word *av) C_noret;
C_noret_decl(f_12633)
static void C_ccall f_12633(C_word c,C_word *av) C_noret;
C_noret_decl(f_12649)
static void C_ccall f_12649(C_word c,C_word *av) C_noret;
C_noret_decl(f_12665)
static void C_ccall f_12665(C_word c,C_word *av) C_noret;
C_noret_decl(f_12667)
static void C_ccall f_12667(C_word c,C_word *av) C_noret;
C_noret_decl(f_12671)
static void C_ccall f_12671(C_word c,C_word *av) C_noret;
C_noret_decl(f_12680)
static void C_ccall f_12680(C_word c,C_word *av) C_noret;
C_noret_decl(f_12687)
static void C_ccall f_12687(C_word c,C_word *av) C_noret;
C_noret_decl(f_12695)
static void C_ccall f_12695(C_word c,C_word *av) C_noret;
C_noret_decl(f_12697)
static void C_ccall f_12697(C_word c,C_word *av) C_noret;
C_noret_decl(f_12722)
static void C_ccall f_12722(C_word c,C_word *av) C_noret;
C_noret_decl(f_12726)
static void C_fcall f_12726(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12776)
static void C_ccall f_12776(C_word c,C_word *av) C_noret;
C_noret_decl(f_12778)
static void C_ccall f_12778(C_word c,C_word *av) C_noret;
C_noret_decl(f_12782)
static void C_ccall f_12782(C_word c,C_word *av) C_noret;
C_noret_decl(f_12785)
static void C_ccall f_12785(C_word c,C_word *av) C_noret;
C_noret_decl(f_12788)
static void C_ccall f_12788(C_word c,C_word *av) C_noret;
C_noret_decl(f_12791)
static void C_ccall f_12791(C_word c,C_word *av) C_noret;
C_noret_decl(f_12794)
static void C_ccall f_12794(C_word c,C_word *av) C_noret;
C_noret_decl(f_12797)
static void C_ccall f_12797(C_word c,C_word *av) C_noret;
C_noret_decl(f_12799)
static void C_ccall f_12799(C_word c,C_word *av) C_noret;
C_noret_decl(f_12803)
static void C_fcall f_12803(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12806)
static void C_fcall f_12806(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12809)
static void C_fcall f_12809(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12834)
static C_word C_fcall f_12834(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_12848)
static void C_ccall f_12848(C_word c,C_word *av) C_noret;
C_noret_decl(f_12850)
static void C_fcall f_12850(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12929)
static void C_ccall f_12929(C_word c,C_word *av) C_noret;
C_noret_decl(f_12954)
static void C_ccall f_12954(C_word c,C_word *av) C_noret;
C_noret_decl(f_12961)
static void C_ccall f_12961(C_word c,C_word *av) C_noret;
C_noret_decl(f_12965)
static void C_ccall f_12965(C_word c,C_word *av) C_noret;
C_noret_decl(f_12985)
static void C_fcall f_12985(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13010)
static void C_ccall f_13010(C_word c,C_word *av) C_noret;
C_noret_decl(f_13049)
static void C_ccall f_13049(C_word c,C_word *av) C_noret;
C_noret_decl(f_13051)
static void C_ccall f_13051(C_word c,C_word *av) C_noret;
C_noret_decl(f_13055)
static void C_ccall f_13055(C_word c,C_word *av) C_noret;
C_noret_decl(f_13058)
static void C_ccall f_13058(C_word c,C_word *av) C_noret;
C_noret_decl(f_13061)
static void C_ccall f_13061(C_word c,C_word *av) C_noret;
C_noret_decl(f_13072)
static void C_ccall f_13072(C_word c,C_word *av) C_noret;
C_noret_decl(f_4197)
static void C_ccall f_4197(C_word c,C_word *av) C_noret;
C_noret_decl(f_4200)
static void C_ccall f_4200(C_word c,C_word *av) C_noret;
C_noret_decl(f_4203)
static void C_ccall f_4203(C_word c,C_word *av) C_noret;
C_noret_decl(f_4313)
static void C_fcall f_4313(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4331)
static void C_ccall f_4331(C_word c,C_word *av) C_noret;
C_noret_decl(f_4371)
static void C_fcall f_4371(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4385)
static void C_ccall f_4385(C_word c,C_word *av) C_noret;
C_noret_decl(f_5485)
static void C_ccall f_5485(C_word c,C_word *av) C_noret;
C_noret_decl(f_5488)
static void C_ccall f_5488(C_word c,C_word *av) C_noret;
C_noret_decl(f_5491)
static void C_ccall f_5491(C_word c,C_word *av) C_noret;
C_noret_decl(f_5494)
static void C_ccall f_5494(C_word c,C_word *av) C_noret;
C_noret_decl(f_5498)
static void C_ccall f_5498(C_word c,C_word *av) C_noret;
C_noret_decl(f_5501)
static void C_ccall f_5501(C_word c,C_word *av) C_noret;
C_noret_decl(f_5504)
static void C_ccall f_5504(C_word c,C_word *av) C_noret;
C_noret_decl(f_5507)
static void C_ccall f_5507(C_word c,C_word *av) C_noret;
C_noret_decl(f_5510)
static void C_ccall f_5510(C_word c,C_word *av) C_noret;
C_noret_decl(f_5513)
static void C_ccall f_5513(C_word c,C_word *av) C_noret;
C_noret_decl(f_5516)
static void C_ccall f_5516(C_word c,C_word *av) C_noret;
C_noret_decl(f_5519)
static void C_ccall f_5519(C_word c,C_word *av) C_noret;
C_noret_decl(f_5523)
static void C_ccall f_5523(C_word c,C_word *av) C_noret;
C_noret_decl(f_5526)
static void C_ccall f_5526(C_word c,C_word *av) C_noret;
C_noret_decl(f_5529)
static void C_ccall f_5529(C_word c,C_word *av) C_noret;
C_noret_decl(f_5532)
static void C_ccall f_5532(C_word c,C_word *av) C_noret;
C_noret_decl(f_5535)
static void C_ccall f_5535(C_word c,C_word *av) C_noret;
C_noret_decl(f_5538)
static void C_ccall f_5538(C_word c,C_word *av) C_noret;
C_noret_decl(f_5541)
static void C_ccall f_5541(C_word c,C_word *av) C_noret;
C_noret_decl(f_5545)
static void C_ccall f_5545(C_word c,C_word *av) C_noret;
C_noret_decl(f_5548)
static void C_ccall f_5548(C_word c,C_word *av) C_noret;
C_noret_decl(f_5551)
static void C_ccall f_5551(C_word c,C_word *av) C_noret;
C_noret_decl(f_5554)
static void C_ccall f_5554(C_word c,C_word *av) C_noret;
C_noret_decl(f_5557)
static void C_ccall f_5557(C_word c,C_word *av) C_noret;
C_noret_decl(f_5560)
static void C_ccall f_5560(C_word c,C_word *av) C_noret;
C_noret_decl(f_5563)
static void C_ccall f_5563(C_word c,C_word *av) C_noret;
C_noret_decl(f_5566)
static void C_ccall f_5566(C_word c,C_word *av) C_noret;
C_noret_decl(f_5569)
static void C_ccall f_5569(C_word c,C_word *av) C_noret;
C_noret_decl(f_5572)
static void C_ccall f_5572(C_word c,C_word *av) C_noret;
C_noret_decl(f_5575)
static void C_ccall f_5575(C_word c,C_word *av) C_noret;
C_noret_decl(f_5578)
static void C_ccall f_5578(C_word c,C_word *av) C_noret;
C_noret_decl(f_5581)
static void C_ccall f_5581(C_word c,C_word *av) C_noret;
C_noret_decl(f_5584)
static void C_ccall f_5584(C_word c,C_word *av) C_noret;
C_noret_decl(f_5588)
static void C_ccall f_5588(C_word c,C_word *av) C_noret;
C_noret_decl(f_5591)
static void C_ccall f_5591(C_word c,C_word *av) C_noret;
C_noret_decl(f_5594)
static void C_ccall f_5594(C_word c,C_word *av) C_noret;
C_noret_decl(f_5597)
static void C_ccall f_5597(C_word c,C_word *av) C_noret;
C_noret_decl(f_5600)
static void C_ccall f_5600(C_word c,C_word *av) C_noret;
C_noret_decl(f_5603)
static void C_ccall f_5603(C_word c,C_word *av) C_noret;
C_noret_decl(f_5606)
static void C_ccall f_5606(C_word c,C_word *av) C_noret;
C_noret_decl(f_5609)
static void C_ccall f_5609(C_word c,C_word *av) C_noret;
C_noret_decl(f_5612)
static void C_ccall f_5612(C_word c,C_word *av) C_noret;
C_noret_decl(f_5615)
static void C_ccall f_5615(C_word c,C_word *av) C_noret;
C_noret_decl(f_5618)
static void C_ccall f_5618(C_word c,C_word *av) C_noret;
C_noret_decl(f_5621)
static void C_ccall f_5621(C_word c,C_word *av) C_noret;
C_noret_decl(f_5624)
static void C_ccall f_5624(C_word c,C_word *av) C_noret;
C_noret_decl(f_5627)
static void C_ccall f_5627(C_word c,C_word *av) C_noret;
C_noret_decl(f_5630)
static void C_ccall f_5630(C_word c,C_word *av) C_noret;
C_noret_decl(f_5633)
static void C_ccall f_5633(C_word c,C_word *av) C_noret;
C_noret_decl(f_5636)
static void C_ccall f_5636(C_word c,C_word *av) C_noret;
C_noret_decl(f_5639)
static void C_ccall f_5639(C_word c,C_word *av) C_noret;
C_noret_decl(f_5642)
static void C_ccall f_5642(C_word c,C_word *av) C_noret;
C_noret_decl(f_5645)
static void C_ccall f_5645(C_word c,C_word *av) C_noret;
C_noret_decl(f_5649)
static void C_ccall f_5649(C_word c,C_word *av) C_noret;
C_noret_decl(f_5652)
static void C_ccall f_5652(C_word c,C_word *av) C_noret;
C_noret_decl(f_5655)
static void C_ccall f_5655(C_word c,C_word *av) C_noret;
C_noret_decl(f_5659)
static void C_ccall f_5659(C_word c,C_word *av) C_noret;
C_noret_decl(f_5662)
static void C_ccall f_5662(C_word c,C_word *av) C_noret;
C_noret_decl(f_5665)
static void C_ccall f_5665(C_word c,C_word *av) C_noret;
C_noret_decl(f_5669)
static void C_ccall f_5669(C_word c,C_word *av) C_noret;
C_noret_decl(f_5673)
static void C_ccall f_5673(C_word c,C_word *av) C_noret;
C_noret_decl(f_5675)
static void C_ccall f_5675(C_word c,C_word *av) C_noret;
C_noret_decl(f_5679)
static void C_ccall f_5679(C_word c,C_word *av) C_noret;
C_noret_decl(f_5722)
static void C_ccall f_5722(C_word c,C_word *av) C_noret;
C_noret_decl(f_5724)
static void C_ccall f_5724(C_word c,C_word *av) C_noret;
C_noret_decl(f_5728)
static void C_ccall f_5728(C_word c,C_word *av) C_noret;
C_noret_decl(f_5739)
static void C_ccall f_5739(C_word c,C_word *av) C_noret;
C_noret_decl(f_5742)
static void C_fcall f_5742(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5765)
static void C_fcall f_5765(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5784)
static void C_ccall f_5784(C_word c,C_word *av) C_noret;
C_noret_decl(f_5794)
static void C_ccall f_5794(C_word c,C_word *av) C_noret;
C_noret_decl(f_5801)
static void C_ccall f_5801(C_word c,C_word *av) C_noret;
C_noret_decl(f_5811)
static void C_ccall f_5811(C_word c,C_word *av) C_noret;
C_noret_decl(f_5813)
static void C_ccall f_5813(C_word c,C_word *av) C_noret;
C_noret_decl(f_5821)
static void C_ccall f_5821(C_word c,C_word *av) C_noret;
C_noret_decl(f_5829)
static void C_ccall f_5829(C_word c,C_word *av) C_noret;
C_noret_decl(f_5831)
static void C_ccall f_5831(C_word c,C_word *av) C_noret;
C_noret_decl(f_5835)
static void C_ccall f_5835(C_word c,C_word *av) C_noret;
C_noret_decl(f_5894)
static void C_ccall f_5894(C_word c,C_word *av) C_noret;
C_noret_decl(f_5896)
static void C_ccall f_5896(C_word c,C_word *av) C_noret;
C_noret_decl(f_5900)
static void C_ccall f_5900(C_word c,C_word *av) C_noret;
C_noret_decl(f_5903)
static void C_ccall f_5903(C_word c,C_word *av) C_noret;
C_noret_decl(f_5906)
static void C_ccall f_5906(C_word c,C_word *av) C_noret;
C_noret_decl(f_5909)
static void C_ccall f_5909(C_word c,C_word *av) C_noret;
C_noret_decl(f_5916)
static void C_fcall f_5916(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5926)
static void C_ccall f_5926(C_word c,C_word *av) C_noret;
C_noret_decl(f_5929)
static void C_ccall f_5929(C_word c,C_word *av) C_noret;
C_noret_decl(f_5935)
static void C_ccall f_5935(C_word c,C_word *av) C_noret;
C_noret_decl(f_5946)
static void C_ccall f_5946(C_word c,C_word *av) C_noret;
C_noret_decl(f_5962)
static void C_ccall f_5962(C_word c,C_word *av) C_noret;
C_noret_decl(f_5972)
static void C_ccall f_5972(C_word c,C_word *av) C_noret;
C_noret_decl(f_5995)
static void C_ccall f_5995(C_word c,C_word *av) C_noret;
C_noret_decl(f_5998)
static void C_ccall f_5998(C_word c,C_word *av) C_noret;
C_noret_decl(f_6015)
static void C_ccall f_6015(C_word c,C_word *av) C_noret;
C_noret_decl(f_6021)
static void C_ccall f_6021(C_word c,C_word *av) C_noret;
C_noret_decl(f_6038)
static void C_ccall f_6038(C_word c,C_word *av) C_noret;
C_noret_decl(f_6061)
static void C_ccall f_6061(C_word c,C_word *av) C_noret;
C_noret_decl(f_6089)
static void C_ccall f_6089(C_word c,C_word *av) C_noret;
C_noret_decl(f_6091)
static void C_ccall f_6091(C_word c,C_word *av) C_noret;
C_noret_decl(f_6095)
static void C_ccall f_6095(C_word c,C_word *av) C_noret;
C_noret_decl(f_6098)
static void C_ccall f_6098(C_word c,C_word *av) C_noret;
C_noret_decl(f_6101)
static void C_ccall f_6101(C_word c,C_word *av) C_noret;
C_noret_decl(f_6104)
static void C_ccall f_6104(C_word c,C_word *av) C_noret;
C_noret_decl(f_6111)
static void C_fcall f_6111(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6121)
static void C_ccall f_6121(C_word c,C_word *av) C_noret;
C_noret_decl(f_6124)
static void C_ccall f_6124(C_word c,C_word *av) C_noret;
C_noret_decl(f_6130)
static void C_ccall f_6130(C_word c,C_word *av) C_noret;
C_noret_decl(f_6137)
static void C_ccall f_6137(C_word c,C_word *av) C_noret;
C_noret_decl(f_6153)
static void C_ccall f_6153(C_word c,C_word *av) C_noret;
C_noret_decl(f_6163)
static void C_ccall f_6163(C_word c,C_word *av) C_noret;
C_noret_decl(f_6186)
static void C_ccall f_6186(C_word c,C_word *av) C_noret;
C_noret_decl(f_6189)
static void C_ccall f_6189(C_word c,C_word *av) C_noret;
C_noret_decl(f_6206)
static void C_ccall f_6206(C_word c,C_word *av) C_noret;
C_noret_decl(f_6212)
static void C_ccall f_6212(C_word c,C_word *av) C_noret;
C_noret_decl(f_6261)
static void C_ccall f_6261(C_word c,C_word *av) C_noret;
C_noret_decl(f_6263)
static void C_ccall f_6263(C_word c,C_word *av) C_noret;
C_noret_decl(f_6267)
static void C_ccall f_6267(C_word c,C_word *av) C_noret;
C_noret_decl(f_6273)
static void C_ccall f_6273(C_word c,C_word *av) C_noret;
C_noret_decl(f_6276)
static void C_ccall f_6276(C_word c,C_word *av) C_noret;
C_noret_decl(f_6288)
static void C_ccall f_6288(C_word c,C_word *av) C_noret;
C_noret_decl(f_6291)
static void C_ccall f_6291(C_word c,C_word *av) C_noret;
C_noret_decl(f_6297)
static void C_ccall f_6297(C_word c,C_word *av) C_noret;
C_noret_decl(f_6300)
static void C_ccall f_6300(C_word c,C_word *av) C_noret;
C_noret_decl(f_6309)
static void C_ccall f_6309(C_word c,C_word *av) C_noret;
C_noret_decl(f_6340)
static void C_ccall f_6340(C_word c,C_word *av) C_noret;
C_noret_decl(f_6342)
static void C_fcall f_6342(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6361)
static void C_fcall f_6361(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6367)
static void C_fcall f_6367(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6374)
static void C_fcall f_6374(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6378)
static void C_ccall f_6378(C_word c,C_word *av) C_noret;
C_noret_decl(f_6382)
static void C_fcall f_6382(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6386)
static void C_ccall f_6386(C_word c,C_word *av) C_noret;
C_noret_decl(f_6414)
static void C_ccall f_6414(C_word c,C_word *av) C_noret;
C_noret_decl(f_6435)
static void C_ccall f_6435(C_word c,C_word *av) C_noret;
C_noret_decl(f_6514)
static void C_ccall f_6514(C_word c,C_word *av) C_noret;
C_noret_decl(f_6557)
static C_word C_fcall f_6557(C_word t0,C_word t1);
C_noret_decl(f_6570)
static void C_ccall f_6570(C_word c,C_word *av) C_noret;
C_noret_decl(f_6572)
static void C_fcall f_6572(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6610)
static void C_fcall f_6610(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6645)
static void C_ccall f_6645(C_word c,C_word *av) C_noret;
C_noret_decl(f_6652)
static void C_ccall f_6652(C_word c,C_word *av) C_noret;
C_noret_decl(f_6656)
static void C_ccall f_6656(C_word c,C_word *av) C_noret;
C_noret_decl(f_6660)
static void C_ccall f_6660(C_word c,C_word *av) C_noret;
C_noret_decl(f_6662)
static void C_ccall f_6662(C_word c,C_word *av) C_noret;
C_noret_decl(f_6666)
static void C_ccall f_6666(C_word c,C_word *av) C_noret;
C_noret_decl(f_6680)
static void C_ccall f_6680(C_word c,C_word *av) C_noret;
C_noret_decl(f_6683)
static void C_ccall f_6683(C_word c,C_word *av) C_noret;
C_noret_decl(f_6686)
static void C_ccall f_6686(C_word c,C_word *av) C_noret;
C_noret_decl(f_6708)
static void C_ccall f_6708(C_word c,C_word *av) C_noret;
C_noret_decl(f_6715)
static void C_ccall f_6715(C_word c,C_word *av) C_noret;
C_noret_decl(f_6719)
static void C_ccall f_6719(C_word c,C_word *av) C_noret;
C_noret_decl(f_6730)
static void C_ccall f_6730(C_word c,C_word *av) C_noret;
C_noret_decl(f_6733)
static void C_ccall f_6733(C_word c,C_word *av) C_noret;
C_noret_decl(f_6736)
static void C_ccall f_6736(C_word c,C_word *av) C_noret;
C_noret_decl(f_6750)
static void C_ccall f_6750(C_word c,C_word *av) C_noret;
C_noret_decl(f_6757)
static void C_ccall f_6757(C_word c,C_word *av) C_noret;
C_noret_decl(f_6761)
static void C_ccall f_6761(C_word c,C_word *av) C_noret;
C_noret_decl(f_6773)
static void C_ccall f_6773(C_word c,C_word *av) C_noret;
C_noret_decl(f_6775)
static void C_ccall f_6775(C_word c,C_word *av) C_noret;
C_noret_decl(f_6779)
static void C_ccall f_6779(C_word c,C_word *av) C_noret;
C_noret_decl(f_6781)
static void C_fcall f_6781(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6787)
static void C_fcall f_6787(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6801)
static void C_ccall f_6801(C_word c,C_word *av) C_noret;
C_noret_decl(f_6805)
static void C_ccall f_6805(C_word c,C_word *av) C_noret;
C_noret_decl(f_6813)
static void C_ccall f_6813(C_word c,C_word *av) C_noret;
C_noret_decl(f_6816)
static void C_ccall f_6816(C_word c,C_word *av) C_noret;
C_noret_decl(f_6819)
static void C_ccall f_6819(C_word c,C_word *av) C_noret;
C_noret_decl(f_6822)
static void C_ccall f_6822(C_word c,C_word *av) C_noret;
C_noret_decl(f_6825)
static void C_ccall f_6825(C_word c,C_word *av) C_noret;
C_noret_decl(f_6828)
static void C_ccall f_6828(C_word c,C_word *av) C_noret;
C_noret_decl(f_6831)
static void C_ccall f_6831(C_word c,C_word *av) C_noret;
C_noret_decl(f_6834)
static void C_ccall f_6834(C_word c,C_word *av) C_noret;
C_noret_decl(f_6837)
static void C_ccall f_6837(C_word c,C_word *av) C_noret;
C_noret_decl(f_6840)
static void C_ccall f_6840(C_word c,C_word *av) C_noret;
C_noret_decl(f_6847)
static void C_ccall f_6847(C_word c,C_word *av) C_noret;
C_noret_decl(f_6863)
static void C_ccall f_6863(C_word c,C_word *av) C_noret;
C_noret_decl(f_6865)
static void C_fcall f_6865(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6873)
static void C_fcall f_6873(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6883)
static void C_ccall f_6883(C_word c,C_word *av) C_noret;
C_noret_decl(f_6887)
static void C_ccall f_6887(C_word c,C_word *av) C_noret;
C_noret_decl(f_6897)
static void C_fcall f_6897(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6901)
static void C_ccall f_6901(C_word c,C_word *av) C_noret;
C_noret_decl(f_6903)
static void C_ccall f_6903(C_word c,C_word *av) C_noret;
C_noret_decl(f_6911)
static void C_ccall f_6911(C_word c,C_word *av) C_noret;
C_noret_decl(f_6913)
static void C_ccall f_6913(C_word c,C_word *av) C_noret;
C_noret_decl(f_6917)
static void C_ccall f_6917(C_word c,C_word *av) C_noret;
C_noret_decl(f_6939)
static void C_ccall f_6939(C_word c,C_word *av) C_noret;
C_noret_decl(f_6941)
static void C_fcall f_6941(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6989)
static void C_fcall f_6989(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7042)
static void C_ccall f_7042(C_word c,C_word *av) C_noret;
C_noret_decl(f_7053)
static void C_ccall f_7053(C_word c,C_word *av) C_noret;
C_noret_decl(f_7090)
static void C_ccall f_7090(C_word c,C_word *av) C_noret;
C_noret_decl(f_7118)
static void C_ccall f_7118(C_word c,C_word *av) C_noret;
C_noret_decl(f_7145)
static void C_ccall f_7145(C_word c,C_word *av) C_noret;
C_noret_decl(f_7155)
static void C_ccall f_7155(C_word c,C_word *av) C_noret;
C_noret_decl(f_7157)
static void C_fcall f_7157(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7182)
static void C_ccall f_7182(C_word c,C_word *av) C_noret;
C_noret_decl(f_7217)
static void C_ccall f_7217(C_word c,C_word *av) C_noret;
C_noret_decl(f_7219)
static void C_ccall f_7219(C_word c,C_word *av) C_noret;
C_noret_decl(f_7223)
static void C_ccall f_7223(C_word c,C_word *av) C_noret;
C_noret_decl(f_7235)
static void C_ccall f_7235(C_word c,C_word *av) C_noret;
C_noret_decl(f_7238)
static void C_ccall f_7238(C_word c,C_word *av) C_noret;
C_noret_decl(f_7241)
static void C_ccall f_7241(C_word c,C_word *av) C_noret;
C_noret_decl(f_7244)
static void C_ccall f_7244(C_word c,C_word *av) C_noret;
C_noret_decl(f_7255)
static void C_ccall f_7255(C_word c,C_word *av) C_noret;
C_noret_decl(f_7257)
static void C_fcall f_7257(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7283)
static void C_ccall f_7283(C_word c,C_word *av) C_noret;
C_noret_decl(f_7294)
static void C_ccall f_7294(C_word c,C_word *av) C_noret;
C_noret_decl(f_7377)
static void C_ccall f_7377(C_word c,C_word *av) C_noret;
C_noret_decl(f_7379)
static void C_ccall f_7379(C_word c,C_word *av) C_noret;
C_noret_decl(f_7383)
static void C_ccall f_7383(C_word c,C_word *av) C_noret;
C_noret_decl(f_7386)
static void C_ccall f_7386(C_word c,C_word *av) C_noret;
C_noret_decl(f_7416)
static void C_ccall f_7416(C_word c,C_word *av) C_noret;
C_noret_decl(f_7426)
static void C_ccall f_7426(C_word c,C_word *av) C_noret;
C_noret_decl(f_7454)
static void C_ccall f_7454(C_word c,C_word *av) C_noret;
C_noret_decl(f_7456)
static void C_ccall f_7456(C_word c,C_word *av) C_noret;
C_noret_decl(f_7460)
static void C_ccall f_7460(C_word c,C_word *av) C_noret;
C_noret_decl(f_7479)
static void C_ccall f_7479(C_word c,C_word *av) C_noret;
C_noret_decl(f_7483)
static void C_ccall f_7483(C_word c,C_word *av) C_noret;
C_noret_decl(f_7487)
static void C_ccall f_7487(C_word c,C_word *av) C_noret;
C_noret_decl(f_7489)
static void C_fcall f_7489(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7510)
static void C_ccall f_7510(C_word c,C_word *av) C_noret;
C_noret_decl(f_7528)
static void C_ccall f_7528(C_word c,C_word *av) C_noret;
C_noret_decl(f_7536)
static void C_ccall f_7536(C_word c,C_word *av) C_noret;
C_noret_decl(f_7540)
static void C_ccall f_7540(C_word c,C_word *av) C_noret;
C_noret_decl(f_7550)
static void C_fcall f_7550(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7556)
static void C_fcall f_7556(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7570)
static void C_ccall f_7570(C_word c,C_word *av) C_noret;
C_noret_decl(f_7596)
static void C_ccall f_7596(C_word c,C_word *av) C_noret;
C_noret_decl(f_7620)
static void C_ccall f_7620(C_word c,C_word *av) C_noret;
C_noret_decl(f_7628)
static void C_ccall f_7628(C_word c,C_word *av) C_noret;
C_noret_decl(f_7636)
static void C_ccall f_7636(C_word c,C_word *av) C_noret;
C_noret_decl(f_7640)
static void C_ccall f_7640(C_word c,C_word *av) C_noret;
C_noret_decl(f_7643)
static void C_ccall f_7643(C_word c,C_word *av) C_noret;
C_noret_decl(f_7646)
static void C_ccall f_7646(C_word c,C_word *av) C_noret;
C_noret_decl(f_7655)
static void C_ccall f_7655(C_word c,C_word *av) C_noret;
C_noret_decl(f_7656)
static void C_fcall f_7656(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7664)
static void C_ccall f_7664(C_word c,C_word *av) C_noret;
C_noret_decl(f_7668)
static void C_ccall f_7668(C_word c,C_word *av) C_noret;
C_noret_decl(f_7672)
static void C_fcall f_7672(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7680)
static void C_ccall f_7680(C_word c,C_word *av) C_noret;
C_noret_decl(f_7686)
static void C_ccall f_7686(C_word c,C_word *av) C_noret;
C_noret_decl(f_7692)
static void C_ccall f_7692(C_word c,C_word *av) C_noret;
C_noret_decl(f_7695)
static void C_ccall f_7695(C_word c,C_word *av) C_noret;
C_noret_decl(f_7698)
static void C_ccall f_7698(C_word c,C_word *av) C_noret;
C_noret_decl(f_7702)
static void C_fcall f_7702(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7710)
static void C_ccall f_7710(C_word c,C_word *av) C_noret;
C_noret_decl(f_7713)
static void C_ccall f_7713(C_word c,C_word *av) C_noret;
C_noret_decl(f_7716)
static void C_ccall f_7716(C_word c,C_word *av) C_noret;
C_noret_decl(f_7719)
static void C_ccall f_7719(C_word c,C_word *av) C_noret;
C_noret_decl(f_7726)
static void C_ccall f_7726(C_word c,C_word *av) C_noret;
C_noret_decl(f_7752)
static void C_fcall f_7752(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7777)
static void C_ccall f_7777(C_word c,C_word *av) C_noret;
C_noret_decl(f_7786)
static void C_fcall f_7786(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7820)
static void C_fcall f_7820(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7845)
static void C_ccall f_7845(C_word c,C_word *av) C_noret;
C_noret_decl(f_7854)
static void C_fcall f_7854(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7902)
static void C_ccall f_7902(C_word c,C_word *av) C_noret;
C_noret_decl(f_7904)
static void C_ccall f_7904(C_word c,C_word *av) C_noret;
C_noret_decl(f_7908)
static void C_ccall f_7908(C_word c,C_word *av) C_noret;
C_noret_decl(f_7918)
static void C_fcall f_7918(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7945)
static void C_ccall f_7945(C_word c,C_word *av) C_noret;
C_noret_decl(f_7948)
static void C_ccall f_7948(C_word c,C_word *av) C_noret;
C_noret_decl(f_7963)
static void C_ccall f_7963(C_word c,C_word *av) C_noret;
C_noret_decl(f_7971)
static void C_ccall f_7971(C_word c,C_word *av) C_noret;
C_noret_decl(f_7980)
static void C_ccall f_7980(C_word c,C_word *av) C_noret;
C_noret_decl(f_7995)
static void C_ccall f_7995(C_word c,C_word *av) C_noret;
C_noret_decl(f_8005)
static void C_ccall f_8005(C_word c,C_word *av) C_noret;
C_noret_decl(f_8008)
static void C_ccall f_8008(C_word c,C_word *av) C_noret;
C_noret_decl(f_8024)
static void C_ccall f_8024(C_word c,C_word *av) C_noret;
C_noret_decl(f_8044)
static void C_ccall f_8044(C_word c,C_word *av) C_noret;
C_noret_decl(f_8046)
static void C_ccall f_8046(C_word c,C_word *av) C_noret;
C_noret_decl(f_8048)
static void C_fcall f_8048(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8052)
static void C_ccall f_8052(C_word c,C_word *av) C_noret;
C_noret_decl(f_8061)
static void C_fcall f_8061(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8064)
static void C_ccall f_8064(C_word c,C_word *av) C_noret;
C_noret_decl(f_8073)
static void C_fcall f_8073(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8089)
static void C_ccall f_8089(C_word c,C_word *av) C_noret;
C_noret_decl(f_8093)
static void C_ccall f_8093(C_word c,C_word *av) C_noret;
C_noret_decl(f_8136)
static void C_ccall f_8136(C_word c,C_word *av) C_noret;
C_noret_decl(f_8148)
static void C_ccall f_8148(C_word c,C_word *av) C_noret;
C_noret_decl(f_8150)
static void C_ccall f_8150(C_word c,C_word *av) C_noret;
C_noret_decl(f_8154)
static void C_ccall f_8154(C_word c,C_word *av) C_noret;
C_noret_decl(f_8157)
static void C_ccall f_8157(C_word c,C_word *av) C_noret;
C_noret_decl(f_8176)
static void C_ccall f_8176(C_word c,C_word *av) C_noret;
C_noret_decl(f_8192)
static void C_ccall f_8192(C_word c,C_word *av) C_noret;
C_noret_decl(f_8194)
static void C_ccall f_8194(C_word c,C_word *av) C_noret;
C_noret_decl(f_8198)
static void C_ccall f_8198(C_word c,C_word *av) C_noret;
C_noret_decl(f_8201)
static void C_ccall f_8201(C_word c,C_word *av) C_noret;
C_noret_decl(f_8214)
static void C_ccall f_8214(C_word c,C_word *av) C_noret;
C_noret_decl(f_8216)
static void C_ccall f_8216(C_word c,C_word *av) C_noret;
C_noret_decl(f_8220)
static void C_ccall f_8220(C_word c,C_word *av) C_noret;
C_noret_decl(f_8234)
static void C_ccall f_8234(C_word c,C_word *av) C_noret;
C_noret_decl(f_8240)
static void C_ccall f_8240(C_word c,C_word *av) C_noret;
C_noret_decl(f_8262)
static void C_ccall f_8262(C_word c,C_word *av) C_noret;
C_noret_decl(f_8268)
static void C_ccall f_8268(C_word c,C_word *av) C_noret;
C_noret_decl(f_8272)
static void C_ccall f_8272(C_word c,C_word *av) C_noret;
C_noret_decl(f_8282)
static void C_ccall f_8282(C_word c,C_word *av) C_noret;
C_noret_decl(f_8284)
static void C_fcall f_8284(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8313)
static void C_ccall f_8313(C_word c,C_word *av) C_noret;
C_noret_decl(f_8332)
static void C_fcall f_8332(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8366)
static void C_fcall f_8366(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8390)
static void C_ccall f_8390(C_word c,C_word *av) C_noret;
C_noret_decl(f_8392)
static void C_ccall f_8392(C_word c,C_word *av) C_noret;
C_noret_decl(f_8396)
static void C_ccall f_8396(C_word c,C_word *av) C_noret;
C_noret_decl(f_8402)
static void C_fcall f_8402(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8436)
static void C_fcall f_8436(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8472)
static void C_ccall f_8472(C_word c,C_word *av) C_noret;
C_noret_decl(f_8474)
static void C_ccall f_8474(C_word c,C_word *av) C_noret;
C_noret_decl(f_8478)
static void C_ccall f_8478(C_word c,C_word *av) C_noret;
C_noret_decl(f_8486)
static void C_ccall f_8486(C_word c,C_word *av) C_noret;
C_noret_decl(f_8491)
static void C_fcall f_8491(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8516)
static void C_ccall f_8516(C_word c,C_word *av) C_noret;
C_noret_decl(f_8526)
static void C_ccall f_8526(C_word c,C_word *av) C_noret;
C_noret_decl(f_8528)
static void C_ccall f_8528(C_word c,C_word *av) C_noret;
C_noret_decl(f_8532)
static void C_ccall f_8532(C_word c,C_word *av) C_noret;
C_noret_decl(f_8538)
static void C_ccall f_8538(C_word c,C_word *av) C_noret;
C_noret_decl(f_8559)
static void C_ccall f_8559(C_word c,C_word *av) C_noret;
C_noret_decl(f_8566)
static void C_ccall f_8566(C_word c,C_word *av) C_noret;
C_noret_decl(f_8589)
static void C_ccall f_8589(C_word c,C_word *av) C_noret;
C_noret_decl(f_8593)
static void C_ccall f_8593(C_word c,C_word *av) C_noret;
C_noret_decl(f_8614)
static void C_ccall f_8614(C_word c,C_word *av) C_noret;
C_noret_decl(f_8617)
static void C_ccall f_8617(C_word c,C_word *av) C_noret;
C_noret_decl(f_8621)
static void C_fcall f_8621(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8629)
static void C_ccall f_8629(C_word c,C_word *av) C_noret;
C_noret_decl(f_8633)
static void C_ccall f_8633(C_word c,C_word *av) C_noret;
C_noret_decl(f_8639)
static void C_ccall f_8639(C_word c,C_word *av) C_noret;
C_noret_decl(f_8640)
static void C_ccall f_8640(C_word c,C_word *av) C_noret;
C_noret_decl(f_8651)
static void C_ccall f_8651(C_word c,C_word *av) C_noret;
C_noret_decl(f_8666)
static void C_ccall f_8666(C_word c,C_word *av) C_noret;
C_noret_decl(f_8668)
static void C_fcall f_8668(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8687)
static void C_fcall f_8687(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8695)
static void C_ccall f_8695(C_word c,C_word *av) C_noret;
C_noret_decl(f_8701)
static void C_ccall f_8701(C_word c,C_word *av) C_noret;
C_noret_decl(f_8703)
static void C_fcall f_8703(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8728)
static void C_ccall f_8728(C_word c,C_word *av) C_noret;
C_noret_decl(f_8741)
static void C_fcall f_8741(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8752)
static void C_ccall f_8752(C_word c,C_word *av) C_noret;
C_noret_decl(f_8789)
static void C_ccall f_8789(C_word c,C_word *av) C_noret;
C_noret_decl(f_8817)
static void C_fcall f_8817(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8851)
static void C_fcall f_8851(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8882)
static void C_ccall f_8882(C_word c,C_word *av) C_noret;
C_noret_decl(f_8889)
static void C_ccall f_8889(C_word c,C_word *av) C_noret;
C_noret_decl(f_8895)
static void C_fcall f_8895(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8920)
static void C_ccall f_8920(C_word c,C_word *av) C_noret;
C_noret_decl(f_8929)
static void C_fcall f_8929(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8942)
static void C_ccall f_8942(C_word c,C_word *av) C_noret;
C_noret_decl(f_8967)
static void C_fcall f_8967(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9003)
static void C_ccall f_9003(C_word c,C_word *av) C_noret;
C_noret_decl(f_9005)
static void C_ccall f_9005(C_word c,C_word *av) C_noret;
C_noret_decl(f_9009)
static void C_ccall f_9009(C_word c,C_word *av) C_noret;
C_noret_decl(f_9016)
static void C_ccall f_9016(C_word c,C_word *av) C_noret;
C_noret_decl(f_9020)
static void C_ccall f_9020(C_word c,C_word *av) C_noret;
C_noret_decl(f_9028)
static void C_ccall f_9028(C_word c,C_word *av) C_noret;
C_noret_decl(f_9042)
static void C_ccall f_9042(C_word c,C_word *av) C_noret;
C_noret_decl(f_9048)
static void C_ccall f_9048(C_word c,C_word *av) C_noret;
C_noret_decl(f_9055)
static void C_ccall f_9055(C_word c,C_word *av) C_noret;
C_noret_decl(f_9061)
static void C_ccall f_9061(C_word c,C_word *av) C_noret;
C_noret_decl(f_9074)
static void C_fcall f_9074(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9108)
static void C_fcall f_9108(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9118)
static void C_ccall f_9118(C_word c,C_word *av) C_noret;
C_noret_decl(f_9133)
static void C_ccall f_9133(C_word c,C_word *av) C_noret;
C_noret_decl(f_9135)
static void C_ccall f_9135(C_word c,C_word *av) C_noret;
C_noret_decl(f_9139)
static void C_ccall f_9139(C_word c,C_word *av) C_noret;
C_noret_decl(f_9154)
static void C_ccall f_9154(C_word c,C_word *av) C_noret;
C_noret_decl(f_9156)
static void C_ccall f_9156(C_word c,C_word *av) C_noret;
C_noret_decl(f_9160)
static void C_ccall f_9160(C_word c,C_word *av) C_noret;
C_noret_decl(f_9182)
static void C_ccall f_9182(C_word c,C_word *av) C_noret;
C_noret_decl(f_9184)
static void C_ccall f_9184(C_word c,C_word *av) C_noret;
C_noret_decl(f_9188)
static void C_ccall f_9188(C_word c,C_word *av) C_noret;
C_noret_decl(f_9206)
static void C_ccall f_9206(C_word c,C_word *av) C_noret;
C_noret_decl(f_9208)
static void C_ccall f_9208(C_word c,C_word *av) C_noret;
C_noret_decl(f_9217)
static void C_fcall f_9217(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9223)
static void C_ccall f_9223(C_word c,C_word *av) C_noret;
C_noret_decl(f_9229)
static void C_ccall f_9229(C_word c,C_word *av) C_noret;
C_noret_decl(f_9243)
static void C_ccall f_9243(C_word c,C_word *av) C_noret;
C_noret_decl(f_9252)
static void C_ccall f_9252(C_word c,C_word *av) C_noret;
C_noret_decl(f_9254)
static void C_fcall f_9254(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9279)
static void C_ccall f_9279(C_word c,C_word *av) C_noret;
C_noret_decl(f_9290)
static void C_ccall f_9290(C_word c,C_word *av) C_noret;
C_noret_decl(f_9292)
static void C_ccall f_9292(C_word c,C_word *av) C_noret;
C_noret_decl(f_9311)
static void C_ccall f_9311(C_word c,C_word *av) C_noret;
C_noret_decl(f_9319)
static void C_ccall f_9319(C_word c,C_word *av) C_noret;
C_noret_decl(f_9328)
static void C_ccall f_9328(C_word c,C_word *av) C_noret;
C_noret_decl(f_9334)
static void C_ccall f_9334(C_word c,C_word *av) C_noret;
C_noret_decl(f_9338)
static void C_fcall f_9338(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9346)
static void C_ccall f_9346(C_word c,C_word *av) C_noret;
C_noret_decl(f_9352)
static void C_ccall f_9352(C_word c,C_word *av) C_noret;
C_noret_decl(f_9356)
static void C_fcall f_9356(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9364)
static void C_ccall f_9364(C_word c,C_word *av) C_noret;
C_noret_decl(f_9367)
static void C_ccall f_9367(C_word c,C_word *av) C_noret;
C_noret_decl(f_9371)
static void C_fcall f_9371(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9379)
static void C_ccall f_9379(C_word c,C_word *av) C_noret;
C_noret_decl(f_9382)
static void C_ccall f_9382(C_word c,C_word *av) C_noret;
C_noret_decl(f_9395)
static void C_ccall f_9395(C_word c,C_word *av) C_noret;
C_noret_decl(f_9412)
static void C_ccall f_9412(C_word c,C_word *av) C_noret;
C_noret_decl(f_9423)
static void C_ccall f_9423(C_word c,C_word *av) C_noret;
C_noret_decl(f_9471)
static void C_ccall f_9471(C_word c,C_word *av) C_noret;
C_noret_decl(f_9475)
static void C_ccall f_9475(C_word c,C_word *av) C_noret;
C_noret_decl(f_9487)
static void C_ccall f_9487(C_word c,C_word *av) C_noret;
C_noret_decl(f_9499)
static void C_ccall f_9499(C_word c,C_word *av) C_noret;
C_noret_decl(f_9501)
static void C_fcall f_9501(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9549)
static void C_fcall f_9549(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9597)
static void C_fcall f_9597(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9604)
static void C_fcall f_9604(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9674)
static C_word C_fcall f_9674(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3);
C_noret_decl(f_9692)
static void C_ccall f_9692(C_word c,C_word *av) C_noret;
C_noret_decl(f_9696)
static void C_ccall f_9696(C_word c,C_word *av) C_noret;
C_noret_decl(f_9712)
static void C_ccall f_9712(C_word c,C_word *av) C_noret;
C_noret_decl(f_9716)
static void C_ccall f_9716(C_word c,C_word *av) C_noret;
C_noret_decl(f_9728)
static void C_ccall f_9728(C_word c,C_word *av) C_noret;
C_noret_decl(f_9738)
static void C_fcall f_9738(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9786)
static void C_fcall f_9786(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9834)
static void C_fcall f_9834(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9841)
static void C_fcall f_9841(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9904)
static void C_fcall f_9904(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9952)
static void C_fcall f_9952(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externexport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_10000)
static void C_ccall trf_10000(C_word c,C_word *av) C_noret;
static void C_ccall trf_10000(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10000(t0,t1,t2,t3);}

C_noret_decl(trf_10048)
static void C_ccall trf_10048(C_word c,C_word *av) C_noret;
static void C_ccall trf_10048(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10048(t0,t1,t2);}

C_noret_decl(trf_10082)
static void C_ccall trf_10082(C_word c,C_word *av) C_noret;
static void C_ccall trf_10082(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10082(t0,t1,t2);}

C_noret_decl(trf_10116)
static void C_ccall trf_10116(C_word c,C_word *av) C_noret;
static void C_ccall trf_10116(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10116(t0,t1,t2);}

C_noret_decl(trf_10150)
static void C_ccall trf_10150(C_word c,C_word *av) C_noret;
static void C_ccall trf_10150(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10150(t0,t1,t2);}

C_noret_decl(trf_10184)
static void C_ccall trf_10184(C_word c,C_word *av) C_noret;
static void C_ccall trf_10184(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10184(t0,t1,t2);}

C_noret_decl(trf_10244)
static void C_ccall trf_10244(C_word c,C_word *av) C_noret;
static void C_ccall trf_10244(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10244(t0,t1);}

C_noret_decl(trf_10259)
static void C_ccall trf_10259(C_word c,C_word *av) C_noret;
static void C_ccall trf_10259(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10259(t0,t1);}

C_noret_decl(trf_10339)
static void C_ccall trf_10339(C_word c,C_word *av) C_noret;
static void C_ccall trf_10339(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10339(t0,t1,t2,t3);}

C_noret_decl(trf_10387)
static void C_ccall trf_10387(C_word c,C_word *av) C_noret;
static void C_ccall trf_10387(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10387(t0,t1,t2,t3);}

C_noret_decl(trf_10486)
static void C_ccall trf_10486(C_word c,C_word *av) C_noret;
static void C_ccall trf_10486(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10486(t0,t1,t2,t3);}

C_noret_decl(trf_10534)
static void C_ccall trf_10534(C_word c,C_word *av) C_noret;
static void C_ccall trf_10534(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10534(t0,t1,t2,t3);}

C_noret_decl(trf_10617)
static void C_ccall trf_10617(C_word c,C_word *av) C_noret;
static void C_ccall trf_10617(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10617(t0,t1,t2,t3);}

C_noret_decl(trf_10667)
static void C_ccall trf_10667(C_word c,C_word *av) C_noret;
static void C_ccall trf_10667(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10667(t0,t1,t2);}

C_noret_decl(trf_10687)
static void C_ccall trf_10687(C_word c,C_word *av) C_noret;
static void C_ccall trf_10687(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10687(t0,t1,t2,t3);}

C_noret_decl(trf_10735)
static void C_ccall trf_10735(C_word c,C_word *av) C_noret;
static void C_ccall trf_10735(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10735(t0,t1,t2);}

C_noret_decl(trf_10769)
static void C_ccall trf_10769(C_word c,C_word *av) C_noret;
static void C_ccall trf_10769(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10769(t0,t1,t2);}

C_noret_decl(trf_10803)
static void C_ccall trf_10803(C_word c,C_word *av) C_noret;
static void C_ccall trf_10803(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10803(t0,t1,t2);}

C_noret_decl(trf_10837)
static void C_ccall trf_10837(C_word c,C_word *av) C_noret;
static void C_ccall trf_10837(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10837(t0,t1,t2);}

C_noret_decl(trf_10985)
static void C_ccall trf_10985(C_word c,C_word *av) C_noret;
static void C_ccall trf_10985(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10985(t0,t1);}

C_noret_decl(trf_11069)
static void C_ccall trf_11069(C_word c,C_word *av) C_noret;
static void C_ccall trf_11069(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11069(t0,t1,t2);}

C_noret_decl(trf_11162)
static void C_ccall trf_11162(C_word c,C_word *av) C_noret;
static void C_ccall trf_11162(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11162(t0,t1,t2,t3);}

C_noret_decl(trf_11214)
static void C_ccall trf_11214(C_word c,C_word *av) C_noret;
static void C_ccall trf_11214(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11214(t0,t1);}

C_noret_decl(trf_11380)
static void C_ccall trf_11380(C_word c,C_word *av) C_noret;
static void C_ccall trf_11380(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11380(t0,t1,t2);}

C_noret_decl(trf_11512)
static void C_ccall trf_11512(C_word c,C_word *av) C_noret;
static void C_ccall trf_11512(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11512(t0,t1,t2,t3);}

C_noret_decl(trf_11562)
static void C_ccall trf_11562(C_word c,C_word *av) C_noret;
static void C_ccall trf_11562(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11562(t0,t1,t2,t3);}

C_noret_decl(trf_11607)
static void C_ccall trf_11607(C_word c,C_word *av) C_noret;
static void C_ccall trf_11607(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11607(t0,t1);}

C_noret_decl(trf_11631)
static void C_ccall trf_11631(C_word c,C_word *av) C_noret;
static void C_ccall trf_11631(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11631(t0,t1);}

C_noret_decl(trf_11867)
static void C_ccall trf_11867(C_word c,C_word *av) C_noret;
static void C_ccall trf_11867(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11867(t0,t1,t2);}

C_noret_decl(trf_11907)
static void C_ccall trf_11907(C_word c,C_word *av) C_noret;
static void C_ccall trf_11907(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11907(t0,t1,t2);}

C_noret_decl(trf_11993)
static void C_ccall trf_11993(C_word c,C_word *av) C_noret;
static void C_ccall trf_11993(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_11993(t0,t1,t2,t3,t4);}

C_noret_decl(trf_12049)
static void C_ccall trf_12049(C_word c,C_word *av) C_noret;
static void C_ccall trf_12049(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12049(t0,t1,t2,t3);}

C_noret_decl(trf_12146)
static void C_ccall trf_12146(C_word c,C_word *av) C_noret;
static void C_ccall trf_12146(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12146(t0,t1,t2);}

C_noret_decl(trf_12190)
static void C_ccall trf_12190(C_word c,C_word *av) C_noret;
static void C_ccall trf_12190(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12190(t0,t1,t2,t3);}

C_noret_decl(trf_12244)
static void C_ccall trf_12244(C_word c,C_word *av) C_noret;
static void C_ccall trf_12244(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12244(t0,t1);}

C_noret_decl(trf_12414)
static void C_ccall trf_12414(C_word c,C_word *av) C_noret;
static void C_ccall trf_12414(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12414(t0,t1,t2);}

C_noret_decl(trf_12448)
static void C_ccall trf_12448(C_word c,C_word *av) C_noret;
static void C_ccall trf_12448(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12448(t0,t1,t2);}

C_noret_decl(trf_12516)
static void C_ccall trf_12516(C_word c,C_word *av) C_noret;
static void C_ccall trf_12516(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12516(t0,t1,t2,t3);}

C_noret_decl(trf_12566)
static void C_ccall trf_12566(C_word c,C_word *av) C_noret;
static void C_ccall trf_12566(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12566(t0,t1,t2,t3);}

C_noret_decl(trf_12585)
static void C_ccall trf_12585(C_word c,C_word *av) C_noret;
static void C_ccall trf_12585(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12585(t0,t1);}

C_noret_decl(trf_12726)
static void C_ccall trf_12726(C_word c,C_word *av) C_noret;
static void C_ccall trf_12726(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12726(t0,t1);}

C_noret_decl(trf_12803)
static void C_ccall trf_12803(C_word c,C_word *av) C_noret;
static void C_ccall trf_12803(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12803(t0,t1);}

C_noret_decl(trf_12806)
static void C_ccall trf_12806(C_word c,C_word *av) C_noret;
static void C_ccall trf_12806(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12806(t0,t1);}

C_noret_decl(trf_12809)
static void C_ccall trf_12809(C_word c,C_word *av) C_noret;
static void C_ccall trf_12809(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12809(t0,t1);}

C_noret_decl(trf_12850)
static void C_ccall trf_12850(C_word c,C_word *av) C_noret;
static void C_ccall trf_12850(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12850(t0,t1,t2);}

C_noret_decl(trf_12985)
static void C_ccall trf_12985(C_word c,C_word *av) C_noret;
static void C_ccall trf_12985(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12985(t0,t1,t2);}

C_noret_decl(trf_4313)
static void C_ccall trf_4313(C_word c,C_word *av) C_noret;
static void C_ccall trf_4313(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4313(t0,t1,t2);}

C_noret_decl(trf_4371)
static void C_ccall trf_4371(C_word c,C_word *av) C_noret;
static void C_ccall trf_4371(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4371(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5742)
static void C_ccall trf_5742(C_word c,C_word *av) C_noret;
static void C_ccall trf_5742(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5742(t0,t1);}

C_noret_decl(trf_5765)
static void C_ccall trf_5765(C_word c,C_word *av) C_noret;
static void C_ccall trf_5765(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5765(t0,t1);}

C_noret_decl(trf_5916)
static void C_ccall trf_5916(C_word c,C_word *av) C_noret;
static void C_ccall trf_5916(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_5916(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_6111)
static void C_ccall trf_6111(C_word c,C_word *av) C_noret;
static void C_ccall trf_6111(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_6111(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_6342)
static void C_ccall trf_6342(C_word c,C_word *av) C_noret;
static void C_ccall trf_6342(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6342(t0,t1,t2,t3);}

C_noret_decl(trf_6361)
static void C_ccall trf_6361(C_word c,C_word *av) C_noret;
static void C_ccall trf_6361(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6361(t0,t1);}

C_noret_decl(trf_6367)
static void C_ccall trf_6367(C_word c,C_word *av) C_noret;
static void C_ccall trf_6367(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6367(t0,t1);}

C_noret_decl(trf_6374)
static void C_ccall trf_6374(C_word c,C_word *av) C_noret;
static void C_ccall trf_6374(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6374(t0,t1);}

C_noret_decl(trf_6382)
static void C_ccall trf_6382(C_word c,C_word *av) C_noret;
static void C_ccall trf_6382(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6382(t0,t1);}

C_noret_decl(trf_6572)
static void C_ccall trf_6572(C_word c,C_word *av) C_noret;
static void C_ccall trf_6572(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6572(t0,t1,t2);}

C_noret_decl(trf_6610)
static void C_ccall trf_6610(C_word c,C_word *av) C_noret;
static void C_ccall trf_6610(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6610(t0,t1,t2);}

C_noret_decl(trf_6781)
static void C_ccall trf_6781(C_word c,C_word *av) C_noret;
static void C_ccall trf_6781(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6781(t0,t1,t2);}

C_noret_decl(trf_6787)
static void C_ccall trf_6787(C_word c,C_word *av) C_noret;
static void C_ccall trf_6787(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6787(t0,t1,t2);}

C_noret_decl(trf_6865)
static void C_ccall trf_6865(C_word c,C_word *av) C_noret;
static void C_ccall trf_6865(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6865(t0,t1,t2);}

C_noret_decl(trf_6873)
static void C_ccall trf_6873(C_word c,C_word *av) C_noret;
static void C_ccall trf_6873(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6873(t0,t1,t2,t3);}

C_noret_decl(trf_6897)
static void C_ccall trf_6897(C_word c,C_word *av) C_noret;
static void C_ccall trf_6897(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6897(t0,t1);}

C_noret_decl(trf_6941)
static void C_ccall trf_6941(C_word c,C_word *av) C_noret;
static void C_ccall trf_6941(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6941(t0,t1,t2,t3);}

C_noret_decl(trf_6989)
static void C_ccall trf_6989(C_word c,C_word *av) C_noret;
static void C_ccall trf_6989(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6989(t0,t1,t2,t3);}

C_noret_decl(trf_7157)
static void C_ccall trf_7157(C_word c,C_word *av) C_noret;
static void C_ccall trf_7157(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7157(t0,t1,t2);}

C_noret_decl(trf_7257)
static void C_ccall trf_7257(C_word c,C_word *av) C_noret;
static void C_ccall trf_7257(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7257(t0,t1,t2,t3);}

C_noret_decl(trf_7489)
static void C_ccall trf_7489(C_word c,C_word *av) C_noret;
static void C_ccall trf_7489(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_7489(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_7550)
static void C_ccall trf_7550(C_word c,C_word *av) C_noret;
static void C_ccall trf_7550(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_7550(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_7556)
static void C_ccall trf_7556(C_word c,C_word *av) C_noret;
static void C_ccall trf_7556(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_7556(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7656)
static void C_ccall trf_7656(C_word c,C_word *av) C_noret;
static void C_ccall trf_7656(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7656(t0,t1,t2);}

C_noret_decl(trf_7672)
static void C_ccall trf_7672(C_word c,C_word *av) C_noret;
static void C_ccall trf_7672(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7672(t0,t1,t2);}

C_noret_decl(trf_7702)
static void C_ccall trf_7702(C_word c,C_word *av) C_noret;
static void C_ccall trf_7702(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7702(t0,t1,t2);}

C_noret_decl(trf_7752)
static void C_ccall trf_7752(C_word c,C_word *av) C_noret;
static void C_ccall trf_7752(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7752(t0,t1,t2);}

C_noret_decl(trf_7786)
static void C_ccall trf_7786(C_word c,C_word *av) C_noret;
static void C_ccall trf_7786(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7786(t0,t1,t2);}

C_noret_decl(trf_7820)
static void C_ccall trf_7820(C_word c,C_word *av) C_noret;
static void C_ccall trf_7820(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7820(t0,t1,t2);}

C_noret_decl(trf_7854)
static void C_ccall trf_7854(C_word c,C_word *av) C_noret;
static void C_ccall trf_7854(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7854(t0,t1,t2);}

C_noret_decl(trf_7918)
static void C_ccall trf_7918(C_word c,C_word *av) C_noret;
static void C_ccall trf_7918(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7918(t0,t1,t2,t3);}

C_noret_decl(trf_8048)
static void C_ccall trf_8048(C_word c,C_word *av) C_noret;
static void C_ccall trf_8048(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8048(t0,t1,t2,t3);}

C_noret_decl(trf_8061)
static void C_ccall trf_8061(C_word c,C_word *av) C_noret;
static void C_ccall trf_8061(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8061(t0,t1);}

C_noret_decl(trf_8073)
static void C_ccall trf_8073(C_word c,C_word *av) C_noret;
static void C_ccall trf_8073(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8073(t0,t1);}

C_noret_decl(trf_8284)
static void C_ccall trf_8284(C_word c,C_word *av) C_noret;
static void C_ccall trf_8284(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8284(t0,t1,t2,t3);}

C_noret_decl(trf_8332)
static void C_ccall trf_8332(C_word c,C_word *av) C_noret;
static void C_ccall trf_8332(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8332(t0,t1,t2);}

C_noret_decl(trf_8366)
static void C_ccall trf_8366(C_word c,C_word *av) C_noret;
static void C_ccall trf_8366(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8366(t0,t1,t2,t3);}

C_noret_decl(trf_8402)
static void C_ccall trf_8402(C_word c,C_word *av) C_noret;
static void C_ccall trf_8402(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8402(t0,t1,t2);}

C_noret_decl(trf_8436)
static void C_ccall trf_8436(C_word c,C_word *av) C_noret;
static void C_ccall trf_8436(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8436(t0,t1,t2);}

C_noret_decl(trf_8491)
static void C_ccall trf_8491(C_word c,C_word *av) C_noret;
static void C_ccall trf_8491(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8491(t0,t1,t2);}

C_noret_decl(trf_8621)
static void C_ccall trf_8621(C_word c,C_word *av) C_noret;
static void C_ccall trf_8621(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8621(t0,t1,t2);}

C_noret_decl(trf_8668)
static void C_ccall trf_8668(C_word c,C_word *av) C_noret;
static void C_ccall trf_8668(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_8668(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8687)
static void C_ccall trf_8687(C_word c,C_word *av) C_noret;
static void C_ccall trf_8687(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8687(t0,t1,t2);}

C_noret_decl(trf_8703)
static void C_ccall trf_8703(C_word c,C_word *av) C_noret;
static void C_ccall trf_8703(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8703(t0,t1,t2);}

C_noret_decl(trf_8741)
static void C_ccall trf_8741(C_word c,C_word *av) C_noret;
static void C_ccall trf_8741(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8741(t0,t1);}

C_noret_decl(trf_8817)
static void C_ccall trf_8817(C_word c,C_word *av) C_noret;
static void C_ccall trf_8817(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8817(t0,t1,t2);}

C_noret_decl(trf_8851)
static void C_ccall trf_8851(C_word c,C_word *av) C_noret;
static void C_ccall trf_8851(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8851(t0,t1,t2,t3);}

C_noret_decl(trf_8895)
static void C_ccall trf_8895(C_word c,C_word *av) C_noret;
static void C_ccall trf_8895(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8895(t0,t1,t2);}

C_noret_decl(trf_8929)
static void C_ccall trf_8929(C_word c,C_word *av) C_noret;
static void C_ccall trf_8929(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8929(t0,t1,t2,t3);}

C_noret_decl(trf_8967)
static void C_ccall trf_8967(C_word c,C_word *av) C_noret;
static void C_ccall trf_8967(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8967(t0,t1,t2);}

C_noret_decl(trf_9074)
static void C_ccall trf_9074(C_word c,C_word *av) C_noret;
static void C_ccall trf_9074(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9074(t0,t1,t2);}

C_noret_decl(trf_9108)
static void C_ccall trf_9108(C_word c,C_word *av) C_noret;
static void C_ccall trf_9108(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9108(t0,t1,t2);}

C_noret_decl(trf_9217)
static void C_ccall trf_9217(C_word c,C_word *av) C_noret;
static void C_ccall trf_9217(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9217(t0,t1,t2);}

C_noret_decl(trf_9254)
static void C_ccall trf_9254(C_word c,C_word *av) C_noret;
static void C_ccall trf_9254(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9254(t0,t1,t2);}

C_noret_decl(trf_9338)
static void C_ccall trf_9338(C_word c,C_word *av) C_noret;
static void C_ccall trf_9338(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9338(t0,t1,t2);}

C_noret_decl(trf_9356)
static void C_ccall trf_9356(C_word c,C_word *av) C_noret;
static void C_ccall trf_9356(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9356(t0,t1);}

C_noret_decl(trf_9371)
static void C_ccall trf_9371(C_word c,C_word *av) C_noret;
static void C_ccall trf_9371(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9371(t0,t1);}

C_noret_decl(trf_9501)
static void C_ccall trf_9501(C_word c,C_word *av) C_noret;
static void C_ccall trf_9501(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9501(t0,t1,t2,t3);}

C_noret_decl(trf_9549)
static void C_ccall trf_9549(C_word c,C_word *av) C_noret;
static void C_ccall trf_9549(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9549(t0,t1,t2,t3);}

C_noret_decl(trf_9597)
static void C_ccall trf_9597(C_word c,C_word *av) C_noret;
static void C_ccall trf_9597(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9597(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9604)
static void C_ccall trf_9604(C_word c,C_word *av) C_noret;
static void C_ccall trf_9604(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9604(t0,t1);}

C_noret_decl(trf_9738)
static void C_ccall trf_9738(C_word c,C_word *av) C_noret;
static void C_ccall trf_9738(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9738(t0,t1,t2,t3);}

C_noret_decl(trf_9786)
static void C_ccall trf_9786(C_word c,C_word *av) C_noret;
static void C_ccall trf_9786(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9786(t0,t1,t2,t3);}

C_noret_decl(trf_9834)
static void C_ccall trf_9834(C_word c,C_word *av) C_noret;
static void C_ccall trf_9834(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9834(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9841)
static void C_ccall trf_9841(C_word c,C_word *av) C_noret;
static void C_ccall trf_9841(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9841(t0,t1);}

C_noret_decl(trf_9904)
static void C_ccall trf_9904(C_word c,C_word *av) C_noret;
static void C_ccall trf_9904(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9904(t0,t1,t2,t3);}

C_noret_decl(trf_9952)
static void C_ccall trf_9952(C_word c,C_word *av) C_noret;
static void C_ccall trf_9952(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9952(t0,t1,t2,t3);}

/* map-loop1746 in k9380 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_fcall f_10000(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10000,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
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

/* map-loop1716 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in ... */
static void C_fcall f_10048(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10048,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10073,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:496: g1722 */
t4=((C_word*)t0)[4];
f_9371(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10071 in map-loop1716 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
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

/* map-loop1688 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_fcall f_10082(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10082,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10107,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:495: g1694 */
t4=((C_word*)t0)[4];
f_9356(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10105 in map-loop1688 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in ... */
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10107,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10082(t6,((C_word*)t0)[5],t5);}

/* map-loop1660 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in ... */
static void C_fcall f_10116(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10116,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10141,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:494: g1666 */
t5=((C_word*)t0)[4];
f_9338(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10139 in map-loop1660 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_ccall f_10141(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10141,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10116(t6,((C_word*)t0)[5],t5);}

/* map-loop1633 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in ... */
static void C_fcall f_10150(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10150,3,t0,t1,t2);}
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

/* map-loop1606 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in ... */
static void C_fcall f_10184(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10184,3,t0,t1,t2);}
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

/* k10218 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in ... */
static void C_ccall f_10220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10220,2,av);}
/* chicken-syntax.scm:448: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[181];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in ... */
static void C_ccall f_10222(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10222,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10226,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:452: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[181];
av2[3]=t2;
av2[4]=lf[182];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in ... */
static void C_ccall f_10226(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_10226,2,av);}
a=C_alloc(19);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=C_i_check_list_2(t3,lf[67]);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10240,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10837,a[2]=t9,a[3]=t14,a[4]=t10,a[5]=((C_word)li113),tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_10837(t16,t12,t3);}

/* k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in ... */
static void C_ccall f_10240(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_10240,2,av);}
a=C_alloc(25);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10244,a[2]=((C_word*)t0)[2],a[3]=((C_word)li101),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10255,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10803,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t6,a[6]=((C_word)li112),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_10803(t12,t8,((C_word*)t0)[5]);}

/* g1309 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in ... */
static void C_fcall f_10244(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_10244,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10252,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:456: chicken.base#gensym */
t3=*((C_word*)lf[56]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10250 in g1309 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in ... */
static void C_ccall f_10252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10252,2,av);}
/* chicken-syntax.scm:456: r */
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

/* k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in ... */
static void C_ccall f_10255(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_10255,2,av);}
a=C_alloc(25);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10259,a[2]=((C_word*)t0)[2],a[3]=((C_word)li102),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10270,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10769,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t6,a[6]=((C_word)li111),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_10769(t12,t8,((C_word*)t0)[6]);}

/* g1337 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in ... */
static void C_fcall f_10259(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_10259,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10267,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:457: chicken.base#gensym */
t3=*((C_word*)lf[56]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10265 in g1337 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in ... */
static void C_ccall f_10267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10267,2,av);}
/* chicken-syntax.scm:457: r */
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

/* k10268 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in ... */
static void C_ccall f_10270(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_10270,2,av);}
a=C_alloc(33);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10277,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=((C_word*)t0)[5];
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10590,a[2]=t8,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=t6,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10735,a[2]=t11,a[3]=t15,a[4]=t12,a[5]=((C_word)li110),tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_10735(t17,t13,((C_word*)t0)[6]);}

/* k10275 in k10268 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in ... */
static void C_ccall f_10277(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,4)))){
C_save_and_reclaim((void *)f_10277,2,av);}
a=C_alloc(26);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10445,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_check_list_2(((C_word*)t0)[4],lf[67]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10460,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10534,a[2]=t6,a[3]=t11,a[4]=t7,a[5]=((C_word)li106),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_10534(t13,t9,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k10299 in k10443 in k10275 in k10268 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_ccall f_10301(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_10301,2,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[23],t2);
t4=C_a_i_list(&a,4,lf[177],((C_word*)t0)[2],((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[37],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k10311 in k10443 in k10275 in k10268 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_ccall f_10313(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_10313,2,av);}
a=C_alloc(20);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10317,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10329,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10339,a[2]=t6,a[3]=t10,a[4]=t7,a[5]=((C_word)li103),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_10339(t12,t8,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k10315 in k10311 in k10443 in k10275 in k10268 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in ... */
static void C_ccall f_10317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10317,2,av);}
/* chicken-syntax.scm:318: ##sys#append */
t2=*((C_word*)lf[55]+1);{
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

/* k10327 in k10311 in k10443 in k10275 in k10268 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in ... */
static void C_ccall f_10329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_10329,2,av);}
a=C_alloc(6);
t2=C_a_i_list(&a,1,lf[163]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:318: ##sys#append */
t4=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* map-loop1560 in k10311 in k10443 in k10275 in k10268 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in ... */
static void C_fcall f_10339(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_10339,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[178],t6,t7);
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

/* map-loop1524 in k10443 in k10275 in k10268 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_fcall f_10387(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_10387,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[178],t6,t7);
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

/* k10443 in k10275 in k10268 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in ... */
static void C_ccall f_10445(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(36,c,4)))){
C_save_and_reclaim((void *)f_10445,2,av);}
a=C_alloc(36);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[23],t2);
t4=t3;
t5=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t6=C_a_i_cons(&a,2,lf[23],t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10301,a[2]=t4,a[3]=t7,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10313,a[2]=t8,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10387,a[2]=t11,a[3]=t15,a[4]=t12,a[5]=((C_word)li104),tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_10387(t17,t13,((C_word*)t0)[7],((C_word*)t0)[5]);}

/* k10458 in k10275 in k10268 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in ... */
static void C_ccall f_10460(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_10460,2,av);}
a=C_alloc(20);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10464,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10476,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10486,a[2]=t6,a[3]=t10,a[4]=t7,a[5]=((C_word)li105),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_10486(t12,t8,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k10462 in k10458 in k10275 in k10268 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_ccall f_10464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10464,2,av);}
/* chicken-syntax.scm:318: ##sys#append */
t2=*((C_word*)lf[55]+1);{
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

/* k10474 in k10458 in k10275 in k10268 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_ccall f_10476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_10476,2,av);}
a=C_alloc(6);
t2=C_a_i_list(&a,1,lf[163]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:318: ##sys#append */
t4=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* map-loop1488 in k10458 in k10275 in k10268 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_fcall f_10486(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_10486,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[178],t6,t7);
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

/* map-loop1452 in k10275 in k10268 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in ... */
static void C_fcall f_10534(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_10534,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[178],t6,t7);
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

/* k10588 in k10268 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in ... */
static void C_ccall f_10590(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_10590,2,av);}
a=C_alloc(13);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[67]);
t3=C_i_check_list_2(t1,lf[67]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10599,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10687,a[2]=((C_word*)t0)[6],a[3]=t6,a[4]=((C_word*)t0)[7],a[5]=((C_word)li109),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_10687(t8,t4,((C_word*)t0)[2],t1);}

/* k10597 in k10588 in k10268 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in ... */
static void C_ccall f_10599(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_10599,2,av);}
a=C_alloc(18);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)t0)[2];
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10606,a[2]=t7,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t5,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t9=C_u_i_length(((C_word*)t0)[4]);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10667,a[2]=t11,a[3]=((C_word)li108),tmp=(C_word)a,a+=4,tmp));
t13=((C_word*)t11)[1];
f_10667(t13,t8,t9);}

/* k10604 in k10597 in k10588 in k10268 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_ccall f_10606(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_10606,2,av);}
a=C_alloc(12);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[67]);
t3=C_i_check_list_2(t1,lf[67]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10615,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10617,a[2]=((C_word*)t0)[5],a[3]=t6,a[4]=((C_word*)t0)[6],a[5]=((C_word)li107),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_10617(t8,t4,((C_word*)t0)[2],t1);}

/* k10613 in k10604 in k10597 in k10588 in k10268 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in ... */
static void C_ccall f_10615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10615,2,av);}
/* chicken-syntax.scm:318: ##sys#append */
t2=*((C_word*)lf[55]+1);{
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

/* map-loop1418 in k10604 in k10597 in k10588 in k10268 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in ... */
static void C_fcall f_10617(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10617,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
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

/* loop in k10597 in k10588 in k10268 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_fcall f_10667(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_10667,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10681,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=C_fixnum_difference(t2,C_fix(1));
/* chicken-syntax.scm:464: loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k10679 in loop in k10597 in k10588 in k10268 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in ... */
static void C_ccall f_10681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10681,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_SCHEME_FALSE,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop1361 in k10588 in k10268 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in ... */
static void C_fcall f_10687(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10687,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
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

/* map-loop1382 in k10268 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in ... */
static void C_fcall f_10735(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10735,3,t0,t1,t2);}
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

/* map-loop1331 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in ... */
static void C_fcall f_10769(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10769,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10794,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:457: g1337 */
t4=((C_word*)t0)[4];
f_10259(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10792 in map-loop1331 in k10253 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in ... */
static void C_ccall f_10794(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10794,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10769(t6,((C_word*)t0)[5],t5);}

/* map-loop1303 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in ... */
static void C_fcall f_10803(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10803,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10828,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:456: g1309 */
t4=((C_word*)t0)[4];
f_10244(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10826 in map-loop1303 in k10238 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in ... */
static void C_ccall f_10828(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10828,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10803(t6,((C_word*)t0)[5],t5);}

/* map-loop1276 in k10224 in a10221 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in ... */
static void C_fcall f_10837(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10837,3,t0,t1,t2);}
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

/* k10871 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in ... */
static void C_ccall f_10873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10873,2,av);}
/* chicken-syntax.scm:441: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[183];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10874 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in ... */
static void C_ccall f_10875(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10875,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10879,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:445: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[183];
av2[3]=t2;
av2[4]=lf[186];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10877 in a10874 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in ... */
static void C_ccall f_10879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10879,2,av);}
a=C_alloc(9);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[184],t2,*((C_word*)lf[185]+1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10888 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in ... */
static void C_ccall f_10890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10890,2,av);}
/* chicken-syntax.scm:434: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[187];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10891 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in ... */
static void C_ccall f_10892(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10892,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10896,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:438: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[187];
av2[3]=t2;
av2[4]=lf[188];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10894 in a10891 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in ... */
static void C_ccall f_10896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10896,2,av);}
a=C_alloc(9);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[184],t2,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10905 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in ... */
static void C_ccall f_10907(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10907,2,av);}
/* chicken-syntax.scm:426: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[189];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10908 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in ... */
static void C_ccall f_10909(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10909,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10913,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:431: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[189];
av2[3]=t2;
av2[4]=lf[191];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10911 in a10908 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in ... */
static void C_ccall f_10913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_10913,2,av);}
a=C_alloc(15);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[23],C_SCHEME_END_OF_LIST,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[190],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10926 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in ... */
static void C_ccall f_10928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10928,2,av);}
/* chicken-syntax.scm:420: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[192];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10929 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in ... */
static void C_ccall f_10930(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10930,5,av);}
a=C_alloc(3);
t5=C_i_cdr(t2);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,lf[193],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k10940 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in ... */
static void C_ccall f_10942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10942,2,av);}
/* chicken-syntax.scm:401: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[194];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10943 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in ... */
static void C_ccall f_10944(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10944,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10948,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:406: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[194];
av2[3]=t2;
av2[4]=lf[197];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10946 in a10943 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in ... */
static void C_ccall f_10948(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_10948,2,av);}
a=C_alloc(15);
t2=C_i_cddr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t2))){
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t4);
t6=C_a_i_cons(&a,2,lf[23],t5);
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_list(&a,3,lf[28],t6,lf[195]);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10970,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:410: ##sys#check-syntax */
t4=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[194];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[196];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k10968 in k10946 in a10943 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in ... */
static void C_ccall f_10970(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_10970,2,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t4;
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=C_u_i_cdr(t8);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10985,a[2]=t3,a[3]=t5,a[4]=t9,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t3))){
t11=C_u_i_cdr(t3);
t12=t10;
f_10985(t12,C_i_nullp(t11));}
else{
t11=t10;
f_10985(t11,C_SCHEME_FALSE);}}

/* k10983 in k10968 in k10946 in a10943 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in ... */
static void C_fcall f_10985(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,0,1)))){
C_save_and_reclaim_args((void *)trf_10985,2,t0,t1);}
a=C_alloc(24);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,t2,((C_word*)t0)[3]);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[4]);
t6=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,lf[37],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t2=C_a_i_list(&a,3,lf[23],C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[4]);
t4=C_a_i_cons(&a,2,lf[23],t3);
t5=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[28],t2,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k11033 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in ... */
static void C_ccall f_11035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11035,2,av);}
/* chicken-syntax.scm:329: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[198];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in ... */
static void C_ccall f_11037(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_11037,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11041,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:333: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[198];
av2[3]=t2;
av2[4]=lf[208];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in ... */
static void C_ccall f_11041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11041,2,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11047,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:335: chicken.syntax#strip-syntax */
t5=*((C_word*)lf[39]+1);{
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

/* k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in ... */
static void C_ccall f_11047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_11047,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11050,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:336: scheme#symbol->string */
t4=*((C_word*)lf[118]+1);{
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

/* k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in ... */
static void C_ccall f_11050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_11050,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11053,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11415,a[2]=t3,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:337: ##sys#current-module */
t5=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k11051 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in ... */
static void C_ccall f_11053(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11053,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_i_cddr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11059,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:342: r */
t6=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[79];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k11057 in k11051 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in ... */
static void C_ccall f_11059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11059,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11062,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:343: r */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[207];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k11060 in k11057 in k11051 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in ... */
static void C_ccall f_11062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11062,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11065,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:344: r */
t4=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[78];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k11063 in k11060 in k11057 in k11051 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in ... */
static void C_ccall f_11065(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_11065,2,av);}
a=C_alloc(28);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11069,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li120),tmp=(C_word)a,a+=5,tmp);
t8=C_i_check_list_2(((C_word*)t0)[4],lf[67]);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11129,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t2,a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11380,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li122),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_11380(t13,t9,((C_word*)t0)[4]);}

/* g1163 in k11063 in k11060 in k11057 in k11051 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in ... */
static void C_fcall f_11069(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_11069,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_symbolp(t2))){
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11097,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=C_u_i_car(t4);
/* chicken-syntax.scm:349: c */
t6=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
/* chicken-syntax.scm:355: chicken.syntax#syntax-error */
t3=*((C_word*)lf[58]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[198];
av2[3]=lf[199];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}}

/* k11095 in g1163 in k11063 in k11060 in k11057 in k11051 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in ... */
static void C_ccall f_11097(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11097,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_i_symbolp(t4))){
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
if(C_truep(C_i_nullp(t7))){
t8=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_i_cadr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
/* chicken-syntax.scm:355: chicken.syntax#syntax-error */
t8=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[198];
av2[3]=lf[199];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}}
else{
/* chicken-syntax.scm:355: chicken.syntax#syntax-error */
t5=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[198];
av2[3]=lf[199];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}
else{
/* chicken-syntax.scm:355: chicken.syntax#syntax-error */
t4=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[198];
av2[3]=lf[199];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}
else{
/* chicken-syntax.scm:355: chicken.syntax#syntax-error */
t2=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[198];
av2[3]=lf[199];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k11127 in k11063 in k11060 in k11057 in k11051 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in ... */
static void C_ccall f_11129(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_11129,2,av);}
a=C_alloc(28);
t2=t1;
t3=C_a_i_list(&a,2,lf[38],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11352,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11372,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
t8=*((C_word*)lf[204]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[206];
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k11158 in k11324 in k11350 in k11127 in k11063 in k11060 in k11057 in k11051 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in ... */
static void C_ccall f_11160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_11160,2,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[29],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* mapslots in k11324 in k11350 in k11127 in k11063 in k11060 in k11057 in k11051 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in ... */
static void C_fcall f_11162(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_11162,4,t0,t1,t2,t3);}
a=C_alloc(11);
t4=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t2;
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=C_i_symbolp(t5);
t7=C_i_not(t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11178,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=t8,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t8)){
t10=C_i_cadr(t5);
/* chicken-syntax.scm:373: scheme#symbol->string */
t11=*((C_word*)lf[118]+1);{
C_word av2[3];
av2[0]=t11;
av2[1]=t9;
av2[2]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
/* chicken-syntax.scm:373: scheme#symbol->string */
t10=*((C_word*)lf[118]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}}}

/* k11176 in mapslots in k11324 in k11350 in k11127 in k11063 in k11060 in k11057 in k11051 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in ... */
static void C_ccall f_11178(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,5)))){
C_save_and_reclaim((void *)f_11178,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_11181,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11311,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:374: scheme#string-append */
t5=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[10];
av2[3]=lf[202];
av2[4]=t2;
av2[5]=lf[203];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}

/* k11179 in k11176 in mapslots in k11324 in k11350 in k11127 in k11063 in k11060 in k11057 in k11051 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_ccall f_11181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_11181,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11184,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,tmp=(C_word)a,a+=11,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11307,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:375: scheme#string-append */
t5=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[10];
av2[3]=lf[201];
av2[4]=((C_word*)t0)[11];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k11182 in k11179 in k11176 in mapslots in k11324 in k11350 in k11127 in k11063 in k11060 in k11057 in k11051 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in ... */
static void C_ccall f_11184(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(79,c,2)))){
C_save_and_reclaim((void *)f_11184,2,av);}
a=C_alloc(79);
t2=t1;
t3=C_a_i_list(&a,2,lf[77],lf[200]);
t4=C_a_i_list(&a,2,lf[38],((C_word*)t0)[2]);
t5=C_a_i_list(&a,3,lf[71],lf[77],t4);
t6=C_a_i_list(&a,2,lf[34],t5);
t7=C_a_i_list(&a,4,lf[74],lf[77],((C_word*)t0)[3],lf[200]);
t8=C_a_i_list(&a,4,lf[23],t3,t6,t7);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11210,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11214,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[8],a[6]=t9,a[7]=((C_word*)t0)[9],a[8]=t2,a[9]=t10,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[7])){
t12=t11;
f_11214(t12,C_SCHEME_END_OF_LIST);}
else{
t12=C_a_i_list(&a,3,((C_word*)t0)[9],((C_word*)t0)[10],t9);
t13=t11;
f_11214(t13,C_a_i_list(&a,1,t12));}}

/* k11196 in k11208 in k11182 in k11179 in k11176 in mapslots in k11324 in k11350 in k11127 in k11063 in k11060 in k11057 in k11051 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_11198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11198,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11208 in k11182 in k11179 in k11176 in mapslots in k11324 in k11350 in k11127 in k11063 in k11060 in k11057 in k11051 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_11210(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_11210,2,av);}
a=C_alloc(7);
t2=C_a_i_cons(&a,2,lf[29],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11198,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* chicken-syntax.scm:399: mapslots */
t7=((C_word*)((C_word*)t0)[5])[1];
f_11162(t7,t4,t5,t6);}

/* k11212 in k11182 in k11179 in k11176 in mapslots in k11324 in k11350 in k11127 in k11063 in k11060 in k11057 in k11051 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_fcall f_11214(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(66,0,3)))){
C_save_and_reclaim_args((void *)trf_11214,2,t0,t1);}
a=C_alloc(66);
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_list(&a,1,lf[77]);
t3=C_a_i_list(&a,2,lf[38],((C_word*)t0)[3]);
t4=C_a_i_list(&a,3,lf[71],lf[77],t3);
t5=C_a_i_list(&a,2,lf[34],t4);
t6=C_a_i_list(&a,3,lf[72],lf[77],((C_word*)t0)[4]);
t7=C_a_i_list(&a,4,lf[23],t2,t5,t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[5],t7,((C_word*)t0)[6]);
t9=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[8],t8);
t10=C_a_i_list(&a,1,t9);
/* chicken-syntax.scm:318: ##sys#append */
t11=*((C_word*)lf[55]+1);{
C_word av2[4];
av2[0]=t11;
av2[1]=((C_word*)t0)[9];
av2[2]=t1;
av2[3]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}
else{
t2=C_a_i_list(&a,1,lf[77]);
t3=C_a_i_list(&a,2,lf[38],((C_word*)t0)[3]);
t4=C_a_i_list(&a,3,lf[71],lf[77],t3);
t5=C_a_i_list(&a,2,lf[34],t4);
t6=C_a_i_list(&a,3,lf[72],lf[77],((C_word*)t0)[4]);
t7=C_a_i_list(&a,4,lf[23],t2,t5,t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[8],t7);
t9=C_a_i_list(&a,1,t8);
/* chicken-syntax.scm:318: ##sys#append */
t10=*((C_word*)lf[55]+1);{
C_word av2[4];
av2[0]=t10;
av2[1]=((C_word*)t0)[9];
av2[2]=t1;
av2[3]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}

/* k11305 in k11179 in k11176 in mapslots in k11324 in k11350 in k11127 in k11063 in k11060 in k11057 in k11051 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in ... */
static void C_ccall f_11307(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11307,2,av);}
/* chicken-syntax.scm:375: scheme#string->symbol */
t2=*((C_word*)lf[117]+1);{
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

/* k11309 in k11176 in mapslots in k11324 in k11350 in k11127 in k11063 in k11060 in k11057 in k11051 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_ccall f_11311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11311,2,av);}
/* chicken-syntax.scm:374: scheme#string->symbol */
t2=*((C_word*)lf[117]+1);{
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

/* k11324 in k11350 in k11127 in k11063 in k11060 in k11057 in k11051 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in ... */
static void C_ccall f_11326(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(52,c,4)))){
C_save_and_reclaim((void *)f_11326,2,av);}
a=C_alloc(52);
t2=C_a_i_list(&a,1,lf[77]);
t3=C_a_i_list(&a,2,lf[38],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[70],lf[77],t3);
t5=C_a_i_list(&a,3,lf[23],t2,t4);
t6=C_a_i_list(&a,3,((C_word*)t0)[3],t1,t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11160,a[2]=t7,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11162,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[8],a[7]=((C_word)li121),tmp=(C_word)a,a+=8,tmp));
t12=((C_word*)t10)[1];
f_11162(t12,t8,((C_word*)t0)[9],C_fix(1));}

/* k11344 in k11350 in k11127 in k11063 in k11060 in k11057 in k11051 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in ... */
static void C_ccall f_11346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11346,2,av);}
/* chicken-syntax.scm:366: scheme#string->symbol */
t2=*((C_word*)lf[117]+1);{
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

/* k11350 in k11127 in k11063 in k11060 in k11057 in k11051 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in ... */
static void C_ccall f_11352(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(43,c,3)))){
C_save_and_reclaim((void *)f_11352,2,av);}
a=C_alloc(43);
t2=C_a_i_list(&a,2,lf[38],((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,lf[69],t3);
t5=C_a_i_list(&a,3,lf[23],((C_word*)t0)[3],t4);
t6=C_a_i_list(&a,3,((C_word*)t0)[4],t1,t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11326,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t7,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11346,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
t10=*((C_word*)lf[204]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=((C_word*)t0)[8];
av2[3]=lf[205];
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}

/* k11370 in k11127 in k11063 in k11060 in k11057 in k11051 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in ... */
static void C_ccall f_11372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11372,2,av);}
/* chicken-syntax.scm:361: scheme#string->symbol */
t2=*((C_word*)lf[117]+1);{
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

/* map-loop1157 in k11063 in k11060 in k11057 in k11051 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in ... */
static void C_fcall f_11380(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11380,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11405,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:346: g1163 */
t5=((C_word*)t0)[4];
f_11069(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11403 in map-loop1157 in k11063 in k11060 in k11057 in k11051 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in ... */
static void C_ccall f_11405(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11405,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_11380(t6,((C_word*)t0)[5],t5);}

/* k11413 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in ... */
static void C_ccall f_11415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11415,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11422,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11426,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:339: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_11053(2,av2);}}}

/* k11420 in k11413 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in ... */
static void C_ccall f_11422(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11422,2,av);}
/* chicken-syntax.scm:338: chicken.base#symbol-append */
t2=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[81];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11424 in k11413 in k11048 in k11045 in k11039 in a11036 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in ... */
static void C_ccall f_11426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11426,2,av);}
/* chicken-syntax.scm:339: ##sys#module-name */
t2=*((C_word*)lf[82]+1);{
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

/* k11428 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in ... */
static void C_ccall f_11430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11430,2,av);}
/* chicken-syntax.scm:321: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[209];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11431 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in ... */
static void C_ccall f_11432(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11432,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11436,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:326: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[209];
av2[3]=t2;
av2[4]=lf[211];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11434 in a11431 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in ... */
static void C_ccall f_11436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11436,2,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[210],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11445 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11447(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11447,2,av);}
/* chicken-syntax.scm:307: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[212];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11448 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11449(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_11449,5,av);}
a=C_alloc(14);
t5=C_i_cdr(t2);
t6=t5;
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11459,a[2]=t6,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t7))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11488,a[2]=t7,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11544,a[2]=t7,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=C_i_car(t7);
/* chicken-syntax.scm:309: ##sys#list? */
t12=*((C_word*)lf[219]+1);{
C_word *av2=av;
av2[0]=t12;
av2[1]=t10;
av2[2]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}
else{
t9=t8;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_SCHEME_FALSE;
f_11459(2,av2);}}}

/* k11457 in a11448 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 in ... */
static void C_ccall f_11459(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11459,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=C_i_cdr(((C_word*)t0)[2]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11472,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:309: rename1091 */
t7=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[213];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
/* chicken-syntax.scm:309: chicken.internal.syntax-rules#syntax-rules-mismatch */
t2=*((C_word*)lf[214]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k11470 in k11457 in a11448 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in ... */
static void C_ccall f_11472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_11472,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,t1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11486 in a11448 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 in ... */
static void C_ccall f_11488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11488,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11494,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm:309: ##sys#list? */
t4=*((C_word*)lf[219]+1);{
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
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_11459(2,av2);}}}

/* k11492 in k11486 in a11448 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in ... */
static void C_ccall f_11494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11494,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11497,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm:309: ##sys#length */
t4=*((C_word*)lf[218]+1);{
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
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_11459(2,av2);}}}

/* k11495 in k11492 in k11486 in a11448 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in ... */
static void C_ccall f_11497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11497,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11503,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:309: ##sys#>= */
t4=*((C_word*)lf[217]+1);{
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

/* k11501 in k11495 in k11492 in k11486 in a11448 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in ... */
static void C_ccall f_11503(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11503,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11512,a[2]=t4,a[3]=((C_word)li125),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_11512(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_11459(2,av2);}}}

/* loop1088 in k11501 in k11495 in k11492 in k11486 in a11448 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in ... */
static void C_fcall f_11512(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_11512,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11519,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:309: ##sys#= */
t5=*((C_word*)lf[216]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k11517 in loop1088 in k11501 in k11495 in k11492 in k11486 in a11448 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in ... */
static void C_ccall f_11519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11519,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11533,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:309: ##sys#+ */
t5=*((C_word*)lf[215]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k11531 in k11517 in loop1088 in k11501 in k11495 in k11492 in k11486 in a11448 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in ... */
static void C_ccall f_11533(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11533,2,av);}
/* chicken-syntax.scm:309: loop1088 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_11512(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k11542 in a11448 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 in ... */
static void C_ccall f_11544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11544,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11547,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* chicken-syntax.scm:309: ##sys#length */
t4=*((C_word*)lf[218]+1);{
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
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_11488(2,av2);}}}

/* k11545 in k11542 in a11448 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in ... */
static void C_ccall f_11547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11547,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11553,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:309: ##sys#>= */
t4=*((C_word*)lf[217]+1);{
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

/* k11551 in k11545 in k11542 in a11448 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in ... */
static void C_ccall f_11553(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11553,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11562,a[2]=t4,a[3]=((C_word)li126),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_11562(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_11488(2,av2);}}}

/* loop1088 in k11551 in k11545 in k11542 in a11448 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in ... */
static void C_fcall f_11562(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_11562,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11569,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:309: ##sys#= */
t5=*((C_word*)lf[216]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k11567 in loop1088 in k11551 in k11545 in k11542 in a11448 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in ... */
static void C_ccall f_11569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11569,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11583,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:309: ##sys#+ */
t5=*((C_word*)lf[215]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k11581 in k11567 in loop1088 in k11551 in k11545 in k11542 in a11448 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in ... */
static void C_ccall f_11583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11583,2,av);}
/* chicken-syntax.scm:309: loop1088 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_11562(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k11593 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11595,2,av);}
/* chicken-syntax.scm:299: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[220];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11596 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11597(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11597,5,av);}
a=C_alloc(6);
t5=C_i_cdr(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11607,a[2]=t6,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t6))){
t8=C_i_cdr(t6);
t9=t7;
f_11607(t9,C_eqp(t8,C_SCHEME_END_OF_LIST));}
else{
t8=t7;
f_11607(t8,C_SCHEME_FALSE);}}

/* k11605 in a11596 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_fcall f_11607(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11607,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11617,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:301: rename1057 */
t5=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[221];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11631,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t3=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t3))){
t4=C_i_cdr(t3);
t5=t2;
f_11631(t5,C_eqp(t4,C_SCHEME_END_OF_LIST));}
else{
t4=t2;
f_11631(t4,C_SCHEME_FALSE);}}
else{
t3=t2;
f_11631(t3,C_SCHEME_FALSE);}}}

/* k11615 in k11605 in a11596 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 in ... */
static void C_ccall f_11617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11617,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11629 in k11605 in a11596 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 in ... */
static void C_fcall f_11631(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_11631,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=C_i_cdr(((C_word*)t0)[2]);
t5=C_i_car(t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11644,a[2]=t6,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:301: rename1057 */
t8=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[221];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
/* chicken-syntax.scm:301: chicken.internal.syntax-rules#syntax-rules-mismatch */
t2=*((C_word*)lf[214]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k11642 in k11629 in k11605 in a11596 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in ... */
static void C_ccall f_11644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11644,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11690 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11692,2,av);}
/* chicken-syntax.scm:288: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[222];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11693 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11694(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11694,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11698,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:292: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[222];
av2[3]=t2;
av2[4]=lf[224];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11696 in a11693 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11698,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11705,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:293: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[223];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11703 in k11696 in a11693 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11705,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11713,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:294: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[79];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k11711 in k11703 in k11696 in a11693 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 in ... */
static void C_ccall f_11713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11713,2,av);}
a=C_alloc(9);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11719 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11721,2,av);}
/* chicken-syntax.scm:280: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[223];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11722 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11723(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11723,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11727,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:284: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[223];
av2[3]=t2;
av2[4]=lf[227];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11725 in a11722 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11727,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11730,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,lf[29],t3);
/* chicken-syntax.scm:285: ##sys#register-meta-expression */
t5=*((C_word*)lf[226]+1);{
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

/* k11728 in k11725 in a11722 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11730,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,lf[29],t3);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,2,lf[225],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k11749 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11751,2,av);}
/* chicken-syntax.scm:272: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[228];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11752 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11753(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11753,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11757,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:277: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[228];
av2[3]=t2;
av2[4]=lf[230];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11755 in a11752 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_11757,2,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,lf[229],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11766 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11768(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11768,2,av);}
/* chicken-syntax.scm:247: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[231];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11769 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11770(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11770,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11774,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:251: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[231];
av2[3]=t2;
av2[4]=lf[239];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11772 in a11769 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11774,2,av);}
a=C_alloc(5);
t2=C_i_memq(lf[232],*((C_word*)lf[233]+1));
if(C_truep(C_i_not(t2))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[234];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11783,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_i_cadr(((C_word*)t0)[3]);
/* chicken-syntax.scm:254: chicken.syntax#strip-syntax */
t5=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k11781 in k11772 in a11769 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11783,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11786,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:255: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[238];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k11784 in k11781 in k11772 in a11769 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11786,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11789,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_i_caddr(((C_word*)t0)[4]);
/* chicken-syntax.scm:256: chicken.syntax#strip-syntax */
t5=*((C_word*)lf[39]+1);{
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

/* k11787 in k11784 in k11781 in k11772 in a11769 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11789(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_11789,2,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=t2;
t4=C_a_i_list(&a,2,((C_word*)t0)[2],lf[235]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11812,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:262: chicken.compiler.scrutinizer#check-and-validate-type */
t7=*((C_word*)lf[237]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=t1;
av2[3]=lf[231];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k11810 in k11787 in k11784 in k11781 in k11772 in a11769 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11812(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_11812,2,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,4,lf[236],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[225],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11826 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11828,2,av);}
/* chicken-syntax.scm:222: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[240];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11829 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11830(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11830,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11834,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:226: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[240];
av2[3]=t2;
av2[4]=lf[243];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11832 in a11829 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11834,2,av);}
a=C_alloc(5);
t2=C_i_memq(lf[232],*((C_word*)lf[233]+1));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11840,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:228: chicken.base#gensym */
t5=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k11838 in k11832 in a11829 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11840,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11843,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:229: chicken.syntax#get-line-number */
t4=*((C_word*)lf[43]+1);{
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

/* k11841 in k11838 in k11832 in a11829 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11843(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_11843,2,av);}
a=C_alloc(33);
t2=t1;
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,((C_word*)t0)[3],t3);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11867,a[2]=((C_word*)t0)[4],a[3]=((C_word)li133),tmp=(C_word)a,a+=4,tmp);
t12=((C_word*)t0)[2];
t13=C_u_i_cdr(t12);
t14=C_u_i_cdr(t13);
t15=C_i_check_list_2(t14,lf[67]);
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11905,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11907,a[2]=t9,a[3]=t18,a[4]=t11,a[5]=t10,a[6]=((C_word)li134),tmp=(C_word)a,a+=7,tmp));
t20=((C_word*)t18)[1];
f_11907(t20,t16,t14);}

/* g974 in k11841 in k11838 in k11832 in a11829 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_fcall f_11867(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_11867,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11871,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* chicken-syntax.scm:235: chicken.syntax#strip-syntax */
t5=*((C_word*)lf[39]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k11869 in g974 in k11841 in k11838 in k11832 in a11829 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11871(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_11871,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11878,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(t1,lf[241]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_a_i_cons(&a,2,lf[29],t5);
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_list2(&a,2,lf[241],t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
if(C_truep(((C_word*)t0)[4])){
/* chicken-syntax.scm:240: chicken.compiler.scrutinizer#check-and-validate-type */
t4=*((C_word*)lf[237]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t1;
av2[3]=lf[240];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t1;
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,lf[29],t6);
t8=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_list2(&a,2,t4,t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}}

/* k11876 in k11869 in g974 in k11841 in k11838 in k11832 in a11829 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11878,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,lf[29],t3);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list2(&a,2,t1,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k11903 in k11841 in k11838 in k11832 in a11829 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_11905,2,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,lf[242],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[37],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* map-loop968 in k11841 in k11838 in k11832 in a11829 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_fcall f_11907(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11907,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11932,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:234: g974 */
t5=((C_word*)t0)[4];
f_11867(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11930 in map-loop968 in k11841 in k11838 in k11832 in a11829 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11932(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11932,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_11907(t6,((C_word*)t0)[5],t5);}

/* k11949 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11951,2,av);}
/* chicken-syntax.scm:158: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[244];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11952 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11953(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_11953,5,av);}
a=C_alloc(5);
t5=C_i_memq(lf[232],*((C_word*)lf[233]+1));
if(C_truep(C_i_not(t5))){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=lf[245];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11963,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:164: ##sys#check-syntax */
t7=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[244];
av2[3]=t2;
av2[4]=lf[253];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}}

/* k11961 in a11952 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_11963,2,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_i_car(t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11972,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:167: ##sys#globalize */
t7=*((C_word*)lf[252]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=t5;
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k11970 in k11961 in a11952 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_11972,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11976,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:169: chicken.base#gensym */
t5=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k11974 in k11970 in k11961 in a11952 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11976(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_11976,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11979,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:170: ##sys#globalize */
t4=*((C_word*)lf[252]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k11977 in k11974 in k11970 in k11961 in a11952 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11979(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11979,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11982,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=C_i_cdddr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t4))){
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=C_u_i_car(t7);
/* chicken-syntax.scm:171: chicken.syntax#strip-syntax */
t9=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t3;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_11982(2,av2);}}}

/* k11980 in k11977 in k11974 in k11970 in k11961 in a11952 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11982,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11985,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:172: r */
t4=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[79];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k11983 in k11980 in k11977 in k11974 in k11970 in k11961 in a11952 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_11985(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_11985,2,av);}
a=C_alloc(13);
t2=t1;
t3=(C_truep(((C_word*)t0)[2])?C_i_cadddr(((C_word*)t0)[3]):C_i_caddr(((C_word*)t0)[3]));
t4=t3;
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11993,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],a[8]=t6,a[9]=((C_word*)t0)[7],a[10]=((C_word)li139),tmp=(C_word)a,a+=11,tmp));
t8=((C_word*)t6)[1];
f_11993(t8,((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* loop in k11983 in k11980 in k11977 in k11974 in k11970 in k11961 in a11952 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_fcall f_11993(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_11993,5,t0,t1,t2,t3,t4);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12003,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t3,a[10]=t4,tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:176: scheme#reverse */
t6=*((C_word*)lf[57]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_i_car(t2);
t6=t5;
if(C_truep(C_i_symbolp(t6))){
t7=t2;
t8=C_u_i_cdr(t7);
t9=C_a_i_cons(&a,2,t6,t3);
t10=C_a_i_cons(&a,2,lf[250],t4);
/* chicken-syntax.scm:208: loop */
t12=t1;
t13=t8;
t14=t9;
t15=t10;
t1=t12;
t2=t13;
t3=t14;
t4=t15;
goto loop;}
else{
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12244,a[2]=t2,a[3]=t6,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[8],a[7]=t1,a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_listp(t6))){
t8=C_u_i_length(t6);
t9=C_eqp(C_fix(2),t8);
if(C_truep(t9)){
t10=C_i_car(t6);
t11=t7;
f_12244(t11,C_i_symbolp(t10));}
else{
t10=t7;
f_12244(t10,C_SCHEME_FALSE);}}
else{
t8=t7;
f_12244(t8,C_SCHEME_FALSE);}}}}

/* k12001 in loop in k11983 in k11980 in k11977 in k11974 in k11970 in k11961 in a11952 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_12003,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12006,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:177: scheme#reverse */
t4=*((C_word*)lf[57]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k12004 in k12001 in loop in k11983 in k11980 in k11977 in k11974 in k11970 in k11961 in a11952 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12006(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_12006,2,av);}
a=C_alloc(17);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12188,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12190,a[2]=t5,a[3]=((C_word)li138),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_12190(t7,t3,((C_word*)t0)[10],C_fix(1));}

/* k12010 in k12186 in k12004 in k12001 in loop in k11983 in k11980 in k11977 in k11974 in k11970 in k11961 in a11952 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in ... */
static void C_ccall f_12012(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(44,c,4)))){
C_save_and_reclaim((void *)f_12012,2,av);}
a=C_alloc(44);
t2=C_a_i_list(&a,2,lf[246],((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[247],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[193],t2,t3);
t5=t4;
t6=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t7=t6;
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12047,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t7,a[5]=((C_word*)t0)[6],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12049,a[2]=t10,a[3]=t14,a[4]=t11,a[5]=((C_word)li136),tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_12049(t16,t12,((C_word*)t0)[3],((C_word*)t0)[7]);}

/* k12045 in k12010 in k12186 in k12004 in k12001 in loop in k11983 in k11980 in k11977 in k11974 in k11970 in k11961 in a11952 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in ... */
static void C_ccall f_12047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_12047,2,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,3,lf[37],t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[29],((C_word*)t0)[6],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop913 in k12010 in k12186 in k12004 in k12001 in loop in k11983 in k11980 in k11977 in k11974 in k11970 in k11961 in a11952 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in ... */
static void C_fcall f_12049(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,0,3)))){
C_save_and_reclaim_args((void *)trf_12049,4,t0,t1,t2,t3);}
a=C_alloc(21);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,4,lf[175],t7,C_SCHEME_TRUE,t6);
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

/* k12105 in k12186 in k12004 in k12001 in loop in k11983 in k11980 in k11977 in k11974 in k11970 in k11961 in a11952 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in ... */
static void C_ccall f_12107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12107,2,av);}
/* chicken-syntax.scm:184: ##sys#put! */
t2=*((C_word*)lf[248]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[249];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k12109 in k12186 in k12004 in k12001 in loop in k11983 in k11980 in k11977 in k11974 in k11970 in k11961 in a11952 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in ... */
static void C_ccall f_12111(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_12111,2,av);}
a=C_alloc(19);
t2=t1;
t3=(C_truep(((C_word*)t0)[2])?C_i_pairp(((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_check_list_2(((C_word*)t0)[2],lf[67]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12144,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12146,a[2]=t6,a[3]=t11,a[4]=t7,a[5]=((C_word)li137),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_12146(t13,t9,((C_word*)t0)[2]);}
else{
t4=C_a_i_list1(&a,1,((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,((C_word*)t0)[4],t4);
t6=C_a_i_list1(&a,1,t5);
/* chicken-syntax.scm:186: ##sys#append */
t7=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=((C_word*)t0)[5];
av2[2]=t2;
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k12142 in k12109 in k12186 in k12004 in k12001 in loop in k11983 in k11980 in k11977 in k11974 in k11970 in k11961 in a11952 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in ... */
static void C_ccall f_12144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_12144,2,av);}
a=C_alloc(12);
t2=C_a_i_list2(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_list1(&a,1,t3);
/* chicken-syntax.scm:186: ##sys#append */
t5=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* map-loop879 in k12109 in k12186 in k12004 in k12001 in loop in k11983 in k11980 in k11977 in k11974 in k11970 in k11961 in a11952 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in ... */
static void C_fcall f_12146(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_12146,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12171,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[237]+1);
/* chicken-syntax.scm:192: g902 */
t6=*((C_word*)lf[237]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[244];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12169 in map-loop879 in k12109 in k12186 in k12004 in k12001 in loop in k11983 in k11980 in k11977 in k11974 in k11970 in k11961 in a11952 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in ... */
static void C_ccall f_12171(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12171,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_12146(t6,((C_word*)t0)[5],t5);}

/* k12186 in k12004 in k12001 in loop in k11983 in k11980 in k11977 in k11974 in k11970 in k11961 in a11952 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 in ... */
static void C_ccall f_12188(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_12188,2,av);}
a=C_alloc(21);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12012,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12107,a[2]=t4,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12111,a[2]=((C_word*)t0)[10],a[3]=t3,a[4]=((C_word*)t0)[8],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:187: ##sys#get */
t7=*((C_word*)lf[157]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[9];
av2[3]=lf[249];
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* loop2 in k12004 in k12001 in loop in k11983 in k11980 in k11977 in k11974 in k11970 in k11961 in a11952 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 in ... */
static void C_fcall f_12190(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_12190,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_a_i_vector1(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12208,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cdr(t2);
t8=C_fixnum_plus(t3,C_fix(1));
/* chicken-syntax.scm:183: loop2 */
t10=t6;
t11=t7;
t12=t8;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* k12206 in loop2 in k12004 in k12001 in loop in k11983 in k11980 in k11977 in k11974 in k11970 in k11961 in a11952 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in ... */
static void C_ccall f_12208(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_12208,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k12242 in loop in k11983 in k11980 in k11977 in k11974 in k11970 in k11961 in a11952 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_fcall f_12244(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,0,5)))){
C_save_and_reclaim_args((void *)trf_12244,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_i_car(((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[4]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12261,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t3,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t8=C_i_cadr(((C_word*)t0)[3]);
/* chicken-syntax.scm:214: chicken.compiler.scrutinizer#check-and-validate-type */
t9=*((C_word*)lf[237]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
av2[3]=lf[244];
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
/* chicken-syntax.scm:218: chicken.syntax#syntax-error */
t2=*((C_word*)lf[58]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[7];
av2[2]=lf[244];
av2[3]=lf[251];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k12259 in k12242 in loop in k11983 in k11980 in k11977 in k11974 in k11970 in k11961 in a11952 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_12261,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken-syntax.scm:210: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_11993(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k12316 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12318(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12318,2,av);}
/* chicken-syntax.scm:152: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[254];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12319 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12320(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_12320,5,av);}
a=C_alloc(14);
t5=C_i_cdr(t2);
t6=t5;
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12330,a[2]=t6,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t7))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12492,a[2]=t7,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12548,a[2]=t7,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=C_i_car(t7);
/* chicken-syntax.scm:154: ##sys#list? */
t12=*((C_word*)lf[219]+1);{
C_word *av2=av;
av2[0]=t12;
av2[1]=t10;
av2[2]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}
else{
t9=t8;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_SCHEME_FALSE;
f_12330(2,av2);}}}

/* k12328 in a12319 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12330(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_12330,2,av);}
a=C_alloc(18);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_car(((C_word*)t0)[2]);
t7=C_i_check_list_2(t6,lf[67]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12347,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12448,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li143),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_12448(t12,t8,t6);}
else{
/* chicken-syntax.scm:154: chicken.internal.syntax-rules#syntax-rules-mismatch */
t2=*((C_word*)lf[214]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k12345 in k12328 in a12319 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12347(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_12347,2,av);}
a=C_alloc(19);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_car(((C_word*)t0)[2]);
t8=C_i_check_list_2(t7,lf[67]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12368,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12414,a[2]=t5,a[3]=t11,a[4]=t6,a[5]=((C_word)li142),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_12414(t13,t9,t7);}

/* k12366 in k12345 in k12328 in a12319 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12368(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12368,2,av);}
a=C_alloc(7);
t2=t1;
t3=C_i_cdr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12378,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:154: rename737 */
t6=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[257];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k12376 in k12366 in k12345 in k12328 in a12319 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_12378,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12386,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12388,a[2]=((C_word*)t0)[4],a[3]=((C_word)li141),tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:154: ##sys#map-n */
t5=*((C_word*)lf[256]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k12384 in k12376 in k12366 in k12345 in k12328 in a12319 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12386(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_12386,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a12387 in k12376 in k12366 in k12345 in k12328 in a12319 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12388(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_12388,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12404,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:154: rename737 */
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[255];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k12402 in a12387 in k12376 in k12366 in k12345 in k12328 in a12319 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12404(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12404,2,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[2],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* map-loop810 in k12345 in k12328 in a12319 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_fcall f_12414(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_12414,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
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

/* map-loop782 in k12328 in a12319 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_fcall f_12448(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_12448,3,t0,t1,t2);}
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

/* k12490 in a12319 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12492,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12498,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm:154: ##sys#list? */
t4=*((C_word*)lf[219]+1);{
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
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12330(2,av2);}}}

/* k12496 in k12490 in a12319 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12498,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12501,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm:154: ##sys#length */
t4=*((C_word*)lf[218]+1);{
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
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12330(2,av2);}}}

/* k12499 in k12496 in k12490 in a12319 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_12501,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12507,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:154: ##sys#>= */
t4=*((C_word*)lf[217]+1);{
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

/* k12505 in k12499 in k12496 in k12490 in a12319 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12507(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12507,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12516,a[2]=t4,a[3]=((C_word)li144),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_12516(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12330(2,av2);}}}

/* loop734 in k12505 in k12499 in k12496 in k12490 in a12319 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_fcall f_12516(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_12516,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12523,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:154: ##sys#= */
t5=*((C_word*)lf[216]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k12521 in loop734 in k12505 in k12499 in k12496 in k12490 in a12319 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12523(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_12523,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12537,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:154: ##sys#+ */
t5=*((C_word*)lf[215]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k12535 in k12521 in loop734 in k12505 in k12499 in k12496 in k12490 in a12319 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12537,2,av);}
/* chicken-syntax.scm:154: loop734 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_12516(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k12546 in a12319 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12548,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12551,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* chicken-syntax.scm:154: ##sys#length */
t4=*((C_word*)lf[218]+1);{
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
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12492(2,av2);}}}

/* k12549 in k12546 in a12319 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_12551,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:154: ##sys#>= */
t4=*((C_word*)lf[217]+1);{
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

/* k12555 in k12549 in k12546 in a12319 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12557(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12557,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12566,a[2]=t4,a[3]=((C_word)li145),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_12566(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12492(2,av2);}}}

/* loop734 in k12555 in k12549 in k12546 in a12319 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_fcall f_12566(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_12566,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12573,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:154: ##sys#= */
t5=*((C_word*)lf[216]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k12571 in loop734 in k12555 in k12549 in k12546 in a12319 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12573(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_12573,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_car(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12585,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_i_cdr(t2);
if(C_truep(C_i_pairp(t4))){
t5=C_i_cdr(t4);
t6=t3;
f_12585(t6,C_eqp(t5,C_SCHEME_END_OF_LIST));}
else{
t5=t3;
f_12585(t5,C_SCHEME_FALSE);}}
else{
t4=t3;
f_12585(t4,C_SCHEME_FALSE);}}}

/* k12583 in k12571 in loop734 in k12555 in k12549 in k12546 in a12319 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_fcall f_12585(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_12585,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12596,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:154: ##sys#+ */
t5=*((C_word*)lf[215]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k12594 in k12583 in k12571 in loop734 in k12555 in k12549 in k12546 in a12319 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12596,2,av);}
/* chicken-syntax.scm:154: loop734 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_12566(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k12625 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12627,2,av);}
/* chicken-syntax.scm:141: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[255];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12628 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12629(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12629,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12633,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:145: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[255];
av2[3]=t2;
av2[4]=lf[258];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12631 in a12628 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_12633,2,av);}
a=C_alloc(4);
t2=C_i_memq(lf[232],*((C_word*)lf[233]+1));
if(C_truep(C_i_not(t2))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_caddr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12649,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(((C_word*)t0)[3]);
/* chicken-syntax.scm:148: chicken.compiler.scrutinizer#check-and-validate-type */
t5=*((C_word*)lf[237]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[255];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k12647 in k12631 in a12628 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_12649,2,av);}
a=C_alloc(12);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,4,lf[175],t1,C_SCHEME_TRUE,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k12663 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12665,2,av);}
/* chicken-syntax.scm:118: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[259];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12666 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12667(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12667,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12671,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:122: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[259];
av2[3]=t2;
av2[4]=lf[266];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12669 in a12666 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12671,2,av);}
a=C_alloc(4);
t2=C_i_memq(lf[232],*((C_word*)lf[233]+1));
if(C_truep(C_i_not(t2))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[260];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12680,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_i_caddr(((C_word*)t0)[3]);
/* chicken-syntax.scm:125: chicken.syntax#strip-syntax */
t5=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k12678 in k12669 in a12666 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12680(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_12680,2,av);}
a=C_alloc(11);
t2=t1;
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12687,a[2]=t2,a[3]=t5,a[4]=((C_word)li148),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12697,a[2]=t5,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word)li149),tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:129: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t6;
av2[3]=t7;
C_call_with_values(4,av2);}}

/* a12686 in k12678 in k12669 in a12666 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12687,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12695,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:132: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[39]+1);{
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

/* k12693 in a12686 in k12678 in k12669 in a12666 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12695,2,av);}
/* chicken-syntax.scm:130: chicken.compiler.scrutinizer#validate-type */
t2=*((C_word*)lf[261]+1);{
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

/* a12696 in k12678 in k12669 in a12666 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12697(C_word c,C_word *av){
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
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(30,c,5)))){
C_save_and_reclaim((void *)f_12697,5,av);}
a=C_alloc(30);
t5=t3;
if(C_truep(C_i_not(t2))){
/* chicken-syntax.scm:134: chicken.syntax#syntax-error */
t6=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[259];
av2[3]=lf[262];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}
else{
t6=C_i_cdddr(((C_word*)t0)[4]);
t7=C_a_i_cons(&a,2,((C_word*)t0)[3],t6);
t8=C_a_i_cons(&a,2,((C_word*)t0)[2],t7);
t9=C_a_i_list(&a,2,lf[263],t8);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12722,a[2]=t10,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12726,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t11,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t13=C_a_i_list(&a,2,lf[265],((C_word*)t0)[2]);
t14=t12;
f_12726(t14,C_a_i_list(&a,1,t13));}
else{
t13=t12;
f_12726(t13,C_SCHEME_END_OF_LIST);}}}

/* k12720 in a12696 in k12678 in k12669 in a12666 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_12722,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[193],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k12724 in a12696 in k12678 in k12669 in a12666 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_fcall f_12726(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_12726,2,t0,t1);}
a=C_alloc(15);
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[264],t2);
t4=C_a_i_list(&a,1,t3);
/* chicken-syntax.scm:115: ##sys#append */
t5=*((C_word*)lf[55]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* chicken-syntax.scm:115: ##sys#append */
t2=*((C_word*)lf[55]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k12774 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12776,2,av);}
/* chicken-syntax.scm:76: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[269];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12777 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12778(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12778,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12782,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:81: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[269];
av2[3]=t2;
av2[4]=lf[278];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12780 in a12777 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_12782,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12785,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:82: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[277];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12783 in k12780 in a12777 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12785(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_12785,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12788,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:83: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[276];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k12786 in k12783 in k12780 in a12777 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_12788,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12791,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:84: r */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[275];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k12789 in k12786 in k12783 in k12780 in a12777 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_12791,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12794,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:85: r */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[267];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k12792 in k12789 in k12786 in k12783 in k12780 in a12777 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12794(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_12794,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12797,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:86: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[241];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k12795 in k12792 in k12789 in k12786 in k12783 in k12780 in a12777 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12797(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_12797,2,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12799,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li153),tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12929,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:98: r */
t5=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[274];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* parse-clause in k12795 in k12792 in k12789 in k12786 in k12783 in k12780 in a12777 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12799(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_12799,3,av);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12803,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t4=C_i_car(t2);
if(C_truep(C_i_symbolp(t4))){
t5=t2;
t6=t3;
f_12803(t6,C_u_i_car(t5));}
else{
t5=t3;
f_12803(t5,C_SCHEME_FALSE);}}

/* k12801 in parse-clause in k12795 in k12792 in k12789 in k12786 in k12783 in k12780 in a12777 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_fcall f_12803(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_12803,2,t0,t1);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12806,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t2)){
t4=t3;
f_12806(t4,C_i_cadr(((C_word*)t0)[8]));}
else{
t4=((C_word*)t0)[8];
t5=t3;
f_12806(t5,C_u_i_car(t4));}}

/* k12804 in k12801 in parse-clause in k12795 in k12792 in k12789 in k12786 in k12783 in k12780 in a12777 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_fcall f_12806(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,0,2)))){
C_save_and_reclaim_args((void *)trf_12806,2,t0,t1);}
a=C_alloc(23);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12809,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
t4=C_a_i_list(&a,2,((C_word*)t0)[7],((C_word*)t0)[8]);
t5=C_a_i_list(&a,1,t4);
t6=C_i_cddr(((C_word*)t0)[9]);
t7=C_a_i_cons(&a,2,t5,t6);
t8=t3;
f_12809(t8,C_a_i_cons(&a,2,lf[37],t7));}
else{
t4=((C_word*)t0)[9];
t5=C_u_i_cdr(t4);
t6=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t5);
t7=t3;
f_12809(t7,C_a_i_cons(&a,2,lf[37],t6));}}

/* k12807 in k12804 in k12801 in parse-clause in k12795 in k12792 in k12789 in k12786 in k12783 in k12780 in a12777 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_fcall f_12809(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,0,3)))){
C_save_and_reclaim_args((void *)trf_12809,2,t0,t1);}
a=C_alloc(25);
t2=t1;
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12834,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li151),tmp=(C_word)a,a+=5,tmp);
t8=C_i_check_list_2(((C_word*)t0)[2],lf[67]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12848,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12850,a[2]=t7,a[3]=t5,a[4]=t11,a[5]=t6,a[6]=((C_word)li152),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_12850(t13,t9,((C_word*)t0)[2]);}}

/* g623 in k12807 in k12804 in k12801 in parse-clause in k12795 in k12792 in k12789 in k12786 in k12783 in k12780 in a12777 in k5486 in k5483 in k4201 in k4198 in k4195 */
static C_word C_fcall f_12834(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_a_i_list(&a,2,lf[38],t1);
return(C_a_i_list(&a,3,((C_word*)t0)[2],t2,((C_word*)t0)[3]));}

/* k12846 in k12807 in k12804 in k12801 in parse-clause in k12795 in k12792 in k12789 in k12786 in k12783 in k12780 in a12777 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_12848,2,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,t3,((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop617 in k12807 in k12804 in k12801 in parse-clause in k12795 in k12792 in k12789 in k12786 in k12783 in k12780 in a12777 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_fcall f_12850(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,0,2)))){
C_save_and_reclaim_args((void *)trf_12850,3,t0,t1,t2);}
a=C_alloc(18);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* chicken-syntax.scm:95: g623 */
  f_12834(C_a_i(&a,15),((C_word*)t0)[2],t3)
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

/* k12927 in k12795 in k12792 in k12789 in k12786 in k12783 in k12780 in a12777 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12929(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(65,c,3)))){
C_save_and_reclaim((void *)f_12929,2,av);}
a=C_alloc(65);
t2=t1;
t3=C_a_i_list(&a,2,lf[38],lf[270]);
t4=C_a_i_list(&a,3,lf[70],((C_word*)t0)[2],t3);
t5=C_a_i_list(&a,3,lf[271],((C_word*)t0)[2],C_fix(1));
t6=C_a_i_list(&a,3,((C_word*)t0)[3],t4,t5);
t7=C_a_i_list(&a,2,((C_word*)t0)[4],t6);
t8=C_a_i_list(&a,1,t7);
t9=t8;
t10=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t11=t10;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=((C_word*)t12)[1];
t14=((C_word*)t0)[5];
t15=C_i_cddr(((C_word*)t0)[6]);
t16=C_i_check_list_2(t15,lf[67]);
t17=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12954,a[2]=t9,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12985,a[2]=t12,a[3]=t19,a[4]=t14,a[5]=t13,a[6]=((C_word)li154),tmp=(C_word)a,a+=7,tmp));
t21=((C_word*)t19)[1];
f_12985(t21,t17,t15);}

/* k12952 in k12927 in k12795 in k12792 in k12789 in k12786 in k12783 in k12780 in a12777 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_12954,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12961,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:103: r */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[273];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k12959 in k12952 in k12927 in k12795 in k12792 in k12789 in k12786 in k12783 in k12780 in a12777 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12961(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_12961,2,av);}
a=C_alloc(23);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12965,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_assq(((C_word*)t0)[7],((C_word*)t0)[8]))){
/* chicken-syntax.scm:52: ##sys#append */
t4=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=C_a_i_list(&a,2,lf[272],((C_word*)t0)[6]);
t5=C_a_i_list(&a,2,((C_word*)t0)[7],t4);
t6=C_a_i_list(&a,1,t5);
/* chicken-syntax.scm:52: ##sys#append */
t7=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k12963 in k12959 in k12952 in k12927 in k12795 in k12792 in k12789 in k12786 in k12783 in k12780 in a12777 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_12965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_12965,2,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,3,lf[37],((C_word*)t0)[3],t2);
t4=C_i_cadr(((C_word*)t0)[4]);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,4,((C_word*)t0)[6],((C_word*)t0)[7],t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* map-loop648 in k12927 in k12795 in k12792 in k12789 in k12786 in k12783 in k12780 in a12777 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_fcall f_12985(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_12985,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13010,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:102: g654 */
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

/* k13008 in map-loop648 in k12927 in k12795 in k12792 in k12789 in k12786 in k12783 in k12780 in a12777 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_13010(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_13010,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_12985(t6,((C_word*)t0)[5],t5);}

/* k13047 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_13049(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13049,2,av);}
/* chicken-syntax.scm:55: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[274];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a13050 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_13051(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_13051,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13055,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:60: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[274];
av2[3]=t2;
av2[4]=lf[284];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k13053 in a13050 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_13055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_13055,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13058,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:61: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[283];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k13056 in k13053 in a13050 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_13058(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_13058,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13061,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:62: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[282];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k13059 in k13056 in k13053 in a13050 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_13061(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_13061,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13072,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:63: r */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[279];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k13070 in k13059 in k13056 in k13053 in a13050 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_13072(C_word c,C_word *av){
C_word tmp;
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(114,c,1)))){
C_save_and_reclaim((void *)f_13072,2,av);}
a=C_alloc(114);
t2=C_a_i_list(&a,1,((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[3]);
t4=C_a_i_list(&a,1,t3);
t5=C_i_caddr(((C_word*)t0)[3]);
t6=C_a_i_list(&a,3,lf[23],C_SCHEME_END_OF_LIST,t5);
t7=C_a_i_list(&a,2,((C_word*)t0)[2],t6);
t8=C_a_i_list(&a,3,lf[23],t4,t7);
t9=((C_word*)t0)[3];
t10=C_u_i_cdr(t9);
t11=C_u_i_cdr(t10);
t12=C_u_i_cdr(t11);
t13=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t12);
t14=C_a_i_cons(&a,2,lf[23],t13);
t15=C_a_i_list(&a,3,lf[26],lf[27],((C_word*)t0)[4]);
t16=C_a_i_list(&a,3,lf[23],C_SCHEME_END_OF_LIST,t15);
t17=C_a_i_list(&a,2,((C_word*)t0)[2],t16);
t18=C_a_i_list(&a,3,lf[23],((C_word*)t0)[4],t17);
t19=C_a_i_list(&a,3,lf[28],t14,t18);
t20=C_a_i_list(&a,3,lf[23],C_SCHEME_END_OF_LIST,t19);
t21=C_a_i_list(&a,3,lf[281],t8,t20);
t22=C_a_i_list(&a,3,lf[23],t2,t21);
t23=C_a_i_list(&a,2,t1,t22);
t24=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t24;
av2[1]=C_a_i_list(&a,1,t23);
((C_proc)(void*)(*((C_word*)t24+1)))(2,av2);}}

/* k4195 */
static void C_ccall f_4197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4197,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4200,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k4198 in k4195 */
static void C_ccall f_4200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4200,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4203,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k4201 in k4198 in k4195 */
static void C_ccall f_4203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_4203,2,av);}
a=C_alloc(14);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_mutate(&lf[1] /* (set! take ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4313,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5485,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:53: ##sys#macro-environment */
t5=*((C_word*)lf[19]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* take in k4201 in k4198 in k4195 */
static void C_fcall f_4313(C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_4313,3,t1,t2,t3);}
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
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4331,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
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

/* k4329 in take in k4201 in k4198 in k4195 */
static void C_ccall f_4331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4331,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k6909 in a6902 in k6895 in k6885 in a6882 in g2890 in foldr2885 in k6845 in k6838 in k6835 in k6832 in k6829 in k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in ... */
static void C_fcall f_4371(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim_args((void *)trf_4371,5,t0,t1,t2,t3,t4);}
a=C_alloc(4);
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4385,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:67: scheme#reverse */
t6=*((C_word*)lf[57]+1);{
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

/* k4383 in loop in k6909 in a6902 in k6895 in k6885 in a6882 in g2890 in foldr2885 in k6845 in k6838 in k6835 in k6832 in k6829 in k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in ... */
static void C_ccall f_4385(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4385,2,av);}
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

/* k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_5485(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_5485,2,av);}
a=C_alloc(17);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5488,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,lf[279],lf[280]);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13049,a[2]=t3,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13051,a[2]=((C_word)li156),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:58: ##sys#er-transformer */
t9=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_5488(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_5488,2,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5491,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[267],lf[268]);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12776,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12778,a[2]=((C_word)li155),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:79: ##sys#er-transformer */
t8=*((C_word*)lf[31]+1);{
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

/* k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_5491(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5491,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5494,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:110: chicken.internal#macro-subset */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_5494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5494,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#chicken.condition-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5498,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:116: ##sys#macro-environment */
t4=*((C_word*)lf[19]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_5498(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5498,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5501,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12665,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12667,a[2]=((C_word)li150),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:120: ##sys#er-transformer */
t6=*((C_word*)lf[31]+1);{
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

/* k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_5501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5501,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5504,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12627,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12629,a[2]=((C_word)li147),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:143: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_5504(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5504,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5507,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12318,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12320,a[2]=((C_word)li146),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:154: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_5507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5507,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5510,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11951,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11953,a[2]=((C_word)li140),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:160: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_5510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5510,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5513,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11828,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11830,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:224: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_5513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5513,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5516,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11768,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11770,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:249: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_5516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5516,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5519,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:265: chicken.internal#macro-subset */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_5519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5519,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#chicken.type-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5523,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:270: ##sys#macro-environment */
t4=*((C_word*)lf[19]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_5523(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5523,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5526,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11751,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11753,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:275: ##sys#er-transformer */
t6=*((C_word*)lf[31]+1);{
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

/* k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_5526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5526,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5529,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11721,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11723,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:282: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_5529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5529,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5532,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11692,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11694,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:290: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_5532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5532,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5535,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11595,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11597,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:301: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_5535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5535,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5538,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11447,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11449,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:309: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 */
static void C_ccall f_5538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5538,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5541,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:313: chicken.internal#macro-subset */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in k4195 in ... */
static void C_ccall f_5541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5541,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#chicken.syntax-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5545,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:319: ##sys#macro-environment */
t4=*((C_word*)lf[19]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in k4198 in ... */
static void C_ccall f_5545(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5545,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5548,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11430,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11432,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:324: ##sys#er-transformer */
t6=*((C_word*)lf[31]+1);{
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

/* k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in k4201 in ... */
static void C_ccall f_5548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5548,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5551,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11035,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11037,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:331: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in k5483 in ... */
static void C_ccall f_5551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5551,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5554,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10942,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10944,a[2]=((C_word)li119),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:404: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in k5486 in ... */
static void C_ccall f_5554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5554,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10928,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10930,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:422: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in k5489 in ... */
static void C_ccall f_5557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5557,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5560,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10907,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10909,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:429: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in k5492 in ... */
static void C_ccall f_5560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5560,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5563,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10890,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10892,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:436: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in k5496 in ... */
static void C_ccall f_5563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5563,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5566,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10873,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10875,a[2]=((C_word)li115),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:443: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in k5499 in ... */
static void C_ccall f_5566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5566,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5569,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10220,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10222,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:450: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in k5502 in ... */
static void C_ccall f_5569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5569,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5572,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9290,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9292,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:482: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in ... */
static void C_ccall f_5572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5572,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5575,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9206,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9208,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:537: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in ... */
static void C_ccall f_5575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5575,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5578,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9182,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9184,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:549: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in ... */
static void C_ccall f_5578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5578,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5581,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9154,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9156,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:557: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in ... */
static void C_ccall f_5581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5581,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5584,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9133,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9135,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:566: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in ... */
static void C_ccall f_5584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5584,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5588,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9003,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9005,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:574: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in ... */
static void C_ccall f_5588(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5588,2,av);}
a=C_alloc(10);
t2=C_mutate((C_word*)lf[5]+1 /* (set! chicken.syntax#define-values-definition ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5591,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8526,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8528,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:591: ##sys#er-transformer */
t6=*((C_word*)lf[31]+1);{
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

/* k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_ccall f_5591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5591,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5594,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8472,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8474,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:645: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in ... */
static void C_ccall f_5594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5594,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5597,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8214,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8216,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:660: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_5597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5597,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5600,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8192,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8194,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:680: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_5600(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_5600,2,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5603,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[136],lf[137]);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8148,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8150,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:689: ##sys#er-transformer */
t8=*((C_word*)lf[31]+1);{
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

/* k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_ccall f_5603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5603,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5606,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8044,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8046,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:699: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_ccall f_5606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5606,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5609,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7902,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7904,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:720: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_5609(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,5)))){
C_save_and_reclaim((void *)f_5609,2,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5612,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[109],lf[110]);
t4=C_a_i_cons(&a,2,lf[92],lf[93]);
t5=C_a_i_cons(&a,2,lf[94],lf[95]);
t6=C_a_i_list(&a,3,t3,t4,t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7454,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7456,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:827: ##sys#er-transformer */
t10=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t8;
av2[2]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_5612(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,5)))){
C_save_and_reclaim((void *)f_5612,2,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5615,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[109],lf[110]);
t4=C_a_i_cons(&a,2,lf[92],lf[93]);
t5=C_a_i_cons(&a,2,lf[94],lf[95]);
t6=C_a_i_list(&a,3,t3,t4,t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7377,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7379,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:916: ##sys#er-transformer */
t10=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t8;
av2[2]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_5615(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,5)))){
C_save_and_reclaim((void *)f_5615,2,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5618,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[109],lf[110]);
t4=C_a_i_cons(&a,2,lf[92],lf[93]);
t5=C_a_i_cons(&a,2,lf[94],lf[95]);
t6=C_a_i_list(&a,3,t3,t4,t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7217,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7219,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:944: ##sys#er-transformer */
t10=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t8;
av2[2]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_5618(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(41,c,5)))){
C_save_and_reclaim((void *)f_5618,2,av);}
a=C_alloc(41);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5621,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[90],lf[91]);
t4=C_a_i_cons(&a,2,lf[92],lf[93]);
t5=C_a_i_cons(&a,2,lf[94],lf[95]);
t6=C_a_i_cons(&a,2,lf[96],lf[97]);
t7=C_a_i_cons(&a,2,lf[98],lf[99]);
t8=C_a_i_list(&a,5,t3,t4,t5,t6,t7);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6773,a[2]=t2,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6775,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:981: ##sys#er-transformer */
t12=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t12;
av2[1]=t10;
av2[2]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}

/* k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_5621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5621,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5624,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6660,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6662,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1044: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_5624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5624,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5627,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6261,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6263,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1078: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_ccall f_5627(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_5627,2,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5630,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[52],lf[53]);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6089,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6091,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1159: ##sys#er-transformer */
t8=*((C_word*)lf[31]+1);{
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

/* k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_5630(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_5630,2,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5633,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[52],lf[53]);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5894,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5896,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1192: ##sys#er-transformer */
t8=*((C_word*)lf[31]+1);{
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

/* k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_ccall f_5633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5633,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5636,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5829,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5831,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1233: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_5636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5636,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5639,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5811,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5813,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1250: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_5639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5639,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5642,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5722,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5724,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1259: ##sys#er-transformer */
t5=*((C_word*)lf[31]+1);{
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

/* k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_5642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5642,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5645,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1279: chicken.internal#macro-subset */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in ... */
static void C_ccall f_5645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5645,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[6]+1 /* (set! ##sys#chicken.base-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5649,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1285: ##sys#macro-environment */
t4=*((C_word*)lf[19]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5647 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in ... */
static void C_ccall f_5649(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5649,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5652,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5673,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5675,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1289: ##sys#er-transformer */
t6=*((C_word*)lf[31]+1);{
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

/* k5650 in k5647 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_5652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5652,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5655,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1301: chicken.internal#macro-subset */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5653 in k5650 in k5647 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_5655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5655,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[7]+1 /* (set! ##sys#chicken.time-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5659,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1305: ##sys#macro-environment */
t4=*((C_word*)lf[19]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5657 in k5653 in k5650 in k5647 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_5659(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5659,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5662,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5669,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1314: chicken.internal#macro-subset */
t4=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
av2[3]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5660 in k5657 in k5653 in k5650 in k5647 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_5662(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5662,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[8]+1 /* (set! ##sys#chicken-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5665,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1318: chicken.platform#register-feature! */
t4=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[10];
av2[3]=lf[11];
av2[4]=lf[12];
av2[5]=lf[13];
av2[6]=lf[14];
av2[7]=lf[15];
((C_proc)(void*)(*((C_word*)t4+1)))(8,av2);}}

/* k5663 in k5660 in k5657 in k5653 in k5650 in k5647 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_5665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5665,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5667 in k5657 in k5653 in k5650 in k5647 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_5669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5669,2,av);}
/* chicken-syntax.scm:1310: scheme#append */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[2]+1);
av2[3]=*((C_word*)lf[7]+1);
av2[4]=*((C_word*)lf[3]+1);
av2[5]=*((C_word*)lf[6]+1);
av2[6]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k5671 in k5647 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_5673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5673,2,av);}
/* chicken-syntax.scm:1287: ##sys#extend-macro-environment */
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
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a5674 in k5647 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_5675(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5675,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5679,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1291: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[30];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k5677 in a5674 in k5647 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_5679(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(57,c,1)))){
C_save_and_reclaim((void *)f_5679,2,av);}
a=C_alloc(57);
t2=C_a_i_list(&a,1,lf[22]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_cons(&a,2,lf[23],t4);
t6=C_a_i_list(&a,1,lf[24]);
t7=C_a_i_list(&a,2,lf[25],t6);
t8=C_a_i_list(&a,3,lf[26],lf[27],t1);
t9=C_a_i_list(&a,4,lf[23],t1,t7,t8);
t10=C_a_i_list(&a,3,lf[28],t5,t9);
t11=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_a_i_list(&a,3,lf[29],t2,t10);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}

/* k5720 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_5722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5722,2,av);}
/* chicken-syntax.scm:1257: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[32];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a5723 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_5724(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5724,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5728,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1262: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[32];
av2[3]=t2;
av2[4]=lf[46];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5726 in a5723 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in ... */
static void C_ccall f_5728(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5728,2,av);}
a=C_alloc(9);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_i_nullp(t6);
t8=(C_truep(t7)?lf[33]:C_i_car(t6));
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5739,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t10,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1266: r */
t12=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t12;
av2[1]=t11;
av2[2]=lf[44];
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}

/* k5737 in k5726 in a5723 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in ... */
static void C_ccall f_5739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5739,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5742,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_stringp(((C_word*)((C_word*)t0)[5])[1]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5794,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1268: chicken.syntax#get-line-number */
t5=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=t3;
f_5742(t4,C_SCHEME_UNDEFINED);}}

/* k5740 in k5737 in k5726 in a5723 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_fcall f_5742(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,0,2)))){
C_save_and_reclaim_args((void *)trf_5742,2,t0,t1);}
a=C_alloc(25);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=C_a_i_list(&a,2,lf[34],((C_word*)t0)[2]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5765,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t8=C_u_i_cdr(((C_word*)t0)[5]);
t9=t7;
f_5765(t9,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[6])[1],t8));}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5784,a[2]=t7,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1277: chicken.syntax#strip-syntax */
t9=*((C_word*)lf[39]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}

/* k5763 in k5740 in k5737 in k5726 in a5723 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_fcall f_5765(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,0,1)))){
C_save_and_reclaim_args((void *)trf_5765,2,t0,t1);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,lf[35],t1);
t3=C_a_i_list(&a,4,lf[36],((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[37],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5782 in k5740 in k5737 in k5726 in a5723 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_5784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_5784,2,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,2,lf[38],t1);
t3=C_a_i_list(&a,1,t2);
t4=((C_word*)t0)[2];
f_5765(t4,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t3));}

/* k5792 in k5737 in k5726 in a5723 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_5794(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_5794,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5801,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1269: string-append */
t3=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[41];
av2[3]=t1;
av2[4]=lf[42];
av2[5]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t2=((C_word*)t0)[3];
f_5742(t2,C_SCHEME_FALSE);}}

/* k5799 in k5792 in k5737 in k5726 in a5723 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_5801(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5801,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_5742(t3,t2);}

/* k5809 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_5811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5811,2,av);}
/* chicken-syntax.scm:1247: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[47];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a5812 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_5813(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5813,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5821,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1252: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[48];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k5819 in a5812 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_5821(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5821,2,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,t1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5827 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_5829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5829,2,av);}
/* chicken-syntax.scm:1231: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[49];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a5830 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_5831(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5831,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5835,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1235: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[49];
av2[3]=t2;
av2[4]=lf[51];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5833 in a5830 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_5835(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_5835,2,av);}
a=C_alloc(24);
t2=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t2))){
t3=C_u_i_car(t2);
t4=C_u_i_cdr(t2);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=C_a_i_cons(&a,2,t4,t7);
t9=C_a_i_cons(&a,2,lf[23],t8);
t10=C_a_i_list(&a,2,t3,t9);
t11=C_a_i_list(&a,1,t10);
t12=C_u_i_car(t2);
t13=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t13;
av2[1]=C_a_i_list(&a,3,lf[50],t11,t12);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=C_a_i_cons(&a,2,t2,t5);
t7=C_a_i_list(&a,1,t6);
t8=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_list(&a,3,lf[50],t7,t2);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k5892 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_ccall f_5894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5894,2,av);}
/* chicken-syntax.scm:1189: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
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

/* a5895 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_ccall f_5896(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5896,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5900,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1194: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[52];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k5898 in a5895 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_5900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5900,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5903,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1195: r */
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[62];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5901 in k5898 in a5895 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_5903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5903,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5906,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1196: r */
t4=((C_word*)t0)[4];{
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

/* k5904 in k5901 in k5898 in a5895 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_5906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_5906,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5909,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t4))){
/* chicken-syntax.scm:1198: chicken.syntax#syntax-error */
t5=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[54];
av2[3]=lf[60];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_5909(2,av2);}}}

/* k5907 in k5904 in k5901 in k5898 in a5895 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in ... */
static void C_ccall f_5909(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,7)))){
C_save_and_reclaim((void *)f_5909,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5916,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li5),tmp=(C_word)a,a+=10,tmp));
t7=((C_word*)t5)[1];
f_5916(t7,((C_word*)t0)[8],t3,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in k5907 in k5904 in k5901 in k5898 in a5895 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in ... */
static void C_fcall f_5916(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_5916,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5926,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1201: scheme#reverse */
t8=*((C_word*)lf[57]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5995,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t4,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
t8=C_i_car(t2);
/* chicken-syntax.scm:1211: c */
t9=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t9;
av2[1]=t7;
av2[2]=((C_word*)t0)[8];
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}}

/* k5924 in loop in k5907 in k5904 in k5901 in k5898 in a5895 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_5926(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5926,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5929,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1202: scheme#reverse */
t4=*((C_word*)lf[57]+1);{
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

/* k5927 in k5924 in loop in k5907 in k5904 in k5901 in k5898 in a5895 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_5929(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_5929,2,av);}
a=C_alloc(21);
t2=t1;
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5935,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5972,a[2]=((C_word*)t0)[7],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1204: chicken.base#gensym */
t5=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=C_a_i_cons(&a,2,t3,t4);
t6=C_a_i_list(&a,3,lf[23],((C_word*)t0)[6],t5);
t7=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_list(&a,3,lf[37],((C_word*)t0)[5],t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k5933 in k5927 in k5924 in loop in k5907 in k5904 in k5901 in k5898 in a5895 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_5935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5935,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5946,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:318: ##sys#append */
t4=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5944 in k5933 in k5927 in k5924 in loop in k5907 in k5904 in k5901 in k5898 in a5895 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_5946(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_5946,2,av);}
a=C_alloc(10);
t2=t1;
t3=C_i_car(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5962,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=C_u_i_cdr(((C_word*)t0)[2]);
t7=C_a_i_list(&a,1,((C_word*)t0)[6]);
/* chicken-syntax.scm:318: ##sys#append */
t8=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t5;
av2[2]=t6;
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k5960 in k5944 in k5933 in k5927 in k5924 in loop in k5907 in k5904 in k5901 in k5898 in a5895 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_5962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_5962,2,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,3,lf[23],((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[37],((C_word*)t0)[6],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k5970 in k5927 in k5924 in loop in k5907 in k5904 in k5901 in k5898 in a5895 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_5972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5972,2,av);}
/* chicken-syntax.scm:1204: r */
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

/* k5993 in loop in k5907 in k5904 in k5901 in k5898 in a5895 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_5995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_5995,2,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5998,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6015,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1212: chicken.base#gensym */
t4=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6021,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
/* chicken-syntax.scm:1214: c */
t5=((C_word*)t0)[10];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[11];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k5996 in k5993 in loop in k5907 in k5904 in k5901 in k5898 in a5895 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_5998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_5998,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1213: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_5916(t6,((C_word*)t0)[6],t3,t4,((C_word*)t0)[7],t5,C_SCHEME_FALSE);}

/* k6013 in k5993 in loop in k5907 in k5904 in k5901 in k5898 in a5895 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_6015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6015,2,av);}
/* chicken-syntax.scm:1212: r */
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

/* k6019 in k5993 in loop in k5907 in k5904 in k5901 in k5898 in a5895 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_6021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,6)))){
C_save_and_reclaim((void *)f_6021,2,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
/* chicken-syntax.scm:1216: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_5916(t4,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_TRUE);}
else{
/* chicken-syntax.scm:1217: chicken.syntax#syntax-error */
t4=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[54];
av2[3]=lf[59];
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6038,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6061,a[2]=((C_word*)t0)[9],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1222: chicken.base#gensym */
t4=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6036 in k6019 in k5993 in loop in k5907 in k5904 in k5901 in k5898 in a5895 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_6038(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,6)))){
C_save_and_reclaim((void *)f_6038,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
t6=C_a_i_list2(&a,2,t1,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)t0)[3]);
t8=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1223: loop */
t9=((C_word*)((C_word*)t0)[5])[1];
f_5916(t9,((C_word*)t0)[6],t3,((C_word*)t0)[7],t7,t8,C_SCHEME_FALSE);}

/* k6059 in k6019 in k5993 in loop in k5907 in k5904 in k5901 in k5898 in a5895 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_6061(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6061,2,av);}
/* chicken-syntax.scm:1222: r */
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

/* k6087 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_6089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6089,2,av);}
/* chicken-syntax.scm:1156: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[63];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a6090 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_6091(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6091,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6095,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1161: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[62];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k6093 in a6090 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_ccall f_6095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6095,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6098,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1162: r */
t4=((C_word*)t0)[3];{
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

/* k6096 in k6093 in a6090 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_6098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6098,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6101,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1163: r */
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[52];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6099 in k6096 in k6093 in a6090 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_6101(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_6101,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6104,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t4))){
/* chicken-syntax.scm:1165: chicken.syntax#syntax-error */
t5=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[63];
av2[3]=lf[65];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_6104(2,av2);}}}

/* k6102 in k6099 in k6096 in k6093 in a6090 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in ... */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,6)))){
C_save_and_reclaim((void *)f_6104,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6111,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li7),tmp=(C_word)a,a+=10,tmp));
t7=((C_word*)t5)[1];
f_6111(t7,((C_word*)t0)[8],t3,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in k6102 in k6099 in k6096 in k6093 in a6090 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in ... */
static void C_fcall f_6111(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_6111,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6121,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1168: scheme#reverse */
t7=*((C_word*)lf[57]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6186,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
t7=C_i_car(t2);
/* chicken-syntax.scm:1177: c */
t8=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t8;
av2[1]=t6;
av2[2]=((C_word*)t0)[8];
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}

/* k6119 in loop in k6102 in k6099 in k6096 in k6093 in a6090 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in ... */
static void C_ccall f_6121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6121,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6124,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1169: scheme#reverse */
t4=*((C_word*)lf[57]+1);{
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

/* k6122 in k6119 in loop in k6102 in k6099 in k6096 in k6093 in a6090 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_6124(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_6124,2,av);}
a=C_alloc(18);
t2=t1;
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6130,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6163,a[2]=((C_word*)t0)[6],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1171: chicken.base#gensym */
t5=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_a_i_list(&a,2,lf[29],t3);
t5=C_u_i_cdr(t2);
t6=C_a_i_cons(&a,2,t4,t5);
t7=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_list(&a,3,lf[23],((C_word*)t0)[5],t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k6128 in k6122 in k6119 in loop in k6102 in k6099 in k6096 in k6093 in a6090 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_6130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6130,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6137,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:318: ##sys#append */
t4=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6135 in k6128 in k6122 in k6119 in loop in k6102 in k6099 in k6096 in k6093 in a6090 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_6137(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_6137,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_i_car(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6153,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=C_u_i_cdr(((C_word*)t0)[2]);
t7=C_a_i_list(&a,1,((C_word*)t0)[5]);
/* chicken-syntax.scm:318: ##sys#append */
t8=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t5;
av2[2]=t6;
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k6151 in k6135 in k6128 in k6122 in k6119 in loop in k6102 in k6099 in k6096 in k6093 in a6090 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_6153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_6153,2,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[23],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6161 in k6122 in k6119 in loop in k6102 in k6099 in k6096 in k6093 in a6090 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_6163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6163,2,av);}
/* chicken-syntax.scm:1171: r */
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

/* k6184 in loop in k6102 in k6099 in k6096 in k6093 in a6090 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in ... */
static void C_ccall f_6186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_6186,2,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6189,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6206,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1178: chicken.base#gensym */
t4=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6212,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
/* chicken-syntax.scm:1180: c */
t5=((C_word*)t0)[9];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k6187 in k6184 in loop in k6102 in k6099 in k6096 in k6093 in a6090 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_6189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_6189,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1179: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_6111(t6,((C_word*)t0)[6],t3,t4,t5,C_SCHEME_FALSE);}

/* k6204 in k6184 in loop in k6102 in k6099 in k6096 in k6093 in a6090 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_6206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6206,2,av);}
/* chicken-syntax.scm:1178: r */
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

/* k6210 in k6184 in loop in k6102 in k6099 in k6096 in k6093 in a6090 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_6212(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_6212,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
/* chicken-syntax.scm:1182: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6111(t4,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_TRUE);}
else{
/* chicken-syntax.scm:1183: chicken.syntax#syntax-error */
t4=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[63];
av2[3]=lf[64];
av2[4]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[6]);
/* chicken-syntax.scm:1187: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_6111(t7,((C_word*)t0)[4],t3,((C_word*)t0)[5],t6,C_SCHEME_FALSE);}}

/* k6259 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_ccall f_6261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6261,2,av);}
/* chicken-syntax.scm:1075: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[66];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_ccall f_6263(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6263,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6267,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1080: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[66];
av2[3]=t2;
av2[4]=lf[84];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_6267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6267,2,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6273,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1085: chicken.syntax#strip-syntax */
t5=*((C_word*)lf[39]+1);{
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

/* k6271 in k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_ccall f_6273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6273,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6276,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6645,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1086: ##sys#current-module */
t5=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k6274 in k6271 in k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_6276(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6276,2,av);}
a=C_alloc(10);
t2=t1;
t3=C_i_caddr(((C_word*)t0)[2]);
t4=t3;
t5=C_i_cadddr(((C_word*)t0)[2]);
t6=t5;
t7=C_i_cddddr(((C_word*)t0)[2]);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6288,a[2]=t4,a[3]=t8,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t6,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1094: r */
t10=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[79];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k6286 in k6274 in k6271 in k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_6288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6288,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6291,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:1095: r */
t4=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[78];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6289 in k6286 in k6274 in k6271 in k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_6291(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6291,2,av);}
a=C_alloc(13);
t2=t1;
t3=C_i_cdr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6297,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t4,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=t2,a[12]=((C_word*)t0)[10],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:1097: r */
t6=((C_word*)t0)[10];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[77];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k6295 in k6289 in k6286 in k6274 in k6271 in k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in ... */
static void C_ccall f_6297(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6297,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6300,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:1098: r */
t4=((C_word*)t0)[12];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[76];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6298 in k6295 in k6289 in k6286 in k6274 in k6271 in k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in ... */
static void C_ccall f_6300(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_6300,2,av);}
a=C_alloc(27);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[2],lf[67]);
t8=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6309,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=t2,a[13]=((C_word*)t0)[2],tmp=(C_word)a,a+=14,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6610,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li12),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_6610(t12,t8,((C_word*)t0)[2]);}

/* k6307 in k6298 in k6295 in k6289 in k6286 in k6274 in k6271 in k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_6309(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(53,c,3)))){
C_save_and_reclaim((void *)f_6309,2,av);}
a=C_alloc(53);
t2=C_a_i_list(&a,2,lf[38],((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=t3;
t5=C_a_i_list(&a,2,lf[38],((C_word*)t0)[2]);
t6=t5;
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6557,a[2]=((C_word*)t0)[5],a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
t12=C_i_check_list_2(t1,lf[67]);
t13=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6570,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[2],a[8]=t4,a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6572,a[2]=t11,a[3]=t9,a[4]=t15,a[5]=t10,a[6]=((C_word)li11),tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_6572(t17,t13,t1);}

/* k6338 in k6568 in k6307 in k6298 in k6295 in k6289 in k6286 in k6274 in k6271 in k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_6340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6340,2,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[29],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* loop in k6568 in k6307 in k6298 in k6295 in k6289 in k6286 in k6274 in k6271 in k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_fcall f_6342(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,0,3)))){
C_save_and_reclaim_args((void *)trf_6342,4,t0,t1,t2,t3);}
a=C_alloc(19);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=t4;
t6=C_i_cddr(t5);
t7=C_i_pairp(t6);
t8=t7;
t9=(C_truep(t8)?C_i_caddr(t5):C_SCHEME_FALSE);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6361,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t3,a[6]=t1,a[7]=t2,a[8]=((C_word*)t0)[4],a[9]=t8,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=t10,a[13]=((C_word*)t0)[7],a[14]=((C_word*)t0)[8],tmp=(C_word)a,a+=15,tmp);
if(C_truep(C_i_pairp(t10))){
t12=C_u_i_cdr(t10);
if(C_truep(C_i_pairp(t12))){
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6514,a[2]=t11,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
t14=C_u_i_car(t10);
/* chicken-syntax.scm:1120: c */
t15=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t15;
av2[1]=t13;
av2[2]=lf[75];
av2[3]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}
else{
t13=t11;
f_6361(t13,C_SCHEME_FALSE);}}
else{
t12=t11;
f_6361(t12,C_SCHEME_FALSE);}}}

/* k6359 in loop in k6568 in k6307 in k6298 in k6295 in k6289 in k6286 in k6274 in k6271 in k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_fcall f_6361(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(128,0,2)))){
C_save_and_reclaim_args((void *)trf_6361,2,t0,t1);}
a=C_alloc(128);
t2=t1;
t3=C_a_i_list(&a,1,((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,lf[38],((C_word*)t0)[3]);
t5=C_i_cadr(((C_word*)t0)[4]);
t6=C_a_i_list(&a,2,lf[38],t5);
t7=C_a_i_list(&a,4,lf[71],((C_word*)t0)[2],t4,t6);
t8=C_a_i_list(&a,2,lf[34],t7);
t9=C_a_i_list(&a,3,lf[72],((C_word*)t0)[2],((C_word*)t0)[5]);
t10=C_a_i_list(&a,4,lf[23],t3,t8,t9);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6367,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=t2,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=t11,tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[9])){
t13=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[14]);
t14=C_a_i_list(&a,2,lf[38],((C_word*)t0)[3]);
t15=C_a_i_list(&a,2,lf[38],t2);
t16=C_a_i_list(&a,4,lf[71],((C_word*)t0)[2],t14,t15);
t17=C_a_i_list(&a,2,lf[34],t16);
t18=C_a_i_list(&a,4,lf[74],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[14]);
t19=t12;
f_6367(t19,C_a_i_list(&a,4,lf[23],t13,t17,t18));}
else{
t13=t12;
f_6367(t13,C_SCHEME_FALSE);}}

/* k6365 in k6359 in loop in k6568 in k6307 in k6298 in k6295 in k6289 in k6286 in k6274 in k6271 in k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in ... */
static void C_fcall f_6367(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,0,3)))){
C_save_and_reclaim_args((void *)trf_6367,2,t0,t1);}
a=C_alloc(21);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6374,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
t4=C_u_i_cdr(((C_word*)t0)[8]);
t5=C_u_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6435,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[10],a[7]=t5,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
t7=C_u_i_cdr(((C_word*)t0)[8]);
t8=C_u_i_car(t7);
/* chicken-syntax.scm:1141: c */
t9=((C_word*)t0)[9];{
C_word av2[4];
av2[0]=t9;
av2[1]=t6;
av2[2]=((C_word*)t0)[7];
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_6435(2,av2);}}}

/* k6372 in k6365 in k6359 in loop in k6568 in k6307 in k6298 in k6295 in k6289 in k6286 in k6274 in k6271 in k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in ... */
static void C_fcall f_6374(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,0,3)))){
C_save_and_reclaim_args((void *)trf_6374,2,t0,t1);}
a=C_alloc(22);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6378,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6382,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
if(C_truep(((C_word*)t0)[7])){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6414,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_i_cadr(((C_word*)t0)[9]);
/* chicken-syntax.scm:1146: c */
t7=((C_word*)t0)[10];{
C_word av2[4];
av2[0]=t7;
av2[1]=t5;
av2[2]=((C_word*)t0)[7];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t5=C_a_i_list(&a,3,((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[8]);
t6=t4;
f_6382(t6,C_a_i_list(&a,1,t5));}}
else{
t5=t4;
f_6382(t5,C_SCHEME_END_OF_LIST);}}

/* k6376 in k6372 in k6365 in k6359 in loop in k6568 in k6307 in k6298 in k6295 in k6289 in k6286 in k6274 in k6271 in k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in ... */
static void C_ccall f_6378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6378,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6380 in k6372 in k6365 in k6359 in loop in k6568 in k6307 in k6298 in k6295 in k6289 in k6286 in k6274 in k6271 in k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in ... */
static void C_fcall f_6382(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,3)))){
C_save_and_reclaim_args((void *)trf_6382,2,t0,t1);}
a=C_alloc(33);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6386,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
t6=((C_word*)t0)[4];
t7=C_s_a_i_plus(&a,2,t6,C_fix(1));
/* chicken-syntax.scm:1151: loop */
t8=((C_word*)((C_word*)t0)[5])[1];
f_6342(t8,t3,t5,t7);}

/* k6384 in k6380 in k6372 in k6365 in k6359 in loop in k6568 in k6307 in k6298 in k6295 in k6289 in k6286 in k6274 in k6271 in k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in ... */
static void C_ccall f_6386(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6386,2,av);}
/* chicken-syntax.scm:318: ##sys#append */
t2=*((C_word*)lf[55]+1);{
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

/* k6412 in k6372 in k6365 in k6359 in loop in k6568 in k6307 in k6298 in k6295 in k6289 in k6286 in k6274 in k6271 in k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in ... */
static void C_ccall f_6414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_6414,2,av);}
a=C_alloc(18);
if(C_truep(C_i_not(t1))){
t2=C_a_i_list(&a,2,lf[73],lf[73]);
t3=C_a_i_list(&a,3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=((C_word*)t0)[4];
f_6382(t4,C_a_i_list(&a,1,t3));}
else{
t2=((C_word*)t0)[4];
f_6382(t2,C_SCHEME_END_OF_LIST);}}

/* k6433 in k6365 in k6359 in loop in k6568 in k6307 in k6298 in k6295 in k6289 in k6286 in k6274 in k6271 in k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in ... */
static void C_ccall f_6435(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_6435,2,av);}
a=C_alloc(18);
if(C_truep(t1)){
t2=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];
f_6374(t3,C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[7],t2));}
else{
t2=((C_word*)t0)[5];
f_6374(t2,C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[3]));}}

/* k6512 in loop in k6568 in k6307 in k6298 in k6295 in k6289 in k6286 in k6274 in k6271 in k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_6514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6514,2,av);}
t2=((C_word*)t0)[2];
f_6361(t2,(C_truep(t1)?C_i_cadr(((C_word*)t0)[3]):C_SCHEME_FALSE));}

/* g3044 in k6307 in k6298 in k6295 in k6289 in k6286 in k6274 in k6271 in k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static C_word C_fcall f_6557(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
if(C_truep(C_i_memq(t1,((C_word*)t0)[2]))){
t2=t1;
return(t2);}
else{
return(lf[68]);}}

/* k6568 in k6307 in k6298 in k6295 in k6289 in k6286 in k6274 in k6271 in k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_6570(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(63,c,4)))){
C_save_and_reclaim((void *)f_6570,2,av);}
a=C_alloc(63);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[69],t2);
t4=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t3);
t5=t4;
t6=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
t7=C_a_i_list(&a,2,lf[38],((C_word*)t0)[7]);
t8=C_a_i_list(&a,3,lf[70],((C_word*)t0)[6],t7);
t9=C_a_i_list(&a,3,((C_word*)t0)[3],t6,t8);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6340,a[2]=t10,a[3]=t5,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6342,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t13,a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word)li10),tmp=(C_word)a,a+=10,tmp));
t15=((C_word*)t13)[1];
f_6342(t15,t11,((C_word*)t0)[13],C_fix(1));}

/* map-loop3038 in k6307 in k6298 in k6295 in k6289 in k6286 in k6274 in k6271 in k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_6572,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* chicken-syntax.scm:1106: g3044 */
  f_6557(((C_word*)t0)[2],t3)
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

/* map-loop3009 in k6298 in k6295 in k6289 in k6286 in k6274 in k6271 in k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_fcall f_6610(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6610,3,t0,t1,t2);}
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

/* k6643 in k6271 in k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_6645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6645,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6652,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6656,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1088: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_6276(2,av2);}}}

/* k6650 in k6643 in k6271 in k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_6652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6652,2,av);}
/* chicken-syntax.scm:1087: chicken.base#symbol-append */
t2=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[81];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6654 in k6643 in k6271 in k6265 in a6262 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_6656(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6656,2,av);}
/* chicken-syntax.scm:1088: ##sys#module-name */
t2=*((C_word*)lf[82]+1);{
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

/* k6658 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_6660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6660,2,av);}
/* chicken-syntax.scm:1042: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[85];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a6661 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_6662(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6662,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6666,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1046: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[85];
av2[3]=t2;
av2[4]=lf[89];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6664 in a6661 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_ccall f_6666(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_6666,2,av);}
a=C_alloc(8);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
if(C_truep(C_i_pairp(t3))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6680,a[2]=t3,a[3]=t6,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t8=C_a_i_cons(&a,2,t3,t6);
/* chicken-syntax.scm:1050: ##sys#check-syntax */
t9=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=lf[85];
av2[3]=t8;
av2[4]=lf[87];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6730,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t8=C_a_i_cons(&a,2,t3,t6);
/* chicken-syntax.scm:1063: ##sys#check-syntax */
t9=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=lf[85];
av2[3]=t8;
av2[4]=lf[88];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}

/* k6678 in k6664 in a6661 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_6680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6680,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6683,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(0));
/* chicken-syntax.scm:1053: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[39]+1);{
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

/* k6681 in k6678 in k6664 in a6661 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_ccall f_6683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6683,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6686,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6708,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1054: ##sys#current-module */
t5=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k6684 in k6681 in k6678 in k6664 in a6661 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_6686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_6686,2,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,2,lf[38],t1);
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,lf[23],t4);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[86],t2,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k6706 in k6681 in k6678 in k6664 in a6661 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_6708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6708,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6715,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6719,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1056: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_6686(2,av2);}}}

/* k6713 in k6706 in k6681 in k6678 in k6664 in a6661 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_6715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6715,2,av);}
/* chicken-syntax.scm:1055: chicken.base#symbol-append */
t2=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[81];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6717 in k6706 in k6681 in k6678 in k6664 in a6661 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_6719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6719,2,av);}
/* chicken-syntax.scm:1056: ##sys#module-name */
t2=*((C_word*)lf[82]+1);{
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

/* k6728 in k6664 in a6661 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_6730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6730,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6733,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1064: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[39]+1);{
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

/* k6731 in k6728 in k6664 in a6661 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_ccall f_6733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6733,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6736,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6750,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1065: ##sys#current-module */
t5=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k6734 in k6731 in k6728 in k6664 in a6661 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_6736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6736,2,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,2,lf[38],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[86],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6748 in k6731 in k6728 in k6664 in a6661 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_6750(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6750,2,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6757,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6761,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1067: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_a_i_list(&a,2,lf[38],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[86],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6755 in k6748 in k6731 in k6728 in k6664 in a6661 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_6757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6757,2,av);}
/* chicken-syntax.scm:1066: chicken.base#symbol-append */
t2=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[81];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6759 in k6748 in k6731 in k6728 in k6664 in a6661 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_6761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6761,2,av);}
/* chicken-syntax.scm:1067: ##sys#module-name */
t2=*((C_word*)lf[82]+1);{
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

/* k6771 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_6773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6773,2,av);}
/* chicken-syntax.scm:974: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[100];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_6775(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6775,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6779,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:983: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[100];
av2[3]=t2;
av2[4]=lf[108];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_6779(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_6779,2,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6781,a[2]=((C_word*)t0)[2],a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6816,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_cdr(((C_word*)t0)[3]);
t9=C_i_check_list_2(t8,lf[67]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7155,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7157,a[2]=t6,a[3]=t12,a[4]=t7,a[5]=((C_word)li26),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_7157(t14,t10,t8);}

/* genvars in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_fcall f_6781(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_6781,3,t0,t1,t2);}
a=C_alloc(8);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6787,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li15),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_6787(t6,t1,C_fix(0));}

/* loop in genvars in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_fcall f_6787(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_6787,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6801,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6813,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:988: chicken.base#gensym */
t5=*((C_word*)lf[56]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k6799 in loop in genvars in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_ccall f_6801(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6801,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6805,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* chicken-syntax.scm:988: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6787(t5,t3,t4);}

/* k6803 in k6799 in loop in genvars in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_6805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6805,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6811 in loop in genvars in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_ccall f_6813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6813,2,av);}
/* chicken-syntax.scm:988: r */
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

/* k6814 in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_ccall f_6816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6816,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6819,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:994: genvars */
t4=((C_word*)t0)[5];
f_6781(t4,t3,t2);}

/* k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_6819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6819,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6822,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:995: r */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[106];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_ccall f_6822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6822,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6825,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:996: r */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[105];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_6825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6825,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6828,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:997: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[90];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_6828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6828,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6831,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:998: r */
t4=((C_word*)t0)[8];{
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

/* k6829 in k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_6831(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6831,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6834,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:999: r */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[92];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6832 in k6829 in k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in ... */
static void C_ccall f_6834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6834,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6837,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:1000: r */
t4=((C_word*)t0)[8];{
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

/* k6835 in k6832 in k6829 in k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in ... */
static void C_ccall f_6837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6837,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6840,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:1001: r */
t4=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[98];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6838 in k6835 in k6832 in k6829 in k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_6840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_6840,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6847,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm:1003: scheme#append */
t4=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6845 in k6838 in k6835 in k6832 in k6829 in k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_6847(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_6847,2,av);}
a=C_alloc(35);
t2=t1;
t3=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_list(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=((C_word*)t0)[5];
t8=C_u_i_cdr(t7);
t9=C_i_check_list_2(t8,lf[101]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6863,a[2]=t6,a[3]=((C_word*)t0)[6],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6865,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[13],a[11]=t12,a[12]=((C_word)li24),tmp=(C_word)a,a+=13,tmp));
t14=((C_word*)t12)[1];
f_6865(t14,t10,t8);}

/* k6861 in k6845 in k6838 in k6835 in k6832 in k6829 in k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_6863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_6863,2,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,3,lf[37],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[23],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* foldr2885 in k6845 in k6838 in k6835 in k6832 in k6829 in k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_fcall f_6865(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,0,4)))){
C_save_and_reclaim_args((void *)trf_6865,3,t0,t1,t2);}
a=C_alloc(17);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6873,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word)li23),tmp=(C_word)a,a+=12,tmp);
t4=C_slot(t2,C_fix(0));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7118,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
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
av2[1]=lf[104];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g2890 in foldr2885 in k6845 in k6838 in k6835 in k6832 in k6829 in k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_fcall f_6873(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,5)))){
C_save_and_reclaim_args((void *)trf_6873,4,t0,t1,t2,t3);}
a=C_alloc(14);
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6883,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word)li22),tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm:1008: ##sys#decompose-lambda-list */
t6=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* a6882 in g2890 in foldr2885 in k6845 in k6838 in k6835 in k6832 in k6829 in k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_6883(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_6883,5,av);}
a=C_alloc(17);
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6887,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=((C_word*)t0)[4],a[8]=t4,a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],a[14]=((C_word*)t0)[10],a[15]=((C_word*)t0)[11],a[16]=((C_word*)t0)[12],tmp=(C_word)a,a+=17,tmp);
t6=C_i_car(((C_word*)t0)[5]);
/* chicken-syntax.scm:1011: ##sys#check-syntax */
t7=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t5;
av2[2]=lf[100];
av2[3]=t6;
av2[4]=lf[102];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k6885 in a6882 in g2890 in foldr2885 in k6845 in k6838 in k6835 in k6832 in k6829 in k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in ... */
static void C_ccall f_6887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,2)))){
C_save_and_reclaim((void *)f_6887,2,av);}
a=C_alloc(23);
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6897,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=C_eqp(t2,C_fix(0));
t5=t3;
f_6897(t5,(C_truep(t4)?C_SCHEME_TRUE:C_a_i_list(&a,3,((C_word*)t0)[14],((C_word*)t0)[15],t2)));}
else{
t4=t3;
f_6897(t4,C_a_i_list(&a,3,((C_word*)t0)[16],((C_word*)t0)[15],t2));}}

/* k6895 in k6885 in a6882 in g2890 in foldr2885 in k6845 in k6838 in k6835 in k6832 in k6829 in k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in ... */
static void C_fcall f_6897(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,4)))){
C_save_and_reclaim_args((void *)trf_6897,2,t0,t1);}
a=C_alloc(21);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6901,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6903,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li18),tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6913,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word)li21),tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1018: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* k6899 in k6895 in k6885 in a6882 in g2890 in foldr2885 in k6845 in k6838 in k6835 in k6832 in k6829 in k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in ... */
static void C_ccall f_6901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6901,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,4,lf[36],((C_word*)t0)[3],t1,((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a6902 in k6895 in k6885 in a6882 in g2890 in foldr2885 in k6845 in k6838 in k6835 in k6832 in k6829 in k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in ... */
static void C_ccall f_6903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6903,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6911,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1019: take */
f_4313(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k6909 in a6902 in k6895 in k6885 in a6882 in g2890 in foldr2885 in k6845 in k6838 in k6835 in k6832 in k6829 in k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in k5610 in ... */
static void C_ccall f_6911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_6911,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4371,a[2]=t4,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4371(t6,t2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST,t1);}

/* a6912 in k6895 in k6885 in a6882 in g2890 in foldr2885 in k6845 in k6838 in k6835 in k6832 in k6829 in k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in ... */
static void C_ccall f_6913(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_6913,4,av);}
a=C_alloc(16);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6917,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6989,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t6,a[7]=((C_word*)t0)[7],a[8]=((C_word)li20),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_6989(t8,t4,t3,((C_word*)t0)[8]);}

/* k6915 in a6912 in k6895 in k6885 in a6882 in g2890 in foldr2885 in k6845 in k6838 in k6835 in k6832 in k6829 in k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in k5610 in ... */
static void C_ccall f_6917(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_6917,2,av);}
a=C_alloc(17);
t2=t1;
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(t7,lf[67]);
t9=C_i_check_list_2(((C_word*)t0)[4],lf[67]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6939,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6941,a[2]=t5,a[3]=t12,a[4]=t6,a[5]=((C_word)li19),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_6941(t14,t10,t7,((C_word*)t0)[4]);}}

/* k6937 in k6915 in a6912 in k6895 in k6885 in a6882 in g2890 in foldr2885 in k6845 in k6838 in k6835 in k6832 in k6829 in k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in ... */
static void C_ccall f_6939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_6939,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[37],t1,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop2933 in k6915 in a6912 in k6895 in k6885 in a6882 in g2890 in foldr2885 in k6845 in k6838 in k6835 in k6832 in k6829 in k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in ... */
static void C_fcall f_6941(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_6941,4,t0,t1,t2,t3);}
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

/* build in a6912 in k6895 in k6885 in a6882 in g2890 in foldr2885 in k6845 in k6838 in k6835 in k6832 in k6829 in k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in k5610 in ... */
static void C_fcall f_6989(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_6989,4,t0,t1,t2,t3);}
a=C_alloc(15);
if(C_truep(C_i_nullp(t2))){
if(C_truep(((C_word*)t0)[2])){
t4=C_a_i_list(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_list(&a,1,t4);
t6=C_i_cdr(((C_word*)t0)[3]);
t7=C_a_i_cons(&a,2,t5,t6);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_a_i_cons(&a,2,lf[37],t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t4=C_i_cddr(((C_word*)t0)[3]);
if(C_truep(C_i_nullp(t4))){
t5=((C_word*)t0)[3];
t6=C_u_i_cdr(t5);
t7=C_u_i_car(t6);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t5=((C_word*)t0)[3];
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t6);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_a_i_cons(&a,2,lf[37],t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7042,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7090,a[2]=((C_word*)t0)[7],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1026: chicken.base#gensym */
t6=*((C_word*)lf[56]+1);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k7040 in build in a6912 in k6895 in k6885 in a6882 in g2890 in foldr2885 in k6845 in k6838 in k6835 in k6832 in k6829 in k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in ... */
static void C_ccall f_7042(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(34,c,3)))){
C_save_and_reclaim((void *)f_7042,2,av);}
a=C_alloc(34);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t6=C_a_i_list(&a,2,t1,t5);
t7=C_a_i_list(&a,2,t4,t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7053,a[2]=((C_word*)t0)[6],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=((C_word*)t0)[2];
t11=C_u_i_cdr(t10);
if(C_truep(C_i_pairp(t11))){
t12=((C_word*)t0)[2];
t13=C_u_i_cdr(t12);
/* chicken-syntax.scm:1030: build */
t14=((C_word*)((C_word*)t0)[7])[1];
f_6989(t14,t9,t13,t1);}
else{
/* chicken-syntax.scm:1031: build */
t12=((C_word*)((C_word*)t0)[7])[1];
f_6989(t12,t9,C_SCHEME_END_OF_LIST,t1);}}

/* k7051 in k7040 in build in a6912 in k6895 in k6885 in a6882 in g2890 in foldr2885 in k6845 in k6838 in k6835 in k6832 in k6829 in k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in ... */
static void C_ccall f_7053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7053,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[37],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7088 in build in a6912 in k6895 in k6885 in a6882 in g2890 in foldr2885 in k6845 in k6838 in k6835 in k6832 in k6829 in k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in ... */
static void C_ccall f_7090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7090,2,av);}
/* chicken-syntax.scm:1026: r */
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

/* k7116 in foldr2885 in k6845 in k6838 in k6835 in k6832 in k6829 in k6826 in k6823 in k6820 in k6817 in k6814 in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_7118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7118,2,av);}
/* chicken-syntax.scm:1006: g2890 */
t2=((C_word*)t0)[2];
f_6873(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* a7144 in map-loop2842 in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_7145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7145,5,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7153 in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_ccall f_7155(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7155,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[107]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* map-loop2842 in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_fcall f_7157(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_7157,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7182,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7145,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:990: ##sys#decompose-lambda-list */
t7=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t3;
av2[2]=t5;
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7180 in map-loop2842 in k6777 in a6774 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_7182(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7182,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7157(t6,((C_word*)t0)[5],t5);}

/* k7215 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_7217(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7217,2,av);}
/* chicken-syntax.scm:939: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[111];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7218 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_7219(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7219,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7223,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:946: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[111];
av2[3]=t2;
av2[4]=lf[113];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7221 in a7218 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_7223(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7223,2,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t4;
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=C_u_i_cdr(t8);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7235,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t9,a[5]=((C_word*)t0)[4],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:950: r */
t11=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[109];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}

/* k7233 in k7221 in a7218 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_7235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7235,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7238,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:951: r */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[92];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7236 in k7233 in k7221 in a7218 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_ccall f_7238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7238,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7241,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:952: r */
t4=((C_word*)t0)[6];{
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

/* k7239 in k7236 in k7233 in k7221 in a7218 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_7241(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7241,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7244,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:953: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[44];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7242 in k7239 in k7236 in k7233 in k7221 in a7218 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_ccall f_7244(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,4)))){
C_save_and_reclaim((void *)f_7244,2,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7255,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7257,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t7,a[7]=((C_word*)t0)[8],a[8]=((C_word)li28),tmp=(C_word)a,a+=9,tmp));
t9=((C_word*)t7)[1];
f_7257(t9,t5,t1,((C_word*)t0)[9]);}

/* k7253 in k7242 in k7239 in k7236 in k7233 in k7221 in a7218 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_7255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7255,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[37],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k7242 in k7239 in k7236 in k7233 in k7221 in a7218 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_fcall f_7257(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_7257,4,t0,t1,t2,t3);}
a=C_alloc(15);
if(C_truep(C_i_nullp(t3))){
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[37],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t3);
t5=t4;
if(C_truep(C_i_pairp(t5))){
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7283,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=t3,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:961: r */
t7=((C_word*)t0)[7];{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[112];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=C_a_i_list(&a,2,t5,t2);
t7=C_a_i_list(&a,1,t6);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[2]);
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=C_a_i_cons(&a,2,lf[37],t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}}

/* k7281 in loop in k7242 in k7239 in k7236 in k7233 in k7221 in a7218 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_7283(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(76,c,3)))){
C_save_and_reclaim((void *)f_7283,2,av);}
a=C_alloc(76);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t6=C_a_i_list(&a,4,lf[36],t3,t4,t5);
t7=C_a_i_list(&a,2,t2,t6);
t8=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t9=C_a_i_list(&a,2,lf[38],C_SCHEME_END_OF_LIST);
t10=C_a_i_list(&a,2,((C_word*)t0)[6],((C_word*)t0)[4]);
t11=C_a_i_list(&a,4,lf[36],t8,t9,t10);
t12=C_a_i_list(&a,2,t1,t11);
t13=C_a_i_list(&a,2,t7,t12);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7294,a[2]=((C_word*)t0)[7],a[3]=t14,tmp=(C_word)a,a+=4,tmp);
t16=((C_word*)t0)[8];
t17=C_u_i_cdr(t16);
/* chicken-syntax.scm:968: loop */
t18=((C_word*)((C_word*)t0)[9])[1];
f_7257(t18,t15,t1,t17);}

/* k7292 in k7281 in loop in k7242 in k7239 in k7236 in k7233 in k7221 in a7218 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_7294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7294,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[37],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7375 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_7377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7377,2,av);}
/* chicken-syntax.scm:911: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[114];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7378 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_7379(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7379,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7383,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:918: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[114];
av2[3]=t2;
av2[4]=lf[115];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7381 in a7378 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_7383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7383,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7386,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:919: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[44];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7384 in k7381 in a7378 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_7386(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_7386,2,av);}
a=C_alloc(16);
t2=t1;
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7426,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t6,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:921: r */
t8=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[109];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k7414 in k7424 in k7384 in k7381 in a7378 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_ccall f_7416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_7416,2,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,4,lf[36],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[37],((C_word*)t0)[6],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7424 in k7384 in k7381 in a7378 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_7426(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_7426,2,av);}
a=C_alloc(13);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=t2;
t4=C_i_cddr(((C_word*)t0)[3]);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7416,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t7,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:923: r */
t9=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[92];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k7452 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_7454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7454,2,av);}
/* chicken-syntax.scm:822: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[116];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_7456(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7456,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7460,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:829: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[116];
av2[3]=t2;
av2[4]=lf[126];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_7460(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,6)))){
C_save_and_reclaim((void *)f_7460,2,av);}
a=C_alloc(12);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t4;
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=C_u_i_cdr(t8);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7550,a[2]=((C_word*)t0)[3],a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7643,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t9,a[6]=((C_word*)t0)[4],a[7]=t10,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:868: ##sys#check-syntax */
t12=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t11;
av2[2]=lf[116];
av2[3]=t5;
av2[4]=lf[125];
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}

/* k7477 in k7711 in k7696 in k7693 in k7690 in k7684 in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_7479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7479,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7483,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:839: scheme#reverse */
t4=*((C_word*)lf[57]+1);{
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

/* k7481 in k7477 in k7711 in k7696 in k7693 in k7690 in k7684 in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in ... */
static void C_ccall f_7483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7483,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7487,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:840: scheme#reverse */
t4=*((C_word*)lf[57]+1);{
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

/* k7485 in k7481 in k7477 in k7711 in k7696 in k7693 in k7690 in k7684 in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in ... */
static void C_ccall f_7487(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_7487,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7489,a[2]=t3,a[3]=((C_word)li36),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_7489(t5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* recur in k7485 in k7481 in k7477 in k7711 in k7696 in k7693 in k7690 in k7684 in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_fcall f_7489(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_7489,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_i_cdr(t2);
t7=t6;
t8=C_i_car(t3);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7528,a[2]=t5,a[3]=t9,a[4]=t1,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[2],a[8]=t7,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:845: scheme#reverse */
t11=*((C_word*)lf[57]+1);{
C_word av2[3];
av2[0]=t11;
av2[1]=t10;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}}

/* k7508 in k7534 in k7526 in recur in k7485 in k7481 in k7477 in k7711 in k7696 in k7693 in k7690 in k7684 in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_7510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7510,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7526 in recur in k7485 in k7481 in k7477 in k7711 in k7696 in k7693 in k7690 in k7684 in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_7528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_7528,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7536,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7540,a[2]=((C_word*)t0)[6],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:846: scheme#reverse */
t5=*((C_word*)lf[57]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7534 in k7526 in recur in k7485 in k7481 in k7477 in k7711 in k7696 in k7693 in k7690 in k7684 in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_7536(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,5)))){
C_save_and_reclaim((void *)f_7536,2,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,3,lf[23],((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[4],t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7510,a[2]=((C_word*)t0)[5],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=((C_word*)t0)[6];
t8=C_u_i_cdr(t7);
t9=((C_word*)t0)[7];
t10=C_u_i_cdr(t9);
t11=((C_word*)t0)[6];
t12=C_u_i_car(t11);
/* chicken-syntax.scm:847: recur */
t13=((C_word*)((C_word*)t0)[8])[1];
f_7489(t13,t6,((C_word*)t0)[9],t8,t10,t12);}

/* k7538 in k7526 in recur in k7485 in k7481 in k7477 in k7711 in k7696 in k7693 in k7690 in k7684 in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_7540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7540,2,av);}
a=C_alloc(3);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:318: ##sys#append */
t4=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* make-if-tree in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_fcall f_7550(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_7550,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(9);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7556,a[2]=t4,a[3]=t5,a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=((C_word)li31),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_7556(t9,t1,t2,t3,C_SCHEME_END_OF_LIST);}

/* recur in make-if-tree in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_fcall f_7556(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_7556,5,t0,t1,t2,t3,t4);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7570,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:858: scheme#reverse */
t6=*((C_word*)lf[57]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_i_car(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7640,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t6,a[5]=t1,a[6]=t2,a[7]=t4,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:860: r */
t8=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[109];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}

/* k7568 in recur in make-if-tree in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_7570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7570,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7594 in k7618 in k7626 in k7634 in k7638 in recur in make-if-tree in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_7596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_7596,2,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,3,lf[37],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,4,lf[36],((C_word*)t0)[4],((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7618 in k7626 in k7634 in k7638 in recur in make-if-tree in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_ccall f_7620(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_7620,2,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[3],t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7596,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t7=((C_word*)t0)[7];
t8=C_u_i_cdr(t7);
t9=((C_word*)t0)[8];
t10=C_u_i_cdr(t9);
t11=C_a_i_cons(&a,2,((C_word*)t0)[9],((C_word*)t0)[10]);
/* chicken-syntax.scm:864: recur */
t12=((C_word*)((C_word*)t0)[11])[1];
f_7556(t12,t6,t8,t10,t11);}

/* k7626 in k7634 in k7638 in recur in make-if-tree in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_7628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_7628,2,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7620,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:863: r */
t6=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[94];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k7634 in k7638 in recur in make-if-tree in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_ccall f_7636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_7636,2,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7628,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:862: r */
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

/* k7638 in recur in make-if-tree in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_7640(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_7640,2,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=t2;
t4=C_i_car(((C_word*)t0)[3]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7636,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:861: scheme#reverse */
t7=*((C_word*)lf[57]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_7643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_7643,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7646,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:869: ##sys#check-syntax */
t3=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[116];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[124];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_7646(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_7646,2,av);}
a=C_alloc(21);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[67]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7655,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7854,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li40),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7854(t11,t7,((C_word*)t0)[2]);}

/* k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_7655(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,4)))){
C_save_and_reclaim((void *)f_7655,2,av);}
a=C_alloc(32);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7656,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7672,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li34),tmp=(C_word)a,a+=5,tmp);
t9=C_i_check_list_2(t2,lf[67]);
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7686,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7820,a[2]=t6,a[3]=t12,a[4]=t8,a[5]=t7,a[6]=((C_word)li39),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_7820(t14,t10,t2);}

/* prefix-sym in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_fcall f_7656(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_7656,3,t1,t2,t3);}
a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7664,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7668,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:872: scheme#symbol->string */
t6=*((C_word*)lf[118]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k7662 in prefix-sym in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_7664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7664,2,av);}
/* chicken-syntax.scm:872: scheme#string->symbol */
t2=*((C_word*)lf[117]+1);{
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

/* k7666 in prefix-sym in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_7668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7668,2,av);}
/* chicken-syntax.scm:872: scheme#string-append */
t2=*((C_word*)lf[40]+1);{
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

/* g2695 in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_fcall f_7672(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_7672,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7680,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:877: prefix-sym */
f_7656(t3,lf[119],t2);}

/* k7678 in g2695 in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_7680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7680,2,av);}
/* chicken-syntax.scm:877: r */
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

/* k7684 in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_ccall f_7686(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_7686,2,av);}
a=C_alloc(23);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7692,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7786,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li38),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7786(t11,t7,((C_word*)t0)[9]);}

/* k7690 in k7684 in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_7692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_7692,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7695,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:881: r */
t4=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[123];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7693 in k7690 in k7684 in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_ccall f_7695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7695,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7698,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:884: r */
t4=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[122];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7696 in k7693 in k7690 in k7684 in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_7698(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,3)))){
C_save_and_reclaim((void *)f_7698,2,av);}
a=C_alloc(31);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7702,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7713,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7752,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t6,a[6]=((C_word)li37),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_7752(t12,t8,((C_word*)t0)[5]);}

/* g2752 in k7696 in k7693 in k7690 in k7684 in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_fcall f_7702(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_7702,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7710,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:886: prefix-sym */
f_7656(t3,lf[120],t2);}

/* k7708 in g2752 in k7696 in k7693 in k7690 in k7684 in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_7710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7710,2,av);}
/* chicken-syntax.scm:886: r */
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

/* k7711 in k7696 in k7693 in k7690 in k7684 in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_7713(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_7713,2,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7716,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
t4=t3;
t5=((C_word*)t0)[6];
t6=t2;
t7=((C_word*)t0)[11];
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7479,a[2]=t4,a[3]=t5,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:838: scheme#reverse */
t9=*((C_word*)lf[57]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k7714 in k7711 in k7696 in k7693 in k7690 in k7684 in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_7716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_7716,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7719,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:891: make-if-tree */
t4=((C_word*)t0)[9];
f_7550(t4,t3,((C_word*)t0)[10],((C_word*)t0)[11],((C_word*)t0)[6],((C_word*)t0)[2]);}

/* k7717 in k7714 in k7711 in k7696 in k7693 in k7690 in k7684 in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in ... */
static void C_ccall f_7719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7719,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7726,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:894: r */
t4=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[121];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7724 in k7717 in k7714 in k7711 in k7696 in k7693 in k7690 in k7684 in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in ... */
static void C_ccall f_7726(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_7726,2,av);}
a=C_alloc(33);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
t4=C_a_i_cons(&a,2,lf[23],t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[6],t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[7]);
t7=C_a_i_cons(&a,2,t2,t6);
t8=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_list(&a,3,t1,t7,((C_word*)t0)[9]);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* map-loop2746 in k7696 in k7693 in k7690 in k7684 in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_fcall f_7752(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7752,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7777,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:886: g2752 */
t5=((C_word*)t0)[4];
f_7702(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7775 in map-loop2746 in k7696 in k7693 in k7690 in k7684 in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_7777(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7777,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7752(t6,((C_word*)t0)[5],t5);}

/* map-loop2717 in k7684 in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_fcall f_7786(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_7786,3,t0,t1,t2);}
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

/* map-loop2689 in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_fcall f_7820(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7820,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7845,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:877: g2695 */
t5=((C_word*)t0)[4];
f_7672(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7843 in map-loop2689 in k7653 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_7845(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7845,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7820(t6,((C_word*)t0)[5],t5);}

/* map-loop2659 in k7644 in k7641 in k7458 in a7455 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_fcall f_7854(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_7854,3,t0,t1,t2);}
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

/* k7900 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_7902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7902,2,av);}
/* chicken-syntax.scm:718: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[127];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7903 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_7904(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7904,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7908,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:722: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[127];
av2[3]=t2;
av2[4]=lf[130];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7906 in a7903 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_7908(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_7908,2,av);}
a=C_alloc(8);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7918,a[2]=t5,a[3]=t7,a[4]=((C_word*)t0)[3],a[5]=((C_word)li42),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_7918(t9,((C_word*)t0)[4],t2,C_SCHEME_TRUE);}

/* fold in k7906 in a7903 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_fcall f_7918(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_7918,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t2))){
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[29],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=t4;
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_i_pairp(t5);
if(C_truep(C_i_not(t8))){
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7945,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t7,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:731: ##sys#check-syntax */
t10=*((C_word*)lf[45]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[127];
av2[3]=t5;
av2[4]=lf[128];
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
t9=C_i_cdr(t5);
if(C_truep(C_i_nullp(t9))){
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7980,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8005,a[2]=((C_word*)t0)[4],a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:736: chicken.base#gensym */
t12=*((C_word*)lf[56]+1);{
C_word av2[2];
av2[0]=t12;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8008,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:740: ##sys#check-syntax */
t11=*((C_word*)lf[45]+1);{
C_word av2[5];
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[127];
av2[3]=t5;
av2[4]=lf[129];
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}}}}

/* k7943 in fold in k7906 in a7903 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_7945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7945,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7948,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7971,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:732: chicken.base#gensym */
t4=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7946 in k7943 in fold in k7906 in a7903 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_7948(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_7948,2,av);}
a=C_alloc(14);
t2=t1;
t3=C_a_i_list(&a,2,t2,((C_word*)t0)[2]);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7963,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:734: fold */
t7=((C_word*)((C_word*)t0)[4])[1];
f_7918(t7,t6,((C_word*)t0)[5],t2);}

/* k7961 in k7946 in k7943 in fold in k7906 in a7903 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_7963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_7963,2,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[36],((C_word*)t0)[2],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[37],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7969 in k7943 in fold in k7906 in a7903 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_7971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7971,2,av);}
/* chicken-syntax.scm:732: r */
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

/* k7978 in fold in k7906 in a7903 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_7980(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_7980,2,av);}
a=C_alloc(14);
t2=t1;
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7995,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:738: fold */
t8=((C_word*)((C_word*)t0)[4])[1];
f_7918(t8,t7,((C_word*)t0)[5],t2);}

/* k7993 in k7978 in fold in k7906 in a7903 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_7995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_7995,2,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[36],((C_word*)t0)[2],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[37],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8003 in fold in k7906 in a7903 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_8005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8005,2,av);}
/* chicken-syntax.scm:736: r */
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

/* k8006 in fold in k7906 in a7903 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_8008(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_8008,2,av);}
a=C_alloc(14);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8024,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:743: fold */
t8=((C_word*)((C_word*)t0)[4])[1];
f_7918(t8,t7,((C_word*)t0)[5],t2);}

/* k8022 in k8006 in fold in k7906 in a7903 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_8024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_8024,2,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[36],((C_word*)t0)[2],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[37],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8042 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_ccall f_8044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8044,2,av);}
/* chicken-syntax.scm:697: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[131];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8045 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_ccall f_8046(C_word c,C_word *av){
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
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_8046,5,av);}
a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8048,a[2]=t4,a[3]=t3,a[4]=((C_word)li44),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8136,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_i_cdr(t2);
/* chicken-syntax.scm:716: quotify-proc */
t8=t5;
f_8048(t8,t6,t7,lf[131]);}

/* quotify-proc2559 in a8045 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_fcall f_8048(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_8048,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8052,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:703: ##sys#check-syntax */
t5=*((C_word*)lf[45]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=t2;
av2[4]=lf[134];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k8050 in quotify-proc2559 in a8045 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_8052(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_8052,2,av);}
a=C_alloc(12);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_u_i_car(t2):t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8061,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t7=C_u_i_cdr(t2);
t8=((C_word*)t0)[2];
t9=C_u_i_cdr(t8);
t10=C_a_i_cons(&a,2,t7,t9);
t11=t6;
f_8061(t11,C_a_i_cons(&a,2,lf[23],t10));}
else{
t7=t6;
f_8061(t7,C_i_cadr(((C_word*)t0)[2]));}}

/* k8059 in k8050 in quotify-proc2559 in a8045 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_fcall f_8061(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,0,2)))){
C_save_and_reclaim_args((void *)trf_8061,2,t0,t1);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8064,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_i_pairp(t2);
t5=C_i_not(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8073,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_8073(t7,t5);}
else{
t7=C_i_car(t2);
t8=C_eqp(lf[23],t7);
if(C_truep(C_i_not(t8))){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8089,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8093,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:711: r */
t11=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[133];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t9=t6;
f_8073(t9,C_SCHEME_FALSE);}}}

/* k8062 in k8059 in k8050 in quotify-proc2559 in a8045 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_8064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8064,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8071 in k8059 in k8050 in quotify-proc2559 in a8045 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_fcall f_8073(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,5)))){
C_save_and_reclaim_args((void *)trf_8073,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
/* chicken-syntax.scm:712: chicken.syntax#syntax-error */
t2=*((C_word*)lf[58]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[131];
av2[3]=lf[132];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k8087 in k8059 in k8050 in quotify-proc2559 in a8045 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_8089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8089,2,av);}
t2=((C_word*)t0)[2];
f_8073(t2,C_i_not(t1));}

/* k8091 in k8059 in k8050 in quotify-proc2559 in a8045 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_8093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8093,2,av);}
t2=C_u_i_car(((C_word*)t0)[2]);
/* chicken-syntax.scm:711: c */
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

/* k8134 in a8045 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_8136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8136,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[135],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8146 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_ccall f_8148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8148,2,av);}
/* chicken-syntax.scm:686: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[138];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8149 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_ccall f_8150(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8150,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8154,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:691: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[138];
av2[3]=t2;
av2[4]=lf[139];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8152 in a8149 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_ccall f_8154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_8154,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8157,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:692: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[44];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8155 in k8152 in a8149 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_8157(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8157,2,av);}
a=C_alloc(15);
t2=t1;
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[23],C_SCHEME_END_OF_LIST,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8176,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:695: r */
t7=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[136];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k8174 in k8155 in k8152 in a8149 in k5598 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_8176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_8176,2,av);}
a=C_alloc(27);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,t1,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,3,lf[23],((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[28],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k8190 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_8192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8192,2,av);}
/* chicken-syntax.scm:677: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[140];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8193 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_8194(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8194,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8198,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:682: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[140];
av2[3]=t2;
av2[4]=lf[143];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8196 in a8193 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_ccall f_8198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_8198,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8201,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* chicken-syntax.scm:683: chicken.internal#check-for-multiple-bindings */
t4=*((C_word*)lf[141]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=((C_word*)t0)[2];
av2[4]=lf[142];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k8199 in k8196 in a8193 in k5595 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_ccall f_8201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8201,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[50],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k8212 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_8214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8214,2,av);}
/* chicken-syntax.scm:658: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[144];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8215 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_8216(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8216,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8220,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:662: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[144];
av2[3]=t2;
av2[4]=lf[148];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8218 in a8215 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_8220(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_8220,2,av);}
a=C_alloc(18);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=C_i_check_list_2(t3,lf[67]);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8234,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8436,a[2]=t9,a[3]=t14,a[4]=t10,a[5]=((C_word)li53),tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_8436(t16,t12,t3);}

/* k8232 in k8218 in a8215 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_ccall f_8234(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_8234,2,av);}
a=C_alloc(18);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8240,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8402,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li52),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_8402(t11,t7,((C_word*)t0)[4]);}

/* k8238 in k8232 in k8218 in a8215 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_ccall f_8240(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_8240,2,av);}
a=C_alloc(19);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[2],lf[145]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8262,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=t5,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8366,a[2]=t10,a[3]=((C_word)li51),tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_8366(t12,t8,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k8260 in k8238 in k8232 in k8218 in a8215 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_8262(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_8262,2,av);}
a=C_alloc(14);
t2=C_i_check_list_2(t1,lf[67]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8268,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8332,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=((C_word*)t0)[7],a[5]=((C_word)li49),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_8332(t7,t3,t1);}

/* k8266 in k8260 in k8238 in k8232 in k8218 in a8215 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_8268(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_8268,2,av);}
a=C_alloc(22);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8272,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=*((C_word*)lf[146]+1);
t9=C_i_check_list_2(((C_word*)t0)[3],lf[67]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8282,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8284,a[2]=t6,a[3]=t12,a[4]=t8,a[5]=t7,a[6]=((C_word)li48),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_8284(t14,t10,((C_word*)t0)[5],((C_word*)t0)[3]);}

/* k8270 in k8266 in k8260 in k8238 in k8232 in k8218 in a8215 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_8272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8272,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[37],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8280 in k8266 in k8260 in k8238 in k8232 in k8218 in a8215 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_8282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8282,2,av);}
/* chicken-syntax.scm:318: ##sys#append */
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

/* map-loop2507 in k8266 in k8260 in k8238 in k8232 in k8218 in a8215 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_fcall f_8284(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_8284,4,t0,t1,t2,t3);}
a=C_alloc(7);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8313,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* chicken-syntax.scm:674: g2513 */
t9=((C_word*)t0)[4];{
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
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k8311 in map-loop2507 in k8266 in k8260 in k8238 in k8232 in k8218 in a8215 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_8313(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8313,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=C_slot(((C_word*)t0)[4],C_fix(1));
t7=((C_word*)((C_word*)t0)[5])[1];
f_8284(t7,((C_word*)t0)[6],t5,t6);}

/* map-loop2459 in k8260 in k8238 in k8232 in k8218 in a8215 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_fcall f_8332(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8332,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,t3,lf[147]);
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

/* foldl2482 in k8238 in k8232 in k8218 in a8215 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_fcall f_8366(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,5)))){
C_save_and_reclaim_args((void *)trf_8366,4,t0,t1,t2,t3);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8396,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_slot(t2,C_fix(0));
t8=t6;
t9=t3;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8390,a[2]=t8,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8392,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:670: ##sys#decompose-lambda-list */
t12=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t12;
av2[1]=t10;
av2[2]=t7;
av2[3]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(4,av2);}}
else{
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k8388 in foldl2482 in k8238 in k8232 in k8218 in a8215 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_8390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8390,2,av);}
/* chicken-syntax.scm:670: ##sys#append */
t2=*((C_word*)lf[55]+1);{
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

/* a8391 in foldl2482 in k8238 in k8232 in k8218 in a8215 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_8392(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8392,5,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k8394 in foldl2482 in k8238 in k8232 in k8218 in a8215 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_8396(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8396,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8366(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* map-loop2430 in k8232 in k8218 in a8215 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_fcall f_8402(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8402,3,t0,t1,t2);}
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

/* map-loop2404 in k8218 in a8215 in k5592 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_fcall f_8436(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8436,3,t0,t1,t2);}
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

/* k8470 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in ... */
static void C_ccall f_8472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8472,2,av);}
/* chicken-syntax.scm:643: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[149];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8473 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in ... */
static void C_ccall f_8474(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8474,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8478,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:647: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[149];
av2[3]=t2;
av2[4]=lf[151];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8476 in a8473 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_8478(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_8478,2,av);}
a=C_alloc(5);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8486,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:650: r */
t8=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[150];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k8484 in k8476 in a8473 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_8486(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8486,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8491,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t4,a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_8491(t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* fold in k8484 in k8476 in a8473 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_fcall f_8491(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_8491,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[37],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8516,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=t2;
t8=C_u_i_cdr(t7);
/* chicken-syntax.scm:655: fold */
t10=t6;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}

/* k8514 in fold in k8484 in k8476 in a8473 in k5589 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_ccall f_8516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_8516,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8524 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_ccall f_8526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8526,2,av);}
/* chicken-syntax.scm:589: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[150];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_ccall f_8528(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8528,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8532,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:593: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[150];
av2[3]=t2;
av2[4]=lf[152];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in ... */
static void C_ccall f_8532(C_word c,C_word *av){
C_word tmp;
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_8532,2,av);}
a=C_alloc(33);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8538,a[2]=t8,a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8566,a[2]=t10,a[3]=((C_word)li58),tmp=(C_word)a,a+=4,tmp);
t13=C_set_block_item(t8,0,t11);
t14=C_set_block_item(t10,0,t12);
t15=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t16=t15;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=((C_word*)t17)[1];
t19=C_i_check_list_2(t3,lf[67]);
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8614,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t10,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8967,a[2]=t17,a[3]=t22,a[4]=t18,a[5]=((C_word)li68),tmp=(C_word)a,a+=6,tmp));
t24=((C_word*)t22)[1];
f_8967(t24,t20,t3);}

/* append*2210 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_8538(C_word c,C_word *av){
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
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_8538,4,av);}
a=C_alloc(4);
t4=C_i_pairp(t2);
if(C_truep(C_i_not(t4))){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8559,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=t2;
t9=C_u_i_cdr(t8);
/* chicken-syntax.scm:600: append* */
t10=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av;
av2[0]=t10;
av2[1]=t7;
av2[2]=t9;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}

/* k8557 in append*2210 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_8559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8559,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map*2211 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_8566(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8566,4,av);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_pairp(t3);
if(C_truep(C_i_not(t4))){
/* chicken-syntax.scm:603: proc */
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8589,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=C_i_car(t3);
/* chicken-syntax.scm:604: proc */
t7=t2;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}}

/* k8587 in map*2211 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_8589(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8589,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8593,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* chicken-syntax.scm:604: map* */
t6=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k8591 in k8587 in map*2211 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_ccall f_8593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8593,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_8614(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_8614,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8617,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8929,a[2]=t5,a[3]=((C_word*)t0)[7],a[4]=((C_word)li67),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_8929(t7,t3,t2,C_SCHEME_END_OF_LIST);}

/* k8615 in k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_8617(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_8617,2,av);}
a=C_alloc(26);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8621,a[2]=((C_word*)t0)[2],a[3]=((C_word)li59),tmp=(C_word)a,a+=4,tmp);
t8=C_i_check_list_2(t2,lf[67]);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8639,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8895,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li66),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_8895(t13,t9,t2);}

/* g2271 in k8615 in k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_fcall f_8621(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_8621,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8629,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8633,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:615: chicken.base#gensym */
t5=*((C_word*)lf[56]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k8627 in g2271 in k8615 in k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_ccall f_8629(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8629,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8631 in g2271 in k8615 in k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_ccall f_8633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8633,2,av);}
/* chicken-syntax.scm:615: r */
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

/* k8637 in k8615 in k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_ccall f_8639(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_8639,2,av);}
a=C_alloc(20);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8640,a[2]=t2,a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8651,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8851,a[2]=t6,a[3]=t3,a[4]=((C_word*)t0)[7],a[5]=((C_word)li65),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_8851(t8,t4,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* lookup in k8637 in k8615 in k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_ccall f_8640(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8640,3,av);}
t3=C_i_assq(t2,((C_word*)t0)[2]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_cdr(t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k8649 in k8637 in k8615 in k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_ccall f_8651(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_8651,2,av);}
a=C_alloc(21);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8666,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8817,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li64),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_8817(t11,t7,((C_word*)t0)[7]);}

/* k8664 in k8649 in k8637 in k8615 in k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_8666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8666,2,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8668,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word)li63),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_8668(t5,((C_word*)t0)[5],((C_word*)t0)[6],t1,((C_word*)t0)[7]);}

/* fold in k8664 in k8649 in k8637 in k8615 in k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_fcall f_8668(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,0,3)))){
C_save_and_reclaim_args((void *)trf_8668,5,t0,t1,t2,t3,t4);}
a=C_alloc(22);
if(C_truep(C_i_nullp(t2))){
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8687,a[2]=((C_word*)t0)[2],a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(((C_word*)t0)[3],lf[67]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8701,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8703,a[2]=t7,a[3]=t13,a[4]=t9,a[5]=t8,a[6]=((C_word)li62),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_8703(t15,t11,((C_word*)t0)[3]);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8741,a[2]=t4,a[3]=t3,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=C_i_car(t4);
if(C_truep(C_i_pairp(t6))){
t7=C_i_cdar(t4);
t8=t5;
f_8741(t8,C_i_nullp(t7));}
else{
t7=t5;
f_8741(t7,C_SCHEME_FALSE);}}}

/* g2322 in fold in k8664 in k8649 in k8637 in k8615 in k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_fcall f_8687(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_8687,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8695,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:630: lookup */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
f_8640(3,av2);}}

/* k8693 in g2322 in fold in k8664 in k8649 in k8637 in k8615 in k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_8695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8695,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8699 in fold in k8664 in k8649 in k8637 in k8615 in k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_8701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8701,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[37],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop2316 in fold in k8664 in k8649 in k8637 in k8615 in k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_fcall f_8703(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8703,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8728,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:630: g2322 */
t5=((C_word*)t0)[4];
f_8687(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8726 in map-loop2316 in fold in k8664 in k8649 in k8637 in k8615 in k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_8728(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8728,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8703(t6,((C_word*)t0)[5],t5);}

/* k8739 in fold in k8664 in k8649 in k8637 in k8615 in k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_fcall f_8741(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_8741,2,t0,t1);}
a=C_alloc(14);
if(C_truep(t1)){
t2=C_i_caar(((C_word*)t0)[2]);
t3=C_i_car(((C_word*)t0)[3]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8752,a[2]=((C_word*)t0)[4],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_i_cdr(((C_word*)t0)[5]);
t9=((C_word*)t0)[3];
t10=C_u_i_cdr(t9);
t11=((C_word*)t0)[2];
t12=C_u_i_cdr(t11);
/* chicken-syntax.scm:635: fold */
t13=((C_word*)((C_word*)t0)[6])[1];
f_8668(t13,t7,t8,t10,t12);}
else{
t2=C_i_car(((C_word*)t0)[3]);
t3=C_a_i_list(&a,3,lf[23],C_SCHEME_END_OF_LIST,t2);
t4=t3;
t5=((C_word*)t0)[2];
t6=C_u_i_car(t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8789,a[2]=t6,a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t8=C_i_cdr(((C_word*)t0)[5]);
t9=((C_word*)t0)[3];
t10=C_u_i_cdr(t9);
t11=((C_word*)t0)[2];
t12=C_u_i_cdr(t11);
/* chicken-syntax.scm:641: fold */
t13=((C_word*)((C_word*)t0)[6])[1];
f_8668(t13,t7,t8,t10,t12);}}

/* k8750 in k8739 in fold in k8664 in k8649 in k8637 in k8615 in k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_8752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_8752,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[37],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8787 in k8739 in fold in k8664 in k8649 in k8637 in k8615 in k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_8789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_8789,2,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,3,lf[23],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[28],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop2351 in k8649 in k8637 in k8615 in k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_fcall f_8817(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8817,3,t0,t1,t2);}
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

/* loop in k8637 in k8615 in k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_fcall f_8851(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_8851,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
/* chicken-syntax.scm:619: scheme#reverse */
t4=*((C_word*)lf[57]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=C_i_car(t2);
t5=C_i_pairp(t4);
if(C_truep(C_i_not(t5))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8882,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:622: lookup */
t7=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
f_8640(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8889,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:623: map* */
t7=((C_word*)((C_word*)t0)[4])[1];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}}

/* k8880 in loop in k8637 in k8615 in k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_8882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8882,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* chicken-syntax.scm:624: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_8851(t5,((C_word*)t0)[5],t4,t2);}

/* k8887 in loop in k8637 in k8615 in k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_8889(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8889,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* chicken-syntax.scm:624: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_8851(t5,((C_word*)t0)[5],t4,t2);}

/* map-loop2265 in k8615 in k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_fcall f_8895(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8895,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8920,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:615: g2271 */
t5=((C_word*)t0)[4];
f_8621(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8918 in map-loop2265 in k8615 in k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_ccall f_8920(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8920,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8895(t6,((C_word*)t0)[5],t5);}

/* loop in k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_fcall f_8929(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_8929,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8942,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(t4))){
/* chicken-syntax.scm:611: scheme#append */
t6=*((C_word*)lf[16]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
if(C_truep(C_i_pairp(t4))){
/* chicken-syntax.scm:612: append* */
t6=((C_word*)((C_word*)t0)[3])[1];{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t6=C_a_i_cons(&a,2,t4,t3);
t7=t2;
t8=C_u_i_cdr(t7);
/* chicken-syntax.scm:614: loop */
t10=t1;
t11=t8;
t12=t6;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}}}

/* k8940 in loop in k8612 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_ccall f_8942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8942,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* chicken-syntax.scm:614: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_8929(t4,((C_word*)t0)[4],t3,t1);}

/* map-loop2227 in k8530 in a8527 in k5586 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_fcall f_8967(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8967,3,t0,t1,t2);}
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

/* k9001 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in ... */
static void C_ccall f_9003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9003,2,av);}
/* chicken-syntax.scm:572: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[153];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9004 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in ... */
static void C_ccall f_9005(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9005,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9009,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:576: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[153];
av2[3]=t2;
av2[4]=lf[159];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9007 in a9004 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_ccall f_9009(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9009,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9016,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9020,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9042,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:578: ##sys#decompose-lambda-list */
t6=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k9014 in k9007 in a9004 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in ... */
static void C_ccall f_9016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9016,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[29],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9018 in k9007 in a9004 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in ... */
static void C_ccall f_9020(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9020,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9028,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(((C_word*)t0)[3]);
t5=C_i_caddr(((C_word*)t0)[3]);
/* chicken-syntax.scm:587: ##sys#expand-multiple-values-assignment */
t6=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k9026 in k9018 in k9007 in a9004 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_9028(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_9028,2,av);}
a=C_alloc(3);
t2=C_a_i_list(&a,1,t1);
/* chicken-syntax.scm:318: ##sys#append */
t3=*((C_word*)lf[55]+1);{
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

/* a9041 in k9007 in a9004 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in ... */
static void C_ccall f_9042(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_9042,5,av);}
a=C_alloc(10);
t5=t2;
t6=C_i_check_list_2(t5,lf[154]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9061,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9108,a[2]=t9,a[3]=((C_word)li71),tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_9108(t11,t7,t5);}

/* k9046 in for-each-loop2156 in a9041 in k9007 in a9004 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_9048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9048,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9055,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:583: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k9053 in k9046 in for-each-loop2156 in a9041 in k9007 in a9004 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_ccall f_9055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9055,2,av);}
/* chicken-syntax.scm:583: ##sys#register-export */
t2=*((C_word*)lf[156]+1);{
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

/* k9059 in a9041 in k9007 in a9004 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_9061(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_9061,2,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=((C_word*)t0)[2];
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9074,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li70),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_9074(t10,((C_word*)t0)[3],t6);}

/* map-loop2166 in k9059 in a9041 in k9007 in a9004 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_fcall f_9074(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_9074,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,lf[155],t3);
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

/* for-each-loop2156 in a9041 in k9007 in a9004 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_fcall f_9108(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_9108,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9118,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9048,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:582: ##sys#get */
t7=*((C_word*)lf[157]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
av2[3]=lf[158];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9116 in for-each-loop2156 in a9041 in k9007 in a9004 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_9118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9118,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_9108(t3,((C_word*)t0)[4],t2);}

/* k9131 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in ... */
static void C_ccall f_9133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9133,2,av);}
/* chicken-syntax.scm:564: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[160];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9134 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in ... */
static void C_ccall f_9135(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9135,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9139,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:568: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[160];
av2[3]=t2;
av2[4]=lf[161];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9137 in a9134 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in ... */
static void C_ccall f_9139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9139,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
/* chicken-syntax.scm:569: ##sys#expand-multiple-values-assignment */
t4=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k9152 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in ... */
static void C_ccall f_9154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9154,2,av);}
/* chicken-syntax.scm:555: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[162];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9155 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in ... */
static void C_ccall f_9156(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9156,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9160,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:559: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[162];
av2[3]=t2;
av2[4]=lf[164];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9158 in a9155 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in ... */
static void C_ccall f_9160(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_9160,2,av);}
a=C_alloc(18);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,lf[163]);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,lf[29],t6);
t8=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_list(&a,4,lf[36],t2,t3,t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k9180 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in ... */
static void C_ccall f_9182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9182,2,av);}
/* chicken-syntax.scm:547: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[165];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9183 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in ... */
static void C_ccall f_9184(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9184,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9188,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:551: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[165];
av2[3]=t2;
av2[4]=lf[166];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9186 in a9183 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in ... */
static void C_ccall f_9188(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_9188,2,av);}
a=C_alloc(12);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=C_a_i_cons(&a,2,lf[29],t5);
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_list(&a,3,lf[36],t2,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k9204 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in ... */
static void C_ccall f_9206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9206,2,av);}
/* chicken-syntax.scm:534: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[167];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9207 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in ... */
static void C_ccall f_9208(C_word c,C_word *av){
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
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_9208,5,av);}
a=C_alloc(22);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9217,a[2]=t3,a[3]=t4,a[4]=((C_word)li79),tmp=(C_word)a,a+=5,tmp);
t10=C_i_cdr(t2);
t11=C_i_check_list_2(t10,lf[67]);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9252,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9254,a[2]=t7,a[3]=t14,a[4]=t9,a[5]=t8,a[6]=((C_word)li80),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_9254(t16,t12,t10);}

/* g2081 in a9207 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in ... */
static void C_fcall f_9217(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,8)))){
C_save_and_reclaim_args((void *)trf_9217,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9223,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li77),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9229,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:541: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a9222 in g2081 in a9207 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in ... */
static void C_ccall f_9223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9223,2,av);}
/* chicken-syntax.scm:541: ##sys#decompose-import */
t2=*((C_word*)lf[168]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=lf[48];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* a9228 in g2081 in a9207 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in ... */
static void C_ccall f_9229(C_word c,C_word *av){
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
C_word t10;
C_word *a;
if(c!=8) C_bad_argc_2(c,8,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9229,8,av);}
a=C_alloc(4);
t8=t3;
if(C_truep(C_i_not(t8))){
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=lf[169];
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9243,a[2]=t1,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:544: chicken.internal#module-requirement */
t10=*((C_word*)lf[171]+1);{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}}

/* k9241 in a9228 in g2081 in a9207 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in ... */
static void C_ccall f_9243(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9243,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[170],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9250 in a9207 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in ... */
static void C_ccall f_9252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9252,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[29],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop2075 in a9207 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in ... */
static void C_fcall f_9254(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9254,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9279,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:540: g2081 */
t5=((C_word*)t0)[4];
f_9217(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9277 in map-loop2075 in a9207 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in ... */
static void C_ccall f_9279(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9279,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9254(t6,((C_word*)t0)[5],t5);}

/* k9288 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in ... */
static void C_ccall f_9290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9290,2,av);}
/* chicken-syntax.scm:480: ##sys#extend-macro-environment */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[172];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in k5505 in ... */
static void C_ccall f_9292(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9292,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9311,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:488: ##sys#check-syntax */
t6=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[172];
av2[3]=t2;
av2[4]=lf[180];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in k5508 in ... */
static void C_ccall f_9311(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_9311,2,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9319,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:491: r */
t8=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[179];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in k5511 in ... */
static void C_ccall f_9319(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_9319,2,av);}
a=C_alloc(20);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[2],lf[67]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9328,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10184,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li99),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_10184(t12,t8,((C_word*)t0)[2]);}

/* k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in k5514 in ... */
static void C_ccall f_9328(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_9328,2,av);}
a=C_alloc(20);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9334,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10150,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li98),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10150(t11,t7,((C_word*)t0)[6]);}

/* k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5517 in ... */
static void C_ccall f_9334(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_9334,2,av);}
a=C_alloc(26);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9338,a[2]=((C_word*)t0)[2],a[3]=((C_word)li82),tmp=(C_word)a,a+=4,tmp);
t8=C_i_check_list_2(((C_word*)t0)[3],lf[67]);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9352,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10116,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li97),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_10116(t13,t9,((C_word*)t0)[3]);}

/* g1666 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in ... */
static void C_fcall f_9338(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9338,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9346,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_symbolp(t2))){
/* chicken-syntax.scm:486: chicken.base#gensym */
t4=*((C_word*)lf[56]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* chicken-syntax.scm:487: chicken.base#gensym */
t4=*((C_word*)lf[56]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[173];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k9344 in g1666 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_ccall f_9346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9346,2,av);}
/* chicken-syntax.scm:494: r */
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

/* k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in ... */
static void C_ccall f_9352(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_9352,2,av);}
a=C_alloc(27);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9356,a[2]=((C_word*)t0)[2],a[3]=((C_word)li83),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9367,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10082,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t6,a[6]=((C_word)li96),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_10082(t12,t8,((C_word*)t0)[7]);}

/* g1694 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_fcall f_9356(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9356,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9364,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:495: chicken.base#gensym */
t3=*((C_word*)lf[56]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[174];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k9362 in g1694 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in ... */
static void C_ccall f_9364(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9364,2,av);}
/* chicken-syntax.scm:495: r */
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

/* k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_ccall f_9367(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_9367,2,av);}
a=C_alloc(27);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9371,a[2]=((C_word*)t0)[2],a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9382,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10048,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t6,a[6]=((C_word)li95),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_10048(t12,t8,((C_word*)t0)[8]);}

/* g1722 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in ... */
static void C_fcall f_9371(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9371,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9379,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:496: chicken.base#gensym */
t3=*((C_word*)lf[56]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[44];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k9377 in g1722 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_9379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9379,2,av);}
/* chicken-syntax.scm:496: r */
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

/* k9380 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in ... */
static void C_ccall f_9382(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_9382,2,av);}
a=C_alloc(22);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[2],lf[67]);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9395,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10000,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li94),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_10000(t12,t8,((C_word*)t0)[2],((C_word*)t0)[8]);}

/* k9393 in k9380 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_9395(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_9395,2,av);}
a=C_alloc(22);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[2],lf[67]);
t8=C_i_check_list_2(((C_word*)t0)[3],lf[67]);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9412,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t2,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9952,a[2]=t5,a[3]=t11,a[4]=t6,a[5]=((C_word)li93),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_9952(t13,t9,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9410 in k9393 in k9380 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_9412(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_9412,2,av);}
a=C_alloc(23);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9423,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9904,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li92),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_9904(t11,t7,((C_word*)t0)[7],((C_word*)t0)[7]);}

/* k9421 in k9410 in k9393 in k9380 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_ccall f_9423(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(51,c,5)))){
C_save_and_reclaim((void *)f_9423,2,av);}
a=C_alloc(51);
t2=t1;
t3=C_a_i_list(&a,4,lf[175],lf[176],C_SCHEME_TRUE,C_SCHEME_TRUE);
t4=C_a_i_list(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9674,a[2]=((C_word*)t0)[2],a[3]=((C_word)li85),tmp=(C_word)a,a+=4,tmp);
t12=C_i_check_list_2(((C_word*)t0)[3],lf[67]);
t13=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9692,a[2]=((C_word*)t0)[4],a[3]=t6,a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[2],tmp=(C_word)a,a+=12,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9834,a[2]=t11,a[3]=t9,a[4]=t15,a[5]=t10,a[6]=((C_word)li91),tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_9834(t17,t13,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[3]);}

/* k9469 in k9694 in k9690 in k9421 in k9410 in k9393 in k9380 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_9471(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,4)))){
C_save_and_reclaim((void *)f_9471,2,av);}
a=C_alloc(28);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9475,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9487,a[2]=t3,a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9549,a[2]=t6,a[3]=t10,a[4]=t7,a[5]=((C_word)li87),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_9549(t12,t8,((C_word*)t0)[11],((C_word*)t0)[9]);}

/* k9473 in k9469 in k9694 in k9690 in k9421 in k9410 in k9393 in k9380 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_9475(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(63,c,1)))){
C_save_and_reclaim((void *)f_9475,2,av);}
a=C_alloc(63);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[37],t2);
t4=C_a_i_list(&a,3,lf[23],C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_list(&a,4,lf[177],((C_word*)t0)[3],((C_word*)t0)[4],t4);
t6=C_a_i_list(&a,3,lf[37],((C_word*)t0)[5],t5);
t7=C_a_i_list(&a,3,lf[37],((C_word*)t0)[6],t6);
t8=C_a_i_list(&a,3,lf[37],((C_word*)t0)[7],t7);
t9=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_a_i_list(&a,3,lf[37],((C_word*)t0)[9],t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* k9485 in k9469 in k9694 in k9690 in k9421 in k9410 in k9393 in k9380 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_9487(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_9487,2,av);}
a=C_alloc(17);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9499,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9501,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li86),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_9501(t11,t7,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k9497 in k9485 in k9469 in k9694 in k9690 in k9421 in k9410 in k9393 in k9380 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_9499(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9499,2,av);}
/* chicken-syntax.scm:318: ##sys#append */
t2=*((C_word*)lf[55]+1);{
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

/* map-loop2031 in k9485 in k9469 in k9694 in k9690 in k9421 in k9410 in k9393 in k9380 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_fcall f_9501(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_9501,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[178],t6,t7);
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

/* map-loop1995 in k9469 in k9694 in k9690 in k9421 in k9410 in k9393 in k9380 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_fcall f_9549(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_9549,4,t0,t1,t2,t3);}
a=C_alloc(15);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,4,t6,t7,C_SCHEME_FALSE,C_SCHEME_TRUE);
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

/* map-loop1953 in k9694 in k9690 in k9421 in k9410 in k9393 in k9380 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_fcall f_9597(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_9597,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9604,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_9604(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_9604(t6,C_SCHEME_FALSE);}}

/* k9602 in map-loop1953 in k9694 in k9690 in k9421 in k9410 in k9393 in k9380 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_fcall f_9604(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_9604,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(0));
t3=C_slot(((C_word*)t0)[3],C_fix(0));
t4=C_a_i_list(&a,1,t2);
t5=C_a_i_list(&a,2,t3,t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=C_slot(((C_word*)t0)[2],C_fix(1));
t10=C_slot(((C_word*)t0)[5],C_fix(1));
t11=C_slot(((C_word*)t0)[3],C_fix(1));
t12=((C_word*)((C_word*)t0)[6])[1];
f_9597(t12,((C_word*)t0)[7],t9,t10,t11);}
else{
t2=((C_word*)t0)[7];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[8],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* g1845 in k9421 in k9410 in k9393 in k9380 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static C_word C_fcall f_9674(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;{}
t4=C_a_i_list(&a,4,t1,t2,C_SCHEME_TRUE,C_SCHEME_FALSE);
t5=C_a_i_list(&a,4,lf[36],((C_word*)t0)[2],t4,t2);
return(C_a_i_list(&a,2,t3,t5));}

/* k9690 in k9421 in k9410 in k9393 in k9380 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_ccall f_9692(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_9692,2,av);}
a=C_alloc(31);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9696,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9712,a[2]=t3,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9786,a[2]=t6,a[3]=t10,a[4]=t7,a[5]=((C_word)li90),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_9786(t12,t8,((C_word*)t0)[10],((C_word*)t0)[8]);}

/* k9694 in k9690 in k9421 in k9410 in k9393 in k9380 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_9696(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(46,c,5)))){
C_save_and_reclaim((void *)f_9696,2,av);}
a=C_alloc(46);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[37],t2);
t4=C_a_i_list(&a,3,lf[23],C_SCHEME_END_OF_LIST,t3);
t5=t4;
t6=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t7=C_a_i_cons(&a,2,lf[23],t6);
t8=t7;
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9471,a[2]=t5,a[3]=t8,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9597,a[2]=t11,a[3]=t15,a[4]=t12,a[5]=((C_word)li88),tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_9597(t17,t13,((C_word*)t0)[11],((C_word*)t0)[9],((C_word*)t0)[10]);}

/* k9710 in k9690 in k9421 in k9410 in k9393 in k9380 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_9712(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_9712,2,av);}
a=C_alloc(21);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9716,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9728,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9738,a[2]=t6,a[3]=t10,a[4]=t7,a[5]=((C_word)li89),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_9738(t12,t8,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k9714 in k9710 in k9690 in k9421 in k9410 in k9393 in k9380 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_9716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9716,2,av);}
/* chicken-syntax.scm:318: ##sys#append */
t2=*((C_word*)lf[55]+1);{
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

/* k9726 in k9710 in k9690 in k9421 in k9410 in k9393 in k9380 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_9728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_9728,2,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,3,lf[178],((C_word*)t0)[2],C_SCHEME_FALSE);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:318: ##sys#append */
t4=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* map-loop1917 in k9710 in k9690 in k9421 in k9410 in k9393 in k9380 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_fcall f_9738(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_9738,4,t0,t1,t2,t3);}
a=C_alloc(15);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,4,t6,t7,C_SCHEME_FALSE,C_SCHEME_TRUE);
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

/* map-loop1881 in k9690 in k9421 in k9410 in k9393 in k9380 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_fcall f_9786(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_9786,4,t0,t1,t2,t3);}
a=C_alloc(15);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,1,t6);
t9=C_a_i_list(&a,3,lf[178],t7,t8);
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

/* map-loop1839 in k9421 in k9410 in k9393 in k9380 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_fcall f_9834(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_9834,5,t0,t1,t2,t3,t4);}
a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9841,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t1,a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_9841(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_9841(t6,C_SCHEME_FALSE);}}

/* k9839 in map-loop1839 in k9421 in k9410 in k9393 in k9380 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_fcall f_9841(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,0,4)))){
C_save_and_reclaim_args((void *)trf_9841,2,t0,t1);}
a=C_alloc(33);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(0));
t3=C_slot(((C_word*)t0)[3],C_fix(0));
t4=C_slot(((C_word*)t0)[4],C_fix(0));
t5=(
  /* chicken-syntax.scm:512: g1845 */
  f_9674(C_a_i(&a,30),((C_word*)t0)[5],t2,t3,t4)
);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[6])+1,t6);
t9=C_slot(((C_word*)t0)[2],C_fix(1));
t10=C_slot(((C_word*)t0)[3],C_fix(1));
t11=C_slot(((C_word*)t0)[4],C_fix(1));
t12=((C_word*)((C_word*)t0)[7])[1];
f_9834(t12,((C_word*)t0)[8],t9,t10,t11);}
else{
t2=((C_word*)t0)[8];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[9],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* map-loop1808 in k9410 in k9393 in k9380 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_fcall f_9904(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_9904,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
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

/* map-loop1777 in k9393 in k9380 in k9365 in k9350 in k9332 in k9326 in k9317 in k9309 in a9291 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_fcall f_9952(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_9952,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
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

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("chicken-syntax"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_chicken_2dsyntax_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(2807))){
C_save(t1);
C_rereclaim2(2807*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,285);
lf[0]=C_h_intern(&lf[0],14, C_text("chicken-syntax"));
lf[2]=C_h_intern(&lf[2],39, C_text("\003syschicken.condition-macro-environment"));
lf[3]=C_h_intern(&lf[3],34, C_text("\003syschicken.type-macro-environment"));
lf[4]=C_h_intern(&lf[4],36, C_text("\003syschicken.syntax-macro-environment"));
lf[5]=C_h_intern(&lf[5],39, C_text("chicken.syntax#define-values-definition"));
lf[6]=C_h_intern(&lf[6],34, C_text("\003syschicken.base-macro-environment"));
lf[7]=C_h_intern(&lf[7],34, C_text("\003syschicken.time-macro-environment"));
lf[8]=C_h_intern(&lf[8],29, C_text("\003syschicken-macro-environment"));
lf[9]=C_h_intern(&lf[9],34, C_text("chicken.platform#register-feature!"));
lf[10]=C_h_intern(&lf[10],6, C_text("srfi-8"));
lf[11]=C_h_intern(&lf[11],7, C_text("srfi-11"));
lf[12]=C_h_intern(&lf[12],7, C_text("srfi-15"));
lf[13]=C_h_intern(&lf[13],7, C_text("srfi-16"));
lf[14]=C_h_intern(&lf[14],7, C_text("srfi-26"));
lf[15]=C_h_intern(&lf[15],7, C_text("srfi-31"));
lf[16]=C_h_intern(&lf[16],13, C_text("scheme#append"));
lf[17]=C_h_intern(&lf[17],29, C_text("chicken.internal#macro-subset"));
lf[18]=C_h_intern(&lf[18],29, C_text("\003sysdefault-macro-environment"));
lf[19]=C_h_intern(&lf[19],21, C_text("\003sysmacro-environment"));
lf[20]=C_h_intern(&lf[20],28, C_text("\003sysextend-macro-environment"));
lf[21]=C_h_intern(&lf[21],4, C_text("time"));
lf[22]=C_h_intern(&lf[22],15, C_text("\003sysstart-timer"));
lf[23]=C_h_intern(&lf[23],11, C_text("\004corelambda"));
lf[24]=C_h_intern(&lf[24],14, C_text("\003sysstop-timer"));
lf[25]=C_h_intern(&lf[25],17, C_text("\003sysdisplay-times"));
lf[26]=C_h_intern(&lf[26],9, C_text("\003sysapply"));
lf[27]=C_h_intern(&lf[27],10, C_text("\003sysvalues"));
lf[28]=C_h_intern(&lf[28],20, C_text("\003syscall-with-values"));
lf[29]=C_h_intern(&lf[29],10, C_text("\004corebegin"));
lf[30]=C_h_intern(&lf[30],1, C_text("t"));
lf[31]=C_h_intern(&lf[31],18, C_text("\003syser-transformer"));
lf[32]=C_h_intern(&lf[32],6, C_text("assert"));
lf[33]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020assertion failed"));
lf[34]=C_h_intern(&lf[34],10, C_text("\004corecheck"));
lf[35]=C_h_intern(&lf[35],9, C_text("\003syserror"));
lf[36]=C_h_intern(&lf[36],7, C_text("\004coreif"));
lf[37]=C_h_intern(&lf[37],8, C_text("\004corelet"));
lf[38]=C_h_intern(&lf[38],10, C_text("\004corequote"));
lf[39]=C_h_intern(&lf[39],27, C_text("chicken.syntax#strip-syntax"));
lf[40]=C_h_intern(&lf[40],20, C_text("scheme#string-append"));
lf[41]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001("));
lf[42]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002) "));
lf[43]=C_h_intern(&lf[43],30, C_text("chicken.syntax#get-line-number"));
lf[44]=C_h_intern(&lf[44],3, C_text("tmp"));
lf[45]=C_h_intern(&lf[45],16, C_text("\003syscheck-syntax"));
lf[46]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001"));
lf[47]=C_h_intern(&lf[47],17, C_text("require-extension"));
lf[48]=C_h_intern(&lf[48],6, C_text("import"));
lf[49]=C_h_intern(&lf[49],3, C_text("rec"));
lf[50]=C_h_intern(&lf[50],12, C_text("\004coreletrec\052"));
lf[51]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_"));
lf[52]=C_h_intern(&lf[52],5, C_text("apply"));
lf[53]=C_h_intern(&lf[53],12, C_text("scheme#apply"));
lf[54]=C_h_intern(&lf[54],4, C_text("cute"));
lf[55]=C_h_intern(&lf[55],10, C_text("\003sysappend"));
lf[56]=C_h_intern(&lf[56],19, C_text("chicken.base#gensym"));
lf[57]=C_h_intern(&lf[57],14, C_text("scheme#reverse"));
lf[58]=C_h_intern(&lf[58],27, C_text("chicken.syntax#syntax-error"));
lf[59]=C_decode_literal(C_heaptop,C_text("\376B\000\000+tail patterns after <...> are not supported"));
lf[60]=C_decode_literal(C_heaptop,C_text("\376B\000\000\047you need to supply at least a procedure"));
lf[61]=C_h_intern(&lf[61],5, C_text("<...>"));
lf[62]=C_h_intern(&lf[62],2, C_text("<>"));
lf[63]=C_h_intern(&lf[63],3, C_text("cut"));
lf[64]=C_decode_literal(C_heaptop,C_text("\376B\000\000+tail patterns after <...> are not supported"));
lf[65]=C_decode_literal(C_heaptop,C_text("\376B\000\000\047you need to supply at least a procedure"));
lf[66]=C_h_intern(&lf[66],18, C_text("define-record-type"));
lf[67]=C_h_intern(&lf[67],3, C_text("map"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[69]=C_h_intern(&lf[69],18, C_text("\003sysmake-structure"));
lf[70]=C_h_intern(&lf[70],14, C_text("\003sysstructure\077"));
lf[71]=C_h_intern(&lf[71],19, C_text("\003syscheck-structure"));
lf[72]=C_h_intern(&lf[72],13, C_text("\003sysblock-ref"));
lf[73]=C_h_intern(&lf[73],10, C_text("\003syssetter"));
lf[74]=C_h_intern(&lf[74],14, C_text("\003sysblock-set!"));
lf[75]=C_h_intern(&lf[75],6, C_text("setter"));
lf[76]=C_h_intern(&lf[76],1, C_text("y"));
lf[77]=C_h_intern(&lf[77],1, C_text("x"));
lf[78]=C_h_intern(&lf[78],31, C_text("chicken.base#getter-with-setter"));
lf[79]=C_h_intern(&lf[79],6, C_text("define"));
lf[80]=C_h_intern(&lf[80],26, C_text("chicken.base#symbol-append"));
lf[81]=C_h_intern(&lf[81],1, C_text("#"));
lf[82]=C_h_intern(&lf[82],15, C_text("\003sysmodule-name"));
lf[83]=C_h_intern(&lf[83],18, C_text("\003syscurrent-module"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\000\000\000\002\376\001\000\000\010variable\376\377\001\000\000\000\001\376\003\000\000\002\376\001\000\000\010variable\376\001\000"
"\000\001_"));
lf[85]=C_h_intern(&lf[85],21, C_text("define-record-printer"));
lf[86]=C_h_intern(&lf[86],27, C_text("\003sysregister-record-printer"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001"));
lf[88]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_"));
lf[90]=C_h_intern(&lf[90],2, C_text(">="));
lf[91]=C_h_intern(&lf[91],9, C_text("scheme#>="));
lf[92]=C_h_intern(&lf[92],3, C_text("car"));
lf[93]=C_h_intern(&lf[93],10, C_text("scheme#car"));
lf[94]=C_h_intern(&lf[94],3, C_text("cdr"));
lf[95]=C_h_intern(&lf[95],10, C_text("scheme#cdr"));
lf[96]=C_h_intern(&lf[96],3, C_text("eq\077"));
lf[97]=C_h_intern(&lf[97],10, C_text("scheme#eq\077"));
lf[98]=C_h_intern(&lf[98],6, C_text("length"));
lf[99]=C_h_intern(&lf[99],13, C_text("scheme#length"));
lf[100]=C_h_intern(&lf[100],11, C_text("case-lambda"));
lf[101]=C_h_intern(&lf[101],5, C_text("foldr"));
lf[102]=C_h_intern(&lf[102],11, C_text("lambda-list"));
lf[103]=C_h_intern(&lf[103],25, C_text("\003sysdecompose-lambda-list"));
lf[104]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\012\004corecheck\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\003syserror\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\004coreimmutable\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\012\004corequote\376\003\000\000\002\376B\000\0000no matching clause in call to \047case-lambda\047 form\376\377\016\376"
"\377\016\376\377\016\376\377\016"));
lf[105]=C_h_intern(&lf[105],4, C_text("lvar"));
lf[106]=C_h_intern(&lf[106],4, C_text("rvar"));
lf[107]=C_h_intern(&lf[107],10, C_text("scheme#min"));
lf[108]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_"));
lf[109]=C_h_intern(&lf[109],5, C_text("null\077"));
lf[110]=C_h_intern(&lf[110],12, C_text("scheme#null\077"));
lf[111]=C_h_intern(&lf[111],14, C_text("let-optionals\052"));
lf[112]=C_h_intern(&lf[112],4, C_text("tmp2"));
lf[113]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\001\000\000\001_"));
lf[114]=C_h_intern(&lf[114],8, C_text("optional"));
lf[115]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001"));
lf[116]=C_h_intern(&lf[116],13, C_text("let-optionals"));
lf[117]=C_h_intern(&lf[117],21, C_text("scheme#string->symbol"));
lf[118]=C_h_intern(&lf[118],21, C_text("scheme#symbol->string"));
lf[119]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001%"));
lf[120]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004def-"));
lf[121]=C_h_intern(&lf[121],4, C_text("let\052"));
lf[122]=C_h_intern(&lf[122],6, C_text("_%rest"));
lf[123]=C_h_intern(&lf[123],4, C_text("body"));
lf[124]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001"));
lf[125]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000"));
lf[126]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_"));
lf[127]=C_h_intern(&lf[127],8, C_text("and-let\052"));
lf[128]=C_h_intern(&lf[128],6, C_text("symbol"));
lf[129]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016"));
lf[130]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000\376\001\000\000\001_"));
lf[131]=C_h_intern(&lf[131],13, C_text("define-inline"));
lf[132]=C_decode_literal(C_heaptop,C_text("\376B\000\000\052invalid substitution form - must be lambda"));
lf[133]=C_h_intern(&lf[133],6, C_text("lambda"));
lf[134]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001"));
lf[135]=C_h_intern(&lf[135],18, C_text("\004coredefine-inline"));
lf[136]=C_h_intern(&lf[136],8, C_text("list-ref"));
lf[137]=C_h_intern(&lf[137],15, C_text("scheme#list-ref"));
lf[138]=C_h_intern(&lf[138],9, C_text("nth-value"));
lf[139]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016"));
lf[140]=C_h_intern(&lf[140],7, C_text("letrec\052"));
lf[141]=C_h_intern(&lf[141],44, C_text("chicken.internal#check-for-multiple-bindings"));
lf[142]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007letrec\052"));
lf[143]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001"));
lf[144]=C_h_intern(&lf[144],13, C_text("letrec-values"));
lf[145]=C_h_intern(&lf[145],5, C_text("foldl"));
lf[146]=C_h_intern(&lf[146],37, C_text("\003sysexpand-multiple-values-assignment"));
lf[147]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[148]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\013lambda-list\376\001\000\000\001_\376\377\001\000\000\000\000\376\001\000\000\001_"));
lf[149]=C_h_intern(&lf[149],11, C_text("let\052-values"));
lf[150]=C_h_intern(&lf[150],10, C_text("let-values"));
lf[151]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\001\000\000\001_"));
lf[152]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\001\000\000\001_"));
lf[153]=C_h_intern(&lf[153],13, C_text("define-values"));
lf[154]=C_h_intern(&lf[154],8, C_text("for-each"));
lf[155]=C_h_intern(&lf[155],31, C_text("\004coreensure-toplevel-definition"));
lf[156]=C_h_intern(&lf[156],19, C_text("\003sysregister-export"));
lf[157]=C_h_intern(&lf[157],7, C_text("\003sysget"));
lf[158]=C_h_intern(&lf[158],16, C_text("\004coremacro-alias"));
lf[159]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\013lambda-list\376\003\000\000\002\376\001\000\000\001_\376\377\016"));
lf[160]=C_h_intern(&lf[160],11, C_text("set!-values"));
lf[161]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\013lambda-list\376\003\000\000\002\376\001\000\000\001_\376\377\016"));
lf[162]=C_h_intern(&lf[162],6, C_text("unless"));
lf[163]=C_h_intern(&lf[163],14, C_text("\004coreundefined"));
lf[164]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002"));
lf[165]=C_h_intern(&lf[165],4, C_text("when"));
lf[166]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002"));
lf[167]=C_h_intern(&lf[167],15, C_text("require-library"));
lf[168]=C_h_intern(&lf[168],20, C_text("\003sysdecompose-import"));
lf[169]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[170]=C_h_intern(&lf[170],12, C_text("\004corerequire"));
lf[171]=C_h_intern(&lf[171],35, C_text("chicken.internal#module-requirement"));
lf[172]=C_h_intern(&lf[172],12, C_text("parameterize"));
lf[173]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011parameter"));
lf[174]=C_h_intern(&lf[174],5, C_text("saved"));
lf[175]=C_h_intern(&lf[175],8, C_text("\004corethe"));
lf[176]=C_h_intern(&lf[176],7, C_text("boolean"));
lf[177]=C_h_intern(&lf[177],16, C_text("\003sysdynamic-wind"));
lf[178]=C_h_intern(&lf[178],9, C_text("\004coreset!"));
lf[179]=C_h_intern(&lf[179],8, C_text("convert\077"));
lf[180]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002"));
lf[181]=C_h_intern(&lf[181],9, C_text("fluid-let"));
lf[182]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\001\000\000\001_"));
lf[183]=C_h_intern(&lf[183],16, C_text("include-relative"));
lf[184]=C_h_intern(&lf[184],12, C_text("\004coreinclude"));
lf[185]=C_h_intern(&lf[185],27, C_text("\003syscurrent-source-filename"));
lf[186]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006string\376\377\016"));
lf[187]=C_h_intern(&lf[187],7, C_text("include"));
lf[188]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006string\376\377\016"));
lf[189]=C_h_intern(&lf[189],11, C_text("delay-force"));
lf[190]=C_h_intern(&lf[190],16, C_text("\003sysmake-promise"));
lf[191]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016"));
lf[192]=C_h_intern(&lf[192],7, C_text("declare"));
lf[193]=C_h_intern(&lf[193],12, C_text("\004coredeclare"));
lf[194]=C_h_intern(&lf[194],7, C_text("receive"));
lf[195]=C_h_intern(&lf[195],8, C_text("\003syslist"));
lf[196]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\013lambda-list\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001"));
lf[197]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000"));
lf[198]=C_h_intern(&lf[198],13, C_text("define-record"));
lf[199]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032invalid slot specification"));
lf[200]=C_h_intern(&lf[200],3, C_text("val"));
lf[201]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001-"));
lf[202]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001-"));
lf[203]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-set!"));
lf[204]=C_h_intern(&lf[204],17, C_text("\003sysstring-append"));
lf[205]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\077"));
lf[206]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005make-"));
lf[207]=C_h_intern(&lf[207],19, C_text("chicken.base#setter"));
lf[208]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\001\000\000\001_"));
lf[209]=C_h_intern(&lf[209],15, C_text("define-constant"));
lf[210]=C_h_intern(&lf[210],20, C_text("\004coredefine-constant"));
lf[211]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016"));
lf[212]=C_h_intern(&lf[212],19, C_text("let-compiler-syntax"));
lf[213]=C_h_intern(&lf[213],24, C_text("\004corelet-compiler-syntax"));
lf[214]=C_h_intern(&lf[214],51, C_text("chicken.internal.syntax-rules#syntax-rules-mismatch"));
lf[215]=C_h_intern(&lf[215],5, C_text("\003sys+"));
lf[216]=C_h_intern(&lf[216],5, C_text("\003sys="));
lf[217]=C_h_intern(&lf[217],6, C_text("\003sys>="));
lf[218]=C_h_intern(&lf[218],10, C_text("\003syslength"));
lf[219]=C_h_intern(&lf[219],9, C_text("\003syslist\077"));
lf[220]=C_h_intern(&lf[220],22, C_text("define-compiler-syntax"));
lf[221]=C_h_intern(&lf[221],27, C_text("\004coredefine-compiler-syntax"));
lf[222]=C_h_intern(&lf[222],17, C_text("define-for-syntax"));
lf[223]=C_h_intern(&lf[223],16, C_text("begin-for-syntax"));
lf[224]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_"));
lf[225]=C_h_intern(&lf[225],24, C_text("\004coreelaborationtimeonly"));
lf[226]=C_h_intern(&lf[226],28, C_text("\003sysregister-meta-expression"));
lf[227]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000"));
lf[228]=C_h_intern(&lf[228],6, C_text("syntax"));
lf[229]=C_h_intern(&lf[229],11, C_text("\004coresyntax"));
lf[230]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016"));
lf[231]=C_h_intern(&lf[231],11, C_text("define-type"));
lf[232]=C_h_intern(&lf[232],10, C_text("\000compiling"));
lf[233]=C_h_intern(&lf[233],12, C_text("\003sysfeatures"));
lf[234]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[235]=C_h_intern(&lf[235],26, C_text("\010compilertype-abbreviation"));
lf[236]=C_h_intern(&lf[236],16, C_text("\003sysput/restore!"));
lf[237]=C_h_intern(&lf[237],52, C_text("chicken.compiler.scrutinizer#check-and-validate-type"));
lf[238]=C_h_intern(&lf[238],5, C_text("quote"));
lf[239]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\377\016"));
lf[240]=C_h_intern(&lf[240],17, C_text("compiler-typecase"));
lf[241]=C_h_intern(&lf[241],4, C_text("else"));
lf[242]=C_h_intern(&lf[242],13, C_text("\004coretypecase"));
lf[243]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001\376\377\001\000\000\000\001"));
lf[244]=C_h_intern(&lf[244],21, C_text("define-specialization"));
lf[245]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[246]=C_h_intern(&lf[246],6, C_text("inline"));
lf[247]=C_h_intern(&lf[247],4, C_text("hide"));
lf[248]=C_h_intern(&lf[248],8, C_text("\003sysput!"));
lf[249]=C_h_intern(&lf[249],30, C_text("\010compilerlocal-specializations"));
lf[250]=C_h_intern(&lf[250],1, C_text("\052"));
lf[251]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027invalid argument syntax"));
lf[252]=C_h_intern(&lf[252],13, C_text("\003sysglobalize"));
lf[253]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000"
"\000\376\377\001\000\000\000\001"));
lf[254]=C_h_intern(&lf[254],6, C_text("assume"));
lf[255]=C_h_intern(&lf[255],3, C_text("the"));
lf[256]=C_h_intern(&lf[256],9, C_text("\003sysmap-n"));
lf[257]=C_h_intern(&lf[257],3, C_text("let"));
lf[258]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016"));
lf[259]=C_h_intern(&lf[259],1, C_text(":"));
lf[260]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[261]=C_h_intern(&lf[261],42, C_text("chicken.compiler.scrutinizer#validate-type"));
lf[262]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023invalid type syntax"));
lf[263]=C_h_intern(&lf[263],4, C_text("type"));
lf[264]=C_h_intern(&lf[264],9, C_text("predicate"));
lf[265]=C_h_intern(&lf[265],4, C_text("pure"));
lf[266]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_"));
lf[267]=C_h_intern(&lf[267],4, C_text("memv"));
lf[268]=C_h_intern(&lf[268],11, C_text("scheme#memv"));
lf[269]=C_h_intern(&lf[269],14, C_text("condition-case"));
lf[270]=C_h_intern(&lf[270],9, C_text("condition"));
lf[271]=C_h_intern(&lf[271],8, C_text("\003sysslot"));
lf[272]=C_h_intern(&lf[272],24, C_text("chicken.condition#signal"));
lf[273]=C_h_intern(&lf[273],4, C_text("cond"));
lf[274]=C_h_intern(&lf[274],17, C_text("handle-exceptions"));
lf[275]=C_h_intern(&lf[275],3, C_text("and"));
lf[276]=C_h_intern(&lf[276],4, C_text("kvar"));
lf[277]=C_h_intern(&lf[277],5, C_text("exvar"));
lf[278]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_"));
lf[279]=C_h_intern(&lf[279],30, C_text("call-with-current-continuation"));
lf[280]=C_h_intern(&lf[280],37, C_text("scheme#call-with-current-continuation"));
lf[281]=C_h_intern(&lf[281],40, C_text("chicken.condition#with-exception-handler"));
lf[282]=C_h_intern(&lf[282],4, C_text("args"));
lf[283]=C_h_intern(&lf[283],1, C_text("k"));
lf[284]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_"));
C_register_lf2(lf,285,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4197,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[664] = {
{C_text("f_10000:chicken_2dsyntax_2escm"),(void*)f_10000},
{C_text("f_10048:chicken_2dsyntax_2escm"),(void*)f_10048},
{C_text("f_10073:chicken_2dsyntax_2escm"),(void*)f_10073},
{C_text("f_10082:chicken_2dsyntax_2escm"),(void*)f_10082},
{C_text("f_10107:chicken_2dsyntax_2escm"),(void*)f_10107},
{C_text("f_10116:chicken_2dsyntax_2escm"),(void*)f_10116},
{C_text("f_10141:chicken_2dsyntax_2escm"),(void*)f_10141},
{C_text("f_10150:chicken_2dsyntax_2escm"),(void*)f_10150},
{C_text("f_10184:chicken_2dsyntax_2escm"),(void*)f_10184},
{C_text("f_10220:chicken_2dsyntax_2escm"),(void*)f_10220},
{C_text("f_10222:chicken_2dsyntax_2escm"),(void*)f_10222},
{C_text("f_10226:chicken_2dsyntax_2escm"),(void*)f_10226},
{C_text("f_10240:chicken_2dsyntax_2escm"),(void*)f_10240},
{C_text("f_10244:chicken_2dsyntax_2escm"),(void*)f_10244},
{C_text("f_10252:chicken_2dsyntax_2escm"),(void*)f_10252},
{C_text("f_10255:chicken_2dsyntax_2escm"),(void*)f_10255},
{C_text("f_10259:chicken_2dsyntax_2escm"),(void*)f_10259},
{C_text("f_10267:chicken_2dsyntax_2escm"),(void*)f_10267},
{C_text("f_10270:chicken_2dsyntax_2escm"),(void*)f_10270},
{C_text("f_10277:chicken_2dsyntax_2escm"),(void*)f_10277},
{C_text("f_10301:chicken_2dsyntax_2escm"),(void*)f_10301},
{C_text("f_10313:chicken_2dsyntax_2escm"),(void*)f_10313},
{C_text("f_10317:chicken_2dsyntax_2escm"),(void*)f_10317},
{C_text("f_10329:chicken_2dsyntax_2escm"),(void*)f_10329},
{C_text("f_10339:chicken_2dsyntax_2escm"),(void*)f_10339},
{C_text("f_10387:chicken_2dsyntax_2escm"),(void*)f_10387},
{C_text("f_10445:chicken_2dsyntax_2escm"),(void*)f_10445},
{C_text("f_10460:chicken_2dsyntax_2escm"),(void*)f_10460},
{C_text("f_10464:chicken_2dsyntax_2escm"),(void*)f_10464},
{C_text("f_10476:chicken_2dsyntax_2escm"),(void*)f_10476},
{C_text("f_10486:chicken_2dsyntax_2escm"),(void*)f_10486},
{C_text("f_10534:chicken_2dsyntax_2escm"),(void*)f_10534},
{C_text("f_10590:chicken_2dsyntax_2escm"),(void*)f_10590},
{C_text("f_10599:chicken_2dsyntax_2escm"),(void*)f_10599},
{C_text("f_10606:chicken_2dsyntax_2escm"),(void*)f_10606},
{C_text("f_10615:chicken_2dsyntax_2escm"),(void*)f_10615},
{C_text("f_10617:chicken_2dsyntax_2escm"),(void*)f_10617},
{C_text("f_10667:chicken_2dsyntax_2escm"),(void*)f_10667},
{C_text("f_10681:chicken_2dsyntax_2escm"),(void*)f_10681},
{C_text("f_10687:chicken_2dsyntax_2escm"),(void*)f_10687},
{C_text("f_10735:chicken_2dsyntax_2escm"),(void*)f_10735},
{C_text("f_10769:chicken_2dsyntax_2escm"),(void*)f_10769},
{C_text("f_10794:chicken_2dsyntax_2escm"),(void*)f_10794},
{C_text("f_10803:chicken_2dsyntax_2escm"),(void*)f_10803},
{C_text("f_10828:chicken_2dsyntax_2escm"),(void*)f_10828},
{C_text("f_10837:chicken_2dsyntax_2escm"),(void*)f_10837},
{C_text("f_10873:chicken_2dsyntax_2escm"),(void*)f_10873},
{C_text("f_10875:chicken_2dsyntax_2escm"),(void*)f_10875},
{C_text("f_10879:chicken_2dsyntax_2escm"),(void*)f_10879},
{C_text("f_10890:chicken_2dsyntax_2escm"),(void*)f_10890},
{C_text("f_10892:chicken_2dsyntax_2escm"),(void*)f_10892},
{C_text("f_10896:chicken_2dsyntax_2escm"),(void*)f_10896},
{C_text("f_10907:chicken_2dsyntax_2escm"),(void*)f_10907},
{C_text("f_10909:chicken_2dsyntax_2escm"),(void*)f_10909},
{C_text("f_10913:chicken_2dsyntax_2escm"),(void*)f_10913},
{C_text("f_10928:chicken_2dsyntax_2escm"),(void*)f_10928},
{C_text("f_10930:chicken_2dsyntax_2escm"),(void*)f_10930},
{C_text("f_10942:chicken_2dsyntax_2escm"),(void*)f_10942},
{C_text("f_10944:chicken_2dsyntax_2escm"),(void*)f_10944},
{C_text("f_10948:chicken_2dsyntax_2escm"),(void*)f_10948},
{C_text("f_10970:chicken_2dsyntax_2escm"),(void*)f_10970},
{C_text("f_10985:chicken_2dsyntax_2escm"),(void*)f_10985},
{C_text("f_11035:chicken_2dsyntax_2escm"),(void*)f_11035},
{C_text("f_11037:chicken_2dsyntax_2escm"),(void*)f_11037},
{C_text("f_11041:chicken_2dsyntax_2escm"),(void*)f_11041},
{C_text("f_11047:chicken_2dsyntax_2escm"),(void*)f_11047},
{C_text("f_11050:chicken_2dsyntax_2escm"),(void*)f_11050},
{C_text("f_11053:chicken_2dsyntax_2escm"),(void*)f_11053},
{C_text("f_11059:chicken_2dsyntax_2escm"),(void*)f_11059},
{C_text("f_11062:chicken_2dsyntax_2escm"),(void*)f_11062},
{C_text("f_11065:chicken_2dsyntax_2escm"),(void*)f_11065},
{C_text("f_11069:chicken_2dsyntax_2escm"),(void*)f_11069},
{C_text("f_11097:chicken_2dsyntax_2escm"),(void*)f_11097},
{C_text("f_11129:chicken_2dsyntax_2escm"),(void*)f_11129},
{C_text("f_11160:chicken_2dsyntax_2escm"),(void*)f_11160},
{C_text("f_11162:chicken_2dsyntax_2escm"),(void*)f_11162},
{C_text("f_11178:chicken_2dsyntax_2escm"),(void*)f_11178},
{C_text("f_11181:chicken_2dsyntax_2escm"),(void*)f_11181},
{C_text("f_11184:chicken_2dsyntax_2escm"),(void*)f_11184},
{C_text("f_11198:chicken_2dsyntax_2escm"),(void*)f_11198},
{C_text("f_11210:chicken_2dsyntax_2escm"),(void*)f_11210},
{C_text("f_11214:chicken_2dsyntax_2escm"),(void*)f_11214},
{C_text("f_11307:chicken_2dsyntax_2escm"),(void*)f_11307},
{C_text("f_11311:chicken_2dsyntax_2escm"),(void*)f_11311},
{C_text("f_11326:chicken_2dsyntax_2escm"),(void*)f_11326},
{C_text("f_11346:chicken_2dsyntax_2escm"),(void*)f_11346},
{C_text("f_11352:chicken_2dsyntax_2escm"),(void*)f_11352},
{C_text("f_11372:chicken_2dsyntax_2escm"),(void*)f_11372},
{C_text("f_11380:chicken_2dsyntax_2escm"),(void*)f_11380},
{C_text("f_11405:chicken_2dsyntax_2escm"),(void*)f_11405},
{C_text("f_11415:chicken_2dsyntax_2escm"),(void*)f_11415},
{C_text("f_11422:chicken_2dsyntax_2escm"),(void*)f_11422},
{C_text("f_11426:chicken_2dsyntax_2escm"),(void*)f_11426},
{C_text("f_11430:chicken_2dsyntax_2escm"),(void*)f_11430},
{C_text("f_11432:chicken_2dsyntax_2escm"),(void*)f_11432},
{C_text("f_11436:chicken_2dsyntax_2escm"),(void*)f_11436},
{C_text("f_11447:chicken_2dsyntax_2escm"),(void*)f_11447},
{C_text("f_11449:chicken_2dsyntax_2escm"),(void*)f_11449},
{C_text("f_11459:chicken_2dsyntax_2escm"),(void*)f_11459},
{C_text("f_11472:chicken_2dsyntax_2escm"),(void*)f_11472},
{C_text("f_11488:chicken_2dsyntax_2escm"),(void*)f_11488},
{C_text("f_11494:chicken_2dsyntax_2escm"),(void*)f_11494},
{C_text("f_11497:chicken_2dsyntax_2escm"),(void*)f_11497},
{C_text("f_11503:chicken_2dsyntax_2escm"),(void*)f_11503},
{C_text("f_11512:chicken_2dsyntax_2escm"),(void*)f_11512},
{C_text("f_11519:chicken_2dsyntax_2escm"),(void*)f_11519},
{C_text("f_11533:chicken_2dsyntax_2escm"),(void*)f_11533},
{C_text("f_11544:chicken_2dsyntax_2escm"),(void*)f_11544},
{C_text("f_11547:chicken_2dsyntax_2escm"),(void*)f_11547},
{C_text("f_11553:chicken_2dsyntax_2escm"),(void*)f_11553},
{C_text("f_11562:chicken_2dsyntax_2escm"),(void*)f_11562},
{C_text("f_11569:chicken_2dsyntax_2escm"),(void*)f_11569},
{C_text("f_11583:chicken_2dsyntax_2escm"),(void*)f_11583},
{C_text("f_11595:chicken_2dsyntax_2escm"),(void*)f_11595},
{C_text("f_11597:chicken_2dsyntax_2escm"),(void*)f_11597},
{C_text("f_11607:chicken_2dsyntax_2escm"),(void*)f_11607},
{C_text("f_11617:chicken_2dsyntax_2escm"),(void*)f_11617},
{C_text("f_11631:chicken_2dsyntax_2escm"),(void*)f_11631},
{C_text("f_11644:chicken_2dsyntax_2escm"),(void*)f_11644},
{C_text("f_11692:chicken_2dsyntax_2escm"),(void*)f_11692},
{C_text("f_11694:chicken_2dsyntax_2escm"),(void*)f_11694},
{C_text("f_11698:chicken_2dsyntax_2escm"),(void*)f_11698},
{C_text("f_11705:chicken_2dsyntax_2escm"),(void*)f_11705},
{C_text("f_11713:chicken_2dsyntax_2escm"),(void*)f_11713},
{C_text("f_11721:chicken_2dsyntax_2escm"),(void*)f_11721},
{C_text("f_11723:chicken_2dsyntax_2escm"),(void*)f_11723},
{C_text("f_11727:chicken_2dsyntax_2escm"),(void*)f_11727},
{C_text("f_11730:chicken_2dsyntax_2escm"),(void*)f_11730},
{C_text("f_11751:chicken_2dsyntax_2escm"),(void*)f_11751},
{C_text("f_11753:chicken_2dsyntax_2escm"),(void*)f_11753},
{C_text("f_11757:chicken_2dsyntax_2escm"),(void*)f_11757},
{C_text("f_11768:chicken_2dsyntax_2escm"),(void*)f_11768},
{C_text("f_11770:chicken_2dsyntax_2escm"),(void*)f_11770},
{C_text("f_11774:chicken_2dsyntax_2escm"),(void*)f_11774},
{C_text("f_11783:chicken_2dsyntax_2escm"),(void*)f_11783},
{C_text("f_11786:chicken_2dsyntax_2escm"),(void*)f_11786},
{C_text("f_11789:chicken_2dsyntax_2escm"),(void*)f_11789},
{C_text("f_11812:chicken_2dsyntax_2escm"),(void*)f_11812},
{C_text("f_11828:chicken_2dsyntax_2escm"),(void*)f_11828},
{C_text("f_11830:chicken_2dsyntax_2escm"),(void*)f_11830},
{C_text("f_11834:chicken_2dsyntax_2escm"),(void*)f_11834},
{C_text("f_11840:chicken_2dsyntax_2escm"),(void*)f_11840},
{C_text("f_11843:chicken_2dsyntax_2escm"),(void*)f_11843},
{C_text("f_11867:chicken_2dsyntax_2escm"),(void*)f_11867},
{C_text("f_11871:chicken_2dsyntax_2escm"),(void*)f_11871},
{C_text("f_11878:chicken_2dsyntax_2escm"),(void*)f_11878},
{C_text("f_11905:chicken_2dsyntax_2escm"),(void*)f_11905},
{C_text("f_11907:chicken_2dsyntax_2escm"),(void*)f_11907},
{C_text("f_11932:chicken_2dsyntax_2escm"),(void*)f_11932},
{C_text("f_11951:chicken_2dsyntax_2escm"),(void*)f_11951},
{C_text("f_11953:chicken_2dsyntax_2escm"),(void*)f_11953},
{C_text("f_11963:chicken_2dsyntax_2escm"),(void*)f_11963},
{C_text("f_11972:chicken_2dsyntax_2escm"),(void*)f_11972},
{C_text("f_11976:chicken_2dsyntax_2escm"),(void*)f_11976},
{C_text("f_11979:chicken_2dsyntax_2escm"),(void*)f_11979},
{C_text("f_11982:chicken_2dsyntax_2escm"),(void*)f_11982},
{C_text("f_11985:chicken_2dsyntax_2escm"),(void*)f_11985},
{C_text("f_11993:chicken_2dsyntax_2escm"),(void*)f_11993},
{C_text("f_12003:chicken_2dsyntax_2escm"),(void*)f_12003},
{C_text("f_12006:chicken_2dsyntax_2escm"),(void*)f_12006},
{C_text("f_12012:chicken_2dsyntax_2escm"),(void*)f_12012},
{C_text("f_12047:chicken_2dsyntax_2escm"),(void*)f_12047},
{C_text("f_12049:chicken_2dsyntax_2escm"),(void*)f_12049},
{C_text("f_12107:chicken_2dsyntax_2escm"),(void*)f_12107},
{C_text("f_12111:chicken_2dsyntax_2escm"),(void*)f_12111},
{C_text("f_12144:chicken_2dsyntax_2escm"),(void*)f_12144},
{C_text("f_12146:chicken_2dsyntax_2escm"),(void*)f_12146},
{C_text("f_12171:chicken_2dsyntax_2escm"),(void*)f_12171},
{C_text("f_12188:chicken_2dsyntax_2escm"),(void*)f_12188},
{C_text("f_12190:chicken_2dsyntax_2escm"),(void*)f_12190},
{C_text("f_12208:chicken_2dsyntax_2escm"),(void*)f_12208},
{C_text("f_12244:chicken_2dsyntax_2escm"),(void*)f_12244},
{C_text("f_12261:chicken_2dsyntax_2escm"),(void*)f_12261},
{C_text("f_12318:chicken_2dsyntax_2escm"),(void*)f_12318},
{C_text("f_12320:chicken_2dsyntax_2escm"),(void*)f_12320},
{C_text("f_12330:chicken_2dsyntax_2escm"),(void*)f_12330},
{C_text("f_12347:chicken_2dsyntax_2escm"),(void*)f_12347},
{C_text("f_12368:chicken_2dsyntax_2escm"),(void*)f_12368},
{C_text("f_12378:chicken_2dsyntax_2escm"),(void*)f_12378},
{C_text("f_12386:chicken_2dsyntax_2escm"),(void*)f_12386},
{C_text("f_12388:chicken_2dsyntax_2escm"),(void*)f_12388},
{C_text("f_12404:chicken_2dsyntax_2escm"),(void*)f_12404},
{C_text("f_12414:chicken_2dsyntax_2escm"),(void*)f_12414},
{C_text("f_12448:chicken_2dsyntax_2escm"),(void*)f_12448},
{C_text("f_12492:chicken_2dsyntax_2escm"),(void*)f_12492},
{C_text("f_12498:chicken_2dsyntax_2escm"),(void*)f_12498},
{C_text("f_12501:chicken_2dsyntax_2escm"),(void*)f_12501},
{C_text("f_12507:chicken_2dsyntax_2escm"),(void*)f_12507},
{C_text("f_12516:chicken_2dsyntax_2escm"),(void*)f_12516},
{C_text("f_12523:chicken_2dsyntax_2escm"),(void*)f_12523},
{C_text("f_12537:chicken_2dsyntax_2escm"),(void*)f_12537},
{C_text("f_12548:chicken_2dsyntax_2escm"),(void*)f_12548},
{C_text("f_12551:chicken_2dsyntax_2escm"),(void*)f_12551},
{C_text("f_12557:chicken_2dsyntax_2escm"),(void*)f_12557},
{C_text("f_12566:chicken_2dsyntax_2escm"),(void*)f_12566},
{C_text("f_12573:chicken_2dsyntax_2escm"),(void*)f_12573},
{C_text("f_12585:chicken_2dsyntax_2escm"),(void*)f_12585},
{C_text("f_12596:chicken_2dsyntax_2escm"),(void*)f_12596},
{C_text("f_12627:chicken_2dsyntax_2escm"),(void*)f_12627},
{C_text("f_12629:chicken_2dsyntax_2escm"),(void*)f_12629},
{C_text("f_12633:chicken_2dsyntax_2escm"),(void*)f_12633},
{C_text("f_12649:chicken_2dsyntax_2escm"),(void*)f_12649},
{C_text("f_12665:chicken_2dsyntax_2escm"),(void*)f_12665},
{C_text("f_12667:chicken_2dsyntax_2escm"),(void*)f_12667},
{C_text("f_12671:chicken_2dsyntax_2escm"),(void*)f_12671},
{C_text("f_12680:chicken_2dsyntax_2escm"),(void*)f_12680},
{C_text("f_12687:chicken_2dsyntax_2escm"),(void*)f_12687},
{C_text("f_12695:chicken_2dsyntax_2escm"),(void*)f_12695},
{C_text("f_12697:chicken_2dsyntax_2escm"),(void*)f_12697},
{C_text("f_12722:chicken_2dsyntax_2escm"),(void*)f_12722},
{C_text("f_12726:chicken_2dsyntax_2escm"),(void*)f_12726},
{C_text("f_12776:chicken_2dsyntax_2escm"),(void*)f_12776},
{C_text("f_12778:chicken_2dsyntax_2escm"),(void*)f_12778},
{C_text("f_12782:chicken_2dsyntax_2escm"),(void*)f_12782},
{C_text("f_12785:chicken_2dsyntax_2escm"),(void*)f_12785},
{C_text("f_12788:chicken_2dsyntax_2escm"),(void*)f_12788},
{C_text("f_12791:chicken_2dsyntax_2escm"),(void*)f_12791},
{C_text("f_12794:chicken_2dsyntax_2escm"),(void*)f_12794},
{C_text("f_12797:chicken_2dsyntax_2escm"),(void*)f_12797},
{C_text("f_12799:chicken_2dsyntax_2escm"),(void*)f_12799},
{C_text("f_12803:chicken_2dsyntax_2escm"),(void*)f_12803},
{C_text("f_12806:chicken_2dsyntax_2escm"),(void*)f_12806},
{C_text("f_12809:chicken_2dsyntax_2escm"),(void*)f_12809},
{C_text("f_12834:chicken_2dsyntax_2escm"),(void*)f_12834},
{C_text("f_12848:chicken_2dsyntax_2escm"),(void*)f_12848},
{C_text("f_12850:chicken_2dsyntax_2escm"),(void*)f_12850},
{C_text("f_12929:chicken_2dsyntax_2escm"),(void*)f_12929},
{C_text("f_12954:chicken_2dsyntax_2escm"),(void*)f_12954},
{C_text("f_12961:chicken_2dsyntax_2escm"),(void*)f_12961},
{C_text("f_12965:chicken_2dsyntax_2escm"),(void*)f_12965},
{C_text("f_12985:chicken_2dsyntax_2escm"),(void*)f_12985},
{C_text("f_13010:chicken_2dsyntax_2escm"),(void*)f_13010},
{C_text("f_13049:chicken_2dsyntax_2escm"),(void*)f_13049},
{C_text("f_13051:chicken_2dsyntax_2escm"),(void*)f_13051},
{C_text("f_13055:chicken_2dsyntax_2escm"),(void*)f_13055},
{C_text("f_13058:chicken_2dsyntax_2escm"),(void*)f_13058},
{C_text("f_13061:chicken_2dsyntax_2escm"),(void*)f_13061},
{C_text("f_13072:chicken_2dsyntax_2escm"),(void*)f_13072},
{C_text("f_4197:chicken_2dsyntax_2escm"),(void*)f_4197},
{C_text("f_4200:chicken_2dsyntax_2escm"),(void*)f_4200},
{C_text("f_4203:chicken_2dsyntax_2escm"),(void*)f_4203},
{C_text("f_4313:chicken_2dsyntax_2escm"),(void*)f_4313},
{C_text("f_4331:chicken_2dsyntax_2escm"),(void*)f_4331},
{C_text("f_4371:chicken_2dsyntax_2escm"),(void*)f_4371},
{C_text("f_4385:chicken_2dsyntax_2escm"),(void*)f_4385},
{C_text("f_5485:chicken_2dsyntax_2escm"),(void*)f_5485},
{C_text("f_5488:chicken_2dsyntax_2escm"),(void*)f_5488},
{C_text("f_5491:chicken_2dsyntax_2escm"),(void*)f_5491},
{C_text("f_5494:chicken_2dsyntax_2escm"),(void*)f_5494},
{C_text("f_5498:chicken_2dsyntax_2escm"),(void*)f_5498},
{C_text("f_5501:chicken_2dsyntax_2escm"),(void*)f_5501},
{C_text("f_5504:chicken_2dsyntax_2escm"),(void*)f_5504},
{C_text("f_5507:chicken_2dsyntax_2escm"),(void*)f_5507},
{C_text("f_5510:chicken_2dsyntax_2escm"),(void*)f_5510},
{C_text("f_5513:chicken_2dsyntax_2escm"),(void*)f_5513},
{C_text("f_5516:chicken_2dsyntax_2escm"),(void*)f_5516},
{C_text("f_5519:chicken_2dsyntax_2escm"),(void*)f_5519},
{C_text("f_5523:chicken_2dsyntax_2escm"),(void*)f_5523},
{C_text("f_5526:chicken_2dsyntax_2escm"),(void*)f_5526},
{C_text("f_5529:chicken_2dsyntax_2escm"),(void*)f_5529},
{C_text("f_5532:chicken_2dsyntax_2escm"),(void*)f_5532},
{C_text("f_5535:chicken_2dsyntax_2escm"),(void*)f_5535},
{C_text("f_5538:chicken_2dsyntax_2escm"),(void*)f_5538},
{C_text("f_5541:chicken_2dsyntax_2escm"),(void*)f_5541},
{C_text("f_5545:chicken_2dsyntax_2escm"),(void*)f_5545},
{C_text("f_5548:chicken_2dsyntax_2escm"),(void*)f_5548},
{C_text("f_5551:chicken_2dsyntax_2escm"),(void*)f_5551},
{C_text("f_5554:chicken_2dsyntax_2escm"),(void*)f_5554},
{C_text("f_5557:chicken_2dsyntax_2escm"),(void*)f_5557},
{C_text("f_5560:chicken_2dsyntax_2escm"),(void*)f_5560},
{C_text("f_5563:chicken_2dsyntax_2escm"),(void*)f_5563},
{C_text("f_5566:chicken_2dsyntax_2escm"),(void*)f_5566},
{C_text("f_5569:chicken_2dsyntax_2escm"),(void*)f_5569},
{C_text("f_5572:chicken_2dsyntax_2escm"),(void*)f_5572},
{C_text("f_5575:chicken_2dsyntax_2escm"),(void*)f_5575},
{C_text("f_5578:chicken_2dsyntax_2escm"),(void*)f_5578},
{C_text("f_5581:chicken_2dsyntax_2escm"),(void*)f_5581},
{C_text("f_5584:chicken_2dsyntax_2escm"),(void*)f_5584},
{C_text("f_5588:chicken_2dsyntax_2escm"),(void*)f_5588},
{C_text("f_5591:chicken_2dsyntax_2escm"),(void*)f_5591},
{C_text("f_5594:chicken_2dsyntax_2escm"),(void*)f_5594},
{C_text("f_5597:chicken_2dsyntax_2escm"),(void*)f_5597},
{C_text("f_5600:chicken_2dsyntax_2escm"),(void*)f_5600},
{C_text("f_5603:chicken_2dsyntax_2escm"),(void*)f_5603},
{C_text("f_5606:chicken_2dsyntax_2escm"),(void*)f_5606},
{C_text("f_5609:chicken_2dsyntax_2escm"),(void*)f_5609},
{C_text("f_5612:chicken_2dsyntax_2escm"),(void*)f_5612},
{C_text("f_5615:chicken_2dsyntax_2escm"),(void*)f_5615},
{C_text("f_5618:chicken_2dsyntax_2escm"),(void*)f_5618},
{C_text("f_5621:chicken_2dsyntax_2escm"),(void*)f_5621},
{C_text("f_5624:chicken_2dsyntax_2escm"),(void*)f_5624},
{C_text("f_5627:chicken_2dsyntax_2escm"),(void*)f_5627},
{C_text("f_5630:chicken_2dsyntax_2escm"),(void*)f_5630},
{C_text("f_5633:chicken_2dsyntax_2escm"),(void*)f_5633},
{C_text("f_5636:chicken_2dsyntax_2escm"),(void*)f_5636},
{C_text("f_5639:chicken_2dsyntax_2escm"),(void*)f_5639},
{C_text("f_5642:chicken_2dsyntax_2escm"),(void*)f_5642},
{C_text("f_5645:chicken_2dsyntax_2escm"),(void*)f_5645},
{C_text("f_5649:chicken_2dsyntax_2escm"),(void*)f_5649},
{C_text("f_5652:chicken_2dsyntax_2escm"),(void*)f_5652},
{C_text("f_5655:chicken_2dsyntax_2escm"),(void*)f_5655},
{C_text("f_5659:chicken_2dsyntax_2escm"),(void*)f_5659},
{C_text("f_5662:chicken_2dsyntax_2escm"),(void*)f_5662},
{C_text("f_5665:chicken_2dsyntax_2escm"),(void*)f_5665},
{C_text("f_5669:chicken_2dsyntax_2escm"),(void*)f_5669},
{C_text("f_5673:chicken_2dsyntax_2escm"),(void*)f_5673},
{C_text("f_5675:chicken_2dsyntax_2escm"),(void*)f_5675},
{C_text("f_5679:chicken_2dsyntax_2escm"),(void*)f_5679},
{C_text("f_5722:chicken_2dsyntax_2escm"),(void*)f_5722},
{C_text("f_5724:chicken_2dsyntax_2escm"),(void*)f_5724},
{C_text("f_5728:chicken_2dsyntax_2escm"),(void*)f_5728},
{C_text("f_5739:chicken_2dsyntax_2escm"),(void*)f_5739},
{C_text("f_5742:chicken_2dsyntax_2escm"),(void*)f_5742},
{C_text("f_5765:chicken_2dsyntax_2escm"),(void*)f_5765},
{C_text("f_5784:chicken_2dsyntax_2escm"),(void*)f_5784},
{C_text("f_5794:chicken_2dsyntax_2escm"),(void*)f_5794},
{C_text("f_5801:chicken_2dsyntax_2escm"),(void*)f_5801},
{C_text("f_5811:chicken_2dsyntax_2escm"),(void*)f_5811},
{C_text("f_5813:chicken_2dsyntax_2escm"),(void*)f_5813},
{C_text("f_5821:chicken_2dsyntax_2escm"),(void*)f_5821},
{C_text("f_5829:chicken_2dsyntax_2escm"),(void*)f_5829},
{C_text("f_5831:chicken_2dsyntax_2escm"),(void*)f_5831},
{C_text("f_5835:chicken_2dsyntax_2escm"),(void*)f_5835},
{C_text("f_5894:chicken_2dsyntax_2escm"),(void*)f_5894},
{C_text("f_5896:chicken_2dsyntax_2escm"),(void*)f_5896},
{C_text("f_5900:chicken_2dsyntax_2escm"),(void*)f_5900},
{C_text("f_5903:chicken_2dsyntax_2escm"),(void*)f_5903},
{C_text("f_5906:chicken_2dsyntax_2escm"),(void*)f_5906},
{C_text("f_5909:chicken_2dsyntax_2escm"),(void*)f_5909},
{C_text("f_5916:chicken_2dsyntax_2escm"),(void*)f_5916},
{C_text("f_5926:chicken_2dsyntax_2escm"),(void*)f_5926},
{C_text("f_5929:chicken_2dsyntax_2escm"),(void*)f_5929},
{C_text("f_5935:chicken_2dsyntax_2escm"),(void*)f_5935},
{C_text("f_5946:chicken_2dsyntax_2escm"),(void*)f_5946},
{C_text("f_5962:chicken_2dsyntax_2escm"),(void*)f_5962},
{C_text("f_5972:chicken_2dsyntax_2escm"),(void*)f_5972},
{C_text("f_5995:chicken_2dsyntax_2escm"),(void*)f_5995},
{C_text("f_5998:chicken_2dsyntax_2escm"),(void*)f_5998},
{C_text("f_6015:chicken_2dsyntax_2escm"),(void*)f_6015},
{C_text("f_6021:chicken_2dsyntax_2escm"),(void*)f_6021},
{C_text("f_6038:chicken_2dsyntax_2escm"),(void*)f_6038},
{C_text("f_6061:chicken_2dsyntax_2escm"),(void*)f_6061},
{C_text("f_6089:chicken_2dsyntax_2escm"),(void*)f_6089},
{C_text("f_6091:chicken_2dsyntax_2escm"),(void*)f_6091},
{C_text("f_6095:chicken_2dsyntax_2escm"),(void*)f_6095},
{C_text("f_6098:chicken_2dsyntax_2escm"),(void*)f_6098},
{C_text("f_6101:chicken_2dsyntax_2escm"),(void*)f_6101},
{C_text("f_6104:chicken_2dsyntax_2escm"),(void*)f_6104},
{C_text("f_6111:chicken_2dsyntax_2escm"),(void*)f_6111},
{C_text("f_6121:chicken_2dsyntax_2escm"),(void*)f_6121},
{C_text("f_6124:chicken_2dsyntax_2escm"),(void*)f_6124},
{C_text("f_6130:chicken_2dsyntax_2escm"),(void*)f_6130},
{C_text("f_6137:chicken_2dsyntax_2escm"),(void*)f_6137},
{C_text("f_6153:chicken_2dsyntax_2escm"),(void*)f_6153},
{C_text("f_6163:chicken_2dsyntax_2escm"),(void*)f_6163},
{C_text("f_6186:chicken_2dsyntax_2escm"),(void*)f_6186},
{C_text("f_6189:chicken_2dsyntax_2escm"),(void*)f_6189},
{C_text("f_6206:chicken_2dsyntax_2escm"),(void*)f_6206},
{C_text("f_6212:chicken_2dsyntax_2escm"),(void*)f_6212},
{C_text("f_6261:chicken_2dsyntax_2escm"),(void*)f_6261},
{C_text("f_6263:chicken_2dsyntax_2escm"),(void*)f_6263},
{C_text("f_6267:chicken_2dsyntax_2escm"),(void*)f_6267},
{C_text("f_6273:chicken_2dsyntax_2escm"),(void*)f_6273},
{C_text("f_6276:chicken_2dsyntax_2escm"),(void*)f_6276},
{C_text("f_6288:chicken_2dsyntax_2escm"),(void*)f_6288},
{C_text("f_6291:chicken_2dsyntax_2escm"),(void*)f_6291},
{C_text("f_6297:chicken_2dsyntax_2escm"),(void*)f_6297},
{C_text("f_6300:chicken_2dsyntax_2escm"),(void*)f_6300},
{C_text("f_6309:chicken_2dsyntax_2escm"),(void*)f_6309},
{C_text("f_6340:chicken_2dsyntax_2escm"),(void*)f_6340},
{C_text("f_6342:chicken_2dsyntax_2escm"),(void*)f_6342},
{C_text("f_6361:chicken_2dsyntax_2escm"),(void*)f_6361},
{C_text("f_6367:chicken_2dsyntax_2escm"),(void*)f_6367},
{C_text("f_6374:chicken_2dsyntax_2escm"),(void*)f_6374},
{C_text("f_6378:chicken_2dsyntax_2escm"),(void*)f_6378},
{C_text("f_6382:chicken_2dsyntax_2escm"),(void*)f_6382},
{C_text("f_6386:chicken_2dsyntax_2escm"),(void*)f_6386},
{C_text("f_6414:chicken_2dsyntax_2escm"),(void*)f_6414},
{C_text("f_6435:chicken_2dsyntax_2escm"),(void*)f_6435},
{C_text("f_6514:chicken_2dsyntax_2escm"),(void*)f_6514},
{C_text("f_6557:chicken_2dsyntax_2escm"),(void*)f_6557},
{C_text("f_6570:chicken_2dsyntax_2escm"),(void*)f_6570},
{C_text("f_6572:chicken_2dsyntax_2escm"),(void*)f_6572},
{C_text("f_6610:chicken_2dsyntax_2escm"),(void*)f_6610},
{C_text("f_6645:chicken_2dsyntax_2escm"),(void*)f_6645},
{C_text("f_6652:chicken_2dsyntax_2escm"),(void*)f_6652},
{C_text("f_6656:chicken_2dsyntax_2escm"),(void*)f_6656},
{C_text("f_6660:chicken_2dsyntax_2escm"),(void*)f_6660},
{C_text("f_6662:chicken_2dsyntax_2escm"),(void*)f_6662},
{C_text("f_6666:chicken_2dsyntax_2escm"),(void*)f_6666},
{C_text("f_6680:chicken_2dsyntax_2escm"),(void*)f_6680},
{C_text("f_6683:chicken_2dsyntax_2escm"),(void*)f_6683},
{C_text("f_6686:chicken_2dsyntax_2escm"),(void*)f_6686},
{C_text("f_6708:chicken_2dsyntax_2escm"),(void*)f_6708},
{C_text("f_6715:chicken_2dsyntax_2escm"),(void*)f_6715},
{C_text("f_6719:chicken_2dsyntax_2escm"),(void*)f_6719},
{C_text("f_6730:chicken_2dsyntax_2escm"),(void*)f_6730},
{C_text("f_6733:chicken_2dsyntax_2escm"),(void*)f_6733},
{C_text("f_6736:chicken_2dsyntax_2escm"),(void*)f_6736},
{C_text("f_6750:chicken_2dsyntax_2escm"),(void*)f_6750},
{C_text("f_6757:chicken_2dsyntax_2escm"),(void*)f_6757},
{C_text("f_6761:chicken_2dsyntax_2escm"),(void*)f_6761},
{C_text("f_6773:chicken_2dsyntax_2escm"),(void*)f_6773},
{C_text("f_6775:chicken_2dsyntax_2escm"),(void*)f_6775},
{C_text("f_6779:chicken_2dsyntax_2escm"),(void*)f_6779},
{C_text("f_6781:chicken_2dsyntax_2escm"),(void*)f_6781},
{C_text("f_6787:chicken_2dsyntax_2escm"),(void*)f_6787},
{C_text("f_6801:chicken_2dsyntax_2escm"),(void*)f_6801},
{C_text("f_6805:chicken_2dsyntax_2escm"),(void*)f_6805},
{C_text("f_6813:chicken_2dsyntax_2escm"),(void*)f_6813},
{C_text("f_6816:chicken_2dsyntax_2escm"),(void*)f_6816},
{C_text("f_6819:chicken_2dsyntax_2escm"),(void*)f_6819},
{C_text("f_6822:chicken_2dsyntax_2escm"),(void*)f_6822},
{C_text("f_6825:chicken_2dsyntax_2escm"),(void*)f_6825},
{C_text("f_6828:chicken_2dsyntax_2escm"),(void*)f_6828},
{C_text("f_6831:chicken_2dsyntax_2escm"),(void*)f_6831},
{C_text("f_6834:chicken_2dsyntax_2escm"),(void*)f_6834},
{C_text("f_6837:chicken_2dsyntax_2escm"),(void*)f_6837},
{C_text("f_6840:chicken_2dsyntax_2escm"),(void*)f_6840},
{C_text("f_6847:chicken_2dsyntax_2escm"),(void*)f_6847},
{C_text("f_6863:chicken_2dsyntax_2escm"),(void*)f_6863},
{C_text("f_6865:chicken_2dsyntax_2escm"),(void*)f_6865},
{C_text("f_6873:chicken_2dsyntax_2escm"),(void*)f_6873},
{C_text("f_6883:chicken_2dsyntax_2escm"),(void*)f_6883},
{C_text("f_6887:chicken_2dsyntax_2escm"),(void*)f_6887},
{C_text("f_6897:chicken_2dsyntax_2escm"),(void*)f_6897},
{C_text("f_6901:chicken_2dsyntax_2escm"),(void*)f_6901},
{C_text("f_6903:chicken_2dsyntax_2escm"),(void*)f_6903},
{C_text("f_6911:chicken_2dsyntax_2escm"),(void*)f_6911},
{C_text("f_6913:chicken_2dsyntax_2escm"),(void*)f_6913},
{C_text("f_6917:chicken_2dsyntax_2escm"),(void*)f_6917},
{C_text("f_6939:chicken_2dsyntax_2escm"),(void*)f_6939},
{C_text("f_6941:chicken_2dsyntax_2escm"),(void*)f_6941},
{C_text("f_6989:chicken_2dsyntax_2escm"),(void*)f_6989},
{C_text("f_7042:chicken_2dsyntax_2escm"),(void*)f_7042},
{C_text("f_7053:chicken_2dsyntax_2escm"),(void*)f_7053},
{C_text("f_7090:chicken_2dsyntax_2escm"),(void*)f_7090},
{C_text("f_7118:chicken_2dsyntax_2escm"),(void*)f_7118},
{C_text("f_7145:chicken_2dsyntax_2escm"),(void*)f_7145},
{C_text("f_7155:chicken_2dsyntax_2escm"),(void*)f_7155},
{C_text("f_7157:chicken_2dsyntax_2escm"),(void*)f_7157},
{C_text("f_7182:chicken_2dsyntax_2escm"),(void*)f_7182},
{C_text("f_7217:chicken_2dsyntax_2escm"),(void*)f_7217},
{C_text("f_7219:chicken_2dsyntax_2escm"),(void*)f_7219},
{C_text("f_7223:chicken_2dsyntax_2escm"),(void*)f_7223},
{C_text("f_7235:chicken_2dsyntax_2escm"),(void*)f_7235},
{C_text("f_7238:chicken_2dsyntax_2escm"),(void*)f_7238},
{C_text("f_7241:chicken_2dsyntax_2escm"),(void*)f_7241},
{C_text("f_7244:chicken_2dsyntax_2escm"),(void*)f_7244},
{C_text("f_7255:chicken_2dsyntax_2escm"),(void*)f_7255},
{C_text("f_7257:chicken_2dsyntax_2escm"),(void*)f_7257},
{C_text("f_7283:chicken_2dsyntax_2escm"),(void*)f_7283},
{C_text("f_7294:chicken_2dsyntax_2escm"),(void*)f_7294},
{C_text("f_7377:chicken_2dsyntax_2escm"),(void*)f_7377},
{C_text("f_7379:chicken_2dsyntax_2escm"),(void*)f_7379},
{C_text("f_7383:chicken_2dsyntax_2escm"),(void*)f_7383},
{C_text("f_7386:chicken_2dsyntax_2escm"),(void*)f_7386},
{C_text("f_7416:chicken_2dsyntax_2escm"),(void*)f_7416},
{C_text("f_7426:chicken_2dsyntax_2escm"),(void*)f_7426},
{C_text("f_7454:chicken_2dsyntax_2escm"),(void*)f_7454},
{C_text("f_7456:chicken_2dsyntax_2escm"),(void*)f_7456},
{C_text("f_7460:chicken_2dsyntax_2escm"),(void*)f_7460},
{C_text("f_7479:chicken_2dsyntax_2escm"),(void*)f_7479},
{C_text("f_7483:chicken_2dsyntax_2escm"),(void*)f_7483},
{C_text("f_7487:chicken_2dsyntax_2escm"),(void*)f_7487},
{C_text("f_7489:chicken_2dsyntax_2escm"),(void*)f_7489},
{C_text("f_7510:chicken_2dsyntax_2escm"),(void*)f_7510},
{C_text("f_7528:chicken_2dsyntax_2escm"),(void*)f_7528},
{C_text("f_7536:chicken_2dsyntax_2escm"),(void*)f_7536},
{C_text("f_7540:chicken_2dsyntax_2escm"),(void*)f_7540},
{C_text("f_7550:chicken_2dsyntax_2escm"),(void*)f_7550},
{C_text("f_7556:chicken_2dsyntax_2escm"),(void*)f_7556},
{C_text("f_7570:chicken_2dsyntax_2escm"),(void*)f_7570},
{C_text("f_7596:chicken_2dsyntax_2escm"),(void*)f_7596},
{C_text("f_7620:chicken_2dsyntax_2escm"),(void*)f_7620},
{C_text("f_7628:chicken_2dsyntax_2escm"),(void*)f_7628},
{C_text("f_7636:chicken_2dsyntax_2escm"),(void*)f_7636},
{C_text("f_7640:chicken_2dsyntax_2escm"),(void*)f_7640},
{C_text("f_7643:chicken_2dsyntax_2escm"),(void*)f_7643},
{C_text("f_7646:chicken_2dsyntax_2escm"),(void*)f_7646},
{C_text("f_7655:chicken_2dsyntax_2escm"),(void*)f_7655},
{C_text("f_7656:chicken_2dsyntax_2escm"),(void*)f_7656},
{C_text("f_7664:chicken_2dsyntax_2escm"),(void*)f_7664},
{C_text("f_7668:chicken_2dsyntax_2escm"),(void*)f_7668},
{C_text("f_7672:chicken_2dsyntax_2escm"),(void*)f_7672},
{C_text("f_7680:chicken_2dsyntax_2escm"),(void*)f_7680},
{C_text("f_7686:chicken_2dsyntax_2escm"),(void*)f_7686},
{C_text("f_7692:chicken_2dsyntax_2escm"),(void*)f_7692},
{C_text("f_7695:chicken_2dsyntax_2escm"),(void*)f_7695},
{C_text("f_7698:chicken_2dsyntax_2escm"),(void*)f_7698},
{C_text("f_7702:chicken_2dsyntax_2escm"),(void*)f_7702},
{C_text("f_7710:chicken_2dsyntax_2escm"),(void*)f_7710},
{C_text("f_7713:chicken_2dsyntax_2escm"),(void*)f_7713},
{C_text("f_7716:chicken_2dsyntax_2escm"),(void*)f_7716},
{C_text("f_7719:chicken_2dsyntax_2escm"),(void*)f_7719},
{C_text("f_7726:chicken_2dsyntax_2escm"),(void*)f_7726},
{C_text("f_7752:chicken_2dsyntax_2escm"),(void*)f_7752},
{C_text("f_7777:chicken_2dsyntax_2escm"),(void*)f_7777},
{C_text("f_7786:chicken_2dsyntax_2escm"),(void*)f_7786},
{C_text("f_7820:chicken_2dsyntax_2escm"),(void*)f_7820},
{C_text("f_7845:chicken_2dsyntax_2escm"),(void*)f_7845},
{C_text("f_7854:chicken_2dsyntax_2escm"),(void*)f_7854},
{C_text("f_7902:chicken_2dsyntax_2escm"),(void*)f_7902},
{C_text("f_7904:chicken_2dsyntax_2escm"),(void*)f_7904},
{C_text("f_7908:chicken_2dsyntax_2escm"),(void*)f_7908},
{C_text("f_7918:chicken_2dsyntax_2escm"),(void*)f_7918},
{C_text("f_7945:chicken_2dsyntax_2escm"),(void*)f_7945},
{C_text("f_7948:chicken_2dsyntax_2escm"),(void*)f_7948},
{C_text("f_7963:chicken_2dsyntax_2escm"),(void*)f_7963},
{C_text("f_7971:chicken_2dsyntax_2escm"),(void*)f_7971},
{C_text("f_7980:chicken_2dsyntax_2escm"),(void*)f_7980},
{C_text("f_7995:chicken_2dsyntax_2escm"),(void*)f_7995},
{C_text("f_8005:chicken_2dsyntax_2escm"),(void*)f_8005},
{C_text("f_8008:chicken_2dsyntax_2escm"),(void*)f_8008},
{C_text("f_8024:chicken_2dsyntax_2escm"),(void*)f_8024},
{C_text("f_8044:chicken_2dsyntax_2escm"),(void*)f_8044},
{C_text("f_8046:chicken_2dsyntax_2escm"),(void*)f_8046},
{C_text("f_8048:chicken_2dsyntax_2escm"),(void*)f_8048},
{C_text("f_8052:chicken_2dsyntax_2escm"),(void*)f_8052},
{C_text("f_8061:chicken_2dsyntax_2escm"),(void*)f_8061},
{C_text("f_8064:chicken_2dsyntax_2escm"),(void*)f_8064},
{C_text("f_8073:chicken_2dsyntax_2escm"),(void*)f_8073},
{C_text("f_8089:chicken_2dsyntax_2escm"),(void*)f_8089},
{C_text("f_8093:chicken_2dsyntax_2escm"),(void*)f_8093},
{C_text("f_8136:chicken_2dsyntax_2escm"),(void*)f_8136},
{C_text("f_8148:chicken_2dsyntax_2escm"),(void*)f_8148},
{C_text("f_8150:chicken_2dsyntax_2escm"),(void*)f_8150},
{C_text("f_8154:chicken_2dsyntax_2escm"),(void*)f_8154},
{C_text("f_8157:chicken_2dsyntax_2escm"),(void*)f_8157},
{C_text("f_8176:chicken_2dsyntax_2escm"),(void*)f_8176},
{C_text("f_8192:chicken_2dsyntax_2escm"),(void*)f_8192},
{C_text("f_8194:chicken_2dsyntax_2escm"),(void*)f_8194},
{C_text("f_8198:chicken_2dsyntax_2escm"),(void*)f_8198},
{C_text("f_8201:chicken_2dsyntax_2escm"),(void*)f_8201},
{C_text("f_8214:chicken_2dsyntax_2escm"),(void*)f_8214},
{C_text("f_8216:chicken_2dsyntax_2escm"),(void*)f_8216},
{C_text("f_8220:chicken_2dsyntax_2escm"),(void*)f_8220},
{C_text("f_8234:chicken_2dsyntax_2escm"),(void*)f_8234},
{C_text("f_8240:chicken_2dsyntax_2escm"),(void*)f_8240},
{C_text("f_8262:chicken_2dsyntax_2escm"),(void*)f_8262},
{C_text("f_8268:chicken_2dsyntax_2escm"),(void*)f_8268},
{C_text("f_8272:chicken_2dsyntax_2escm"),(void*)f_8272},
{C_text("f_8282:chicken_2dsyntax_2escm"),(void*)f_8282},
{C_text("f_8284:chicken_2dsyntax_2escm"),(void*)f_8284},
{C_text("f_8313:chicken_2dsyntax_2escm"),(void*)f_8313},
{C_text("f_8332:chicken_2dsyntax_2escm"),(void*)f_8332},
{C_text("f_8366:chicken_2dsyntax_2escm"),(void*)f_8366},
{C_text("f_8390:chicken_2dsyntax_2escm"),(void*)f_8390},
{C_text("f_8392:chicken_2dsyntax_2escm"),(void*)f_8392},
{C_text("f_8396:chicken_2dsyntax_2escm"),(void*)f_8396},
{C_text("f_8402:chicken_2dsyntax_2escm"),(void*)f_8402},
{C_text("f_8436:chicken_2dsyntax_2escm"),(void*)f_8436},
{C_text("f_8472:chicken_2dsyntax_2escm"),(void*)f_8472},
{C_text("f_8474:chicken_2dsyntax_2escm"),(void*)f_8474},
{C_text("f_8478:chicken_2dsyntax_2escm"),(void*)f_8478},
{C_text("f_8486:chicken_2dsyntax_2escm"),(void*)f_8486},
{C_text("f_8491:chicken_2dsyntax_2escm"),(void*)f_8491},
{C_text("f_8516:chicken_2dsyntax_2escm"),(void*)f_8516},
{C_text("f_8526:chicken_2dsyntax_2escm"),(void*)f_8526},
{C_text("f_8528:chicken_2dsyntax_2escm"),(void*)f_8528},
{C_text("f_8532:chicken_2dsyntax_2escm"),(void*)f_8532},
{C_text("f_8538:chicken_2dsyntax_2escm"),(void*)f_8538},
{C_text("f_8559:chicken_2dsyntax_2escm"),(void*)f_8559},
{C_text("f_8566:chicken_2dsyntax_2escm"),(void*)f_8566},
{C_text("f_8589:chicken_2dsyntax_2escm"),(void*)f_8589},
{C_text("f_8593:chicken_2dsyntax_2escm"),(void*)f_8593},
{C_text("f_8614:chicken_2dsyntax_2escm"),(void*)f_8614},
{C_text("f_8617:chicken_2dsyntax_2escm"),(void*)f_8617},
{C_text("f_8621:chicken_2dsyntax_2escm"),(void*)f_8621},
{C_text("f_8629:chicken_2dsyntax_2escm"),(void*)f_8629},
{C_text("f_8633:chicken_2dsyntax_2escm"),(void*)f_8633},
{C_text("f_8639:chicken_2dsyntax_2escm"),(void*)f_8639},
{C_text("f_8640:chicken_2dsyntax_2escm"),(void*)f_8640},
{C_text("f_8651:chicken_2dsyntax_2escm"),(void*)f_8651},
{C_text("f_8666:chicken_2dsyntax_2escm"),(void*)f_8666},
{C_text("f_8668:chicken_2dsyntax_2escm"),(void*)f_8668},
{C_text("f_8687:chicken_2dsyntax_2escm"),(void*)f_8687},
{C_text("f_8695:chicken_2dsyntax_2escm"),(void*)f_8695},
{C_text("f_8701:chicken_2dsyntax_2escm"),(void*)f_8701},
{C_text("f_8703:chicken_2dsyntax_2escm"),(void*)f_8703},
{C_text("f_8728:chicken_2dsyntax_2escm"),(void*)f_8728},
{C_text("f_8741:chicken_2dsyntax_2escm"),(void*)f_8741},
{C_text("f_8752:chicken_2dsyntax_2escm"),(void*)f_8752},
{C_text("f_8789:chicken_2dsyntax_2escm"),(void*)f_8789},
{C_text("f_8817:chicken_2dsyntax_2escm"),(void*)f_8817},
{C_text("f_8851:chicken_2dsyntax_2escm"),(void*)f_8851},
{C_text("f_8882:chicken_2dsyntax_2escm"),(void*)f_8882},
{C_text("f_8889:chicken_2dsyntax_2escm"),(void*)f_8889},
{C_text("f_8895:chicken_2dsyntax_2escm"),(void*)f_8895},
{C_text("f_8920:chicken_2dsyntax_2escm"),(void*)f_8920},
{C_text("f_8929:chicken_2dsyntax_2escm"),(void*)f_8929},
{C_text("f_8942:chicken_2dsyntax_2escm"),(void*)f_8942},
{C_text("f_8967:chicken_2dsyntax_2escm"),(void*)f_8967},
{C_text("f_9003:chicken_2dsyntax_2escm"),(void*)f_9003},
{C_text("f_9005:chicken_2dsyntax_2escm"),(void*)f_9005},
{C_text("f_9009:chicken_2dsyntax_2escm"),(void*)f_9009},
{C_text("f_9016:chicken_2dsyntax_2escm"),(void*)f_9016},
{C_text("f_9020:chicken_2dsyntax_2escm"),(void*)f_9020},
{C_text("f_9028:chicken_2dsyntax_2escm"),(void*)f_9028},
{C_text("f_9042:chicken_2dsyntax_2escm"),(void*)f_9042},
{C_text("f_9048:chicken_2dsyntax_2escm"),(void*)f_9048},
{C_text("f_9055:chicken_2dsyntax_2escm"),(void*)f_9055},
{C_text("f_9061:chicken_2dsyntax_2escm"),(void*)f_9061},
{C_text("f_9074:chicken_2dsyntax_2escm"),(void*)f_9074},
{C_text("f_9108:chicken_2dsyntax_2escm"),(void*)f_9108},
{C_text("f_9118:chicken_2dsyntax_2escm"),(void*)f_9118},
{C_text("f_9133:chicken_2dsyntax_2escm"),(void*)f_9133},
{C_text("f_9135:chicken_2dsyntax_2escm"),(void*)f_9135},
{C_text("f_9139:chicken_2dsyntax_2escm"),(void*)f_9139},
{C_text("f_9154:chicken_2dsyntax_2escm"),(void*)f_9154},
{C_text("f_9156:chicken_2dsyntax_2escm"),(void*)f_9156},
{C_text("f_9160:chicken_2dsyntax_2escm"),(void*)f_9160},
{C_text("f_9182:chicken_2dsyntax_2escm"),(void*)f_9182},
{C_text("f_9184:chicken_2dsyntax_2escm"),(void*)f_9184},
{C_text("f_9188:chicken_2dsyntax_2escm"),(void*)f_9188},
{C_text("f_9206:chicken_2dsyntax_2escm"),(void*)f_9206},
{C_text("f_9208:chicken_2dsyntax_2escm"),(void*)f_9208},
{C_text("f_9217:chicken_2dsyntax_2escm"),(void*)f_9217},
{C_text("f_9223:chicken_2dsyntax_2escm"),(void*)f_9223},
{C_text("f_9229:chicken_2dsyntax_2escm"),(void*)f_9229},
{C_text("f_9243:chicken_2dsyntax_2escm"),(void*)f_9243},
{C_text("f_9252:chicken_2dsyntax_2escm"),(void*)f_9252},
{C_text("f_9254:chicken_2dsyntax_2escm"),(void*)f_9254},
{C_text("f_9279:chicken_2dsyntax_2escm"),(void*)f_9279},
{C_text("f_9290:chicken_2dsyntax_2escm"),(void*)f_9290},
{C_text("f_9292:chicken_2dsyntax_2escm"),(void*)f_9292},
{C_text("f_9311:chicken_2dsyntax_2escm"),(void*)f_9311},
{C_text("f_9319:chicken_2dsyntax_2escm"),(void*)f_9319},
{C_text("f_9328:chicken_2dsyntax_2escm"),(void*)f_9328},
{C_text("f_9334:chicken_2dsyntax_2escm"),(void*)f_9334},
{C_text("f_9338:chicken_2dsyntax_2escm"),(void*)f_9338},
{C_text("f_9346:chicken_2dsyntax_2escm"),(void*)f_9346},
{C_text("f_9352:chicken_2dsyntax_2escm"),(void*)f_9352},
{C_text("f_9356:chicken_2dsyntax_2escm"),(void*)f_9356},
{C_text("f_9364:chicken_2dsyntax_2escm"),(void*)f_9364},
{C_text("f_9367:chicken_2dsyntax_2escm"),(void*)f_9367},
{C_text("f_9371:chicken_2dsyntax_2escm"),(void*)f_9371},
{C_text("f_9379:chicken_2dsyntax_2escm"),(void*)f_9379},
{C_text("f_9382:chicken_2dsyntax_2escm"),(void*)f_9382},
{C_text("f_9395:chicken_2dsyntax_2escm"),(void*)f_9395},
{C_text("f_9412:chicken_2dsyntax_2escm"),(void*)f_9412},
{C_text("f_9423:chicken_2dsyntax_2escm"),(void*)f_9423},
{C_text("f_9471:chicken_2dsyntax_2escm"),(void*)f_9471},
{C_text("f_9475:chicken_2dsyntax_2escm"),(void*)f_9475},
{C_text("f_9487:chicken_2dsyntax_2escm"),(void*)f_9487},
{C_text("f_9499:chicken_2dsyntax_2escm"),(void*)f_9499},
{C_text("f_9501:chicken_2dsyntax_2escm"),(void*)f_9501},
{C_text("f_9549:chicken_2dsyntax_2escm"),(void*)f_9549},
{C_text("f_9597:chicken_2dsyntax_2escm"),(void*)f_9597},
{C_text("f_9604:chicken_2dsyntax_2escm"),(void*)f_9604},
{C_text("f_9674:chicken_2dsyntax_2escm"),(void*)f_9674},
{C_text("f_9692:chicken_2dsyntax_2escm"),(void*)f_9692},
{C_text("f_9696:chicken_2dsyntax_2escm"),(void*)f_9696},
{C_text("f_9712:chicken_2dsyntax_2escm"),(void*)f_9712},
{C_text("f_9716:chicken_2dsyntax_2escm"),(void*)f_9716},
{C_text("f_9728:chicken_2dsyntax_2escm"),(void*)f_9728},
{C_text("f_9738:chicken_2dsyntax_2escm"),(void*)f_9738},
{C_text("f_9786:chicken_2dsyntax_2escm"),(void*)f_9786},
{C_text("f_9834:chicken_2dsyntax_2escm"),(void*)f_9834},
{C_text("f_9841:chicken_2dsyntax_2escm"),(void*)f_9841},
{C_text("f_9904:chicken_2dsyntax_2escm"),(void*)f_9904},
{C_text("f_9952:chicken_2dsyntax_2escm"),(void*)f_9952},
{C_text("toplevel:chicken_2dsyntax_2escm"),(void*)C_chicken_2dsyntax_toplevel},
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
S|  for-each		1
S|  ##sys#map		11
S|  foldl		4
S|  map		42
S|  foldr		4
o|eliminated procedure checks: 736 
o|specializations:
o|  1 (chicken.base#add1 *)
o|  1 (scheme#zero? integer)
o|  2 (scheme#string-append string string)
o|  14 (scheme#cddr (pair * pair))
o|  2 (scheme#length list)
o|  1 (scheme#caddr (pair * (pair * pair)))
o|  4 (scheme#cadr (pair * pair))
o|  4 (scheme#cdddr (pair * (pair * pair)))
o|  1 (scheme#eqv? * *)
o|  40 (##sys#check-list (or pair list) *)
o|  69 (scheme#cdr pair)
o|  24 (scheme#car pair)
(o e)|safe calls: 1474 
o|safe globals: (posv posq make-list iota find-tail find length+ lset=/eq? lset<=/eq? list-tabulate lset-intersection/eq? lset-union/eq? lset-difference/eq? lset-adjoin/eq? list-index last unzip1 remove filter-map filter alist-cons delete-duplicates fifth fourth third second first delete concatenate cons* any every append-map split-at drop take span partition) 
o|removed side-effect free assignment to unused variable: partition 
o|removed side-effect free assignment to unused variable: span 
o|inlining procedure: k4315 
o|inlining procedure: k4315 
o|removed side-effect free assignment to unused variable: drop 
o|removed side-effect free assignment to unused variable: append-map 
o|inlining procedure: k4585 
o|inlining procedure: k4585 
o|inlining procedure: k4616 
o|inlining procedure: k4616 
o|removed side-effect free assignment to unused variable: cons* 
o|removed side-effect free assignment to unused variable: concatenate 
o|removed side-effect free assignment to unused variable: first 
o|removed side-effect free assignment to unused variable: second 
o|removed side-effect free assignment to unused variable: third 
o|removed side-effect free assignment to unused variable: fourth 
o|removed side-effect free assignment to unused variable: fifth 
o|removed side-effect free assignment to unused variable: delete-duplicates 
o|removed side-effect free assignment to unused variable: alist-cons 
o|inlining procedure: k4833 
o|inlining procedure: k4833 
o|inlining procedure: k4825 
o|inlining procedure: k4825 
o|removed side-effect free assignment to unused variable: filter-map 
o|removed side-effect free assignment to unused variable: remove 
o|removed side-effect free assignment to unused variable: unzip1 
o|removed side-effect free assignment to unused variable: last 
o|removed side-effect free assignment to unused variable: list-index 
o|removed side-effect free assignment to unused variable: lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: lset-difference/eq? 
o|removed side-effect free assignment to unused variable: lset-union/eq? 
o|removed side-effect free assignment to unused variable: lset-intersection/eq? 
o|inlining procedure: k5224 
o|inlining procedure: k5224 
o|removed side-effect free assignment to unused variable: lset<=/eq? 
o|removed side-effect free assignment to unused variable: lset=/eq? 
o|removed side-effect free assignment to unused variable: length+ 
o|removed side-effect free assignment to unused variable: find 
o|removed side-effect free assignment to unused variable: find-tail 
o|removed side-effect free assignment to unused variable: iota 
o|removed side-effect free assignment to unused variable: make-list 
o|removed side-effect free assignment to unused variable: posq 
o|removed side-effect free assignment to unused variable: posv 
o|inlining procedure: k5767 
o|inlining procedure: k5767 
o|inlining procedure: k5795 
o|inlining procedure: k5795 
o|inlining procedure: k5839 
o|inlining procedure: k5839 
o|inlining procedure: k5918 
o|inlining procedure: k5918 
o|inlining procedure: k6016 
o|inlining procedure: k6016 
o|inlining procedure: k6113 
o|inlining procedure: k6113 
o|inlining procedure: k6207 
o|inlining procedure: k6207 
o|inlining procedure: k6344 
o|inlining procedure: k6344 
o|inlining procedure: k6391 
o|inlining procedure: k6391 
o|inlining procedure: k6430 
o|inlining procedure: k6430 
o|inlining procedure: k6503 
o|inlining procedure: k6503 
o|inlining procedure: k6559 
o|inlining procedure: k6559 
o|inlining procedure: k6574 
o|inlining procedure: k6574 
o|inlining procedure: k6612 
o|inlining procedure: k6612 
o|inlining procedure: k6672 
o|inlining procedure: k6672 
o|inlining procedure: k6789 
o|inlining procedure: k6789 
o|contracted procedure: "(chicken-syntax.scm:1019) split-at" 
o|inlining procedure: k4373 
o|inlining procedure: k4373 
o|inlining procedure: k6918 
o|inlining procedure: k6918 
o|inlining procedure: k6943 
o|inlining procedure: k6943 
o|inlining procedure: k6991 
o|inlining procedure: k7019 
o|inlining procedure: k7019 
o|inlining procedure: k6991 
o|inlining procedure: k7051 
o|inlining procedure: k7051 
o|inlining procedure: k7091 
o|inlining procedure: k7091 
o|inlining procedure: k6867 
o|inlining procedure: k6867 
o|inlining procedure: k7159 
o|contracted procedure: "(chicken-syntax.scm:989) g28482857" 
o|inlining procedure: k7159 
o|inlining procedure: k7259 
o|inlining procedure: k7259 
o|removed unused formal parameters: (rename2643) 
o|inlining procedure: k7558 
o|inlining procedure: k7558 
o|removed unused parameter to known procedure: rename2643 "(chicken-syntax.scm:891) make-if-tree2623" 
o|contracted procedure: "(chicken-syntax.scm:889) make-default-procs2622" 
o|inlining procedure: k7491 
o|inlining procedure: k7491 
o|inlining procedure: k7754 
o|inlining procedure: k7754 
o|inlining procedure: k7788 
o|inlining procedure: k7788 
o|inlining procedure: k7822 
o|inlining procedure: k7822 
o|inlining procedure: k7856 
o|inlining procedure: k7856 
o|inlining procedure: k7920 
o|inlining procedure: k7920 
o|inlining procedure: k7972 
o|inlining procedure: k7972 
o|inlining procedure: k8062 
o|inlining procedure: k8062 
o|inlining procedure: k8077 
o|inlining procedure: k8077 
o|inlining procedure: k8286 
o|inlining procedure: k8286 
o|inlining procedure: k8334 
o|contracted procedure: "(chicken-syntax.scm:668) g24652474" 
o|inlining procedure: k8334 
o|inlining procedure: k8368 
o|contracted procedure: "(chicken-syntax.scm:669) g24892490" 
o|inlining procedure: k8368 
o|substituted constant variable: g24812484 
o|inlining procedure: k8404 
o|inlining procedure: k8404 
o|inlining procedure: k8438 
o|inlining procedure: k8438 
o|inlining procedure: k8493 
o|inlining procedure: k8493 
o|inlining procedure: k8540 
o|inlining procedure: k8540 
o|inlining procedure: k8568 
o|inlining procedure: k8568 
o|inlining procedure: k8670 
o|inlining procedure: k8705 
o|inlining procedure: k8705 
o|inlining procedure: k8670 
o|inlining procedure: k8819 
o|contracted procedure: "(chicken-syntax.scm:626) g23572366" 
o|inlining procedure: k8819 
o|inlining procedure: k8853 
o|inlining procedure: k8853 
o|inlining procedure: k8897 
o|inlining procedure: k8897 
o|inlining procedure: k8931 
o|inlining procedure: k8931 
o|inlining procedure: k8954 
o|inlining procedure: k8954 
o|inlining procedure: k8969 
o|inlining procedure: k8969 
o|inlining procedure: k9076 
o|contracted procedure: "(chicken-syntax.scm:585) g21722190" 
o|inlining procedure: k9076 
o|inlining procedure: k9110 
o|contracted procedure: "(chicken-syntax.scm:581) g21572179" 
o|inlining procedure: k9110 
o|inlining procedure: k9231 
o|inlining procedure: k9231 
o|inlining procedure: k9256 
o|inlining procedure: k9256 
o|contracted procedure: "(chicken-syntax.scm:494) pname1598" 
o|inlining procedure: k9297 
o|inlining procedure: k9297 
o|removed unused formal parameters: (z1705) 
o|removed unused formal parameters: (z1733) 
o|inlining procedure: k9503 
o|contracted procedure: "(chicken-syntax.scm:531) g20372047" 
o|inlining procedure: k9503 
o|inlining procedure: k9551 
o|contracted procedure: "(chicken-syntax.scm:529) g20012011" 
o|inlining procedure: k9551 
o|inlining procedure: k9599 
o|contracted procedure: "(chicken-syntax.scm:526) g19591970" 
o|inlining procedure: k9599 
o|inlining procedure: k9649 
o|inlining procedure: k9649 
o|inlining procedure: k9740 
o|contracted procedure: "(chicken-syntax.scm:519) g19231933" 
o|inlining procedure: k9740 
o|inlining procedure: k9788 
o|contracted procedure: "(chicken-syntax.scm:516) g18871897" 
o|inlining procedure: k9788 
o|inlining procedure: k9836 
o|inlining procedure: k9836 
o|inlining procedure: k9886 
o|inlining procedure: k9886 
o|inlining procedure: k9906 
o|inlining procedure: k9906 
o|inlining procedure: k9954 
o|inlining procedure: k9954 
o|inlining procedure: k10002 
o|inlining procedure: k10002 
o|inlining procedure: k10050 
o|removed unused parameter to known procedure: z1733 "(chicken-syntax.scm:496) g17221731" 
o|inlining procedure: k10050 
o|inlining procedure: k10084 
o|removed unused parameter to known procedure: z1705 "(chicken-syntax.scm:495) g16941703" 
o|inlining procedure: k10084 
o|inlining procedure: k10118 
o|inlining procedure: k10118 
o|inlining procedure: k10152 
o|inlining procedure: k10152 
o|inlining procedure: k10186 
o|inlining procedure: k10186 
o|removed unused formal parameters: (x1320) 
o|removed unused formal parameters: (x1348) 
o|inlining procedure: k10341 
o|contracted procedure: "(chicken-syntax.scm:476) g15661576" 
o|inlining procedure: k10341 
o|inlining procedure: k10389 
o|contracted procedure: "(chicken-syntax.scm:474) g15301540" 
o|inlining procedure: k10389 
o|inlining procedure: k10488 
o|contracted procedure: "(chicken-syntax.scm:469) g14941504" 
o|inlining procedure: k10488 
o|inlining procedure: k10536 
o|contracted procedure: "(chicken-syntax.scm:467) g14581468" 
o|inlining procedure: k10536 
o|inlining procedure: k10619 
o|inlining procedure: k10619 
o|inlining procedure: k10669 
o|inlining procedure: k10669 
o|inlining procedure: k10689 
o|inlining procedure: k10689 
o|inlining procedure: k10737 
o|inlining procedure: k10737 
o|inlining procedure: k10771 
o|removed unused parameter to known procedure: x1348 "(chicken-syntax.scm:457) g13371346" 
o|inlining procedure: k10771 
o|inlining procedure: k10805 
o|removed unused parameter to known procedure: x1320 "(chicken-syntax.scm:456) g13091318" 
o|inlining procedure: k10805 
o|inlining procedure: k10839 
o|inlining procedure: k10839 
o|inlining procedure: k10949 
o|inlining procedure: k10949 
o|inlining procedure: k11071 
o|inlining procedure: k11071 
o|inlining procedure: k11092 
o|inlining procedure: k11104 
o|inlining procedure: k11104 
o|inlining procedure: k11092 
o|inlining procedure: k11164 
o|inlining procedure: k11164 
o|inlining procedure: k11224 
o|inlining procedure: k11224 
o|inlining procedure: k11313 
o|inlining procedure: k11313 
o|substituted constant variable: a11348 
o|substituted constant variable: a11373 
o|inlining procedure: k11382 
o|inlining procedure: k11382 
o|inlining procedure: k11454 
o|inlining procedure: k11454 
o|inlining procedure: k11483 
o|inlining procedure: k11498 
o|inlining procedure: k11514 
o|inlining procedure: k11514 
o|inlining procedure: k11498 
o|inlining procedure: k11483 
o|inlining procedure: k11548 
o|inlining procedure: k11564 
o|inlining procedure: k11564 
o|inlining procedure: k11548 
o|inlining procedure: k11602 
o|inlining procedure: k11602 
o|inlining procedure: k11666 
o|inlining procedure: k11666 
o|inlining procedure: k11775 
o|inlining procedure: k11775 
o|inlining procedure: k11888 
o|inlining procedure: k11888 
o|inlining procedure: k11909 
o|inlining procedure: k11909 
o|inlining procedure: k11955 
o|inlining procedure: k11955 
o|inlining procedure: k11995 
o|inlining procedure: k12051 
o|contracted procedure: "(chicken-syntax.scm:201) g919929" 
o|inlining procedure: k12051 
o|inlining procedure: k12121 
o|inlining procedure: k12148 
o|contracted procedure: "(chicken-syntax.scm:192) g885894" 
o|propagated global variable: g902903 chicken.compiler.scrutinizer#check-and-validate-type 
o|inlining procedure: k12148 
o|inlining procedure: k12121 
o|inlining procedure: k12192 
o|inlining procedure: k12192 
o|inlining procedure: k11995 
o|inlining procedure: k12239 
o|inlining procedure: k12239 
o|inlining procedure: k12276 
o|inlining procedure: k12276 
o|inlining procedure: k12325 
o|inlining procedure: k12416 
o|contracted procedure: "(chicken-syntax.scm:154) g816825" 
o|inlining procedure: k12416 
o|inlining procedure: k12450 
o|contracted procedure: "(chicken-syntax.scm:154) g788797" 
o|inlining procedure: k12450 
o|inlining procedure: k12325 
o|inlining procedure: k12487 
o|inlining procedure: k12502 
o|inlining procedure: k12518 
o|inlining procedure: k12518 
o|inlining procedure: k12502 
o|inlining procedure: k12487 
o|inlining procedure: k12552 
o|inlining procedure: k12568 
o|inlining procedure: k12568 
o|inlining procedure: k12603 
o|inlining procedure: k12603 
o|inlining procedure: k12552 
o|inlining procedure: k12634 
o|inlining procedure: k12634 
o|inlining procedure: k12672 
o|inlining procedure: k12672 
o|inlining procedure: k12699 
o|inlining procedure: k12699 
o|inlining procedure: k12728 
o|inlining procedure: k12728 
o|inlining procedure: k12810 
o|inlining procedure: k12810 
o|inlining procedure: k12852 
o|inlining procedure: k12852 
o|inlining procedure: k12967 
o|inlining procedure: k12967 
o|inlining procedure: k12987 
o|inlining procedure: k12987 
o|replaced variables: 1156 
o|removed binding forms: 472 
o|substituted constant variable: r431613149 
o|removed side-effect free assignment to unused variable: every 
o|removed side-effect free assignment to unused variable: any 
o|removed side-effect free assignment to unused variable: filter 
o|removed side-effect free assignment to unused variable: list-tabulate 
o|substituted constant variable: r579613166 
o|substituted constant variable: r634513177 
o|substituted constant variable: r650413186 
o|substituted constant variable: r656013188 
o|substituted constant variable: r679013195 
o|substituted constant variable: r709213211 
o|substituted constant variable: r686813214 
o|converted assignments to bindings: (genvars2834) 
o|substituted constant variable: r749213221 
o|converted assignments to bindings: (make-if-tree2623) 
o|substituted constant variable: r807813246 
o|substituted constant variable: r856913261 
o|substituted constant variable: r923213283 
o|substituted constant variable: r965013296 
o|substituted constant variable: r988713304 
o|substituted constant variable: r1067013331 
o|substituted constant variable: r1110513349 
o|substituted constant variable: r1109313350 
o|substituted constant variable: r1149913369 
o|substituted constant variable: r1148413370 
o|substituted constant variable: r1154913374 
o|substituted constant variable: r1166713378 
o|substituted constant variable: r1177613379 
o|substituted constant variable: r1195613385 
o|substituted constant variable: r1219313396 
o|substituted constant variable: r1227713402 
o|substituted constant variable: r1250313413 
o|substituted constant variable: r1248813414 
o|substituted constant variable: r1260413419 
o|substituted constant variable: r1255313420 
o|substituted constant variable: r1267313423 
o|substituted constant variable: r1272913429 
o|substituted constant variable: r1272913429 
o|substituted constant variable: r1296813435 
o|substituted constant variable: r1296813435 
o|converted assignments to bindings: (parse-clause597) 
o|simplifications: ((let . 3)) 
o|replaced variables: 20 
o|removed binding forms: 1273 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:496) slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:495) slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:457) slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:456) slot" 
o|replaced variables: 31 
o|removed binding forms: 60 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:526) slot" 
o|contracted procedure: k10075 
o|contracted procedure: k10109 
o|contracted procedure: k10796 
o|contracted procedure: k10830 
o|removed binding forms: 34 
o|contracted procedure: k9636 
o|removed binding forms: 5 
o|removed binding forms: 1 
o|simplifications: ((if . 26) (##core#call . 1219)) 
o|  call simplifications:
o|    scheme#cdddr	2
o|    chicken.fixnum#fx=
o|    scheme#vector
o|    ##sys#pair?	7
o|    ##sys#eq?	7
o|    ##sys#car	15
o|    ##sys#cdr	22
o|    scheme#symbol?	7
o|    scheme#list?	2
o|    scheme#cdar
o|    scheme#caar
o|    scheme#assq	2
o|    scheme#apply
o|    scheme#eq?	5
o|    ##sys#call-with-values	3
o|    scheme#values
o|    chicken.fixnum#fx>=
o|    chicken.fixnum#fx+	3
o|    scheme#cadddr	2
o|    scheme#cddddr
o|    ##sys#check-list	36
o|    ##sys#setslot	50
o|    ##sys#slot	194
o|    scheme#memq	6
o|    scheme#cddr	7
o|    scheme#caddr	14
o|    scheme#not	15
o|    scheme#list	9
o|    scheme#cadr	48
o|    scheme#null?	29
o|    scheme#string?
o|    scheme#pair?	95
o|    scheme#cdr	19
o|    ##sys#cons	141
o|    ##sys#list	291
o|    chicken.fixnum#fx<=	2
o|    scheme#car	45
o|    chicken.fixnum#fx-	4
o|    scheme#cons	128
o|contracted procedure: k4318 
o|contracted procedure: k4325 
o|contracted procedure: k4335 
o|contracted procedure: k5684 
o|contracted procedure: k5716 
o|contracted procedure: k5712 
o|contracted procedure: k5692 
o|contracted procedure: k5708 
o|contracted procedure: k5700 
o|contracted procedure: k5704 
o|contracted procedure: k5696 
o|contracted procedure: k5688 
o|contracted procedure: k5729 
o|contracted procedure: k5802 
o|contracted procedure: k5734 
o|contracted procedure: k5786 
o|contracted procedure: k5747 
o|contracted procedure: k5755 
o|contracted procedure: k5759 
o|contracted procedure: k5751 
o|contracted procedure: k5770 
o|contracted procedure: k5778 
o|contracted procedure: k5767 
o|contracted procedure: k5789 
o|contracted procedure: k5823 
o|contracted procedure: k5836 
o|contracted procedure: k5842 
o|contracted procedure: k5865 
o|contracted procedure: k5861 
o|contracted procedure: k5855 
o|contracted procedure: k5849 
o|contracted procedure: k5881 
o|contracted procedure: k5877 
o|contracted procedure: k6079 
o|contracted procedure: k5888 
o|contracted procedure: k5921 
o|contracted procedure: k5956 
o|contracted procedure: k5952 
o|contracted procedure: k5948 
o|contracted procedure: k5940 
o|contracted procedure: k5966 
o|contracted procedure: k5985 
o|contracted procedure: k5981 
o|contracted procedure: k5977 
o|contracted procedure: k6005 
o|contracted procedure: k6009 
o|contracted procedure: k6025 
o|contracted procedure: k6053 
o|contracted procedure: k6045 
o|contracted procedure: k6049 
o|contracted procedure: k6065 
o|contracted procedure: k6075 
o|contracted procedure: k6068 
o|contracted procedure: k6255 
o|contracted procedure: k6083 
o|contracted procedure: k6116 
o|contracted procedure: k6147 
o|contracted procedure: k6143 
o|contracted procedure: k6139 
o|contracted procedure: k6157 
o|contracted procedure: k6178 
o|contracted procedure: k6172 
o|contracted procedure: k6168 
o|contracted procedure: k6196 
o|contracted procedure: k6200 
o|contracted procedure: k6216 
o|contracted procedure: k6233 
o|contracted procedure: k6241 
o|contracted procedure: k6251 
o|contracted procedure: k6244 
o|contracted procedure: k6268 
o|contracted procedure: k6277 
o|contracted procedure: k6280 
o|contracted procedure: k6283 
o|contracted procedure: k6292 
o|contracted procedure: k6301 
o|contracted procedure: k6304 
o|contracted procedure: k6606 
o|contracted procedure: k6318 
o|contracted procedure: k6550 
o|contracted procedure: k6554 
o|contracted procedure: k6562 
o|contracted procedure: k6565 
o|contracted procedure: k6546 
o|contracted procedure: k6542 
o|contracted procedure: k6326 
o|contracted procedure: k6530 
o|contracted procedure: k6538 
o|contracted procedure: k6534 
o|contracted procedure: k6334 
o|contracted procedure: k6330 
o|contracted procedure: k6322 
o|contracted procedure: k6314 
o|contracted procedure: k6347 
o|contracted procedure: k6350 
o|contracted procedure: k6526 
o|contracted procedure: k6353 
o|contracted procedure: k6356 
o|contracted procedure: k6473 
o|contracted procedure: k6489 
o|contracted procedure: k6497 
o|contracted procedure: k6493 
o|contracted procedure: k6485 
o|contracted procedure: k6477 
o|contracted procedure: k6481 
o|contracted procedure: k6362 
o|contracted procedure: k6397 
o|contracted procedure: k6408 
o|contracted procedure: k6404 
o|contracted procedure: k6416 
o|contracted procedure: k6423 
o|contracted procedure: k6430 
o|contracted procedure: k6449 
o|contracted procedure: k6465 
o|contracted procedure: k6469 
o|contracted procedure: k6461 
o|contracted procedure: k6453 
o|contracted procedure: k6457 
o|contracted procedure: k6500 
o|contracted procedure: k6506 
o|contracted procedure: k6577 
o|contracted procedure: k6580 
o|contracted procedure: k6583 
o|contracted procedure: k6591 
o|contracted procedure: k6599 
o|contracted procedure: k6615 
o|contracted procedure: k6637 
o|contracted procedure: k6633 
o|contracted procedure: k6618 
o|contracted procedure: k6621 
o|contracted procedure: k6629 
o|contracted procedure: k6667 
o|contracted procedure: k6675 
o|contracted procedure: k6691 
o|contracted procedure: k6703 
o|contracted procedure: k6699 
o|contracted procedure: k6695 
o|contracted procedure: k6721 
o|contracted procedure: k6725 
o|contracted procedure: k6745 
o|contracted procedure: k6741 
o|contracted procedure: k6763 
o|contracted procedure: k7191 
o|contracted procedure: k7195 
o|contracted procedure: k7199 
o|contracted procedure: k7203 
o|contracted procedure: k7207 
o|contracted procedure: k6767 
o|contracted procedure: k6792 
o|contracted procedure: k6807 
o|contracted procedure: k7128 
o|contracted procedure: k7124 
o|contracted procedure: k6853 
o|contracted procedure: k6858 
o|contracted procedure: k6849 
o|contracted procedure: k6870 
o|contracted procedure: k6879 
o|contracted procedure: k6892 
o|contracted procedure: k4376 
o|contracted procedure: k4390 
o|contracted procedure: k4400 
o|contracted procedure: k4394 
o|contracted procedure: k6921 
o|contracted procedure: k6928 
o|contracted procedure: k6931 
o|contracted procedure: k6934 
o|contracted procedure: k6982 
o|contracted procedure: k6946 
o|contracted procedure: k6972 
o|contracted procedure: k6976 
o|contracted procedure: k6968 
o|contracted procedure: k6949 
o|contracted procedure: k6952 
o|contracted procedure: k6960 
o|contracted procedure: k6964 
o|contracted procedure: k6994 
o|contracted procedure: k7016 
o|contracted procedure: k7008 
o|contracted procedure: k7012 
o|contracted procedure: k7004 
o|contracted procedure: k7037 
o|contracted procedure: k7022 
o|contracted procedure: k7031 
o|contracted procedure: k7080 
o|contracted procedure: k7084 
o|contracted procedure: k7068 
o|contracted procedure: k7076 
o|contracted procedure: k7072 
o|contracted procedure: k7047 
o|contracted procedure: k7054 
o|contracted procedure: k7094 
o|contracted procedure: k7105 
o|contracted procedure: k7112 
o|contracted procedure: k7120 
o|contracted procedure: k7132 
o|contracted procedure: k7147 
o|contracted procedure: k7150 
o|contracted procedure: k7162 
o|contracted procedure: k7165 
o|contracted procedure: k7168 
o|contracted procedure: k7176 
o|contracted procedure: k7184 
o|contracted procedure: k7141 
o|contracted procedure: k7359 
o|contracted procedure: k7363 
o|contracted procedure: k7367 
o|contracted procedure: k7211 
o|contracted procedure: k7224 
o|contracted procedure: k7227 
o|contracted procedure: k7355 
o|contracted procedure: k7249 
o|contracted procedure: k7262 
o|contracted procedure: k7269 
o|contracted procedure: k7272 
o|contracted procedure: k7278 
o|contracted procedure: k7328 
o|contracted procedure: k7332 
o|contracted procedure: k7336 
o|contracted procedure: k7324 
o|contracted procedure: k7298 
o|contracted procedure: k7310 
o|contracted procedure: k7314 
o|contracted procedure: k7318 
o|contracted procedure: k7306 
o|contracted procedure: k7302 
o|contracted procedure: k7288 
o|contracted procedure: k7351 
o|contracted procedure: k7347 
o|contracted procedure: k7343 
o|contracted procedure: k7436 
o|contracted procedure: k7440 
o|contracted procedure: k7444 
o|contracted procedure: k7371 
o|contracted procedure: k7432 
o|contracted procedure: k7428 
o|contracted procedure: k7391 
o|contracted procedure: k7399 
o|contracted procedure: k7403 
o|contracted procedure: k7417 
o|contracted procedure: k7406 
o|contracted procedure: k7410 
o|contracted procedure: k7395 
o|contracted procedure: k7888 
o|contracted procedure: k7892 
o|contracted procedure: k7896 
o|contracted procedure: k7448 
o|contracted procedure: k7461 
o|contracted procedure: k7464 
o|contracted procedure: k7561 
o|contracted procedure: k7571 
o|contracted procedure: k7578 
o|contracted procedure: k7630 
o|contracted procedure: k7582 
o|contracted procedure: k7622 
o|contracted procedure: k7606 
o|contracted procedure: k7614 
o|contracted procedure: k7610 
o|contracted procedure: k7590 
o|contracted procedure: k7586 
o|contracted procedure: k7602 
o|contracted procedure: k7647 
o|contracted procedure: k7650 
o|contracted procedure: k7669 
o|contracted procedure: k7681 
o|contracted procedure: k7687 
o|contracted procedure: k7699 
o|contracted procedure: k7732 
o|contracted procedure: k7748 
o|contracted procedure: k7744 
o|contracted procedure: k7740 
o|contracted procedure: k7736 
o|contracted procedure: k7728 
o|contracted procedure: k7494 
o|contracted procedure: k7497 
o|contracted procedure: k7518 
o|contracted procedure: k7530 
o|contracted procedure: k7522 
o|contracted procedure: k7504 
o|contracted procedure: k7546 
o|contracted procedure: k7542 
o|contracted procedure: k7757 
o|contracted procedure: k7760 
o|contracted procedure: k7763 
o|contracted procedure: k7771 
o|contracted procedure: k7779 
o|contracted procedure: k7791 
o|contracted procedure: k7813 
o|contracted procedure: k7809 
o|contracted procedure: k7794 
o|contracted procedure: k7797 
o|contracted procedure: k7805 
o|contracted procedure: k7825 
o|contracted procedure: k7828 
o|contracted procedure: k7831 
o|contracted procedure: k7839 
o|contracted procedure: k7847 
o|contracted procedure: k7859 
o|contracted procedure: k7881 
o|contracted procedure: k7877 
o|contracted procedure: k7862 
o|contracted procedure: k7865 
o|contracted procedure: k7873 
o|contracted procedure: k7909 
o|contracted procedure: k7923 
o|contracted procedure: k7930 
o|contracted procedure: k7933 
o|contracted procedure: k8038 
o|contracted procedure: k7940 
o|contracted procedure: k7965 
o|contracted procedure: k7953 
o|contracted procedure: k7957 
o|contracted procedure: k8034 
o|contracted procedure: k7975 
o|contracted procedure: k7997 
o|contracted procedure: k7985 
o|contracted procedure: k7989 
o|contracted procedure: k8030 
o|contracted procedure: k8026 
o|contracted procedure: k8014 
o|contracted procedure: k8018 
o|contracted procedure: k8053 
o|contracted procedure: k8125 
o|contracted procedure: k8056 
o|contracted procedure: k8105 
o|contracted procedure: k8068 
o|contracted procedure: k8101 
o|contracted procedure: k8097 
o|contracted procedure: k8080 
o|contracted procedure: k8108 
o|contracted procedure: k8115 
o|contracted procedure: k8138 
o|contracted procedure: k8186 
o|contracted procedure: k8142 
o|contracted procedure: k8182 
o|contracted procedure: k8162 
o|contracted procedure: k8178 
o|contracted procedure: k8170 
o|contracted procedure: k8166 
o|contracted procedure: k8208 
o|contracted procedure: k8221 
o|contracted procedure: k8226 
o|contracted procedure: k8229 
o|contracted procedure: k8235 
o|contracted procedure: k8249 
o|contracted procedure: k8257 
o|contracted procedure: k8263 
o|contracted procedure: k8245 
o|contracted procedure: k8274 
o|contracted procedure: k8277 
o|contracted procedure: k8325 
o|contracted procedure: k8289 
o|contracted procedure: k8292 
o|contracted procedure: k8295 
o|contracted procedure: k8303 
o|contracted procedure: k8307 
o|contracted procedure: k8315 
o|contracted procedure: k8319 
o|contracted procedure: k8337 
o|contracted procedure: k8359 
o|contracted procedure: k8355 
o|contracted procedure: k8340 
o|contracted procedure: k8343 
o|contracted procedure: k8351 
o|contracted procedure: k8371 
o|contracted procedure: k8378 
o|contracted procedure: k8398 
o|contracted procedure: k8407 
o|contracted procedure: k8429 
o|contracted procedure: k8425 
o|contracted procedure: k8410 
o|contracted procedure: k8413 
o|contracted procedure: k8421 
o|contracted procedure: k8441 
o|contracted procedure: k8463 
o|contracted procedure: k8459 
o|contracted procedure: k8444 
o|contracted procedure: k8447 
o|contracted procedure: k8455 
o|contracted procedure: k8479 
o|contracted procedure: k8496 
o|contracted procedure: k8503 
o|contracted procedure: k8520 
o|contracted procedure: k8510 
o|contracted procedure: k8533 
o|contracted procedure: k8563 
o|contracted procedure: k8543 
o|contracted procedure: k8553 
o|contracted procedure: k8571 
o|contracted procedure: k8601 
o|contracted procedure: k8577 
o|contracted procedure: k8597 
o|contracted procedure: k8606 
o|contracted procedure: k8609 
o|contracted procedure: k8618 
o|contracted procedure: k8634 
o|contracted procedure: k8646 
o|contracted procedure: k8656 
o|contracted procedure: k8673 
o|contracted procedure: k8684 
o|contracted procedure: k8696 
o|contracted procedure: k8680 
o|contracted procedure: k8708 
o|contracted procedure: k8711 
o|contracted procedure: k8714 
o|contracted procedure: k8722 
o|contracted procedure: k8730 
o|contracted procedure: k8766 
o|contracted procedure: k8770 
o|contracted procedure: k8762 
o|contracted procedure: k8746 
o|contracted procedure: k8754 
o|contracted procedure: k8799 
o|contracted procedure: k8777 
o|contracted procedure: k8781 
o|contracted procedure: k8791 
o|contracted procedure: k8813 
o|contracted procedure: k8802 
o|contracted procedure: k8809 
o|contracted procedure: k8822 
o|contracted procedure: k8844 
o|contracted procedure: k8840 
o|contracted procedure: k8825 
o|contracted procedure: k8828 
o|contracted procedure: k8836 
o|contracted procedure: k8856 
o|contracted procedure: k8862 
o|contracted procedure: k8891 
o|contracted procedure: k8873 
o|inlining procedure: k8865 
o|inlining procedure: k8865 
o|contracted procedure: k8900 
o|contracted procedure: k8903 
o|contracted procedure: k8906 
o|contracted procedure: k8914 
o|contracted procedure: k8922 
o|contracted procedure: k8934 
o|contracted procedure: k8937 
o|contracted procedure: k8948 
o|contracted procedure: k8957 
o|inlining procedure: k8940 
o|contracted procedure: k8972 
o|contracted procedure: k8994 
o|contracted procedure: k8990 
o|contracted procedure: k8975 
o|contracted procedure: k8978 
o|contracted procedure: k8986 
o|contracted procedure: k9022 
o|contracted procedure: k9030 
o|contracted procedure: k9034 
o|contracted procedure: k9038 
o|contracted procedure: k9056 
o|contracted procedure: k9062 
o|contracted procedure: k9079 
o|contracted procedure: k9101 
o|contracted procedure: k9097 
o|contracted procedure: k9082 
o|contracted procedure: k9085 
o|contracted procedure: k9093 
o|contracted procedure: k9113 
o|contracted procedure: k9123 
o|contracted procedure: k9127 
o|contracted procedure: k9144 
o|contracted procedure: k9148 
o|contracted procedure: k9165 
o|contracted procedure: k9169 
o|contracted procedure: k9173 
o|contracted procedure: k9193 
o|contracted procedure: k9197 
o|contracted procedure: k9214 
o|contracted procedure: k9234 
o|contracted procedure: k9244 
o|contracted procedure: k9247 
o|contracted procedure: k9259 
o|contracted procedure: k9262 
o|contracted procedure: k9265 
o|contracted procedure: k9273 
o|contracted procedure: k9281 
o|contracted procedure: k9312 
o|contracted procedure: k9320 
o|contracted procedure: k9323 
o|contracted procedure: k9329 
o|contracted procedure: k9335 
o|contracted procedure: k9300 
o|contracted procedure: k9347 
o|contracted procedure: k9353 
o|contracted procedure: k9368 
o|contracted procedure: k9387 
o|contracted procedure: k9390 
o|contracted procedure: k9401 
o|contracted procedure: k9404 
o|contracted procedure: k9407 
o|contracted procedure: k9418 
o|contracted procedure: k9900 
o|contracted procedure: k9896 
o|contracted procedure: k9429 
o|contracted procedure: k9671 
o|contracted procedure: k9684 
o|contracted procedure: k9680 
o|contracted procedure: k9687 
o|contracted procedure: k9667 
o|contracted procedure: k9663 
o|contracted procedure: k9437 
o|contracted procedure: k9659 
o|contracted procedure: k9441 
o|contracted procedure: k9457 
o|contracted procedure: k9453 
o|contracted procedure: k9449 
o|contracted procedure: k9445 
o|contracted procedure: k9433 
o|contracted procedure: k9425 
o|contracted procedure: k9414 
o|contracted procedure: k9397 
o|contracted procedure: k9477 
o|contracted procedure: k9489 
o|contracted procedure: k9542 
o|contracted procedure: k9506 
o|contracted procedure: k9532 
o|contracted procedure: k9536 
o|contracted procedure: k9528 
o|contracted procedure: k9509 
o|contracted procedure: k9512 
o|contracted procedure: k9520 
o|contracted procedure: k9524 
o|contracted procedure: k9590 
o|contracted procedure: k9554 
o|contracted procedure: k9580 
o|contracted procedure: k9584 
o|contracted procedure: k9576 
o|contracted procedure: k9557 
o|contracted procedure: k9560 
o|contracted procedure: k9568 
o|contracted procedure: k9572 
o|contracted procedure: k9605 
o|contracted procedure: k9608 
o|contracted procedure: k9616 
o|contracted procedure: k9620 
o|contracted procedure: k9624 
o|contracted procedure: k9632 
o|contracted procedure: k9640 
o|contracted procedure: k9466 
o|contracted procedure: k9646 
o|contracted procedure: k9652 
o|contracted procedure: k9698 
o|contracted procedure: k9718 
o|contracted procedure: k9734 
o|contracted procedure: k9730 
o|contracted procedure: k9779 
o|contracted procedure: k9743 
o|contracted procedure: k9769 
o|contracted procedure: k9773 
o|contracted procedure: k9765 
o|contracted procedure: k9746 
o|contracted procedure: k9749 
o|contracted procedure: k9757 
o|contracted procedure: k9761 
o|contracted procedure: k9827 
o|contracted procedure: k9791 
o|contracted procedure: k9794 
o|contracted procedure: k9797 
o|contracted procedure: k9805 
o|contracted procedure: k9809 
o|contracted procedure: k9817 
o|contracted procedure: k9821 
o|contracted procedure: k9707 
o|contracted procedure: k9842 
o|contracted procedure: k9845 
o|contracted procedure: k9853 
o|contracted procedure: k9857 
o|contracted procedure: k9861 
o|contracted procedure: k9869 
o|contracted procedure: k9873 
o|contracted procedure: k9877 
o|contracted procedure: k9883 
o|contracted procedure: k9889 
o|contracted procedure: k9945 
o|contracted procedure: k9909 
o|contracted procedure: k9935 
o|contracted procedure: k9939 
o|contracted procedure: k9931 
o|contracted procedure: k9912 
o|contracted procedure: k9915 
o|contracted procedure: k9923 
o|contracted procedure: k9927 
o|contracted procedure: k9993 
o|contracted procedure: k9957 
o|contracted procedure: k9983 
o|contracted procedure: k9987 
o|contracted procedure: k9979 
o|contracted procedure: k9960 
o|contracted procedure: k9963 
o|contracted procedure: k9971 
o|contracted procedure: k9975 
o|contracted procedure: k10041 
o|contracted procedure: k10005 
o|contracted procedure: k10031 
o|contracted procedure: k10035 
o|contracted procedure: k10027 
o|contracted procedure: k10008 
o|contracted procedure: k10011 
o|contracted procedure: k10019 
o|contracted procedure: k10023 
o|contracted procedure: k10053 
o|contracted procedure: k10056 
o|contracted procedure: k10059 
o|contracted procedure: k10067 
o|contracted procedure: k10087 
o|contracted procedure: k10090 
o|contracted procedure: k10093 
o|contracted procedure: k10101 
o|contracted procedure: k10121 
o|contracted procedure: k10124 
o|contracted procedure: k10127 
o|contracted procedure: k10135 
o|contracted procedure: k10143 
o|contracted procedure: k10155 
o|contracted procedure: k10177 
o|contracted procedure: k10173 
o|contracted procedure: k10158 
o|contracted procedure: k10161 
o|contracted procedure: k10169 
o|contracted procedure: k10189 
o|contracted procedure: k10211 
o|contracted procedure: k10207 
o|contracted procedure: k10192 
o|contracted procedure: k10195 
o|contracted procedure: k10203 
o|contracted procedure: k10227 
o|contracted procedure: k10232 
o|contracted procedure: k10235 
o|contracted procedure: k10241 
o|contracted procedure: k10256 
o|contracted procedure: k10439 
o|contracted procedure: k10283 
o|contracted procedure: k10435 
o|contracted procedure: k10287 
o|contracted procedure: k10295 
o|contracted procedure: k10291 
o|contracted procedure: k10279 
o|contracted procedure: k10303 
o|contracted procedure: k10319 
o|contracted procedure: k10335 
o|contracted procedure: k10331 
o|contracted procedure: k10380 
o|contracted procedure: k10344 
o|contracted procedure: k10370 
o|contracted procedure: k10374 
o|contracted procedure: k10366 
o|contracted procedure: k10347 
o|contracted procedure: k10350 
o|contracted procedure: k10358 
o|contracted procedure: k10362 
o|contracted procedure: k10428 
o|contracted procedure: k10392 
o|contracted procedure: k10418 
o|contracted procedure: k10422 
o|contracted procedure: k10414 
o|contracted procedure: k10395 
o|contracted procedure: k10398 
o|contracted procedure: k10406 
o|contracted procedure: k10410 
o|contracted procedure: k10447 
o|contracted procedure: k10455 
o|contracted procedure: k10466 
o|contracted procedure: k10482 
o|contracted procedure: k10478 
o|contracted procedure: k10527 
o|contracted procedure: k10491 
o|contracted procedure: k10517 
o|contracted procedure: k10521 
o|contracted procedure: k10513 
o|contracted procedure: k10494 
o|contracted procedure: k10497 
o|contracted procedure: k10505 
o|contracted procedure: k10509 
o|contracted procedure: k10575 
o|contracted procedure: k10539 
o|contracted procedure: k10565 
o|contracted procedure: k10569 
o|contracted procedure: k10561 
o|contracted procedure: k10542 
o|contracted procedure: k10545 
o|contracted procedure: k10553 
o|contracted procedure: k10557 
o|contracted procedure: k10582 
o|contracted procedure: k10585 
o|contracted procedure: k10591 
o|contracted procedure: k10594 
o|contracted procedure: k10601 
o|contracted procedure: k10607 
o|contracted procedure: k10610 
o|contracted procedure: k10658 
o|contracted procedure: k10622 
o|contracted procedure: k10648 
o|contracted procedure: k10652 
o|contracted procedure: k10644 
o|contracted procedure: k10625 
o|contracted procedure: k10628 
o|contracted procedure: k10636 
o|contracted procedure: k10640 
o|contracted procedure: k10672 
o|contracted procedure: k10683 
o|contracted procedure: k10728 
o|contracted procedure: k10692 
o|contracted procedure: k10718 
o|contracted procedure: k10722 
o|contracted procedure: k10714 
o|contracted procedure: k10695 
o|contracted procedure: k10698 
o|contracted procedure: k10706 
o|contracted procedure: k10710 
o|contracted procedure: k10740 
o|contracted procedure: k10762 
o|contracted procedure: k10758 
o|contracted procedure: k10743 
o|contracted procedure: k10746 
o|contracted procedure: k10754 
o|contracted procedure: k10774 
o|contracted procedure: k10777 
o|contracted procedure: k10780 
o|contracted procedure: k10788 
o|contracted procedure: k10808 
o|contracted procedure: k10811 
o|contracted procedure: k10814 
o|contracted procedure: k10822 
o|contracted procedure: k10842 
o|contracted procedure: k10864 
o|contracted procedure: k10860 
o|contracted procedure: k10845 
o|contracted procedure: k10848 
o|contracted procedure: k10856 
o|contracted procedure: k10884 
o|contracted procedure: k10901 
o|contracted procedure: k10922 
o|contracted procedure: k10918 
o|contracted procedure: k10936 
o|contracted procedure: k11029 
o|contracted procedure: k10952 
o|contracted procedure: k10963 
o|contracted procedure: k10959 
o|contracted procedure: k10971 
o|contracted procedure: k10974 
o|contracted procedure: k11002 
o|contracted procedure: k10998 
o|contracted procedure: k10994 
o|contracted procedure: k10990 
o|contracted procedure: k11009 
o|contracted procedure: k11017 
o|contracted procedure: k11013 
o|contracted procedure: k11020 
o|contracted procedure: k11042 
o|contracted procedure: k11054 
o|contracted procedure: k11066 
o|contracted procedure: k11074 
o|contracted procedure: k11089 
o|contracted procedure: k11101 
o|contracted procedure: k11117 
o|contracted procedure: k11107 
o|inlining procedure: k11080 
o|inlining procedure: k11080 
o|inlining procedure: k11080 
o|inlining procedure: k11080 
o|inlining procedure: k11080 
o|contracted procedure: k11124 
o|contracted procedure: k11376 
o|contracted procedure: k11138 
o|contracted procedure: k11366 
o|contracted procedure: k11362 
o|contracted procedure: k11358 
o|contracted procedure: k11354 
o|contracted procedure: k11146 
o|contracted procedure: k11332 
o|contracted procedure: k11340 
o|contracted procedure: k11336 
o|contracted procedure: k11328 
o|contracted procedure: k11154 
o|contracted procedure: k11150 
o|contracted procedure: k11142 
o|contracted procedure: k11134 
o|contracted procedure: k11167 
o|contracted procedure: k11170 
o|contracted procedure: k11320 
o|contracted procedure: k11173 
o|contracted procedure: k11285 
o|contracted procedure: k11301 
o|contracted procedure: k11297 
o|contracted procedure: k11289 
o|contracted procedure: k11293 
o|contracted procedure: k11185 
o|contracted procedure: k11192 
o|contracted procedure: k11200 
o|contracted procedure: k11204 
o|contracted procedure: k11220 
o|contracted procedure: k11216 
o|contracted procedure: k11235 
o|contracted procedure: k11251 
o|contracted procedure: k11247 
o|contracted procedure: k11239 
o|contracted procedure: k11243 
o|contracted procedure: k11231 
o|contracted procedure: k11258 
o|contracted procedure: k11274 
o|contracted procedure: k11270 
o|contracted procedure: k11262 
o|contracted procedure: k11266 
o|contracted procedure: k11281 
o|contracted procedure: k11313 
o|contracted procedure: k11385 
o|contracted procedure: k11388 
o|contracted procedure: k11391 
o|contracted procedure: k11399 
o|contracted procedure: k11407 
o|contracted procedure: k11441 
o|contracted procedure: k11451 
o|contracted procedure: k11460 
o|contracted procedure: k11463 
o|contracted procedure: k11474 
o|contracted procedure: k11480 
o|contracted procedure: k11508 
o|contracted procedure: k11527 
o|contracted procedure: k11535 
o|contracted procedure: k11539 
o|contracted procedure: k11558 
o|contracted procedure: k11577 
o|contracted procedure: k11585 
o|contracted procedure: k11589 
o|contracted procedure: k11599 
o|contracted procedure: k11608 
o|contracted procedure: k11623 
o|contracted procedure: k11619 
o|contracted procedure: k11632 
o|contracted procedure: k11654 
o|contracted procedure: k11635 
o|contracted procedure: k11650 
o|contracted procedure: k11646 
o|contracted procedure: k11660 
o|contracted procedure: k11663 
o|contracted procedure: k11669 
o|contracted procedure: k11676 
o|contracted procedure: k11679 
o|contracted procedure: k11686 
o|contracted procedure: k11715 
o|contracted procedure: k11707 
o|contracted procedure: k11735 
o|contracted procedure: k11745 
o|contracted procedure: k11741 
o|contracted procedure: k11762 
o|contracted procedure: k11822 
o|contracted procedure: k11778 
o|contracted procedure: k11798 
o|contracted procedure: k11802 
o|contracted procedure: k11806 
o|contracted procedure: k11794 
o|contracted procedure: k11814 
o|contracted procedure: k11818 
o|contracted procedure: k11835 
o|contracted procedure: k11945 
o|contracted procedure: k11941 
o|contracted procedure: k11848 
o|contracted procedure: k11864 
o|contracted procedure: k11880 
o|contracted procedure: k11885 
o|contracted procedure: k11895 
o|contracted procedure: k11900 
o|contracted procedure: k11860 
o|contracted procedure: k11856 
o|contracted procedure: k11852 
o|contracted procedure: k11912 
o|contracted procedure: k11915 
o|contracted procedure: k11918 
o|contracted procedure: k11926 
o|contracted procedure: k11934 
o|contracted procedure: k12312 
o|contracted procedure: k11958 
o|contracted procedure: k11964 
o|contracted procedure: k11967 
o|contracted procedure: k11986 
o|contracted procedure: k11998 
o|contracted procedure: k12007 
o|contracted procedure: k12097 
o|contracted procedure: k12101 
o|contracted procedure: k12017 
o|contracted procedure: k12025 
o|contracted procedure: k12033 
o|contracted procedure: k12029 
o|contracted procedure: k12021 
o|contracted procedure: k12090 
o|contracted procedure: k12054 
o|contracted procedure: k12057 
o|contracted procedure: k12060 
o|contracted procedure: k12068 
o|contracted procedure: k12072 
o|contracted procedure: k12080 
o|contracted procedure: k12084 
o|contracted procedure: k12042 
o|contracted procedure: k12117 
o|contracted procedure: k12113 
o|contracted procedure: k12124 
o|contracted procedure: k12131 
o|contracted procedure: k12139 
o|contracted procedure: k12151 
o|contracted procedure: k12154 
o|contracted procedure: k12157 
o|contracted procedure: k12165 
o|contracted procedure: k12173 
o|contracted procedure: k12195 
o|contracted procedure: k12202 
o|contracted procedure: k12210 
o|contracted procedure: k12214 
o|contracted procedure: k12217 
o|contracted procedure: k12223 
o|contracted procedure: k12232 
o|contracted procedure: k12236 
o|contracted procedure: k12267 
o|contracted procedure: k12251 
o|contracted procedure: k12255 
o|contracted procedure: k12263 
o|contracted procedure: k12273 
o|contracted procedure: k12279 
o|contracted procedure: k12286 
o|contracted procedure: k12308 
o|contracted procedure: k12297 
o|contracted procedure: k12322 
o|contracted procedure: k12331 
o|contracted procedure: k12339 
o|contracted procedure: k12342 
o|contracted procedure: k12348 
o|contracted procedure: k12360 
o|contracted procedure: k12363 
o|contracted procedure: k12369 
o|contracted procedure: k12380 
o|contracted procedure: k12410 
o|contracted procedure: k12406 
o|contracted procedure: k12398 
o|contracted procedure: k12394 
o|contracted procedure: k12419 
o|contracted procedure: k12422 
o|contracted procedure: k12425 
o|contracted procedure: k12433 
o|contracted procedure: k12441 
o|contracted procedure: k12357 
o|contracted procedure: k12453 
o|contracted procedure: k12475 
o|contracted procedure: k12471 
o|contracted procedure: k12456 
o|contracted procedure: k12459 
o|contracted procedure: k12467 
o|contracted procedure: k12484 
o|contracted procedure: k12512 
o|contracted procedure: k12531 
o|contracted procedure: k12539 
o|contracted procedure: k12543 
o|contracted procedure: k12562 
o|contracted procedure: k12580 
o|contracted procedure: k12590 
o|contracted procedure: k12597 
o|contracted procedure: k12600 
o|contracted procedure: k12606 
o|contracted procedure: k12613 
o|contracted procedure: k12617 
o|contracted procedure: k12621 
o|contracted procedure: k12659 
o|contracted procedure: k12637 
o|contracted procedure: k12651 
o|contracted procedure: k12655 
o|contracted procedure: k12766 
o|contracted procedure: k12675 
o|contracted procedure: k12702 
o|contracted procedure: k12758 
o|contracted procedure: k12754 
o|contracted procedure: k12750 
o|contracted procedure: k12716 
o|contracted procedure: k12712 
o|contracted procedure: k12739 
o|contracted procedure: k12735 
o|contracted procedure: k12728 
o|contracted procedure: k12746 
o|contracted procedure: k12762 
o|contracted procedure: k13039 
o|contracted procedure: k12770 
o|contracted procedure: k12813 
o|contracted procedure: k12831 
o|contracted procedure: k12840 
o|contracted procedure: k12843 
o|contracted procedure: k12827 
o|contracted procedure: k12823 
o|contracted procedure: k12855 
o|contracted procedure: k12858 
o|contracted procedure: k12861 
o|contracted procedure: k12869 
o|contracted procedure: k12877 
o|contracted procedure: k12899 
o|contracted procedure: k12891 
o|contracted procedure: k12895 
o|contracted procedure: k12887 
o|contracted procedure: k12906 
o|contracted procedure: k12920 
o|contracted procedure: k12915 
o|contracted procedure: k13035 
o|contracted procedure: k13027 
o|contracted procedure: k13031 
o|contracted procedure: k13023 
o|contracted procedure: k13019 
o|contracted procedure: k12939 
o|contracted procedure: k12943 
o|contracted procedure: k12946 
o|contracted procedure: k12949 
o|contracted procedure: k12955 
o|contracted procedure: k12931 
o|contracted procedure: k12935 
o|contracted procedure: k12970 
o|contracted procedure: k12981 
o|contracted procedure: k12977 
o|contracted procedure: k12967 
o|contracted procedure: k12990 
o|contracted procedure: k12993 
o|contracted procedure: k12996 
o|contracted procedure: k13004 
o|contracted procedure: k13012 
o|contracted procedure: k13146 
o|contracted procedure: k13043 
o|contracted procedure: k13078 
o|contracted procedure: k13142 
o|contracted procedure: k13126 
o|contracted procedure: k13138 
o|contracted procedure: k13134 
o|contracted procedure: k13130 
o|contracted procedure: k13086 
o|contracted procedure: k13118 
o|contracted procedure: k13098 
o|contracted procedure: k13114 
o|contracted procedure: k13110 
o|contracted procedure: k13106 
o|contracted procedure: k13102 
o|contracted procedure: k13094 
o|contracted procedure: k13090 
o|contracted procedure: k13082 
o|contracted procedure: k13074 
o|contracted procedure: k13066 
o|simplifications: ((let . 107)) 
o|removed binding forms: 1030 
o|inlining procedure: k6734 
o|substituted constant variable: r1108114654 
o|substituted constant variable: r1108114655 
o|substituted constant variable: r1108114656 
o|substituted constant variable: r1108114657 
o|inlining procedure: k11224 
o|inlining procedure: k11224 
o|inlining procedure: k11876 
o|inlining procedure: k11876 
o|inlining procedure: k12121 
o|inlining procedure: k12121 
o|simplifications: ((let . 1)) 
o|replaced variables: 357 
o|removed binding forms: 2 
o|removed conditional forms: 4 
o|substituted constant variable: r1187714825 
o|substituted constant variable: r1187714825 
o|replaced variables: 2 
o|removed binding forms: 244 
o|contracted procedure: k9628 
o|contracted procedure: k9813 
o|contracted procedure: k12076 
o|contracted procedure: k12437 
o|replaced variables: 2 
o|removed binding forms: 8 
o|removed binding forms: 1 
o|direct leaf routine/allocation: g30443053 0 
o|direct leaf routine/allocation: g18451856 30 
o|direct leaf routine/allocation: g623632 15 
o|contracted procedure: "(chicken-syntax.scm:1106) k6595" 
o|contracted procedure: "(chicken-syntax.scm:512) k9865" 
o|contracted procedure: "(chicken-syntax.scm:95) k12873" 
o|removed binding forms: 3 
o|customizable procedures: (map-loop648665 k12801 k12804 k12807 map-loop617638 k12724 k12583 loop734755 loop734771 map-loop782800 map-loop810828 k12242 loop855 loop2869 map-loop879904 map-loop913937 g974983 map-loop968990 k11605 k11629 loop10881109 loop10881120 g11631172 map-loop11571183 k11212 mapslots1193 k10983 map-loop12761293 g13091318 map-loop13031321 g13371346 map-loop13311349 map-loop13821399 map-loop13611406 loop1437 map-loop14181440 map-loop14521476 map-loop14881512 map-loop15241548 map-loop15601584 map-loop16061623 map-loop16331650 g16661675 map-loop16601678 g16941703 map-loop16881706 g17221731 map-loop17161734 map-loop17461765 map-loop17771796 map-loop18081827 k9839 map-loop18391866 map-loop18811905 map-loop19171941 k9602 map-loop19531980 map-loop19952019 map-loop20312055 g20812090 map-loop20752120 for-each-loop21562183 map-loop21662196 map-loop22272244 loop2252 g22712280 map-loop22652283 loop2293 map-loop23512369 k8739 fold2303 g23222331 map-loop23162334 fold2385 map-loop24042421 map-loop24302447 foldl24822486 map-loop24592498 map-loop25072526 quotify-proc25592561 k8059 k8071 fold2585 map-loop26592676 g26952704 map-loop26892707 map-loop27172734 g27522761 map-loop27462764 recur2629 make-if-tree2623 prefix-sym2683 recur2644 loop2812 map-loop28422863 genvars2834 foldr28852888 g28902891 k6895 build2910 map-loop29332952 loop122 loop2836 map-loop30093026 map-loop30383056 k6359 k6365 k6372 k6380 loop3063 loop3107 loop3137 k5740 k5763 take) 
o|calls to known targets: 254 
o|identified direct recursive calls: f_4313 1 
o|identified direct recursive calls: f_6572 1 
o|identified direct recursive calls: f_6610 1 
o|identified direct recursive calls: f_4371 1 
o|identified direct recursive calls: f_6941 1 
o|identified direct recursive calls: f_6865 1 
o|identified direct recursive calls: f_7786 1 
o|identified direct recursive calls: f_7854 1 
o|identified direct recursive calls: f_8332 1 
o|identified direct recursive calls: f_8402 1 
o|identified direct recursive calls: f_8436 1 
o|identified direct recursive calls: f_8491 1 
o|identified direct recursive calls: f_8817 1 
o|identified direct recursive calls: f_8929 1 
o|identified direct recursive calls: f_8967 1 
o|identified direct recursive calls: f_9074 1 
o|identified direct recursive calls: f_9501 1 
o|identified direct recursive calls: f_9549 1 
o|identified direct recursive calls: f_9738 1 
o|identified direct recursive calls: f_9786 1 
o|identified direct recursive calls: f_9904 1 
o|identified direct recursive calls: f_9952 1 
o|identified direct recursive calls: f_10000 1 
o|identified direct recursive calls: f_10150 1 
o|identified direct recursive calls: f_10184 1 
o|identified direct recursive calls: f_10339 1 
o|identified direct recursive calls: f_10387 1 
o|identified direct recursive calls: f_10486 1 
o|identified direct recursive calls: f_10534 1 
o|identified direct recursive calls: f_10617 1 
o|identified direct recursive calls: f_10667 1 
o|identified direct recursive calls: f_10687 1 
o|identified direct recursive calls: f_10735 1 
o|identified direct recursive calls: f_10837 1 
o|identified direct recursive calls: f_12049 1 
o|identified direct recursive calls: f_12190 1 
o|identified direct recursive calls: f_11993 1 
o|identified direct recursive calls: f_12414 1 
o|identified direct recursive calls: f_12448 1 
o|identified direct recursive calls: f_12850 1 
o|fast box initializations: 77 
o|fast global references: 2 
o|fast global assignments: 1 
o|dropping unused closure argument: f_4313 
o|dropping unused closure argument: f_7656 
*/
/* end of file */

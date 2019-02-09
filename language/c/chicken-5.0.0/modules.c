/* Generated from modules.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: modules.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file modules.c
   unit: modules
   uses: chicken-syntax library internal expand
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[240];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,19),40,100,101,108,101,116,101,32,120,32,108,115,116,32,116,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,15),40,109,111,100,117,108,101,45,110,97,109,101,32,120,41,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,25),40,109,111,100,117,108,101,45,117,110,100,101,102,105,110,101,100,45,108,105,115,116,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,32),40,115,101,116,45,109,111,100,117,108,101,45,117,110,100,101,102,105,110,101,100,45,108,105,115,116,33,32,120,32,121,41};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,24),40,35,35,115,121,115,35,109,111,100,117,108,101,45,101,120,112,111,114,116,115,32,109,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,40),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,109,111,100,117,108,101,45,97,108,105,97,115,32,97,108,105,97,115,32,110,97,109,101,41};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,7),40,97,53,53,53,50,41,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,7),40,97,53,53,54,57,41,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,7),40,97,53,53,55,53,41,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,57,48,48,32,103,57,49,50,41,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,119,105,116,104,45,109,111,100,117,108,101,45,97,108,105,97,115,101,115,32,98,105,110,100,105,110,103,115,32,116,104,117,110,107,41,0,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,8),40,103,57,52,52,32,97,41};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,110,32,100,111,110,101,41,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,114,101,115,111,108,118,101,45,109,111,100,117,108,101,45,110,97,109,101,32,110,97,109,101,32,108,111,99,41,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,102,105,110,100,45,109,111,100,117,108,101,32,110,97,109,101,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,8),40,103,57,56,50,32,109,41};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,25),40,35,35,115,121,115,35,115,119,105,116,99,104,45,109,111,100,117,108,101,32,109,111,100,41,0,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,7),40,103,49,48,49,53,41,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,6),40,103,57,57,57,41,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,24),40,102,111,114,45,101,97,99,104,45,108,111,111,112,57,57,56,32,103,49,48,48,53,41};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,35),40,35,35,115,121,115,35,97,100,100,45,116,111,45,101,120,112,111,114,116,45,108,105,115,116,32,109,111,100,32,101,120,112,115,41,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,54),40,35,35,115,121,115,35,116,111,112,108,101,118,101,108,45,100,101,102,105,110,105,116,105,111,110,45,104,111,111,107,32,115,121,109,32,114,101,110,97,109,101,100,32,101,120,112,111,114,116,101,100,63,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,109,101,116,97,45,101,120,112,114,101,115,115,105,111,110,32,101,120,112,41,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,30),40,99,104,101,99,107,45,102,111,114,45,114,101,100,101,102,32,115,121,109,32,101,110,118,32,115,101,110,118,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,101,120,112,111,114,116,32,115,121,109,32,109,111,100,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,115,121,110,116,97,120,45,101,120,112,111,114,116,32,115,121,109,32,109,111,100,32,118,97,108,41,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,11),40,97,54,49,50,48,32,120,32,121,41,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,40),40,35,35,115,121,115,35,117,110,114,101,103,105,115,116,101,114,45,115,121,110,116,97,120,45,101,120,112,111,114,116,32,115,121,109,32,109,111,100,41};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,47),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,109,111,100,117,108,101,32,110,97,109,101,32,108,105,98,32,101,120,112,108,105,115,116,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,13),40,102,119,100,32,115,101,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,9),40,98,119,100,32,115,101,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,9),40,97,52,54,55,53,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,10),40,103,50,57,54,32,120,32,114,41,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,15),40,102,111,108,100,114,50,57,49,32,103,50,57,50,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,14),40,109,101,114,103,101,45,115,101,32,115,101,115,41,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,15),40,103,49,50,53,50,32,115,101,120,112,111,114,116,41,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,115,100,41,0,0,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,50,52,54,32,103,49,50,53,56,41,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,50,49,51,32,103,49,50,50,53,41,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,40),40,35,35,115,121,115,35,99,111,109,112,105,108,101,100,45,109,111,100,117,108,101,45,114,101,103,105,115,116,114,97,116,105,111,110,32,109,111,100,41};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,12),40,103,49,51,56,49,32,115,101,120,112,41,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,12),40,103,49,51,57,49,32,110,101,120,112,41,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,51,57,48,32,103,49,51,57,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,51,56,48,32,103,49,51,56,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,52,56,32,103,49,51,54,48,41,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,50,48,32,103,49,51,51,50,41,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,75),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,99,111,109,112,105,108,101,100,45,109,111,100,117,108,101,32,110,97,109,101,32,108,105,98,32,105,101,120,112,111,114,116,115,32,118,101,120,112,111,114,116,115,32,115,101,120,112,111,114,116,115,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,10),40,103,49,52,52,57,32,115,101,41,0,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,52,52,51,32,103,49,52,53,53,41,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,53),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,99,111,114,101,45,109,111,100,117,108,101,32,110,97,109,101,32,108,105,98,32,118,101,120,112,111,114,116,115,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,54),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,112,114,105,109,105,116,105,118,101,45,109,111,100,117,108,101,32,110,97,109,101,32,118,101,120,112,111,114,116,115,32,46,32,114,101,115,116,41,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,120,108,41,0,0,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,30),40,102,105,110,100,45,101,120,112,111,114,116,32,115,121,109,32,109,111,100,32,105,110,100,105,114,101,99,116,41,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,9),40,103,49,54,50,50,32,97,41,0,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,54,50,49,32,103,49,54,50,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,11),40,103,49,53,57,49,32,115,121,109,41,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,53,57,48,32,103,49,53,57,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,9),40,103,49,53,55,53,32,117,41,0,0,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,9),40,103,49,54,57,49,32,109,41,0,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,54,57,48,32,103,49,54,57,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,54,53,53,32,103,49,54,54,55,41,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,13),40,119,97,114,110,32,109,115,103,32,105,100,41,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,9),40,103,49,49,52,57,32,97,41,0,0,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,9),40,103,49,49,53,54,32,97,41,0,0,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,50,32,105,101,120,112,111,114,116,115,41};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,101,120,112,111,114,116,115,41,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,53,55,52,32,103,49,53,56,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,120,108,41,0,0,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,109,101,41,0,0,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,53,50,48,32,103,49,53,51,50,41,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,27),40,35,35,115,121,115,35,102,105,110,97,108,105,122,101,45,109,111,100,117,108,101,32,109,111,100,41,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,7),40,97,56,49,51,50,41,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,7),40,97,56,49,57,52,41,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,7),40,97,56,49,57,57,41,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,7),40,97,56,50,48,56,41,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,7),40,97,56,49,56,56,41,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,7),40,97,56,50,49,51,41,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,105,109,112,111,114,116,45,108,105,98,114,97,114,121,45,104,111,111,107,32,109,110,97,109,101,41,0,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,36),40,102,105,110,100,45,109,111,100,117,108,101,47,105,109,112,111,114,116,45,108,105,98,114,97,114,121,32,108,105,98,32,108,111,99,41,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,17),40,119,97,114,110,32,109,115,103,32,109,111,100,32,105,100,41,0,0,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,9),40,116,111,115,116,114,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,21),40,109,111,100,117,108,101,45,105,109,112,111,114,116,115,32,110,97,109,101,41,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,7),40,97,56,52,51,53,41,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,10),40,103,49,56,55,57,32,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,56,55,56,32,103,49,56,56,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,9),40,103,49,56,57,57,32,97,41,0,0,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,9),40,103,49,57,48,51,32,97,41,0,0,0,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,105,100,115,32,118,32,115,32,109,105,115,115,105,110,103,41,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,60),40,97,56,52,52,53,32,110,97,109,101,49,56,52,48,32,108,105,98,49,56,52,50,32,115,112,101,99,49,56,52,52,32,105,109,112,118,49,56,52,54,32,105,109,112,115,49,56,52,56,32,105,109,112,105,49,56,53,48,41,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,7),40,97,56,53,56,53,41,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,10),40,103,49,57,53,55,32,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,57,53,54,32,103,49,57,54,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,10),40,103,49,57,55,55,32,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,105,109,112,115,32,115,32,105,100,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,10),40,103,49,57,56,50,32,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,105,109,112,118,32,118,32,105,100,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,60),40,97,56,53,57,53,32,110,97,109,101,49,57,49,48,32,108,105,98,49,57,49,50,32,115,112,101,99,49,57,49,52,32,105,109,112,118,49,57,49,54,32,105,109,112,115,49,57,49,56,32,105,109,112,105,49,57,50,48,41,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,7),40,97,56,55,54,56,41,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,10),40,103,50,48,51,54,32,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,48,51,53,32,103,50,48,52,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,48,52,56,32,103,50,48,54,48,41,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,9),40,103,50,48,56,50,32,97,41,0,0,0,0,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,105,109,112,115,32,115,32,105,100,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,9),40,103,50,48,56,55,32,97,41,0,0,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,105,109,112,118,32,118,32,105,100,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,60),40,97,56,55,55,56,32,110,97,109,101,49,57,56,57,32,108,105,98,49,57,57,49,32,115,112,101,99,49,57,57,51,32,105,109,112,118,49,57,57,53,32,105,109,112,115,49,57,57,55,32,105,109,112,105,49,57,57,57,41,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,7),40,97,57,48,49,56,41,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,12),40,114,101,110,97,109,101,32,105,109,112,41,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,49,53,51,32,103,50,49,54,53,41,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,49,50,55,32,103,50,49,51,57,41,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,60),40,97,57,48,50,56,32,110,97,109,101,50,48,57,52,32,108,105,98,50,48,57,54,32,115,112,101,99,50,48,57,56,32,105,109,112,118,50,49,48,48,32,105,109,112,115,50,49,48,50,32,105,109,112,105,50,49,48,52,41,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,120,41};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,9),40,97,56,51,52,52,32,107,41,0,0,0,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,100,101,99,111,109,112,111,115,101,45,105,109,112,111,114,116,32,120,32,114,32,99,32,108,111,99,41,0,0,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,7),40,97,57,49,56,51,41,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,49),40,97,57,49,56,57,32,110,97,109,101,50,50,48,53,32,95,50,50,48,55,32,115,112,101,99,50,50,48,57,32,118,50,50,49,49,32,115,50,50,49,51,32,105,50,50,49,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,9),40,103,50,49,57,53,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,49,57,52,32,103,50,50,48,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,65),40,35,35,115,121,115,35,101,120,112,97,110,100,45,105,109,112,111,114,116,32,120,32,114,32,99,32,105,109,112,111,114,116,45,101,110,118,32,109,97,99,114,111,45,101,110,118,32,109,101,116,97,63,32,114,101,101,120,112,63,32,108,111,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,11),40,103,50,50,53,54,32,105,109,112,41,0,0,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,11),40,103,50,50,54,54,32,105,109,112,41,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,51,51,52,32,103,50,51,52,54,41,0,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,51,48,56,32,103,50,51,50,48,41,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,51,56,56,32,103,50,52,48,48,41,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,51,54,50,32,103,50,51,55,52,41,0,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,50,54,53,32,103,50,50,55,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,50,53,53,32,103,50,50,54,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,69),40,35,35,115,121,115,35,105,109,112,111,114,116,32,115,112,101,99,32,118,115,118,32,118,115,115,32,118,115,105,32,105,109,112,111,114,116,45,101,110,118,32,109,97,99,114,111,45,101,110,118,32,109,101,116,97,63,32,114,101,101,120,112,63,32,108,111,99,41,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,26),40,109,111,100,117,108,101,45,114,101,110,97,109,101,32,115,121,109,32,112,114,101,102,105,120,41,0,0,0,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,9),40,103,49,48,57,49,32,97,41,0,0,0,0,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,11),40,103,50,52,52,53,32,109,111,100,41,0,0,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,13),40,109,114,101,110,97,109,101,32,115,121,109,41,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,9),40,103,50,52,53,54,32,97,41,0,0,0,0,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,97,108,105,97,115,45,103,108,111,98,97,108,45,104,111,111,107,32,115,121,109,32,97,115,115,105,103,110,32,119,104,101,114,101,41,0,0,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,10),40,101,114,114,32,97,114,103,115,41,0,0,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,12),40,105,102,97,99,101,32,110,97,109,101,41,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,50,32,108,115,116,41,0,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,120,112,115,41,0,0,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,118,97,108,105,100,97,116,101,45,101,120,112,111,114,116,115,32,101,120,112,115,32,108,111,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,46),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,102,117,110,99,116,111,114,32,110,97,109,101,32,102,97,114,103,115,32,102,101,120,112,115,32,98,111,100,121,41,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,10),40,101,114,114,32,97,114,103,115,41,0,0,0,0,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,53,51,52,32,103,50,53,52,54,41,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,6),40,109,101,114,114,41,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,50,32,102,97,115,41,0,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,97,115,32,102,97,115,41,0,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,43),40,35,35,115,121,115,35,105,110,115,116,97,110,116,105,97,116,101,45,102,117,110,99,116,111,114,32,110,97,109,101,32,102,110,97,109,101,32,97,114,103,115,41,0,0,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,11),40,103,50,53,57,53,32,101,120,112,41,0,0,0,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,54,49,54,32,103,50,54,50,56,41,0,0,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,53,57,52,32,103,50,54,48,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,46),40,109,97,116,99,104,45,102,117,110,99,116,111,114,45,97,114,103,117,109,101,110,116,32,110,97,109,101,32,109,110,97,109,101,32,101,120,112,115,32,102,110,97,109,101,41,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,109,111,100,117,108,101,35,109,111,100,117,108,101,45,101,110,118,105,114,111,110,109,101,110,116,32,109,110,97,109,101,32,46,32,114,101,115,116,41};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,7),40,103,51,49,49,53,41,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,49,48,57,32,103,51,49,50,49,41,0,0,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,7),40,103,51,48,55,55,41,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,48,55,49,32,103,51,48,56,51,41,0,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,7),40,103,51,48,51,57,41,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,48,51,51,32,103,51,48,52,53,41,0,0,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,7),40,103,51,48,48,49,41,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,57,57,53,32,103,51,48,48,55,41,0,0,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,7),40,103,50,57,54,51,41,0};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,57,53,55,32,103,50,57,54,57,41,0,0,0,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,7),40,103,50,57,50,53,41,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,57,49,57,32,103,50,57,51,49,41,0,0,0,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,7),40,103,50,56,56,55,41,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,56,56,49,32,103,50,56,57,51,41,0,0,0,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,7),40,103,50,56,52,57,41,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,56,52,51,32,103,50,56,53,53,41,0,0,0,0};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,7),40,103,50,56,49,49,41,0};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,56,48,53,32,103,50,56,49,55,41,0,0,0,0};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,7),40,103,50,55,55,51,41,0};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,55,54,55,32,103,50,55,55,57,41,0,0,0,0};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,7),40,103,50,55,51,53,41,0};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,55,50,57,32,103,50,55,52,49,41,0,0,0,0};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,7),40,103,50,54,57,55,41,0};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,54,57,49,32,103,50,55,48,51,41,0,0,0,0};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,7),40,103,50,54,53,57,41,0};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,54,53,51,32,103,50,54,54,53,41,0,0,0,0};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f11751)
static void C_ccall f11751(C_word c,C_word *av) C_noret;
C_noret_decl(f_10008)
static void C_ccall f_10008(C_word c,C_word *av) C_noret;
C_noret_decl(f_10016)
static void C_fcall f_10016(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10023)
static void C_ccall f_10023(C_word c,C_word *av) C_noret;
C_noret_decl(f_10033)
static void C_fcall f_10033(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10055)
static void C_ccall f_10055(C_word c,C_word *av) C_noret;
C_noret_decl(f_10057)
static void C_fcall f_10057(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10096)
static void C_ccall f_10096(C_word c,C_word *av) C_noret;
C_noret_decl(f_10117)
static void C_fcall f_10117(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10129)
static void C_fcall f_10129(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10152)
static void C_ccall f_10152(C_word c,C_word *av) C_noret;
C_noret_decl(f_10155)
static void C_ccall f_10155(C_word c,C_word *av) C_noret;
C_noret_decl(f_10166)
static void C_ccall f_10166(C_word c,C_word *av) C_noret;
C_noret_decl(f_10172)
static void C_ccall f_10172(C_word c,C_word *av) C_noret;
C_noret_decl(f_10204)
static void C_ccall f_10204(C_word c,C_word *av) C_noret;
C_noret_decl(f_10207)
static void C_ccall f_10207(C_word c,C_word *av) C_noret;
C_noret_decl(f_10218)
static void C_ccall f_10218(C_word c,C_word *av) C_noret;
C_noret_decl(f_10234)
static void C_fcall f_10234(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10238)
static void C_ccall f_10238(C_word c,C_word *av) C_noret;
C_noret_decl(f_10245)
static void C_fcall f_10245(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10258)
static void C_fcall f_10258(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10285)
static void C_ccall f_10285(C_word c,C_word *av) C_noret;
C_noret_decl(f_10298)
static void C_ccall f_10298(C_word c,C_word *av) C_noret;
C_noret_decl(f_10302)
static void C_ccall f_10302(C_word c,C_word *av) C_noret;
C_noret_decl(f_10306)
static void C_ccall f_10306(C_word c,C_word *av) C_noret;
C_noret_decl(f_10310)
static void C_ccall f_10310(C_word c,C_word *av) C_noret;
C_noret_decl(f_10324)
static void C_ccall f_10324(C_word c,C_word *av) C_noret;
C_noret_decl(f_10330)
static void C_ccall f_10330(C_word c,C_word *av) C_noret;
C_noret_decl(f_10332)
static void C_fcall f_10332(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10357)
static void C_ccall f_10357(C_word c,C_word *av) C_noret;
C_noret_decl(f_10366)
static void C_fcall f_10366(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10376)
static void C_ccall f_10376(C_word c,C_word *av) C_noret;
C_noret_decl(f_10391)
static void C_ccall f_10391(C_word c,C_word *av) C_noret;
C_noret_decl(f_10394)
static void C_ccall f_10394(C_word c,C_word *av) C_noret;
C_noret_decl(f_10397)
static void C_ccall f_10397(C_word c,C_word *av) C_noret;
C_noret_decl(f_10400)
static void C_ccall f_10400(C_word c,C_word *av) C_noret;
C_noret_decl(f_10403)
static void C_ccall f_10403(C_word c,C_word *av) C_noret;
C_noret_decl(f_10406)
static void C_ccall f_10406(C_word c,C_word *av) C_noret;
C_noret_decl(f_10409)
static void C_ccall f_10409(C_word c,C_word *av) C_noret;
C_noret_decl(f_10412)
static void C_ccall f_10412(C_word c,C_word *av) C_noret;
C_noret_decl(f_10415)
static void C_ccall f_10415(C_word c,C_word *av) C_noret;
C_noret_decl(f_10418)
static void C_ccall f_10418(C_word c,C_word *av) C_noret;
C_noret_decl(f_10421)
static void C_ccall f_10421(C_word c,C_word *av) C_noret;
C_noret_decl(f_10424)
static void C_ccall f_10424(C_word c,C_word *av) C_noret;
C_noret_decl(f_10427)
static void C_ccall f_10427(C_word c,C_word *av) C_noret;
C_noret_decl(f_10430)
static void C_ccall f_10430(C_word c,C_word *av) C_noret;
C_noret_decl(f_10433)
static void C_ccall f_10433(C_word c,C_word *av) C_noret;
C_noret_decl(f_10436)
static void C_ccall f_10436(C_word c,C_word *av) C_noret;
C_noret_decl(f_10439)
static void C_ccall f_10439(C_word c,C_word *av) C_noret;
C_noret_decl(f_10442)
static void C_ccall f_10442(C_word c,C_word *av) C_noret;
C_noret_decl(f_10445)
static void C_ccall f_10445(C_word c,C_word *av) C_noret;
C_noret_decl(f_10448)
static void C_ccall f_10448(C_word c,C_word *av) C_noret;
C_noret_decl(f_10451)
static void C_ccall f_10451(C_word c,C_word *av) C_noret;
C_noret_decl(f_10454)
static void C_ccall f_10454(C_word c,C_word *av) C_noret;
C_noret_decl(f_10457)
static void C_ccall f_10457(C_word c,C_word *av) C_noret;
C_noret_decl(f_10460)
static void C_ccall f_10460(C_word c,C_word *av) C_noret;
C_noret_decl(f_10463)
static void C_ccall f_10463(C_word c,C_word *av) C_noret;
C_noret_decl(f_10466)
static void C_ccall f_10466(C_word c,C_word *av) C_noret;
C_noret_decl(f_10469)
static void C_ccall f_10469(C_word c,C_word *av) C_noret;
C_noret_decl(f_10472)
static void C_ccall f_10472(C_word c,C_word *av) C_noret;
C_noret_decl(f_10474)
static void C_ccall f_10474(C_word c,C_word *av) C_noret;
C_noret_decl(f_10481)
static void C_ccall f_10481(C_word c,C_word *av) C_noret;
C_noret_decl(f_10510)
static void C_ccall f_10510(C_word c,C_word *av) C_noret;
C_noret_decl(f_10513)
static void C_ccall f_10513(C_word c,C_word *av) C_noret;
C_noret_decl(f_10520)
static C_word C_fcall f_10520(C_word t0,C_word t1);
C_noret_decl(f_10532)
static void C_fcall f_10532(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10567)
static void C_ccall f_10567(C_word c,C_word *av) C_noret;
C_noret_decl(f_10574)
static C_word C_fcall f_10574(C_word t0,C_word t1);
C_noret_decl(f_10586)
static void C_fcall f_10586(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10621)
static void C_ccall f_10621(C_word c,C_word *av) C_noret;
C_noret_decl(f_10628)
static C_word C_fcall f_10628(C_word t0,C_word t1);
C_noret_decl(f_10640)
static void C_fcall f_10640(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10675)
static void C_ccall f_10675(C_word c,C_word *av) C_noret;
C_noret_decl(f_10682)
static C_word C_fcall f_10682(C_word t0,C_word t1);
C_noret_decl(f_10694)
static void C_fcall f_10694(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10729)
static void C_ccall f_10729(C_word c,C_word *av) C_noret;
C_noret_decl(f_10736)
static C_word C_fcall f_10736(C_word t0,C_word t1);
C_noret_decl(f_10748)
static void C_fcall f_10748(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10783)
static void C_ccall f_10783(C_word c,C_word *av) C_noret;
C_noret_decl(f_10790)
static C_word C_fcall f_10790(C_word t0,C_word t1);
C_noret_decl(f_10802)
static void C_fcall f_10802(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10837)
static void C_ccall f_10837(C_word c,C_word *av) C_noret;
C_noret_decl(f_10844)
static C_word C_fcall f_10844(C_word t0,C_word t1);
C_noret_decl(f_10856)
static void C_fcall f_10856(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10891)
static void C_ccall f_10891(C_word c,C_word *av) C_noret;
C_noret_decl(f_10898)
static C_word C_fcall f_10898(C_word t0,C_word t1);
C_noret_decl(f_10910)
static void C_fcall f_10910(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10945)
static void C_ccall f_10945(C_word c,C_word *av) C_noret;
C_noret_decl(f_10952)
static C_word C_fcall f_10952(C_word t0,C_word t1);
C_noret_decl(f_10964)
static void C_fcall f_10964(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10999)
static void C_ccall f_10999(C_word c,C_word *av) C_noret;
C_noret_decl(f_11006)
static C_word C_fcall f_11006(C_word t0,C_word t1);
C_noret_decl(f_11018)
static void C_fcall f_11018(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11053)
static void C_ccall f_11053(C_word c,C_word *av) C_noret;
C_noret_decl(f_11060)
static C_word C_fcall f_11060(C_word t0,C_word t1);
C_noret_decl(f_11072)
static void C_fcall f_11072(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11107)
static void C_ccall f_11107(C_word c,C_word *av) C_noret;
C_noret_decl(f_11114)
static C_word C_fcall f_11114(C_word t0,C_word t1);
C_noret_decl(f_11126)
static void C_fcall f_11126(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11161)
static void C_ccall f_11161(C_word c,C_word *av) C_noret;
C_noret_decl(f_11168)
static C_word C_fcall f_11168(C_word t0,C_word t1);
C_noret_decl(f_11180)
static void C_fcall f_11180(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11215)
static void C_ccall f_11215(C_word c,C_word *av) C_noret;
C_noret_decl(f_11219)
static void C_ccall f_11219(C_word c,C_word *av) C_noret;
C_noret_decl(f_11223)
static void C_ccall f_11223(C_word c,C_word *av) C_noret;
C_noret_decl(f_3957)
static void C_ccall f_3957(C_word c,C_word *av) C_noret;
C_noret_decl(f_3960)
static void C_ccall f_3960(C_word c,C_word *av) C_noret;
C_noret_decl(f_3963)
static void C_ccall f_3963(C_word c,C_word *av) C_noret;
C_noret_decl(f_3966)
static void C_ccall f_3966(C_word c,C_word *av) C_noret;
C_noret_decl(f_4457)
static void C_fcall f_4457(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4463)
static void C_fcall f_4463(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4476)
static void C_ccall f_4476(C_word c,C_word *av) C_noret;
C_noret_decl(f_4490)
static void C_ccall f_4490(C_word c,C_word *av) C_noret;
C_noret_decl(f_4586)
static void C_fcall f_4586(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4594)
static void C_fcall f_4594(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4601)
static void C_ccall f_4601(C_word c,C_word *av) C_noret;
C_noret_decl(f_4615)
static void C_ccall f_4615(C_word c,C_word *av) C_noret;
C_noret_decl(f_4676)
static void C_ccall f_4676(C_word c,C_word *av) C_noret;
C_noret_decl(f_5248)
static void C_ccall f_5248(C_word c,C_word *av) C_noret;
C_noret_decl(f_5252)
static void C_ccall f_5252(C_word c,C_word *av) C_noret;
C_noret_decl(f_5267)
static void C_ccall f_5267(C_word c,C_word *av) C_noret;
C_noret_decl(f_5357)
static void C_ccall f_5357(C_word c,C_word *av) C_noret;
C_noret_decl(f_5366)
static void C_ccall f_5366(C_word c,C_word *av) C_noret;
C_noret_decl(f_5502)
static void C_ccall f_5502(C_word c,C_word *av) C_noret;
C_noret_decl(f_5526)
static void C_ccall f_5526(C_word c,C_word *av) C_noret;
C_noret_decl(f_5542)
static void C_ccall f_5542(C_word c,C_word *av) C_noret;
C_noret_decl(f_5544)
static void C_ccall f_5544(C_word c,C_word *av) C_noret;
C_noret_decl(f_5548)
static void C_ccall f_5548(C_word c,C_word *av) C_noret;
C_noret_decl(f_5553)
static void C_ccall f_5553(C_word c,C_word *av) C_noret;
C_noret_decl(f_5557)
static void C_ccall f_5557(C_word c,C_word *av) C_noret;
C_noret_decl(f_5561)
static void C_ccall f_5561(C_word c,C_word *av) C_noret;
C_noret_decl(f_5564)
static void C_ccall f_5564(C_word c,C_word *av) C_noret;
C_noret_decl(f_5570)
static void C_ccall f_5570(C_word c,C_word *av) C_noret;
C_noret_decl(f_5576)
static void C_ccall f_5576(C_word c,C_word *av) C_noret;
C_noret_decl(f_5580)
static void C_ccall f_5580(C_word c,C_word *av) C_noret;
C_noret_decl(f_5583)
static void C_ccall f_5583(C_word c,C_word *av) C_noret;
C_noret_decl(f_5607)
static void C_ccall f_5607(C_word c,C_word *av) C_noret;
C_noret_decl(f_5611)
static void C_ccall f_5611(C_word c,C_word *av) C_noret;
C_noret_decl(f_5613)
static void C_fcall f_5613(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5647)
static void C_ccall f_5647(C_word c,C_word *av) C_noret;
C_noret_decl(f_5655)
static void C_ccall f_5655(C_word c,C_word *av) C_noret;
C_noret_decl(f_5657)
static void C_fcall f_5657(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5665)
static void C_fcall f_5665(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5692)
static void C_ccall f_5692(C_word c,C_word *av) C_noret;
C_noret_decl(f_5694)
static void C_ccall f_5694(C_word c,C_word *av) C_noret;
C_noret_decl(f_5748)
static void C_ccall f_5748(C_word c,C_word *av) C_noret;
C_noret_decl(f_5755)
static void C_ccall f_5755(C_word c,C_word *av) C_noret;
C_noret_decl(f_5758)
static void C_ccall f_5758(C_word c,C_word *av) C_noret;
C_noret_decl(f_5761)
static void C_fcall f_5761(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5764)
static void C_ccall f_5764(C_word c,C_word *av) C_noret;
C_noret_decl(f_5770)
static void C_ccall f_5770(C_word c,C_word *av) C_noret;
C_noret_decl(f_5783)
static void C_fcall f_5783(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5795)
static void C_ccall f_5795(C_word c,C_word *av) C_noret;
C_noret_decl(f_5799)
static void C_ccall f_5799(C_word c,C_word *av) C_noret;
C_noret_decl(f_5801)
static void C_ccall f_5801(C_word c,C_word *av) C_noret;
C_noret_decl(f_5817)
static void C_ccall f_5817(C_word c,C_word *av) C_noret;
C_noret_decl(f_5818)
static C_word C_fcall f_5818(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_5826)
static C_word C_fcall f_5826(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_5840)
static void C_ccall f_5840(C_word c,C_word *av) C_noret;
C_noret_decl(f_5843)
static void C_ccall f_5843(C_word c,C_word *av) C_noret;
C_noret_decl(f_5850)
static void C_ccall f_5850(C_word c,C_word *av) C_noret;
C_noret_decl(f_5854)
static void C_ccall f_5854(C_word c,C_word *av) C_noret;
C_noret_decl(f_5860)
static void C_fcall f_5860(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5888)
static void C_ccall f_5888(C_word c,C_word *av) C_noret;
C_noret_decl(f_5890)
static void C_ccall f_5890(C_word c,C_word *av) C_noret;
C_noret_decl(f_5893)
static void C_ccall f_5893(C_word c,C_word *av) C_noret;
C_noret_decl(f_5897)
static void C_ccall f_5897(C_word c,C_word *av) C_noret;
C_noret_decl(f_5913)
static void C_fcall f_5913(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5920)
static void C_ccall f_5920(C_word c,C_word *av) C_noret;
C_noret_decl(f_5934)
static void C_ccall f_5934(C_word c,C_word *av) C_noret;
C_noret_decl(f_5944)
static void C_ccall f_5944(C_word c,C_word *av) C_noret;
C_noret_decl(f_5947)
static void C_ccall f_5947(C_word c,C_word *av) C_noret;
C_noret_decl(f_5950)
static void C_ccall f_5950(C_word c,C_word *av) C_noret;
C_noret_decl(f_5956)
static void C_ccall f_5956(C_word c,C_word *av) C_noret;
C_noret_decl(f_5959)
static void C_ccall f_5959(C_word c,C_word *av) C_noret;
C_noret_decl(f_5962)
static void C_ccall f_5962(C_word c,C_word *av) C_noret;
C_noret_decl(f_5995)
static void C_ccall f_5995(C_word c,C_word *av) C_noret;
C_noret_decl(f_5999)
static void C_ccall f_5999(C_word c,C_word *av) C_noret;
C_noret_decl(f_6006)
static void C_ccall f_6006(C_word c,C_word *av) C_noret;
C_noret_decl(f_6010)
static void C_ccall f_6010(C_word c,C_word *av) C_noret;
C_noret_decl(f_6023)
static void C_ccall f_6023(C_word c,C_word *av) C_noret;
C_noret_decl(f_6033)
static void C_ccall f_6033(C_word c,C_word *av) C_noret;
C_noret_decl(f_6036)
static void C_ccall f_6036(C_word c,C_word *av) C_noret;
C_noret_decl(f_6042)
static void C_ccall f_6042(C_word c,C_word *av) C_noret;
C_noret_decl(f_6045)
static void C_ccall f_6045(C_word c,C_word *av) C_noret;
C_noret_decl(f_6051)
static void C_ccall f_6051(C_word c,C_word *av) C_noret;
C_noret_decl(f_6085)
static void C_ccall f_6085(C_word c,C_word *av) C_noret;
C_noret_decl(f_6089)
static void C_ccall f_6089(C_word c,C_word *av) C_noret;
C_noret_decl(f_6104)
static void C_ccall f_6104(C_word c,C_word *av) C_noret;
C_noret_decl(f_6115)
static void C_ccall f_6115(C_word c,C_word *av) C_noret;
C_noret_decl(f_6121)
static void C_ccall f_6121(C_word c,C_word *av) C_noret;
C_noret_decl(f_6138)
static void C_ccall f_6138(C_word c,C_word *av) C_noret;
C_noret_decl(f_6145)
static void C_fcall f_6145(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6152)
static void C_fcall f_6152(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6197)
static void C_ccall f_6197(C_word c,C_word *av) C_noret;
C_noret_decl(f_6303)
static void C_fcall f_6303(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6311)
static void C_ccall f_6311(C_word c,C_word *av) C_noret;
C_noret_decl(f_6315)
static void C_ccall f_6315(C_word c,C_word *av) C_noret;
C_noret_decl(f_6326)
static void C_fcall f_6326(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6353)
static void C_fcall f_6353(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6376)
static void C_ccall f_6376(C_word c,C_word *av) C_noret;
C_noret_decl(f_6390)
static void C_fcall f_6390(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6398)
static void C_fcall f_6398(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6402)
static void C_ccall f_6402(C_word c,C_word *av) C_noret;
C_noret_decl(f_6415)
static void C_ccall f_6415(C_word c,C_word *av) C_noret;
C_noret_decl(f_6430)
static void C_fcall f_6430(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6448)
static void C_ccall f_6448(C_word c,C_word *av) C_noret;
C_noret_decl(f_6459)
static void C_ccall f_6459(C_word c,C_word *av) C_noret;
C_noret_decl(f_6478)
static void C_ccall f_6478(C_word c,C_word *av) C_noret;
C_noret_decl(f_6491)
static void C_ccall f_6491(C_word c,C_word *av) C_noret;
C_noret_decl(f_6501)
static void C_ccall f_6501(C_word c,C_word *av) C_noret;
C_noret_decl(f_6507)
static void C_fcall f_6507(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6515)
static void C_ccall f_6515(C_word c,C_word *av) C_noret;
C_noret_decl(f_6517)
static void C_fcall f_6517(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6540)
static void C_ccall f_6540(C_word c,C_word *av) C_noret;
C_noret_decl(f_6542)
static void C_fcall f_6542(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6569)
static void C_ccall f_6569(C_word c,C_word *av) C_noret;
C_noret_decl(f_6583)
static void C_ccall f_6583(C_word c,C_word *av) C_noret;
C_noret_decl(f_6606)
static void C_fcall f_6606(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6610)
static void C_ccall f_6610(C_word c,C_word *av) C_noret;
C_noret_decl(f_6614)
static void C_fcall f_6614(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6618)
static void C_ccall f_6618(C_word c,C_word *av) C_noret;
C_noret_decl(f_6622)
static void C_ccall f_6622(C_word c,C_word *av) C_noret;
C_noret_decl(f_6654)
static void C_fcall f_6654(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6658)
static void C_ccall f_6658(C_word c,C_word *av) C_noret;
C_noret_decl(f_6670)
static void C_fcall f_6670(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6702)
static void C_ccall f_6702(C_word c,C_word *av) C_noret;
C_noret_decl(f_6712)
static void C_ccall f_6712(C_word c,C_word *av) C_noret;
C_noret_decl(f_6727)
static void C_fcall f_6727(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6751)
static void C_ccall f_6751(C_word c,C_word *av) C_noret;
C_noret_decl(f_6767)
static void C_ccall f_6767(C_word c,C_word *av) C_noret;
C_noret_decl(f_6769)
static void C_fcall f_6769(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6794)
static void C_ccall f_6794(C_word c,C_word *av) C_noret;
C_noret_decl(f_6856)
static void C_ccall f_6856(C_word c,C_word *av) C_noret;
C_noret_decl(f_6858)
static void C_fcall f_6858(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6883)
static void C_fcall f_6883(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6913)
static void C_ccall f_6913(C_word c,C_word *av) C_noret;
C_noret_decl(f_6934)
static void C_ccall f_6934(C_word c,C_word *av) C_noret;
C_noret_decl(f_6962)
static void C_ccall f_6962(C_word c,C_word *av) C_noret;
C_noret_decl(f_6970)
static void C_ccall f_6970(C_word c,C_word *av) C_noret;
C_noret_decl(f_7000)
static void C_ccall f_7000(C_word c,C_word *av) C_noret;
C_noret_decl(f_7025)
static void C_ccall f_7025(C_word c,C_word *av) C_noret;
C_noret_decl(f_7035)
static void C_ccall f_7035(C_word c,C_word *av) C_noret;
C_noret_decl(f_7051)
static void C_ccall f_7051(C_word c,C_word *av) C_noret;
C_noret_decl(f_7061)
static void C_ccall f_7061(C_word c,C_word *av) C_noret;
C_noret_decl(f_7067)
static void C_ccall f_7067(C_word c,C_word *av) C_noret;
C_noret_decl(f_7068)
static void C_fcall f_7068(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7080)
static void C_ccall f_7080(C_word c,C_word *av) C_noret;
C_noret_decl(f_7093)
static void C_ccall f_7093(C_word c,C_word *av) C_noret;
C_noret_decl(f_7094)
static void C_fcall f_7094(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7106)
static void C_ccall f_7106(C_word c,C_word *av) C_noret;
C_noret_decl(f_7119)
static void C_ccall f_7119(C_word c,C_word *av) C_noret;
C_noret_decl(f_7122)
static void C_ccall f_7122(C_word c,C_word *av) C_noret;
C_noret_decl(f_7138)
static void C_ccall f_7138(C_word c,C_word *av) C_noret;
C_noret_decl(f_7142)
static void C_ccall f_7142(C_word c,C_word *av) C_noret;
C_noret_decl(f_7146)
static void C_ccall f_7146(C_word c,C_word *av) C_noret;
C_noret_decl(f_7148)
static void C_fcall f_7148(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7158)
static void C_ccall f_7158(C_word c,C_word *av) C_noret;
C_noret_decl(f_7171)
static void C_fcall f_7171(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7181)
static void C_ccall f_7181(C_word c,C_word *av) C_noret;
C_noret_decl(f_7198)
static void C_fcall f_7198(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7205)
static void C_ccall f_7205(C_word c,C_word *av) C_noret;
C_noret_decl(f_7209)
static void C_ccall f_7209(C_word c,C_word *av) C_noret;
C_noret_decl(f_7222)
static void C_fcall f_7222(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7247)
static void C_ccall f_7247(C_word c,C_word *av) C_noret;
C_noret_decl(f_7256)
static void C_fcall f_7256(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7281)
static void C_ccall f_7281(C_word c,C_word *av) C_noret;
C_noret_decl(f_7296)
static void C_ccall f_7296(C_word c,C_word *av) C_noret;
C_noret_decl(f_7303)
static void C_ccall f_7303(C_word c,C_word *av) C_noret;
C_noret_decl(f_7309)
static void C_ccall f_7309(C_word c,C_word *av) C_noret;
C_noret_decl(f_7325)
static void C_ccall f_7325(C_word c,C_word *av) C_noret;
C_noret_decl(f_7329)
static void C_ccall f_7329(C_word c,C_word *av) C_noret;
C_noret_decl(f_7333)
static void C_ccall f_7333(C_word c,C_word *av) C_noret;
C_noret_decl(f_7346)
static void C_fcall f_7346(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7368)
static void C_ccall f_7368(C_word c,C_word *av) C_noret;
C_noret_decl(f_7370)
static void C_fcall f_7370(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7395)
static void C_ccall f_7395(C_word c,C_word *av) C_noret;
C_noret_decl(f_7410)
static void C_ccall f_7410(C_word c,C_word *av) C_noret;
C_noret_decl(f_7425)
static void C_fcall f_7425(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7436)
static void C_fcall f_7436(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7438)
static void C_fcall f_7438(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7466)
static void C_fcall f_7466(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7503)
static void C_ccall f_7503(C_word c,C_word *av) C_noret;
C_noret_decl(f_7532)
static void C_ccall f_7532(C_word c,C_word *av) C_noret;
C_noret_decl(f_7541)
static void C_ccall f_7541(C_word c,C_word *av) C_noret;
C_noret_decl(f_7544)
static void C_ccall f_7544(C_word c,C_word *av) C_noret;
C_noret_decl(f_7547)
static void C_ccall f_7547(C_word c,C_word *av) C_noret;
C_noret_decl(f_7548)
static void C_fcall f_7548(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7562)
static void C_ccall f_7562(C_word c,C_word *av) C_noret;
C_noret_decl(f_7566)
static void C_ccall f_7566(C_word c,C_word *av) C_noret;
C_noret_decl(f_7569)
static void C_ccall f_7569(C_word c,C_word *av) C_noret;
C_noret_decl(f_7572)
static void C_ccall f_7572(C_word c,C_word *av) C_noret;
C_noret_decl(f_7575)
static void C_ccall f_7575(C_word c,C_word *av) C_noret;
C_noret_decl(f_7583)
static void C_ccall f_7583(C_word c,C_word *av) C_noret;
C_noret_decl(f_7590)
static void C_ccall f_7590(C_word c,C_word *av) C_noret;
C_noret_decl(f_7599)
static void C_ccall f_7599(C_word c,C_word *av) C_noret;
C_noret_decl(f_7602)
static void C_ccall f_7602(C_word c,C_word *av) C_noret;
C_noret_decl(f_7609)
static void C_ccall f_7609(C_word c,C_word *av) C_noret;
C_noret_decl(f_7612)
static void C_ccall f_7612(C_word c,C_word *av) C_noret;
C_noret_decl(f_7613)
static void C_fcall f_7613(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7617)
static void C_ccall f_7617(C_word c,C_word *av) C_noret;
C_noret_decl(f_7620)
static void C_ccall f_7620(C_word c,C_word *av) C_noret;
C_noret_decl(f_7632)
static void C_fcall f_7632(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7642)
static void C_ccall f_7642(C_word c,C_word *av) C_noret;
C_noret_decl(f_7664)
static void C_ccall f_7664(C_word c,C_word *av) C_noret;
C_noret_decl(f_7665)
static void C_fcall f_7665(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7669)
static void C_ccall f_7669(C_word c,C_word *av) C_noret;
C_noret_decl(f_7677)
static void C_fcall f_7677(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7687)
static void C_ccall f_7687(C_word c,C_word *av) C_noret;
C_noret_decl(f_7701)
static void C_ccall f_7701(C_word c,C_word *av) C_noret;
C_noret_decl(f_7707)
static void C_ccall f_7707(C_word c,C_word *av) C_noret;
C_noret_decl(f_7710)
static void C_ccall f_7710(C_word c,C_word *av) C_noret;
C_noret_decl(f_7738)
static void C_ccall f_7738(C_word c,C_word *av) C_noret;
C_noret_decl(f_7745)
static void C_ccall f_7745(C_word c,C_word *av) C_noret;
C_noret_decl(f_7751)
static void C_ccall f_7751(C_word c,C_word *av) C_noret;
C_noret_decl(f_7754)
static void C_ccall f_7754(C_word c,C_word *av) C_noret;
C_noret_decl(f_7755)
static void C_fcall f_7755(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7759)
static void C_ccall f_7759(C_word c,C_word *av) C_noret;
C_noret_decl(f_7777)
static void C_ccall f_7777(C_word c,C_word *av) C_noret;
C_noret_decl(f_7783)
static void C_ccall f_7783(C_word c,C_word *av) C_noret;
C_noret_decl(f_7786)
static void C_ccall f_7786(C_word c,C_word *av) C_noret;
C_noret_decl(f_7789)
static void C_ccall f_7789(C_word c,C_word *av) C_noret;
C_noret_decl(f_7800)
static void C_ccall f_7800(C_word c,C_word *av) C_noret;
C_noret_decl(f_7804)
static void C_ccall f_7804(C_word c,C_word *av) C_noret;
C_noret_decl(f_7808)
static void C_ccall f_7808(C_word c,C_word *av) C_noret;
C_noret_decl(f_7812)
static void C_ccall f_7812(C_word c,C_word *av) C_noret;
C_noret_decl(f_7818)
static void C_fcall f_7818(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7828)
static void C_ccall f_7828(C_word c,C_word *av) C_noret;
C_noret_decl(f_7843)
static void C_ccall f_7843(C_word c,C_word *av) C_noret;
C_noret_decl(f_7847)
static void C_ccall f_7847(C_word c,C_word *av) C_noret;
C_noret_decl(f_7849)
static void C_fcall f_7849(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7874)
static void C_ccall f_7874(C_word c,C_word *av) C_noret;
C_noret_decl(f_7886)
static void C_fcall f_7886(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7896)
static void C_ccall f_7896(C_word c,C_word *av) C_noret;
C_noret_decl(f_7913)
static void C_fcall f_7913(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7944)
static void C_fcall f_7944(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7948)
static void C_ccall f_7948(C_word c,C_word *av) C_noret;
C_noret_decl(f_7957)
static void C_ccall f_7957(C_word c,C_word *av) C_noret;
C_noret_decl(f_7960)
static void C_fcall f_7960(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7972)
static void C_fcall f_7972(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7988)
static void C_ccall f_7988(C_word c,C_word *av) C_noret;
C_noret_decl(f_7992)
static void C_ccall f_7992(C_word c,C_word *av) C_noret;
C_noret_decl(f_7996)
static void C_ccall f_7996(C_word c,C_word *av) C_noret;
C_noret_decl(f_8010)
static void C_ccall f_8010(C_word c,C_word *av) C_noret;
C_noret_decl(f_8043)
static void C_ccall f_8043(C_word c,C_word *av) C_noret;
C_noret_decl(f_8045)
static void C_fcall f_8045(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8058)
static void C_ccall f_8058(C_word c,C_word *av) C_noret;
C_noret_decl(f_8067)
static void C_ccall f_8067(C_word c,C_word *av) C_noret;
C_noret_decl(f_8080)
static void C_fcall f_8080(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8105)
static void C_ccall f_8105(C_word c,C_word *av) C_noret;
C_noret_decl(f_8115)
static void C_ccall f_8115(C_word c,C_word *av) C_noret;
C_noret_decl(f_8119)
static void C_ccall f_8119(C_word c,C_word *av) C_noret;
C_noret_decl(f_8125)
static void C_ccall f_8125(C_word c,C_word *av) C_noret;
C_noret_decl(f_8128)
static void C_ccall f_8128(C_word c,C_word *av) C_noret;
C_noret_decl(f_8133)
static void C_ccall f_8133(C_word c,C_word *av) C_noret;
C_noret_decl(f_8137)
static void C_ccall f_8137(C_word c,C_word *av) C_noret;
C_noret_decl(f_8140)
static void C_ccall f_8140(C_word c,C_word *av) C_noret;
C_noret_decl(f_8143)
static void C_ccall f_8143(C_word c,C_word *av) C_noret;
C_noret_decl(f_8146)
static void C_ccall f_8146(C_word c,C_word *av) C_noret;
C_noret_decl(f_8150)
static void C_ccall f_8150(C_word c,C_word *av) C_noret;
C_noret_decl(f_8154)
static void C_ccall f_8154(C_word c,C_word *av) C_noret;
C_noret_decl(f_8158)
static void C_ccall f_8158(C_word c,C_word *av) C_noret;
C_noret_decl(f_8162)
static void C_ccall f_8162(C_word c,C_word *av) C_noret;
C_noret_decl(f_8165)
static void C_ccall f_8165(C_word c,C_word *av) C_noret;
C_noret_decl(f_8168)
static void C_ccall f_8168(C_word c,C_word *av) C_noret;
C_noret_decl(f_8171)
static void C_ccall f_8171(C_word c,C_word *av) C_noret;
C_noret_decl(f_8174)
static void C_ccall f_8174(C_word c,C_word *av) C_noret;
C_noret_decl(f_8189)
static void C_ccall f_8189(C_word c,C_word *av) C_noret;
C_noret_decl(f_8195)
static void C_ccall f_8195(C_word c,C_word *av) C_noret;
C_noret_decl(f_8200)
static void C_ccall f_8200(C_word c,C_word *av) C_noret;
C_noret_decl(f_8204)
static void C_ccall f_8204(C_word c,C_word *av) C_noret;
C_noret_decl(f_8209)
static void C_ccall f_8209(C_word c,C_word *av) C_noret;
C_noret_decl(f_8214)
static void C_ccall f_8214(C_word c,C_word *av) C_noret;
C_noret_decl(f_8218)
static void C_ccall f_8218(C_word c,C_word *av) C_noret;
C_noret_decl(f_8221)
static void C_ccall f_8221(C_word c,C_word *av) C_noret;
C_noret_decl(f_8224)
static void C_ccall f_8224(C_word c,C_word *av) C_noret;
C_noret_decl(f_8227)
static void C_ccall f_8227(C_word c,C_word *av) C_noret;
C_noret_decl(f_8230)
static void C_ccall f_8230(C_word c,C_word *av) C_noret;
C_noret_decl(f_8233)
static void C_ccall f_8233(C_word c,C_word *av) C_noret;
C_noret_decl(f_8236)
static void C_ccall f_8236(C_word c,C_word *av) C_noret;
C_noret_decl(f_8239)
static void C_ccall f_8239(C_word c,C_word *av) C_noret;
C_noret_decl(f_8247)
static void C_ccall f_8247(C_word c,C_word *av) C_noret;
C_noret_decl(f_8251)
static void C_ccall f_8251(C_word c,C_word *av) C_noret;
C_noret_decl(f_8254)
static void C_fcall f_8254(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8258)
static void C_ccall f_8258(C_word c,C_word *av) C_noret;
C_noret_decl(f_8261)
static void C_ccall f_8261(C_word c,C_word *av) C_noret;
C_noret_decl(f_8269)
static void C_ccall f_8269(C_word c,C_word *av) C_noret;
C_noret_decl(f_8273)
static void C_ccall f_8273(C_word c,C_word *av) C_noret;
C_noret_decl(f_8276)
static void C_ccall f_8276(C_word c,C_word *av) C_noret;
C_noret_decl(f_8279)
static void C_ccall f_8279(C_word c,C_word *av) C_noret;
C_noret_decl(f_8282)
static void C_ccall f_8282(C_word c,C_word *av) C_noret;
C_noret_decl(f_8284)
static void C_fcall f_8284(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8292)
static void C_ccall f_8292(C_word c,C_word *av) C_noret;
C_noret_decl(f_8296)
static void C_ccall f_8296(C_word c,C_word *av) C_noret;
C_noret_decl(f_8298)
static void C_fcall f_8298(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8311)
static void C_ccall f_8311(C_word c,C_word *av) C_noret;
C_noret_decl(f_8318)
static void C_ccall f_8318(C_word c,C_word *av) C_noret;
C_noret_decl(f_8345)
static void C_ccall f_8345(C_word c,C_word *av) C_noret;
C_noret_decl(f_8348)
static void C_fcall f_8348(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8352)
static void C_ccall f_8352(C_word c,C_word *av) C_noret;
C_noret_decl(f_8355)
static void C_ccall f_8355(C_word c,C_word *av) C_noret;
C_noret_decl(f_8396)
static void C_fcall f_8396(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8410)
static void C_ccall f_8410(C_word c,C_word *av) C_noret;
C_noret_decl(f_8428)
static void C_ccall f_8428(C_word c,C_word *av) C_noret;
C_noret_decl(f_8431)
static void C_ccall f_8431(C_word c,C_word *av) C_noret;
C_noret_decl(f_8436)
static void C_ccall f_8436(C_word c,C_word *av) C_noret;
C_noret_decl(f_8446)
static void C_ccall f_8446(C_word c,C_word *av) C_noret;
C_noret_decl(f_8450)
static void C_ccall f_8450(C_word c,C_word *av) C_noret;
C_noret_decl(f_8455)
static void C_fcall f_8455(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_8463)
static void C_fcall f_8463(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8473)
static void C_ccall f_8473(C_word c,C_word *av) C_noret;
C_noret_decl(f_8486)
static void C_fcall f_8486(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8496)
static void C_ccall f_8496(C_word c,C_word *av) C_noret;
C_noret_decl(f_8514)
static void C_fcall f_8514(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8536)
static void C_fcall f_8536(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8578)
static void C_ccall f_8578(C_word c,C_word *av) C_noret;
C_noret_decl(f_8581)
static void C_ccall f_8581(C_word c,C_word *av) C_noret;
C_noret_decl(f_8586)
static void C_ccall f_8586(C_word c,C_word *av) C_noret;
C_noret_decl(f_8596)
static void C_ccall f_8596(C_word c,C_word *av) C_noret;
C_noret_decl(f_8600)
static void C_ccall f_8600(C_word c,C_word *av) C_noret;
C_noret_decl(f_8605)
static void C_fcall f_8605(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8617)
static void C_fcall f_8617(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8625)
static void C_fcall f_8625(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8635)
static void C_ccall f_8635(C_word c,C_word *av) C_noret;
C_noret_decl(f_8648)
static void C_fcall f_8648(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8658)
static void C_ccall f_8658(C_word c,C_word *av) C_noret;
C_noret_decl(f_8676)
static void C_fcall f_8676(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8688)
static void C_ccall f_8688(C_word c,C_word *av) C_noret;
C_noret_decl(f_8717)
static void C_fcall f_8717(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8729)
static void C_ccall f_8729(C_word c,C_word *av) C_noret;
C_noret_decl(f_8761)
static void C_ccall f_8761(C_word c,C_word *av) C_noret;
C_noret_decl(f_8764)
static void C_ccall f_8764(C_word c,C_word *av) C_noret;
C_noret_decl(f_8769)
static void C_ccall f_8769(C_word c,C_word *av) C_noret;
C_noret_decl(f_8779)
static void C_ccall f_8779(C_word c,C_word *av) C_noret;
C_noret_decl(f_8783)
static void C_ccall f_8783(C_word c,C_word *av) C_noret;
C_noret_decl(f_8788)
static void C_fcall f_8788(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8800)
static void C_fcall f_8800(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8808)
static void C_fcall f_8808(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8821)
static void C_ccall f_8821(C_word c,C_word *av) C_noret;
C_noret_decl(f_8827)
static void C_ccall f_8827(C_word c,C_word *av) C_noret;
C_noret_decl(f_8840)
static void C_fcall f_8840(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8850)
static void C_ccall f_8850(C_word c,C_word *av) C_noret;
C_noret_decl(f_8863)
static void C_fcall f_8863(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8902)
static void C_fcall f_8902(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8918)
static void C_ccall f_8918(C_word c,C_word *av) C_noret;
C_noret_decl(f_8955)
static void C_fcall f_8955(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8971)
static void C_ccall f_8971(C_word c,C_word *av) C_noret;
C_noret_decl(f_9011)
static void C_ccall f_9011(C_word c,C_word *av) C_noret;
C_noret_decl(f_9014)
static void C_ccall f_9014(C_word c,C_word *av) C_noret;
C_noret_decl(f_9019)
static void C_ccall f_9019(C_word c,C_word *av) C_noret;
C_noret_decl(f_9029)
static void C_ccall f_9029(C_word c,C_word *av) C_noret;
C_noret_decl(f_9033)
static void C_ccall f_9033(C_word c,C_word *av) C_noret;
C_noret_decl(f_9035)
static void C_ccall f_9035(C_word c,C_word *av) C_noret;
C_noret_decl(f_9043)
static void C_ccall f_9043(C_word c,C_word *av) C_noret;
C_noret_decl(f_9049)
static void C_ccall f_9049(C_word c,C_word *av) C_noret;
C_noret_decl(f_9053)
static void C_ccall f_9053(C_word c,C_word *av) C_noret;
C_noret_decl(f_9057)
static void C_ccall f_9057(C_word c,C_word *av) C_noret;
C_noret_decl(f_9078)
static void C_ccall f_9078(C_word c,C_word *av) C_noret;
C_noret_decl(f_9088)
static void C_ccall f_9088(C_word c,C_word *av) C_noret;
C_noret_decl(f_9090)
static void C_fcall f_9090(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9115)
static void C_ccall f_9115(C_word c,C_word *av) C_noret;
C_noret_decl(f_9124)
static void C_fcall f_9124(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9149)
static void C_ccall f_9149(C_word c,C_word *av) C_noret;
C_noret_decl(f_9167)
static void C_ccall f_9167(C_word c,C_word *av) C_noret;
C_noret_decl(f_9173)
static void C_ccall f_9173(C_word c,C_word *av) C_noret;
C_noret_decl(f_9177)
static void C_ccall f_9177(C_word c,C_word *av) C_noret;
C_noret_decl(f_9178)
static void C_fcall f_9178(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9184)
static void C_ccall f_9184(C_word c,C_word *av) C_noret;
C_noret_decl(f_9190)
static void C_ccall f_9190(C_word c,C_word *av) C_noret;
C_noret_decl(f_9212)
static void C_ccall f_9212(C_word c,C_word *av) C_noret;
C_noret_decl(f_9214)
static void C_fcall f_9214(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9224)
static void C_ccall f_9224(C_word c,C_word *av) C_noret;
C_noret_decl(f_9237)
static void C_ccall f_9237(C_word c,C_word *av) C_noret;
C_noret_decl(f_9241)
static void C_ccall f_9241(C_word c,C_word *av) C_noret;
C_noret_decl(f_9244)
static void C_ccall f_9244(C_word c,C_word *av) C_noret;
C_noret_decl(f_9254)
static void C_fcall f_9254(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9292)
static void C_ccall f_9292(C_word c,C_word *av) C_noret;
C_noret_decl(f_9298)
static void C_ccall f_9298(C_word c,C_word *av) C_noret;
C_noret_decl(f_9299)
static void C_fcall f_9299(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9335)
static void C_ccall f_9335(C_word c,C_word *av) C_noret;
C_noret_decl(f_9341)
static void C_ccall f_9341(C_word c,C_word *av) C_noret;
C_noret_decl(f_9344)
static void C_fcall f_9344(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9347)
static void C_ccall f_9347(C_word c,C_word *av) C_noret;
C_noret_decl(f_9354)
static void C_ccall f_9354(C_word c,C_word *av) C_noret;
C_noret_decl(f_9358)
static void C_ccall f_9358(C_word c,C_word *av) C_noret;
C_noret_decl(f_9362)
static void C_ccall f_9362(C_word c,C_word *av) C_noret;
C_noret_decl(f_9366)
static void C_ccall f_9366(C_word c,C_word *av) C_noret;
C_noret_decl(f_9369)
static void C_ccall f_9369(C_word c,C_word *av) C_noret;
C_noret_decl(f_9375)
static void C_ccall f_9375(C_word c,C_word *av) C_noret;
C_noret_decl(f_9378)
static void C_ccall f_9378(C_word c,C_word *av) C_noret;
C_noret_decl(f_9385)
static void C_ccall f_9385(C_word c,C_word *av) C_noret;
C_noret_decl(f_9395)
static void C_ccall f_9395(C_word c,C_word *av) C_noret;
C_noret_decl(f_9402)
static void C_ccall f_9402(C_word c,C_word *av) C_noret;
C_noret_decl(f_9413)
static void C_ccall f_9413(C_word c,C_word *av) C_noret;
C_noret_decl(f_9420)
static void C_ccall f_9420(C_word c,C_word *av) C_noret;
C_noret_decl(f_9422)
static void C_fcall f_9422(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9456)
static void C_fcall f_9456(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9492)
static void C_ccall f_9492(C_word c,C_word *av) C_noret;
C_noret_decl(f_9503)
static void C_ccall f_9503(C_word c,C_word *av) C_noret;
C_noret_decl(f_9517)
static void C_ccall f_9517(C_word c,C_word *av) C_noret;
C_noret_decl(f_9524)
static void C_ccall f_9524(C_word c,C_word *av) C_noret;
C_noret_decl(f_9526)
static void C_fcall f_9526(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9560)
static void C_fcall f_9560(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9600)
static void C_fcall f_9600(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9610)
static void C_ccall f_9610(C_word c,C_word *av) C_noret;
C_noret_decl(f_9623)
static void C_fcall f_9623(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9633)
static void C_ccall f_9633(C_word c,C_word *av) C_noret;
C_noret_decl(f_9654)
static void C_ccall f_9654(C_word c,C_word *av) C_noret;
C_noret_decl(f_9669)
static void C_ccall f_9669(C_word c,C_word *av) C_noret;
C_noret_decl(f_9679)
static void C_fcall f_9679(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9687)
static void C_ccall f_9687(C_word c,C_word *av) C_noret;
C_noret_decl(f_9697)
static void C_ccall f_9697(C_word c,C_word *av) C_noret;
C_noret_decl(f_9700)
static void C_fcall f_9700(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9704)
static void C_ccall f_9704(C_word c,C_word *av) C_noret;
C_noret_decl(f_9708)
static void C_fcall f_9708(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9715)
static void C_ccall f_9715(C_word c,C_word *av) C_noret;
C_noret_decl(f_9734)
static void C_ccall f_9734(C_word c,C_word *av) C_noret;
C_noret_decl(f_9749)
static void C_fcall f_9749(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9775)
static void C_ccall f_9775(C_word c,C_word *av) C_noret;
C_noret_decl(f_9777)
static void C_ccall f_9777(C_word c,C_word *av) C_noret;
C_noret_decl(f_9780)
static void C_fcall f_9780(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9786)
static void C_fcall f_9786(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9827)
static void C_fcall f_9827(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9859)
static void C_ccall f_9859(C_word c,C_word *av) C_noret;
C_noret_decl(f_9885)
static void C_ccall f_9885(C_word c,C_word *av) C_noret;
C_noret_decl(f_9899)
static void C_fcall f_9899(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9906)
static void C_ccall f_9906(C_word c,C_word *av) C_noret;
C_noret_decl(f_9910)
static void C_ccall f_9910(C_word c,C_word *av) C_noret;
C_noret_decl(f_9936)
static void C_fcall f_9936(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9950)
static void C_ccall f_9950(C_word c,C_word *av) C_noret;
C_noret_decl(f_9992)
static void C_ccall f_9992(C_word c,C_word *av) C_noret;
C_noret_decl(C_modules_toplevel)
C_externexport void C_ccall C_modules_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_10016)
static void C_ccall trf_10016(C_word c,C_word *av) C_noret;
static void C_ccall trf_10016(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10016(t0,t1,t2);}

C_noret_decl(trf_10033)
static void C_ccall trf_10033(C_word c,C_word *av) C_noret;
static void C_ccall trf_10033(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10033(t0,t1);}

C_noret_decl(trf_10057)
static void C_ccall trf_10057(C_word c,C_word *av) C_noret;
static void C_ccall trf_10057(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10057(t0,t1,t2);}

C_noret_decl(trf_10117)
static void C_ccall trf_10117(C_word c,C_word *av) C_noret;
static void C_ccall trf_10117(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10117(t0,t1,t2,t3);}

C_noret_decl(trf_10129)
static void C_ccall trf_10129(C_word c,C_word *av) C_noret;
static void C_ccall trf_10129(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10129(t0,t1,t2);}

C_noret_decl(trf_10234)
static void C_ccall trf_10234(C_word c,C_word *av) C_noret;
static void C_ccall trf_10234(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_10234(t0,t1,t2,t3,t4);}

C_noret_decl(trf_10245)
static void C_ccall trf_10245(C_word c,C_word *av) C_noret;
static void C_ccall trf_10245(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10245(t0,t1,t2);}

C_noret_decl(trf_10258)
static void C_ccall trf_10258(C_word c,C_word *av) C_noret;
static void C_ccall trf_10258(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10258(t0,t1);}

C_noret_decl(trf_10332)
static void C_ccall trf_10332(C_word c,C_word *av) C_noret;
static void C_ccall trf_10332(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10332(t0,t1,t2);}

C_noret_decl(trf_10366)
static void C_ccall trf_10366(C_word c,C_word *av) C_noret;
static void C_ccall trf_10366(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10366(t0,t1,t2);}

C_noret_decl(trf_10532)
static void C_ccall trf_10532(C_word c,C_word *av) C_noret;
static void C_ccall trf_10532(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10532(t0,t1,t2);}

C_noret_decl(trf_10586)
static void C_ccall trf_10586(C_word c,C_word *av) C_noret;
static void C_ccall trf_10586(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10586(t0,t1,t2);}

C_noret_decl(trf_10640)
static void C_ccall trf_10640(C_word c,C_word *av) C_noret;
static void C_ccall trf_10640(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10640(t0,t1,t2);}

C_noret_decl(trf_10694)
static void C_ccall trf_10694(C_word c,C_word *av) C_noret;
static void C_ccall trf_10694(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10694(t0,t1,t2);}

C_noret_decl(trf_10748)
static void C_ccall trf_10748(C_word c,C_word *av) C_noret;
static void C_ccall trf_10748(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10748(t0,t1,t2);}

C_noret_decl(trf_10802)
static void C_ccall trf_10802(C_word c,C_word *av) C_noret;
static void C_ccall trf_10802(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10802(t0,t1,t2);}

C_noret_decl(trf_10856)
static void C_ccall trf_10856(C_word c,C_word *av) C_noret;
static void C_ccall trf_10856(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10856(t0,t1,t2);}

C_noret_decl(trf_10910)
static void C_ccall trf_10910(C_word c,C_word *av) C_noret;
static void C_ccall trf_10910(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10910(t0,t1,t2);}

C_noret_decl(trf_10964)
static void C_ccall trf_10964(C_word c,C_word *av) C_noret;
static void C_ccall trf_10964(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10964(t0,t1,t2);}

C_noret_decl(trf_11018)
static void C_ccall trf_11018(C_word c,C_word *av) C_noret;
static void C_ccall trf_11018(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11018(t0,t1,t2);}

C_noret_decl(trf_11072)
static void C_ccall trf_11072(C_word c,C_word *av) C_noret;
static void C_ccall trf_11072(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11072(t0,t1,t2);}

C_noret_decl(trf_11126)
static void C_ccall trf_11126(C_word c,C_word *av) C_noret;
static void C_ccall trf_11126(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11126(t0,t1,t2);}

C_noret_decl(trf_11180)
static void C_ccall trf_11180(C_word c,C_word *av) C_noret;
static void C_ccall trf_11180(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11180(t0,t1,t2);}

C_noret_decl(trf_4457)
static void C_ccall trf_4457(C_word c,C_word *av) C_noret;
static void C_ccall trf_4457(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4457(t0,t1,t2,t3);}

C_noret_decl(trf_4463)
static void C_ccall trf_4463(C_word c,C_word *av) C_noret;
static void C_ccall trf_4463(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4463(t0,t1,t2);}

C_noret_decl(trf_4586)
static void C_ccall trf_4586(C_word c,C_word *av) C_noret;
static void C_ccall trf_4586(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4586(t0,t1,t2);}

C_noret_decl(trf_4594)
static void C_ccall trf_4594(C_word c,C_word *av) C_noret;
static void C_ccall trf_4594(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4594(t0,t1,t2,t3);}

C_noret_decl(trf_5613)
static void C_ccall trf_5613(C_word c,C_word *av) C_noret;
static void C_ccall trf_5613(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5613(t0,t1,t2);}

C_noret_decl(trf_5657)
static void C_ccall trf_5657(C_word c,C_word *av) C_noret;
static void C_ccall trf_5657(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5657(t0,t1,t2,t3);}

C_noret_decl(trf_5665)
static void C_ccall trf_5665(C_word c,C_word *av) C_noret;
static void C_ccall trf_5665(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5665(t0,t1,t2);}

C_noret_decl(trf_5761)
static void C_ccall trf_5761(C_word c,C_word *av) C_noret;
static void C_ccall trf_5761(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5761(t0,t1);}

C_noret_decl(trf_5783)
static void C_ccall trf_5783(C_word c,C_word *av) C_noret;
static void C_ccall trf_5783(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5783(t0,t1,t2);}

C_noret_decl(trf_5860)
static void C_ccall trf_5860(C_word c,C_word *av) C_noret;
static void C_ccall trf_5860(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5860(t0,t1,t2);}

C_noret_decl(trf_5913)
static void C_ccall trf_5913(C_word c,C_word *av) C_noret;
static void C_ccall trf_5913(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5913(t0,t1,t2,t3);}

C_noret_decl(trf_6145)
static void C_ccall trf_6145(C_word c,C_word *av) C_noret;
static void C_ccall trf_6145(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6145(t0,t1,t2);}

C_noret_decl(trf_6152)
static void C_ccall trf_6152(C_word c,C_word *av) C_noret;
static void C_ccall trf_6152(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6152(t0,t1);}

C_noret_decl(trf_6303)
static void C_ccall trf_6303(C_word c,C_word *av) C_noret;
static void C_ccall trf_6303(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6303(t0,t1,t2,t3);}

C_noret_decl(trf_6326)
static void C_ccall trf_6326(C_word c,C_word *av) C_noret;
static void C_ccall trf_6326(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6326(t0,t1,t2);}

C_noret_decl(trf_6353)
static void C_ccall trf_6353(C_word c,C_word *av) C_noret;
static void C_ccall trf_6353(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6353(t0,t1,t2);}

C_noret_decl(trf_6390)
static void C_ccall trf_6390(C_word c,C_word *av) C_noret;
static void C_ccall trf_6390(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6390(t0,t1,t2);}

C_noret_decl(trf_6398)
static void C_ccall trf_6398(C_word c,C_word *av) C_noret;
static void C_ccall trf_6398(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6398(t0,t1);}

C_noret_decl(trf_6430)
static void C_ccall trf_6430(C_word c,C_word *av) C_noret;
static void C_ccall trf_6430(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6430(t0,t1,t2);}

C_noret_decl(trf_6507)
static void C_ccall trf_6507(C_word c,C_word *av) C_noret;
static void C_ccall trf_6507(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6507(t0,t1);}

C_noret_decl(trf_6517)
static void C_ccall trf_6517(C_word c,C_word *av) C_noret;
static void C_ccall trf_6517(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6517(t0,t1,t2);}

C_noret_decl(trf_6542)
static void C_ccall trf_6542(C_word c,C_word *av) C_noret;
static void C_ccall trf_6542(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6542(t0,t1,t2,t3);}

C_noret_decl(trf_6606)
static void C_ccall trf_6606(C_word c,C_word *av) C_noret;
static void C_ccall trf_6606(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6606(t0,t1);}

C_noret_decl(trf_6614)
static void C_ccall trf_6614(C_word c,C_word *av) C_noret;
static void C_ccall trf_6614(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6614(t0,t1);}

C_noret_decl(trf_6654)
static void C_ccall trf_6654(C_word c,C_word *av) C_noret;
static void C_ccall trf_6654(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6654(t0,t1);}

C_noret_decl(trf_6670)
static void C_ccall trf_6670(C_word c,C_word *av) C_noret;
static void C_ccall trf_6670(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6670(t0,t1,t2);}

C_noret_decl(trf_6727)
static void C_ccall trf_6727(C_word c,C_word *av) C_noret;
static void C_ccall trf_6727(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6727(t0,t1,t2);}

C_noret_decl(trf_6769)
static void C_ccall trf_6769(C_word c,C_word *av) C_noret;
static void C_ccall trf_6769(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6769(t0,t1,t2);}

C_noret_decl(trf_6858)
static void C_ccall trf_6858(C_word c,C_word *av) C_noret;
static void C_ccall trf_6858(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6858(t0,t1,t2);}

C_noret_decl(trf_6883)
static void C_ccall trf_6883(C_word c,C_word *av) C_noret;
static void C_ccall trf_6883(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6883(t0,t1);}

C_noret_decl(trf_7068)
static void C_ccall trf_7068(C_word c,C_word *av) C_noret;
static void C_ccall trf_7068(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7068(t0,t1,t2);}

C_noret_decl(trf_7094)
static void C_ccall trf_7094(C_word c,C_word *av) C_noret;
static void C_ccall trf_7094(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7094(t0,t1,t2);}

C_noret_decl(trf_7148)
static void C_ccall trf_7148(C_word c,C_word *av) C_noret;
static void C_ccall trf_7148(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7148(t0,t1,t2);}

C_noret_decl(trf_7171)
static void C_ccall trf_7171(C_word c,C_word *av) C_noret;
static void C_ccall trf_7171(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7171(t0,t1,t2);}

C_noret_decl(trf_7198)
static void C_ccall trf_7198(C_word c,C_word *av) C_noret;
static void C_ccall trf_7198(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7198(t0,t1);}

C_noret_decl(trf_7222)
static void C_ccall trf_7222(C_word c,C_word *av) C_noret;
static void C_ccall trf_7222(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7222(t0,t1,t2);}

C_noret_decl(trf_7256)
static void C_ccall trf_7256(C_word c,C_word *av) C_noret;
static void C_ccall trf_7256(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7256(t0,t1,t2);}

C_noret_decl(trf_7346)
static void C_ccall trf_7346(C_word c,C_word *av) C_noret;
static void C_ccall trf_7346(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7346(t0,t1,t2);}

C_noret_decl(trf_7370)
static void C_ccall trf_7370(C_word c,C_word *av) C_noret;
static void C_ccall trf_7370(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7370(t0,t1,t2);}

C_noret_decl(trf_7425)
static void C_ccall trf_7425(C_word c,C_word *av) C_noret;
static void C_ccall trf_7425(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7425(t0,t1,t2,t3);}

C_noret_decl(trf_7436)
static void C_ccall trf_7436(C_word c,C_word *av) C_noret;
static void C_ccall trf_7436(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7436(t0,t1);}

C_noret_decl(trf_7438)
static void C_ccall trf_7438(C_word c,C_word *av) C_noret;
static void C_ccall trf_7438(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7438(t0,t1,t2);}

C_noret_decl(trf_7466)
static void C_ccall trf_7466(C_word c,C_word *av) C_noret;
static void C_ccall trf_7466(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7466(t0,t1);}

C_noret_decl(trf_7548)
static void C_ccall trf_7548(C_word c,C_word *av) C_noret;
static void C_ccall trf_7548(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7548(t0,t1,t2);}

C_noret_decl(trf_7613)
static void C_ccall trf_7613(C_word c,C_word *av) C_noret;
static void C_ccall trf_7613(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7613(t0,t1,t2);}

C_noret_decl(trf_7632)
static void C_ccall trf_7632(C_word c,C_word *av) C_noret;
static void C_ccall trf_7632(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7632(t0,t1,t2);}

C_noret_decl(trf_7665)
static void C_ccall trf_7665(C_word c,C_word *av) C_noret;
static void C_ccall trf_7665(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7665(t0,t1,t2);}

C_noret_decl(trf_7677)
static void C_ccall trf_7677(C_word c,C_word *av) C_noret;
static void C_ccall trf_7677(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7677(t0,t1,t2);}

C_noret_decl(trf_7755)
static void C_ccall trf_7755(C_word c,C_word *av) C_noret;
static void C_ccall trf_7755(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7755(t0,t1,t2);}

C_noret_decl(trf_7818)
static void C_ccall trf_7818(C_word c,C_word *av) C_noret;
static void C_ccall trf_7818(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7818(t0,t1,t2);}

C_noret_decl(trf_7849)
static void C_ccall trf_7849(C_word c,C_word *av) C_noret;
static void C_ccall trf_7849(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7849(t0,t1,t2);}

C_noret_decl(trf_7886)
static void C_ccall trf_7886(C_word c,C_word *av) C_noret;
static void C_ccall trf_7886(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7886(t0,t1,t2);}

C_noret_decl(trf_7913)
static void C_ccall trf_7913(C_word c,C_word *av) C_noret;
static void C_ccall trf_7913(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7913(t0,t1,t2);}

C_noret_decl(trf_7944)
static void C_ccall trf_7944(C_word c,C_word *av) C_noret;
static void C_ccall trf_7944(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7944(t0,t1);}

C_noret_decl(trf_7960)
static void C_ccall trf_7960(C_word c,C_word *av) C_noret;
static void C_ccall trf_7960(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7960(t0,t1);}

C_noret_decl(trf_7972)
static void C_ccall trf_7972(C_word c,C_word *av) C_noret;
static void C_ccall trf_7972(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7972(t0,t1);}

C_noret_decl(trf_8045)
static void C_ccall trf_8045(C_word c,C_word *av) C_noret;
static void C_ccall trf_8045(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8045(t0,t1,t2);}

C_noret_decl(trf_8080)
static void C_ccall trf_8080(C_word c,C_word *av) C_noret;
static void C_ccall trf_8080(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8080(t0,t1,t2);}

C_noret_decl(trf_8254)
static void C_ccall trf_8254(C_word c,C_word *av) C_noret;
static void C_ccall trf_8254(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8254(t0,t1,t2);}

C_noret_decl(trf_8284)
static void C_ccall trf_8284(C_word c,C_word *av) C_noret;
static void C_ccall trf_8284(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8284(t0,t1,t2,t3);}

C_noret_decl(trf_8298)
static void C_ccall trf_8298(C_word c,C_word *av) C_noret;
static void C_ccall trf_8298(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8298(t0,t1,t2);}

C_noret_decl(trf_8348)
static void C_ccall trf_8348(C_word c,C_word *av) C_noret;
static void C_ccall trf_8348(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8348(t0,t1,t2);}

C_noret_decl(trf_8396)
static void C_ccall trf_8396(C_word c,C_word *av) C_noret;
static void C_ccall trf_8396(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8396(t0,t1,t2);}

C_noret_decl(trf_8455)
static void C_ccall trf_8455(C_word c,C_word *av) C_noret;
static void C_ccall trf_8455(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_8455(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_8463)
static void C_ccall trf_8463(C_word c,C_word *av) C_noret;
static void C_ccall trf_8463(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8463(t0,t1,t2);}

C_noret_decl(trf_8486)
static void C_ccall trf_8486(C_word c,C_word *av) C_noret;
static void C_ccall trf_8486(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8486(t0,t1,t2);}

C_noret_decl(trf_8514)
static void C_ccall trf_8514(C_word c,C_word *av) C_noret;
static void C_ccall trf_8514(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8514(t0,t1,t2);}

C_noret_decl(trf_8536)
static void C_ccall trf_8536(C_word c,C_word *av) C_noret;
static void C_ccall trf_8536(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8536(t0,t1,t2);}

C_noret_decl(trf_8605)
static void C_ccall trf_8605(C_word c,C_word *av) C_noret;
static void C_ccall trf_8605(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_8605(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8617)
static void C_ccall trf_8617(C_word c,C_word *av) C_noret;
static void C_ccall trf_8617(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_8617(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8625)
static void C_ccall trf_8625(C_word c,C_word *av) C_noret;
static void C_ccall trf_8625(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8625(t0,t1,t2);}

C_noret_decl(trf_8648)
static void C_ccall trf_8648(C_word c,C_word *av) C_noret;
static void C_ccall trf_8648(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8648(t0,t1,t2);}

C_noret_decl(trf_8676)
static void C_ccall trf_8676(C_word c,C_word *av) C_noret;
static void C_ccall trf_8676(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8676(t0,t1,t2);}

C_noret_decl(trf_8717)
static void C_ccall trf_8717(C_word c,C_word *av) C_noret;
static void C_ccall trf_8717(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8717(t0,t1,t2);}

C_noret_decl(trf_8788)
static void C_ccall trf_8788(C_word c,C_word *av) C_noret;
static void C_ccall trf_8788(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_8788(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8800)
static void C_ccall trf_8800(C_word c,C_word *av) C_noret;
static void C_ccall trf_8800(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_8800(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8808)
static void C_ccall trf_8808(C_word c,C_word *av) C_noret;
static void C_ccall trf_8808(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8808(t0,t1,t2);}

C_noret_decl(trf_8840)
static void C_ccall trf_8840(C_word c,C_word *av) C_noret;
static void C_ccall trf_8840(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8840(t0,t1,t2);}

C_noret_decl(trf_8863)
static void C_ccall trf_8863(C_word c,C_word *av) C_noret;
static void C_ccall trf_8863(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8863(t0,t1,t2);}

C_noret_decl(trf_8902)
static void C_ccall trf_8902(C_word c,C_word *av) C_noret;
static void C_ccall trf_8902(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8902(t0,t1,t2);}

C_noret_decl(trf_8955)
static void C_ccall trf_8955(C_word c,C_word *av) C_noret;
static void C_ccall trf_8955(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8955(t0,t1,t2);}

C_noret_decl(trf_9090)
static void C_ccall trf_9090(C_word c,C_word *av) C_noret;
static void C_ccall trf_9090(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9090(t0,t1,t2);}

C_noret_decl(trf_9124)
static void C_ccall trf_9124(C_word c,C_word *av) C_noret;
static void C_ccall trf_9124(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9124(t0,t1,t2);}

C_noret_decl(trf_9178)
static void C_ccall trf_9178(C_word c,C_word *av) C_noret;
static void C_ccall trf_9178(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9178(t0,t1,t2);}

C_noret_decl(trf_9214)
static void C_ccall trf_9214(C_word c,C_word *av) C_noret;
static void C_ccall trf_9214(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9214(t0,t1,t2);}

C_noret_decl(trf_9254)
static void C_ccall trf_9254(C_word c,C_word *av) C_noret;
static void C_ccall trf_9254(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9254(t0,t1,t2);}

C_noret_decl(trf_9299)
static void C_ccall trf_9299(C_word c,C_word *av) C_noret;
static void C_ccall trf_9299(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9299(t0,t1,t2);}

C_noret_decl(trf_9344)
static void C_ccall trf_9344(C_word c,C_word *av) C_noret;
static void C_ccall trf_9344(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9344(t0,t1);}

C_noret_decl(trf_9422)
static void C_ccall trf_9422(C_word c,C_word *av) C_noret;
static void C_ccall trf_9422(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9422(t0,t1,t2);}

C_noret_decl(trf_9456)
static void C_ccall trf_9456(C_word c,C_word *av) C_noret;
static void C_ccall trf_9456(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9456(t0,t1,t2);}

C_noret_decl(trf_9526)
static void C_ccall trf_9526(C_word c,C_word *av) C_noret;
static void C_ccall trf_9526(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9526(t0,t1,t2);}

C_noret_decl(trf_9560)
static void C_ccall trf_9560(C_word c,C_word *av) C_noret;
static void C_ccall trf_9560(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9560(t0,t1,t2);}

C_noret_decl(trf_9600)
static void C_ccall trf_9600(C_word c,C_word *av) C_noret;
static void C_ccall trf_9600(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9600(t0,t1,t2);}

C_noret_decl(trf_9623)
static void C_ccall trf_9623(C_word c,C_word *av) C_noret;
static void C_ccall trf_9623(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9623(t0,t1,t2);}

C_noret_decl(trf_9679)
static void C_ccall trf_9679(C_word c,C_word *av) C_noret;
static void C_ccall trf_9679(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9679(t0,t1,t2);}

C_noret_decl(trf_9700)
static void C_ccall trf_9700(C_word c,C_word *av) C_noret;
static void C_ccall trf_9700(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9700(t0,t1,t2);}

C_noret_decl(trf_9708)
static void C_ccall trf_9708(C_word c,C_word *av) C_noret;
static void C_ccall trf_9708(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9708(t0,t1,t2);}

C_noret_decl(trf_9749)
static void C_ccall trf_9749(C_word c,C_word *av) C_noret;
static void C_ccall trf_9749(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9749(t0,t1,t2);}

C_noret_decl(trf_9780)
static void C_ccall trf_9780(C_word c,C_word *av) C_noret;
static void C_ccall trf_9780(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9780(t0,t1,t2);}

C_noret_decl(trf_9786)
static void C_ccall trf_9786(C_word c,C_word *av) C_noret;
static void C_ccall trf_9786(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9786(t0,t1,t2);}

C_noret_decl(trf_9827)
static void C_ccall trf_9827(C_word c,C_word *av) C_noret;
static void C_ccall trf_9827(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9827(t0,t1,t2);}

C_noret_decl(trf_9899)
static void C_ccall trf_9899(C_word c,C_word *av) C_noret;
static void C_ccall trf_9899(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9899(t0,t1);}

C_noret_decl(trf_9936)
static void C_ccall trf_9936(C_word c,C_word *av) C_noret;
static void C_ccall trf_9936(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9936(t0,t1,t2);}

/* f11751 in k7573 in k7570 in k7567 in k7564 in k7560 in g1575 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f11751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f11751,2,av);}
/* modules.scm:515: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[38]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* ##sys#instantiate-functor in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10008(C_word c,C_word *av){
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
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_10008,5,av);}
a=C_alloc(18);
t5=t3;
t6=C_i_getprop(t5,lf[64],C_SCHEME_FALSE);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10016,a[2]=t2,a[3]=((C_word)li141),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10023,a[2]=t7,a[3]=t2,a[4]=t4,a[5]=t3,a[6]=t8,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t7)){
t10=t9;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_SCHEME_UNDEFINED;
f_10023(2,av2);}}
else{
/* modules.scm:821: err */
t10=t8;
f_10016(t10,t9,C_a_i_list(&a,2,lf[162],t3));}}

/* err in instantiate-functor in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_10016(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_10016,3,t0,t1,t2);}{
C_word av2[5];
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[115]+1);
av2[3]=((C_word*)t0)[2];
av2[4]=t2;
C_apply(5,av2);}}

/* k10021 in instantiate-functor in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
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
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_10023,2,av);}
a=C_alloc(23);
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=C_i_cadr(((C_word*)t0)[2]);
t5=t4;
t6=C_u_i_cdr(((C_word*)t0)[2]);
t7=C_u_i_cdr(t6);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10033,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li143),tmp=(C_word)a,a+=8,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10096,a[2]=t5,a[3]=t7,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10117,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t8,a[5]=t11,a[6]=((C_word)li145),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_10117(t13,t9,((C_word*)t0)[4],t3);}

/* merr in k10021 in instantiate-functor in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_10033(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,0,3)))){
C_save_and_reclaim_args((void *)trf_10033,2,t0,t1);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=t2;
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_check_list_2(((C_word*)t0)[4],lf[18]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10055,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10057,a[2]=t6,a[3]=t11,a[4]=t7,a[5]=((C_word)li142),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_10057(t13,t9,((C_word*)t0)[4]);}

/* k10053 in merr in k10021 in instantiate-functor in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_10055,2,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* modules.scm:826: err */
t3=((C_word*)t0)[3];
f_10016(t3,((C_word*)t0)[4],C_a_i_list(&a,3,lf[158],((C_word*)t0)[5],t2));}

/* map-loop2534 in merr in k10021 in instantiate-functor in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_10057(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10057,3,t0,t1,t2);}
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

/* k10094 in k10021 in instantiate-functor in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_10096,2,av);}
a=C_alloc(18);
t2=C_eqp(lf[148],((C_word*)t0)[2]);
t3=(C_truep(t2)?C_a_i_cons(&a,2,C_SCHEME_TRUE,((C_word*)t0)[3]):C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]));
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_cons(&a,2,lf[159],t4);
t6=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[160],t1,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* loop in k10021 in instantiate-functor in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_10117(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10117,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10129,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li144),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_10129(t7,t1,t3);}
else{
if(C_truep(C_i_nullp(t3))){
/* modules.scm:845: merr */
t4=((C_word*)t0)[4];
f_10033(t4,t1);}
else{
t4=C_i_car(t3);
t5=C_i_car(t4);
t6=C_u_i_cdr(t4);
t7=C_i_pairp(t5);
t8=(C_truep(t7)?C_i_car(t5):t5);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10204,a[2]=t9,a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[2],a[8]=t6,a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
t11=C_i_car(t2);
/* modules.scm:853: chicken.internal#library-id */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[23]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[23]+1);
av2[1]=t10;
av2[2]=t11;
tp(3,av2);}}}}

/* loop2 in loop in k10021 in instantiate-functor in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_10129(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_10129,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_i_car(t3);
if(C_truep(C_i_pairp(t4))){
t5=C_u_i_cdr(t3);
t6=C_i_caar(t3);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10152,a[2]=t7,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=t5,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10172,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:839: scheme#cadar */
t10=*((C_word*)lf[80]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
/* modules.scm:843: merr */
t5=((C_word*)t0)[5];
f_10033(t5,t1);}}}

/* k10150 in loop2 in loop in k10021 in instantiate-functor in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_10152,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10155,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:840: match-functor-argument */
f_10234(t3,((C_word*)t0)[6],t2,((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k10153 in k10150 in loop2 in loop in k10021 in instantiate-functor in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10155(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10155,2,av);}
a=C_alloc(10);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10166,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[5];
t6=C_u_i_cdr(t5);
/* modules.scm:841: loop2 */
t7=((C_word*)((C_word*)t0)[6])[1];
f_10129(t7,t4,t6);}

/* k10164 in k10153 in k10150 in loop2 in loop in k10021 in instantiate-functor in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10166,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10170 in loop2 in loop in k10021 in instantiate-functor in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10172(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10172,2,av);}
/* modules.scm:839: chicken.internal#library-id */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[23]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k10202 in loop in k10021 in instantiate-functor in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_10204,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10207,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:854: match-functor-argument */
f_10234(t3,((C_word*)t0)[7],t2,((C_word*)t0)[8],((C_word*)t0)[9]);}

/* k10205 in k10202 in loop in k10021 in instantiate-functor in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_10207,2,av);}
a=C_alloc(10);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10218,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[5];
t6=C_u_i_cdr(t5);
t7=((C_word*)t0)[6];
t8=C_u_i_cdr(t7);
/* modules.scm:856: loop */
t9=((C_word*)((C_word*)t0)[7])[1];
f_10117(t9,t4,t6,t8);}

/* k10216 in k10205 in k10202 in loop in k10021 in instantiate-functor in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10218(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10218,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* match-functor-argument in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_10234(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_10234,5,t1,t2,t3,t4,t5);}
a=C_alloc(10);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10238,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10391,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:863: ##sys#resolve-module-name */
t8=*((C_word*)lf[20]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
av2[3]=lf[4];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k10236 in match-functor-argument in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_10238,2,av);}
a=C_alloc(21);
t2=t1;
t3=C_eqp(((C_word*)t0)[2],lf[148]);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10245,a[2]=t2,a[3]=t5,a[4]=((C_word)li147),tmp=(C_word)a,a+=5,tmp);
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(t7,lf[33]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10285,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10366,a[2]=t11,a[3]=t6,a[4]=((C_word)li149),tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_10366(t13,t9,t7);}}

/* g2595 in k10236 in match-functor-argument in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_10245(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10245,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_symbolp(t2);
t4=(C_truep(t3)?t2:C_i_car(t2));
t5=t4;
t6=C_i_check_structure_2(((C_word*)t0)[2],lf[4],lf[13]);
t7=C_i_block_ref(((C_word*)t0)[2],C_fix(11));
t8=C_i_assq(t5,t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10258,a[2]=t1,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t8)){
t10=t9;
f_10258(t10,t8);}
else{
t10=C_i_check_structure_2(((C_word*)t0)[2],lf[4],lf[14]);
t11=C_i_block_ref(((C_word*)t0)[2],C_fix(12));
t12=t9;
f_10258(t12,C_i_assq(t5,t11));}}

/* k10256 in g2595 in k10236 in match-functor-argument in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_10258(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,1)))){
C_save_and_reclaim_args((void *)trf_10258,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10283 in k10236 in match-functor-argument in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10285(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_10285,2,av);}
a=C_alloc(9);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10298,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10302,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:878: scheme#symbol->string */
t4=*((C_word*)lf[93]+1);{
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
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k10296 in k10283 in k10236 in match-functor-argument in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10298,2,av);}
/* modules.scm:874: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[115]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[115]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[4];
av2[3]=t1;
tp(4,av2);}}

/* k10300 in k10283 in k10236 in match-functor-argument in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_10302,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10306,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:879: scheme#symbol->string */
t4=*((C_word*)lf[93]+1);{
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

/* k10304 in k10300 in k10283 in k10236 in match-functor-argument in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10306(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_10306,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10310,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:880: scheme#symbol->string */
t4=*((C_word*)lf[93]+1);{
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

/* k10308 in k10304 in k10300 in k10283 in k10236 in match-functor-argument in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_10310,2,av);}
a=C_alloc(19);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)((C_word*)t0)[2])[1];
t8=C_i_check_list_2(t7,lf[18]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10330,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10332,a[2]=t5,a[3]=t11,a[4]=t6,a[5]=((C_word)li148),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_10332(t13,t9,t7);}

/* k10322 in map-loop2616 in k10308 in k10304 in k10300 in k10283 in k10236 in match-functor-argument in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10324,2,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[106]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[168];
av2[3]=t1;
tp(4,av2);}}

/* k10328 in k10308 in k10304 in k10300 in k10283 in k10236 in match-functor-argument in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,11)))){
C_save_and_reclaim((void *)f_10330,2,av);}{
C_word *av2;
if(c >= 12) {
  av2=av;
} else {
  av2=C_alloc(12);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[90]+1);
av2[3]=lf[163];
av2[4]=((C_word*)t0)[3];
av2[5]=lf[164];
av2[6]=lf[165];
av2[7]=((C_word*)t0)[4];
av2[8]=lf[166];
av2[9]=((C_word*)t0)[5];
av2[10]=lf[167];
av2[11]=t1;
C_apply(12,av2);}}

/* map-loop2616 in k10308 in k10304 in k10300 in k10283 in k10236 in match-functor-argument in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_10332(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_10332,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10357,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10324,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:881: scheme#symbol->string */
t7=*((C_word*)lf[93]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10355 in map-loop2616 in k10308 in k10304 in k10300 in k10283 in k10236 in match-functor-argument in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10357(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10357,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10332(t6,((C_word*)t0)[5],t5);}

/* for-each-loop2594 in k10236 in match-functor-argument in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_10366(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10366,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10376,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:866: g2595 */
t5=((C_word*)t0)[3];
f_10245(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10374 in for-each-loop2594 in k10236 in match-functor-argument in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10376,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10366(t3,((C_word*)t0)[4],t2);}

/* k10389 in match-functor-argument in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10391,2,av);}
/* modules.scm:863: ##sys#find-module */
t2=*((C_word*)lf[24]+1);{
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
av2[4]=lf[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_10394,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10397,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11223,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:1016: scheme#append */
t4=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[237];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10397(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_10397,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10400,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:1022: ##sys#register-core-module */
t3=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[236];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10400(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_10400,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10403,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1023: ##sys#register-core-module */
t3=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[235];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10403(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_10403,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10406,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1025: ##sys#register-module-alias */
t3=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[233];
av2[3]=lf[234];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10406(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_10406,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10409,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1026: ##sys#register-module-alias */
t3=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[231];
av2[3]=lf[232];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_10409,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10412,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11219,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1032: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t3;
tp(2,av2);}}

/* k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_10412,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10415,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1034: ##sys#register-core-module */
t3=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[228];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=*((C_word*)lf[229]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_10415,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10418,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1037: ##sys#register-core-module */
t3=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[226];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=*((C_word*)lf[227]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_10418,2,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10421,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11215,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=*((C_word*)lf[201]+1);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11168,a[2]=t4,a[3]=((C_word)li176),tmp=(C_word)a,a+=4,tmp);
t10=lf[225];
t11=C_i_check_list_2(t10,lf[18]);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11180,a[2]=t9,a[3]=t7,a[4]=t13,a[5]=t8,a[6]=((C_word)li177),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_11180(t15,t3,t10);}

/* k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_10421,2,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10424,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11161,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=*((C_word*)lf[182]+1);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11114,a[2]=t4,a[3]=((C_word)li174),tmp=(C_word)a,a+=4,tmp);
t10=lf[223];
t11=C_i_check_list_2(t10,lf[18]);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11126,a[2]=t9,a[3]=t7,a[4]=t13,a[5]=t8,a[6]=((C_word)li175),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_11126(t15,t3,t10);}

/* k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_10424,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10427,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1046: ##sys#register-core-module */
t3=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[220];
av2[3]=lf[180];
av2[4]=lf[221];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_10427,2,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10430,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11107,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=*((C_word*)lf[182]+1);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11060,a[2]=t4,a[3]=((C_word)li172),tmp=(C_word)a,a+=4,tmp);
t10=lf[219];
t11=C_i_check_list_2(t10,lf[18]);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11072,a[2]=t9,a[3]=t7,a[4]=t13,a[5]=t8,a[6]=((C_word)li173),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_11072(t15,t3,t10);}

/* k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_10430,2,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10433,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11053,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=*((C_word*)lf[182]+1);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11006,a[2]=t4,a[3]=((C_word)li170),tmp=(C_word)a,a+=4,tmp);
t10=lf[217];
t11=C_i_check_list_2(t10,lf[18]);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11018,a[2]=t9,a[3]=t7,a[4]=t13,a[5]=t8,a[6]=((C_word)li171),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_11018(t15,t3,t10);}

/* k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10433(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_10433,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10436,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1058: ##sys#register-core-module */
t3=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[213];
av2[3]=lf[214];
av2[4]=lf[215];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_10436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_10436,2,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10439,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10999,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=*((C_word*)lf[182]+1);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10952,a[2]=t4,a[3]=((C_word)li168),tmp=(C_word)a,a+=4,tmp);
t10=lf[212];
t11=C_i_check_list_2(t10,lf[18]);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10964,a[2]=t9,a[3]=t7,a[4]=t13,a[5]=t8,a[6]=((C_word)li169),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_10964(t15,t3,t10);}

/* k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 in ... */
static void C_ccall f_10439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_10439,2,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10442,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10945,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=*((C_word*)lf[209]+1);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10898,a[2]=t4,a[3]=((C_word)li166),tmp=(C_word)a,a+=4,tmp);
t10=lf[210];
t11=C_i_check_list_2(t10,lf[18]);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10910,a[2]=t9,a[3]=t7,a[4]=t13,a[5]=t8,a[6]=((C_word)li167),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_10910(t15,t3,t10);}

/* k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in ... */
static void C_ccall f_10442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_10442,2,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10445,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10891,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=*((C_word*)lf[182]+1);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10844,a[2]=t4,a[3]=((C_word)li164),tmp=(C_word)a,a+=4,tmp);
t10=lf[206];
t11=C_i_check_list_2(t10,lf[18]);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10856,a[2]=t9,a[3]=t7,a[4]=t13,a[5]=t8,a[6]=((C_word)li165),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_10856(t15,t3,t10);}

/* k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in ... */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_10445,2,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10448,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10837,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=*((C_word*)lf[182]+1);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10790,a[2]=t4,a[3]=((C_word)li162),tmp=(C_word)a,a+=4,tmp);
t10=lf[204];
t11=C_i_check_list_2(t10,lf[18]);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10802,a[2]=t9,a[3]=t7,a[4]=t13,a[5]=t8,a[6]=((C_word)li163),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_10802(t15,t3,t10);}

/* k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in ... */
static void C_ccall f_10448(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_10448,2,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10451,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10783,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=*((C_word*)lf[201]+1);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10736,a[2]=t4,a[3]=((C_word)li160),tmp=(C_word)a,a+=4,tmp);
t10=lf[202];
t11=C_i_check_list_2(t10,lf[18]);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10748,a[2]=t9,a[3]=t7,a[4]=t13,a[5]=t8,a[6]=((C_word)li161),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_10748(t15,t3,t10);}

/* k10449 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in ... */
static void C_ccall f_10451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_10451,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10454,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1086: ##sys#register-core-module */
t3=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[198];
av2[3]=lf[180];
av2[4]=lf[199];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10452 in k10449 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in ... */
static void C_ccall f_10454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_10454,2,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10457,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10729,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=*((C_word*)lf[182]+1);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10682,a[2]=t4,a[3]=((C_word)li158),tmp=(C_word)a,a+=4,tmp);
t10=lf[197];
t11=C_i_check_list_2(t10,lf[18]);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10694,a[2]=t9,a[3]=t7,a[4]=t13,a[5]=t8,a[6]=((C_word)li159),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_10694(t15,t3,t10);}

/* k10455 in k10452 in k10449 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in ... */
static void C_ccall f_10457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_10457,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10460,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1092: ##sys#register-core-module */
t3=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[193];
av2[3]=lf[194];
av2[4]=lf[195];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10458 in k10455 in k10452 in k10449 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in ... */
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
C_word t13;
C_word t14;
C_word t15;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_10460,2,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10463,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10675,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=*((C_word*)lf[182]+1);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10628,a[2]=t4,a[3]=((C_word)li156),tmp=(C_word)a,a+=4,tmp);
t10=lf[192];
t11=C_i_check_list_2(t10,lf[18]);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10640,a[2]=t9,a[3]=t7,a[4]=t13,a[5]=t8,a[6]=((C_word)li157),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_10640(t15,t3,t10);}

/* k10461 in k10458 in k10455 in k10452 in k10449 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in ... */
static void C_ccall f_10463(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_10463,2,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10466,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10621,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=*((C_word*)lf[182]+1);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10574,a[2]=t4,a[3]=((C_word)li154),tmp=(C_word)a,a+=4,tmp);
t10=lf[190];
t11=C_i_check_list_2(t10,lf[18]);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10586,a[2]=t9,a[3]=t7,a[4]=t13,a[5]=t8,a[6]=((C_word)li155),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_10586(t15,t3,t10);}

/* k10464 in k10461 in k10458 in k10455 in k10452 in k10449 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in ... */
static void C_ccall f_10466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_10466,2,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10469,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10567,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=*((C_word*)lf[182]+1);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10520,a[2]=t4,a[3]=((C_word)li152),tmp=(C_word)a,a+=4,tmp);
t10=lf[187];
t11=C_i_check_list_2(t10,lf[18]);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10532,a[2]=t9,a[3]=t7,a[4]=t13,a[5]=t8,a[6]=((C_word)li153),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_10532(t15,t3,t10);}

/* k10467 in k10464 in k10461 in k10458 in k10455 in k10452 in k10449 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in ... */
static void C_ccall f_10469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_10469,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10472,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1105: ##sys#register-core-module */
t3=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[183];
av2[3]=lf[184];
av2[4]=lf[185];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10470 in k10467 in k10464 in k10461 in k10458 in k10455 in k10452 in k10449 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in ... */
static void C_ccall f_10472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_10472,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[171]+1 /* (set! chicken.module#module-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10474,a[2]=((C_word)li151),tmp=(C_word)a,a+=3,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10510,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.base.import.scm:26: ##sys#register-core-module */
t4=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[179];
av2[3]=lf[180];
av2[4]=lf[181];
av2[5]=*((C_word*)lf[182]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}

/* chicken.module#module-environment in k10470 in k10467 in k10464 in k10461 in k10458 in k10455 in k10452 in k10449 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in ... */
static void C_ccall f_10474(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_10474,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?t2:C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10481,a[2]=t1,a[3]=t2,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:1111: find-module/import-library */
f_8254(t7,t2,lf[172]);}

/* k10479 in chicken.module#module-environment in k10470 in k10467 in k10464 in k10461 in k10458 in k10455 in k10452 in k10449 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in ... */
static void C_ccall f_10481(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10481,2,av);}
a=C_alloc(5);
if(C_truep(C_i_not(t1))){
/* modules.scm:1113: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[115]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[115]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[172];
av2[3]=lf[173];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}
else{
t2=t1;
t3=C_i_check_structure_2(t2,lf[4],lf[30]);
t4=C_i_block_ref(t2,C_fix(14));
t5=C_i_car(t4);
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_record4(&a,4,lf[174],((C_word*)t0)[4],t5,C_SCHEME_TRUE);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k10508 in k10470 in k10467 in k10464 in k10461 in k10458 in k10455 in k10452 in k10449 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in ... */
static void C_ccall f_10510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_10510,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10513,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.syntax.import.scm:30: ##sys#register-core-module */
t3=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[175];
av2[3]=lf[176];
av2[4]=lf[177];
av2[5]=*((C_word*)lf[178]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k10511 in k10508 in k10470 in k10467 in k10464 in k10461 in k10458 in k10455 in k10452 in k10449 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in ... */
static void C_ccall f_10513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10513,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* g3115 in k10464 in k10461 in k10458 in k10455 in k10452 in k10449 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in ... */
static C_word C_fcall f_10520(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop3109 in k10464 in k10461 in k10458 in k10455 in k10452 in k10449 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in ... */
static void C_fcall f_10532(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10532,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* modules.scm:1028: g3115 */
  f_10520(((C_word*)t0)[2],t3)
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

/* k10565 in k10464 in k10461 in k10458 in k10455 in k10452 in k10449 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in ... */
static void C_ccall f_10567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10567,2,av);}
/* modules.scm:1102: ##sys#register-primitive-module */
t2=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[186];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* g3077 in k10461 in k10458 in k10455 in k10452 in k10449 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in ... */
static C_word C_fcall f_10574(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop3071 in k10461 in k10458 in k10455 in k10452 in k10449 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in ... */
static void C_fcall f_10586(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10586,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* modules.scm:1028: g3077 */
  f_10574(((C_word*)t0)[2],t3)
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

/* k10619 in k10461 in k10458 in k10455 in k10452 in k10449 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in ... */
static void C_ccall f_10621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10621,2,av);}
/* modules.scm:1098: ##sys#register-core-module */
t2=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[188];
av2[3]=lf[180];
av2[4]=lf[189];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* g3039 in k10458 in k10455 in k10452 in k10449 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in ... */
static C_word C_fcall f_10628(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop3033 in k10458 in k10455 in k10452 in k10449 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in ... */
static void C_fcall f_10640(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10640,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* modules.scm:1028: g3039 */
  f_10628(((C_word*)t0)[2],t3)
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

/* k10673 in k10458 in k10455 in k10452 in k10449 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in ... */
static void C_ccall f_10675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10675,2,av);}
/* modules.scm:1095: ##sys#register-primitive-module */
t2=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[191];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* g3001 in k10452 in k10449 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in ... */
static C_word C_fcall f_10682(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop2995 in k10452 in k10449 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in ... */
static void C_fcall f_10694(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10694,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* modules.scm:1028: g3001 */
  f_10682(((C_word*)t0)[2],t3)
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

/* k10727 in k10452 in k10449 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in ... */
static void C_ccall f_10729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10729,2,av);}
/* modules.scm:1089: ##sys#register-primitive-module */
t2=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[196];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* g2963 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in ... */
static C_word C_fcall f_10736(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop2957 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in ... */
static void C_fcall f_10748(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10748,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* modules.scm:1028: g2963 */
  f_10736(((C_word*)t0)[2],t3)
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

/* k10781 in k10446 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in ... */
static void C_ccall f_10783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10783,2,av);}
/* modules.scm:1083: ##sys#register-primitive-module */
t2=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[200];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* g2925 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in ... */
static C_word C_fcall f_10790(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop2919 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in ... */
static void C_fcall f_10802(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10802,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* modules.scm:1028: g2925 */
  f_10790(((C_word*)t0)[2],t3)
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

/* k10835 in k10443 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in ... */
static void C_ccall f_10837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10837,2,av);}
/* modules.scm:1080: ##sys#register-primitive-module */
t2=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[203];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* g2887 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in ... */
static C_word C_fcall f_10844(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop2881 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in ... */
static void C_fcall f_10856(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10856,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* modules.scm:1028: g2887 */
  f_10844(((C_word*)t0)[2],t3)
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

/* k10889 in k10440 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in ... */
static void C_ccall f_10891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10891,2,av);}
/* modules.scm:1077: ##sys#register-primitive-module */
t2=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[205];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* g2849 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in ... */
static C_word C_fcall f_10898(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop2843 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in ... */
static void C_fcall f_10910(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10910,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* modules.scm:1028: g2849 */
  f_10898(((C_word*)t0)[2],t3)
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

/* k10943 in k10437 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in ... */
static void C_ccall f_10945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10945,2,av);}
/* modules.scm:1064: ##sys#register-core-module */
t2=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[207];
av2[3]=lf[180];
av2[4]=lf[208];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* g2811 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 in ... */
static C_word C_fcall f_10952(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop2805 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 in ... */
static void C_fcall f_10964(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10964,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* modules.scm:1028: g2811 */
  f_10952(((C_word*)t0)[2],t3)
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

/* k10997 in k10434 in k10431 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 in ... */
static void C_ccall f_10999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10999,2,av);}
/* modules.scm:1061: ##sys#register-primitive-module */
t2=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[211];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* g2773 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static C_word C_fcall f_11006(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop2767 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_11018(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_11018,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* modules.scm:1028: g2773 */
  f_11006(((C_word*)t0)[2],t3)
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

/* k11051 in k10428 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_11053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11053,2,av);}
/* modules.scm:1055: ##sys#register-primitive-module */
t2=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[216];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* g2735 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static C_word C_fcall f_11060(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop2729 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_11072(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_11072,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* modules.scm:1028: g2735 */
  f_11060(((C_word*)t0)[2],t3)
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

/* k11105 in k10425 in k10422 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_11107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11107,2,av);}
/* modules.scm:1052: ##sys#register-primitive-module */
t2=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[218];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* g2697 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static C_word C_fcall f_11114(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop2691 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_11126(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_11126,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* modules.scm:1028: g2697 */
  f_11114(((C_word*)t0)[2],t3)
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

/* k11159 in k10419 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_11161(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11161,2,av);}
/* modules.scm:1043: ##sys#register-primitive-module */
t2=*((C_word*)lf[74]+1);{
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

/* g2659 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static C_word C_fcall f_11168(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop2653 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_11180(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_11180,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* modules.scm:1028: g2659 */
  f_11168(((C_word*)t0)[2],t3)
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

/* k11213 in k10416 in k10413 in k10410 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_11215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11215,2,av);}
/* modules.scm:1040: ##sys#register-primitive-module */
t2=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[224];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11217 in k10407 in k10404 in k10401 in k10398 in k10395 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_11219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_11219,2,av);}
/* modules.scm:1031: ##sys#register-core-module */
t2=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[230];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k11221 in k10392 in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_11223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_11223,2,av);}
/* modules.scm:1014: ##sys#register-core-module */
t2=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[234];
av2[3]=lf[180];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k3955 */
static void C_ccall f_3957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3957,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3960,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k3958 in k3955 */
static void C_ccall f_3960(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3960,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3963,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k3961 in k3958 in k3955 */
static void C_ccall f_3963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3963,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3966,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_3966(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,5)))){
C_save_and_reclaim((void *)f_3966,2,av);}
a=C_alloc(14);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_mutate(&lf[1] /* (set! delete ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4457,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5248,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:75: chicken.base#make-parameter */
t5=*((C_word*)lf[239]+1);{
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

/* delete in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_4457(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_4457,4,t1,t2,t3,t4);}
a=C_alloc(8);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4463,a[2]=t6,a[3]=t4,a[4]=t2,a[5]=((C_word)li0),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4463(t8,t1,t3);}

/* loop in delete in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_4463(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4463,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4476,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* mini-srfi-1.scm:106: test */
t5=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=t4;
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}}

/* k4474 in loop in delete in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_4476(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4476,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* mini-srfi-1.scm:107: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4463(t4,((C_word*)t0)[4],t3);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4490,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* mini-srfi-1.scm:109: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_4463(t7,t4,t6);}}

/* k4488 in k4474 in loop in delete in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_4490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4490,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* foldr291 in merge-se in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_4586(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4586,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4594,a[2]=((C_word*)t0)[2],a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp);
t4=C_slot(t2,C_fix(0));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4615,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
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

/* g296 in foldr291 in merge-se in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_4594(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4594,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4601,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* mini-srfi-1.scm:131: pred */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k4599 in g296 in foldr291 in merge-se in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_4601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4601,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4613 in foldr291 in merge-se in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_4615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4615,2,av);}
/* mini-srfi-1.scm:131: g296 */
t2=((C_word*)t0)[2];
f_4594(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* a4675 in merge-se in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_4676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4676,3,av);}
t3=C_i_nullp(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_not(t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5248,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#current-module ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5252,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:76: chicken.base#make-parameter */
t4=*((C_word*)lf[239]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(113,c,11)))){
C_save_and_reclaim((void *)f_5252,2,av);}
a=C_alloc(113);
t2=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#module-alias-environment ...) */,t1);
t3=C_mutate((C_word*)lf[4]+1 /* (set! module ...) */,lf[4]);
t4=C_mutate(&lf[5] /* (set! module-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5267,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[7]+1 /* (set! module-undefined-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5357,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[8]+1 /* (set! set-module-undefined-list! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5366,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[10]+1 /* (set! ##sys#module-name ...) */,lf[5]);
t8=C_mutate((C_word*)lf[11]+1 /* (set! ##sys#module-exports ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5502,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[15]+1 /* (set! ##sys#register-module-alias ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5526,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[16]+1 /* (set! ##sys#with-module-aliases ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5544,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[20]+1 /* (set! ##sys#resolve-module-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5647,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[24]+1 /* (set! ##sys#find-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5694,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_mutate((C_word*)lf[27]+1 /* (set! ##sys#switch-module ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5748,a[2]=t14,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp));
t16=C_mutate((C_word*)lf[31]+1 /* (set! ##sys#add-to-export-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5801,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[34]+1 /* (set! ##sys#toplevel-definition-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5890,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[35]+1 /* (set! ##sys#register-meta-expression ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5893,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate(&lf[37] /* (set! check-for-redef ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5913,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[41]+1 /* (set! ##sys#register-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5934,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[46]+1 /* (set! ##sys#register-syntax-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6023,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[49]+1 /* (set! ##sys#unregister-syntax-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6104,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[50]+1 /* (set! ##sys#register-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6197,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate(&lf[51] /* (set! merge-se ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6507,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[53]+1 /* (set! ##sys#compiled-module-registration ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6583,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[63]+1 /* (set! ##sys#register-compiled-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6970,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[72]+1 /* (set! ##sys#register-core-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7296,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[74]+1 /* (set! ##sys#register-primitive-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7410,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate(&lf[45] /* (set! find-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7425,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[75]+1 /* (set! ##sys#finalize-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7503,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t31=C_set_block_item(lf[25] /* ##sys#module-table */,0,C_SCHEME_END_OF_LIST);
t32=C_mutate((C_word*)lf[100]+1 /* (set! ##sys#import-library-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8115,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate(&lf[108] /* (set! find-module/import-library ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8254,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate((C_word*)lf[109]+1 /* (set! ##sys#decompose-import ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8269,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[133]+1 /* (set! ##sys#expand-import ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9173,a[2]=((C_word)li119),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[135]+1 /* (set! ##sys#import ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9237,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate(&lf[44] /* (set! module-rename ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9679,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[143]+1 /* (set! ##sys#alias-global-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9697,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[145]+1 /* (set! ##sys#validate-exports ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9777,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[156]+1 /* (set! ##sys#register-functor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9992,a[2]=((C_word)li140),tmp=(C_word)a,a+=3,tmp));
t41=C_mutate((C_word*)lf[157]+1 /* (set! ##sys#instantiate-functor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10008,a[2]=((C_word)li146),tmp=(C_word)a,a+=3,tmp));
t42=C_mutate(&lf[161] /* (set! match-functor-argument ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10234,a[2]=((C_word)li150),tmp=(C_word)a,a+=3,tmp));
t43=lf[169];
t44=*((C_word*)lf[170]+1);
t45=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10394,a[2]=((C_word*)t0)[2],a[3]=t44,a[4]=t43,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:1013: ##sys#register-core-module */
t46=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t46;
av2[1]=t45;
av2[2]=lf[238];
av2[3]=lf[180];
av2[4]=t43;
av2[5]=*((C_word*)lf[170]+1);
((C_proc)(void*)(*((C_word*)t46+1)))(6,av2);}}

/* module-name in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5267,3,av);}
t3=C_i_check_structure_2(t2,lf[4],lf[6]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* module-undefined-list in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5357,3,av);}
t3=C_i_check_structure_2(t2,lf[4],lf[7]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(7));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* set-module-undefined-list! in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5366,4,av);}
t4=C_i_check_structure_2(t2,lf[4],C_SCHEME_FALSE);
/* modules.scm:93: ##sys#block-set! */
t5=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(7);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* ##sys#module-exports in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5502(C_word c,C_word *av){
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
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5502,3,av);}
t3=t2;
t4=C_i_check_structure_2(t3,lf[4],lf[12]);
t5=C_i_block_ref(t3,C_fix(3));
t6=t2;
t7=C_i_check_structure_2(t6,lf[4],lf[13]);
t8=C_i_block_ref(t6,C_fix(11));
t9=t2;
t10=C_i_check_structure_2(t9,lf[4],lf[14]);
t11=C_i_block_ref(t9,C_fix(12));
/* modules.scm:117: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t8;
av2[4]=t11;
C_values(5,av2);}}

/* ##sys#register-module-alias in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5526(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5526,4,av);}
a=C_alloc(7);
t4=C_a_i_cons(&a,2,t2,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5542,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:127: ##sys#module-alias-environment */
t7=*((C_word*)lf[3]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k5540 in register-module-alias in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
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
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* modules.scm:126: ##sys#module-alias-environment */
t3=*((C_word*)lf[3]+1);{
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

/* ##sys#with-module-aliases in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5544(C_word c,C_word *av){
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
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_5544,4,av);}
a=C_alloc(21);
t4=*((C_word*)lf[3]+1);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5548,a[2]=t4,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=C_i_check_list_2(t2,lf[18]);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5607,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5613,a[2]=t8,a[3]=t13,a[4]=t9,a[5]=((C_word)li10),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_5613(t15,t11,t2);}

/* k5546 in with-module-aliases in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_5548,2,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_TRUE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5553,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word)li7),tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5570,a[2]=((C_word*)t0)[3],a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5576,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li9),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:130: ##sys#dynamic-wind */
t9=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[4];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a5552 in k5546 in with-module-aliases in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5553,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* modules.scm:130: module-alias-environment890891 */
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
f_5557(2,av2);}}}

/* k5555 in a5552 in k5546 in with-module-aliases in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5557,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5561,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:130: module-alias-environment890891 */
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k5559 in k5555 in a5552 in k5546 in with-module-aliases in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_5561,2,av);}
a=C_alloc(4);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5564,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:130: module-alias-environment890891 */
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

/* k5562 in k5559 in k5555 in a5552 in k5546 in with-module-aliases in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5564,2,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a5569 in k5546 in with-module-aliases in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5570,2,av);}
/* modules.scm:134: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a5575 in k5546 in with-module-aliases in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5576,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5580,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:130: module-alias-environment890891 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k5578 in a5575 in k5546 in with-module-aliases in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5580,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5583,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:130: module-alias-environment890891 */
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

/* k5581 in k5578 in a5575 in k5546 in with-module-aliases in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5583,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5605 in with-module-aliases in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5607,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5611,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:133: ##sys#module-alias-environment */
t4=*((C_word*)lf[3]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5609 in k5605 in with-module-aliases in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5611,2,av);}
/* modules.scm:131: scheme#append */
t2=*((C_word*)lf[19]+1);{
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

/* map-loop900 in with-module-aliases in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_5613(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5613,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_i_cadr(t3);
t6=C_a_i_cons(&a,2,t4,t5);
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

/* ##sys#resolve-module-name in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5647(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5647,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5655,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:137: chicken.internal#library-id */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[23]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[23]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k5653 in resolve-module-name in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_5655,2,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5657,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word)li13),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_5657(t5,((C_word*)t0)[4],t1,C_SCHEME_END_OF_LIST);}

/* loop in k5653 in resolve-module-name in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_5657(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_5657,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5692,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* modules.scm:138: ##sys#module-alias-environment */
t5=*((C_word*)lf[3]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* g944 in k5690 in loop in k5653 in resolve-module-name in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_5665(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_5665,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_i_cdr(t2);
if(C_truep(C_i_memq(t3,((C_word*)t0)[2]))){
/* modules.scm:142: chicken.base#error */
t4=*((C_word*)lf[21]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[22];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
/* modules.scm:143: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_5657(t5,t1,t3,t4);}}

/* k5690 in loop in k5653 in resolve-module-name in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5692,2,av);}
a=C_alloc(7);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5665,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li12),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:138: g944 */
t4=t3;
f_5665(t4,((C_word*)t0)[7],t2);}
else{
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* ##sys#find-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_5694,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_TRUE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_assq(t2,*((C_word*)lf[25]+1));
if(C_truep(t12)){
t13=t1;{
C_word *av2=av;
av2[0]=t13;
av2[1]=C_i_cdr(t12);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
if(C_truep(t5)){
/* modules.scm:148: chicken.base#error */
t13=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t13;
av2[1]=t1;
av2[2]=t9;
av2[3]=lf[26];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}
else{
t13=t1;{
C_word *av2=av;
av2[0]=t13;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}}}

/* ##sys#switch-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5748,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5795,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:154: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t3;
tp(2,av2);}}

/* k5753 in k5797 in k5793 in switch-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5755,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5758,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5783,a[2]=((C_word*)t0)[5],a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp);
/* modules.scm:155: g982 */
t4=t3;
f_5783(t4,t2,t1);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[5]);
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
f_5758(2,av2);}}}

/* k5756 in k5753 in k5797 in k5793 in switch-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5758,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5761,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=((C_word*)t0)[3];
t4=C_i_check_structure_2(t3,lf[4],lf[30]);
t5=t2;
f_5761(t5,C_i_block_ref(t3,C_fix(14)));}
else{
t3=t2;
f_5761(t3,((C_word*)((C_word*)t0)[4])[1]);}}

/* k5759 in k5756 in k5753 in k5797 in k5793 in switch-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_5761(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_5761,2,t0,t1);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5764,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5770,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_car(t2);
/* modules.scm:162: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}
else{
/* modules.scm:164: ##sys#current-module */
t4=*((C_word*)lf[2]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k5762 in k5759 in k5756 in k5753 in k5797 in k5793 in switch-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5764,2,av);}
/* modules.scm:164: ##sys#current-module */
t2=*((C_word*)lf[2]+1);{
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

/* k5768 in k5759 in k5756 in k5753 in k5797 in k5793 in switch-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5770,2,av);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
/* modules.scm:163: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
tp(3,av2);}}

/* g982 in k5753 in k5797 in k5793 in switch-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_5783(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5783,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[4],C_SCHEME_FALSE);
/* modules.scm:93: ##sys#block-set! */
t4=*((C_word*)lf[9]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(14);
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k5793 in switch-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5795,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5799,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:154: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t3;
tp(2,av2);}}

/* k5797 in k5793 in switch-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5799,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5755,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:155: ##sys#current-module */
t5=*((C_word*)lf[2]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* ##sys#add-to-export-list in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5801(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5801,4,av);}
a=C_alloc(6);
t4=t2;
t5=C_i_check_structure_2(t4,lf[4],lf[12]);
t6=C_i_block_ref(t4,C_fix(3));
t7=C_eqp(t6,C_SCHEME_TRUE);
if(C_truep(t7)){
t8=t2;
t9=C_i_check_structure_2(t8,lf[4],lf[32]);
t10=C_i_block_ref(t8,C_fix(5));
t11=t10;
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5817,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t11,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:170: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t12;
tp(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5888,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:180: scheme#append */
t9=*((C_word*)lf[19]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=t6;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}}

/* k5815 in add-to-export-list in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_5817,2,av);}
a=C_alloc(25);
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5826,a[2]=t4,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5818,a[2]=t2,a[3]=t5,a[4]=((C_word)li19),tmp=(C_word)a,a+=5,tmp);
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(t7,lf[33]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5840,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5860,a[2]=t6,a[3]=t11,a[4]=((C_word)li20),tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_5860(t13,t9,t7);}

/* g999 in k5815 in add-to-export-list in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static C_word C_fcall f_5818(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_i_assq(t1,((C_word*)t0)[2]);
if(C_truep(t2)){
return((
  /* modules.scm:174: g1015 */
  f_5826(C_a_i(&a,3),((C_word*)t0)[3],t2)
));}
else{
t3=C_SCHEME_UNDEFINED;
return(t3);}}

/* g1015 in k5815 in add-to-export-list in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static C_word C_fcall f_5826(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
return(t3);}

/* k5838 in k5815 in add-to-export-list in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5840(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5840,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5843,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5854,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_i_check_structure_2(t4,lf[4],lf[14]);
t6=C_i_block_ref(t4,C_fix(12));
/* modules.scm:178: scheme#append */
t7=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k5841 in k5838 in k5815 in add-to-export-list in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5843,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5850,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:179: scheme#append */
t3=*((C_word*)lf[19]+1);{
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

/* k5848 in k5841 in k5838 in k5815 in add-to-export-list in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5850,2,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=C_i_check_structure_2(t3,lf[4],C_SCHEME_FALSE);
/* modules.scm:93: ##sys#block-set! */
t5=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_fix(5);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k5852 in k5838 in k5815 in add-to-export-list in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5854,2,av);}
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[4],C_SCHEME_FALSE);
/* modules.scm:93: ##sys#block-set! */
t4=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=C_fix(12);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* for-each-loop998 in k5815 in add-to-export-list in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_5860(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_5860,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* modules.scm:172: g999 */
  f_5818(C_a_i(&a,3),((C_word*)t0)[2],t3)
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

/* k5886 in add-to-export-list in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5888,2,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=C_i_check_structure_2(t3,lf[4],C_SCHEME_FALSE);
/* modules.scm:93: ##sys#block-set! */
t5=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_fix(3);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* ##sys#toplevel-definition-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5890(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5890,5,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* ##sys#register-meta-expression in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5893,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5897,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:185: ##sys#current-module */
t4=*((C_word*)lf[2]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5895 in register-meta-expression in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5897(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5897,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_i_check_structure_2(t1,lf[4],lf[36]);
t3=C_i_block_ref(t1,C_fix(10));
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=((C_word*)t0)[3];
t6=C_i_check_structure_2(t1,lf[4],C_SCHEME_FALSE);
/* modules.scm:93: ##sys#block-set! */
t7=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t1;
av2[3]=C_fix(10);
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* check-for-redef in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_5913(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_5913,4,t1,t2,t3,t4);}
a=C_alloc(5);
t5=C_i_assq(t2,t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5920,a[2]=t2,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
/* modules.scm:190: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[38]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t6;
av2[2]=lf[40];
av2[3]=t2;
tp(4,av2);}}
else{
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_5920(2,av2);}}}

/* k5918 in check-for-redef in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5920,2,av);}
if(C_truep(C_i_assq(((C_word*)t0)[2],((C_word*)t0)[3]))){
/* modules.scm:192: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[38]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[39];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* ##sys#register-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5934(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5934,4,av);}
a=C_alloc(5);
if(C_truep(t3)){
t4=t3;
t5=C_i_check_structure_2(t4,lf[4],lf[12]);
t6=C_i_block_ref(t4,C_fix(3));
t7=C_eqp(C_SCHEME_TRUE,t6);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5944,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t7)){
t9=t8;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t7;
f_5944(2,av2);}}
else{
/* modules.scm:197: find-export */
f_7425(t8,t2,t3,C_SCHEME_TRUE);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k5942 in register-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5944,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5947,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:198: module-undefined-list */
t4=*((C_word*)lf[7]+1);{
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

/* k5945 in k5942 in register-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5947(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_5947,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5950,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6010,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[4];
t6=C_i_check_structure_2(t5,lf[4],lf[6]);
t7=C_i_block_ref(t5,C_fix(1));
/* modules.scm:200: module-rename */
f_9679(t4,((C_word*)t0)[2],t7);}

/* k5948 in k5945 in k5942 in register-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_5950,2,av);}
a=C_alloc(10);
t2=C_i_assq(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5956,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6006,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:202: delete */
f_4457(t4,t2,((C_word*)t0)[3],*((C_word*)lf[43]+1));}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_5956(2,av2);}}}

/* k5954 in k5948 in k5945 in k5942 in register-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5956(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_5956,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5959,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5995,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:203: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t3;
tp(2,av2);}}

/* k5957 in k5954 in k5948 in k5945 in k5942 in register-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5959(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_5959,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5962,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[4];
t4=C_i_check_structure_2(t3,lf[4],lf[32]);
t5=C_i_block_ref(t3,C_fix(5));
t6=C_a_i_cons(&a,2,((C_word*)t0)[3],t5);
t7=((C_word*)t0)[4];
t8=C_i_check_structure_2(t7,lf[4],C_SCHEME_FALSE);
/* modules.scm:93: ##sys#block-set! */
t9=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t2;
av2[2]=t7;
av2[3]=C_fix(5);
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* k5960 in k5957 in k5954 in k5948 in k5945 in k5942 in register-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5962,2,av);}
a=C_alloc(6);
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_FALSE);
t3=((C_word*)t0)[4];
t4=C_i_check_structure_2(t3,lf[4],lf[42]);
t5=C_i_block_ref(t3,C_fix(4));
t6=C_a_i_cons(&a,2,t2,t5);
t7=((C_word*)t0)[5];
t8=((C_word*)t0)[4];
t9=C_i_check_structure_2(t8,lf[4],C_SCHEME_FALSE);
/* modules.scm:93: ##sys#block-set! */
t10=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=t8;
av2[3]=C_fix(4);
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5993 in k5954 in k5948 in k5945 in k5942 in register-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5995,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5999,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:203: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t3;
tp(2,av2);}}

/* k5997 in k5993 in k5954 in k5948 in k5945 in k5942 in register-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_5999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5999,2,av);}
/* modules.scm:203: check-for-redef */
f_5913(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k6004 in k5948 in k5945 in k5942 in register-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6006,2,av);}
/* modules.scm:202: set-module-undefined-list! */
t2=*((C_word*)lf[8]+1);{
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

/* k6008 in k5945 in k5942 in register-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6010,2,av);}
/* modules.scm:199: ##sys#toplevel-definition-hook */
t2=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* ##sys#register-syntax-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6023(C_word c,C_word *av){
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
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6023,5,av);}
a=C_alloc(6);
if(C_truep(t3)){
t5=t3;
t6=C_i_check_structure_2(t5,lf[4],lf[12]);
t7=C_i_block_ref(t5,C_fix(3));
t8=C_eqp(C_SCHEME_TRUE,t7);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6033,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t8)){
t10=t9;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t8;
f_6033(2,av2);}}
else{
/* modules.scm:215: find-export */
f_7425(t9,t2,t3,C_SCHEME_TRUE);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k6031 in register-syntax-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6033,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6036,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:216: module-undefined-list */
t4=*((C_word*)lf[7]+1);{
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

/* k6034 in k6031 in register-syntax-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6036(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6036,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[4],lf[6]);
t4=C_i_block_ref(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6042,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_assq(((C_word*)t0)[3],t1))){
/* modules.scm:219: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[38]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t5;
av2[2]=lf[48];
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_6042(2,av2);}}}

/* k6040 in k6034 in k6031 in register-syntax-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6042,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6045,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6085,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:220: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6043 in k6040 in k6034 in k6031 in register-syntax-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6045(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_6045,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6051,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=((C_word*)t0)[4];
t5=C_i_check_structure_2(t4,lf[4],lf[42]);
t6=C_i_block_ref(t4,C_fix(4));
t7=C_a_i_cons(&a,2,t3,t6);
t8=((C_word*)t0)[4];
t9=C_i_check_structure_2(t8,lf[4],C_SCHEME_FALSE);
/* modules.scm:93: ##sys#block-set! */
t10=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t2;
av2[2]=t8;
av2[3]=C_fix(4);
av2[4]=t7;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6051(2,av2);}}}

/* k6049 in k6043 in k6040 in k6034 in k6031 in register-syntax-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6051,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];
t4=C_i_check_structure_2(t3,lf[4],lf[47]);
t5=C_i_block_ref(t3,C_fix(6));
t6=C_a_i_cons(&a,2,t2,t5);
t7=((C_word*)t0)[5];
t8=((C_word*)t0)[4];
t9=C_i_check_structure_2(t8,lf[4],C_SCHEME_FALSE);
/* modules.scm:93: ##sys#block-set! */
t10=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=t8;
av2[3]=C_fix(6);
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* k6083 in k6040 in k6034 in k6031 in register-syntax-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6085,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6089,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:220: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6087 in k6083 in k6040 in k6034 in k6031 in register-syntax-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6089,2,av);}
/* modules.scm:220: check-for-redef */
f_5913(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* ##sys#unregister-syntax-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6104(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_6104,4,av);}
a=C_alloc(7);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6115,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=t3;
t6=C_i_check_structure_2(t5,lf[4],lf[47]);
t7=C_i_block_ref(t5,C_fix(6));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6121,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp);
/* modules.scm:235: delete */
f_4457(t4,t2,t7,t8);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k6113 in unregister-syntax-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6115,2,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=C_i_check_structure_2(t3,lf[4],C_SCHEME_FALSE);
/* modules.scm:93: ##sys#block-set! */
t5=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_fix(6);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* a6120 in unregister-syntax-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6121,4,av);}
t4=C_i_car(t3);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_eqp(t2,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k6136 in g2445 in k9702 in mrename in alias-global-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6138(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6138,2,av);}
a=C_alloc(9);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6145,a[2]=((C_word*)t0)[3],a[3]=((C_word)li130),tmp=(C_word)a,a+=4,tmp);
/* modules.scm:240: g1091 */
t4=t3;
f_6145(t4,((C_word*)t0)[4],t2);}
else{
if(C_truep(((C_word*)t0)[3])){
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_cons(&a,2,t4,t1);
/* modules.scm:245: set-module-undefined-list! */
t6=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,t3,t1);
/* modules.scm:245: set-module-undefined-list! */
t5=*((C_word*)lf[8]+1);{
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
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}}

/* g1091 in k6136 in g2445 in k9702 in mrename in alias-global-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_6145(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6145,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6152,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=C_i_cdr(t2);
t5=C_i_memq(((C_word*)t0)[2],t4);
t6=t3;
f_6152(t6,C_i_not(t5));}
else{
t4=t3;
f_6152(t4,C_SCHEME_FALSE);}}

/* k6150 in g1091 in k6136 in g2445 in k9702 in mrename in alias-global-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_6152(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,1)))){
C_save_and_reclaim_args((void *)trf_6152,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_i_set_cdr(((C_word*)t0)[2],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* ##sys#register-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c<5) C_bad_min_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-5)*C_SIZEOF_PAIR +22,c,1)))){
C_save_and_reclaim((void*)f_6197,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+22);
t5=C_build_rest(&a,c,5,av);
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
t6=C_i_nullp(t5);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_car(t5));
t8=C_i_nullp(t5);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t5));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_car(t9));
t12=C_i_nullp(t9);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t14=t2;
t15=C_a_i_record(&a,15,lf[4],t14,t3,t4,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t7,t11,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);
t16=C_a_i_cons(&a,2,t2,t15);
t17=C_a_i_cons(&a,2,t16,*((C_word*)lf[25]+1));
t18=C_mutate((C_word*)lf[25]+1 /* (set! ##sys#module-table ...) */,t17);
t19=t1;{
C_word *av2=av;
av2[0]=t19;
av2[1]=t15;
((C_proc)(void*)(*((C_word*)t19+1)))(2,av2);}}

/* warn in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_6303(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_6303,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6311,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6315,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:266: scheme#symbol->string */
t6=*((C_word*)lf[93]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k6309 in warn in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6311,2,av);}
/* modules.scm:265: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[38]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k6313 in warn in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6315(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6315,2,av);}
/* modules.scm:266: scheme#string-append */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[91];
av2[4]=t1;
av2[5]=lf[92];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* loop in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_6326(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_6326,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
if(C_truep(C_i_symbolp(t3))){
t4=t2;
t5=C_u_i_cdr(t4);
/* modules.scm:272: loop */
t9=t1;
t10=t5;
t1=t9;
t2=t10;
goto loop;}
else{
t4=C_i_cdar(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6353,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li65),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_6353(t8,t1,t4);}}}

/* loop2 in loop in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_6353(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_6353,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=C_i_cdr(((C_word*)t0)[2]);
/* modules.scm:275: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6326(t4,t1,t3);}
else{
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6501,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:276: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t5;
tp(2,av2);}}}

/* k6374 in k6499 in loop2 in loop in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6376,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* modules.scm:278: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6353(t4,((C_word*)t0)[4],t3);}

/* g1149 in k6499 in loop2 in loop in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_6390(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_6390,3,t0,t1,t2);}
a=C_alloc(12);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6398,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(((C_word*)t0)[2]);
t5=t4;
t6=C_i_cdr(t2);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6415,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t6)){
t8=t3;
f_6398(t8,C_a_i_cons(&a,2,t5,t6));}
else{
t8=((C_word*)t0)[2];
t9=C_u_i_car(t8);
/* modules.scm:284: module-rename */
f_9679(t7,t9,((C_word*)t0)[4]);}}

/* k6396 in g1149 in k6499 in loop2 in loop in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_6398(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_6398,2,t0,t1);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6402,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* modules.scm:285: loop2 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6353(t6,t3,t5);}

/* k6400 in k6396 in g1149 in k6499 in loop2 in loop in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6402,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6413 in g1149 in k6499 in loop2 in loop in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6415,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_6398(t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* g1156 in k6489 in k6499 in loop2 in loop in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_6430(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_6430,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_i_cdr(t2);
if(C_truep(C_i_symbolp(t3))){
t4=C_i_car(((C_word*)t0)[2]);
t5=t2;
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,t4,t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6448,a[2]=t1,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=((C_word*)t0)[2];
t11=C_u_i_cdr(t10);
/* modules.scm:289: loop2 */
t12=((C_word*)((C_word*)t0)[3])[1];
f_6353(t12,t9,t11);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6459,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_i_car(((C_word*)t0)[2]);
/* modules.scm:291: warn */
t6=((C_word*)t0)[4];
f_6303(t6,t4,lf[95],t5);}}

/* k6446 in g1156 in k6489 in k6499 in loop2 in loop in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6448(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6448,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6457 in g1156 in k6489 in k6499 in loop2 in loop in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6459(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6459,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* modules.scm:292: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6353(t4,((C_word*)t0)[4],t3);}

/* k6476 in k6489 in k6499 in loop2 in loop in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6478,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* modules.scm:295: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6353(t4,((C_word*)t0)[4],t3);}

/* k6489 in k6499 in loop2 in loop in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6491(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6491,2,av);}
a=C_alloc(6);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6430,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li64),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:275: g1156 */
t4=t3;
f_6430(t4,((C_word*)t0)[6],t2);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6478,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_car(t4);
/* modules.scm:294: warn */
t6=((C_word*)t0)[5];
f_6303(t6,t3,lf[96],t5);}}

/* k6499 in loop2 in loop in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6501(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_6501,2,av);}
a=C_alloc(7);
if(C_truep(C_i_assq(((C_word*)t0)[2],t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6376,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
/* modules.scm:277: warn */
t5=((C_word*)t0)[6];
f_6303(t5,t2,lf[94],t4);}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
t4=C_i_assq(t3,((C_word*)t0)[7]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6390,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[8],a[5]=((C_word)li63),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:275: g1149 */
t6=t5;
f_6390(t6,((C_word*)t0)[5],t4);}
else{
t5=((C_word*)t0)[3];
t6=C_u_i_car(t5);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6491,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:286: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t7;
tp(2,av2);}}}}

/* merge-se in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_6507(C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_6507,2,t1,t2);}
a=C_alloc(13);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6515,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4676,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=C_i_check_list_2(t2,lf[52]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4586,a[2]=t5,a[3]=t8,a[4]=((C_word)li34),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_4586(t10,t3,t2);}

/* k6513 in merge-se in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6515,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6517,a[2]=t3,a[3]=((C_word)li31),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_6517(t5,((C_word*)t0)[2],t1);}

/* bwd in k6513 in merge-se in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_6517(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_6517,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
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
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6540,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=t2;
t8=C_u_i_cdr(t7);
/* modules.scm:302: bwd */
t10=t6;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}}

/* k6538 in bwd in k6513 in merge-se in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6540,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6542,a[2]=t3,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_6542(t5,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* fwd in k6538 in bwd in k6513 in merge-se in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_6542(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_6542,4,t0,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_caar(t2);
if(C_truep(C_i_assq(t4,t3))){
t5=t2;
t6=C_u_i_cdr(t5);
/* modules.scm:304: fwd */
t11=t1;
t12=t6;
t13=t3;
t1=t11;
t2=t12;
t3=t13;
goto loop;}
else{
t5=t2;
t6=C_u_i_car(t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6569,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=t2;
t9=C_u_i_cdr(t8);
/* modules.scm:305: fwd */
t11=t7;
t12=t9;
t13=t3;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}}

/* k6567 in fwd in k6538 in bwd in k6513 in merge-se in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6569,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#compiled-module-registration in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6583(C_word c,C_word *av){
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
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6583,3,av);}
a=C_alloc(11);
t3=t2;
t4=C_i_check_structure_2(t3,lf[4],lf[42]);
t5=C_i_block_ref(t3,C_fix(4));
t6=t5;
t7=t2;
t8=C_i_check_structure_2(t7,lf[4],lf[6]);
t9=C_i_block_ref(t7,C_fix(1));
t10=t9;
t11=t2;
t12=C_i_check_structure_2(t11,lf[4],lf[54]);
t13=C_i_block_ref(t11,C_fix(8));
t14=t2;
t15=C_i_check_structure_2(t14,lf[4],lf[14]);
t16=C_i_block_ref(t14,C_fix(12));
t17=t16;
t18=t2;
t19=C_i_check_structure_2(t18,lf[4],lf[55]);
t20=C_i_block_ref(t18,C_fix(9));
t21=t20;
t22=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6606,a[2]=t1,a[3]=t2,a[4]=t6,a[5]=t17,a[6]=t10,a[7]=t21,tmp=(C_word)a,a+=8,tmp);
t23=C_i_pairp(t13);
t24=(C_truep(t23)?C_i_pairp(t17):C_SCHEME_FALSE);
if(C_truep(t24)){
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6962,a[2]=t22,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:314: chicken.syntax#strip-syntax */
t26=*((C_word*)lf[62]+1);{
C_word *av2=av;
av2[0]=t26;
av2[1]=t25;
av2[2]=t13;
((C_proc)(void*)(*((C_word*)t26+1)))(3,av2);}}
else{
t25=t22;
f_6606(t25,C_SCHEME_END_OF_LIST);}}

/* k6604 in compiled-module-registration in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_6606(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_6606,2,t0,t1);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6610,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6614,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=C_i_pairp(((C_word*)t0)[7]);
t6=(C_truep(t5)?C_i_pairp(((C_word*)t0)[5]):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6934,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:317: chicken.syntax#strip-syntax */
t8=*((C_word*)lf[62]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t7=t4;
f_6614(t7,C_SCHEME_END_OF_LIST);}}

/* k6608 in k6604 in compiled-module-registration in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6610,2,av);}
/* modules.scm:307: ##sys#append */
t2=*((C_word*)lf[56]+1);{
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

/* k6612 in k6604 in compiled-module-registration in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_6614(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_6614,2,t0,t1);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6618,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6622,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=C_i_getprop(((C_word*)t0)[6],lf[64],C_SCHEME_FALSE);
t6=(C_truep(t5)?t5:C_i_pairp(((C_word*)t0)[5]));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6913,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t8=((C_word*)t0)[3];
t9=C_i_check_structure_2(t8,lf[4],lf[36]);
t10=C_i_block_ref(t8,C_fix(10));
/* modules.scm:320: chicken.syntax#strip-syntax */
t11=*((C_word*)lf[62]+1);{
C_word av2[3];
av2[0]=t11;
av2[1]=t7;
av2[2]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t7=t4;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_SCHEME_END_OF_LIST;
f_6622(2,av2);}}}

/* k6616 in k6612 in k6604 in compiled-module-registration in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6618,2,av);}
/* modules.scm:307: ##sys#append */
t2=*((C_word*)lf[56]+1);{
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

/* k6620 in k6612 in k6604 in compiled-module-registration in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(34,c,3)))){
C_save_and_reclaim((void *)f_6622,2,av);}
a=C_alloc(34);
t2=t1;
t3=((C_word*)t0)[2];
t4=C_i_check_structure_2(t3,lf[4],lf[6]);
t5=C_i_block_ref(t3,C_fix(1));
t6=C_a_i_list(&a,2,lf[57],t5);
t7=t6;
t8=((C_word*)t0)[2];
t9=C_i_check_structure_2(t8,lf[4],lf[58]);
t10=C_i_block_ref(t8,C_fix(2));
t11=C_a_i_list(&a,2,lf[57],t10);
t12=t11;
t13=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t14=t13;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=((C_word*)t15)[1];
t17=((C_word*)t0)[2];
t18=C_i_check_structure_2(t17,lf[4],lf[59]);
t19=C_i_block_ref(t17,C_fix(13));
t20=C_i_check_list_2(t19,lf[18]);
t21=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6856,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t7,a[6]=t12,a[7]=((C_word*)t0)[5],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6858,a[2]=t15,a[3]=t23,a[4]=t16,a[5]=((C_word)li39),tmp=(C_word)a,a+=6,tmp));
t25=((C_word*)t23)[1];
f_6858(t25,t21,t19);}

/* k6652 in k6765 in k6854 in k6620 in k6612 in k6604 in compiled-module-registration in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_6654(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,0,3)))){
C_save_and_reclaim_args((void *)trf_6654,2,t0,t1);}
a=C_alloc(24);
t2=C_a_i_list(&a,7,lf[63],((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t1);
t3=C_a_i_list(&a,1,t2);
/* modules.scm:307: ##sys#append */
t4=*((C_word*)lf[56]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=((C_word*)t0)[7];
av2[2]=((C_word*)t0)[8];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6656 in k6765 in k6854 in k6620 in k6612 in k6604 in compiled-module-registration in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6658,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_6654(t2,C_a_i_cons(&a,2,lf[60],t1));}

/* loop in k6765 in k6854 in k6620 in k6612 in k6604 in compiled-module-registration in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_6670(C_word t0,C_word t1,C_word t2){
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
loop:
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_6670,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_caar(t2);
if(C_truep(C_i_assq(t3,((C_word*)t0)[2]))){
t4=t2;
t5=C_u_i_cdr(t4);
/* modules.scm:347: loop */
t15=t1;
t16=t5;
t1=t15;
t2=t16;
goto loop;}
else{
t4=C_i_caar(t2);
t5=t2;
t6=C_u_i_car(t5);
t7=C_u_i_car(t6);
t8=C_a_i_list(&a,2,lf[57],t7);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6712,a[2]=t9,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t11=t2;
t12=C_u_i_car(t11);
t13=C_u_i_cdr(t12);
/* modules.scm:350: chicken.syntax#strip-syntax */
t14=*((C_word*)lf[62]+1);{
C_word av2[3];
av2[0]=t14;
av2[1]=t10;
av2[2]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(3,av2);}}}}

/* k6700 in k6710 in loop in k6765 in k6854 in k6620 in k6612 in k6604 in compiled-module-registration in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6702,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6710 in loop in k6765 in k6854 in k6620 in k6612 in k6604 in compiled-module-registration in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6712(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6712,2,av);}
a=C_alloc(13);
t2=C_a_i_list(&a,3,lf[61],((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6702,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
/* modules.scm:351: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_6670(t7,t4,t6);}

/* g1252 in k6854 in k6620 in k6612 in k6604 in compiled-module-registration in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_6727(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_6727,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_car(t2);
t4=C_i_assq(t3,((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t4))){
t5=t2;
t6=C_u_i_car(t5);
t7=C_a_i_list(&a,2,lf[57],t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6751,a[2]=t1,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=C_u_i_cdr(t4);
/* modules.scm:337: chicken.syntax#strip-syntax */
t11=*((C_word*)lf[62]+1);{
C_word av2[3];
av2[0]=t11;
av2[1]=t9;
av2[2]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_list(&a,2,lf[57],t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k6749 in g1252 in k6854 in k6620 in k6612 in k6604 in compiled-module-registration in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_6751,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[61],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6765 in k6854 in k6620 in k6612 in k6604 in compiled-module-registration in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_6767,2,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,lf[60],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6654,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6658,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[8]))){
t6=t4;
f_6654(t6,C_a_i_cons(&a,2,lf[60],C_SCHEME_END_OF_LIST));}
else{
t6=((C_word*)t0)[9];
t7=C_i_check_structure_2(t6,lf[4],lf[47]);
t8=C_i_block_ref(t6,C_fix(6));
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6670,a[2]=((C_word*)t0)[8],a[3]=t10,a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_6670(t12,t5,t8);}}

/* map-loop1246 in k6854 in k6620 in k6612 in k6604 in compiled-module-registration in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_6769(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6769,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6794,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:333: g1252 */
t5=((C_word*)t0)[4];
f_6727(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6792 in map-loop1246 in k6854 in k6620 in k6612 in k6604 in compiled-module-registration in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6794(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6794,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6769(t6,((C_word*)t0)[5],t5);}

/* k6854 in k6620 in k6612 in k6604 in compiled-module-registration in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(37,c,3)))){
C_save_and_reclaim((void *)f_6856,2,av);}
a=C_alloc(37);
t2=C_a_i_cons(&a,2,lf[60],t1);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_i_check_structure_2(t4,lf[4],lf[13]);
t6=C_i_block_ref(t4,C_fix(11));
t7=C_a_i_list(&a,2,lf[57],t6);
t8=t7;
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6727,a[2]=((C_word*)t0)[3],a[3]=((C_word)li36),tmp=(C_word)a,a+=4,tmp);
t14=C_i_check_list_2(((C_word*)t0)[4],lf[18]);
t15=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6767,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t3,a[5]=t8,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[2],tmp=(C_word)a,a+=10,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6769,a[2]=t11,a[3]=t17,a[4]=t13,a[5]=t12,a[6]=((C_word)li38),tmp=(C_word)a,a+=7,tmp));
t19=((C_word*)t17)[1];
f_6769(t19,t15,((C_word*)t0)[4]);}

/* map-loop1213 in k6620 in k6612 in k6604 in compiled-module-registration in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_6858(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(30,0,2)))){
C_save_and_reclaim_args((void *)trf_6858,3,t0,t1,t2);}
a=C_alloc(30);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6883,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_cdr(t4);
if(C_truep(C_i_symbolp(t5))){
t6=C_u_i_car(t4);
t7=C_u_i_cdr(t4);
t8=C_a_i_cons(&a,2,t6,t7);
t9=t3;
f_6883(t9,C_a_i_list(&a,2,lf[57],t8));}
else{
t6=C_u_i_car(t4);
t7=C_a_i_list(&a,2,lf[57],t6);
t8=C_a_i_list(&a,2,lf[57],C_SCHEME_END_OF_LIST);
t9=C_u_i_cdr(t4);
t10=t3;
f_6883(t10,C_a_i_list(&a,4,lf[60],t7,t8,t9));}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6881 in map-loop1213 in k6620 in k6612 in k6604 in compiled-module-registration in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_6883(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_6883,2,t0,t1);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6858(t6,((C_word*)t0)[5],t5);}

/* k6911 in k6612 in k6604 in compiled-module-registration in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6913,2,av);}
/* modules.scm:320: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[65]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[65]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k6932 in k6604 in compiled-module-registration in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_6934,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,lf[66],t1);
t3=((C_word*)t0)[2];
f_6614(t3,C_a_i_list(&a,1,t2));}

/* k6960 in compiled-module-registration in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_6962,2,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,lf[66],t1);
t3=C_a_i_list(&a,2,lf[57],t2);
t4=C_a_i_list(&a,2,lf[67],t3);
t5=((C_word*)t0)[2];
f_6606(t5,C_a_i_list(&a,1,t4));}

/* ##sys#register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_6970(C_word c,C_word *av){
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
if(c<7) C_bad_min_argc_2(c,7,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-7)*C_SIZEOF_PAIR +21,c,3)))){
C_save_and_reclaim((void*)f_6970,c,av);}
a=C_alloc((c-7)*C_SIZEOF_PAIR+21);
t7=C_build_rest(&a,c,7,av);
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
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_car(t7));
t10=t9;
t11=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t12=t11;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=((C_word*)t13)[1];
t15=C_i_check_list_2(t6,lf[18]);
t16=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7035,a[2]=t10,a[3]=t2,a[4]=t3,a[5]=t5,a[6]=t4,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7256,a[2]=t13,a[3]=t18,a[4]=t14,a[5]=((C_word)li46),tmp=(C_word)a,a+=6,tmp));
t20=((C_word*)t18)[1];
f_7256(t20,t16,t6);}

/* k6998 in map-loop1320 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7000,2,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* modules.scm:363: ##sys#error */
t4=*((C_word*)lf[69]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[70];
av2[3]=lf[71];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}
else{
/* modules.scm:363: ##sys#error */
t3=*((C_word*)lf[69]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[70];
av2[3]=lf[71];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k7023 in map-loop1320 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7025,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list3(&a,3,((C_word*)t0)[3],C_SCHEME_FALSE,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7033 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_7035,2,av);}
a=C_alloc(21);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[2],lf[18]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7061,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7222,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li45),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_7222(t12,t8,((C_word*)t0)[2]);}

/* k7049 in map-loop1348 in k7033 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7051,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list3(&a,3,((C_word*)t0)[3],C_SCHEME_FALSE,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7059 in k7033 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7061(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,2)))){
C_save_and_reclaim((void *)f_7061,2,av);}
a=C_alloc(31);
t2=t1;
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];
t5=((C_word*)t0)[4];
t6=((C_word*)t0)[5];
t7=C_a_i_record(&a,15,lf[4],t3,t4,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t5,((C_word*)t0)[6],t6,C_SCHEME_FALSE);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7067,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t8,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t10=C_i_nullp(((C_word*)t0)[6]);
t11=C_i_not(t10);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7198,a[2]=t9,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t11)){
t13=t12;
f_7198(t13,t11);}
else{
t13=C_i_nullp(t2);
t14=t12;
f_7198(t14,C_i_not(t13));}}

/* k7065 in k7059 in k7033 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_7067,2,av);}
a=C_alloc(20);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7068,a[2]=t2,a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp);
t4=C_i_check_list_2(((C_word*)t0)[2],lf[33]);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7093,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7171,a[2]=t7,a[3]=t3,a[4]=((C_word)li44),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_7171(t9,t5,((C_word*)t0)[2]);}

/* g1381 in k7065 in k7059 in k7033 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7068(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_7068,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_cdr(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7080,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cadr(t2);
if(C_truep(t6)){
/* modules.scm:386: merge-se */
f_6507(t5,C_a_i_list(&a,2,t6,((C_word*)t0)[2]));}
else{
/* modules.scm:386: merge-se */
f_6507(t5,C_a_i_list(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]));}}

/* k7078 in g1381 in k7065 in k7059 in k7033 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7080,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_set_car(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7091 in k7065 in k7059 in k7033 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7093(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_7093,2,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7094,a[2]=((C_word*)t0)[2],a[3]=((C_word)li42),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[33]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7119,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7148,a[2]=t6,a[3]=t2,a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7148(t8,t4,((C_word*)t0)[3]);}

/* g1391 in k7091 in k7065 in k7059 in k7033 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7094(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_7094,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_cdr(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7106,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cadr(t2);
if(C_truep(t6)){
/* modules.scm:390: merge-se */
f_6507(t5,C_a_i_list(&a,2,t6,((C_word*)t0)[2]));}
else{
/* modules.scm:390: merge-se */
f_6507(t5,C_a_i_list(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]));}}

/* k7104 in g1391 in k7091 in k7065 in k7059 in k7033 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7106(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7106,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_set_car(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7117 in k7091 in k7065 in k7059 in k7033 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_7119,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7122,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7138,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7146,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:394: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t4;
tp(2,av2);}}

/* k7120 in k7117 in k7091 in k7065 in k7059 in k7033 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_7122,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,*((C_word*)lf[25]+1));
t4=C_mutate((C_word*)lf[25]+1 /* (set! ##sys#module-table ...) */,t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7136 in k7117 in k7091 in k7065 in k7059 in k7033 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7138,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7142,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:395: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t3;
tp(2,av2);}}

/* k7140 in k7136 in k7117 in k7091 in k7065 in k7059 in k7033 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_7142,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_i_check_structure_2(((C_word*)t0)[3],lf[4],C_SCHEME_FALSE);
/* modules.scm:93: ##sys#block-set! */
t4=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(14);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k7144 in k7117 in k7091 in k7065 in k7059 in k7033 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7146,2,av);}
a=C_alloc(9);
/* modules.scm:394: merge-se */
f_6507(((C_word*)t0)[2],C_a_i_list(&a,3,t1,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* for-each-loop1390 in k7091 in k7065 in k7059 in k7033 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7148(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7148,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7158,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:388: g1391 */
t5=((C_word*)t0)[3];
f_7094(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7156 in for-each-loop1390 in k7091 in k7065 in k7059 in k7033 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7158,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7148(t3,((C_word*)t0)[4],t2);}

/* for-each-loop1380 in k7065 in k7059 in k7033 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7171(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7171,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7181,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:384: g1381 */
t5=((C_word*)t0)[3];
f_7068(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7179 in for-each-loop1380 in k7065 in k7059 in k7033 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7181,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7171(t3,((C_word*)t0)[4],t2);}

/* k7196 in k7059 in k7033 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7198(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_7198,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7205,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:380: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t2;
tp(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
f_7067(2,av2);}}}

/* k7203 in k7196 in k7059 in k7033 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7205(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7205,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7209,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:381: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t3;
tp(2,av2);}}

/* k7207 in k7203 in k7196 in k7059 in k7033 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_7209,2,av);}
a=C_alloc(18);
/* modules.scm:379: merge-se */
f_6507(((C_word*)t0)[2],C_a_i_list(&a,6,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]));}

/* map-loop1348 in k7033 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7222(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_7222,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7247,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=C_i_car(t4);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7051,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=C_u_i_cdr(t4);
t10=C_u_i_car(t4);
/* modules.scm:374: ##sys#ensure-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[68]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[68]+1);
av2[1]=t8;
av2[2]=t9;
av2[3]=t10;
tp(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7245 in map-loop1348 in k7033 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7247(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7247,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7222(t6,((C_word*)t0)[5],t5);}

/* map-loop1320 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7256(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_7256,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7281,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
if(C_truep(C_i_symbolp(t4))){
t6=t5;
t7=t4;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7000,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:360: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t8;
tp(2,av2);}}
else{
t6=C_i_car(t4);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7025,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=C_u_i_cdr(t4);
t10=C_u_i_car(t4);
/* modules.scm:370: ##sys#ensure-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[68]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[68]+1);
av2[1]=t8;
av2[2]=t9;
av2[3]=t10;
tp(4,av2);}}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7279 in map-loop1320 in register-compiled-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7281(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7281,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7256(t6,((C_word*)t0)[5],t5);}

/* ##sys#register-core-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c<5) C_bad_min_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-5)*C_SIZEOF_PAIR +7,c,2)))){
C_save_and_reclaim((void*)f_7296,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+7);
t5=C_build_rest(&a,c,5,av);
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
t6=C_i_nullp(t5);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_car(t5));
t8=t7;
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7303,a[2]=t2,a[3]=t8,a[4]=t3,a[5]=t4,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:400: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t9;
tp(2,av2);}}

/* k7301 in register-core-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_7303,2,av);}
a=C_alloc(25);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7346,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li48),tmp=(C_word)a,a+=5,tmp);
t8=C_i_check_list_2(((C_word*)t0)[3],lf[18]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7368,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7370,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li49),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_7370(t13,t9,((C_word*)t0)[3]);}

/* k7307 in k7366 in k7301 in register-core-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_7309,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,*((C_word*)lf[25]+1));
t4=C_mutate((C_word*)lf[25]+1 /* (set! ##sys#module-table ...) */,t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7323 in k7366 in k7301 in register-core-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7325(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7325,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7329,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:418: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t3;
tp(2,av2);}}

/* k7327 in k7323 in k7366 in k7301 in register-core-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_7329,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_i_check_structure_2(((C_word*)t0)[3],lf[4],C_SCHEME_FALSE);
/* modules.scm:93: ##sys#block-set! */
t4=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(14);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k7331 in k7366 in k7301 in register-core-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7333(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7333,2,av);}
a=C_alloc(9);
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[4],lf[13]);
t3=C_i_block_ref(((C_word*)t0)[2],C_fix(11));
t4=C_i_check_structure_2(((C_word*)t0)[2],lf[4],lf[14]);
t5=C_i_block_ref(((C_word*)t0)[2],C_fix(12));
/* modules.scm:415: merge-se */
f_6507(((C_word*)t0)[3],C_a_i_list(&a,3,t1,t3,t5));}

/* g1449 in k7301 in register-core-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7346(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_7346,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=C_i_assq(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* modules.scm:407: ##sys#error */
t4=*((C_word*)lf[69]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[73];
av2[3]=t2;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}
else{
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7366 in k7301 in register-core-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_7368,2,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=C_a_i_record(&a,15,lf[4],t2,t3,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t4,t1,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7309,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7325,a[2]=t6,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7333,a[2]=t6,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:415: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t9;
tp(2,av2);}}

/* map-loop1443 in k7301 in register-core-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7370(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7370,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7395,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:404: g1449 */
t5=((C_word*)t0)[4];
f_7346(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7393 in map-loop1443 in k7301 in register-core-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7395(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7395,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7370(t6,((C_word*)t0)[5],t5);}

/* ##sys#register-primitive-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +0,c,5)))){
C_save_and_reclaim((void*)f_7410,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+0);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* modules.scm:424: ##sys#register-core-module */
t5=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t2;
av2[4]=t3;
av2[5]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
t5=C_i_car(t4);
/* modules.scm:424: ##sys#register-core-module */
t6=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=t2;
av2[4]=t3;
av2[5]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}}

/* find-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7425(C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7425,4,t1,t2,t3,t4);}
a=C_alloc(5);
t5=t3;
t6=C_i_check_structure_2(t5,lf[4],lf[12]);
t7=C_i_block_ref(t5,C_fix(3));
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7436,a[2]=t2,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t9=C_eqp(C_SCHEME_TRUE,t7);
if(C_truep(t9)){
t10=t3;
t11=C_i_check_structure_2(t10,lf[4],lf[32]);
t12=t8;
f_7436(t12,C_i_block_ref(t10,C_fix(5)));}
else{
t10=t8;
f_7436(t10,t7);}}

/* k7434 in find-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7436(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_7436,2,t0,t1);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7438,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word)li52),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_7438(t5,((C_word*)t0)[4],t1);}

/* loop in k7434 in find-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7438(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7438,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=t2;
t6=C_u_i_car(t5);
if(C_truep(C_i_pairp(t6))){
t7=C_i_caar(t2);
t8=C_eqp(((C_word*)t0)[2],t7);
if(C_truep(t8)){
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7466,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
t10=t2;
t11=C_u_i_car(t10);
t12=C_u_i_cdr(t11);
t13=t9;
f_7466(t13,C_i_memq(((C_word*)t0)[2],t12));}
else{
t10=t9;
f_7466(t10,C_SCHEME_FALSE);}}}
else{
t7=t2;
t8=C_u_i_cdr(t7);
/* modules.scm:435: loop */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}}}

/* k7464 in loop in k7434 in find-export in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7466(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_7466,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* modules.scm:434: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_7438(t4,((C_word*)t0)[2],t3);}}

/* ##sys#finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7503(C_word c,C_word *av){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_7503,3,av);}
a=C_alloc(24);
t3=t2;
t4=C_i_check_structure_2(t3,lf[4],lf[12]);
t5=C_i_block_ref(t3,C_fix(3));
t6=t5;
t7=t2;
t8=C_i_check_structure_2(t7,lf[4],lf[6]);
t9=C_i_block_ref(t7,C_fix(1));
t10=t9;
t11=t2;
t12=C_i_check_structure_2(t11,lf[4],lf[42]);
t13=C_i_block_ref(t11,C_fix(4));
t14=t13;
t15=t2;
t16=C_i_check_structure_2(t15,lf[4],lf[32]);
t17=C_i_block_ref(t15,C_fix(5));
t18=t17;
t19=C_SCHEME_FALSE;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t22=t21;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=((C_word*)t23)[1];
t25=t2;
t26=C_i_check_structure_2(t25,lf[4],lf[47]);
t27=C_i_block_ref(t25,C_fix(6));
t28=C_i_check_list_2(t27,lf[18]);
t29=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7541,a[2]=t18,a[3]=t20,a[4]=t1,a[5]=t2,a[6]=t10,a[7]=t6,a[8]=t14,tmp=(C_word)a,a+=9,tmp);
t30=C_SCHEME_UNDEFINED;
t31=(*a=C_VECTOR_TYPE|1,a[1]=t30,tmp=(C_word)a,a+=2,tmp);
t32=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8080,a[2]=t23,a[3]=t31,a[4]=t24,a[5]=((C_word)li70),tmp=(C_word)a,a+=6,tmp));
t33=((C_word*)t31)[1];
f_8080(t33,t29,t27);}

/* k7530 in map-loop1520 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7532,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_assq(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7541(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_7541,2,av);}
a=C_alloc(16);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7544,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[7]);
if(C_truep(t4)){
t5=((C_word*)t0)[5];
t6=C_i_check_structure_2(t5,lf[4],lf[14]);
t7=C_i_block_ref(t5,C_fix(12));
/* modules.scm:450: merge-se */
f_6507(t3,C_a_i_list(&a,2,t7,t2));}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8043,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:451: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t5;
tp(2,av2);}}}

/* k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_7544,2,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7547,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[8]);
t5=(C_truep(t4)?((C_word*)t0)[2]:((C_word*)t0)[8]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7913,a[2]=t2,a[3]=t7,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word)li68),tmp=(C_word)a,a+=8,tmp));
t9=((C_word*)t7)[1];
f_7913(t9,t3,t5);}

/* k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_7547,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7548,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li58),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7701,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[8],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* modules.scm:516: module-undefined-list */
t5=*((C_word*)lf[7]+1);{
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

/* g1575 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7548(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7548,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_cdr(t2);
t4=t3;
t5=t2;
t6=C_u_i_car(t5);
if(C_truep(C_i_memq(t6,((C_word*)t0)[2]))){
t7=C_SCHEME_UNDEFINED;
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7562,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:490: chicken.base#open-output-string */
t8=*((C_word*)lf[88]+1);{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k7560 in g1575 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7562,2,av);}
a=C_alloc(6);
t2=t1;
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7566,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:492: display */
t5=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[87];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k7564 in k7560 in g1575 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7566,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7569,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:493: display */
t3=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k7567 in k7564 in k7560 in g1575 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7569,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7572,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=*((C_word*)lf[82]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(39);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k7570 in k7567 in k7564 in k7560 in g1575 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_7572,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7575,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7664,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:496: display */
t4=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[86];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_7575(2,av2);}}}

/* k7573 in k7570 in k7567 in k7564 in k7560 in g1575 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7575(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_7575,2,av);}
a=C_alloc(9);
t2=C_i_getprop(((C_word*)t0)[2],lf[76],C_SCHEME_FALSE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7583,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=C_i_length(t3);
t6=C_eqp(C_fix(1),t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7599,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:504: display */
t8=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[81];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7612,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:508: display */
t8=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[84];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f11751,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:515: chicken.base#get-output-string */
t6=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k7581 in k7573 in k7570 in k7567 in k7564 in k7560 in g1575 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7583,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7590,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:515: chicken.base#get-output-string */
t3=*((C_word*)lf[77]+1);{
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

/* k7588 in k7581 in k7573 in k7570 in k7567 in k7564 in k7560 in g1575 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7590,2,av);}
/* modules.scm:515: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[38]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k7597 in k7573 in k7570 in k7567 in k7564 in k7560 in g1575 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7599,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7602,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7609,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:505: scheme#cadar */
t4=*((C_word*)lf[80]+1);{
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

/* k7600 in k7597 in k7573 in k7570 in k7567 in k7564 in k7560 in g1575 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7602,2,av);}
/* modules.scm:506: display */
t2=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[79];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k7607 in k7597 in k7573 in k7570 in k7567 in k7564 in k7560 in g1575 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7609,2,av);}
/* modules.scm:505: display */
t2=*((C_word*)lf[78]+1);{
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

/* k7610 in k7573 in k7570 in k7567 in k7564 in k7560 in g1575 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7612(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7612,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7613,a[2]=((C_word*)t0)[2],a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7632,a[2]=t4,a[3]=t2,a[4]=((C_word)li55),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_7632(t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* g1622 in k7610 in k7573 in k7570 in k7567 in k7564 in k7560 in g1575 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7613(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_7613,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7617,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:511: display */
t4=*((C_word*)lf[78]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[83];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k7615 in g1622 in k7610 in k7573 in k7570 in k7567 in k7564 in k7560 in g1575 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7617,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7620,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* modules.scm:512: display */
t4=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k7618 in k7615 in g1622 in k7610 in k7573 in k7570 in k7567 in k7564 in k7560 in g1575 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7620,2,av);}
/* write-char/port */
t2=*((C_word*)lf[82]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(41);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* for-each-loop1621 in k7610 in k7573 in k7570 in k7567 in k7564 in k7560 in g1575 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7632(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7632,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7642,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:509: g1622 */
t5=((C_word*)t0)[3];
f_7613(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7640 in for-each-loop1621 in k7610 in k7573 in k7570 in k7567 in k7564 in k7560 in g1575 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7642,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7632(t3,((C_word*)t0)[4],t2);}

/* k7662 in k7570 in k7567 in k7564 in k7560 in g1575 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7664(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7664,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7665,a[2]=((C_word*)t0)[2],a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7677,a[2]=t4,a[3]=t2,a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_7677(t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* g1591 in k7662 in k7570 in k7567 in k7564 in k7560 in g1575 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7665(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_7665,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7669,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:499: display */
t4=*((C_word*)lf[78]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[85];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k7667 in g1591 in k7662 in k7570 in k7567 in k7564 in k7560 in g1575 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7669,2,av);}
/* modules.scm:500: display */
t2=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* for-each-loop1590 in k7662 in k7570 in k7567 in k7564 in k7560 in g1575 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7677(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7677,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7687,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:497: g1591 */
t5=((C_word*)t0)[3];
f_7665(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7685 in for-each-loop1590 in k7662 in k7570 in k7567 in k7564 in k7560 in g1575 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7687,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7677(t3,((C_word*)t0)[4],t2);}

/* k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7701(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_7701,2,av);}
a=C_alloc(16);
t2=C_i_check_list_2(t1,lf[33]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7707,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7886,a[2]=t5,a[3]=((C_word*)t0)[9],a[4]=((C_word)li67),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_7886(t7,t3,t1);}

/* k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_7707,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7710,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
/* modules.scm:518: ##sys#error */
t3=*((C_word*)lf[69]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[97];
av2[3]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_7710(2,av2);}}}

/* k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_7710,2,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7745,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t4,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
t7=((C_word*)t0)[4];
t8=C_i_check_structure_2(t7,lf[4],lf[12]);
t9=C_i_block_ref(t7,C_fix(3));
t10=C_i_check_structure_2(t7,lf[4],lf[6]);
t11=C_i_block_ref(t7,C_fix(1));
t12=t11;
t13=C_i_check_structure_2(t7,lf[4],lf[42]);
t14=C_i_block_ref(t7,C_fix(4));
t15=t14;
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6303,a[2]=t12,a[3]=((C_word)li62),tmp=(C_word)a,a+=4,tmp);
t17=C_eqp(C_SCHEME_TRUE,t9);
if(C_truep(t17)){
t18=t6;{
C_word *av2=av;
av2[0]=t18;
av2[1]=C_SCHEME_END_OF_LIST;
f_7745(2,av2);}}
else{
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6326,a[2]=t19,a[3]=t16,a[4]=t15,a[5]=t12,a[6]=((C_word)li66),tmp=(C_word)a,a+=7,tmp));
t21=((C_word*)t19)[1];
f_6326(t21,t6,t9);}}

/* k7736 in map-loop1655 in k7743 in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7738,2,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_u_i_car(((C_word*)t0)[4]);
/* modules.scm:523: ##sys#error */
t4=*((C_word*)lf[69]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[89];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k7743 in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7745(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_7745,2,av);}
a=C_alloc(15);
t2=C_i_check_list_2(t1,lf[18]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7751,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7849,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=((C_word*)t0)[8],a[5]=((C_word)li61),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_7849(t7,t3,t1);}

/* k7749 in k7743 in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_7751,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7754,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7843,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:526: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t4;
tp(2,av2);}}

/* k7752 in k7749 in k7743 in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_7754,2,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7755,a[2]=t2,a[3]=((C_word)li59),tmp=(C_word)a,a+=4,tmp);
t4=C_i_check_list_2(((C_word*)t0)[2],lf[33]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7777,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7818,a[2]=t7,a[3]=t3,a[4]=((C_word)li60),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_7818(t9,t5,((C_word*)t0)[2]);}

/* g1691 in k7752 in k7749 in k7743 in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7755(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_7755,3,t0,t1,t2);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7759,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(t2);
/* modules.scm:531: merge-se */
f_6507(t3,C_a_i_list(&a,2,t4,((C_word*)t0)[2]));}

/* k7757 in g1691 in k7752 in k7749 in k7743 in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7759(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7759,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_set_car(t3,t1);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7775 in k7752 in k7749 in k7743 in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_7777,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7783,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[3];
t4=C_i_check_structure_2(t3,lf[4],C_SCHEME_FALSE);
/* modules.scm:93: ##sys#block-set! */
t5=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_fix(11);
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k7781 in k7775 in k7752 in k7749 in k7743 in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_7783,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7786,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[3];
t4=C_i_check_structure_2(t3,lf[4],C_SCHEME_FALSE);
/* modules.scm:93: ##sys#block-set! */
t5=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_fix(12);
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k7784 in k7781 in k7775 in k7752 in k7749 in k7743 in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7786(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_7786,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7789,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7812,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_i_check_structure_2(t4,lf[4],lf[59]);
t6=C_i_block_ref(t4,C_fix(13));
/* modules.scm:546: merge-se */
f_6507(t3,C_a_i_list(&a,2,t6,((C_word*)t0)[6]));}

/* k7787 in k7784 in k7781 in k7775 in k7752 in k7749 in k7743 in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7789,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7800,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7808,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:549: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t3;
tp(2,av2);}}

/* k7798 in k7787 in k7784 in k7781 in k7775 in k7752 in k7749 in k7743 in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7800,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7804,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:550: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t3;
tp(2,av2);}}

/* k7802 in k7798 in k7787 in k7784 in k7781 in k7775 in k7752 in k7749 in k7743 in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 in ... */
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_7804,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=C_i_check_structure_2(t4,lf[4],C_SCHEME_FALSE);
/* modules.scm:93: ##sys#block-set! */
t6=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=C_fix(14);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7806 in k7787 in k7784 in k7781 in k7775 in k7752 in k7749 in k7743 in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7808,2,av);}
a=C_alloc(9);
/* modules.scm:549: merge-se */
f_6507(((C_word*)t0)[2],C_a_i_list(&a,3,t1,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k7810 in k7784 in k7781 in k7775 in k7752 in k7749 in k7743 in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7812(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7812,2,av);}
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[4],C_SCHEME_FALSE);
/* modules.scm:93: ##sys#block-set! */
t4=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=C_fix(13);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* for-each-loop1690 in k7752 in k7749 in k7743 in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7818(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7818,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7828,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:529: g1691 */
t5=((C_word*)t0)[3];
f_7755(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7826 in for-each-loop1690 in k7752 in k7749 in k7743 in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7828,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7818(t3,((C_word*)t0)[4],t2);}

/* k7841 in k7749 in k7743 in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7843,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7847,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:527: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t3;
tp(2,av2);}}

/* k7845 in k7841 in k7749 in k7743 in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_7847,2,av);}
a=C_alloc(18);
/* modules.scm:525: merge-se */
f_6507(((C_word*)t0)[2],C_a_i_list(&a,6,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]));}

/* map-loop1655 in k7743 in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7849(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_7849,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7874,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=C_i_cdr(t6);
if(C_truep(C_i_symbolp(t7))){
t8=t5;{
C_word av2[2];
av2[0]=t8;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_u_i_car(t6);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7738,a[2]=t8,a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:522: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t9;
tp(2,av2);}}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7872 in map-loop1655 in k7743 in k7708 in k7705 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7874(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7874,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7849(t6,((C_word*)t0)[5],t5);}

/* for-each-loop1574 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7886(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7886,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7896,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:485: g1575 */
t5=((C_word*)t0)[3];
f_7548(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7894 in for-each-loop1574 in k7699 in k7545 in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7896,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7886(t3,((C_word*)t0)[4],t2);}

/* loop in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7913(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,0,2)))){
C_save_and_reclaim_args((void *)trf_7913,3,t0,t1,t2);}
a=C_alloc(17);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_i_symbolp(t3);
t5=(C_truep(t4)?t3:C_i_car(t3));
t6=t5;
if(C_truep(C_i_assq(t6,((C_word*)t0)[2]))){
t7=t2;
t8=C_u_i_cdr(t7);
/* modules.scm:463: loop */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7944,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t8=C_i_assq(t6,((C_word*)t0)[4]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7957,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7960,a[2]=t9,a[3]=t7,a[4]=t6,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t10,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t9)){
t12=C_i_cdr(t9);
t13=t11;
f_7960(t13,C_i_symbolp(t12));}
else{
t12=t11;
f_7960(t12,C_SCHEME_FALSE);}}}}

/* k7942 in loop in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7944(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_7944,2,t0,t1);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7948,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* modules.scm:484: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7913(t6,t3,t5);}

/* k7946 in k7942 in loop in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
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

/* k7955 in loop in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7957,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_7944(t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k7958 in loop in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7960(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_7960,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_7944(t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8010,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:470: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t2;
tp(2,av2);}}}

/* k7970 in k8008 in k7958 in loop in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_7972(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_7972,2,t0,t1);}
a=C_alloc(11);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_7944(t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}
else{
if(C_truep(C_i_not(((C_word*)t0)[5]))){
t2=C_set_block_item(((C_word*)t0)[6],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7988,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7992,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7996,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:479: scheme#symbol->string */
t6=*((C_word*)lf[93]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
/* modules.scm:483: module-rename */
f_9679(((C_word*)t0)[8],((C_word*)t0)[4],((C_word*)t0)[7]);}}}

/* k7986 in k7970 in k8008 in k7958 in loop in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7988,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_7944(t2,C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_FALSE));}

/* k7990 in k7970 in k8008 in k7958 in loop in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7992,2,av);}
/* modules.scm:476: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[38]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k7994 in k7970 in k8008 in k7958 in loop in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_7996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7996,2,av);}
/* modules.scm:477: scheme#string-append */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[98];
av2[3]=t1;
av2[4]=lf[99];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8008 in k7958 in loop in k7542 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8010(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8010,2,av);}
a=C_alloc(9);
t2=C_i_assq(((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7972,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t5=C_i_cdr(t3);
t6=t4;
f_7972(t6,C_i_symbolp(t5));}
else{
t5=t4;
f_7972(t5,C_SCHEME_FALSE);}}

/* k8041 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_8043,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8045,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_8045(t5,((C_word*)t0)[3],t1);}

/* loop in k8041 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_8045(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_8045,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8058,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_caar(t2);
/* modules.scm:453: find-export */
f_7425(t3,t4,((C_word*)t0)[3],C_SCHEME_FALSE);}}

/* k8056 in loop in k8041 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8058(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8058,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8067,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* modules.scm:454: loop */
t7=((C_word*)((C_word*)t0)[4])[1];
f_8045(t7,t4,t6);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* modules.scm:455: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_8045(t4,((C_word*)t0)[3],t3);}}

/* k8065 in k8056 in loop in k8041 in k7539 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8067,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop1520 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_8080(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_8080,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8105,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=C_i_car(t4);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7532,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:446: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t8;
tp(2,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8103 in map-loop1520 in finalize-module in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8105(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8105,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8080(t6,((C_word*)t0)[5],t5);}

/* ##sys#import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8115(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_8115,3,av);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8119,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8247,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8251,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:559: scheme#symbol->string */
t6=*((C_word*)lf[93]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8119(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_8119,2,av);}
a=C_alloc(9);
t2=t1;
if(C_truep(t2)){
t3=*((C_word*)lf[2]+1);
t4=*((C_word*)lf[29]+1);
t5=*((C_word*)lf[101]+1);
t6=*((C_word*)lf[28]+1);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8125,a[2]=t6,a[3]=t5,a[4]=t4,a[5]=t3,a[6]=((C_word*)t0)[2],a[7]=t2,a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:564: ##sys#current-meta-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[101]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[101]+1);
av2[1]=t7;
tp(2,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_8125,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8128,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:566: ##sys#meta-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[104]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[104]+1);
av2[1]=t3;
tp(2,av2);}}

/* k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(38,c,4)))){
C_save_and_reclaim((void *)f_8128,2,av);}
a=C_alloc(38);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t0)[2];
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=t1;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_TRUE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8133,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=t11,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word)li72),tmp=(C_word)a,a+=12,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8189,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word)li76),tmp=(C_word)a,a+=5,tmp);
t14=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8214,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word)li77),tmp=(C_word)a,a+=11,tmp);
/* modules.scm:561: ##sys#dynamic-wind */
t15=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t15;
av2[1]=((C_word*)t0)[9];
av2[2]=t12;
av2[3]=t13;
av2[4]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(5,av2);}}

/* a8132 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_8133,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8137,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* modules.scm:561: current-module17241725 */
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
f_8137(2,av2);}}}

/* k8135 in a8132 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_8137,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8140,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* modules.scm:561: current-environment17261727 */
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
f_8140(2,av2);}}}

/* k8138 in k8135 in a8132 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_8140,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8143,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* modules.scm:561: current-meta-environment17281729 */
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
f_8143(2,av2);}}}

/* k8141 in k8138 in k8135 in a8132 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_8143,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_8146,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* modules.scm:561: macro-environment17301731 */
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
f_8146(2,av2);}}}

/* k8144 in k8141 in k8138 in k8135 in a8132 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_8146,2,av);}
a=C_alloc(16);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_8150,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* modules.scm:561: current-module17241725 */
t4=((C_word*)t0)[13];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k8148 in k8144 in k8141 in k8138 in k8135 in a8132 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_8150,2,av);}
a=C_alloc(15);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_8154,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],tmp=(C_word)a,a+=15,tmp);
/* modules.scm:561: current-environment17261727 */
t4=((C_word*)t0)[12];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k8152 in k8148 in k8144 in k8141 in k8138 in k8135 in a8132 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_8154,2,av);}
a=C_alloc(14);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8158,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:561: current-meta-environment17281729 */
t4=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k8156 in k8152 in k8148 in k8144 in k8141 in k8138 in k8135 in a8132 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_8158,2,av);}
a=C_alloc(13);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8162,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:561: macro-environment17301731 */
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k8160 in k8156 in k8152 in k8148 in k8144 in k8141 in k8138 in k8135 in a8132 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8162(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_8162,2,av);}
a=C_alloc(10);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8165,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:561: current-module17241725 */
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

/* k8163 in k8160 in k8156 in k8152 in k8148 in k8144 in k8141 in k8138 in k8135 in a8132 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_8165,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8168,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:561: current-environment17261727 */
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

/* k8166 in k8163 in k8160 in k8156 in k8152 in k8148 in k8144 in k8141 in k8138 in k8135 in a8132 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8168,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8171,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:561: current-meta-environment17281729 */
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

/* k8169 in k8166 in k8163 in k8160 in k8156 in k8152 in k8148 in k8144 in k8141 in k8138 in k8135 in a8132 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 in ... */
static void C_ccall f_8171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_8171,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8174,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:561: macro-environment17301731 */
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

/* k8172 in k8169 in k8166 in k8163 in k8160 in k8156 in k8152 in k8148 in k8144 in k8141 in k8138 in k8135 in a8132 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in ... */
static void C_ccall f_8174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8174,2,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a8188 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_8189,2,av);}
a=C_alloc(19);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8195,a[2]=t5,a[3]=t3,a[4]=((C_word)li73),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8200,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li74),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8209,a[2]=t3,a[3]=t5,a[4]=((C_word)li75),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:567: ##sys#dynamic-wind */
t9=*((C_word*)lf[17]+1);{
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

/* a8194 in a8188 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8195,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[102]+1));
t3=C_mutate((C_word*)lf[102]+1 /* (set! ##sys#notices-enabled ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a8199 in a8188 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8200,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8204,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:568: scheme#load */
t3=*((C_word*)lf[103]+1);{
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

/* k8202 in a8199 in a8188 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8204,2,av);}
/* modules.scm:569: ##sys#find-module */
t2=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[70];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a8208 in a8188 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8209,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[102]+1));
t3=C_mutate((C_word*)lf[102]+1 /* (set! ##sys#notices-enabled ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a8213 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_8214,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8218,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* modules.scm:561: current-module17241725 */
t3=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k8216 in a8213 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8218(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_8218,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8221,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* modules.scm:561: current-environment17261727 */
t4=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k8219 in k8216 in a8213 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_8221,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8224,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:561: current-meta-environment17281729 */
t4=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k8222 in k8219 in k8216 in a8213 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_8224,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8227,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:561: macro-environment17301731 */
t4=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k8225 in k8222 in k8219 in k8216 in a8213 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_8227,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8230,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:561: current-module17241725 */
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

/* k8228 in k8225 in k8222 in k8219 in k8216 in a8213 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_8230,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8233,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:561: current-environment17261727 */
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

/* k8231 in k8228 in k8225 in k8222 in k8219 in k8216 in a8213 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_8233,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8236,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* modules.scm:561: current-meta-environment17281729 */
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

/* k8234 in k8231 in k8228 in k8225 in k8222 in k8219 in k8216 in a8213 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_8236,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8239,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* modules.scm:561: macro-environment17301731 */
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

/* k8237 in k8234 in k8231 in k8228 in k8225 in k8222 in k8219 in k8216 in a8213 in k8126 in k8123 in k8117 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8239(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8239,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[5]);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[7]);
t5=C_mutate(((C_word *)((C_word*)t0)[8])+1,((C_word*)t0)[9]);
t6=((C_word*)t0)[10];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k8245 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8247,2,av);}
/* modules.scm:558: chicken.load#find-dynamic-extension */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[105]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[105]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
tp(4,av2);}}

/* k8249 in import-library-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8251(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8251,2,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[106]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[107];
tp(4,av2);}}

/* find-module/import-library in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_8254(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_8254,3,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8258,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:572: ##sys#resolve-module-name */
t5=*((C_word*)lf[20]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k8256 in find-module/import-library in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_8258,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8261,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:573: ##sys#find-module */
t4=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k8259 in k8256 in find-module/import-library in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8261,2,av);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* modules.scm:574: ##sys#import-library-hook */
t2=*((C_word*)lf[100]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* ##sys#decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8269(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_8269,6,av);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8273,a[2]=t5,a[3]=t4,a[4]=t2,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:577: r */
t7=t3;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[132];
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}

/* k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_8273,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8276,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:578: r */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[131];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8276,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8279,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:579: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[130];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8279,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8282,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:580: r */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[129];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,5)))){
C_save_and_reclaim((void *)f_8282,2,av);}
a=C_alloc(23);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8284,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8298,a[2]=((C_word*)t0)[2],a[3]=((C_word)li81),tmp=(C_word)a,a+=4,tmp));
t9=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8345,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t6,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word)li113),tmp=(C_word)a,a+=12,tmp);
/* modules.scm:589: scheme#call-with-current-continuation */
t10=*((C_word*)lf[128]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=((C_word*)t0)[8];
av2[2]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* warn in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_8284(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_8284,4,t1,t2,t3,t4);}
a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8292,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8296,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:582: scheme#symbol->string */
t7=*((C_word*)lf[93]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k8290 in warn in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8292(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8292,2,av);}
/* modules.scm:582: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[38]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k8294 in warn in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8296,2,av);}
/* modules.scm:582: scheme#string-append */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[110];
av2[4]=t1;
av2[5]=lf[111];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* tostr in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_8298(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8298,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_stringp(t2))){
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8311,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:585: chicken.keyword#keyword? */
t4=*((C_word*)lf[117]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k8309 in tostr in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8311,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8318,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:585: ##sys#symbol->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[113]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[113]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
/* modules.scm:586: ##sys#symbol->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[113]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[113]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
if(C_truep(C_i_numberp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[3];
/* ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[114]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[114]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=C_fix(10);
tp(4,av2);}}
else{
/* modules.scm:588: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[115]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[115]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[116];
tp(4,av2);}}}}}

/* k8316 in k8309 in tostr in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8318(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8318,2,av);}
/* modules.scm:585: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[106]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[112];
tp(4,av2);}}

/* a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8345(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_8345,3,av);}
a=C_alloc(20);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8348,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li82),tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8396,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word)li112),tmp=(C_word)a,a+=13,tmp));
t7=((C_word*)t5)[1];
f_8396(t7,t1,((C_word*)t0)[10]);}

/* module-imports in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_8348(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8348,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8352,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:592: chicken.internal#library-id */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[23]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[23]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k8350 in module-imports in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_8352,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8355,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:593: find-module/import-library */
f_8254(t3,t2,((C_word*)t0)[4]);}

/* k8353 in k8350 in module-imports in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_8355,2,av);}
if(C_truep(C_i_not(t1))){
/* modules.scm:595: k */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[4];
av2[4]=C_SCHEME_FALSE;
av2[5]=C_SCHEME_FALSE;
av2[6]=C_SCHEME_FALSE;
av2[7]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t2))(8,av2);}}
else{
t2=C_i_check_structure_2(t1,lf[4],lf[6]);
t3=C_i_block_ref(t1,C_fix(1));
t4=C_i_check_structure_2(t1,lf[4],lf[58]);
t5=C_i_block_ref(t1,C_fix(2));
t6=C_i_check_structure_2(t1,lf[4],lf[6]);
t7=C_i_block_ref(t1,C_fix(1));
t8=C_i_check_structure_2(t1,lf[4],lf[13]);
t9=C_i_block_ref(t1,C_fix(11));
t10=C_i_check_structure_2(t1,lf[4],lf[14]);
t11=C_i_block_ref(t1,C_fix(12));
t12=C_i_check_structure_2(t1,lf[4],lf[59]);
t13=C_i_block_ref(t1,C_fix(13));
/* modules.scm:596: scheme#values */{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
av2[3]=t5;
av2[4]=t7;
av2[5]=t9;
av2[6]=t11;
av2[7]=t13;
C_values(8,av2);}}}

/* loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_8396(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_8396,3,t0,t1,t2);}
a=C_alloc(14);
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8410,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:604: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[62]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=C_i_pairp(t2);
if(C_truep(C_i_not(t3))){
/* modules.scm:606: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[115]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[115]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[118];
av2[4]=t2;
tp(5,av2);}}
else{
t4=C_i_car(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8428,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t5,a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[2],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:609: c */
t7=((C_word*)t0)[7];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[11];
av2[3]=t5;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}}}

/* k8408 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8410,2,av);}
/* modules.scm:604: module-imports */
t2=((C_word*)t0)[2];
f_8348(t2,((C_word*)t0)[3],t1);}

/* k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8428(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_8428,2,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8431,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:610: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[120]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[120]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[121];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8578,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:628: c */
t3=((C_word*)t0)[10];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[13];
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k8429 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8431(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,8)))){
C_save_and_reclaim((void *)f_8431,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8436,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li83),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8446,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word)li89),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:611: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a8435 in k8429 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8436,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
/* modules.scm:611: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8396(t3,t1,t2);}

/* a8445 in k8429 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8446(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_8446,8,av);}
a=C_alloc(11);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8450,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t5,a[6]=t6,a[7]=t7,a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[3],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
t9=C_i_cddr(((C_word*)t0)[4]);
/* modules.scm:612: chicken.syntax#strip-syntax */
t10=*((C_word*)lf[62]+1);{
C_word *av2=av;
av2[0]=t10;
av2[1]=t8;
av2[2]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k8448 in a8445 in k8429 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8450(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,6)))){
C_save_and_reclaim((void *)f_8450,2,av);}
a=C_alloc(15);
t2=t1;
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];
t5=((C_word*)t0)[4];
t6=((C_word*)t0)[5];
t7=((C_word*)t0)[6];
t8=((C_word*)t0)[7];
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8455,a[2]=((C_word*)t0)[8],a[3]=t5,a[4]=t2,a[5]=((C_word*)t0)[9],a[6]=t3,a[7]=t4,a[8]=t8,a[9]=t6,a[10]=t10,a[11]=t7,a[12]=((C_word)li88),tmp=(C_word)a,a+=13,tmp));
t12=((C_word*)t10)[1];
f_8455(t12,((C_word*)t0)[10],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* loop in k8448 in a8445 in k8429 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_8455(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(23,0,5)))){
C_save_and_reclaim_args((void *)trf_8455,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(23);
if(C_truep(C_i_nullp(t2))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8463,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li84),tmp=(C_word)a,a+=5,tmp);
t7=t5;
t8=C_i_check_list_2(t7,lf[33]);
t9=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8473,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=t4,a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8486,a[2]=t11,a[3]=t6,a[4]=((C_word)li85),tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_8486(t13,t9,t7);}
else{
t6=C_i_car(t2);
t7=C_i_assq(t6,((C_word*)t0)[9]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8514,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[10],a[5]=t4,a[6]=t5,a[7]=((C_word)li86),tmp=(C_word)a,a+=8,tmp);
/* modules.scm:614: g1899 */
t9=t8;
f_8514(t9,t1,t7);}
else{
t8=t2;
t9=C_u_i_car(t8);
t10=C_i_assq(t9,((C_word*)t0)[11]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8536,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[10],a[5]=t3,a[6]=t5,a[7]=((C_word)li87),tmp=(C_word)a,a+=8,tmp);
/* modules.scm:614: g1903 */
t12=t11;
f_8536(t12,t1,t10);}
else{
t11=t2;
t12=C_u_i_cdr(t11);
t13=t2;
t14=C_u_i_car(t13);
t15=C_a_i_cons(&a,2,t14,t5);
/* modules.scm:627: loop */
t17=t1;
t18=t12;
t19=t3;
t20=t4;
t21=t15;
t1=t17;
t2=t18;
t3=t19;
t4=t20;
t5=t21;
goto loop;}}}}

/* g1879 in loop in k8448 in a8445 in k8429 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_8463(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_8463,3,t0,t1,t2);}
/* modules.scm:617: warn */
f_8284(t1,lf[119],((C_word*)t0)[3],t2);}

/* k8471 in loop in k8448 in a8445 in k8429 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,7)))){
C_save_and_reclaim((void *)f_8473,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
/* modules.scm:619: scheme#values */{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
av2[4]=t3;
av2[5]=((C_word*)t0)[8];
av2[6]=((C_word*)t0)[9];
av2[7]=((C_word*)t0)[10];
C_values(8,av2);}}

/* for-each-loop1878 in loop in k8448 in a8445 in k8429 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_8486(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8486,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8496,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:615: g1879 */
t5=((C_word*)t0)[3];
f_8463(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8494 in for-each-loop1878 in loop in k8448 in a8445 in k8429 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8496,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8486(t3,((C_word*)t0)[4],t2);}

/* g1899 in loop in k8448 in a8445 in k8429 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_8514(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,5)))){
C_save_and_reclaim_args((void *)trf_8514,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
/* modules.scm:622: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_8455(t5,t1,t3,t4,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* g1903 in loop in k8448 in a8445 in k8429 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_8536(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,5)))){
C_save_and_reclaim_args((void *)trf_8536,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
/* modules.scm:625: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_8455(t5,t1,t3,((C_word*)t0)[5],t4,((C_word*)t0)[6]);}

/* k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_8578,2,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8581,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:629: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[120]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[120]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[123];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8761,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* modules.scm:651: c */
t3=((C_word*)t0)[10];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[12];
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k8579 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,8)))){
C_save_and_reclaim((void *)f_8581,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8586,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li90),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8596,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word)li97),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:630: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a8585 in k8579 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8586(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8586,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
/* modules.scm:630: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8396(t3,t1,t2);}

/* a8595 in k8579 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8596(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_8596,8,av);}
a=C_alloc(11);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8600,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t5,a[6]=t6,a[7]=t7,a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[3],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
t9=C_i_cddr(((C_word*)t0)[4]);
/* modules.scm:631: chicken.syntax#strip-syntax */
t10=*((C_word*)lf[62]+1);{
C_word *av2=av;
av2[0]=t10;
av2[1]=t8;
av2[2]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k8598 in a8595 in k8579 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,5)))){
C_save_and_reclaim((void *)f_8600,2,av);}
a=C_alloc(14);
t2=t1;
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];
t5=((C_word*)t0)[4];
t6=((C_word*)t0)[5];
t7=((C_word*)t0)[6];
t8=((C_word*)t0)[7];
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8605,a[2]=((C_word*)t0)[8],a[3]=t3,a[4]=t5,a[5]=t2,a[6]=((C_word*)t0)[9],a[7]=t4,a[8]=t8,a[9]=t7,a[10]=t10,a[11]=((C_word)li96),tmp=(C_word)a,a+=12,tmp));
t12=((C_word*)t10)[1];
f_8605(t12,((C_word*)t0)[10],t6,C_SCHEME_END_OF_LIST,t2);}

/* loop in k8598 in a8595 in k8579 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_8605(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,0,5)))){
C_save_and_reclaim_args((void *)trf_8605,5,t0,t1,t2,t3,t4);}
a=C_alloc(14);
if(C_truep(C_i_nullp(t2))){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8617,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word*)t0)[8],a[10]=t6,a[11]=((C_word)li94),tmp=(C_word)a,a+=12,tmp));
t8=((C_word*)t6)[1];
f_8617(t8,t1,((C_word*)t0)[9],C_SCHEME_END_OF_LIST,t4);}
else{
t5=C_i_caar(t2);
t6=C_i_memq(t5,t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8717,a[2]=t2,a[3]=((C_word*)t0)[10],a[4]=t3,a[5]=t4,a[6]=((C_word)li95),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:633: g1982 */
t8=t7;
f_8717(t8,t1,t6);}
else{
t7=t2;
t8=C_u_i_cdr(t7);
t9=t2;
t10=C_u_i_car(t9);
t11=C_a_i_cons(&a,2,t10,t3);
/* modules.scm:650: loop */
t13=t1;
t14=t8;
t15=t11;
t16=t4;
t1=t13;
t2=t14;
t3=t15;
t4=t16;
goto loop;}}}

/* loop in loop in k8598 in a8595 in k8579 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_8617(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,0,4)))){
C_save_and_reclaim_args((void *)trf_8617,5,t0,t1,t2,t3,t4);}
a=C_alloc(23);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8625,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li91),tmp=(C_word)a,a+=5,tmp);
t6=t4;
t7=C_i_check_list_2(t6,lf[33]);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8635,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8648,a[2]=t10,a[3]=t5,a[4]=((C_word)li92),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_8648(t12,t8,t6);}
else{
t5=C_i_caar(t2);
t6=C_i_memq(t5,t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8676,a[2]=t2,a[3]=((C_word*)t0)[10],a[4]=t3,a[5]=t4,a[6]=((C_word)li93),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:635: g1977 */
t8=t7;
f_8676(t8,t1,t6);}
else{
t7=t2;
t8=C_u_i_cdr(t7);
t9=t2;
t10=C_u_i_car(t9);
t11=C_a_i_cons(&a,2,t10,t3);
/* modules.scm:645: loop */
t13=t1;
t14=t8;
t15=t11;
t16=t4;
t1=t13;
t2=t14;
t3=t15;
t4=t16;
goto loop;}}}

/* g1957 in loop in loop in k8598 in a8595 in k8579 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_8625(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_8625,3,t0,t1,t2);}
/* modules.scm:638: warn */
f_8284(t1,lf[122],((C_word*)t0)[3],t2);}

/* k8633 in loop in loop in k8598 in a8595 in k8579 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,7)))){
C_save_and_reclaim((void *)f_8635,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
/* modules.scm:640: scheme#values */{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
av2[4]=t3;
av2[5]=((C_word*)t0)[8];
av2[6]=((C_word*)t0)[9];
av2[7]=((C_word*)t0)[10];
C_values(8,av2);}}

/* for-each-loop1956 in loop in loop in k8598 in a8595 in k8579 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_8648(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8648,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8658,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:636: g1957 */
t5=((C_word*)t0)[3];
f_8625(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8656 in for-each-loop1956 in loop in loop in k8598 in a8595 in k8579 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 in ... */
static void C_ccall f_8658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8658,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8648(t3,((C_word*)t0)[4],t2);}

/* g1977 in loop in loop in k8598 in a8595 in k8579 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_8676(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_8676,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8688,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t6=C_i_car(t2);
/* modules.scm:643: delete */
f_4457(t5,t6,((C_word*)t0)[5],*((C_word*)lf[43]+1));}

/* k8686 in g1977 in loop in loop in k8598 in a8595 in k8579 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 in ... */
static void C_ccall f_8688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8688,2,av);}
/* modules.scm:643: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_8617(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* g1982 in loop in k8598 in a8595 in k8579 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_8717(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_8717,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8729,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t6=C_i_car(t2);
/* modules.scm:648: delete */
f_4457(t5,t6,((C_word*)t0)[5],*((C_word*)lf[43]+1));}

/* k8727 in g1982 in loop in k8598 in a8595 in k8579 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8729,2,av);}
/* modules.scm:648: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_8605(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_8761,2,av);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8764,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:652: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[120]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[120]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[125];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9011,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:678: c */
t3=((C_word*)t0)[10];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[11];
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k8762 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,8)))){
C_save_and_reclaim((void *)f_8764,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8769,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li98),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8779,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word)li106),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:653: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a8768 in k8762 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8769,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
/* modules.scm:653: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8396(t3,t1,t2);}

/* a8778 in k8762 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8779(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_8779,8,av);}
a=C_alloc(11);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8783,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t5,a[6]=t6,a[7]=t7,a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[3],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
t9=C_i_cddr(((C_word*)t0)[4]);
/* modules.scm:654: chicken.syntax#strip-syntax */
t10=*((C_word*)lf[62]+1);{
C_word *av2=av;
av2[0]=t10;
av2[1]=t8;
av2[2]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k8781 in a8778 in k8762 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_8783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,5)))){
C_save_and_reclaim((void *)f_8783,2,av);}
a=C_alloc(14);
t2=t1;
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];
t5=((C_word*)t0)[4];
t6=((C_word*)t0)[5];
t7=((C_word*)t0)[6];
t8=((C_word*)t0)[7];
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8788,a[2]=((C_word*)t0)[8],a[3]=t3,a[4]=t5,a[5]=t2,a[6]=((C_word*)t0)[9],a[7]=t4,a[8]=t8,a[9]=t7,a[10]=t10,a[11]=((C_word)li105),tmp=(C_word)a,a+=12,tmp));
t12=((C_word*)t10)[1];
f_8788(t12,((C_word*)t0)[10],t6,C_SCHEME_END_OF_LIST,t2);}

/* loop in k8781 in a8778 in k8762 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_8788(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,0,5)))){
C_save_and_reclaim_args((void *)trf_8788,5,t0,t1,t2,t3,t4);}
a=C_alloc(14);
if(C_truep(C_i_nullp(t2))){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8800,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word*)t0)[8],a[10]=t6,a[11]=((C_word)li103),tmp=(C_word)a,a+=12,tmp));
t8=((C_word*)t6)[1];
f_8800(t8,t1,((C_word*)t0)[9],C_SCHEME_END_OF_LIST,t4);}
else{
t5=C_i_caar(t2);
t6=C_i_assq(t5,t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8955,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[10],a[5]=t4,a[6]=((C_word)li104),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:656: g2087 */
t8=t7;
f_8955(t8,t1,t6);}
else{
t7=t2;
t8=C_u_i_cdr(t7);
t9=t2;
t10=C_u_i_car(t9);
t11=C_a_i_cons(&a,2,t10,t3);
/* modules.scm:677: loop */
t13=t1;
t14=t8;
t15=t11;
t16=t4;
t1=t13;
t2=t14;
t3=t15;
t4=t16;
goto loop;}}}

/* loop in loop in k8781 in a8778 in k8762 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_8800(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(30,0,4)))){
C_save_and_reclaim_args((void *)trf_8800,5,t0,t1,t2,t3,t4);}
a=C_alloc(30);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li99),tmp=(C_word)a,a+=5,tmp);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=t4;
t11=C_i_check_list_2(t10,lf[18]);
t12=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8821,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,a[10]=((C_word*)t0)[9],a[11]=t5,tmp=(C_word)a,a+=12,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8863,a[2]=t8,a[3]=t14,a[4]=t9,a[5]=((C_word)li101),tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_8863(t16,t12,t10);}
else{
t5=C_i_caar(t2);
t6=C_i_assq(t5,t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8902,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[10],a[5]=t4,a[6]=((C_word)li102),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:658: g2082 */
t8=t7;
f_8902(t8,t1,t6);}
else{
t7=t2;
t8=C_u_i_cdr(t7);
t9=t2;
t10=C_u_i_car(t9);
t11=C_a_i_cons(&a,2,t10,t3);
/* modules.scm:670: loop */
t17=t1;
t18=t8;
t19=t11;
t20=t4;
t1=t17;
t2=t18;
t3=t19;
t4=t20;
goto loop;}}}

/* g2036 in loop in loop in k8781 in a8778 in k8762 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 in ... */
static void C_fcall f_8808(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_8808,3,t0,t1,t2);}
/* modules.scm:661: warn */
f_8284(t1,lf[124],((C_word*)t0)[3],t2);}

/* k8819 in loop in loop in k8781 in a8778 in k8762 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 in ... */
static void C_ccall f_8821(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8821,2,av);}
a=C_alloc(18);
t2=C_i_check_list_2(t1,lf[33]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8827,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8840,a[2]=t5,a[3]=((C_word*)t0)[11],a[4]=((C_word)li100),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_8840(t7,t3,t1);}

/* k8825 in k8819 in loop in loop in k8781 in a8778 in k8762 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in ... */
static void C_ccall f_8827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,7)))){
C_save_and_reclaim((void *)f_8827,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
/* modules.scm:663: scheme#values */{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
av2[4]=t3;
av2[5]=((C_word*)t0)[8];
av2[6]=((C_word*)t0)[9];
av2[7]=((C_word*)t0)[10];
C_values(8,av2);}}

/* for-each-loop2035 in k8819 in loop in loop in k8781 in a8778 in k8762 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in ... */
static void C_fcall f_8840(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8840,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8850,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:659: g2036 */
t5=((C_word*)t0)[3];
f_8808(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8848 in for-each-loop2035 in k8819 in loop in loop in k8781 in a8778 in k8762 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in ... */
static void C_ccall f_8850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8850,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8840(t3,((C_word*)t0)[4],t2);}

/* map-loop2048 in loop in loop in k8781 in a8778 in k8762 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 in ... */
static void C_fcall f_8863(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8863,3,t0,t1,t2);}
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

/* g2082 in loop in loop in k8781 in a8778 in k8762 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 in ... */
static void C_fcall f_8902(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_8902,3,t0,t1,t2);}
a=C_alloc(12);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=t3;
t5=C_i_cadr(t2);
t6=C_i_cdar(((C_word*)t0)[2]);
t7=C_a_i_cons(&a,2,t5,t6);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[3]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8918,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t4,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:668: delete */
f_4457(t10,t2,((C_word*)t0)[5],*((C_word*)lf[43]+1));}

/* k8916 in g2082 in loop in loop in k8781 in a8778 in k8762 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in ... */
static void C_ccall f_8918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8918,2,av);}
/* modules.scm:666: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_8800(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* g2087 in loop in k8781 in a8778 in k8762 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_8955(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_8955,3,t0,t1,t2);}
a=C_alloc(12);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=t3;
t5=C_i_cadr(t2);
t6=C_i_cdar(((C_word*)t0)[2]);
t7=C_a_i_cons(&a,2,t5,t6);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[3]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8971,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t4,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:675: delete */
f_4457(t10,t2,((C_word*)t0)[5],*((C_word*)lf[43]+1));}

/* k8969 in g2087 in loop in k8781 in a8778 in k8762 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 in ... */
static void C_ccall f_8971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8971,2,av);}
/* modules.scm:673: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_8788(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k9009 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_9011,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9014,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:679: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[120]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[120]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[127];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9167,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:689: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[62]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k9012 in k9009 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,8)))){
C_save_and_reclaim((void *)f_9014,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9019,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li107),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9029,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word)li111),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:680: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a9018 in k9012 in k9009 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9019,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
/* modules.scm:680: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8396(t3,t1,t2);}

/* a9028 in k9012 in k9009 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9029(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_9029,8,av);}
a=C_alloc(11);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9033,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t5,a[6]=t6,a[7]=t7,a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[3],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
t9=C_i_caddr(((C_word*)t0)[4]);
/* modules.scm:681: chicken.syntax#strip-syntax */
t10=*((C_word*)lf[62]+1);{
C_word *av2=av;
av2[0]=t10;
av2[1]=t8;
av2[2]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k9031 in a9028 in k9012 in k9009 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(37,c,3)))){
C_save_and_reclaim((void *)f_9033,2,av);}
a=C_alloc(37);
t2=t1;
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];
t5=((C_word*)t0)[4];
t6=((C_word*)t0)[5];
t7=((C_word*)t0)[6];
t8=((C_word*)t0)[7];
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9035,a[2]=((C_word*)t0)[8],a[3]=t2,a[4]=((C_word)li108),tmp=(C_word)a,a+=5,tmp);
t10=C_a_i_list(&a,3,((C_word*)t0)[9],t5,t2);
t11=t10;
t12=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t13=t12;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=((C_word*)t14)[1];
t16=t9;
t17=C_i_check_list_2(t6,lf[18]);
t18=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9078,a[2]=t9,a[3]=t7,a[4]=((C_word*)t0)[10],a[5]=t3,a[6]=t4,a[7]=t11,a[8]=t8,tmp=(C_word)a,a+=9,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9124,a[2]=t14,a[3]=t20,a[4]=t16,a[5]=t15,a[6]=((C_word)li110),tmp=(C_word)a,a+=7,tmp));
t22=((C_word*)t20)[1];
f_9124(t22,t18,t6);}

/* rename in k9031 in a9028 in k9012 in k9009 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9035(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_9035,3,av);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9043,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9049,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9053,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:685: tostr */
t6=((C_word*)((C_word*)t0)[2])[1];
f_8298(t6,t5,((C_word*)t0)[3]);}

/* k9041 in rename in k9031 in a9028 in k9012 in k9009 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 in ... */
static void C_ccall f_9043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9043,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k9047 in rename in k9031 in a9028 in k9012 in k9009 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 in ... */
static void C_ccall f_9049(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9049,2,av);}
/* modules.scm:684: ##sys#string->symbol */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[126]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[126]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k9051 in rename in k9031 in a9028 in k9012 in k9009 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 in ... */
static void C_ccall f_9053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9053,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9057,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(((C_word*)t0)[3]);
/* modules.scm:685: ##sys#symbol->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[113]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[113]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k9055 in k9051 in rename in k9031 in a9028 in k9012 in k9009 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in ... */
static void C_ccall f_9057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9057,2,av);}
/* modules.scm:685: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[106]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k9076 in k9031 in a9028 in k9012 in k9009 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_9078,2,av);}
a=C_alloc(22);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(((C_word*)t0)[3],lf[18]);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9088,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t2,a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9090,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li109),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_9090(t13,t9,((C_word*)t0)[3]);}

/* k9086 in k9076 in k9031 in a9028 in k9012 in k9009 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 in ... */
static void C_ccall f_9088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_9088,2,av);}
/* modules.scm:687: scheme#values */{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[6];
av2[6]=t1;
av2[7]=((C_word*)t0)[7];
C_values(8,av2);}}

/* map-loop2153 in k9076 in k9031 in a9028 in k9012 in k9009 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 in ... */
static void C_fcall f_9090(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9090,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9115,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:687: g2159 */
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

/* k9113 in map-loop2153 in k9076 in k9031 in a9028 in k9012 in k9009 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in ... */
static void C_ccall f_9115(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9115,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9090(t6,((C_word*)t0)[5],t5);}

/* map-loop2127 in k9031 in a9028 in k9012 in k9009 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_9124(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9124,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9149,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:687: g2133 */
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

/* k9147 in map-loop2127 in k9031 in a9028 in k9012 in k9009 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 in ... */
static void C_ccall f_9149(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9149,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9124(t6,((C_word*)t0)[5],t5);}

/* k9165 in k9009 in k8759 in k8576 in k8426 in loop in a8344 in k8280 in k8277 in k8274 in k8271 in decompose-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9167,2,av);}
/* modules.scm:689: module-imports */
t2=((C_word*)t0)[2];
f_8348(t2,((C_word*)t0)[3],t1);}

/* ##sys#expand-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9173(C_word c,C_word *av){
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
if(c!=10) C_bad_argc_2(c,10,t0);
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_9173,10,av);}
a=C_alloc(11);
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9177,a[2]=t3,a[3]=t4,a[4]=t9,a[5]=t5,a[6]=t6,a[7]=t7,a[8]=t8,a[9]=t2,a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* modules.scm:692: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[120]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[120]+1);
av2[1]=t10;
av2[2]=t9;
av2[3]=t2;
av2[4]=lf[137];
tp(5,av2);}}

/* k9175 in expand-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_9177,2,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9178,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word)li117),tmp=(C_word)a,a+=10,tmp);
t3=C_i_cdr(((C_word*)t0)[9]);
t4=C_i_check_list_2(t3,lf[33]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9212,a[2]=((C_word*)t0)[10],tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9214,a[2]=t7,a[3]=t2,a[4]=((C_word)li118),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_9214(t9,t5,t3);}

/* g2195 in k9175 in expand-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_9178(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,8)))){
C_save_and_reclaim_args((void *)trf_9178,3,t0,t1,t2);}
a=C_alloc(16);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9184,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li115),tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9190,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word)li116),tmp=(C_word)a,a+=9,tmp);
/* modules.scm:695: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a9183 in g2195 in k9175 in expand-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9184(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9184,2,av);}
/* modules.scm:695: ##sys#decompose-import */
t2=*((C_word*)lf[109]+1);{
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
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* a9189 in g2195 in k9175 in expand-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9190(C_word c,C_word *av){
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
C_word *a;
if(c!=8) C_bad_argc_2(c,8,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,10)))){
C_save_and_reclaim((void *)f_9190,8,av);}
if(C_truep(C_i_not(t4))){
/* modules.scm:697: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[115]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[115]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[134];
av2[4]=t2;
av2[5]=((C_word*)t0)[3];
tp(6,av2);}}
else{
/* modules.scm:698: ##sys#import */
t8=*((C_word*)lf[135]+1);{
C_word *av2;
if(c >= 11) {
  av2=av;
} else {
  av2=C_alloc(11);
}
av2[0]=t8;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
av2[4]=t6;
av2[5]=t7;
av2[6]=((C_word*)t0)[4];
av2[7]=((C_word*)t0)[5];
av2[8]=((C_word*)t0)[6];
av2[9]=((C_word*)t0)[7];
av2[10]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t8+1)))(11,av2);}}}

/* k9210 in k9175 in expand-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9212(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9212,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[136];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop2194 in k9175 in expand-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_9214(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_9214,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9224,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:693: g2195 */
t5=((C_word*)t0)[3];
f_9178(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9222 in for-each-loop2194 in k9175 in expand-import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9224,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_9214(t3,((C_word*)t0)[4],t2);}

/* ##sys#import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9237(C_word c,C_word *av){
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
if(c!=11) C_bad_argc_2(c,11,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_9237,11,av);}
a=C_alloc(12);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9241,a[2]=t6,a[3]=t3,a[4]=t7,a[5]=t4,a[6]=t1,a[7]=t9,a[8]=t5,a[9]=t10,a[10]=t8,a[11]=t2,tmp=(C_word)a,a+=12,tmp);
/* modules.scm:703: ##sys#current-module */
t12=*((C_word*)lf[2]+1);{
C_word *av2=av;
av2[0]=t12;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}

/* k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9241(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_9241,2,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9244,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t2)){
if(C_truep(((C_word*)t0)[10])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9654,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_check_structure_2(t2,lf[4],lf[55]);
t6=C_i_block_ref(t2,C_fix(9));
t7=C_a_i_list1(&a,1,((C_word*)t0)[11]);
/* modules.scm:708: scheme#append */
t8=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t4;
av2[2]=t6;
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9669,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_check_structure_2(t2,lf[4],lf[54]);
t6=C_i_block_ref(t2,C_fix(8));
t7=C_a_i_list1(&a,1,((C_word*)t0)[11]);
/* modules.scm:711: scheme#append */
t8=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t4;
av2[2]=t6;
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_9244(2,av2);}}}

/* k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_9244,2,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9254,a[2]=((C_word*)t0)[2],a[3]=((C_word)li120),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_i_check_list_2(t3,lf[33]);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9298,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9623,a[2]=t7,a[3]=t2,a[4]=((C_word)li127),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_9623(t9,t5,t3);}

/* g2256 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_9254(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_9254,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_car(t2);
t4=t3;
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9292,a[2]=t4,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:718: import-env */
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)C_fast_retrieve_proc(t6))(2,av2);}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k9290 in g2256 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9292(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9292,2,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
if(C_truep(t4)){
t5=C_i_cdr(t2);
t6=C_eqp(t4,t5);
if(C_truep(C_i_not(t6))){
/* modules.scm:721: ##sys#notice */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[138]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[138]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[139];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}
else{
t7=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_9298,2,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9299,a[2]=((C_word*)t0)[2],a[3]=((C_word)li121),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_i_check_list_2(t3,lf[33]);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9341,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9600,a[2]=t7,a[3]=t2,a[4]=((C_word)li126),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_9600(t9,t5,t3);}

/* g2266 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_9299(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_9299,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9335,a[2]=t4,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:725: macro-env */
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)C_fast_retrieve_proc(t6))(2,av2);}}

/* k9333 in g2266 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9335,2,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_i_cdr(t2);
t6=C_eqp(t4,t5);
if(C_truep(C_i_not(t6))){
t7=((C_word*)t0)[3];
t8=C_u_i_car(t7);
/* modules.scm:727: ##sys#notice */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[138]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[138]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[140];
av2[3]=t8;
tp(4,av2);}}
else{
t7=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9339 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_9341,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9344,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[7])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9369,a[2]=((C_word*)t0)[8],a[3]=t2,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_9369(2,av2);}}
else{
/* modules.scm:731: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[115]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[115]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
av2[3]=lf[141];
tp(4,av2);}}}
else{
t3=t2;
f_9344(t3,C_SCHEME_UNDEFINED);}}

/* k9342 in k9339 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_9344(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_9344,2,t0,t1);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9347,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9362,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9366,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:752: import-env */
t5=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}

/* k9345 in k9342 in k9339 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9347(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_9347,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9354,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9358,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:753: macro-env */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k9352 in k9345 in k9342 in k9339 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9354,2,av);}
/* modules.scm:753: macro-env */
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

/* k9356 in k9345 in k9342 in k9339 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9358,2,av);}
/* modules.scm:753: scheme#append */
t2=*((C_word*)lf[19]+1);{
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

/* k9360 in k9342 in k9339 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9362,2,av);}
/* modules.scm:752: import-env */
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

/* k9364 in k9342 in k9339 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9366,2,av);}
/* modules.scm:752: scheme#append */
t2=*((C_word*)lf[19]+1);{
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

/* k9367 in k9339 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9369(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_9369,2,av);}
a=C_alloc(27);
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[4],lf[12]);
t3=C_i_block_ref(((C_word*)t0)[2],C_fix(3));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9375,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(C_SCHEME_TRUE,t3);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9395,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9492,a[2]=((C_word*)t0)[2],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_i_check_structure_2(((C_word*)t0)[2],lf[4],lf[14]);
t9=C_i_block_ref(((C_word*)t0)[2],C_fix(12));
/* modules.scm:734: scheme#append */
t10=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=((C_word*)t0)[6];
av2[3]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9503,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_structure_2(((C_word*)t0)[2],lf[4],lf[12]);
t8=C_i_block_ref(((C_word*)t0)[2],C_fix(3));
t9=C_eqp(C_SCHEME_TRUE,t8);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:t8);
t11=t10;
t12=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t13=t12;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=((C_word*)t14)[1];
t16=((C_word*)t0)[5];
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9517,a[2]=((C_word*)t0)[6],a[3]=t6,a[4]=t11,tmp=(C_word)a,a+=5,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9560,a[2]=t14,a[3]=t19,a[4]=t15,a[5]=((C_word)li125),tmp=(C_word)a,a+=6,tmp));
t21=((C_word*)t19)[1];
f_9560(t21,t17,t16);}}

/* k9373 in k9367 in k9339 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9375(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9375,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9378,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9385,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_check_structure_2(((C_word*)t0)[3],lf[4],lf[59]);
t5=C_i_block_ref(((C_word*)t0)[3],C_fix(13));
/* modules.scm:750: merge-se */
f_6507(t3,C_a_i_list(&a,2,t5,((C_word*)t0)[4]));}

/* k9376 in k9373 in k9367 in k9339 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9378,2,av);}
t2=((C_word*)t0)[2];
f_9344(t2,C_SCHEME_UNDEFINED);}

/* k9383 in k9373 in k9367 in k9339 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9385(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9385,2,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[4],C_SCHEME_FALSE);
/* modules.scm:93: ##sys#block-set! */
t3=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(13);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k9393 in k9367 in k9339 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
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
C_word t14;
C_word t15;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_9395,2,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9402,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_structure_2(((C_word*)t0)[2],lf[4],lf[32]);
t4=C_i_block_ref(((C_word*)t0)[2],C_fix(5));
t5=t4;
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=((C_word*)t0)[4];
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9413,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9456,a[2]=t8,a[3]=t13,a[4]=t9,a[5]=((C_word)li123),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_9456(t15,t11,t10);}

/* k9400 in k9393 in k9367 in k9339 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9402,2,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[4],C_SCHEME_FALSE);
/* modules.scm:93: ##sys#block-set! */
t3=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(5);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k9411 in k9393 in k9367 in k9339 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9413(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_9413,2,av);}
a=C_alloc(18);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)t0)[2];
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9420,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9422,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li122),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_9422(t12,t8,t7);}

/* k9418 in k9411 in k9393 in k9367 in k9339 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9420,2,av);}
/* modules.scm:737: scheme#append */
t2=*((C_word*)lf[19]+1);{
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

/* map-loop2334 in k9411 in k9393 in k9367 in k9339 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_9422(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_9422,3,t0,t1,t2);}
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

/* map-loop2308 in k9393 in k9367 in k9339 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_9456(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_9456,3,t0,t1,t2);}
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

/* k9490 in k9367 in k9339 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9492,2,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[4],C_SCHEME_FALSE);
/* modules.scm:93: ##sys#block-set! */
t3=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(12);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k9501 in k9367 in k9339 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9503,2,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[4],C_SCHEME_FALSE);
/* modules.scm:93: ##sys#block-set! */
t3=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(3);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k9515 in k9367 in k9339 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_9517,2,av);}
a=C_alloc(18);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)t0)[2];
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9524,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9526,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li124),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_9526(t12,t8,t7);}

/* k9522 in k9515 in k9367 in k9339 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9524,2,av);}
/* modules.scm:743: scheme#append */
t2=*((C_word*)lf[19]+1);{
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

/* map-loop2388 in k9515 in k9367 in k9339 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_9526(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_9526,3,t0,t1,t2);}
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

/* map-loop2362 in k9367 in k9339 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_9560(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_9560,3,t0,t1,t2);}
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

/* for-each-loop2265 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_9600(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_9600,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9610,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:723: g2266 */
t5=((C_word*)t0)[3];
f_9299(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9608 in for-each-loop2265 in k9296 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9610,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_9600(t3,((C_word*)t0)[4],t2);}

/* for-each-loop2255 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_9623(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_9623,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9633,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:715: g2256 */
t5=((C_word*)t0)[3];
f_9254(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9631 in for-each-loop2255 in k9242 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9633,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_9623(t3,((C_word*)t0)[4],t2);}

/* k9652 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9654,2,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[4],C_SCHEME_FALSE);
/* modules.scm:93: ##sys#block-set! */
t3=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(9);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k9667 in k9239 in import in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9669,2,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[4],C_SCHEME_FALSE);
/* modules.scm:93: ##sys#block-set! */
t3=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(8);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* module-rename in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_9679(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_9679,3,t1,t2,t3);}
a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9687,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t3,C_fix(1));
t6=C_slot(t2,C_fix(1));
/* modules.scm:757: scheme#string-append */
t7=*((C_word*)lf[90]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t4;
av2[2]=t5;
av2[3]=lf[142];
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k9685 in module-rename in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9687,2,av);}
/* modules.scm:756: ##sys#string->symbol */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[126]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[126]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* ##sys#alias-global-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9697(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_9697,5,av);}
a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9700,a[2]=t3,a[3]=t4,a[4]=((C_word)li132),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9734,a[2]=t2,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:771: ##sys#qualified-symbol? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[144]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[144]+1);
av2[1]=t6;
av2[2]=t2;
tp(3,av2);}}

/* mrename in alias-global-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_9700(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9700,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9704,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:764: ##sys#current-module */
t4=*((C_word*)lf[2]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k9702 in mrename in alias-global-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_9704,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9708,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li131),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:764: g2445 */
t3=t2;
f_9708(t3,((C_word*)t0)[5],t1);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g2445 in k9702 in mrename in alias-global-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_9708(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_9708,3,t0,t1,t2);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9715,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=t2;
t5=C_i_check_structure_2(t4,lf[4],lf[6]);
t6=C_i_block_ref(t4,C_fix(1));
/* modules.scm:769: module-rename */
f_9679(t1,((C_word*)t0)[2],t6);}
else{
t4=t3;
t5=((C_word*)t0)[2];
t6=t2;
t7=((C_word*)t0)[4];
if(C_truep(t6)){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6138,a[2]=t5,a[3]=t7,a[4]=t4,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:239: module-undefined-list */
t9=*((C_word*)lf[7]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t8=C_SCHEME_UNDEFINED;
t9=t4;{
C_word av2[2];
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}}

/* k9713 in g2445 in k9702 in mrename in alias-global-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9715,2,av);}
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[4],lf[6]);
t4=C_i_block_ref(t2,C_fix(1));
/* modules.scm:769: module-rename */
f_9679(((C_word*)t0)[3],((C_word*)t0)[4],t4);}

/* k9732 in alias-global-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_9734,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];
if(C_truep(C_u_i_namespaced_symbolp(t2))){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9775,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:773: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t3;
tp(2,av2);}}}}

/* g2456 in k9773 in k9732 in alias-global-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_9749(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_9749,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
/* modules.scm:778: mrename */
t4=((C_word*)t0)[2];
f_9700(t4,t1,((C_word*)t0)[3]);}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9773 in k9732 in alias-global-hook in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_9775,2,av);}
a=C_alloc(5);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9749,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word)li133),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:771: g2456 */
t4=t3;
f_9749(t4,((C_word*)t0)[4],t2);}
else{
/* modules.scm:779: mrename */
t3=((C_word*)t0)[3];
f_9700(t3,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* ##sys#validate-exports in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9777(C_word c,C_word *av){
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
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_9777,4,av);}
a=C_alloc(22);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9780,a[2]=t3,a[3]=((C_word)li135),tmp=(C_word)a,a+=4,tmp));
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9786,a[2]=t5,a[3]=t2,a[4]=((C_word)li136),tmp=(C_word)a,a+=5,tmp));
t10=C_eqp(lf[148],t2);
if(C_truep(t10)){
t11=t2;
t12=t1;{
C_word *av2=av;
av2[0]=t12;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
/* modules.scm:789: iface */
t11=((C_word*)t7)[1];
f_9786(t11,t1,t2);}
else{
t11=C_i_listp(t2);
if(C_truep(C_i_not(t11))){
/* modules.scm:791: err */
t12=((C_word*)t5)[1];
f_9780(t12,t1,C_a_i_list(&a,2,lf[149],t2));}
else{
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9827,a[2]=t5,a[3]=t2,a[4]=t13,a[5]=t7,a[6]=((C_word)li138),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_9827(t15,t1,t2);}}}}

/* err in validate-exports in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_9780(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_9780,3,t0,t1,t2);}{
C_word av2[5];
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[115]+1);
av2[3]=((C_word*)t0)[2];
av2[4]=t2;
C_apply(5,av2);}}

/* iface in validate-exports in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_9786(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_9786,3,t0,t1,t2);}
a=C_alloc(9);
t3=t2;
t4=C_i_getprop(t3,lf[146],C_SCHEME_FALSE);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* modules.scm:787: err */
t5=((C_word*)((C_word*)t0)[2])[1];
f_9780(t5,t1,C_a_i_list(&a,3,lf[147],t2,((C_word*)t0)[3]));}}

/* loop in validate-exports in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_9827(C_word t0,C_word t1,C_word t2){
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
loop:
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_9827,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_pairp(t2);
if(C_truep(C_i_not(t3))){
/* modules.scm:796: err */
t4=((C_word*)((C_word*)t0)[2])[1];
f_9780(t4,t1,C_a_i_list(&a,2,lf[150],((C_word*)t0)[3]));}
else{
t4=C_i_car(t2);
t5=t4;
if(C_truep(C_i_symbolp(t5))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9859,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=t2;
t8=C_u_i_cdr(t7);
/* modules.scm:799: loop */
t15=t6;
t16=t8;
t1=t15;
t2=t16;
goto loop;}
else{
t6=C_i_listp(t5);
if(C_truep(C_i_not(t6))){
/* modules.scm:801: err */
t7=((C_word*)((C_word*)t0)[2])[1];
f_9780(t7,t1,C_a_i_list(&a,3,lf[151],t5,((C_word*)t0)[3]));}
else{
t7=C_i_car(t5);
t8=C_eqp(lf[152],t7);
if(C_truep(t8)){
t9=C_u_i_cdr(t5);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9885,a[2]=t1,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=t2;
t12=C_u_i_cdr(t11);
/* modules.scm:803: loop */
t15=t10;
t16=t12;
t1=t15;
t2=t16;
goto loop;}
else{
t9=C_u_i_car(t5);
t10=C_eqp(lf[153],t9);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9899,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t5,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
t12=C_u_i_cdr(t5);
if(C_truep(C_i_pairp(t12))){
t13=C_i_cadr(t5);
t14=t11;
f_9899(t14,C_i_symbolp(t13));}
else{
t13=t11;
f_9899(t13,C_SCHEME_FALSE);}}
else{
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9936,a[2]=t5,a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t12,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word)li137),tmp=(C_word)a,a+=9,tmp));
t14=((C_word*)t12)[1];
f_9936(t14,t1,t5);}}}}}}}

/* k9857 in loop in validate-exports in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9859,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9883 in loop in validate-exports in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9885,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9897 in loop in validate-exports in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_9899(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_9899,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9906,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_cadr(((C_word*)t0)[5]);
/* modules.scm:806: iface */
t4=((C_word*)((C_word*)t0)[6])[1];
f_9786(t4,t2,t3);}
else{
/* modules.scm:807: err */
t2=((C_word*)((C_word*)t0)[7])[1];
f_9780(t2,((C_word*)t0)[2],C_a_i_list(&a,3,lf[154],((C_word*)t0)[5],((C_word*)t0)[8]));}}

/* k9904 in k9897 in loop in validate-exports in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9906(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9906,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9910,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* modules.scm:806: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9827(t6,t3,t5);}

/* k9908 in k9904 in k9897 in loop in validate-exports in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9910,2,av);}
/* modules.scm:806: scheme#append */
t2=*((C_word*)lf[19]+1);{
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

/* loop2 in loop in validate-exports in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_fcall f_9936(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_9936,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9950,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[3]);
/* modules.scm:810: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_9827(t5,t3,t4);}
else{
t3=C_i_car(t2);
if(C_truep(C_i_symbolp(t3))){
t4=t2;
t5=C_u_i_cdr(t4);
/* modules.scm:811: loop2 */
t7=t1;
t8=t5;
t1=t7;
t2=t8;
goto loop;}
else{
/* modules.scm:812: err */
t4=((C_word*)((C_word*)t0)[6])[1];
f_9780(t4,t1,C_a_i_list(&a,3,lf[155],((C_word*)t0)[2],((C_word*)t0)[7]));}}}

/* k9948 in loop2 in loop in validate-exports in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9950,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#register-functor in k5250 in k5246 in k3964 in k3961 in k3958 in k3955 */
static void C_ccall f_9992(C_word c,C_word *av){
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
if(c!=6) C_bad_argc_2(c,6,t0);
if(C_unlikely(!C_demand(C_calculate_demand(14,c,1)))){
C_save_and_reclaim((void *)f_9992,6,av);}
a=C_alloc(14);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,t3,t6);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_putprop(&a,3,t2,lf[64],t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_modules_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("modules"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_modules_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(7463))){
C_save(t1);
C_rereclaim2(7463*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,240);
lf[0]=C_h_intern(&lf[0],7, C_text("modules"));
lf[2]=C_h_intern(&lf[2],18, C_text("\003syscurrent-module"));
lf[3]=C_h_intern(&lf[3],28, C_text("\003sysmodule-alias-environment"));
lf[4]=C_h_intern(&lf[4],6, C_text("module"));
lf[6]=C_h_intern(&lf[6],11, C_text("module-name"));
lf[7]=C_h_intern(&lf[7],21, C_text("module-undefined-list"));
lf[8]=C_h_intern(&lf[8],26, C_text("set-module-undefined-list!"));
lf[9]=C_h_intern(&lf[9],14, C_text("\003sysblock-set!"));
lf[10]=C_h_intern(&lf[10],15, C_text("\003sysmodule-name"));
lf[11]=C_h_intern(&lf[11],18, C_text("\003sysmodule-exports"));
lf[12]=C_h_intern(&lf[12],18, C_text("module-export-list"));
lf[13]=C_h_intern(&lf[13],15, C_text("module-vexports"));
lf[14]=C_h_intern(&lf[14],15, C_text("module-sexports"));
lf[15]=C_h_intern(&lf[15],25, C_text("\003sysregister-module-alias"));
lf[16]=C_h_intern(&lf[16],23, C_text("\003syswith-module-aliases"));
lf[17]=C_h_intern(&lf[17],16, C_text("\003sysdynamic-wind"));
lf[18]=C_h_intern(&lf[18],3, C_text("map"));
lf[19]=C_h_intern(&lf[19],13, C_text("scheme#append"));
lf[20]=C_h_intern(&lf[20],23, C_text("\003sysresolve-module-name"));
lf[21]=C_h_intern(&lf[21],18, C_text("chicken.base#error"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035module alias refers to itself"));
lf[23]=C_h_intern(&lf[23],27, C_text("chicken.internal#library-id"));
lf[24]=C_h_intern(&lf[24],15, C_text("\003sysfind-module"));
lf[25]=C_h_intern(&lf[25],16, C_text("\003sysmodule-table"));
lf[26]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020module not found"));
lf[27]=C_h_intern(&lf[27],17, C_text("\003sysswitch-module"));
lf[28]=C_h_intern(&lf[28],21, C_text("\003sysmacro-environment"));
lf[29]=C_h_intern(&lf[29],23, C_text("\003syscurrent-environment"));
lf[30]=C_h_intern(&lf[30],25, C_text("module-saved-environments"));
lf[31]=C_h_intern(&lf[31],22, C_text("\003sysadd-to-export-list"));
lf[32]=C_h_intern(&lf[32],17, C_text("module-exist-list"));
lf[33]=C_h_intern(&lf[33],8, C_text("for-each"));
lf[34]=C_h_intern(&lf[34],28, C_text("\003systoplevel-definition-hook"));
lf[35]=C_h_intern(&lf[35],28, C_text("\003sysregister-meta-expression"));
lf[36]=C_h_intern(&lf[36],23, C_text("module-meta-expressions"));
lf[38]=C_h_intern(&lf[38],8, C_text("\003syswarn"));
lf[39]=C_decode_literal(C_heaptop,C_text("\376B\000\000\047redefinition of imported syntax binding"));
lf[40]=C_decode_literal(C_heaptop,C_text("\376B\000\000&redefinition of imported value binding"));
lf[41]=C_h_intern(&lf[41],19, C_text("\003sysregister-export"));
lf[42]=C_h_intern(&lf[42],19, C_text("module-defined-list"));
lf[43]=C_h_intern(&lf[43],10, C_text("scheme#eq\077"));
lf[46]=C_h_intern(&lf[46],26, C_text("\003sysregister-syntax-export"));
lf[47]=C_h_intern(&lf[47],26, C_text("module-defined-syntax-list"));
lf[48]=C_decode_literal(C_heaptop,C_text("\376B\000\000!use of syntax precedes definition"));
lf[49]=C_h_intern(&lf[49],28, C_text("\003sysunregister-syntax-export"));
lf[50]=C_h_intern(&lf[50],19, C_text("\003sysregister-module"));
lf[52]=C_h_intern(&lf[52],5, C_text("foldr"));
lf[53]=C_h_intern(&lf[53],32, C_text("\003syscompiled-module-registration"));
lf[54]=C_h_intern(&lf[54],19, C_text("module-import-forms"));
lf[55]=C_h_intern(&lf[55],24, C_text("module-meta-import-forms"));
lf[56]=C_h_intern(&lf[56],10, C_text("\003sysappend"));
lf[57]=C_h_intern(&lf[57],5, C_text("quote"));
lf[58]=C_h_intern(&lf[58],14, C_text("module-library"));
lf[59]=C_h_intern(&lf[59],15, C_text("module-iexports"));
lf[60]=C_h_intern(&lf[60],11, C_text("scheme#list"));
lf[61]=C_h_intern(&lf[61],11, C_text("scheme#cons"));
lf[62]=C_h_intern(&lf[62],27, C_text("chicken.syntax#strip-syntax"));
lf[63]=C_h_intern(&lf[63],28, C_text("\003sysregister-compiled-module"));
lf[64]=C_h_intern(&lf[64],12, C_text("\004corefunctor"));
lf[65]=C_h_intern(&lf[65],16, C_text("\003sysfast-reverse"));
lf[66]=C_h_intern(&lf[66],13, C_text("import-syntax"));
lf[67]=C_h_intern(&lf[67],11, C_text("scheme#eval"));
lf[68]=C_h_intern(&lf[68],22, C_text("\003sysensure-transformer"));
lf[69]=C_h_intern(&lf[69],9, C_text("\003syserror"));
lf[70]=C_h_intern(&lf[70],6, C_text("import"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376B\000\0000cannot find implementation of re-exported syntax"));
lf[72]=C_h_intern(&lf[72],24, C_text("\003sysregister-core-module"));
lf[73]=C_decode_literal(C_heaptop,C_text("\376B\000\0002unknown syntax referenced while registering module"));
lf[74]=C_h_intern(&lf[74],29, C_text("\003sysregister-primitive-module"));
lf[75]=C_h_intern(&lf[75],19, C_text("\003sysfinalize-module"));
lf[76]=C_h_intern(&lf[76],7, C_text("\004coredb"));
lf[77]=C_h_intern(&lf[77],30, C_text("chicken.base#get-output-string"));
lf[78]=C_h_intern(&lf[78],14, C_text("scheme#display"));
lf[79]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002)\047"));
lf[80]=C_h_intern(&lf[80],12, C_text("scheme#cadar"));
lf[81]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042\012Warning:    suggesting: `(import "));
lf[82]=C_h_intern(&lf[82],19, C_text("\003syswrite-char/port"));
lf[83]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025\012Warning:    (import "));
lf[84]=C_decode_literal(C_heaptop,C_text("\376B\000\000\037\012Warning:    suggesting one of:"));
lf[85]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015\012Warning:    "));
lf[86]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004 in:"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376B\000\000\052reference to possibly unbound identifier `"));
lf[88]=C_h_intern(&lf[88],31, C_text("chicken.base#open-output-string"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376B\000\000$(internal) indirect export not found"));
lf[90]=C_h_intern(&lf[90],20, C_text("scheme#string-append"));
lf[91]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014 in module `"));
lf[92]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\047"));
lf[93]=C_h_intern(&lf[93],21, C_text("scheme#symbol->string"));
lf[94]=C_decode_literal(C_heaptop,C_text("\376B\000\000!indirect export of syntax binding"));
lf[95]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033indirect reexport of syntax"));
lf[96]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042indirect export of unknown binding"));
lf[97]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021module unresolved"));
lf[98]=C_decode_literal(C_heaptop,C_text("\376B\000\000\037exported identifier of module `"));
lf[99]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026\047 has not been defined"));
lf[100]=C_h_intern(&lf[100],23, C_text("\003sysimport-library-hook"));
lf[101]=C_h_intern(&lf[101],28, C_text("\003syscurrent-meta-environment"));
lf[102]=C_h_intern(&lf[102],19, C_text("\003sysnotices-enabled"));
lf[103]=C_h_intern(&lf[103],11, C_text("scheme#load"));
lf[104]=C_h_intern(&lf[104],26, C_text("\003sysmeta-macro-environment"));
lf[105]=C_h_intern(&lf[105],35, C_text("chicken.load#find-dynamic-extension"));
lf[106]=C_h_intern(&lf[106],17, C_text("\003sysstring-append"));
lf[107]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007.import"));
lf[109]=C_h_intern(&lf[109],20, C_text("\003sysdecompose-import"));
lf[110]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014 in module `"));
lf[111]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\047"));
lf[112]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001:"));
lf[113]=C_h_intern(&lf[113],18, C_text("\003syssymbol->string"));
lf[114]=C_h_intern(&lf[114],18, C_text("\003sysnumber->string"));
lf[115]=C_h_intern(&lf[115],21, C_text("\003syssyntax-error-hook"));
lf[116]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016invalid prefix"));
lf[117]=C_h_intern(&lf[117],24, C_text("chicken.keyword#keyword\077"));
lf[118]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034invalid import specification"));
lf[119]=C_decode_literal(C_heaptop,C_text("\376B\000\000!imported identifier doesn\047t exist"));
lf[120]=C_h_intern(&lf[120],16, C_text("\003syscheck-syntax"));
lf[121]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\006symbol\376\377\001\000\000\000\000"));
lf[122]=C_decode_literal(C_heaptop,C_text("\376B\000\000!excluded identifier doesn\047t exist"));
lf[123]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\006symbol\376\377\001\000\000\000\000"));
lf[124]=C_decode_literal(C_heaptop,C_text("\376B\000\000 renamed identifier doesn\047t exist"));
lf[125]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\377\001\000\000\000\000"));
lf[126]=C_h_intern(&lf[126],18, C_text("\003sysstring->symbol"));
lf[127]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016"));
lf[128]=C_h_intern(&lf[128],37, C_text("scheme#call-with-current-continuation"));
lf[129]=C_h_intern(&lf[129],6, C_text("prefix"));
lf[130]=C_h_intern(&lf[130],6, C_text("except"));
lf[131]=C_h_intern(&lf[131],6, C_text("rename"));
lf[132]=C_h_intern(&lf[132],4, C_text("only"));
lf[133]=C_h_intern(&lf[133],17, C_text("\003sysexpand-import"));
lf[134]=C_decode_literal(C_heaptop,C_text("\376B\000\000#cannot import from undefined module"));
lf[135]=C_h_intern(&lf[135],10, C_text("\003sysimport"));
lf[136]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[137]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001"));
lf[138]=C_h_intern(&lf[138],10, C_text("\003sysnotice"));
lf[139]=C_decode_literal(C_heaptop,C_text("\376B\000\000(re-importing already imported identifier"));
lf[140]=C_decode_literal(C_heaptop,C_text("\376B\000\000$re-importing already imported syntax"));
lf[141]=C_decode_literal(C_heaptop,C_text("\376B\000\000%`reexport\047 only valid inside a module"));
lf[142]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001#"));
lf[143]=C_h_intern(&lf[143],21, C_text("\003sysalias-global-hook"));
lf[144]=C_h_intern(&lf[144],21, C_text("\003sysqualified-symbol\077"));
lf[145]=C_h_intern(&lf[145],20, C_text("\003sysvalidate-exports"));
lf[146]=C_h_intern(&lf[146],14, C_text("\004coreinterface"));
lf[147]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021unknown interface"));
lf[148]=C_h_intern(&lf[148],1, C_text("\052"));
lf[149]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017invalid exports"));
lf[150]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017invalid exports"));
lf[151]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016invalid export"));
lf[152]=C_h_intern(&lf[152],7, C_text("\000syntax"));
lf[153]=C_h_intern(&lf[153],10, C_text("\000interface"));
lf[154]=C_decode_literal(C_heaptop,C_text("\376B\000\000\037invalid interface specification"));
lf[155]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016invalid export"));
lf[156]=C_h_intern(&lf[156],20, C_text("\003sysregister-functor"));
lf[157]=C_h_intern(&lf[157],23, C_text("\003sysinstantiate-functor"));
lf[158]=C_decode_literal(C_heaptop,C_text("\376B\000\000/argument list mismatch in functor instantiation"));
lf[159]=C_h_intern(&lf[159],11, C_text("\004coremodule"));
lf[160]=C_h_intern(&lf[160],21, C_text("\004corelet-module-alias"));
lf[162]=C_decode_literal(C_heaptop,C_text("\376B\000\000!instantation of undefined functor"));
lf[163]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021argument module `"));
lf[164]=C_decode_literal(C_heaptop,C_text("\376B\000\000$\047 does not match required signature\012"));
lf[165]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022in instantiation `"));
lf[166]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016\047 of functor `"));
lf[167]=C_decode_literal(C_heaptop,C_text("\376B\000\0007\047, because the following required exports are missing:\012"));
lf[168]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003\012  "));
lf[169]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003not\376\001\000\000\012scheme#not\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010boolean\077\376\001\000\000\017scheme#boolean\077\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\003eq\077\376\001\000\000\012scheme#eq\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004eqv\077\376\001\000\000\013scheme#eqv\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006e"
"qual\077\376\001\000\000\015scheme#equal\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005pair\077\376\001\000\000\014scheme#pair\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004cons\376"
"\001\000\000\013scheme#cons\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003car\376\001\000\000\012scheme#car\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003cdr\376\001\000\000\012scheme#cd"
"r\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004caar\376\001\000\000\013scheme#caar\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004cadr\376\001\000\000\013scheme#cadr\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\004cdar\376\001\000\000\013scheme#cdar\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004cddr\376\001\000\000\013scheme#cddr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005caaa"
"r\376\001\000\000\014scheme#caaar\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005caadr\376\001\000\000\014scheme#caadr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005cadar\376\001\000\000\014"
"scheme#cadar\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005caddr\376\001\000\000\014scheme#caddr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005cdaar\376\001\000\000\014scheme"
"#cdaar\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005cdadr\376\001\000\000\014scheme#cdadr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005cddar\376\001\000\000\014scheme#cddar"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005cdddr\376\001\000\000\014scheme#cdddr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006caaaar\376\001\000\000\015scheme#caaaar\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\006caaadr\376\001\000\000\015scheme#caaadr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006caadar\376\001\000\000\015scheme#caadar\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\006caaddr\376\001\000\000\015scheme#caaddr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006cadaar\376\001\000\000\015scheme#cadaar\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\006cadadr\376\001\000\000\015scheme#cadadr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006caddar\376\001\000\000\015scheme#caddar\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\006cadddr\376\001\000\000\015scheme#cadddr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006cdaaar\376\001\000\000\015scheme#cdaaar\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\006cdaadr\376\001\000\000\015scheme#cdaadr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006cdadar\376\001\000\000\015scheme#cdadar\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\006cdaddr\376\001\000\000\015scheme#cdaddr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006cddaar\376\001\000\000\015scheme#cddaar\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006c"
"ddadr\376\001\000\000\015scheme#cddadr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006cdddar\376\001\000\000\015scheme#cdddar\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006cdd"
"ddr\376\001\000\000\015scheme#cddddr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010set-car!\376\001\000\000\017scheme#set-car!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010s"
"et-cdr!\376\001\000\000\017scheme#set-cdr!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005null\077\376\001\000\000\014scheme#null\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005l"
"ist\077\376\001\000\000\014scheme#list\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004list\376\001\000\000\013scheme#list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006length\376\001\000"
"\000\015scheme#length\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011list-tail\376\001\000\000\020scheme#list-tail\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010list-"
"ref\376\001\000\000\017scheme#list-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006append\376\001\000\000\015scheme#append\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007rev"
"erse\376\001\000\000\016scheme#reverse\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004memq\376\001\000\000\013scheme#memq\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004memv\376\001\000"
"\000\013scheme#memv\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006member\376\001\000\000\015scheme#member\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004assq\376\001\000\000\013sche"
"me#assq\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004assv\376\001\000\000\013scheme#assv\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005assoc\376\001\000\000\014scheme#assoc\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\007symbol\077\376\001\000\000\016scheme#symbol\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016symbol->string\376\001\000\000\025scheme"
"#symbol->string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016string->symbol\376\001\000\000\025scheme#string->symbol\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\007number\077\376\001\000\000\016scheme#number\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010integer\077\376\001\000\000\017scheme#integer\077\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\006exact\077\376\001\000\000\015scheme#exact\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005real\077\376\001\000\000\014scheme#real\077\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\010complex\077\376\001\000\000\017scheme#complex\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010inexact\077\376\001\000\000\017scheme#inexact\077\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\011rational\077\376\001\000\000\020scheme#rational\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005zero\077\376\001\000\000\014scheme#zero\077\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\004odd\077\376\001\000\000\013scheme#odd\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005even\077\376\001\000\000\014scheme#even\077\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\011positive\077\376\001\000\000\020scheme#positive\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011negative\077\376\001\000\000\020scheme#negative\077"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003max\376\001\000\000\012scheme#max\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003min\376\001\000\000\012scheme#min\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\001+\376\001\000\000\010scheme#+\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001-\376\001\000\000\010scheme#-\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\052\376\001\000\000\010scheme#\052\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\001/\376\001\000\000\010scheme#/\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001=\376\001\000\000\010scheme#=\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001>\376\001\000\000\010scheme#>"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001<\376\001\000\000\010scheme#<\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002>=\376\001\000\000\011scheme#>=\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002<=\376\001\000"
"\000\011scheme#<=\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010quotient\376\001\000\000\017scheme#quotient\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011remainder\376\001"
"\000\000\020scheme#remainder\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006modulo\376\001\000\000\015scheme#modulo\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003gcd\376\001\000\000"
"\012scheme#gcd\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003lcm\376\001\000\000\012scheme#lcm\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003abs\376\001\000\000\012scheme#abs\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\005floor\376\001\000\000\014scheme#floor\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007ceiling\376\001\000\000\016scheme#ceiling\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\010truncate\376\001\000\000\017scheme#truncate\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005round\376\001\000\000\014scheme#round\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\013rationalize\376\001\000\000\022scheme#rationalize\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016exact->inexact\376\001\000\000\025sc"
"heme#exact->inexact\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016inexact->exact\376\001\000\000\025scheme#inexact->exact\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\003exp\376\001\000\000\012scheme#exp\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003log\376\001\000\000\012scheme#log\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004expt\376"
"\001\000\000\013scheme#expt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004sqrt\376\001\000\000\013scheme#sqrt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003sin\376\001\000\000\012scheme#"
"sin\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003cos\376\001\000\000\012scheme#cos\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003tan\376\001\000\000\012scheme#tan\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\004asin\376\001\000\000\013scheme#asin\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004acos\376\001\000\000\013scheme#acos\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004atan\376\001"
"\000\000\013scheme#atan\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016number->string\376\001\000\000\025scheme#number->string\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\016string->number\376\001\000\000\025scheme#string->number\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005char\077\376\001\000\000\014scheme#char"
"\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006char=\077\376\001\000\000\015scheme#char=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006char>\077\376\001\000\000\015scheme#char>\077\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\006char<\077\376\001\000\000\015scheme#char<\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007char>=\077\376\001\000\000\016scheme#char>=\077\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\007char<=\077\376\001\000\000\016scheme#char<=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011char-ci=\077\376\001\000\000\020scheme#char"
"-ci=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011char-ci<\077\376\001\000\000\020scheme#char-ci<\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011char-ci>\077\376\001\000\000\020s"
"cheme#char-ci>\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012char-ci>=\077\376\001\000\000\021scheme#char-ci>=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012cha"
"r-ci<=\077\376\001\000\000\021scheme#char-ci<=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020char-alphabetic\077\376\001\000\000\027scheme#char-alp"
"habetic\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020char-whitespace\077\376\001\000\000\027scheme#char-whitespace\077\376\003\000\000\002\376\003\000\000\002\376\001\000"
"\000\015char-numeric\077\376\001\000\000\024scheme#char-numeric\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020char-upper-case\077\376\001\000\000\027sche"
"me#char-upper-case\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020char-lower-case\077\376\001\000\000\027scheme#char-lower-case\077\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\013char-upcase\376\001\000\000\022scheme#char-upcase\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015char-downcase\376\001\000\000\024"
"scheme#char-downcase\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015char->integer\376\001\000\000\024scheme#char->integer\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\015integer->char\376\001\000\000\024scheme#integer->char\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007string\077\376\001\000\000\016scheme#"
"string\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010string=\077\376\001\000\000\017scheme#string=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010string>\077\376\001\000\000\017sc"
"heme#string>\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010string<\077\376\001\000\000\017scheme#string<\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011string>=\077"
"\376\001\000\000\020scheme#string>=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011string<=\077\376\001\000\000\020scheme#string<=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\013string-ci=\077\376\001\000\000\022scheme#string-ci=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013string-ci<\077\376\001\000\000\022scheme#string-"
"ci<\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013string-ci>\077\376\001\000\000\022scheme#string-ci>\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014string-ci>=\077"
"\376\001\000\000\023scheme#string-ci>=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014string-ci<=\077\376\001\000\000\023scheme#string-ci<=\077\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\013make-string\376\001\000\000\022scheme#make-string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015string-length\376\001\000\000\024sch"
"eme#string-length\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012string-ref\376\001\000\000\021scheme#string-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013s"
"tring-set!\376\001\000\000\022scheme#string-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015string-append\376\001\000\000\024scheme#string-"
"append\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013string-copy\376\001\000\000\022scheme#string-copy\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014string->li"
"st\376\001\000\000\023scheme#string->list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014list->string\376\001\000\000\023scheme#list->string\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\011substring\376\001\000\000\020scheme#substring\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014string-fill!\376\001\000\000\023scheme"
"#string-fill!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007vector\077\376\001\000\000\016scheme#vector\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013make-vector"
"\376\001\000\000\022scheme#make-vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012vector-ref\376\001\000\000\021scheme#vector-ref\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\013vector-set!\376\001\000\000\022scheme#vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006string\376\001\000\000\015scheme#string\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\006vector\376\001\000\000\015scheme#vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015vector-length\376\001\000\000\024scheme#vec"
"tor-length\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014vector->list\376\001\000\000\023scheme#vector->list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014list"
"->vector\376\001\000\000\023scheme#list->vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014vector-fill!\376\001\000\000\023scheme#vector-fi"
"ll!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012procedure\077\376\001\000\000\021scheme#procedure\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003map\376\001\000\000\012scheme#"
"map\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010for-each\376\001\000\000\017scheme#for-each\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005apply\376\001\000\000\014scheme#ap"
"ply\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005force\376\001\000\000\014scheme#force\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036call-with-current-continu"
"ation\376\001\000\000%scheme#call-with-current-continuation\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013input-port\077\376\001\000\000\022sc"
"heme#input-port\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014output-port\077\376\001\000\000\023scheme#output-port\077\376\003\000\000\002\376\003\000\000\002\376\001\000"
"\000\022current-input-port\376\001\000\000\031scheme#current-input-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023current-output-"
"port\376\001\000\000\032scheme#current-output-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024call-with-input-file\376\001\000\000\033schem"
"e#call-with-input-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025call-with-output-file\376\001\000\000\034scheme#call-with-"
"output-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017open-input-file\376\001\000\000\026scheme#open-input-file\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\020open-output-file\376\001\000\000\027scheme#open-output-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020close-input-port\376\001"
"\000\000\027scheme#close-input-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021close-output-port\376\001\000\000\030scheme#close-outp"
"ut-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004load\376\001\000\000\013scheme#load\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004read\376\001\000\000\013scheme#read\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\011read-char\376\001\000\000\020scheme#read-char\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011peek-char\376\001\000\000\020scheme#pe"
"ek-char\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005write\376\001\000\000\014scheme#write\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007display\376\001\000\000\016scheme#di"
"splay\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012write-char\376\001\000\000\021scheme#write-char\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007newline\376\001\000\000\016s"
"cheme#newline\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013eof-object\077\376\001\000\000\022scheme#eof-object\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024wit"
"h-input-from-file\376\001\000\000\033scheme#with-input-from-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023with-output-to-f"
"ile\376\001\000\000\032scheme#with-output-to-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013char-ready\077\376\001\000\000\022scheme#char-rea"
"dy\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011imag-part\376\001\000\000\020scheme#imag-part\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011real-part\376\001\000\000\020sch"
"eme#real-part\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020make-rectangular\376\001\000\000\027scheme#make-rectangular\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\012make-polar\376\001\000\000\021scheme#make-polar\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005angle\376\001\000\000\014scheme#angle\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\011magnitude\376\001\000\000\020scheme#magnitude\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011numerator\376\001\000\000\020scheme#num"
"erator\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013denominator\376\001\000\000\022scheme#denominator\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031scheme-rep"
"ort-environment\376\001\000\000 scheme#scheme-report-environment\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020null-environm"
"ent\376\001\000\000\027scheme#null-environment\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027interaction-environment\376\001\000\000\036scheme"
"#interaction-environment\376\377\016"));
lf[170]=C_h_intern(&lf[170],28, C_text("\003sysscheme-macro-environment"));
lf[171]=C_h_intern(&lf[171],33, C_text("chicken.module#module-environment"));
lf[172]=C_h_intern(&lf[172],18, C_text("module-environment"));
lf[173]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020undefined module"));
lf[174]=C_h_intern(&lf[174],11, C_text("environment"));
lf[175]=C_h_intern(&lf[175],14, C_text("chicken.syntax"));
lf[176]=C_h_intern(&lf[176],6, C_text("expand"));
lf[177]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006expand\376\001\000\000\025chicken.syntax#expand\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017get-line-number\376\001\000"
"\000\036chicken.syntax#get-line-number\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014strip-syntax\376\001\000\000\033chicken.syntax#s"
"trip-syntax\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014syntax-error\376\001\000\000\033chicken.syntax#syntax-error\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\024er-macro-transformer\376\001\000\000#chicken.syntax#er-macro-transformer\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024"
"ir-macro-transformer\376\001\000\000#chicken.syntax#ir-macro-transformer\376\377\016"));
lf[178]=C_h_intern(&lf[178],36, C_text("\003syschicken.syntax-macro-environment"));
lf[179]=C_h_intern(&lf[179],12, C_text("chicken.base"));
lf[180]=C_h_intern(&lf[180],7, C_text("library"));
lf[181]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004add1\376\001\000\000\021chicken.base#add1\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011alist-ref\376\001\000\000\026chicken.ba"
"se#alist-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014alist-update\376\001\000\000\031chicken.base#alist-update\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\015alist-update!\376\001\000\000\032chicken.base#alist-update!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005atom\077\376\001\000\000\022chicken"
".base#atom\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007bignum\077\376\001\000\000\024chicken.base#bignum\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007butlast"
"\376\001\000\000\024chicken.base#butlast\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007call/cc\376\001\000\000\024chicken.base#call/cc\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\016case-sensitive\376\001\000\000\033chicken.base#case-sensitive\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011char-name\376\001\000"
"\000\026chicken.base#char-name\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004chop\376\001\000\000\021chicken.base#chop\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012"
"complement\376\001\000\000\027chicken.base#complement\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007compose\376\001\000\000\024chicken.base#co"
"mpose\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010compress\376\001\000\000\025chicken.base#compress\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007conjoin\376\001\000\000"
"\024chicken.base#conjoin\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012constantly\376\001\000\000\027chicken.base#constantly\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\010cplxnum\077\376\001\000\000\025chicken.base#cplxnum\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022current-error-port\376\001\000\000"
"\037chicken.base#current-error-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007disjoin\376\001\000\000\024chicken.base#disjoin\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\004each\376\001\000\000\021chicken.base#each\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016emergency-exit\376\001\000\000\033chicke"
"n.base#emergency-exit\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017enable-warnings\376\001\000\000\034chicken.base#enable-warn"
"ings\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007equal=\077\376\001\000\000\024chicken.base#equal=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005error\376\001\000\000\022chic"
"ken.base#error\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016exact-integer\077\376\001\000\000\033chicken.base#exact-integer\077\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\026exact-integer-nth-root\376\001\000\000#chicken.base#exact-integer-nth-root\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\022exact-integer-sqrt\376\001\000\000\037chicken.base#exact-integer-sqrt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004exit"
"\376\001\000\000\021chicken.base#exit\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014exit-handler\376\001\000\000\031chicken.base#exit-handler\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\007finite\077\376\001\000\000\024chicken.base#finite\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007fixnum\077\376\001\000\000\024chicken"
".base#fixnum\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007flatten\376\001\000\000\024chicken.base#flatten\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004flip\376"
"\001\000\000\021chicken.base#flip\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007flonum\077\376\001\000\000\024chicken.base#flonum\077\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\014flush-output\376\001\000\000\031chicken.base#flush-output\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005foldl\376\001\000\000\022chicken.ba"
"se#foldl\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005foldr\376\001\000\000\022chicken.base#foldr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006gensym\376\001\000\000\023chi"
"cken.base#gensym\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016get-call-chain\376\001\000\000\033chicken.base#get-call-chain\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\021get-output-string\376\001\000\000\036chicken.base#get-output-string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022g"
"etter-with-setter\376\001\000\000\037chicken.base#getter-with-setter\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010identity\376\001\000\000"
"\025chicken.base#identity\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025implicit-exit-handler\376\001\000\000\042chicken.base#impl"
"icit-exit-handler\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011infinite\077\376\001\000\000\026chicken.base#infinite\077\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\020input-port-open\077\376\001\000\000\035chicken.base#input-port-open\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013intersperse\376"
"\001\000\000\030chicken.base#intersperse\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004join\376\001\000\000\021chicken.base#join\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\015keyword-style\376\001\000\000\032chicken.base#keyword-style\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010list-of\077\376\001\000\000\025chic"
"ken.base#list-of\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016make-parameter\376\001\000\000\033chicken.base#make-parameter\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\014make-promise\376\001\000\000\031chicken.base#make-promise\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004nan\077\376\001\000\000\021c"
"hicken.base#nan\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006notice\376\001\000\000\023chicken.base#notice\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001o\376\001\000"
"\000\016chicken.base#o\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007on-exit\376\001\000\000\024chicken.base#on-exit\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021op"
"en-input-string\376\001\000\000\036chicken.base#open-input-string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022open-output-str"
"ing\376\001\000\000\037chicken.base#open-output-string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021output-port-open\077\376\001\000\000\036chic"
"ken.base#output-port-open\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024parentheses-synonyms\376\001\000\000!chicken.base#p"
"arentheses-synonyms\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005port\077\376\001\000\000\022chicken.base#port\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014por"
"t-closed\077\376\001\000\000\031chicken.base#port-closed\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020print-call-chain\376\001\000\000\035chick"
"en.base#print-call-chain\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005print\376\001\000\000\022chicken.base#print\376\003\000\000\002\376\003\000\000\002\376\001\000"
"\000\006print\052\376\001\000\000\023chicken.base#print\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025procedure-information\376\001\000\000\042chicken"
".base#procedure-information\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010promise\077\376\001\000\000\025chicken.base#promise\077\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\017quotient&modulo\376\001\000\000\034chicken.base#quotient&modulo\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022quotie"
"nt&remainder\376\001\000\000\037chicken.base#quotient&remainder\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006rassoc\376\001\000\000\023chicke"
"n.base#rassoc\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007ratnum\077\376\001\000\000\024chicken.base#ratnum\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006sette"
"r\376\001\000\000\023chicken.base#setter\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006signum\376\001\000\000\023chicken.base#signum\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\005sleep\376\001\000\000\022chicken.base#sleep\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031string->uninterned-symbol\376\001\000\000&ch"
"icken.base#string->uninterned-symbol\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004sub1\376\001\000\000\021chicken.base#sub1\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\011subvector\376\001\000\000\026chicken.base#subvector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015symbol-append\376\001\000\000"
"\032chicken.base#symbol-append\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015symbol-escape\376\001\000\000\032chicken.base#symbol-"
"escape\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005tail\077\376\001\000\000\022chicken.base#tail\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014vector-copy!\376\001\000\000"
"\031chicken.base#vector-copy!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015vector-resize\376\001\000\000\032chicken.base#vector-r"
"esize\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004void\376\001\000\000\021chicken.base#void\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007warning\376\001\000\000\024chicken"
".base#warning\376\377\016"));
lf[182]=C_h_intern(&lf[182],34, C_text("\003syschicken.base-macro-environment"));
lf[183]=C_h_intern(&lf[183],7, C_text("srfi-98"));
lf[184]=C_h_intern(&lf[184],5, C_text("posix"));
lf[185]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030get-environment-variable\376\001\000\0000chicken.process-context#get-environm"
"ent-variable\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031get-environment-variables\376\001\000\0001chicken.process-context"
"#get-environment-variables\376\377\016"));
lf[186]=C_h_intern(&lf[186],7, C_text("srfi-55"));
lf[187]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\021require-extension\376\377\016"));
lf[188]=C_h_intern(&lf[188],7, C_text("srfi-39"));
lf[189]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016make-parameter\376\001\000\000\033chicken.base#make-parameter\376\377\016"));
lf[190]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\014parameterize\376\377\016"));
lf[191]=C_h_intern(&lf[191],7, C_text("srfi-31"));
lf[192]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\003rec\376\377\016"));
lf[193]=C_h_intern(&lf[193],7, C_text("srfi-28"));
lf[194]=C_h_intern(&lf[194],6, C_text("extras"));
lf[195]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006format\376\001\000\000\025chicken.format#format\376\377\016"));
lf[196]=C_h_intern(&lf[196],7, C_text("srfi-26"));
lf[197]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\003cut\376\003\000\000\002\376\001\000\000\004cute\376\377\016"));
lf[198]=C_h_intern(&lf[198],7, C_text("srfi-23"));
lf[199]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005error\376\001\000\000\022chicken.base#error\376\377\016"));
lf[200]=C_h_intern(&lf[200],7, C_text("srfi-17"));
lf[201]=C_h_intern(&lf[201],29, C_text("\003sysdefault-macro-environment"));
lf[202]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\004set!\376\377\016"));
lf[203]=C_h_intern(&lf[203],7, C_text("srfi-16"));
lf[204]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\013case-lambda\376\377\016"));
lf[205]=C_h_intern(&lf[205],7, C_text("srfi-15"));
lf[206]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\011fluid-let\376\377\016"));
lf[207]=C_h_intern(&lf[207],7, C_text("srfi-12"));
lf[208]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005abort\376\001\000\000\027chicken.condition#abort\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012condition\077\376\001\000\000\034ch"
"icken.condition#condition\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023condition-predicate\376\001\000\000%chicken.conditi"
"on#condition-predicate\376\003\000\000\002\376\003\000\000\002\376\001\000\000\033condition-property-accessor\376\001\000\000-chicken.con"
"dition#condition-property-accessor\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031current-exception-handler\376\001\000\000+c"
"hicken.condition#current-exception-handler\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030make-composite-conditio"
"n\376\001\000\000\052chicken.condition#make-composite-condition\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027make-property-con"
"dition\376\001\000\000)chicken.condition#make-property-condition\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006signal\376\001\000\000\030ch"
"icken.condition#signal\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026with-exception-handler\376\001\000\000(chicken.conditio"
"n#with-exception-handler\376\377\016"));
lf[209]=C_h_intern(&lf[209],39, C_text("\003syschicken.condition-macro-environment"));
lf[210]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\021handle-exceptions\376\377\016"));
lf[211]=C_h_intern(&lf[211],7, C_text("srfi-11"));
lf[212]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\012let-values\376\003\000\000\002\376\001\000\000\013let\052-values\376\377\016"));
lf[213]=C_h_intern(&lf[213],7, C_text("srfi-10"));
lf[214]=C_h_intern(&lf[214],11, C_text("read-syntax"));
lf[215]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022define-reader-ctor\376\001\000\000&chicken.read-syntax#define-reader-ctor\376\377\016"));
lf[216]=C_h_intern(&lf[216],6, C_text("srfi-9"));
lf[217]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\022define-record-type\376\377\016"));
lf[218]=C_h_intern(&lf[218],6, C_text("srfi-8"));
lf[219]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\007receive\376\377\016"));
lf[220]=C_h_intern(&lf[220],6, C_text("srfi-6"));
lf[221]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021get-output-string\376\001\000\000\036chicken.base#get-output-string\376\003\000\000\002\376\003\000\000\002\376\001\000"
"\000\021open-input-string\376\001\000\000\036chicken.base#open-input-string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022open-output"
"-string\376\001\000\000\036chicken.base#open-input-string\376\377\016"));
lf[222]=C_h_intern(&lf[222],6, C_text("srfi-2"));
lf[223]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\010and-let\052\376\377\016"));
lf[224]=C_h_intern(&lf[224],6, C_text("srfi-0"));
lf[225]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\013cond-expand\376\377\016"));
lf[226]=C_h_intern(&lf[226],12, C_text("chicken.type"));
lf[227]=C_h_intern(&lf[227],34, C_text("\003syschicken.type-macro-environment"));
lf[228]=C_h_intern(&lf[228],14, C_text("chicken.module"));
lf[229]=C_h_intern(&lf[229],36, C_text("\003syschicken.module-macro-environment"));
lf[230]=C_h_intern(&lf[230],23, C_text("chicken.internal.syntax"));
lf[231]=C_h_intern(&lf[231],7, C_text("srfi-88"));
lf[232]=C_h_intern(&lf[232],15, C_text("chicken.keyword"));
lf[233]=C_h_intern(&lf[233],4, C_text("r5rs"));
lf[234]=C_h_intern(&lf[234],6, C_text("scheme"));
lf[235]=C_h_intern(&lf[235],9, C_text("r5rs-null"));
lf[236]=C_h_intern(&lf[236],9, C_text("r4rs-null"));
lf[237]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014dynamic-wind\376\001\000\000\023scheme#dynamic-wind\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004eval\376\001\000\000\013schem"
"e#eval\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006values\376\001\000\000\015scheme#values\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020call-with-values\376\001\000\000"
"\027scheme#call-with-values\376\377\016"));
lf[238]=C_h_intern(&lf[238],4, C_text("r4rs"));
lf[239]=C_h_intern(&lf[239],27, C_text("chicken.base#make-parameter"));
C_register_lf2(lf,240,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3957,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[533] = {
{C_text("f11751:modules_2escm"),(void*)f11751},
{C_text("f_10008:modules_2escm"),(void*)f_10008},
{C_text("f_10016:modules_2escm"),(void*)f_10016},
{C_text("f_10023:modules_2escm"),(void*)f_10023},
{C_text("f_10033:modules_2escm"),(void*)f_10033},
{C_text("f_10055:modules_2escm"),(void*)f_10055},
{C_text("f_10057:modules_2escm"),(void*)f_10057},
{C_text("f_10096:modules_2escm"),(void*)f_10096},
{C_text("f_10117:modules_2escm"),(void*)f_10117},
{C_text("f_10129:modules_2escm"),(void*)f_10129},
{C_text("f_10152:modules_2escm"),(void*)f_10152},
{C_text("f_10155:modules_2escm"),(void*)f_10155},
{C_text("f_10166:modules_2escm"),(void*)f_10166},
{C_text("f_10172:modules_2escm"),(void*)f_10172},
{C_text("f_10204:modules_2escm"),(void*)f_10204},
{C_text("f_10207:modules_2escm"),(void*)f_10207},
{C_text("f_10218:modules_2escm"),(void*)f_10218},
{C_text("f_10234:modules_2escm"),(void*)f_10234},
{C_text("f_10238:modules_2escm"),(void*)f_10238},
{C_text("f_10245:modules_2escm"),(void*)f_10245},
{C_text("f_10258:modules_2escm"),(void*)f_10258},
{C_text("f_10285:modules_2escm"),(void*)f_10285},
{C_text("f_10298:modules_2escm"),(void*)f_10298},
{C_text("f_10302:modules_2escm"),(void*)f_10302},
{C_text("f_10306:modules_2escm"),(void*)f_10306},
{C_text("f_10310:modules_2escm"),(void*)f_10310},
{C_text("f_10324:modules_2escm"),(void*)f_10324},
{C_text("f_10330:modules_2escm"),(void*)f_10330},
{C_text("f_10332:modules_2escm"),(void*)f_10332},
{C_text("f_10357:modules_2escm"),(void*)f_10357},
{C_text("f_10366:modules_2escm"),(void*)f_10366},
{C_text("f_10376:modules_2escm"),(void*)f_10376},
{C_text("f_10391:modules_2escm"),(void*)f_10391},
{C_text("f_10394:modules_2escm"),(void*)f_10394},
{C_text("f_10397:modules_2escm"),(void*)f_10397},
{C_text("f_10400:modules_2escm"),(void*)f_10400},
{C_text("f_10403:modules_2escm"),(void*)f_10403},
{C_text("f_10406:modules_2escm"),(void*)f_10406},
{C_text("f_10409:modules_2escm"),(void*)f_10409},
{C_text("f_10412:modules_2escm"),(void*)f_10412},
{C_text("f_10415:modules_2escm"),(void*)f_10415},
{C_text("f_10418:modules_2escm"),(void*)f_10418},
{C_text("f_10421:modules_2escm"),(void*)f_10421},
{C_text("f_10424:modules_2escm"),(void*)f_10424},
{C_text("f_10427:modules_2escm"),(void*)f_10427},
{C_text("f_10430:modules_2escm"),(void*)f_10430},
{C_text("f_10433:modules_2escm"),(void*)f_10433},
{C_text("f_10436:modules_2escm"),(void*)f_10436},
{C_text("f_10439:modules_2escm"),(void*)f_10439},
{C_text("f_10442:modules_2escm"),(void*)f_10442},
{C_text("f_10445:modules_2escm"),(void*)f_10445},
{C_text("f_10448:modules_2escm"),(void*)f_10448},
{C_text("f_10451:modules_2escm"),(void*)f_10451},
{C_text("f_10454:modules_2escm"),(void*)f_10454},
{C_text("f_10457:modules_2escm"),(void*)f_10457},
{C_text("f_10460:modules_2escm"),(void*)f_10460},
{C_text("f_10463:modules_2escm"),(void*)f_10463},
{C_text("f_10466:modules_2escm"),(void*)f_10466},
{C_text("f_10469:modules_2escm"),(void*)f_10469},
{C_text("f_10472:modules_2escm"),(void*)f_10472},
{C_text("f_10474:modules_2escm"),(void*)f_10474},
{C_text("f_10481:modules_2escm"),(void*)f_10481},
{C_text("f_10510:modules_2escm"),(void*)f_10510},
{C_text("f_10513:modules_2escm"),(void*)f_10513},
{C_text("f_10520:modules_2escm"),(void*)f_10520},
{C_text("f_10532:modules_2escm"),(void*)f_10532},
{C_text("f_10567:modules_2escm"),(void*)f_10567},
{C_text("f_10574:modules_2escm"),(void*)f_10574},
{C_text("f_10586:modules_2escm"),(void*)f_10586},
{C_text("f_10621:modules_2escm"),(void*)f_10621},
{C_text("f_10628:modules_2escm"),(void*)f_10628},
{C_text("f_10640:modules_2escm"),(void*)f_10640},
{C_text("f_10675:modules_2escm"),(void*)f_10675},
{C_text("f_10682:modules_2escm"),(void*)f_10682},
{C_text("f_10694:modules_2escm"),(void*)f_10694},
{C_text("f_10729:modules_2escm"),(void*)f_10729},
{C_text("f_10736:modules_2escm"),(void*)f_10736},
{C_text("f_10748:modules_2escm"),(void*)f_10748},
{C_text("f_10783:modules_2escm"),(void*)f_10783},
{C_text("f_10790:modules_2escm"),(void*)f_10790},
{C_text("f_10802:modules_2escm"),(void*)f_10802},
{C_text("f_10837:modules_2escm"),(void*)f_10837},
{C_text("f_10844:modules_2escm"),(void*)f_10844},
{C_text("f_10856:modules_2escm"),(void*)f_10856},
{C_text("f_10891:modules_2escm"),(void*)f_10891},
{C_text("f_10898:modules_2escm"),(void*)f_10898},
{C_text("f_10910:modules_2escm"),(void*)f_10910},
{C_text("f_10945:modules_2escm"),(void*)f_10945},
{C_text("f_10952:modules_2escm"),(void*)f_10952},
{C_text("f_10964:modules_2escm"),(void*)f_10964},
{C_text("f_10999:modules_2escm"),(void*)f_10999},
{C_text("f_11006:modules_2escm"),(void*)f_11006},
{C_text("f_11018:modules_2escm"),(void*)f_11018},
{C_text("f_11053:modules_2escm"),(void*)f_11053},
{C_text("f_11060:modules_2escm"),(void*)f_11060},
{C_text("f_11072:modules_2escm"),(void*)f_11072},
{C_text("f_11107:modules_2escm"),(void*)f_11107},
{C_text("f_11114:modules_2escm"),(void*)f_11114},
{C_text("f_11126:modules_2escm"),(void*)f_11126},
{C_text("f_11161:modules_2escm"),(void*)f_11161},
{C_text("f_11168:modules_2escm"),(void*)f_11168},
{C_text("f_11180:modules_2escm"),(void*)f_11180},
{C_text("f_11215:modules_2escm"),(void*)f_11215},
{C_text("f_11219:modules_2escm"),(void*)f_11219},
{C_text("f_11223:modules_2escm"),(void*)f_11223},
{C_text("f_3957:modules_2escm"),(void*)f_3957},
{C_text("f_3960:modules_2escm"),(void*)f_3960},
{C_text("f_3963:modules_2escm"),(void*)f_3963},
{C_text("f_3966:modules_2escm"),(void*)f_3966},
{C_text("f_4457:modules_2escm"),(void*)f_4457},
{C_text("f_4463:modules_2escm"),(void*)f_4463},
{C_text("f_4476:modules_2escm"),(void*)f_4476},
{C_text("f_4490:modules_2escm"),(void*)f_4490},
{C_text("f_4586:modules_2escm"),(void*)f_4586},
{C_text("f_4594:modules_2escm"),(void*)f_4594},
{C_text("f_4601:modules_2escm"),(void*)f_4601},
{C_text("f_4615:modules_2escm"),(void*)f_4615},
{C_text("f_4676:modules_2escm"),(void*)f_4676},
{C_text("f_5248:modules_2escm"),(void*)f_5248},
{C_text("f_5252:modules_2escm"),(void*)f_5252},
{C_text("f_5267:modules_2escm"),(void*)f_5267},
{C_text("f_5357:modules_2escm"),(void*)f_5357},
{C_text("f_5366:modules_2escm"),(void*)f_5366},
{C_text("f_5502:modules_2escm"),(void*)f_5502},
{C_text("f_5526:modules_2escm"),(void*)f_5526},
{C_text("f_5542:modules_2escm"),(void*)f_5542},
{C_text("f_5544:modules_2escm"),(void*)f_5544},
{C_text("f_5548:modules_2escm"),(void*)f_5548},
{C_text("f_5553:modules_2escm"),(void*)f_5553},
{C_text("f_5557:modules_2escm"),(void*)f_5557},
{C_text("f_5561:modules_2escm"),(void*)f_5561},
{C_text("f_5564:modules_2escm"),(void*)f_5564},
{C_text("f_5570:modules_2escm"),(void*)f_5570},
{C_text("f_5576:modules_2escm"),(void*)f_5576},
{C_text("f_5580:modules_2escm"),(void*)f_5580},
{C_text("f_5583:modules_2escm"),(void*)f_5583},
{C_text("f_5607:modules_2escm"),(void*)f_5607},
{C_text("f_5611:modules_2escm"),(void*)f_5611},
{C_text("f_5613:modules_2escm"),(void*)f_5613},
{C_text("f_5647:modules_2escm"),(void*)f_5647},
{C_text("f_5655:modules_2escm"),(void*)f_5655},
{C_text("f_5657:modules_2escm"),(void*)f_5657},
{C_text("f_5665:modules_2escm"),(void*)f_5665},
{C_text("f_5692:modules_2escm"),(void*)f_5692},
{C_text("f_5694:modules_2escm"),(void*)f_5694},
{C_text("f_5748:modules_2escm"),(void*)f_5748},
{C_text("f_5755:modules_2escm"),(void*)f_5755},
{C_text("f_5758:modules_2escm"),(void*)f_5758},
{C_text("f_5761:modules_2escm"),(void*)f_5761},
{C_text("f_5764:modules_2escm"),(void*)f_5764},
{C_text("f_5770:modules_2escm"),(void*)f_5770},
{C_text("f_5783:modules_2escm"),(void*)f_5783},
{C_text("f_5795:modules_2escm"),(void*)f_5795},
{C_text("f_5799:modules_2escm"),(void*)f_5799},
{C_text("f_5801:modules_2escm"),(void*)f_5801},
{C_text("f_5817:modules_2escm"),(void*)f_5817},
{C_text("f_5818:modules_2escm"),(void*)f_5818},
{C_text("f_5826:modules_2escm"),(void*)f_5826},
{C_text("f_5840:modules_2escm"),(void*)f_5840},
{C_text("f_5843:modules_2escm"),(void*)f_5843},
{C_text("f_5850:modules_2escm"),(void*)f_5850},
{C_text("f_5854:modules_2escm"),(void*)f_5854},
{C_text("f_5860:modules_2escm"),(void*)f_5860},
{C_text("f_5888:modules_2escm"),(void*)f_5888},
{C_text("f_5890:modules_2escm"),(void*)f_5890},
{C_text("f_5893:modules_2escm"),(void*)f_5893},
{C_text("f_5897:modules_2escm"),(void*)f_5897},
{C_text("f_5913:modules_2escm"),(void*)f_5913},
{C_text("f_5920:modules_2escm"),(void*)f_5920},
{C_text("f_5934:modules_2escm"),(void*)f_5934},
{C_text("f_5944:modules_2escm"),(void*)f_5944},
{C_text("f_5947:modules_2escm"),(void*)f_5947},
{C_text("f_5950:modules_2escm"),(void*)f_5950},
{C_text("f_5956:modules_2escm"),(void*)f_5956},
{C_text("f_5959:modules_2escm"),(void*)f_5959},
{C_text("f_5962:modules_2escm"),(void*)f_5962},
{C_text("f_5995:modules_2escm"),(void*)f_5995},
{C_text("f_5999:modules_2escm"),(void*)f_5999},
{C_text("f_6006:modules_2escm"),(void*)f_6006},
{C_text("f_6010:modules_2escm"),(void*)f_6010},
{C_text("f_6023:modules_2escm"),(void*)f_6023},
{C_text("f_6033:modules_2escm"),(void*)f_6033},
{C_text("f_6036:modules_2escm"),(void*)f_6036},
{C_text("f_6042:modules_2escm"),(void*)f_6042},
{C_text("f_6045:modules_2escm"),(void*)f_6045},
{C_text("f_6051:modules_2escm"),(void*)f_6051},
{C_text("f_6085:modules_2escm"),(void*)f_6085},
{C_text("f_6089:modules_2escm"),(void*)f_6089},
{C_text("f_6104:modules_2escm"),(void*)f_6104},
{C_text("f_6115:modules_2escm"),(void*)f_6115},
{C_text("f_6121:modules_2escm"),(void*)f_6121},
{C_text("f_6138:modules_2escm"),(void*)f_6138},
{C_text("f_6145:modules_2escm"),(void*)f_6145},
{C_text("f_6152:modules_2escm"),(void*)f_6152},
{C_text("f_6197:modules_2escm"),(void*)f_6197},
{C_text("f_6303:modules_2escm"),(void*)f_6303},
{C_text("f_6311:modules_2escm"),(void*)f_6311},
{C_text("f_6315:modules_2escm"),(void*)f_6315},
{C_text("f_6326:modules_2escm"),(void*)f_6326},
{C_text("f_6353:modules_2escm"),(void*)f_6353},
{C_text("f_6376:modules_2escm"),(void*)f_6376},
{C_text("f_6390:modules_2escm"),(void*)f_6390},
{C_text("f_6398:modules_2escm"),(void*)f_6398},
{C_text("f_6402:modules_2escm"),(void*)f_6402},
{C_text("f_6415:modules_2escm"),(void*)f_6415},
{C_text("f_6430:modules_2escm"),(void*)f_6430},
{C_text("f_6448:modules_2escm"),(void*)f_6448},
{C_text("f_6459:modules_2escm"),(void*)f_6459},
{C_text("f_6478:modules_2escm"),(void*)f_6478},
{C_text("f_6491:modules_2escm"),(void*)f_6491},
{C_text("f_6501:modules_2escm"),(void*)f_6501},
{C_text("f_6507:modules_2escm"),(void*)f_6507},
{C_text("f_6515:modules_2escm"),(void*)f_6515},
{C_text("f_6517:modules_2escm"),(void*)f_6517},
{C_text("f_6540:modules_2escm"),(void*)f_6540},
{C_text("f_6542:modules_2escm"),(void*)f_6542},
{C_text("f_6569:modules_2escm"),(void*)f_6569},
{C_text("f_6583:modules_2escm"),(void*)f_6583},
{C_text("f_6606:modules_2escm"),(void*)f_6606},
{C_text("f_6610:modules_2escm"),(void*)f_6610},
{C_text("f_6614:modules_2escm"),(void*)f_6614},
{C_text("f_6618:modules_2escm"),(void*)f_6618},
{C_text("f_6622:modules_2escm"),(void*)f_6622},
{C_text("f_6654:modules_2escm"),(void*)f_6654},
{C_text("f_6658:modules_2escm"),(void*)f_6658},
{C_text("f_6670:modules_2escm"),(void*)f_6670},
{C_text("f_6702:modules_2escm"),(void*)f_6702},
{C_text("f_6712:modules_2escm"),(void*)f_6712},
{C_text("f_6727:modules_2escm"),(void*)f_6727},
{C_text("f_6751:modules_2escm"),(void*)f_6751},
{C_text("f_6767:modules_2escm"),(void*)f_6767},
{C_text("f_6769:modules_2escm"),(void*)f_6769},
{C_text("f_6794:modules_2escm"),(void*)f_6794},
{C_text("f_6856:modules_2escm"),(void*)f_6856},
{C_text("f_6858:modules_2escm"),(void*)f_6858},
{C_text("f_6883:modules_2escm"),(void*)f_6883},
{C_text("f_6913:modules_2escm"),(void*)f_6913},
{C_text("f_6934:modules_2escm"),(void*)f_6934},
{C_text("f_6962:modules_2escm"),(void*)f_6962},
{C_text("f_6970:modules_2escm"),(void*)f_6970},
{C_text("f_7000:modules_2escm"),(void*)f_7000},
{C_text("f_7025:modules_2escm"),(void*)f_7025},
{C_text("f_7035:modules_2escm"),(void*)f_7035},
{C_text("f_7051:modules_2escm"),(void*)f_7051},
{C_text("f_7061:modules_2escm"),(void*)f_7061},
{C_text("f_7067:modules_2escm"),(void*)f_7067},
{C_text("f_7068:modules_2escm"),(void*)f_7068},
{C_text("f_7080:modules_2escm"),(void*)f_7080},
{C_text("f_7093:modules_2escm"),(void*)f_7093},
{C_text("f_7094:modules_2escm"),(void*)f_7094},
{C_text("f_7106:modules_2escm"),(void*)f_7106},
{C_text("f_7119:modules_2escm"),(void*)f_7119},
{C_text("f_7122:modules_2escm"),(void*)f_7122},
{C_text("f_7138:modules_2escm"),(void*)f_7138},
{C_text("f_7142:modules_2escm"),(void*)f_7142},
{C_text("f_7146:modules_2escm"),(void*)f_7146},
{C_text("f_7148:modules_2escm"),(void*)f_7148},
{C_text("f_7158:modules_2escm"),(void*)f_7158},
{C_text("f_7171:modules_2escm"),(void*)f_7171},
{C_text("f_7181:modules_2escm"),(void*)f_7181},
{C_text("f_7198:modules_2escm"),(void*)f_7198},
{C_text("f_7205:modules_2escm"),(void*)f_7205},
{C_text("f_7209:modules_2escm"),(void*)f_7209},
{C_text("f_7222:modules_2escm"),(void*)f_7222},
{C_text("f_7247:modules_2escm"),(void*)f_7247},
{C_text("f_7256:modules_2escm"),(void*)f_7256},
{C_text("f_7281:modules_2escm"),(void*)f_7281},
{C_text("f_7296:modules_2escm"),(void*)f_7296},
{C_text("f_7303:modules_2escm"),(void*)f_7303},
{C_text("f_7309:modules_2escm"),(void*)f_7309},
{C_text("f_7325:modules_2escm"),(void*)f_7325},
{C_text("f_7329:modules_2escm"),(void*)f_7329},
{C_text("f_7333:modules_2escm"),(void*)f_7333},
{C_text("f_7346:modules_2escm"),(void*)f_7346},
{C_text("f_7368:modules_2escm"),(void*)f_7368},
{C_text("f_7370:modules_2escm"),(void*)f_7370},
{C_text("f_7395:modules_2escm"),(void*)f_7395},
{C_text("f_7410:modules_2escm"),(void*)f_7410},
{C_text("f_7425:modules_2escm"),(void*)f_7425},
{C_text("f_7436:modules_2escm"),(void*)f_7436},
{C_text("f_7438:modules_2escm"),(void*)f_7438},
{C_text("f_7466:modules_2escm"),(void*)f_7466},
{C_text("f_7503:modules_2escm"),(void*)f_7503},
{C_text("f_7532:modules_2escm"),(void*)f_7532},
{C_text("f_7541:modules_2escm"),(void*)f_7541},
{C_text("f_7544:modules_2escm"),(void*)f_7544},
{C_text("f_7547:modules_2escm"),(void*)f_7547},
{C_text("f_7548:modules_2escm"),(void*)f_7548},
{C_text("f_7562:modules_2escm"),(void*)f_7562},
{C_text("f_7566:modules_2escm"),(void*)f_7566},
{C_text("f_7569:modules_2escm"),(void*)f_7569},
{C_text("f_7572:modules_2escm"),(void*)f_7572},
{C_text("f_7575:modules_2escm"),(void*)f_7575},
{C_text("f_7583:modules_2escm"),(void*)f_7583},
{C_text("f_7590:modules_2escm"),(void*)f_7590},
{C_text("f_7599:modules_2escm"),(void*)f_7599},
{C_text("f_7602:modules_2escm"),(void*)f_7602},
{C_text("f_7609:modules_2escm"),(void*)f_7609},
{C_text("f_7612:modules_2escm"),(void*)f_7612},
{C_text("f_7613:modules_2escm"),(void*)f_7613},
{C_text("f_7617:modules_2escm"),(void*)f_7617},
{C_text("f_7620:modules_2escm"),(void*)f_7620},
{C_text("f_7632:modules_2escm"),(void*)f_7632},
{C_text("f_7642:modules_2escm"),(void*)f_7642},
{C_text("f_7664:modules_2escm"),(void*)f_7664},
{C_text("f_7665:modules_2escm"),(void*)f_7665},
{C_text("f_7669:modules_2escm"),(void*)f_7669},
{C_text("f_7677:modules_2escm"),(void*)f_7677},
{C_text("f_7687:modules_2escm"),(void*)f_7687},
{C_text("f_7701:modules_2escm"),(void*)f_7701},
{C_text("f_7707:modules_2escm"),(void*)f_7707},
{C_text("f_7710:modules_2escm"),(void*)f_7710},
{C_text("f_7738:modules_2escm"),(void*)f_7738},
{C_text("f_7745:modules_2escm"),(void*)f_7745},
{C_text("f_7751:modules_2escm"),(void*)f_7751},
{C_text("f_7754:modules_2escm"),(void*)f_7754},
{C_text("f_7755:modules_2escm"),(void*)f_7755},
{C_text("f_7759:modules_2escm"),(void*)f_7759},
{C_text("f_7777:modules_2escm"),(void*)f_7777},
{C_text("f_7783:modules_2escm"),(void*)f_7783},
{C_text("f_7786:modules_2escm"),(void*)f_7786},
{C_text("f_7789:modules_2escm"),(void*)f_7789},
{C_text("f_7800:modules_2escm"),(void*)f_7800},
{C_text("f_7804:modules_2escm"),(void*)f_7804},
{C_text("f_7808:modules_2escm"),(void*)f_7808},
{C_text("f_7812:modules_2escm"),(void*)f_7812},
{C_text("f_7818:modules_2escm"),(void*)f_7818},
{C_text("f_7828:modules_2escm"),(void*)f_7828},
{C_text("f_7843:modules_2escm"),(void*)f_7843},
{C_text("f_7847:modules_2escm"),(void*)f_7847},
{C_text("f_7849:modules_2escm"),(void*)f_7849},
{C_text("f_7874:modules_2escm"),(void*)f_7874},
{C_text("f_7886:modules_2escm"),(void*)f_7886},
{C_text("f_7896:modules_2escm"),(void*)f_7896},
{C_text("f_7913:modules_2escm"),(void*)f_7913},
{C_text("f_7944:modules_2escm"),(void*)f_7944},
{C_text("f_7948:modules_2escm"),(void*)f_7948},
{C_text("f_7957:modules_2escm"),(void*)f_7957},
{C_text("f_7960:modules_2escm"),(void*)f_7960},
{C_text("f_7972:modules_2escm"),(void*)f_7972},
{C_text("f_7988:modules_2escm"),(void*)f_7988},
{C_text("f_7992:modules_2escm"),(void*)f_7992},
{C_text("f_7996:modules_2escm"),(void*)f_7996},
{C_text("f_8010:modules_2escm"),(void*)f_8010},
{C_text("f_8043:modules_2escm"),(void*)f_8043},
{C_text("f_8045:modules_2escm"),(void*)f_8045},
{C_text("f_8058:modules_2escm"),(void*)f_8058},
{C_text("f_8067:modules_2escm"),(void*)f_8067},
{C_text("f_8080:modules_2escm"),(void*)f_8080},
{C_text("f_8105:modules_2escm"),(void*)f_8105},
{C_text("f_8115:modules_2escm"),(void*)f_8115},
{C_text("f_8119:modules_2escm"),(void*)f_8119},
{C_text("f_8125:modules_2escm"),(void*)f_8125},
{C_text("f_8128:modules_2escm"),(void*)f_8128},
{C_text("f_8133:modules_2escm"),(void*)f_8133},
{C_text("f_8137:modules_2escm"),(void*)f_8137},
{C_text("f_8140:modules_2escm"),(void*)f_8140},
{C_text("f_8143:modules_2escm"),(void*)f_8143},
{C_text("f_8146:modules_2escm"),(void*)f_8146},
{C_text("f_8150:modules_2escm"),(void*)f_8150},
{C_text("f_8154:modules_2escm"),(void*)f_8154},
{C_text("f_8158:modules_2escm"),(void*)f_8158},
{C_text("f_8162:modules_2escm"),(void*)f_8162},
{C_text("f_8165:modules_2escm"),(void*)f_8165},
{C_text("f_8168:modules_2escm"),(void*)f_8168},
{C_text("f_8171:modules_2escm"),(void*)f_8171},
{C_text("f_8174:modules_2escm"),(void*)f_8174},
{C_text("f_8189:modules_2escm"),(void*)f_8189},
{C_text("f_8195:modules_2escm"),(void*)f_8195},
{C_text("f_8200:modules_2escm"),(void*)f_8200},
{C_text("f_8204:modules_2escm"),(void*)f_8204},
{C_text("f_8209:modules_2escm"),(void*)f_8209},
{C_text("f_8214:modules_2escm"),(void*)f_8214},
{C_text("f_8218:modules_2escm"),(void*)f_8218},
{C_text("f_8221:modules_2escm"),(void*)f_8221},
{C_text("f_8224:modules_2escm"),(void*)f_8224},
{C_text("f_8227:modules_2escm"),(void*)f_8227},
{C_text("f_8230:modules_2escm"),(void*)f_8230},
{C_text("f_8233:modules_2escm"),(void*)f_8233},
{C_text("f_8236:modules_2escm"),(void*)f_8236},
{C_text("f_8239:modules_2escm"),(void*)f_8239},
{C_text("f_8247:modules_2escm"),(void*)f_8247},
{C_text("f_8251:modules_2escm"),(void*)f_8251},
{C_text("f_8254:modules_2escm"),(void*)f_8254},
{C_text("f_8258:modules_2escm"),(void*)f_8258},
{C_text("f_8261:modules_2escm"),(void*)f_8261},
{C_text("f_8269:modules_2escm"),(void*)f_8269},
{C_text("f_8273:modules_2escm"),(void*)f_8273},
{C_text("f_8276:modules_2escm"),(void*)f_8276},
{C_text("f_8279:modules_2escm"),(void*)f_8279},
{C_text("f_8282:modules_2escm"),(void*)f_8282},
{C_text("f_8284:modules_2escm"),(void*)f_8284},
{C_text("f_8292:modules_2escm"),(void*)f_8292},
{C_text("f_8296:modules_2escm"),(void*)f_8296},
{C_text("f_8298:modules_2escm"),(void*)f_8298},
{C_text("f_8311:modules_2escm"),(void*)f_8311},
{C_text("f_8318:modules_2escm"),(void*)f_8318},
{C_text("f_8345:modules_2escm"),(void*)f_8345},
{C_text("f_8348:modules_2escm"),(void*)f_8348},
{C_text("f_8352:modules_2escm"),(void*)f_8352},
{C_text("f_8355:modules_2escm"),(void*)f_8355},
{C_text("f_8396:modules_2escm"),(void*)f_8396},
{C_text("f_8410:modules_2escm"),(void*)f_8410},
{C_text("f_8428:modules_2escm"),(void*)f_8428},
{C_text("f_8431:modules_2escm"),(void*)f_8431},
{C_text("f_8436:modules_2escm"),(void*)f_8436},
{C_text("f_8446:modules_2escm"),(void*)f_8446},
{C_text("f_8450:modules_2escm"),(void*)f_8450},
{C_text("f_8455:modules_2escm"),(void*)f_8455},
{C_text("f_8463:modules_2escm"),(void*)f_8463},
{C_text("f_8473:modules_2escm"),(void*)f_8473},
{C_text("f_8486:modules_2escm"),(void*)f_8486},
{C_text("f_8496:modules_2escm"),(void*)f_8496},
{C_text("f_8514:modules_2escm"),(void*)f_8514},
{C_text("f_8536:modules_2escm"),(void*)f_8536},
{C_text("f_8578:modules_2escm"),(void*)f_8578},
{C_text("f_8581:modules_2escm"),(void*)f_8581},
{C_text("f_8586:modules_2escm"),(void*)f_8586},
{C_text("f_8596:modules_2escm"),(void*)f_8596},
{C_text("f_8600:modules_2escm"),(void*)f_8600},
{C_text("f_8605:modules_2escm"),(void*)f_8605},
{C_text("f_8617:modules_2escm"),(void*)f_8617},
{C_text("f_8625:modules_2escm"),(void*)f_8625},
{C_text("f_8635:modules_2escm"),(void*)f_8635},
{C_text("f_8648:modules_2escm"),(void*)f_8648},
{C_text("f_8658:modules_2escm"),(void*)f_8658},
{C_text("f_8676:modules_2escm"),(void*)f_8676},
{C_text("f_8688:modules_2escm"),(void*)f_8688},
{C_text("f_8717:modules_2escm"),(void*)f_8717},
{C_text("f_8729:modules_2escm"),(void*)f_8729},
{C_text("f_8761:modules_2escm"),(void*)f_8761},
{C_text("f_8764:modules_2escm"),(void*)f_8764},
{C_text("f_8769:modules_2escm"),(void*)f_8769},
{C_text("f_8779:modules_2escm"),(void*)f_8779},
{C_text("f_8783:modules_2escm"),(void*)f_8783},
{C_text("f_8788:modules_2escm"),(void*)f_8788},
{C_text("f_8800:modules_2escm"),(void*)f_8800},
{C_text("f_8808:modules_2escm"),(void*)f_8808},
{C_text("f_8821:modules_2escm"),(void*)f_8821},
{C_text("f_8827:modules_2escm"),(void*)f_8827},
{C_text("f_8840:modules_2escm"),(void*)f_8840},
{C_text("f_8850:modules_2escm"),(void*)f_8850},
{C_text("f_8863:modules_2escm"),(void*)f_8863},
{C_text("f_8902:modules_2escm"),(void*)f_8902},
{C_text("f_8918:modules_2escm"),(void*)f_8918},
{C_text("f_8955:modules_2escm"),(void*)f_8955},
{C_text("f_8971:modules_2escm"),(void*)f_8971},
{C_text("f_9011:modules_2escm"),(void*)f_9011},
{C_text("f_9014:modules_2escm"),(void*)f_9014},
{C_text("f_9019:modules_2escm"),(void*)f_9019},
{C_text("f_9029:modules_2escm"),(void*)f_9029},
{C_text("f_9033:modules_2escm"),(void*)f_9033},
{C_text("f_9035:modules_2escm"),(void*)f_9035},
{C_text("f_9043:modules_2escm"),(void*)f_9043},
{C_text("f_9049:modules_2escm"),(void*)f_9049},
{C_text("f_9053:modules_2escm"),(void*)f_9053},
{C_text("f_9057:modules_2escm"),(void*)f_9057},
{C_text("f_9078:modules_2escm"),(void*)f_9078},
{C_text("f_9088:modules_2escm"),(void*)f_9088},
{C_text("f_9090:modules_2escm"),(void*)f_9090},
{C_text("f_9115:modules_2escm"),(void*)f_9115},
{C_text("f_9124:modules_2escm"),(void*)f_9124},
{C_text("f_9149:modules_2escm"),(void*)f_9149},
{C_text("f_9167:modules_2escm"),(void*)f_9167},
{C_text("f_9173:modules_2escm"),(void*)f_9173},
{C_text("f_9177:modules_2escm"),(void*)f_9177},
{C_text("f_9178:modules_2escm"),(void*)f_9178},
{C_text("f_9184:modules_2escm"),(void*)f_9184},
{C_text("f_9190:modules_2escm"),(void*)f_9190},
{C_text("f_9212:modules_2escm"),(void*)f_9212},
{C_text("f_9214:modules_2escm"),(void*)f_9214},
{C_text("f_9224:modules_2escm"),(void*)f_9224},
{C_text("f_9237:modules_2escm"),(void*)f_9237},
{C_text("f_9241:modules_2escm"),(void*)f_9241},
{C_text("f_9244:modules_2escm"),(void*)f_9244},
{C_text("f_9254:modules_2escm"),(void*)f_9254},
{C_text("f_9292:modules_2escm"),(void*)f_9292},
{C_text("f_9298:modules_2escm"),(void*)f_9298},
{C_text("f_9299:modules_2escm"),(void*)f_9299},
{C_text("f_9335:modules_2escm"),(void*)f_9335},
{C_text("f_9341:modules_2escm"),(void*)f_9341},
{C_text("f_9344:modules_2escm"),(void*)f_9344},
{C_text("f_9347:modules_2escm"),(void*)f_9347},
{C_text("f_9354:modules_2escm"),(void*)f_9354},
{C_text("f_9358:modules_2escm"),(void*)f_9358},
{C_text("f_9362:modules_2escm"),(void*)f_9362},
{C_text("f_9366:modules_2escm"),(void*)f_9366},
{C_text("f_9369:modules_2escm"),(void*)f_9369},
{C_text("f_9375:modules_2escm"),(void*)f_9375},
{C_text("f_9378:modules_2escm"),(void*)f_9378},
{C_text("f_9385:modules_2escm"),(void*)f_9385},
{C_text("f_9395:modules_2escm"),(void*)f_9395},
{C_text("f_9402:modules_2escm"),(void*)f_9402},
{C_text("f_9413:modules_2escm"),(void*)f_9413},
{C_text("f_9420:modules_2escm"),(void*)f_9420},
{C_text("f_9422:modules_2escm"),(void*)f_9422},
{C_text("f_9456:modules_2escm"),(void*)f_9456},
{C_text("f_9492:modules_2escm"),(void*)f_9492},
{C_text("f_9503:modules_2escm"),(void*)f_9503},
{C_text("f_9517:modules_2escm"),(void*)f_9517},
{C_text("f_9524:modules_2escm"),(void*)f_9524},
{C_text("f_9526:modules_2escm"),(void*)f_9526},
{C_text("f_9560:modules_2escm"),(void*)f_9560},
{C_text("f_9600:modules_2escm"),(void*)f_9600},
{C_text("f_9610:modules_2escm"),(void*)f_9610},
{C_text("f_9623:modules_2escm"),(void*)f_9623},
{C_text("f_9633:modules_2escm"),(void*)f_9633},
{C_text("f_9654:modules_2escm"),(void*)f_9654},
{C_text("f_9669:modules_2escm"),(void*)f_9669},
{C_text("f_9679:modules_2escm"),(void*)f_9679},
{C_text("f_9687:modules_2escm"),(void*)f_9687},
{C_text("f_9697:modules_2escm"),(void*)f_9697},
{C_text("f_9700:modules_2escm"),(void*)f_9700},
{C_text("f_9704:modules_2escm"),(void*)f_9704},
{C_text("f_9708:modules_2escm"),(void*)f_9708},
{C_text("f_9715:modules_2escm"),(void*)f_9715},
{C_text("f_9734:modules_2escm"),(void*)f_9734},
{C_text("f_9749:modules_2escm"),(void*)f_9749},
{C_text("f_9775:modules_2escm"),(void*)f_9775},
{C_text("f_9777:modules_2escm"),(void*)f_9777},
{C_text("f_9780:modules_2escm"),(void*)f_9780},
{C_text("f_9786:modules_2escm"),(void*)f_9786},
{C_text("f_9827:modules_2escm"),(void*)f_9827},
{C_text("f_9859:modules_2escm"),(void*)f_9859},
{C_text("f_9885:modules_2escm"),(void*)f_9885},
{C_text("f_9899:modules_2escm"),(void*)f_9899},
{C_text("f_9906:modules_2escm"),(void*)f_9906},
{C_text("f_9910:modules_2escm"),(void*)f_9910},
{C_text("f_9936:modules_2escm"),(void*)f_9936},
{C_text("f_9950:modules_2escm"),(void*)f_9950},
{C_text("f_9992:modules_2escm"),(void*)f_9992},
{C_text("toplevel:modules_2escm"),(void*)C_modules_toplevel},
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
S|  for-each		14
S|  foldl		3
S|  map		33
S|  foldr		3
o|eliminated procedure checks: 435 
o|specializations:
o|  1 (scheme#cddr (pair * pair))
o|  1 (scheme#number->string *)
o|  2 (scheme#string-append string string)
o|  1 (scheme#= fixnum fixnum)
o|  2 (scheme#cdar (pair pair *))
o|  1 (scheme#caar (pair pair *))
o|  1 (scheme#eqv? * *)
o|  9 (##sys#check-list (or pair list) *)
o|  67 (scheme#cdr pair)
o|  33 (scheme#car pair)
(o e)|safe calls: 1099 
(o e)|assignments to immediate values: 1 
o|safe globals: (posv posq make-list iota find-tail find length+ lset=/eq? lset<=/eq? list-tabulate lset-intersection/eq? lset-union/eq? lset-difference/eq? lset-adjoin/eq? list-index last unzip1 remove filter-map filter alist-cons delete-duplicates fifth fourth third second first delete concatenate cons* any every append-map split-at drop take span partition) 
o|removed side-effect free assignment to unused variable: partition 
o|removed side-effect free assignment to unused variable: span 
o|removed side-effect free assignment to unused variable: drop 
o|removed side-effect free assignment to unused variable: split-at 
o|removed side-effect free assignment to unused variable: append-map 
o|inlining procedure: k4348 
o|inlining procedure: k4348 
o|inlining procedure: k4379 
o|inlining procedure: k4379 
o|removed side-effect free assignment to unused variable: cons* 
o|removed side-effect free assignment to unused variable: concatenate 
o|inlining procedure: k4465 
o|inlining procedure: k4465 
o|removed side-effect free assignment to unused variable: first 
o|removed side-effect free assignment to unused variable: second 
o|removed side-effect free assignment to unused variable: third 
o|removed side-effect free assignment to unused variable: fourth 
o|removed side-effect free assignment to unused variable: fifth 
o|removed side-effect free assignment to unused variable: delete-duplicates 
o|removed side-effect free assignment to unused variable: alist-cons 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4588 
o|inlining procedure: k4588 
o|removed side-effect free assignment to unused variable: filter-map 
o|removed side-effect free assignment to unused variable: unzip1 
o|removed side-effect free assignment to unused variable: last 
o|removed side-effect free assignment to unused variable: list-index 
o|removed side-effect free assignment to unused variable: lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: lset-difference/eq? 
o|removed side-effect free assignment to unused variable: lset-union/eq? 
o|removed side-effect free assignment to unused variable: lset-intersection/eq? 
o|inlining procedure: k4987 
o|inlining procedure: k4987 
o|removed side-effect free assignment to unused variable: lset<=/eq? 
o|removed side-effect free assignment to unused variable: lset=/eq? 
o|removed side-effect free assignment to unused variable: length+ 
o|removed side-effect free assignment to unused variable: find 
o|removed side-effect free assignment to unused variable: find-tail 
o|removed side-effect free assignment to unused variable: iota 
o|removed side-effect free assignment to unused variable: make-list 
o|removed side-effect free assignment to unused variable: posq 
o|removed side-effect free assignment to unused variable: posv 
o|removed side-effect free assignment to unused variable: module? 
o|contracted procedure: "(modules.scm:123) %make-module" 
o|inlining procedure: k5615 
o|contracted procedure: "(modules.scm:132) g906915" 
o|inlining procedure: k5615 
o|inlining procedure: k5670 
o|inlining procedure: k5670 
o|inlining procedure: k5662 
o|inlining procedure: k5662 
o|inlining procedure: k5711 
o|inlining procedure: k5711 
o|inlining procedure: k5762 
o|inlining procedure: k5762 
o|inlining procedure: k5823 
o|inlining procedure: k5823 
o|inlining procedure: k5806 
o|inlining procedure: k5862 
o|inlining procedure: k5862 
o|inlining procedure: k5806 
o|inlining procedure: k5898 
o|contracted procedure: "(modules.scm:186) set-module-meta-expressions!" 
o|inlining procedure: k5898 
o|inlining procedure: k5924 
o|inlining procedure: k5924 
o|inlining procedure: k5936 
o|inlining procedure: k5936 
o|inlining procedure: k6025 
o|inlining procedure: k6025 
o|inlining procedure: k6106 
o|inlining procedure: k6106 
o|merged explicitly consed rest parameter: ses1170 
o|inlining procedure: k6519 
o|inlining procedure: k6519 
o|inlining procedure: k6544 
o|inlining procedure: k6544 
o|contracted procedure: "(modules.scm:298) remove" 
o|inlining procedure: k6656 
o|inlining procedure: k6656 
o|inlining procedure: k6672 
o|inlining procedure: k6672 
o|inlining procedure: k6735 
o|inlining procedure: k6735 
o|inlining procedure: k6771 
o|inlining procedure: k6771 
o|inlining procedure: k6860 
o|contracted procedure: "(modules.scm:326) g12191228" 
o|inlining procedure: k6812 
o|inlining procedure: k6812 
o|inlining procedure: k6860 
o|contracted procedure: "(modules.scm:319) g12071208" 
o|inlining procedure: k7006 
o|contracted procedure: "(modules.scm:369) find-reexport1313" 
o|inlining procedure: k6981 
o|inlining procedure: k6981 
o|inlining procedure: k7006 
o|consed rest parameter at call site: "(modules.scm:386) merge-se" 1 
o|inlining procedure: k7085 
o|consed rest parameter at call site: "(modules.scm:386) merge-se" 1 
o|inlining procedure: k7085 
o|consed rest parameter at call site: "(modules.scm:386) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:390) merge-se" 1 
o|inlining procedure: k7111 
o|consed rest parameter at call site: "(modules.scm:390) merge-se" 1 
o|inlining procedure: k7111 
o|consed rest parameter at call site: "(modules.scm:390) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:394) merge-se" 1 
o|inlining procedure: k7150 
o|inlining procedure: k7150 
o|inlining procedure: k7173 
o|inlining procedure: k7173 
o|consed rest parameter at call site: "(modules.scm:379) merge-se" 1 
o|inlining procedure: k7224 
o|contracted procedure: "(modules.scm:373) g13541363" 
o|inlining procedure: k7224 
o|inlining procedure: k7258 
o|inlining procedure: k7258 
o|consed rest parameter at call site: "(modules.scm:415) merge-se" 1 
o|inlining procedure: k7348 
o|inlining procedure: k7348 
o|inlining procedure: k7372 
o|inlining procedure: k7372 
o|inlining procedure: k7440 
o|inlining procedure: k7440 
o|inlining procedure: k7452 
o|inlining procedure: k7467 
o|inlining procedure: k7467 
o|inlining procedure: k7452 
o|inlining procedure: k7554 
o|inlining procedure: k7554 
o|inlining procedure: k7591 
o|inlining procedure: k7591 
o|inlining procedure: k7634 
o|inlining procedure: k7634 
o|substituted constant variable: a7654 
o|contracted procedure: "(modules.scm:502) g16091610" 
o|inlining procedure: k7679 
o|inlining procedure: k7679 
o|consed rest parameter at call site: "(modules.scm:531) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:549) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:546) merge-se" 1 
o|contracted procedure: "(modules.scm:542) set-module-vexports!" 
o|inlining procedure: k7820 
o|inlining procedure: k7820 
o|consed rest parameter at call site: "(modules.scm:525) merge-se" 1 
o|inlining procedure: k7851 
o|contracted procedure: "(modules.scm:520) g16611670" 
o|inlining procedure: k7716 
o|inlining procedure: k7716 
o|inlining procedure: k7851 
o|contracted procedure: "(modules.scm:524) module-indirect-exports" 
o|removed side-effect free assignment to unused variable: indirect?1121 
o|inlining procedure: k6316 
o|inlining procedure: k6316 
o|inlining procedure: k6328 
o|inlining procedure: k6328 
o|inlining procedure: k6355 
o|inlining procedure: k6355 
o|inlining procedure: k6413 
o|inlining procedure: k6413 
o|inlining procedure: k6387 
o|inlining procedure: k6387 
o|inlining procedure: k6432 
o|inlining procedure: k6432 
o|inlining procedure: k7888 
o|inlining procedure: k7888 
o|inlining procedure: k7915 
o|inlining procedure: k7915 
o|inlining procedure: k7955 
o|inlining procedure: k7955 
o|inlining procedure: k7979 
o|inlining procedure: k7979 
o|consed rest parameter at call site: "(modules.scm:450) merge-se" 1 
o|inlining procedure: k8047 
o|inlining procedure: k8047 
o|inlining procedure: k8082 
o|contracted procedure: "(modules.scm:446) g15261535" 
o|inlining procedure: k8082 
o|substituted constant variable: saved173217331752 
o|substituted constant variable: saved173417351753 
o|inlining procedure: k8120 
o|inlining procedure: k8120 
o|substituted constant variable: a8252 
o|inlining procedure: k8262 
o|inlining procedure: k8262 
o|inlining procedure: k8300 
o|inlining procedure: k8300 
o|inlining procedure: k8319 
o|inlining procedure: k8319 
o|inlining procedure: k8356 
o|inlining procedure: k8356 
o|inlining procedure: k8398 
o|inlining procedure: k8398 
o|inlining procedure: k8423 
o|inlining procedure: k8457 
o|inlining procedure: k8488 
o|inlining procedure: k8488 
o|inlining procedure: k8457 
o|inlining procedure: k8533 
o|inlining procedure: k8533 
o|inlining procedure: k8423 
o|inlining procedure: k8607 
o|inlining procedure: k8619 
o|inlining procedure: k8650 
o|inlining procedure: k8650 
o|inlining procedure: k8619 
o|inlining procedure: k8607 
o|inlining procedure: k8756 
o|inlining procedure: k8790 
o|inlining procedure: k8802 
o|inlining procedure: k8842 
o|inlining procedure: k8842 
o|inlining procedure: k8865 
o|inlining procedure: k8865 
o|inlining procedure: k8802 
o|inlining procedure: k8790 
o|inlining procedure: k8756 
o|inlining procedure: k9092 
o|inlining procedure: k9092 
o|inlining procedure: k9126 
o|inlining procedure: k9126 
o|inlining procedure: k9192 
o|inlining procedure: k9192 
o|inlining procedure: k9216 
o|inlining procedure: k9216 
o|inlining procedure: k9259 
o|inlining procedure: k9269 
o|inlining procedure: k9269 
o|inlining procedure: k9259 
o|inlining procedure: k9304 
o|inlining procedure: k9304 
o|consed rest parameter at call site: "(modules.scm:750) merge-se" 1 
o|inlining procedure: k9424 
o|inlining procedure: k9424 
o|inlining procedure: k9458 
o|inlining procedure: k9458 
o|inlining procedure: k9528 
o|inlining procedure: k9528 
o|inlining procedure: k9562 
o|inlining procedure: k9562 
o|inlining procedure: k9602 
o|inlining procedure: k9602 
o|inlining procedure: k9625 
o|inlining procedure: k9625 
o|inlining procedure: k9645 
o|contracted procedure: "(modules.scm:706) set-module-meta-import-forms!" 
o|inlining procedure: k9645 
o|contracted procedure: "(modules.scm:709) set-module-import-forms!" 
o|contracted procedure: "(modules.scm:768) register-undefined" 
o|inlining procedure: k6133 
o|inlining procedure: k6147 
o|inlining procedure: k6147 
o|inlining procedure: k6190 
o|inlining procedure: k6190 
o|inlining procedure: k6133 
o|inlining procedure: k9705 
o|inlining procedure: k9705 
o|inlining procedure: k9729 
o|inlining procedure: k9729 
o|inlining procedure: k9757 
o|inlining procedure: k9757 
o|inlining procedure: k9746 
o|inlining procedure: k9746 
o|contracted procedure: "(modules.scm:772) g24522453" 
o|merged explicitly consed rest parameter: args2473 
o|inlining procedure: k9793 
o|inlining procedure: k9793 
o|consed rest parameter at call site: "(modules.scm:787) err2471" 1 
o|contracted procedure: "(modules.scm:786) g24782479" 
o|inlining procedure: k9799 
o|inlining procedure: k9799 
o|inlining procedure: k9814 
o|consed rest parameter at call site: "(modules.scm:791) err2471" 1 
o|inlining procedure: k9814 
o|inlining procedure: k9829 
o|inlining procedure: k9829 
o|consed rest parameter at call site: "(modules.scm:796) err2471" 1 
o|inlining procedure: k9847 
o|inlining procedure: k9847 
o|consed rest parameter at call site: "(modules.scm:801) err2471" 1 
o|inlining procedure: k9871 
o|inlining procedure: k9871 
o|inlining procedure: k9894 
o|inlining procedure: k9894 
o|consed rest parameter at call site: "(modules.scm:807) err2471" 1 
o|inlining procedure: k9938 
o|inlining procedure: k9938 
o|consed rest parameter at call site: "(modules.scm:812) err2471" 1 
o|contracted procedure: "(modules.scm:815) g25092510" 
o|merged explicitly consed rest parameter: args2524 
o|consed rest parameter at call site: "(modules.scm:826) err2523" 1 
o|inlining procedure: k10059 
o|inlining procedure: k10059 
o|inlining procedure: k10110 
o|inlining procedure: k10110 
o|inlining procedure: k10119 
o|inlining procedure: k10131 
o|inlining procedure: k10131 
o|removed unused parameter to known procedure: alias2585 "(modules.scm:840) match-functor-argument" 
o|inlining procedure: k10119 
o|removed unused parameter to known procedure: alias2585 "(modules.scm:854) match-functor-argument" 
o|consed rest parameter at call site: "(modules.scm:821) err2523" 1 
o|contracted procedure: "(modules.scm:818) g25192520" 
o|removed unused formal parameters: (alias2585) 
o|inlining procedure: k10239 
o|inlining procedure: k10250 
o|inlining procedure: k10250 
o|inlining procedure: k10239 
o|inlining procedure: k10334 
o|contracted procedure: "(modules.scm:881) g26222631" 
o|substituted constant variable: a10320 
o|inlining procedure: k10334 
o|inlining procedure: k10368 
o|inlining procedure: k10368 
o|inlining procedure: k10482 
o|inlining procedure: k10482 
o|contracted procedure: "(modules.scm:1103) g31033104" 
o|inlining procedure: k10534 
o|inlining procedure: k10534 
o|contracted procedure: "(modules.scm:1100) g30653066" 
o|inlining procedure: k10588 
o|inlining procedure: k10588 
o|contracted procedure: "(modules.scm:1096) g30273028" 
o|inlining procedure: k10642 
o|inlining procedure: k10642 
o|contracted procedure: "(modules.scm:1090) g29892990" 
o|inlining procedure: k10696 
o|inlining procedure: k10696 
o|contracted procedure: "(modules.scm:1084) g29512952" 
o|inlining procedure: k10750 
o|inlining procedure: k10750 
o|contracted procedure: "(modules.scm:1081) g29132914" 
o|inlining procedure: k10804 
o|inlining procedure: k10804 
o|contracted procedure: "(modules.scm:1078) g28752876" 
o|inlining procedure: k10858 
o|inlining procedure: k10858 
o|contracted procedure: "(modules.scm:1075) g28372838" 
o|inlining procedure: k10912 
o|inlining procedure: k10912 
o|contracted procedure: "(modules.scm:1062) g27992800" 
o|inlining procedure: k10966 
o|inlining procedure: k10966 
o|contracted procedure: "(modules.scm:1056) g27612762" 
o|inlining procedure: k11020 
o|inlining procedure: k11020 
o|contracted procedure: "(modules.scm:1053) g27232724" 
o|inlining procedure: k11074 
o|inlining procedure: k11074 
o|contracted procedure: "(modules.scm:1044) g26852686" 
o|inlining procedure: k11128 
o|inlining procedure: k11128 
o|contracted procedure: "(modules.scm:1041) g26472648" 
o|inlining procedure: k11182 
o|inlining procedure: k11182 
o|propagated global variable: r4rs-syntax2643 ##sys#scheme-macro-environment 
o|replaced variables: 963 
o|removed binding forms: 511 
o|removed side-effect free assignment to unused variable: every 
o|removed side-effect free assignment to unused variable: any 
o|removed side-effect free assignment to unused variable: list-tabulate 
o|substituted constant variable: defined-list742 
o|substituted constant variable: exist-list743 
o|substituted constant variable: defined-syntax-list744 
o|substituted constant variable: undefined-list745 
o|substituted constant variable: import-forms746 
o|substituted constant variable: meta-import-forms747 
o|substituted constant variable: meta-expressions748 
o|substituted constant variable: saved-environments752 
o|substituted constant variable: r589911261 
o|substituted constant variable: r592511263 
o|removed call to pure procedure with unused result: "(modules.scm:206) chicken.base#void" 
o|removed call to pure procedure with unused result: "(modules.scm:221) chicken.base#void" 
o|substituted constant variable: r652011270 
o|contracted procedure: "(mini-srfi-1.scm:141) filter" 
o|substituted constant variable: r458911233 
o|substituted constant variable: r665711274 
o|substituted constant variable: r665711274 
o|substituted constant variable: r667311278 
o|removed call to pure procedure with unused result: "(modules.scm:339) chicken.base#void" 
o|substituted constant variable: prop1210 
o|substituted constant variable: r708611294 
o|substituted constant variable: r708611294 
o|substituted constant variable: r711211298 
o|substituted constant variable: r711211298 
o|contracted procedure: "(modules.scm:367) g13261335" 
o|substituted constant variable: r744111312 
o|substituted constant variable: prop1612 
o|removed call to pure procedure with unused result: "(modules.scm:532) chicken.base#void" 
o|removed call to pure procedure with unused result: "(modules.scm:535) chicken.base#void" 
o|substituted constant variable: r631711332 
o|substituted constant variable: r632911334 
o|converted assignments to bindings: (warn1122) 
o|substituted constant variable: r791611348 
o|removed call to pure procedure with unused result: "(modules.scm:472) chicken.base#void" 
o|inlining procedure: k7955 
o|substituted constant variable: r798011354 
o|substituted constant variable: r804811356 
o|substituted constant variable: r812111361 
o|converted assignments to bindings: (rename2120) 
o|converted assignments to bindings: (module-imports1823) 
o|substituted constant variable: r927011406 
o|substituted constant variable: r926011407 
o|substituted constant variable: r930511409 
o|removed call to pure procedure with unused result: "(modules.scm:751) chicken.base#void" 
o|removed call to pure procedure with unused result: "(modules.scm:714) chicken.base#void" 
o|removed call to pure procedure with unused result: "(modules.scm:713) chicken.base#void" 
o|removed call to pure procedure with unused result: "(modules.scm:712) chicken.base#void" 
o|substituted constant variable: r619111429 
o|substituted constant variable: r619111429 
o|removed call to pure procedure with unused result: "(modules.scm:766) chicken.base#void" 
o|removed call to pure procedure with unused result: "(modules.scm:776) chicken.base#void" 
o|converted assignments to bindings: (mrename2437) 
o|substituted constant variable: prop2481 
o|substituted constant variable: r983011446 
o|substituted constant variable: prop2512 
o|substituted constant variable: r1011111458 
o|substituted constant variable: r1011111458 
o|substituted constant variable: r1013211463 
o|converted assignments to bindings: (merr2531) 
o|converted assignments to bindings: (err2523) 
o|substituted constant variable: prop2522 
o|substituted constant variable: names3105 
o|substituted constant variable: names3067 
o|substituted constant variable: names3029 
o|substituted constant variable: names2991 
o|substituted constant variable: names2953 
o|substituted constant variable: names2915 
o|substituted constant variable: names2877 
o|substituted constant variable: names2839 
o|substituted constant variable: names2801 
o|substituted constant variable: names2763 
o|substituted constant variable: names2725 
o|substituted constant variable: names2687 
o|substituted constant variable: names2649 
o|simplifications: ((let . 6)) 
o|replaced variables: 32 
o|removed binding forms: 1033 
o|contracted procedure: k5966 
o|contracted procedure: k6046 
o|contracted procedure: k6756 
o|inlining procedure: k7412 
o|inlining procedure: k7581 
o|contracted procedure: k7760 
o|contracted procedure: k7778 
o|contracted procedure: k7973 
o|substituted constant variable: r795611575 
o|contracted procedure: k9245 
o|contracted procedure: k9248 
o|contracted procedure: k9251 
o|contracted procedure: k9710 
o|inlining procedure: k9713 
o|contracted procedure: k9754 
o|replaced variables: 7 
o|removed binding forms: 103 
o|contracted procedure: k6901 
o|inlining procedure: k6984 
o|substituted constant variable: r741311744 
o|contracted procedure: k7578 
o|contracted procedure: k9740 
o|contracted procedure: k9790 
o|contracted procedure: k10012 
o|simplifications: ((let . 1)) 
o|replaced variables: 2 
o|removed binding forms: 26 
o|substituted constant variable: r698511879 
o|replaced variables: 1 
o|removed binding forms: 3 
o|removed conditional forms: 1 
o|removed binding forms: 2 
o|simplifications: ((if . 20) (##core#call . 733)) 
o|  call simplifications:
o|    scheme#list?	2
o|    scheme#apply	3
o|    scheme#set-cdr!
o|    scheme#caddr
o|    ##sys#call-with-values	5
o|    scheme#cddr	3
o|    scheme#string?
o|    scheme#number?
o|    scheme#cdar	3
o|    scheme#length
o|    scheme#write-char	2
o|    scheme#list	7
o|    scheme#set-car!	3
o|    scheme#symbol?	16
o|    ##sys#cons	17
o|    ##sys#list	20
o|    scheme#not	14
o|    scheme#caar	10
o|    scheme#eq?	20
o|    scheme#assq	43
o|    scheme#cdr	33
o|    scheme#memq	6
o|    ##sys#check-list	39
o|    scheme#pair?	61
o|    scheme#cadr	14
o|    ##sys#setslot	30
o|    ##sys#slot	122
o|    ##sys#make-structure	2
o|    scheme#values	6
o|    ##sys#check-structure	26
o|    ##sys#block-ref	14
o|    scheme#null?	36
o|    scheme#car	49
o|    scheme#cons	122
o|contracted procedure: k4468 
o|contracted procedure: k4494 
o|contracted procedure: k5269 
o|contracted procedure: k5278 
o|contracted procedure: k5287 
o|contracted procedure: k5296 
o|contracted procedure: k5305 
o|contracted procedure: k5314 
o|contracted procedure: k5323 
o|contracted procedure: k5332 
o|contracted procedure: k5341 
o|contracted procedure: k5350 
o|contracted procedure: k5359 
o|contracted procedure: k5368 
o|contracted procedure: k5377 
o|contracted procedure: k5395 
o|contracted procedure: k5413 
o|contracted procedure: k5431 
o|contracted procedure: k5449 
o|contracted procedure: k5458 
o|contracted procedure: k5467 
o|contracted procedure: k5476 
o|contracted procedure: k5485 
o|contracted procedure: k5494 
o|contracted procedure: k5536 
o|contracted procedure: k5532 
o|contracted procedure: k5586 
o|contracted procedure: k5602 
o|contracted procedure: k5618 
o|contracted procedure: k5621 
o|contracted procedure: k5624 
o|contracted procedure: k5632 
o|contracted procedure: k5640 
o|contracted procedure: k5595 
o|contracted procedure: k5599 
o|contracted procedure: k5659 
o|contracted procedure: k5667 
o|contracted procedure: k5673 
o|contracted procedure: k5683 
o|contracted procedure: k5741 
o|contracted procedure: k5696 
o|contracted procedure: k5735 
o|contracted procedure: k5699 
o|contracted procedure: k5729 
o|contracted procedure: k5702 
o|contracted procedure: k5723 
o|contracted procedure: k5705 
o|contracted procedure: k5708 
o|contracted procedure: k5750 
o|contracted procedure: k5777 
o|contracted procedure: k5809 
o|contracted procedure: k5820 
o|contracted procedure: k5829 
o|contracted procedure: k5835 
o|contracted procedure: k5865 
o|contracted procedure: k5875 
o|contracted procedure: k5879 
o|contracted procedure: k5905 
o|contracted procedure: k5422 
o|contracted procedure: k5915 
o|contracted procedure: k5921 
o|contracted procedure: k5939 
o|contracted procedure: k5951 
o|contracted procedure: k5977 
o|contracted procedure: k5973 
o|contracted procedure: k5985 
o|contracted procedure: k6028 
o|contracted procedure: k6060 
o|contracted procedure: k6056 
o|contracted procedure: k6075 
o|contracted procedure: k6071 
o|contracted procedure: k6090 
o|contracted procedure: k6127 
o|contracted procedure: k6240 
o|contracted procedure: k6199 
o|contracted procedure: k6234 
o|contracted procedure: k6202 
o|contracted procedure: k6228 
o|contracted procedure: k6205 
o|contracted procedure: k6222 
o|contracted procedure: k6208 
o|contracted procedure: k6219 
o|contracted procedure: k6215 
o|inlining procedure: "(modules.scm:250) make-module" 
o|contracted procedure: k6522 
o|contracted procedure: k6579 
o|contracted procedure: k6528 
o|contracted procedure: k6547 
o|contracted procedure: k6573 
o|contracted procedure: k6553 
o|contracted procedure: k4682 
o|contracted procedure: k4579 
o|contracted procedure: k4591 
o|contracted procedure: k4609 
o|contracted procedure: k4617 
o|contracted procedure: k6632 
o|contracted procedure: k6636 
o|contracted procedure: k6807 
o|contracted procedure: k6851 
o|contracted procedure: k6640 
o|contracted procedure: k6644 
o|contracted procedure: k6724 
o|contracted procedure: k6729 
o|contracted procedure: k6732 
o|contracted procedure: k6738 
o|contracted procedure: k6745 
o|contracted procedure: k6762 
o|contracted procedure: k6648 
o|contracted procedure: k6628 
o|contracted procedure: k6624 
o|contracted procedure: k6659 
o|contracted procedure: k6675 
o|contracted procedure: k6720 
o|contracted procedure: k6681 
o|contracted procedure: k6689 
o|contracted procedure: k6706 
o|contracted procedure: k6696 
o|contracted procedure: k6774 
o|contracted procedure: k6777 
o|contracted procedure: k6780 
o|contracted procedure: k6788 
o|contracted procedure: k6796 
o|contracted procedure: k6863 
o|contracted procedure: k6866 
o|contracted procedure: k6869 
o|contracted procedure: k6877 
o|contracted procedure: k6885 
o|contracted procedure: k6845 
o|contracted procedure: k6815 
o|contracted procedure: k6822 
o|contracted procedure: k6833 
o|contracted procedure: k6837 
o|contracted procedure: k6904 
o|contracted procedure: k6935 
o|contracted procedure: k6921 
o|contracted procedure: k6928 
o|contracted procedure: k6963 
o|contracted procedure: k6941 
o|contracted procedure: k6956 
o|contracted procedure: k6952 
o|contracted procedure: k6948 
o|contracted procedure: k7289 
o|contracted procedure: k6972 
o|contracted procedure: k7001 
o|contracted procedure: k7030 
o|contracted procedure: k7036 
o|contracted procedure: k7056 
o|contracted procedure: k7074 
o|contracted procedure: k7082 
o|contracted procedure: k7088 
o|contracted procedure: k7100 
o|contracted procedure: k7108 
o|contracted procedure: k7114 
o|contracted procedure: k7128 
o|contracted procedure: k7124 
o|contracted procedure: k7132 
o|contracted procedure: k7153 
o|contracted procedure: k7163 
o|contracted procedure: k7167 
o|contracted procedure: k7176 
o|contracted procedure: k7186 
o|contracted procedure: k7190 
o|contracted procedure: k7218 
o|contracted procedure: k7193 
o|contracted procedure: k7214 
o|inlining procedure: "(modules.scm:376) make-module" 
o|contracted procedure: k7227 
o|contracted procedure: k7230 
o|contracted procedure: k7233 
o|contracted procedure: k7241 
o|contracted procedure: k7249 
o|contracted procedure: k7045 
o|contracted procedure: k7261 
o|contracted procedure: k7264 
o|contracted procedure: k7267 
o|contracted procedure: k7275 
o|contracted procedure: k7283 
o|contracted procedure: k7009 
o|contracted procedure: k6978 
o|contracted procedure: k6994 
o|contracted procedure: k6984 
o|contracted procedure: k7019 
o|contracted procedure: k7403 
o|contracted procedure: k7298 
o|contracted procedure: k7315 
o|contracted procedure: k7311 
o|contracted procedure: k7319 
o|contracted procedure: k7343 
o|contracted procedure: k7351 
o|contracted procedure: k7354 
o|contracted procedure: k7363 
o|inlining procedure: "(modules.scm:401) make-module" 
o|contracted procedure: k7375 
o|contracted procedure: k7378 
o|contracted procedure: k7381 
o|contracted procedure: k7389 
o|contracted procedure: k7397 
o|contracted procedure: k7418 
o|contracted procedure: k7412 
o|contracted procedure: k7443 
o|contracted procedure: k7493 
o|contracted procedure: k7446 
o|contracted procedure: k7455 
o|contracted procedure: k7482 
o|contracted procedure: k7458 
o|contracted procedure: k7496 
o|contracted procedure: k7517 
o|contracted procedure: k7536 
o|contracted procedure: k7550 
o|contracted procedure: k7557 
o|contracted procedure: k7656 
o|contracted procedure: k7594 
o|contracted procedure: k7625 
o|contracted procedure: k7637 
o|contracted procedure: k7647 
o|contracted procedure: k7651 
o|contracted procedure: k7659 
o|contracted procedure: k7682 
o|contracted procedure: k7692 
o|contracted procedure: k7696 
o|contracted procedure: k7702 
o|contracted procedure: k7711 
o|contracted procedure: k7746 
o|contracted procedure: k7769 
o|contracted procedure: k7772 
o|contracted procedure: k7794 
o|contracted procedure: k5440 
o|contracted procedure: k7823 
o|contracted procedure: k7833 
o|contracted procedure: k7837 
o|contracted procedure: k7854 
o|contracted procedure: k7857 
o|contracted procedure: k7860 
o|contracted procedure: k7868 
o|contracted procedure: k7876 
o|contracted procedure: k7740 
o|contracted procedure: k7719 
o|contracted procedure: k7722 
o|contracted procedure: k6319 
o|contracted procedure: k6331 
o|contracted procedure: k6503 
o|contracted procedure: k6337 
o|contracted procedure: k6349 
o|contracted procedure: k6358 
o|contracted procedure: k6365 
o|contracted procedure: k6495 
o|contracted procedure: k6371 
o|contracted procedure: k6384 
o|contracted procedure: k6406 
o|contracted procedure: k6410 
o|contracted procedure: k6424 
o|contracted procedure: k6470 
o|contracted procedure: k6435 
o|contracted procedure: k6452 
o|contracted procedure: k6442 
o|contracted procedure: k6466 
o|contracted procedure: k7891 
o|contracted procedure: k7901 
o|contracted procedure: k7905 
o|contracted procedure: k8024 
o|contracted procedure: k7909 
o|contracted procedure: k7918 
o|contracted procedure: k7921 
o|contracted procedure: k8018 
o|contracted procedure: k7924 
o|contracted procedure: k7930 
o|contracted procedure: k7952 
o|inlining procedure: k7955 
o|contracted procedure: k7964 
o|inlining procedure: k7955 
o|contracted procedure: k7982 
o|contracted procedure: k8004 
o|contracted procedure: k8015 
o|contracted procedure: k8027 
o|contracted procedure: k8050 
o|contracted procedure: k8076 
o|contracted procedure: k8085 
o|contracted procedure: k8088 
o|contracted procedure: k8091 
o|contracted procedure: k8099 
o|contracted procedure: k8107 
o|contracted procedure: k7526 
o|contracted procedure: k8303 
o|contracted procedure: k8322 
o|contracted procedure: k8331 
o|contracted procedure: k8359 
o|contracted procedure: k8401 
o|contracted procedure: k9169 
o|contracted procedure: k8414 
o|contracted procedure: k8420 
o|contracted procedure: k8442 
o|contracted procedure: k8460 
o|contracted procedure: k8468 
o|contracted procedure: k8482 
o|contracted procedure: k8478 
o|contracted procedure: k8491 
o|contracted procedure: k8501 
o|contracted procedure: k8505 
o|contracted procedure: k8566 
o|contracted procedure: k8508 
o|contracted procedure: k8520 
o|contracted procedure: k8524 
o|contracted procedure: k8530 
o|contracted procedure: k8542 
o|contracted procedure: k8546 
o|contracted procedure: k8558 
o|contracted procedure: k8570 
o|contracted procedure: k8592 
o|contracted procedure: k8610 
o|contracted procedure: k8622 
o|contracted procedure: k8630 
o|contracted procedure: k8644 
o|contracted procedure: k8640 
o|contracted procedure: k8653 
o|contracted procedure: k8663 
o|contracted procedure: k8667 
o|contracted procedure: k8708 
o|contracted procedure: k8670 
o|contracted procedure: k8682 
o|contracted procedure: k8690 
o|contracted procedure: k8702 
o|contracted procedure: k8749 
o|contracted procedure: k8711 
o|contracted procedure: k8723 
o|contracted procedure: k8731 
o|contracted procedure: k8743 
o|contracted procedure: k8753 
o|contracted procedure: k8775 
o|contracted procedure: k8793 
o|contracted procedure: k8805 
o|contracted procedure: k8813 
o|contracted procedure: k8816 
o|contracted procedure: k8822 
o|contracted procedure: k8836 
o|contracted procedure: k8832 
o|contracted procedure: k8845 
o|contracted procedure: k8855 
o|contracted procedure: k8859 
o|contracted procedure: k8868 
o|contracted procedure: k8890 
o|contracted procedure: k8886 
o|contracted procedure: k8871 
o|contracted procedure: k8874 
o|contracted procedure: k8882 
o|contracted procedure: k8946 
o|contracted procedure: k8896 
o|contracted procedure: k8908 
o|contracted procedure: k8924 
o|contracted procedure: k8928 
o|contracted procedure: k8920 
o|contracted procedure: k8912 
o|contracted procedure: k8940 
o|contracted procedure: k8999 
o|contracted procedure: k8949 
o|contracted procedure: k8961 
o|contracted procedure: k8977 
o|contracted procedure: k8981 
o|contracted procedure: k8973 
o|contracted procedure: k8965 
o|contracted procedure: k8993 
o|contracted procedure: k9003 
o|contracted procedure: k9025 
o|contracted procedure: k9059 
o|contracted procedure: k9066 
o|contracted procedure: k9070 
o|contracted procedure: k9073 
o|contracted procedure: k9080 
o|contracted procedure: k9083 
o|contracted procedure: k9095 
o|contracted procedure: k9098 
o|contracted procedure: k9101 
o|contracted procedure: k9109 
o|contracted procedure: k9117 
o|contracted procedure: k9129 
o|contracted procedure: k9132 
o|contracted procedure: k9135 
o|contracted procedure: k9143 
o|contracted procedure: k9151 
o|contracted procedure: k9158 
o|contracted procedure: k9195 
o|contracted procedure: k9204 
o|contracted procedure: k9207 
o|contracted procedure: k9219 
o|contracted procedure: k9229 
o|contracted procedure: k9233 
o|contracted procedure: k9256 
o|contracted procedure: k9262 
o|contracted procedure: k9286 
o|contracted procedure: k9282 
o|contracted procedure: k9272 
o|contracted procedure: k9293 
o|contracted procedure: k9329 
o|contracted procedure: k9301 
o|contracted procedure: k9325 
o|contracted procedure: k9319 
o|contracted procedure: k9307 
o|contracted procedure: k9336 
o|contracted procedure: k9390 
o|contracted procedure: k9408 
o|contracted procedure: k9415 
o|contracted procedure: k9427 
o|contracted procedure: k9449 
o|contracted procedure: k9445 
o|contracted procedure: k9430 
o|contracted procedure: k9433 
o|contracted procedure: k9441 
o|contracted procedure: k9461 
o|contracted procedure: k9483 
o|contracted procedure: k9479 
o|contracted procedure: k9464 
o|contracted procedure: k9467 
o|contracted procedure: k9475 
o|contracted procedure: k9593 
o|contracted procedure: k9508 
o|contracted procedure: k9512 
o|contracted procedure: k9519 
o|contracted procedure: k9531 
o|contracted procedure: k9553 
o|contracted procedure: k9549 
o|contracted procedure: k9534 
o|contracted procedure: k9537 
o|contracted procedure: k9545 
o|contracted procedure: k9565 
o|contracted procedure: k9587 
o|contracted procedure: k9583 
o|contracted procedure: k9568 
o|contracted procedure: k9571 
o|contracted procedure: k9579 
o|contracted procedure: k9605 
o|contracted procedure: k9615 
o|contracted procedure: k9619 
o|contracted procedure: k9628 
o|contracted procedure: k9638 
o|contracted procedure: k9642 
o|contracted procedure: k5404 
o|contracted procedure: k9660 
o|contracted procedure: k5386 
o|contracted procedure: k9675 
o|contracted procedure: k9689 
o|contracted procedure: k9693 
o|contracted procedure: k6139 
o|contracted procedure: k6161 
o|contracted procedure: k6157 
o|contracted procedure: k6172 
o|contracted procedure: k6168 
o|contracted procedure: k6182 
o|contracted procedure: k6190 
o|contracted procedure: k9743 
o|contracted procedure: k9751 
o|contracted procedure: k9760 
o|contracted procedure: k9802 
o|contracted procedure: k9808 
o|contracted procedure: k9988 
o|contracted procedure: k9817 
o|contracted procedure: k9832 
o|contracted procedure: k9984 
o|contracted procedure: k9838 
o|contracted procedure: k9844 
o|contracted procedure: k9850 
o|contracted procedure: k9980 
o|contracted procedure: k9865 
o|contracted procedure: k9976 
o|contracted procedure: k9874 
o|contracted procedure: k9891 
o|contracted procedure: k9914 
o|contracted procedure: k9920 
o|contracted procedure: k9927 
o|contracted procedure: k9941 
o|contracted procedure: k9952 
o|contracted procedure: k9970 
o|contracted procedure: k9958 
o|contracted procedure: k10004 
o|contracted procedure: k10000 
o|contracted procedure: k10024 
o|contracted procedure: k10027 
o|contracted procedure: k10039 
o|contracted procedure: k10047 
o|contracted procedure: k10050 
o|contracted procedure: k10043 
o|contracted procedure: k10062 
o|contracted procedure: k10084 
o|contracted procedure: k10080 
o|contracted procedure: k10065 
o|contracted procedure: k10068 
o|contracted procedure: k10076 
o|contracted procedure: k10113 
o|contracted procedure: k10106 
o|contracted procedure: k10102 
o|contracted procedure: k10098 
o|contracted procedure: k10122 
o|contracted procedure: k10134 
o|contracted procedure: k10137 
o|contracted procedure: k10177 
o|contracted procedure: k10143 
o|contracted procedure: k10147 
o|contracted procedure: k10160 
o|contracted procedure: k10183 
o|contracted procedure: k10189 
o|contracted procedure: k10192 
o|contracted procedure: k10196 
o|contracted procedure: k10199 
o|contracted procedure: k10212 
o|contracted procedure: k10224 
o|contracted procedure: k10242 
o|contracted procedure: k10274 
o|contracted procedure: k10247 
o|contracted procedure: k10253 
o|contracted procedure: k10260 
o|contracted procedure: k10280 
o|contracted procedure: k10289 
o|contracted procedure: k10312 
o|contracted procedure: k10325 
o|contracted procedure: k10337 
o|contracted procedure: k10340 
o|contracted procedure: k10343 
o|contracted procedure: k10351 
o|contracted procedure: k10359 
o|contracted procedure: k10371 
o|contracted procedure: k10381 
o|contracted procedure: k10385 
o|contracted procedure: k10502 
o|contracted procedure: k10476 
o|contracted procedure: k10485 
o|contracted procedure: k10495 
o|contracted procedure: k10517 
o|contracted procedure: k10525 
o|contracted procedure: k10537 
o|contracted procedure: k10540 
o|contracted procedure: k10543 
o|contracted procedure: k10551 
o|contracted procedure: k10559 
o|contracted procedure: k10571 
o|contracted procedure: k10579 
o|contracted procedure: k10591 
o|contracted procedure: k10594 
o|contracted procedure: k10597 
o|contracted procedure: k10605 
o|contracted procedure: k10613 
o|contracted procedure: k10625 
o|contracted procedure: k10633 
o|contracted procedure: k10645 
o|contracted procedure: k10648 
o|contracted procedure: k10651 
o|contracted procedure: k10659 
o|contracted procedure: k10667 
o|contracted procedure: k10679 
o|contracted procedure: k10687 
o|contracted procedure: k10699 
o|contracted procedure: k10702 
o|contracted procedure: k10705 
o|contracted procedure: k10713 
o|contracted procedure: k10721 
o|contracted procedure: k10733 
o|contracted procedure: k10741 
o|contracted procedure: k10753 
o|contracted procedure: k10756 
o|contracted procedure: k10759 
o|contracted procedure: k10767 
o|contracted procedure: k10775 
o|contracted procedure: k10787 
o|contracted procedure: k10795 
o|contracted procedure: k10807 
o|contracted procedure: k10810 
o|contracted procedure: k10813 
o|contracted procedure: k10821 
o|contracted procedure: k10829 
o|contracted procedure: k10841 
o|contracted procedure: k10849 
o|contracted procedure: k10861 
o|contracted procedure: k10864 
o|contracted procedure: k10867 
o|contracted procedure: k10875 
o|contracted procedure: k10883 
o|contracted procedure: k10895 
o|contracted procedure: k10903 
o|contracted procedure: k10915 
o|contracted procedure: k10918 
o|contracted procedure: k10921 
o|contracted procedure: k10929 
o|contracted procedure: k10937 
o|contracted procedure: k10949 
o|contracted procedure: k10957 
o|contracted procedure: k10969 
o|contracted procedure: k10972 
o|contracted procedure: k10975 
o|contracted procedure: k10983 
o|contracted procedure: k10991 
o|contracted procedure: k11003 
o|contracted procedure: k11011 
o|contracted procedure: k11023 
o|contracted procedure: k11026 
o|contracted procedure: k11029 
o|contracted procedure: k11037 
o|contracted procedure: k11045 
o|contracted procedure: k11057 
o|contracted procedure: k11065 
o|contracted procedure: k11077 
o|contracted procedure: k11080 
o|contracted procedure: k11083 
o|contracted procedure: k11091 
o|contracted procedure: k11099 
o|contracted procedure: k11111 
o|contracted procedure: k11119 
o|contracted procedure: k11131 
o|contracted procedure: k11134 
o|contracted procedure: k11137 
o|contracted procedure: k11145 
o|contracted procedure: k11153 
o|contracted procedure: k11165 
o|contracted procedure: k11173 
o|contracted procedure: k11185 
o|contracted procedure: k11188 
o|contracted procedure: k11191 
o|contracted procedure: k11199 
o|contracted procedure: k11207 
o|simplifications: ((let . 106)) 
o|removed binding forms: 610 
o|inlining procedure: "(modules.scm:120) module-sexports" 
o|inlining procedure: "(modules.scm:119) module-vexports" 
o|inlining procedure: "(modules.scm:118) module-export-list" 
o|removed side-effect free assignment to unused variable: make-module 
o|inlining procedure: "(modules.scm:160) module-saved-environments" 
o|inlining procedure: "(modules.scm:157) set-module-saved-environments!" 
o|inlining procedure: "(modules.scm:179) set-module-exist-list!" 
o|inlining procedure: "(modules.scm:178) set-module-sexports!" 
o|inlining procedure: "(modules.scm:178) module-sexports" 
o|inlining procedure: "(modules.scm:169) module-exist-list" 
o|inlining procedure: "(modules.scm:180) set-module-export-list!" 
o|inlining procedure: "(modules.scm:167) module-export-list" 
o|inlining procedure: "(modules.scm:186) module-meta-expressions" 
o|inlining procedure: "(modules.scm:207) set-module-defined-list!" 
o|inlining procedure: "(modules.scm:210) module-defined-list" 
o|inlining procedure: "(modules.scm:204) set-module-exist-list!" 
o|inlining procedure: "(modules.scm:204) module-exist-list" 
o|inlining procedure: "(modules.scm:200) module-name" 
o|inlining procedure: "(modules.scm:196) module-export-list" 
o|inlining procedure: "(modules.scm:227) set-module-defined-syntax-list!" 
o|inlining procedure: "(modules.scm:229) module-defined-syntax-list" 
o|inlining procedure: "(modules.scm:223) set-module-defined-list!" 
o|inlining procedure: "(modules.scm:226) module-defined-list" 
o|inlining procedure: "(modules.scm:217) module-name" 
o|inlining procedure: "(modules.scm:214) module-export-list" 
o|inlining procedure: "(modules.scm:233) set-module-defined-syntax-list!" 
o|inlining procedure: "(modules.scm:235) module-defined-syntax-list" 
o|substituted constant variable: iexports88212518 
o|inlining procedure: "(modules.scm:345) module-defined-syntax-list" 
o|inlining procedure: "(modules.scm:331) module-vexports" 
o|inlining procedure: "(modules.scm:330) module-iexports" 
o|inlining procedure: "(modules.scm:324) module-library" 
o|inlining procedure: "(modules.scm:323) module-name" 
o|inlining procedure: "(modules.scm:320) module-meta-expressions" 
o|inlining procedure: "(modules.scm:312) module-meta-import-forms" 
o|inlining procedure: "(modules.scm:311) module-sexports" 
o|inlining procedure: "(modules.scm:310) module-import-forms" 
o|inlining procedure: "(modules.scm:309) module-name" 
o|inlining procedure: "(modules.scm:308) module-defined-list" 
o|inlining procedure: "(modules.scm:392) set-module-saved-environments!" 
o|substituted constant variable: explist87912538 
o|inlining procedure: "(modules.scm:413) set-module-saved-environments!" 
o|inlining procedure: "(modules.scm:417) module-sexports" 
o|inlining procedure: "(modules.scm:416) module-vexports" 
o|substituted constant variable: explist87912549 
o|substituted constant variable: iexports88212552 
o|inlining procedure: "(modules.scm:428) module-exist-list" 
o|inlining procedure: "(modules.scm:427) module-export-list" 
o|inlining procedure: "(modules.scm:547) set-module-saved-environments!" 
o|inlining procedure: "(modules.scm:544) set-module-iexports!" 
o|inlining procedure: "(modules.scm:546) module-iexports" 
o|inlining procedure: "(modules.scm:543) set-module-sexports!" 
o|inlining procedure: "(modules.scm:257) module-defined-list" 
o|inlining procedure: "(modules.scm:256) module-name" 
o|inlining procedure: "(modules.scm:255) module-export-list" 
o|inlining procedure: "(modules.scm:450) module-sexports" 
o|inlining procedure: "(modules.scm:447) module-defined-syntax-list" 
o|inlining procedure: "(modules.scm:444) module-exist-list" 
o|inlining procedure: "(modules.scm:443) module-defined-list" 
o|inlining procedure: "(modules.scm:442) module-name" 
o|inlining procedure: "(modules.scm:441) module-export-list" 
o|inlining procedure: "(modules.scm:601) module-iexports" 
o|inlining procedure: "(modules.scm:600) module-sexports" 
o|inlining procedure: "(modules.scm:599) module-vexports" 
o|inlining procedure: "(modules.scm:598) module-name" 
o|inlining procedure: "(modules.scm:597) module-library" 
o|inlining procedure: "(modules.scm:596) module-name" 
o|inlining procedure: "(modules.scm:748) set-module-iexports!" 
o|inlining procedure: "(modules.scm:750) module-iexports" 
o|inlining procedure: "(modules.scm:735) set-module-exist-list!" 
o|inlining procedure: "(modules.scm:737) module-exist-list" 
o|inlining procedure: "(modules.scm:734) set-module-sexports!" 
o|inlining procedure: "(modules.scm:734) module-sexports" 
o|inlining procedure: "(modules.scm:741) set-module-export-list!" 
o|inlining procedure: "(modules.scm:744) module-export-list" 
o|inlining procedure: "(modules.scm:732) module-export-list" 
o|inlining procedure: "(modules.scm:708) module-meta-import-forms" 
o|inlining procedure: "(modules.scm:711) module-import-forms" 
o|inlining procedure: "(modules.scm:769) module-name" 
o|inlining procedure: "(modules.scm:769) module-name" 
o|inlining procedure: k6186 
o|inlining procedure: k6186 
o|inlining procedure: "(modules.scm:870) module-sexports" 
o|inlining procedure: "(modules.scm:869) module-vexports" 
o|inlining procedure: "(modules.scm:1116) module-saved-environments" 
o|replaced variables: 233 
o|removed side-effect free assignment to unused variable: module-library 
o|removed side-effect free assignment to unused variable: module-export-list 
o|removed side-effect free assignment to unused variable: set-module-export-list! 
o|removed side-effect free assignment to unused variable: module-defined-list 
o|removed side-effect free assignment to unused variable: set-module-defined-list! 
o|removed side-effect free assignment to unused variable: module-exist-list 
o|removed side-effect free assignment to unused variable: set-module-exist-list! 
o|removed side-effect free assignment to unused variable: module-defined-syntax-list 
o|removed side-effect free assignment to unused variable: set-module-defined-syntax-list! 
o|removed side-effect free assignment to unused variable: module-import-forms 
o|removed side-effect free assignment to unused variable: module-meta-import-forms 
o|removed side-effect free assignment to unused variable: module-meta-expressions 
o|removed side-effect free assignment to unused variable: module-vexports 
o|removed side-effect free assignment to unused variable: module-sexports 
o|removed side-effect free assignment to unused variable: set-module-sexports! 
o|removed side-effect free assignment to unused variable: module-iexports 
o|removed side-effect free assignment to unused variable: set-module-iexports! 
o|removed side-effect free assignment to unused variable: module-saved-environments 
o|removed side-effect free assignment to unused variable: set-module-saved-environments! 
o|replaced variables: 146 
o|removed binding forms: 139 
o|inlining procedure: k5516 
o|contracted procedure: k5636 
o|inlining procedure: k5856 
o|inlining procedure: k6012 
o|contracted procedure: k6211 
o|inlining procedure: k6915 
o|contracted procedure: k7062 
o|contracted procedure: k7304 
o|inlining procedure: k7339 
o|inlining procedure: k7814 
o|inlining procedure: k8034 
o|inlining procedure: k8389 
o|inlining procedure: k9387 
o|inlining procedure: k9494 
o|inlining procedure: k9656 
o|inlining procedure: k9671 
o|inlining procedure: k9720 
o|inlining procedure: k972011812 
o|inlining procedure: k10267 
o|inlining procedure: k10499 
o|replaced variables: 3 
o|removed binding forms: 141 
o|contracted procedure: k5508 
o|contracted procedure: k5512 
o|contracted procedure: k5803 
o|contracted procedure: k5812 
o|contracted procedure: k5909 
o|contracted procedure: k6019 
o|contracted procedure: k5981 
o|contracted procedure: k5989 
o|contracted procedure: k6100 
o|contracted procedure: k6037 
o|contracted procedure: k6064 
o|contracted procedure: k6079 
o|contracted procedure: k6117 
o|contracted procedure: k6585 
o|contracted procedure: k6588 
o|contracted procedure: k6591 
o|contracted procedure: k6594 
o|contracted procedure: k6597 
o|contracted procedure: k6896 
o|contracted procedure: k6892 
o|contracted procedure: k6848 
o|contracted procedure: k6803 
o|contracted procedure: k6666 
o|contracted procedure: k7335 
o|contracted procedure: k7427 
o|contracted procedure: k7505 
o|contracted procedure: k7508 
o|contracted procedure: k7511 
o|contracted procedure: k7514 
o|contracted procedure: k7533 
o|contracted procedure: k6249 
o|contracted procedure: k6252 
o|contracted procedure: k6255 
o|contracted procedure: k8369 
o|contracted procedure: k8373 
o|contracted procedure: k8377 
o|contracted procedure: k8381 
o|contracted procedure: k8385 
o|contracted procedure: k9370 
o|contracted procedure: k9404 
o|contracted procedure: k9505 
o|contracted procedure: k10271 
o|removed binding forms: 59 
o|replaced variables: 37 
o|removed binding forms: 18 
o|direct leaf routine/allocation: g10151016 3 
o|direct leaf routine/allocation: g31153124 0 
o|direct leaf routine/allocation: g30773086 0 
o|direct leaf routine/allocation: g30393048 0 
o|direct leaf routine/allocation: g30013010 0 
o|direct leaf routine/allocation: g29632972 0 
o|direct leaf routine/allocation: g29252934 0 
o|direct leaf routine/allocation: g28872896 0 
o|direct leaf routine/allocation: g28492858 0 
o|direct leaf routine/allocation: g28112820 0 
o|direct leaf routine/allocation: g27732782 0 
o|direct leaf routine/allocation: g27352744 0 
o|direct leaf routine/allocation: g26972706 0 
o|direct leaf routine/allocation: g26592668 0 
o|contracted procedure: "(modules.scm:1028) k10555" 
o|contracted procedure: "(modules.scm:1028) k10609" 
o|contracted procedure: "(modules.scm:1028) k10663" 
o|contracted procedure: "(modules.scm:1028) k10717" 
o|contracted procedure: "(modules.scm:1028) k10771" 
o|contracted procedure: "(modules.scm:1028) k10825" 
o|contracted procedure: "(modules.scm:1028) k10879" 
o|contracted procedure: "(modules.scm:1028) k10933" 
o|contracted procedure: "(modules.scm:1028) k10987" 
o|contracted procedure: "(modules.scm:1028) k11041" 
o|contracted procedure: "(modules.scm:1028) k11095" 
o|contracted procedure: "(modules.scm:1028) k11149" 
o|contracted procedure: "(modules.scm:1028) k11203" 
o|removed binding forms: 13 
o|direct leaf routine with hoistable closures/allocation: g9991006 (g10151016) 3 
o|contracted procedure: "(modules.scm:172) k5868" 
o|removed binding forms: 2 
o|customizable procedures: (map-loop26532678 map-loop26912716 map-loop27292754 map-loop27672792 map-loop28052830 map-loop28432868 map-loop28812906 map-loop29192944 map-loop29572982 map-loop29953020 map-loop30333058 map-loop30713096 map-loop31093134 g25952602 for-each-loop25942609 map-loop26162634 k10256 loop2558 merr2531 match-functor-argument loop22565 map-loop25342551 err2523 loop22494 k9897 loop2482 iface2472 err2471 g24562457 mrename2437 g24452446 g10911092 k6150 g22562273 for-each-loop22552283 g22662288 for-each-loop22652296 map-loop23622379 map-loop23882405 map-loop23082325 map-loop23342351 k9342 g21952202 for-each-loop21942229 map-loop21272144 map-loop21532170 tostr1813 g20872088 loop2015 g20822083 loop2024 map-loop20482065 g20362043 for-each-loop20352072 g19821983 loop1936 g19771978 loop1945 g19571964 for-each-loop19561967 g19031904 g18991900 loop1866 g18791886 for-each-loop18781889 warn1812 loop1827 module-imports1823 find-module/import-library map-loop15201538 loop1546 k7958 k7970 k7942 loop1554 g15751582 for-each-loop15741647 g11561157 g11491150 k6396 warn1122 loop21140 loop1134 map-loop16551680 g16911700 for-each-loop16901707 g15911598 for-each-loop15901602 g16221629 for-each-loop16211634 k7434 k7464 loop1491 g14491458 map-loop14431464 map-loop13201338 map-loop13481366 k7196 g13811398 for-each-loop13801404 g13911409 for-each-loop13901415 merge-se k6604 k6612 k6881 map-loop12131237 g12521261 map-loop12461279 loop1286 k6652 foldr291294 g296297 bwd1171 fwd1177 find-export module-rename delete check-for-redef for-each-loop9981018 g982983 k5759 g944945 loop935 map-loop900918 loop254) 
o|calls to known targets: 292 
o|identified direct recursive calls: f_5613 1 
o|identified direct recursive calls: f_5860 1 
o|identified direct recursive calls: f_6542 2 
o|identified direct recursive calls: f_6517 1 
o|identified direct recursive calls: f_4586 1 
o|identified direct recursive calls: f_6670 1 
o|identified direct recursive calls: f_7438 1 
o|identified direct recursive calls: f_6326 1 
o|identified direct recursive calls: f_7913 1 
o|identified direct recursive calls: f_8455 1 
o|identified direct recursive calls: f_8617 1 
o|identified direct recursive calls: f_8605 1 
o|identified direct recursive calls: f_8863 1 
o|identified direct recursive calls: f_8800 1 
o|identified direct recursive calls: f_8788 1 
o|identified direct recursive calls: f_9422 1 
o|identified direct recursive calls: f_9456 1 
o|identified direct recursive calls: f_9526 1 
o|identified direct recursive calls: f_9560 1 
o|identified direct recursive calls: f_9936 1 
o|identified direct recursive calls: f_9827 2 
o|identified direct recursive calls: f_10057 1 
o|identified direct recursive calls: f_10532 1 
o|identified direct recursive calls: f_10586 1 
o|identified direct recursive calls: f_10640 1 
o|identified direct recursive calls: f_10694 1 
o|identified direct recursive calls: f_10748 1 
o|identified direct recursive calls: f_10802 1 
o|identified direct recursive calls: f_10856 1 
o|identified direct recursive calls: f_10910 1 
o|identified direct recursive calls: f_10964 1 
o|identified direct recursive calls: f_11018 1 
o|identified direct recursive calls: f_11072 1 
o|identified direct recursive calls: f_11126 1 
o|identified direct recursive calls: f_11180 1 
o|fast box initializations: 69 
o|fast global references: 34 
o|fast global assignments: 8 
o|dropping unused closure argument: f_10234 
o|dropping unused closure argument: f_4457 
o|dropping unused closure argument: f_5913 
o|dropping unused closure argument: f_6507 
o|dropping unused closure argument: f_7425 
o|dropping unused closure argument: f_8254 
o|dropping unused closure argument: f_8284 
o|dropping unused closure argument: f_9679 
*/
/* end of file */
